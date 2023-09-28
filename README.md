# Ceph

Ceph can be used to provide Ceph Object Storage to Cloud Platforms and Ceph can be used to provide Ceph Block Device services to Cloud Platforms.
Ceph can be used to deploy a Ceph File System. All Ceph Storage Cluster deployments begin with setting up each Ceph Node and then setting up the network.

A Ceph Storage Cluster requires the following:

- at least one Ceph Monitor and at least one Ceph Manager
- at least as many Ceph OSDs as there are copies of an object stored on the Ceph cluster
  (for example, if three copies of a given object are stored on the Ceph cluster, then at least three OSDs must exist in that Ceph cluster).

## Architecture

The Ceph Storage Cluster is the foundation for all Ceph deployments. Based upon RADOS, Ceph Storage Clusters consist of several types of daemons:

- a Ceph OSD Daemon (OSD) stores data as objects on a storage node
- a Ceph Monitor (MON) maintains a master copy of the cluster map.
- a Ceph Manager manager daemon

A Ceph Storage Cluster might contain thousands of storage nodes. A minimal system has at least one Ceph Monitor and two Ceph OSD Daemons for data replication.
The Ceph File System, Ceph Object Storage and Ceph Block Devices read data from and write data to the Ceph Storage Cluster.

[](https://access.redhat.com/webassets/avalon/d/Red_Hat_Ceph_Storage-5-Developer_Guide-en-US/images/7dcdbc34ed0fba01faab0006ee8841a3/RESTful_access.png)

## OSD

```ceph-osd``` is the object storage daemon. It is responsible for storing objects on a local file system and providing access to them over the network.

## RADOS

RADOS is an object storage system layer that provides a data durability and availability framework that all user-facing Ceph services are layered atop.
RADOS is highly available with no single point of failure (SPoF) reliable and resilient.

## Cephadm

Cephadm installs and manages a Ceph cluster that uses containers and systemd and is tightly integrated with the CLI and dashboard GUI.

## Resources

- [docs.ceph.com](https://docs.ceph.com/en/latest/)
- [docs.ceph.com/install](https://docs.ceph.com/en/latest/install/)
- [docs.ceph.com/rados](https://docs.ceph.com/en/latest/rados/)
- [docs.ceph.com/conf](https://docs.ceph.com/en/latest/rados/configuration/ceph-conf/)
