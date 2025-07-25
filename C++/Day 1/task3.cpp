#include <iostream>

int main(){
    double a1, a2;

    std::cout << "=== Kalkulator Pembagian ===" << std::endl;
    std::cout << "Masukkan angka yang akan dibagi: ";
    std::cin >> a1;
    std::cout << "Masukkan angka pembagi: ";
    std::cin >> a2;

    double hasil = a1 / a2;

    std::cout << "Hasil: " << a1 << " / " << a2 << " = " << hasil << std::endl;
    return 0;
}