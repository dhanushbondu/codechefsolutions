import java.util.Scanner;

class suborswap{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            int a=sc.nextInt(),b=sc.nextInt(),temp=0;
            while(a>0)
            {
                if(a>b)
                {
                    temp=a;
                    a=b;
                    b=temp;
                }
                else{
                    temp=a;
                    a=b-a;
                    b=temp;
                }
            }
            System.out.println(b);
        }
    }
}