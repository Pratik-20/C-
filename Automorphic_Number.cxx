/*Question 1. Check whether a number is Automorphic number or not ?

Hint: An automorphic number is a number whose square ends with the number itself.

For example, 5 is an automorphic number, 5*5 =25. The last digit is 5 which same as the given number. 
It has only a positive single digit number. 
If the number is not valid, it should display “Invalid input“.
If it is an automorphic number display “Automorphic Number” else display “Not Automorphic Number”.

Input & Output format: Input consist of an integer.

Sample Input : 7

Sample Output : Not Automorphic Number

Another example of automorphic number is 
6*6 =  36
25*25 = 625
76*76= 5776

Here all square ends with the number itself like square of 76 ends with 76 itself.*/

#include<iostream.h>
#include<conio.h>
int main()
{
	int n,m,t,p;
	cout<<"Enter a number = ";
	cin>>n;
	m= n*n;
	//cout<<m;
	p = m%10; 
	 //cout<<"Last digit of square or multiplication="<<p;
	t = n%10;
	//cout<<"Last digit of Input="<<t;;
	
	if(p==t)         // condition 
	cout<<n<<" is Automorphic Number\n";
	else
	cout<<n<<" is Not Automorphic Number\n";
	return 0;
}



