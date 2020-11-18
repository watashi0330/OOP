#ifndef HEADER_FILE
#define HEADER_FILE
#include <iostream>
#include <cstring>
#include <string.h>
#include <typeinfo>
using namespace std;
class employee
{
public:
    int number;       //dugaar
    char *name;    //ner
    char level[10];   //alban tushaal
    float workedtime; // ajillasan tsag
    float cost = 250; // neg tsagiin huls
    float v = 200;    // zahirliin nemegdel tsalin
public:
    void init();
    void get();
    void display();
   
    float calculate()
    {
        int result = strcmp(level, "zahiral");
        if (result == 0)
        {
            return workedtime * cost + calculate1();
        }
        else
        {
            return workedtime * cost;
        }
    }; // tsalin bodoh
    float calculate1()
    {
        return v;
    }; // zahirliin tsalin bodoh
    bool sum(int time)
    {
        if (time >= 0 && time <= 24)
        {
            workedtime += time;
            //cout << workedtime;
            return true;
        }
        else
        {
            return false;
        }
    }; //ajillasan tsag 0-24 hoorond baival 1, ugui bol 0 butsaana.
};
void employee::init(){
        number = 0;
        strcpy(name, ""); //strcpy
        strcpy(level, "ajilchin");
        workedtime = 0;
    } // garaanii utga onooh
void employee::get(){
        cout << "Dugaaraa oruulna uu: ";
        cin >> number;
        int result = strcmp(typeid(number).name(), "i");
        if (result == 0)
        {
            cout << "Neree oruulna uu: ";
            cin >> name;
            cout << "Alban tushaal: ";
            cin >> level;
            cout << "Ajillasan tsag: ";
            cin >> workedtime;
        }
        else
        {
            cout << "kkk";
        } // garaas utga awah
}
void employee::
#endif