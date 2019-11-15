def search(a,x):
    l=len(a)
    for i in range(l):
        if(a[i]==x):
            return  i
            break
    return -1
n=int(input("enter the number"))
print("enter the values:")
a=[int(input()) for i in range(n)]
x=int(input("enter the value to be searched: "))
result=search(a,x)
if(result==-1):
    print("element not found")
else:print("element found at the index {}".format(result))