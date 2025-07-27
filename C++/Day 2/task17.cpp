#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<std::string> nama_planet;
    nama_planet.push_back("Jupiter");
    nama_planet.push_back("Saturn");
    nama_planet.push_back("Earth");

    std::cout << "Daftar Planet di Tata Surya:" << std::endl;
    int nomor = 1;
    for (const std::string& item : nama_planet ){
        std::cout << nomor << ". " << item << std::endl;
        nomor++;
    }
    int pilihan;
    std::cout << "Masukkan nomor planet yang ingin dilihat (1-3): ";
    std::cin >>  pilihan;

    if (pilihan >= 1 && pilihan <= nama_planet.size()){
        std::cout << "Pilihan anda: " << nama_planet[pilihan - 1] << std::endl;
    } else {
        std::cout << "Nomor tidak valid!" << std::endl;
    }

    return 0;
}