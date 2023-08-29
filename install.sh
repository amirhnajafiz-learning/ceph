#!/usr/bin/env bash

# clone into base repository
git clone https://github.com/amirhnajafiz/do-scripts.git

# update name
mv ./do-scripts .do/

# give permission
chmod -R +x .do/
