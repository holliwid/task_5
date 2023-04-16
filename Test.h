#include <iostream>
#pragma once
using namespace std;

class Test{
    public:
        static int nCount;
        int nObject;
        Test(){
            nObject = -100;
            cout << "Я создался" << endl;
            nCount++;
            nObject++;
            cout << "конструктор nCount: " << nCount << " | " << nObject << endl;
        }

        Test(int number){
            nObject = number;
            cout << "Я создался" << endl;
            nCount++;
            nObject++;
            cout << "конструктор nCount: " << nCount << " | " << nObject << endl;
        }

        ~Test(){
            cout << "Я уничтожился" << endl;
            nCount--;
            cout << "десктруктор nCount: " << nCount << " | " << nObject << endl;
        }
};

// int Test::nObject;