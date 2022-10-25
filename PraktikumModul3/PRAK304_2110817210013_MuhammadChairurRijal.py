a = int(input(""));

if a > 0 & a < 10 :
    print("Satuan");
elif a > 10 & a < 20 :
    print("Belasan");
elif a == 0 :
    print("Nol");
elif a >= 100 :
    print("Anda Mengimput Meliputi Limit Bilangan");
else:
    print("Puluhan");   