#Zadatak 8: Napisati algoritam i program koji među n unešenih brojeva
#pronalazi maksimalni broj i ispisuje ga.
#vrati najveci broj i poziciju na kojoj je
n=int(input())
maxx=-99
br=0
for i in range(1,n+1):
    a=int(input())
    if(maxx<a):
        maxx=a
        br=i
print(br)
print(maxx)
