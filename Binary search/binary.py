def search(a,f,l,x):
    while(f<=l):
        mid = f+((l-f)//2)
        if(a[mid]==x):
            return  mid
        elif(a[mid]>x):
            l=mid-1
        else:
            f=mid+1
    return -1

n=int(input("enter the number"))
print("enter the values")
a=[int(input()) for i in range(n)]
a.sort()
x=int(input("enter the element to be  searched"))
f,l=0,n-1
result=search(a,f,l,x)
if(result==-1):
    print("not found")
else:
    print("found")