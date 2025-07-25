#include <iostream>

int main(){
    int a1, a2;

    std::cout << "=== Kalkulator Penjumlahan ===" << std::endl;
    std::cout <<"Masukkan angka pertama: ";
    std::cin >> a1;

    std::cout <<"Masukkan angka kedua: ";
    std::cin >> a2;
    
    int hasil = a1 + a2;

    std::cout << "Hasil penjumlahan: " << a1 << " + " << a2 << " = " << hasil <<std::endl;
    return 0;

}