#include <iostream>

int main(){
    int angka;
    std::cout << "Masukkan sebuah angka positif: ";
    std::cin >> angka;
    for (int i {1}; i <= angka; ++i ){
        if (i % 3 == 0 && i % 5 == 0){
            std::cout << "FizzBuzz" << std::endl;
        } else if ( i % 3 == 0){
            std::cout << "Fizz" << std::endl;
        } else if (i % 5 == 0){
            std::cout << "Buzz" << std::endl;
        } else {
            std::cout << i << std::endl;
        }
        

    }
    return 0;
}