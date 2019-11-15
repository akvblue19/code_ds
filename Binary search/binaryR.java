import java.util.*;
class Main{
    public static void main(String args[]){
        Scanner  s = new Scanner(System.in);
        int n,i,x;
        System.out.println("enter the number");
        n = s.nextInt();
        int a[]  =  new  int[n];
        System.out.println("enter the values");
        for(i=0;i<n;i++){
            a[i]=  s.nextInt();
        }
        Arrays.sort(a);
        System.out.println("enter the elemnet to be searched");
        x = s.nextInt();
        int  result,f=0,l=n-1;
        result = search(a,f,l,x);
        if(result==-1){
            System.out.println("not found");
        }
        else
            System.out.println("found");
    }
    public static int search(int a[],int f,int l,int x){
        if(f<=l){
            int mid=f + ((l-f)/2);
            if(a[mid]==x){
                return mid;
            }
            else if(a[mid] < x){
                return  search(a,mid+1,l,x);
            }
            else{
                return search(a,f,mid-1,x);
            }
        }
        return -1;
    }
}