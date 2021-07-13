#include<iostream.h>
#include<conio.h>
int main()
{
	int i,j,n;    
	cout<<"Enter N^th number ";   
	cin>>n;	

    	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++)		
		cout<<"*";     
		cout<<"\n";    
	}
}