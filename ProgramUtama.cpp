#include <iostream>
using namespace std;


int main()
{ //begin
    // numeric luas,panjang, lebar
    double luas;
    double panjang;
    double lebar; //declare variabel local 

    //display "Masukan panjang nya"

    cout << "masukan panjang nya: "; 
    // accept panjang
    cin >> panjang;
    // display "Masukan panjang nya"
    cout << "Masukan lebar nya: ";
    // accept lebar
    cin >> lebar;
    // compute luas = panjang * lebar
    luas = panjang * lebar;
    // display "Luas persegi panjang", luas
    cout << "Luas persegi panjang : " << luas << endl;
}