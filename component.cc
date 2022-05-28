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
