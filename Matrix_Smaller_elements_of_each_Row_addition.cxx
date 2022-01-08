/* Get input of matrix 2*2  arr[a][z],
add minimum number of ach row and print count*/

#include<iostream.h>
#include<conio.h>
class monk
{
	public:
	int t=0;
	int a,b,c,d,z;	
	int arr[20][20];
		
	public:
	void gd()
	{
		cout<<"Enter Matrix Row Size =  ";
	    cin>>a;
	    cout<<"Enter Matrix Column Size =  ";
	    cin>>z;
	    for(int b=1;b<=a;b++)
	    {
	    	for(c=1;c<=z;c++)
			cin>>arr[b][c];
		}
	}
	public:
	void res()
	{   
		cout<<"Here is Matrix =  ,\n";
		for(int b=1;b<=a;b++)
		{
			for(c=1;c<=z;c++)
			{
			cout<<arr[b] [c];
			cout<<"  ";
			}
			cout<<"   \n"; 
		}
	}
	public:
	int rt()
	{		
		for(int b=1;b<=a;b++)
		{
			int s=arr[b][1];
			for(c=1;c<=z;c++)
			{
				if (arr[b][c]<s)
					s = arr[b][c];
			}
			cout<<"      ";
			t+=s;
			}	
		cout<<t;		
		}			
};
int main()
{
	monk a1;
	a1.gd();
	a1.res();
	a1.rt();
	getch();
}