a = 400000
b = 350000
da =  13 / 100
db =  21 / 100
hasil_a = a - (a * da)
hasil_b = b - (b * db)

print(f"Harga sepatu A adalah {a}")
print(f"Harga sepatu B adalah {b}")
print(f"Sepatu A mendapat diskon {int(da * 100)}% sehingga harganya menjadi {int(hasil_a)}")
print(f"Sepatu B mendapat diskon {int(db * 100)}% sehingga harganya menjadi {int(hasil_b)}")

