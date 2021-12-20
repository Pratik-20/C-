//Check Given Number is Panlindrome or Not..


#include <iostream.h>
#include <conio.h>  
int main()
{
    int a,b,c,d;
    cout<<"Enter Number:- ;";
    cin>>a;
    b=a;
    c=0;
    while(a>0)
    {
    	d=a%10;
    	c=(c*10)+d;
    	a=a/10;
    }
    if (c==b)
    cout<<" Number is Palindrome"; 
    else
    cout<<" Number is Not Palindrome"; 
    getch();
}
 