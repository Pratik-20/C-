#include<iostream.h> 
#include<conio.h>    
void main()    
{
    int i,j,sum=0,ar[]={3,1,5,4}; 
    for (i=0; i<4;i++)
    {
         for (j=0; j<4;j++)
         {
            if ((ar[i]%2)==(ar[j]%2))
            ar[j]=ar[j]+ar[j];
            sum=sum+ar[i];
           }
     
    }
    int k=0;
    k=ar[1];
    sum= sum%k;
    cout<<"    "<<sum;
    getch();
}