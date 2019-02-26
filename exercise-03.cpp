/*
Nama Program: exercise-03.cpp
Nama        : Asep Budiyana M
NPM         : 140810180029
Tanggal Buat: 26/02/2019
Deskripsi   : swap!
*/
#include <iostream>
using namespace std;

void tukar(int& satu,int& dua){
    int temp;
    temp = satu;
    satu = dua;
    dua = temp;
}

int main(){
    int a,b;
    cout<<"A = ";cin>>a;
    cout<<"B = ";cin>>b;
    tukar(a,b);
    cout<<"Hasil Swap : \n";
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b<<endl;
}