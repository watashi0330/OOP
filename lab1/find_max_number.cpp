#include <iostream>
using namespace std;
int findMax(int a, int b, int c){
	if(a<=c&&b<=c){	// c-g hamgiin ih esehiig shalgana, tiim bol c-g butsaana
		return c;
	}else if(a>=b&&a>=c){   // a-g hamgiin ih esehiig shalgana, tiim bol a-g butsaana
		return a;
	}else{
		return b;  // deerh 2 nuhtsul hudal bol b-g butsaana
	}
}
int main(){
	int a,b,c;
	cout<<"Enter 3 number:\n";
	cin>>a>>b>>c; //jishih 3 utgaa garaas awna
	int output = findMax(a,b,c); // findMax function-iin butsah utgiig output-d hadgalna
	cout<<"\nMax is: "<<output; // output-iin utgiig delgetslene
	
}
