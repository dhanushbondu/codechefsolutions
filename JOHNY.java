/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
		    int n=sc.nextInt();
		    int song[]=new int[n];
		    
		    for(int i=0;i<n;i++)
		       song[i]=sc.nextInt();
		       
		    int k=sc.nextInt();
		    int val=song[k-1];
		    
		    Arrays.sort(song);
		    
		    for(int i=0;i<n;i++)
		    {
		        if(val==song[i])
		          System.out.println(i+1);
		    }
		}
	}
}
