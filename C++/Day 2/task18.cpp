    #include <iostream>
    #include <vector>
    #include <string>

    int main(){
        std::vector<std::string> rencana;
        rencana.push_back("Belajar Vector C++");
        rencana.push_back("Mengerjakan PR");
        rencana.push_back("Olahraga");

        std::cout << "Rencana Awal:" << std::endl;
        int nomor = 1;
        for (const std::string& item : rencana ){
            std::cout << nomor << ". " << item << std::endl;
            nomor++;
        }
        int pilihan;
        std::string rencana_baru;
        std::cout << "\nMasukkan nomor rencana yang ingin diubah (1-3): ";
        std::cin >> pilihan;

        if (pilihan >= 1 && pilihan <= rencana.size()){
            std::cout << "Masukkan rencana baru: ";
            std::cin.ignore();
            std::getline(std::cin, rencana_baru);
            rencana[pilihan-1] = rencana_baru;
        } else {
            std::cout << "Nomor tidak valid!" << std::endl;
        }
        nomor = 1;
        std::cout << "\nRencana Telah Diperbarui:" << std::endl;
        for (const std::string& item : rencana ){
            std::cout << nomor << ". " << item << std::endl;
            nomor++;
        }

        return 0;
    }
