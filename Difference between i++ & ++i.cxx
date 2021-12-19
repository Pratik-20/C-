//What is difference between i++ & ++i.

#include<iostream.h>
#include<conio.h>
void main()
{
	int i;
	i = 10;
	
	cout<<"For i++"<<endl;     
	for (int a=1;a<=5;a++)                     
	cout<<i++<<endl;    
	
    i = 10;
	cout<<"For ++i"<<endl;         
	for (int a=1;a<=5;a++)                     
	cout<<++i<<endl;             
	getch();
}
	
