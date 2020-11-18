#ifndef HEADER_FILE
#define HEADER_FILE
#include <iostream>
#include <iomanip>
#include <cstring>
#include <string.h>
#include <typeinfo>
#include <algorithm>
using namespace std;
class employee
{
private:
    int number; //dugaar
    char *name; //ner
    //name = new char[20];
    char *level; //alban tushaal
    //level = new char[10];
    float workedtime;   // ajillasan tsag
    float cost = 7000;   // neg tsagiin huls
    float v = 7200;      // zahirliin nemegdel tsalin
    float calculate1(); // zahirliin tsalin bodoh
public:
    employee();         //anhdagch baiguulagch function
    employee(const employee &e);    //huulagch baiguulagch function
    void get(int id);         // garaas medeelel awah
    float getWorkedTime(); //Ajillasan tsag awah
    float getSalary();  // Bodogdson tsalin awah
    int getID();          // ID awah
    void display();     // ajilchdiin medeelel delgetsleh
    float calculate();  // tsalin bodoh
    bool sum(int time); // nemeh tsalingiin utga 0-24 hoorond baival true, ugui bol false butsaana
    ~employee();        //ustgagch function
    
    char getName();         // objectiing neriig awah
    employee& operator=(employee &e);   //= operator dahin todorhoiloh
};

employee::employee()  // anhdagch baiguulagch function objectiin garaanii utguudiig onoono
{
    number = 0;
    name = new char[20];
    strcpy(name, ""); //strcpy
    level = new char[10];
    strcpy(level, "ajilchin");
    workedtime = 0;
  
} // garaanii utga onoono
employee::employee(const employee &e){      //huulagch baiguulagch function
    number = e.number;                      //parametreer orj irsen objectiin utguudiig shine oi belden huulna
    name = new char[strlen(e.name)+1];      //haygan huwisagchiin utgiig shine oi belden onoono
    strcpy(name, e.name);
    level = new char[strlen(e.name)+1];
    strcpy(level, e.level);
    workedtime = e.workedtime;
}
employee::~employee() // uusgesen objectuudiig ustgana
{
    delete [] name;         
    delete [] level;
    //cout << "Destroyer called" << endl;
}
void employee::get(int id)      // parametreer id awch baigaa n ajilchnii id-g davhtsah esehiig shalgahiin tuld
{                               //objectiin gadna id utgiig busad objectuudiin id-tai shalgan ashiglah uchir
    this->number = id;
        cout << "Neree oruulna uu: ";
        cin >> name;
        cout << "Alban tushaal: ";
        cin >> level;
        cout << "Ajillasan tsag: ";
        cin >> workedtime;
    // garaas utga awah
}
float employee::getWorkedTime() {
    return workedtime;
}
float employee::getSalary() {
    return calculate();
}
char employee::getName() {
    return *name;
}
void employee::display()
{
    cout << endl
         << setw(8) << number;
    cout << setw(20) << name;
    cout << setw(12) << level;
    cout << setw(12) << workedtime;
    cout << setw(12) << getSalary();
} // medeelel delgetsleh
void heading()
{
    cout << endl;
    cout << setw(8) << "ID";
    cout << setw(20) << "Name";
    cout << setw(12) << "Position";
    cout << setw(12) << "WorkedTime";
    cout << setw(12) << "Salary";
}
float employee::calculate()
{
    int result = strcmp(level, "zahiral"); // herev zahiral bol calculate1() function-iig duudaj ajillasan tsalin deer nemne
    if (result == 0)
    {
        return workedtime * cost + calculate1();
    }
    else
    {
        return workedtime * cost;
    }
}; // tsalin bodoh
float employee::calculate1()
{
    return v;           
}; // zahirliin tsalin bodoh
bool employee::sum(int time)
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
int employee::getID(){
    return number;
}
void swap(employee &a, employee &b) //hoer objectiin utguudiig solih uildel operator bolon huulagch baiguulagch functiontoi uchir 
                                    //= uildeld aldaa garahgui
{
    employee temp = a;
    a = b;
    b = temp;
}

// A function to implement bubble sort
void sortByWorkedHour(employee employee_arr[], int size)        // ajilchdiig ajillasan tsagaar n bubblesort ashiglan erembelne
{                                                           
    int i, j;
    for (i = 0; i < size - 1; i++)
        for (j = 0; j < size - i - 1; j++)
            if (employee_arr[j].getWorkedTime() < employee_arr[j + 1].getWorkedTime())  //buurahaar erembelne. Hamgiin ehend hamgiin ih ajillasan ajiltan bna
                swap(employee_arr[j], employee_arr[j + 1]);
}
void sortByName(employee employee_arr[], int size){         // ajilchdiig nereer n bubblesort ashiglan erembelne
     int i, j;
    for (i = 0; i < size - 1; i++)
        for (j = 0; j < size - i - 1; j++)
            if (employee_arr[j].getName() > employee_arr[j + 1].getName())
                swap(employee_arr[j], employee_arr[j + 1]);
}
employee& employee::operator=(employee &e){     //= operatoriig dahin todorhoilsnoor neg objectiig ustgasnaar nuguu objectiin haygan huwisagchiin utga heweer uldene
    if(this==&e)    // herew o1 = o1 uildel baival uuriig n butsaana
        return(*this);  
    delete[] name;      // odoogiin haygan huwisagchiin utgiig ustgana
    delete[] level;
    number = e.number;
    name = new char[strlen(e.name)+1];  //shineer sanah oid oi beldene
    strcpy(name, e.name);               //parametreer orj irsen objectiing name-iig huulna
    level = new char[strlen(e.level)+1];//shineer sanah oi beldene
    strcpy(level, e.level);             //parametreer orj irsen objectiing level-iig huulna
    workedtime = e.workedtime;
}
#endif
