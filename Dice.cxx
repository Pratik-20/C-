//Create a C++ Program which can display random number from 1-6 

//Dice Program

  #include<iostream.h>
 #include<conio.h>
 int main()
 {
 	int a;
 	srand (time(NULL));
 	a=rand()%6+1;
 	cout<<"Dice value is:- "<<a;
 	return 0;
 }