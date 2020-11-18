#include <iostream>
#include <cstring>
#include <string.h>
#include <typeinfo>
using namespace std;
class employee
{
public:
    int number;       //dugaar
    char name[20];    //ner
    char level[10];   //alban tushaal
    float workedtime; // ajillasan tsag
    float cost = 250; // neg tsagiin huls
    float v = 200;    // zahirliin nemegdel tsalin
public:
    void init()
    {
        number = 0;
        strcpy(name, ""); //strcpy
        strcpy(level, "ajilchin");
        workedtime = 0;
    } // garaanii utga onooh
    void get()
    {
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
        }
    } // garaas utga awah
    void display()
    {
        cout << "Dugaar: " << number << endl;
        cout << "Ner: " << name << endl;
        cout << "Alban tushaal: " << level << endl;
        cout << "Ajillasan tsag: " << workedtime << endl;
    } // medeelel delgetsleh
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

int main()
{
    int limit = 10, size = 0;
    employee e[limit];
    while (true)
    {
        cout << "(1.shineer ajilchin uusgeh, 2.Medeelel delgetsleh, 3.Tsalin bodoh, 4.Ajillasan tsag nemeh, 5.Garah)" << endl;
        int x, number; // sprintf
        cin >> x;
        switch (x)
        {
        case 1:
        {
            cout << "Heden ajilchin oruulahaa bichne uu: " << endl;
            cin >> size;
            int result = strcmp(typeid(size).name(), "i");
            if (result == 0)
            {
                if (size < limit)
                {
                    for (int i = 0; i < size; i++)
                    {
                        e[i].init();
                        cout << i + 1 << "  dugaar ajiltnii medeelel oruulna uu:" << endl;
                        e[i].get();
                    }
                }
            }
            break;
        };
        case 2:
        {
            if (size > 0)
            {
                for (int i = 0; i < size; i++)
                {
                    e[i].display();
                }
            }
            else
            {
                cout << "Ajiltnii medeelel baihgui bna!" << endl;
            }
            break;
        };
        case 3: // tsalin bodoh       size bol ajiltnii too
        {
            cout << "Ajiltnii dugaariig oruulna uu:" << endl;
            cin >> number;
            if (number <= size && number >= 0)
            {
                float a = e[number - 1].calculate();
                cout << "Tsalin: " << a << "$" << endl;
            }
            else
            {
                cout << number << "-dugaar ajiltnii medeelel oldsongui!" << endl;
            }
            break;
        };
        case 4: //ajillasan tsag nemeh
        {
            cout << "Ajiltnii dugaariig oruulna uu: ";
            cin >> number;
            if (number <= size && number >= 0)
            {
                cout << "Nemeh tsagaa oruulna uu: ";
                int time;
                cin >> time;
                while (!e[number - 1].sum(time))
                {
                    cout << "0-24 hoorond utga oruulna uu! " << endl;
                    cin >> time;
                }
                cout << "Amjilttai nemlee" << endl;
            }
            else
            {
                cout << number << "-dugaar ajiltnii medeelel oldsongui!" << endl;
            }
            break;
        }
        default:
        {
            return 0;
        };
        };
    };
}
