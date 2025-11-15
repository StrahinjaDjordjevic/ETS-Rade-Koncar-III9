#Zadatak 7: Napisati algoritam i program koji za n unetih celih brojeva računa
#koliko je uneto negativnih brojeva i sumu brojeva koji se završavaju cifrom 9.
n=int(input())
br=0
s=0
for i in range(n):
    a=int(input())
    if(a<0):
        br=br+1
    if(a%10==9):
            s=s+a
    if(a<0):
        a=a*(-1)
        if(a%10==9):
            a=a*(-1)
            s=s+a
   # elif(a%10==-9):
       # s=s-a
print("broj negativnih brojeva je: ", br, "suma br koji se zavrsavaju sa 9: ", s)
