#include <iostream>
#include <vector> // Jangan lupa sertakan ini!
#include <string>

int main(){
    std::vector<int> daftar_angka;
    std::vector<std::string> daftar_belanja;

    daftar_belanja.push_back("Apel");
    daftar_belanja.push_back("Roti");
    daftar_belanja.push_back("Susu");
    daftar_belanja.push_back("Keju");
    
    for(const std::string& item : daftar_belanja){
        std::cout << "- " << item << std::endl;
    }
    return 0;
}