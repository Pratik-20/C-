/*Take any N*Natrix  (N<=20) as input and Print it*/



#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	int arr[20][20];
	cout<<"Enter N*N Matrix Size =  ";
	cin>>a;
	for(b=1;b<=a;b++)
	{
		for(c=1;c<=a;c++)
		{
			cin>>arr[b][c];
			
		}
	}
	cout<<"Here is Matrix =  ,\n";
		for(b=1;b<=a;b++)
	{
		for(c=1;c<=a;c++)
		{
			cout<<arr[b] [c];
			cout<<" ";
			
		}
		cout<<"  \n";
	}
	getch();
}