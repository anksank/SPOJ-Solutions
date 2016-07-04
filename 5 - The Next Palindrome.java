/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static String calculateLeftPart(String input){
		StringBuilder myInput = new StringBuilder(input);
		int i = myInput.length()-1;	
		while(myInput.charAt(i) == '9'){
			myInput.setCharAt(i, '0');
			i--;
		}
		myInput.setCharAt(i, (char)((int)(myInput.charAt(i)) + 1));
		
		return myInput.toString();
	}
	public static String checkPalindrome(String input){
		String leftPart = input.substring(0, input.length()/2);
		String rightPart = "";
		String midPart = "";
		if(input.length()%2==0)
			rightPart = input.substring(input.length()/2);
		else {
			rightPart = input.substring(input.length()/2 + 1);
			midPart = input.substring(input.length()/2, input.length()/2+1);
		}
		String leftReverse = new StringBuffer(leftPart).reverse().toString();
		String myReverse = leftPart + midPart + leftReverse;
		//System.out.println("myReverse = " + myReverse);
		while(input.compareTo(myReverse) >= 0) {
			int temp;
			if(input.length()%2==0) temp = Integer.parseInt(input.substring(input.length()/2 - 1,input.length()/2));
			else temp = Integer.parseInt(midPart);
			temp = temp + 1;
			int carry = 0;
			if(temp == 10){
				carry = 1;
				temp = 0;
			}
			//System.out.println("temp= " + temp);
			if(input.length()%2==0){
				if(carry == 1) leftPart = calculateLeftPart(leftPart);
				else leftPart = leftPart.substring(0 , leftPart.length()-1) + (temp);
				leftReverse = new StringBuffer(leftPart).reverse().toString();
				myReverse = leftPart + leftReverse;
			}
				
			else {
				if(carry == 1) leftPart = calculateLeftPart(leftPart);
				midPart = temp + "";
				leftReverse = new StringBuffer(leftPart).reverse().toString();
				myReverse = leftPart + midPart + leftReverse;
			}
			//System.out.println("leftPart= " + leftPart);
			//System.out.println("myReverse= " + myReverse);
		}
		
		return myReverse;
	}
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner reader = new Scanner(System.in);  // Reading from System.in
		int t = reader.nextInt();
		while(t!=0){
			t--;
			String input = reader.next();
			boolean flag = true;
			for(int i = 0; i<input.length(); i++){
				if(input.charAt(i) != '9')
					flag = false;
			}
			String nextPalin = "";
			if(flag){
				StringBuilder specialCase = new StringBuilder(input);
				for(int i = 0; i<specialCase.length(); i++){
					if(i == 0)
						specialCase.setCharAt(i, '1');
					else specialCase.setCharAt(i, '0');
				}
				StringBuilder extraChar = new StringBuilder("1");
				nextPalin = specialCase.toString() + extraChar.toString();
				//nextPalin = specialCase.toString();
			}
			
			//System.out.println(input.length());
			else 
				nextPalin = checkPalindrome(input);
			System.out.println(nextPalin);
		}
	}
}