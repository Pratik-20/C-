 /*You are given an integer N and integer array A, as the input where N denotes the length of A. Write a program to find the product of every element with its next consecutive integer on the number line and return the sum of all these products.
 
 Example :-
 Array = [1, 2, 3, 5]
 Result = 1*2 +253 +34 + 5*6 = 2+6+12+30 = 50
 */
 
 
 #include<iostream.h>
 #include<conio.h>
 int main()
 {
 	int n;
 	int sum=0;
 	
 	cout<<"Enter Array Size = ";
 	cin>>n;
 	int a[n];          
          // First array to store integer Numbers
 	int b[n];
 	// Second array to store Successor
 	int c[n];
 	// Third array to stote integer Numbers and Successor Multiplication
 	cout<<"Enter Array = ";
 	
 	for (int i =0;i<n;i++){
 		cin>>a[i];
 		b[i]=a[i]+1;
 		c[i]= b[i] * a[i];
 	    sum= sum+c[i]; 	      
 	}
 	
 	cout<<sum;	 
  getch(); 
 }
