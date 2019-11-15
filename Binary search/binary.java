import java.util.*;
class Main{
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        int n,x;
        System.out.println("enter the  number");
        n = s.nextInt();
        int a[]= new int[n];
        System.out.println("enter the  values");
        for(int i=0;i<n;i++){
            a[i] = s.nextInt();
        }
        Arrays.sort(a);
        System.out.println("enter the number to be searched");
        x= s.nextInt();
        int  f=0,l=n-1,result;
        result = search(a,f,l,x);
        if(result==-1)
            System.out.println("not found");
        else
            System.out.println("found");
    }
    public static int search(int a[],int f,int l,int x){
        int mid;
        while(f<=l){
            mid=f+((l-f)/2);
            if(a[mid]==x){
                return mid;
            }
            else if(a[mid]<x){
                f=mid+1;
            }
            else{
                l=mid-1;
            }
        }
        return -1;
     }
}