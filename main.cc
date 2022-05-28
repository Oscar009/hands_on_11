#include <iostream>
#include <bits/stdc++.h>
#include <string>

#include "natNetwork.h"

using namespace std;

int main(int argc, char *argv[])
{
    string *instances;
    int i = 1;
    while (*(argv + i))
    {
        i++;
        if (!(*(argv + i)))
        {
            instances = new string[i - 2];

            int aux = 0;
            for (int j = i - 1; j >= 3; j--)
            {
                instances[aux++] = *(argv + j);
            }
        }
    }

    natNetwork(*(argv + 1), *(argv + 2), instances, i - 3);

    return 0;
}