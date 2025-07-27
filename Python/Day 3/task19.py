data_pengguna = []

print("--- Input Data Pengguna ---\n(Ketik 'selesai' di nama untuk berhenti)")
while True: 
    nama = input("\nMasukkan nama: ")
    if (nama == 'selesai'):
        break
    else:
        kota =  input("Masukkan kota: ")
        data_pengguna.append({"nama" : nama, "kota" : kota})


print(data_pengguna)