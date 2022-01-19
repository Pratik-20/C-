#include<iostream.h>
#include<conio.h>
void main()
{
    int a,b;
    
    cout<<"Enter A = ";
    cin>>a;
    cout<<"Enter B = ";
    cin>>b;
    
    cout<<"After Swapping "<<endl;
    swap(a,b);        
    
    cout<<"A is = ";
    cout<<a<<endl; 
    cout<<"B is = ";  
    cout<<b<<endl;   
  
    getch();
}