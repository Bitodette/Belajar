#include <iostream>

int main(){
    int angka;
    std::cout << "Masukkan sebuah bilangan bulat: ";
    std::cin >> angka;
    if (angka < 0) {
        std::cout << "Angka "<< angka <<" adalah bilangan NEGATIF." << std::endl;
    } else if (angka > 0){
        std::cout << "Angka "<< angka <<" adalah bilangan POSITIF." << std::endl;
    } else {
        std::cout << "Angka yang Anda masukkan adalah NOL." << std::endl;
    }
    return 0;
}