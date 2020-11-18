#include "lab4.h"
using namespace std;


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
