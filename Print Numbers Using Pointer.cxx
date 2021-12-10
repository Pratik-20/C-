/*Write a C++ Program to accept a set of 10 numbers and print the numbers using pointer*/

#include<iostream.h>
#include<conio.h>
void main()
{
	int arr[10],i,*p;
	clrscr();
	cout<<"Enter 10 Numbers"<<endl;
	for (int i=0;i<=9;i++){
	cin>>arr[i];}
	p=&arr[0];
	cout<<"\n The Numbers are \n";
	for (int i=0;i<=9;i++){
		cout<<*p<<"\n";
		p++;}
	getch();
}
	