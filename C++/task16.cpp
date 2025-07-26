#include <iostream>
#include <vector>
#include <string>

int main(){
    std::string nama_tamu;
    std::vector<std::string> daftar_tamu;
    while (true){
        std::cout << "Masukkan nama tamu (ketik 'selesai' untuk berhenti): ";
        std::cin >> nama_tamu;
        if (nama_tamu == "selesai"){
            break;
        } 
        daftar_tamu.push_back(nama_tamu);
    }
    std::cout << "\nDaftar Tamu yang Hadir:" << std::endl   ;
    for (const std::string& item : daftar_tamu ){
        std::cout << "- " << item << std::endl;
    }
    return 0;
}