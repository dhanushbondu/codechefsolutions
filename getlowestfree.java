import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
        public static void main (String[] args) throws java.lang.Exception
        {
                // your code goes here
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            int n=3;
            int a[]=new int[n];
            int i;
            for(i=0;i<n;i++)
            {
                a[i]=sc.nextInt();
            }
            Arrays.sort(a);
            System.out.println(a[1]+a[2]);
        }
        }
}

