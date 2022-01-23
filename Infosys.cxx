#include<iostream.h> 
#include<conio.h>    
void main()    
{
    int i,j,sum=0,k=45; 
    for (i=3; i>0; i--)
    {
        for (j=0; j<=i;j++){
        if ((j!=i))
            sum+= sum+ k*i;
        else          
            sum-=sum-k;}
            k++;
    }
    cout<<sum;
    getch();
}