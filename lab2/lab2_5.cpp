#include <iostream>
using namespace std;
void swap(int *x,int *y) // 2 haygan huwisagch parametertei awdag function
{
    int t;    // temp
     t   = *x; // num1 iin utgiig t huwisagchid onooj bna
    *x   = *y; // num2 iin utgiig num1 utgaar solij bna
    *y   =  t; // num1 iin utgiig num2 utgaar solij bna
}

int main()
{
    int num1,num2;

    printf("num1: ");
    scanf("%d",&num1);
    printf("num2: ");
    scanf("%d",&num2);


    printf("Utgiig solihoos umnu: num1: %d, num2: %d\n",num1,num2);
    swap(&num1,&num2);
    printf("Utgiig solisonii daraa: num1: %d, num2: %d\n",num1,num2);

    return 0;
}
