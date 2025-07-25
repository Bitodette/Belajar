#include <iostream>

int main(){
    int angka;
    std::cout << "Masukkan sebuah bilangan bulat: ";
    std::cin >> angka;
    if (angka % 2 == 0){
        std::cout << "Angka "<< angka << " adalah GENAP" << std::endl;
    } else {
        std::cout << "Angka "<< angka << " adalah GANJIL" << std::endl;
    }
    return 0;
}