angka = int(input("Masukkan sebuah angka positif: "))
total = 0

for i in range(1, angka + 1):
    total += i
    
print(f"Jumlah total dari 1 sampai {angka} adalah {total}.")