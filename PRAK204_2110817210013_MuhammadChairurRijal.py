from re import X


jr = int (input("Jari-Jari"))
tinggi = int (input("tinggi Bejana"))

volume = 3.14 * jr * jr * tinggi
luas = 2 * 3.14 * jr * ( jr + tinggi)
keliling = 3.14 * 2 * jr

print("Volume = ", volume)
print("Luas = ", luas)
print("Keliling = ", keliling)