#include <iostream>

int main(){
    int usia;
    int harga_normal, harga_diskon;
    harga_normal = 50000;
    harga_diskon = 30000;
    std::cout << "Masukkan usia Anda: ";
    std::cin >> usia;
    if (usia <= 12 || usia >= 60){
        std::cout << "Anda mendapatkan harga diskon: " << harga_diskon << std::endl;
    } else {
        std::cout << "Anda mendapatkan harga normal: " << harga_normal << std::endl;
    }
    return 0;
}