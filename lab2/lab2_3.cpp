#include <iostream>
using namespace std;
main(){
	int a = 125; // a huwisagchid 125 gesen utga onooj bna
	int *p= &a; // p haygan huwisagchid a-giin sanah oin haygiig onooj bna
	cout << p <<endl; // p haygan huwisagchiin utgiig hewlene. Ene ni a huwisagchiin sanah oin hayg bna.
	cout << *p<<endl; // p haygan huwisagchaar damjuulan a giin utgiig hewlej bna.
	p++;		// p-giin utgiig negeer nemegduulne. 
	cout << p<<endl; // sanah oin neg uur algassan bna
	cout <<*p<<endl; // tuhain sanah oid baigaa utgiig hewlej bna.
}
