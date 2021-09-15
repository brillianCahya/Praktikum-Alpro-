//Brillian Cahya D. 123210065

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
    string nama, plug, nim;
    int i, jumlah_strip;

    cout<<"Masukkan :\n";
    cout<<"--------\n";
    cout<<"Nama      :   ";
    getline(cin, nama);
    cout<<"NIM       :   ";
    getline(cin, nim);
    cout<<"Plug      :   ";
    getline(cin, plug);

    cout<<"\nInilah data Anda :\n";
    cout<<"Nama      :   "<<nama<<"\n";
    cout<<"NIM       :   "<<nim<<"\n";
    cout<<"Plug      :   "<<plug<<"\n";
    jumlah_strip = nama.size()+nim.size()+plug.size()+17;

    cout<<"\nDalam bentuk tabel :\n";

    for(i=1; i<=jumlah_strip; i++){
        cout<<"=";
    }
    cout<<"\nNIM"<<setw(nim.size()+1)<<"|"<<setw(6)<<"Nama"<<setw(nama.size()+1)<<"|"<<setw(7)<<"Plug\n";

    for(i=1; i<=jumlah_strip; i++){
        cout<<"=";
    }
    cout<<"\n"<<nim<<setw(4)<<"|"<<setw(nama.size()+2)<<nama<<setw(5)<<"|"<<setw(plug.size()+2)<<plug<<"\n";

    for(i=1; i<=jumlah_strip; i++){
        cout<<"=";
    }
    getch();
    return 0;
}