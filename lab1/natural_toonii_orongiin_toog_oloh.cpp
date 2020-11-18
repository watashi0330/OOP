#include <iostream>
using namespace std;
void orongiin_too(int n){
	int	count = 0;   //orongiin toog hadgalah huwisagch
	cout<<"Tsipruud n:";
	while(n!=0){  // oroltiin utgiig 0 hurtel 10t huwaan orong tooloh buguud mun tsipruudiig davhar hewlene
		count++;
		cout<<n%10<<" ";
		n /= 10;
	}
	cout<<"\nOrongiin too n:"<<count; // davtalt duussanii daraa orongiin too todorhoi bolno
}
int main(){
	cout<<"Natural too oruulna uu:";
	int n;
	cin>>n;
	orongiin_too(n);
	
}
