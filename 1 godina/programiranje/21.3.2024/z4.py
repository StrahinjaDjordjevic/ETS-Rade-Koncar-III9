#Napisati algoritam i program koji za n unetih celih brojeva računa koliko je
#uneto brojeva deljivih sa 5 i sumu dvocifrenih brojeva.
n=int(input())
br=0
s=0
for i in range(n):
    a=int(input("unesi br"))
    if(a%5==0):
        br=br+1
    if(a>9 and a<100):
        s=s+a
print("ovo je broj brojeva koji su deljivi sa 5: ",br, "ovo je suma dvocifrenih brojeva: ", s)
