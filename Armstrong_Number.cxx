#include<iostream.h>
#include<conio.h>
void main()
{
	int a,r,sum=0;
	cin>>a;
	int temp ;
	temp = a;
	while(a>0)
	{
		r= a%10;
		sum= sum+(r*r*r);
		a=a/10;
	}
	if (sum==temp)
	cout<<"Armstrong Number"<<endl;
	else
	cout<<"Not Armstrong Number"<<endl;
	getch();
}