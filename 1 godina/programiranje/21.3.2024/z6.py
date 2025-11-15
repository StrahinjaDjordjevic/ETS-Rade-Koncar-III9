#Napisati algoritam i program koji za dati interval [a, b] prikazuje
#samo one koji su deljivi sa 3.
a=int(input())
b=int(input())
for i in range(a,b+1):
    if(i%3==0):
        print(i)
