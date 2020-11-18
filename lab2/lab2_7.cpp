#include <iostream>
using namespace std;
void swap(int &x, int &y){
	int t = x;
	x = y;
	y = t;
}
int main(){
	int x=19, y=59;
	int &r1 = x;   // x iin haygiig r1 n hamt ezemshine
	int &r2 = y; // y iin haygiig r2 n hamt ezemshine
	cout<<r1<<endl<<r2<<endl; // swap hiihiin umnu x bolon y iin utgiig hewlej bna
	swap(r1, r2); // swap function-iin parametert zaaltan huwisagchdiig damjuulj bna
	cout<<x<<endl<<y<<endl; // swap hiigdsen ur dung hewlej bna

}
