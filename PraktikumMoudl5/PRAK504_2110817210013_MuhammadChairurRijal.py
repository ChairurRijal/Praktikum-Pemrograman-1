def reverse(angka):
    reverse = 0
    while angka != 0:
        reminder = angka % 10
        reverse = reverse * 10 + reminder
        angka = angka / 10
        print(reverse)
    return reverse

nilai1 = int(input(""))
nilai2 = int(input(""))

a=reverse(nilai1) 
b=reverse(nilai2)
c = nilai1 + nilai2
print(a,b,c)
print(reverse(c))