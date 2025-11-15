#Napisati algoritam i program koji računa aritmeticku sredinu parnih brojeva
#na datom intervalu [a,b].
a=int(input())
b=int(input())
ar=0
z=0
br=0
for i in range(a,b+1):
    if(i%2==0):
        z=z+i
        br=br+1
if(br==0):
    print("nema ni jedan broj")
else:
    ar=z/br
    print(ar)
