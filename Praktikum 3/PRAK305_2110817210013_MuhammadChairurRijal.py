detik = int(input(""));

menit = detik / 60;
jam = menit / 60;
hari = jam / 24;
detik = detik % 60;
menit = menit % 60;
jam = jam % 24;
    

if detik < 10: 
        if menit < 10:
            if jam < 10:
                print(jam, menit, detik);
            else: 
                print(jam, menit, detik);
            
        else: 
            if jam < 10 : 
                print(jam, menit, detik);
            else: 
                print(jam, menit, detik);
            
        
else: 
        if menit < 10 : 
            if jam < 10 : 
                print(jam, menit, detik);
            else: 
                print(jam, menit, detik);
            
        else: 
            if jam < 10 : 
                print(jam, menit, detik);
            else:
                print(jam, menit, detik);