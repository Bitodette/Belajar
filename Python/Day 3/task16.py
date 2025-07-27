profile_user  = {"nama": "Budi Santoso",
                 "pekerjaan": "Programmer",
                 "usia": 28}
print(f"Profil Pengguna: {profile_user['nama']} adalah seorang {profile_user['pekerjaan']}.")
profile_user["pekerjaan"] = "Senior Programmer"
profile_user["kota"] = "Surabaya"
print("Profil setelah diperbarui:")
print(profile_user)