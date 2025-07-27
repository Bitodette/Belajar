    #include <iostream>
    #include <vector>
    #include <string>

    int main(){
        std::vector<std::string> tugas;
        tugas.push_back("Cuci piring");
        tugas.push_back("Belajar C++");
        tugas.push_back("Buang sampah");
        tugas.push_back("Beli susu");
        
        std::cout << "Daftar Tugas Saat Ini:" << std::endl;
        int nomor = 1;
        for (const std::string& item : tugas ){
            std::cout << nomor << ". " << item << std::endl;
            nomor++;
        }

        int pilihan;
        std::cout << "\nMasukkan nomor tugas yang sudah selesai (1-4): ";
        std::cin >> pilihan;
        if (pilihan >= 1 && pilihan <= tugas.size()){
            tugas.erase(tugas.begin() + pilihan-1);
        } else {
            std::cout << "Nomor tidak valid!" << std::endl;
        }

        std::cout << "\nDaftar Tugas Terbaru:" << std::endl;
        nomor = 1;
        for (const std::string& item : tugas ){
            std::cout << nomor << ". " << item << std::endl;
            nomor++;
        }

        return 0;
    }