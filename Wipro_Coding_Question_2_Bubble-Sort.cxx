//Bubble Sort Algorithm

/*Question 2
Write a program to implement a bubble sort algorithm for sorting the elements of an array. We are given with a array of N elements and we need to sort them in ascending order. But in this question we need to use Bubble sort, to sort the given array.

Input Format:

The first line corresponds to the size of an array.
The second line corresponds to the elements.
Output Format:

Print the N elements of the array in ascending order.

Sample Input:

6

11 15 26 38 9 10 

Sample Output:

9 10 11 15 26 38

Explanation :

Here, we have 6 elements and array elements are 11 15 26 38 9 10, Sorted array in ascending order will be 9 10 11 15 26 38.*/
//______________________________________________________________________________________

#include<iostream.h>      // Header File
using namespace std;

int main(){
	
	
	int n;              //Take input Numbers count
	cin>>n;
	
	int arr[n];       // Make an array of input no.s
	
	for (int i=0;i<n;i++)     // Take input  in the form of array
	cin>> arr[i];
	
	int c,d;                           // lets take another two integer variable which will be needed for sorting for counting position of element
	c= 0, d=n-1;   // set one at initial count i.e. C at 0 ,and another  at last position which is d as n-1
	
	// Logic:-  In this bubble sort we are going to trace each object from both sides, means via initial and last element of array so that it will save our time
	
	
	
	
	while(c<d){
		while(arr[c] %2 == 0 and c<d)    // Trace each no. from starting of array if it's even no then move to next no.
		c++;
		
		while(arr[d] %2 != 0 and c<d)  //Trace each no. from ending of array if it's odd no then move to previous no.
		d--;
		
		if (c<d){
		swap(arr[c],arr[d]);   // if both the conditions which are mentioned above gets failed then swap the position of elements
		c++;
		d--;
	}
	}
	
    for (int i=0;i<n;i++)     
	cout<<arr[i]<<" ";      //print result with having a space between two no.s

	return 0;
}