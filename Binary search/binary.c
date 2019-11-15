#include<stdio.h>
int search(int a[],int f,int l,int x){
    int mid;
    while(f<=l){
        mid=f+((l-f)/2);
        if(a[mid]==x)
            return mid;
        else if(a[mid]>x)
            l=mid-1;
        
        else
            f=mid+1;
        
    }
    return -1;
}

int main(){
    int n,i,j,temp;
    printf("enter the number\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the values\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int x,f=0,l=n-1;
    printf("enter the element to be searched\n");
    scanf("%d",&x);
    int result=search(a,f,l,x);
    (result==-1)?printf("not found"):printf("found");
    return 0;
}