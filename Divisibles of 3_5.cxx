/*Print number divisible by 3 and 5 from given range but it should not be divisible by bot 3&5
example:-

Input :
10              //initial number
20              //last number

output:
10              //15 should not be printed
12
18
20
______________________________________________________________________________________
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	int x,y;
	cin>>x>>y;
	
	for( x==0;x<=y;x++){	      	      
	      if ((x%3==0) and  (x%5==0))
	        cout<<"";
	      else if  (x%5==0)
	         cout<< x<<endl;
	      else if (x%3==0)
	         cout<< x<<endl;
	      else{
	      	cout<<"";}
	}
	getch();
}