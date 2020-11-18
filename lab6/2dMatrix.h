#ifndef HEADER_FILE
#define HEADER_FILE
#include<iostream>
using namespace std;
class Matrix{
    private:
        int i, j ;          // j-baganiin too, i-muriin too
        float array[5][5];
    public:
        Matrix(int i = 1,int j=1);
        void set(int i , int j,float *ptr);
        float[][] get();
};
Matrix::Matrix(int i = 1, int j=1){
    set(arr[][], i, j);
}
void Matrix::set(float arr[][], int i, int j){
    for(int m = 0; m<j; m++){
        for(int n =0 ; n<i; n++){
            array[n][m]=arr[n][m];
        }
    }
}
float[][] Matrix::get(){

}



































#endif