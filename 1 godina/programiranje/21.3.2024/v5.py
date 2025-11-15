#Napisati algoritam i program koji za n prvih brojeva iyracunava
#sumu brojeva koji se završavaju sa cifrom 7.
s=0
n=int(input())
for i in range(1,n+1):
    if(i%10==7):
        s=s+i
print(s)
