#!/usr/bin/env bash
#!/bin/bash

echo 'Updating SSH keys from the host environment...'
sudo cp -r /home/vagrant/mapped/.ssh/* ~/.ssh/
sudo chmod 600 ~/.ssh/id_rsa ~/.ssh/id_rsa.pub
