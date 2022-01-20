#include<iostream.h>
#include<conio.h>
void main()
{
    int a,b;
    int sum = 0;
    cout<<"Enter Starting Number : ";
    cin>>a;
    cout<<"Enter Ending Number : ";
    cin>>b;
    for(int i = a;i<=b;i++)
        sum= sum+i;
    cout<<"Sum is "<<sum;
    getch();
}