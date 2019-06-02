FROM php:7.2-fpm
 
RUN echo "${SERVER_TIMEZONE}" > /etc/timezone && \
	dpkg-reconfigure -f noninteractive tzdata && \
	echo "date.timezone = ${SERVER_TIMEZONE}" > /usr/local/etc/php/php.ini && \
	echo "short_open_tag = off" >> /usr/local/etc/php/php.ini && \
	echo "log_errors = yes" >> /usr/local/etc/php/php.ini && \
	echo "error_log = /var/log/php/error.log" >> /usr/local/etc/php/php.ini && \
	echo "display_errors = no" >> /usr/local/etc/php/php.ini && \
	echo "catch_workers_output = yes" >> /usr/local/etc/php/php.ini && \
	apt-get -qq update && \
    apt-get install -y \
    libpq-dev \
    libmcrypt-dev \
    libpcre3-dev \
    libicu-dev \
    libmemcached-dev \
    vim \
    git \
    zlib1g \
    zlib1g-dev \
    libfreetype6-dev \
    libjpeg62-turbo-dev \
    libpng-dev \
    && \
	docker-php-ext-install opcache pdo pdo_pgsql pdo_mysql gd intl zip && \
	docker-php-ext-install -j$(nproc) iconv && \
	docker-php-ext-configure gd --with-freetype-dir=/usr/include/ --with-jpeg-dir=/usr/include/ --with-png-dir=/usr/include/  && \
    docker-php-ext-install -j$(nproc) gd && \
	curl -sS https://getcomposer.org/installer | php -- --install-dir=/usr/local/bin --filename=composer