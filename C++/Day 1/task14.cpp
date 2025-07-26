#include <iostream>
#include <string>
int main(){
    std::string kode_rahasia = "gemini", tebakan;
    while (tebakan != kode_rahasia) {
        std::cout << "Tebakan salah, coba lagi!" << std::endl;
        
        std::cout << "Masukkan kode rahasia: ";
        std::cin >> tebakan;
    }
    std::cout << "Selamat! Kode benar." << std::endl;

    return 0;
}