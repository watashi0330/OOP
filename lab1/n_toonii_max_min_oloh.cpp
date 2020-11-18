#include <iostream>
using namespace std;
struct maxMin {
	int max, min;
};

maxMin max_min(int *arr,int length){
	maxMin s;
	s.max=arr[0], s.min=arr[0]; // max, min garaanii utga onooj bna
	for(int i=1; i<length; i++){ // husnegtiin utguudiig max, min-tai jishin max-aas ih bol max-d tuhain utgiig onoono, 
		if(arr[i]>=s.max){
			s.max = arr[i];
		}
		if(arr[i]<s.min){   //min-aas baga bol min-d tuhain utgiig onoono
			s.min = arr[i];
		}
	}
	return s;
}
int main(){
	int length;
	cout<<"N shirheg toog oruulna uu:";
	cin>>length;
	int *arr = new int(length); // dynamic sanah oi husnegtiin urtad taaruulan nuutsulj bna
	for(int i=0; i<length;i++){ // husnegted utga onooj bna
		cin>>arr[i];
	}
	maxMin result;
	result = max_min(arr,length); //husnegtiin urtiig max_min function-ruu damjuulj bna
	cout<<"Max is: "<<result.max<<endl<<"Min is: "<<result.min;
}
