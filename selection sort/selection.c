#include<stdio.h>
void search(int a[],int n){
    int i,j,key;
    for(i=1;i<n;i++){
        key= a[i];
        for(j=i-1;j>=0;j--){
            if(a[j]<key){
                break;
            }
            else{
                a[j+1]=a[j];
            }
        }
        a[j+1]=key;
        
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
void main(){
    int n,i;
    printf("enter the number\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the values\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    search(a,n);
    
   
}