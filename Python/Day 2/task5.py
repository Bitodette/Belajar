def dapatkan_tebakan():
    angka_tebakan = int(input("Masukkan tebakanmu: "))
    return angka_tebakan

def cek_tebakan(angka_rahasia, angka_tebakan):
    if angka_rahasia > angka_tebakan:
        return "terlalu rendah"
    elif angka_rahasia < angka_tebakan:
        return "terlalu tinggi"
    else:
        return "tepat"
    
def main_game():
    print("--- Game Tebak Angka (Versi Modular) ---")
    secret = 5
    while True:
        tebakan_user = dapatkan_tebakan()
        hasil_cek = cek_tebakan(secret, tebakan_user)
    
        if hasil_cek == "terlalu rendah":
            print("Terlalu rendah!")
        elif hasil_cek == "terlalu tinggi":
            print("Terlalu tinggi!")
        elif hasil_cek == "tepat":
            print("Selamat, tebakanmu benar!")
            break

main_game()