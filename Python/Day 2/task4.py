def hitung_harga_akhir(harga_awal, persen_pajak=11):
    jumlah_pajak = harga_awal * persen_pajak / 100
    harga_akhir = harga_awal + jumlah_pajak
    return harga_akhir

print(f"Harga dengan PPN standar (11%): {hitung_harga_akhir(100000)}")
print(f"Harga dengan PPN khusus (5%): {hitung_harga_akhir(100000,5)} ")
