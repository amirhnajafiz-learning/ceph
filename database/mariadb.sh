#!/usr/bin/env bash

password=$1;
host=$2;
user=$3;

mysql -u $user --password=$password -h $host -P 6033;
