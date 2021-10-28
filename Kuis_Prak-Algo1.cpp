#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
    string choice, user, pass, username = "123210065", password = "62123210065";
    int size;
    
    for(int x=1; x>0; x--){
    cout<<"=============================================================\n"
        <<"|                     U S E R   L O G I N                   |\n"
        <<"=============================================================\n";
    cout<<"Username  : ";
    cin>>user;
    cout<<"Password  : ";
    cin>>pass;

    while(user != username || pass != password){
        cout<<"------------------------ Login Failed -----------------------\n"
            <<"----------------- Wrong Username or Password ----------------\n"
            <<"--------------------- Please Log-In Again -------------------\n\n";
        cout<<"Username  : ";
        cin>>user;
        cout<<"Password  : ";
        cin>>pass;
    }
    cout<<"------------------------ Login Success ----------------------\n\n";

    for(int y=1; y>0; y--){
    cout<<"=============================================================\n"
        <<"|                   Program Simbol Rahasia                  |\n"
        <<"=============================================================\n";

    cout<<"Input angka untuk ukuran simbol > ";
    cin>>size;
    cout<<"Hasil :\n\n";

    for(int i=1; i<=2*(size-1); i++){

        for(int j=1; j<=2*(size-1); j++){

            if(
                i==1 || i==2*(size-1) || (i%2==0 && (j<=i/2 || j>2*(size-1)-i/2)) ||
                (i%2==1 && (j<=size-(i+1)/2 || j>size+(i-3)/2))
            )
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
        for(int z=1; z>0; z--){
        cout<<"\n[1] Input ukuran simbol lagi\n"
            <<"[2] Log-Out User\n"
            <<"[3] Exit Program\n";
        cout<<"Pilihan Anda > ";
        cin>>choice;

        if(choice == "1"){
            system("cls");
            y=2;
        }
        else if(choice == "2"){
            system("cls");
            x=2;
        }
        else if(choice == "3"){
            cout<<"\nTerima Kasih...";
        }
        else{
            cout<<"\n!!! Mohon input pilihan berupa 1 atau 2 atau 3 !!!\n";
            z=2;
        }
    }
    }
    }
    getch();
    return 0;
}