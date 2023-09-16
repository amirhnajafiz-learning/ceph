# Ceph

Ceph can be used to provide Ceph Object Storage to Cloud Platforms and Ceph can be used to provide Ceph Block Device services to Cloud Platforms.
Ceph can be used to deploy a Ceph File System. All Ceph Storage Cluster deployments begin with setting up each Ceph Node and then setting up the network.

A Ceph Storage Cluster requires the following: at least one Ceph Monitor and at least one Ceph Manager, and at least as many Ceph OSDs as there are copies
of an object stored on the Ceph cluster (for example, if three copies of a given object are stored on the Ceph cluster,
then at least three OSDs must exist in that Ceph cluster).
