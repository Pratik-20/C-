#include<iostream.h>
#include<conio.h>

int main()
{
	int number, lastDigit;
	
	cout << "\nPlease Enter Any Number to find Last Digit =  ";
	cin >> number;
  	
  	lastDigit = number % 10;
  	
	cout << "\nThe Last Digit in a Given Number " << number << " = " << lastDigit; 
		
 	return 0;
}