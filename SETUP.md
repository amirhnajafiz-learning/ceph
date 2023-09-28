# Setup

In this guide we are going to setup ```Ceph``` cluster with ```Docker```. One container image for Monitor, OSD, MDS, and Radosgw.

## docker compose

```shell
# up monitor and manager
docker-compose up -d mon1 mgr
# up all Object Storage Daemon
docker-compose up -d osd1 osd2 osd3
# up RADOS Gateway
docker-compose up -d rgw1
# up Metadata Server
docker-compose up -d mds1
# enable manager dashboard module
docker-compose exec mon1 ceph mgr module enable dashboard
```
