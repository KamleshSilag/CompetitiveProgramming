//Program to string at even and odd position differently
//Developed by Kamlesh Silag
//Date : 23/04/2018

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Even_Odd {
	public static void main(String args[]) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int testcases = Integer.parseInt(br.readLine());
		String []inputs = new String[testcases];
		for(int i=0;i<testcases ; i++)
		{
			inputs[i]=br.readLine();
		}

		System.out.println("INputed Strings :");
		for(int i=0;i<testcases ; i++)
		{
			int len = inputs[i].length();
			for(int j=0;j<len;j++)
			{
				if(j%2==0)
				{
					System.out.print(inputs[i].charAt(j));
				}
			}
			System.out.print("\t");
			for(int j=0;j<len; j++)
			{
				if(j%2==1)
				{
					System.out.print(inputs[i].charAt(j));
				}
			}
			System.out.println("");
		}
	}
}
