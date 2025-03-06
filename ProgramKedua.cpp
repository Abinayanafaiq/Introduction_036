#include <iostream>
using namespace std;


float luas, panjang, lebar;

void inputData(){
    cout << "Masukan panjang: ";
    cin >> panjang;
    cout << "Masukan Lebar: ";
    cin >> lebar;
}

float hitungLuas(){
    luas = panjang * lebar;
    return luas;
}

float hitungLuasBerparameter(float a, float b){
    luas = a * b;
    return luas; 
}

void tampilkanLuas(){
    cout << "Tampilkan luas" << luas << endl;
}

int main()
{
    inputData();
    // hitungLuas();
    hitungLuasBerparameter(panjang,lebar);
    tampilkanLuas();
}