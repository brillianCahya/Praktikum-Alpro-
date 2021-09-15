//Brillian Cahya D. 123210065

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

float fahrenheit(float c){
    return c*9/5+32;
}
float reamur(float c){
    return c*4/5;
}
float kelvin(float c){
    return c+273;
}

int main()
{
    int c;

    cout<<"=========================================\n";
    cout<<"          Konversi Suhu Celsius\n";
    cout<<"=========================================\n\n";

    cout<<"Masukkan suhu (derajat celsius) > ";
    cin>>c;

    cout<<"\nFahrenheit"<<setw(3)<<"= "<<fahrenheit(c)<<" derajat F\n";
    cout<<"Reamur"<<setw(7)<<"= "<<reamur(c)<<" derajat R\n";
    cout<<"Kelvin"<<setw(7)<<"= "<<kelvin(c)<<" K\n";
    getch();
    return 0;
}