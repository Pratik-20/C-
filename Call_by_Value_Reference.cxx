#include<iostream.h>
#include<conio.h>

// Call By Value

//Value of " i "  is accessed by creating new integer variable " a "
int CBV(int a)
{
    int b = 20;
    int c =(a+b);
    cout<<" Call By Value\n";
    cout<<" Addition is = "<<c<<endl;
}

// Call By Reference

//Adreess  of i is taken " &i " then value present at adress is accessed by using " *a "
int CBR(int *a)          
{
    
    int b = 20;
    int c =(*a+b);
    cout<<" Call By Reference\n";
    cout<<" Addition is = "<<c<<endl;
}

int main()
{
    clrscr();
    int i = 10;
    
    // Calling Call by Value Function
    CBV(i);
    
    cout<<"    "<<endl;
    
    // Calling Call by Reference Function
    CBR(&i);
    
    getch();
}
