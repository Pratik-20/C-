#include<iostream.h>
#include<conio.h>
int main()
{
    int a,b,c;
    int i = 1;
    cout<<"Enter a Number = ";
    cin>>a;
    cout<<"Number is = "<<a<<"\n";
  for(b=0;b<=a;b++) {
     if (a%i==0)
        cout<<i<<"\n";
    else
        cout<<"";
        i+=1;
  }
}
