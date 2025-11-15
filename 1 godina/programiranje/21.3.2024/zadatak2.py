#Napisati algoritam i program koji računa zbir parnih brojeva na datom
#intervalu [a,b].
a=int(input())
b=int(input())
z=0
for i in range(a,b+1):
    if(i%2==0):
        z=z+i
print(z)
