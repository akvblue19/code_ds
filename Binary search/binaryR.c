#include<stdio.h>
int search(int a[],int f,int l,int x){
    if(f<=l){
        int mid = f + ((l-f)/2);
        if(a[mid]==x)
            return mid;
        else if(a[mid]>x)
            return search(a,f,mid-1,x);
        else
        {
            return search(a,mid+1,l,x);
        }
    }
    return -1;
}
int main(){
    int n,i,j,temp,x;
    printf("enter the number\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the values\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("enter the element to be searched\n");
    scanf("%d",&x);
    int f=0,l=n-1;
    int result;
    result = search(a,f,l,x);
    (result==-1)?printf("not found"):printf("found");
}