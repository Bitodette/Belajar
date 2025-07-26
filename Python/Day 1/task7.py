listBarang = []
print("--- Pembuat Daftar Belanja ---")
print("(Ketik 'selesai' untuk mengakhiri)")
while True:
    barang = input("Masukkan barang: ")
    if barang == 'selesai':
        break
    listBarang.append(barang)
print("Ini daftar belanjamu: ")
print(listBarang)