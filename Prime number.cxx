//To check Prime Number

#include<iostream.h>
#include<conio.h>
void main()
{
    int a,b,c,d;
    cout<<"Enter a Number:-  ";
    cin>>a;
    b= a/2;
    c=0;
    for (int i=2;i<=b;i++)
    {
        if (a%i==0)
        {
        c=1;
        cout<<"Number is not prime";
        break;
        }
    }
    if(c==0)    
    cout<<"Number is prime";
    getch();
}
