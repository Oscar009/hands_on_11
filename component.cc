#include "component.h"

component::component()
{
    cout << "Starting the Nat Network configuration" << endl;
    int delay = 2;

    delay *= CLOCKS_PER_SEC;

    clock_t now = clock();

    while (clock() - now < delay)
        ;
}

void component::listNatNetworks()
{
    cout << "Listing Nat Networks... " << endl;
    int delay = 2;

    delay *= CLOCKS_PER_SEC;

    clock_t now = clock();

    while (clock() - now < delay)
        ;
    string str = "VBoxManage list natnetworks";
    const char *command = str.c_str();
    system(command);
}

void component::createNatNetwork(string nameNetwork, string domainNetwork)
{
    cout << "Creating Nat Network... " << endl;
    int delay = 3;

    delay *= CLOCKS_PER_SEC;

    clock_t now = clock();

    while (clock() - now < delay)
        ;
    string str = "VBoxManage natnetwork add --netname " + nameNetwork + " --network " + domainNetwork + " --enable";
    const char *command = str.c_str();
    system(command);
}

void component::startDHCPAndService(string nameNetwork)
{
    cout << "Starting Nat Network DHCP... " << endl;
    int delay = 3;

    delay *= CLOCKS_PER_SEC;

    clock_t now = clock();

    while (clock() - now < delay)
        ;
    string str = "VBoxManage natnetwork modify --netname " + nameNetwork + " --dhcp on";
    const char *command = str.c_str();
    system(command);

    cout << "Start Nat Network service... " << endl;
    delay = 2;

    delay *= CLOCKS_PER_SEC;

    clock_t now1 = clock();

    while (clock() - now1< delay)
        ;
    string str1 = "VBoxManage natnetwork start --netname " + nameNetwork;
    const char *command1 = str1.c_str();
    system(command1);
}

void component::addInstances(string nameNetwork, string *instances, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "Adding instance: " << *(instances + i) << endl;
        int delay = 2;

        delay *= CLOCKS_PER_SEC;

        clock_t now = clock();

        while (clock() - now < delay)
            ;
        string str = "VBoxManage modifyvm " + *(instances + i) + " --nic1 natnetwork --nat-network1 " + nameNetwork;
        const char *command = str.c_str();
        system(command);
    }
}
