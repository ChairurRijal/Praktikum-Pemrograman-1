import math


a = int (input("Nilai A : "))
b = int (input("Nilai B : "))

c = math.sqrt(a ** 2 + b ** 2)
kl = a + b + c
luas = 1/2 * c * a

print("Alas =", c)
print("Tinggi =",a)
print("Keliling =", kl)
print("Luas = ", luas)