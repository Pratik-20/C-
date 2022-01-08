#include<iostream.h>
#include<conio.h>
class monk
{
	public:
	int a,b,c,d;
	int arr[20][20];
		
	public:
	void gd()
	{
		cout<<"Enter N*N Matrix Size =  ";
	    cin>>a;
	    for(int b=1;b<=a;b++)
	    {
	    	for(c=1;c<=a;c++)
			cin>>arr[b][c];
		}
	}
	public:
	void res()
	{
		cout<<"Here is Matrix =  ,\n";
		for(int b=1;b<=a;b++)
		{
			for(c=1;c<=a;c++)
			{
			cout<<arr[b] [c];
			cout<<" ";
			}
			cout<<"  \n";
		}
	}			
};
int main()
{
	monk a1;
	a1.gd();
	a1.res();
	getch();
}