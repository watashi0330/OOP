#include <iostream>
using namespace std;
int main(){
	int numbers[5]; // 5 urttai numbers gesen int turliin utga hadgalah husnegt zarlaj bna
	int *p; // p gesen haygan huwisagch zarlaj bna
	p = numbers; *p = 10; // haygan huwisagchiin utgad husnegtiin ehnii sanah oin utgiig hiij, husnegtiin ehnii utgad 10 gesen utga onooj bna
	p++; *p = 20;	// haygan huwisagchiin utgad husnegtiin 2 dahi elementiin sanah oin utgiig hiij, 2 dahi elemented haygan huwisagchaar damjuulan 20 gesen utga onooj bna
	p = &numbers[2]; *p = 30; // haygan huwisagchiin utgad husnegtiin 3 dahi elementiin sanah oin utgiig hiij, 3 dahi elemented haygan huwisagchaar damjuulan 30 gesen utga onooj bna
	p = numbers + 3; *p = 40; //haygan huwisagchiin utgad husnegtiin 4 dahi elementiin sanah oin utgiig hiij, 4 dahi elemented haygan huwisagchaar damjuulan 40 gesen utga onooj bna
	p = numbers; *(p+4) = 50;//ehnii sanah oin utgiig haygan huwisagchid hiij, 5 dahi elemented 50 gesen utga onooj bna
	for(int n=0; n<5; n++)
		cout << numbers[n] << ", "; //husnegtiin utguudiig for loop ashiglan hewlej bna
}
