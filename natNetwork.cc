#include "natNetwork.h"

natNetwork::natNetwork(string nameNetwork, string domainNetwork, string *instances, int len)
{
    c = new component();
    c->listNatNetworks();
    c->createNatNetwork(nameNetwork, domainNetwork);
    c->startDHCPAndService(nameNetwork);
    c->addInstances(nameNetwork, instances, len);
}