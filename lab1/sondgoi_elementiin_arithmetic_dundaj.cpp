#include <iostream>
using namespace std;
void arith(int *arr,int length){

	float count=0, sum=0;
	for(int i=0; i<length;i++){ 
		if(arr[i]%2==1){
			count++;
			sum += arr[i];
		}
	}
	float medium;   // arithmetic dundaj n butarhai too baij boloh uchir float ugugdliin turul bna
	medium = sum/count;  // davtalt duussanii daraa dundajiig olno
	cout<<"Sondgoi elementiin arithmetic dundaj:"<<medium;
	delete [] arr;  // nuutsulsun sanah oig ustgana
}
int main(){
	int length;
	cout<<"Husnegtiin urtiig oruulna uu:";
	cin>>length;
	int *arr = new int(length);  // husnegtiin urtad taaruulan dynamic sanah oi nuutsulj bna
	for(int i=0; i<length; i++){
		cin>>arr[i];
	}
	arith(arr,length);
	
}
