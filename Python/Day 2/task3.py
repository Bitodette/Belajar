def apakah_cukup_umur(usia):
    if usia >= 17:
        print("Selamat menonton")
        return True
    else:
        return False    
    
umur = int(input("Berapa usia Anda? "))
if apakah_cukup_umur(umur):
    print("Selamat menonton!")
else:
    print("Maaf, Anda belum cukup umur untuk menonton film ini.")
