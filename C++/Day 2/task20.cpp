#include <iostream>
#include <vector>
#include <string>

int main(){
    int pilihan, number, nomor_tugas;
    std::vector<std::string> daftar_tugas;
    std::string tugasBaru;



    while(true){
        std::cout << "\n=== APLIKASI TO-DO LIST ===\n";
        std::cout << "1. Lihat Tugas\n";
        std::cout << "2. Tambah Tugas\n";
        std::cout << "3. Ubah Tugas\n";
        std::cout << "4. Hapus Tugas\n";
        std::cout << "5. Keluar\n";
        std::cout << "Pilihan anda: ";
        std::cin >> pilihan;
        
        switch (pilihan){
            case 1:{
                if (!daftar_tugas.empty()){
                    number = 1;
                    for (const std::string& item :daftar_tugas){
                        std::cout << number << ". " << item << std::endl;
                        number++;
                    }
                }else{
                    std::cout << "Nomor tidak valid atau tidak ada tugas" << std::endl;
                }
                break;
            }
            case 2:{
                std::cout << "Masukkan tugas baru: ";
                std::cin.ignore();
                std::getline(std::cin, tugasBaru);
                daftar_tugas.push_back(tugasBaru);
                break;
            }
            case 3:{
                number = 1;
                if (daftar_tugas.size() != 0){
                    for (const std::string& item :daftar_tugas){
                        std::cout << number << ". " << item << std::endl;
                        number++;
                    }
                } else {
                    std::cout << "Daftar Tugas Kosong\n";
                    break;
                }
                std::cout << "Masukkan nomor yang ingin diubah: ";
                std::cin >> nomor_tugas;
                std::cin.ignore();
                if (nomor_tugas >= 1 && nomor_tugas <= daftar_tugas.size()){
                    std::cout << "Masukkan Tugas yang baru: ";
                    std::getline(std::cin, tugasBaru);
                    daftar_tugas[nomor_tugas-1] = tugasBaru;
                } else{
                    std::cout << "Nomor tidak valid";
                    break;
                }
                break;
            }
            case 4 : {
                number = 1;
                if (daftar_tugas.size() != 0){
                    for (const std::string& item :daftar_tugas){
                        std::cout << number << ". " << item << std::endl;
                        number++;
                    }
                } else {
                    std::cout << "Daftar Tugas Kosong\n";
                    break;
                }
                std::cout << "Masukkan nomor yang ingin dihapus: ";
                std::cin >> nomor_tugas;
                std::cin.ignore();
                if (nomor_tugas >= 1 && nomor_tugas <= daftar_tugas.size()){
                    daftar_tugas.erase(daftar_tugas.begin() + nomor_tugas - 1);
                }
                break;
            }
            case 5:{
                std::cout << "Terimakasih.....";
                return 0;
            }
        }
    }
    return 0;
}