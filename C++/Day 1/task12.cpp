#include <iostream>

int main(){
    int angka;
    std::cout << "Masukkan sebuah angka positif: ";
    std::cin >> angka;
    for (int i {1}; i <= angka; ++i ){
        if (i % 2 == 0){
            std::cout << i << std::endl;
        }
        

    }
    return 0;
}