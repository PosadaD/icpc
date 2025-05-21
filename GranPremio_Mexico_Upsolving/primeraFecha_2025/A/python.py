s = input();
n = int(input());

while n > 0:
    p = input();

    if len(p)%len(s)==0:
        count = int(len(p)/len(s));
        cadena = s * count;
        if cadena == p:
            print("Yes")
        else:
            print("No")
    else:
        print("No")

    n -= 1;
