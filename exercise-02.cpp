/*
Nama Program: exercise-02.cpp
Nama        : Asep Budiyana M
NPM         : 140810180029
Tanggal Buat: 26/02/2019
Deskripsi   : convert Celsius to Fahrenheit
*/
#include <iostream>
using namespace std;

float konversiToFahrenheit(int c){
    return float(c)*9/5+32;
}

main(){
    int celsius;
    cout<<"Celsius      = ";cin>>celsius;
    float fahrenheit = konversiToFahrenheit(celsius);
    cout<<"Fahrenheit   = "<<fahrenheit;
}
