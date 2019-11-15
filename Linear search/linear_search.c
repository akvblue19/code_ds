#include<stdio.h>
int search(int a[],int n,int x){
    for(int i=0;i<n;i++){
        if(a[i]==x){
            return i;
            break;
        }
    }
    return -1;
}

int main(){
    int n,x,result;
    printf("enter the number\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the number to be searched: ");
    scanf("%d",&x);
    result = search(a,n,x);
    (result==-1)?printf("element does not found"):printf("element found at index %d",result);
    return 0;
}

