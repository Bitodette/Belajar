#include <iostream>

int main()
{
    int usia;
    std::cout << "Masukkan usia Anda: ";
    std::cin >> usia;
    if (usia >= 18 && usia <= 55)
    {
        std::cout << "Usia " << usia << " termasuk kategori Usia Produktif.";
    }
    else
    {
        std::cout << "Usia " << usia << " termasuk kategori Non-Produktif.";
    }
    return 0;
}