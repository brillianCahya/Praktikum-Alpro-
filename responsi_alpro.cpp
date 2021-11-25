#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

void penjumlahan(int firstnum, int secondnum, int hslTambah[]);
void pengurangan(int firstnum, int secondnum, int hslKurang[]);
void perkalian(int firstnum, int secondnum, int hslKali[]);
void pembagian(float firstnum, float secondnum, float hslBagi[]);
int perpangkatan(int firstnum, int secondnum);
int faktorial(int firstnum);
void riwayat(int hslTambah[], int hslKurang[], int hslKali[], float hslBagi[], int hslPangkat[], int hslFaktor[]);

int main()
{
    int x, y = 0, pilihan, pilihOperator, firstnum, secondnum, hslTambah[20] = {}, 
        hslKurang[20] = {}, hslKali[20] = {}, hslPangkat[20] = {}, hslFaktor[20] = {};

    float hslBagi[20] = {};

    cout << "============================================================\n"
         << "|          Kalkulator Sederhana (Simple Calculator)        |\n"
         << "============================================================\n";

    do{
    cout << "\n"
         << "[1] Mulai Penghitungan\n"
         << "[2] History Penghitungan\n"
         << "[3] Exit Program\n"
         << "Select Option > ";
    
    cin >> pilihan;

    switch(pilihan)
    {
        case 1 :

            cout << "\n"
                 << "Input Dua angka\n"
                 << "---------------\n";

            cout << "Angka pertama : ";
            cin >> firstnum;
            cout << "Angka kedua   : ";
            cin >> secondnum;

            cout << "\n"
                 << "[1] Penjumlahan\n"
                 << "[2] Pengurangan\n"
                 << "[3] Perkalian\n"
                 << "[4] Pembagian\n"
                 << "[5] Perpangkatan\n"
                 << "[6] Faktorial\n"
                 << "Select Option > ";
            cin >> pilihOperator;

            switch(pilihOperator)
            {
                case 1 :
                    penjumlahan(firstnum, secondnum, hslTambah);
                    break;

                case 2 :
                    pengurangan(firstnum, secondnum, hslKurang);
                    break;

                case 3 :
                    perkalian(firstnum, secondnum, hslKali);
                    break;

                case 4 :
                    pembagian(firstnum, secondnum, hslBagi);
                    break;

                case 5 :
                    hslPangkat[x] = perpangkatan(firstnum, secondnum);
                    cout << "\nHasil = " << hslPangkat[x];
                    x++;
                    break;

                case 6 :
                    hslFaktor[y] = faktorial(firstnum);
                    cout << "\nHasil = " << hslFaktor[y];
                    y++;
                    break;

                default :
                    cout << "\npilihan TIDAK ditemukan !";
            }
            break;

        case 2 :
            riwayat(hslTambah, hslKurang, hslKali, hslBagi, hslPangkat, hslFaktor);
            break;

        case 3 :
            cout << "\nTerima kasih atas kunjungan Anda...";
            break;

        default :
            cout << "\npilihan TIDAK ditemukan !";
    }
    cout << "\n"; 
    } while(pilihan != 3);

    return 0;    
}

void penjumlahan(int firstnum, int secondnum, int hslTambah[])
{
    int a;
    hslTambah[a] = firstnum + secondnum;
    cout << "\nHasil = " << hslTambah[a];
    a++;
}

void pengurangan(int firstnum, int secondnum, int hslKurang[])
{
    int a;
    hslKurang[a] = firstnum - secondnum;
    cout << "\nHasil = " << hslKurang[a];
    a++;
}

void perkalian(int firstnum, int secondnum, int hslKali[])
{
    int a;
    hslKali[a] = firstnum * secondnum;
    cout << "\nHasil = " << hslKali[a];
    a++;
}

void pembagian(float firstnum, float secondnum, float hslBagi[])
{
    int a;
    hslBagi[a] = firstnum / secondnum;
    cout << "\nHasil = " << hslBagi[a];
    a++;
}

int perpangkatan(int firstnum, int secondnum)
{
    if(secondnum != 0){
        return (firstnum * perpangkatan(firstnum, secondnum-1));
    }
    else{
        return 1;
    }
}

int faktorial(int firstnum)
{
    if(firstnum > 1){
        return (firstnum * faktorial(firstnum-1));
    }
    else{
        return 1;
    }
}

void riwayat(int hslTambah[], int hslKurang[], int hslKali[], float hslBagi[], int hslPangkat[], int hslFaktor[])
{
    cout << "History :\n";

    for(int i=1; i<=92; i++){
        cout << "=";
    }
    cout << "\n"
         << "| " << left << setw(5) << "No" << "| " << setw(12) << "Tambah" << "| " << setw(12)
         << "Kurang" << "| " << setw(12) << "Kali" << "| " << setw(12) << "Bagi" << "| " << setw(12) << "Pangkat"
         << "| " << setw(12) << "Faktorial" << "|\n";
    
    for(int i=1; i<=92; i++){
        cout << "=";
    }
    cout << "\n";

    for(int i=0; i<20; i++){
        cout << "| " << setw(5) << i+1 << "| " << setw(12) << hslTambah[i] << "| " << setw(12) << hslKurang[i] 
             << "| " << setw(12) << hslKali[i] << "| " << setw(12) << hslBagi[i] << "| " << setw(12) << hslPangkat[i]
             << "| " << setw(12) << hslFaktor[i] << "|\n";  
    }
    for(int i=1; i<=92; i++){
        cout << "=";
    }
}