/*
Nama Program: exercise-01.cpp
Nama        : Asep Budiyana M
NPM         : 140810180029
Tanggal Buat: 26/02/2019
Deskripsi   : Membuat program fizz buzz
*/
#include <iostream>
using namespace std;

void fizzbuzz(){
    for (int i=1;i<=100;i++){
        if (i%3==0&&i%5==0) cout<<"Fizz Buzz"<<endl;//jika kelipatan 3 dan 5
        else if (i%3==0) cout<<"Fizz"<<endl;//jika kelipatan 3
        else if (i%5==0) cout<<"Buzz"<<endl;//jika kelipatan 5
        else cout<<i<<endl;//jika bukan kelipatan 3 dan/atau 5
    }
}

int main(){
    fizzbuzz();//manggil fungsi fizzbuzz
}