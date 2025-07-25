#include <iostream>
#include <string>

int main(){
    std::cout <<"Masukkan nama kamu: ";

    std::string nama;
    std::cin >> nama;

    std::cout << "Halo, " <<nama << "! Selamat datang di dunia C++." << std::endl;
    
    return 0;
}