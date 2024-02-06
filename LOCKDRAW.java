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
            int a=sc.nextInt(),b=sc.nextInt(),c=sc.nextInt();
            if (a==(b+c)||b==(a+c)||c==(a+b))
            System.out.println("YES");
            else
            System.out.println("NO");
        }
	}
}
