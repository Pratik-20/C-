#include<iostream.h>
#include<conio.h>
void main()
{
	int n;
	string str;
	
	cout<<"Enter A String = ";
	cin>>str;
	
	n=str.length();
	cout<<"String Length Is = "<<n<<endl;
	
	for (int i =0; i<n/2;i++)
		swap(str[i],str[n-i-1]);
		
	cout<<"Reverse String Is = "<<str<<endl;
	
	getch();
}