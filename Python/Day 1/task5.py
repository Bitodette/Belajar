print("--- Game Tebak Angka (1-10) ---")
tebakan = 0
angka_tebakan = 10
while tebakan != angka_tebakan :
    tebakan = int(input("Masukkan tebakanmu: "))
    if tebakan > angka_tebakan:
        print("Terlalu tinggi! Coba lagi.")
    elif tebakan < angka_tebakan:
        print("Terlalu rendah! Coba lagi.")
        
print(f"Selamat! Kamu berhasil menebak angkanya, yaitu {angka_tebakan}.")
