#include<iostream.h> 
#include<conio.h>
#include<math.h>
class SF
{
    public:
    int i,j,n,q,l,r;
    int a=0;
    
    public:
    void inn()
    {
    cin>>n;
    int arr[n];
    for (i=0; i<n; i++)   
        cin>>arr[i];
    }
    
    public:
    void inq()
    {
        int arr[n];
        for (i=0; i<n; i++)
        {
        for(j=0; j<n; j++)
        {
        if ((arr[i])==(arr[j]))
            a++;
        else
            cout<<"";
         }
        cout<<"    "<<arr[i]<<"    "<<a<<endl;
        a=0;
    }
    }
    
};
int main()
{
  SF a1;
  a1.inn();
  a1.inq();
  getch();
}