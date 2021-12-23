//Write a C++ program to show Single Inheritance

#include <iostream.h>
#include <conio.h>
class student                //Base Class defined
{                                      
  public:                           //Access member
	int roll;                         // Members
	float marks;
	string name;

	void getdata()            //Member Function
	{
		{
			cout << "Enter Student Name = " ;
			cin >> name,"\n";

			cout << "Enter Roll Number = " ;
			cin >> roll,"\n";

			cout << "Enter Marks = ";
			cin >> marks,"\n";
		}
	}
};

class Sports:public student        //Derived Class
{
  public:                                 //Access member
	string game;                    //Members
	int rank;
	float mark;

	void get()                          // Member Function

	{
		{
			cout << "Enter Game Name = " ;
			cin >> game,"\n";
			cout << "Enter Rank = " ;
			cin >> rank,"\n";

			cout << "Enter Marks in Sport= ";
			cin >> mark,"\n";
		}
	}
};

int main()
{
	student S1, S2;          //Objects Of Base Class
	Sports D1, D2;            //Objects Of Derived Class
	//S1.getdata();             // Remove Commemt to see function Call
	D1.getdata();              //Function Call in derived class
	D1.get();
	//S2.getdata();
	D2.getdata();
	//S2.get;                      // check error by removing comment (//) 
	D2.get();
	getch();
}