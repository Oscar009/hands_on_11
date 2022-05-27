#include <iostream>
#include <bits/stdc++.h>
#include <string>

#include "natNetwork.h"

int main(int argc, char *argv[])
{   
    int i = 1;
    while(*(argv + i)){
        std::string aux = *(argv + i);
        std::cout << aux;
        i++;
    }

    natNetwork();
    
    return 0;
}