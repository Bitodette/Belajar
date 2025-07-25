#include <iostream>

int main() {
    double berat, tinggi;
    std::cout << "Masukkan berat badan Anda (kg): ";
    std::cin >> berat;
    std::cout << "Masukkan tinggi badan Anda (m): ";
    std::cin >> tinggi;

    double BMI = berat / (tinggi * tinggi);

    std::cout << "BMI Anda adalah: " << BMI << ". Kategori: ";

    if (BMI < 18.5) {
        std::cout << "Kurus" << std::endl;
    } else if (BMI >= 18.5 && BMI <= 24.9) {
        std::cout << "Normal" << std::endl;
    } else if (BMI >= 25 && BMI <= 29.9) { 
        std::cout << "Kelebihan Berat Badan" << std::endl;
    } else {
        std::cout << "Obesitas" << std::endl;
    }

    return 0;
}