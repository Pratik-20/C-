#include<iostream.h>
#include<conio.h>
int main()
{
	int i,j,n;    //We need three vatiables N will be last no. ,i represent x direction ,j represent y direction
	cout<<"Enter N^th number ";   // Take input
	cin>>n;	
	// Logic of program
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)		
		cout<<"*";     // print this *
		cout<<"\n";    // shift to  the line
	}
}