#ifndef component_h
#define component_h

#include <iostream>
#include <string>

using namespace std;

class component
{

public:
    component();

    //metodos

    void listNatNetworks();
    void createNatNetwork(string, string);
    void startDHCPAndService(string);
    void addInstances(string, string*, int);
};

#endif