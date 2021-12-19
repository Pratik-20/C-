//To check Prime Number

#include<iostream.h>
#include<conio.h>
void main()
{
	int n, m =0,flag =0;
	cout<<"Enter Number :- ";
	cin>>n;
	for (int i =2;i<=m;i++){
	if (n%i==0){
	cout<<"Non- Prime Number";
	flag =1;
	break;}}
	if(flag==0)
	cout<<"Prime Number";
	getch();
}