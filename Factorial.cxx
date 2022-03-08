#include<iostream.h>
#include<conio.h>
void main()
{
	int fact=1,n;
	cin>>n;
	for(int i=1;i<=n;i++){
		fact=fact*i;
		cout<<"\n"<<fact;}
	if (n==0)
	cout<<"1";
	getch();
}