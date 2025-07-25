#include <iostream>

int main(){
    int a1, a2;

    std::cout << "=== Kalkulator Sisa Bagi (Modulo) ===" << std::endl;
    std::cout << "Masukkan angka yang akan dibagi: ";
    std::cin >> a1;
    std::cout << "Masukkan angka pembagi: ";
    std::cin >> a2;

    int hasil = a1 % a2;

    std::cout << "Sisa bagi dari " << a1 << " % " << a2 << " = " << hasil << std::endl;
    return 0;
}