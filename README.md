# Create Nat Network for VirtualBox commands through c++

## To compile

Use archives that already exists.

```
g++ component.cc main.cc natNetwork.cc -o a.out
```

## To run

Fill in the fields for the Nat Network configuration.

./a.out \[nameNatNetwork\] \[domainNatNetwork\] \[listInstancesToAddNatNetwork\]

Instances will be separated by space and there must already exists.

For example:
```
./a.out NATNetwork101 192.168.10.0/24 Ubuntu Ubuntu_linux
```
