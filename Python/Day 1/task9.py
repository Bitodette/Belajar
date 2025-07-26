tamu_undangan = ["Budi", "Siti", "Eko", "Wati", "Agus"]
nama = input("Masukkan nama Anda: ")
print("---")
if nama in tamu_undangan:
    print(f"Selamat datang, {nama}! Silakan masuk.")
else :
    print(f"Maaf, {nama}, nama Anda tidak ada dalam daftar undangan.")