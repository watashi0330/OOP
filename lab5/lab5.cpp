#include "lab5.h"
#include <iostream>
//#include <conio.h>
using namespace std;
//int limit = 10;
//int size = 0;
int checkID(int num){
    return num;
}
int main()
{

    int size = 0, limit = 10;
    employee *ptr = new employee[limit];
    while (true)
    {
        cout << endl
             << "(1.shineer ajilchin uusgeh, 2.Medeelel delgetsleh, 3.Tsalin bodoh, 4.Ajillasan tsag nemeh, 5.Erembeleh, 6.Garah)" << endl;
        int x, id; // sprintf
        cin >> x;
        switch (x)
        {
        case 1:
        {
            /* cout << "Heden ajilchin oruulahaa bichne uu: " << endl;
            int s; // nemj heden ajiltan oruulahiig hadgalna
            cin >> s;
            int i = size; // odoogiin husnegted baigaa ajiltnii araas nemegdej oroh ajiltan
            size += s;    // odoogiin ajiltanii toon deer nemj ajiltan oruulj bgaa
            int result = strcmp(typeid(size).name(), "i"); */
            cout << "ID-aa oruulna uu: ";
            cin >> id;    // 
            bool checkID = true;
            for(int i= 0; i<size; i++){     //garaas awsan id burtgeltei esehiig shalgan burtgelgui bol busad medeelliig burtgene
                    if((ptr+i)->getID()==id){
                        cout<<id<<" ID-tai hereglegch burtgeltei bna! "<<endl;
                        checkID = false;
                        break;
                    }
            }
            if(checkID){
                (ptr+size)->get(id);
                size++;
                cout << endl
                         << "************"
                         << "     Amjilttai hadgallaa     "
                         << "************" << endl;
            }
            break;
        };
        case 2:         // Medeelel delgetslene
        {
            if (size > 0)
            {

                heading();
                for (int i = 0; i < size; i++)
                {
                    //e[i].display();
                    (ptr + i)->display();
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
            cout << "Ajiltnii ID-g oruulna uu:" << endl;
            cin >> id;
                bool checkID = false;
                //float a = e[number - 1].calculate();
                for(int i=0; i<size; i++){          // ajilchnii id-g hadgalagdsan id-nuudaas hain taarch baival tsaling bodoh calculate() function-iig duudna
                    if((ptr+i)->getID()==id){
                        cout<<"Tsalin: "<<(ptr+i)->calculate()<<"$"<<endl;
                        checkID = true;
                        break;
                    }
                }
                if(!checkID){
                    cout << id << "-IDtai ajiltnii medeelel oldsongui!" << endl;
                }
                
            
            break;
        };
        case 4: //ajillasan tsag nemeh
        {
            cout << "Ajiltnii ID-g oruulna uu: ";
            cin >> id;
            bool checkID = false;       //id davhtssan esehiig shalgah huwisagch
            for(int i=0; i<size; i++){      // hadgalagdsan objectiin id-g odoo oruulah gj bui id-tai neg burchlen shalgana
                if((ptr+i)->getID()==id){   // herew id taarch baiwal tuhain id-d hargalzah objectiin ajillasan tsagiig nemne
                    checkID = true;
                    cout<< "Nemeh tsagaa oruulna uu: ";
                    int time;
                    cin >> time;
                    while(!(ptr+i)->sum(time)){
                        cout<<"0-24 hoorond utga oruulna uu"<<endl;
                        cin >> time;
                    }
                    cout << endl
                         << "************"
                         << "     Amjilttai nemlee     "
                         << "************" << endl;
                    break;
                }
            }
            if(!checkID){
                cout << id << "-IDtai ajiltnii medeelel oldsongui!" << endl;
            }
            break;
        }
        case 5: { // Erembeleh
            cout<< "Tsalingaar erembeleh bol 1, Nereer erembeleh bol 2"<<endl;
            int sorting;
            cin>>sorting;
            if(sorting==1){
            sortByWorkedHour(ptr, size);
            cout << "Ajilchdiig tsalingaar erembelj haruulaw: " << endl;
            if (size > 0)
            {
                heading();
                for (int i = 0; i <size; i++)
                {
                    //e[i].display();
                    (ptr + i)->display(); //erembelegdsen objectiig delgetslene
                }
            }
            else
            {
                cout << "Ajiltnii medeelel baihgui bna!" << endl;
            }
            }else{
                sortByName(ptr, size);
                cout << "Ajilchdiig nereer erembelj haruulaw: " << endl;
            if (size > 0)
            {
                heading();
                for (int i = 0; i <size; i++)
                {
                    //e[i].display();
                    (ptr + i)->display();   //erembelegdsen objectiig delgetslene
                }
            }
            else
            {
                cout << "Ajiltnii medeelel baihgui bna!" << endl;
            }
            }
            break;
        }
        default:
        {
            return 0;
        }
        }
    }
    delete [] ptr;      //undsen medeelel hadgalah objecton array-iig ustgana
}
