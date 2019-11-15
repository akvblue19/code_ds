import java.util.*;
class Main{
    public static void main(String args[]){
        int n,x,result;
        Scanner s= new Scanner(System.in);
        System.out.println("enter the number");
        n=s.nextInt();
        int a[]=new int[n];
        System.out.println("enter the elements");
        for(int i=0;i<n;i++){
            a[i]=s.nextInt();
        }
        System.out.println("enter the element to be searched");
        x=s.nextInt();
        result = search(a, n, x);
        if(result==-1)
            System.out.println("element not found");
        else
            System.out.println("element found at index "+result);

    }

    public static int search(int a[],int n,int x){
        for(int i=0;i<n;i++){
            if(a[i]==x){
                return i;
            }
            
        }
        return -1;
    }
}