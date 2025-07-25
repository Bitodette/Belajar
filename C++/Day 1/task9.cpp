#include <iostream>
#include <string>

int main()
{
    double total_belanja;
    double diskon = 0.0;
    char status_member;

    std::cout << "Masukkan total belanja: ";
    std::cin >> total_belanja;

    std::cout << "Apakah Anda member (y/t)? ";
    std::cin >> status_member;

    if (status_member == 'Y' || status_member == 'y')
    {
        if (total_belanja > 500000)
        {
            diskon = total_belanja * 0.20;
        }
        else
        {
            diskon = total_belanja * 0.10;
        }
    }
    else if (status_member == 'T' || status_member == 't')
    {
        if (total_belanja > 500000)
        {
            diskon = total_belanja * 0.05;
        }
    }
    else
    {
        std::cout << "Input status member tidak valid!" << std::endl;
        return 1;
    }

    double harga_akhir = total_belanja - diskon;

    std::cout << "-------------------------" << std::endl;
    std::cout << "Total belanja: Rp " << total_belanja << std::endl;
    std::cout << "Diskon: Rp " << diskon << std::endl;
    std::cout << "Harga akhir: Rp " << harga_akhir << std::endl;

    return 0;
}