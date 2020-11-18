#include <iostream>
using namespace std;
int even(int *arr, int length){ //parametertei husnegtiin urtiig awna
	int count = 0;
	for(int i=0; i<length;i++){
		if(arr[i]%2==0){
			count++;
		}
	}
	delete [] arr; // nuutsulsun sanah oig ustgana
	return count; // davtalt duussanii daraa count-iig butsaana
}
int main(){
	int length;
	cout<<"Husnegtiin urtiig oruulna uu:";
	cin>>length;
	int *arr = new int(length);    // husnegtiin urtiig ashiglan dynamic sanah oi beldej bna
	for(int i=0; i<length; i++){
		cin>>arr[i];
	}
	cout<<"Tegsh elementiin too:"<<even(arr, length); 
}
