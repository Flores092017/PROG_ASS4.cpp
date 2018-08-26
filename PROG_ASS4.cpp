/*
Author: M.S Flors
Program: Work Problem
Description: This program determines the income of tim per day.
*/
#include <iostream>
using namespace std;
int main()
{
	//Initialize the variables
	int c;
	float a,d;
	double b;
	string again="yes";
	
	while (again=="yes"||again=="Yes"||again=="YES")
	{
	//title of the program
	    cout << " Work Problem" << "\n" << endl;
		
	// problem to be program
		cout <<" Tim gets $1.5 dollars for delivering the paper. ";
		cout << "Each hour he can deliver 2 papers.";
		cout <<"If you were his boss .Enter number of hours you will let him to work in a day. ";
		cout << "How much money Tim will earn in a day?. ";
		cout << "Note: Answers should be represented in pesos. Each dollar is amounted to 53.30 in pesos " <<"\n\n"<< endl;
		
	//Prompt the user to enter input
		cout << "Enter the number of hours you will let Tim work: ";
		cin >> a;
		cout <<"\n\n";
		
	//formulas that is to use
		b=1.5*53.30;
		c=2*b;
	    d=a*c;
	    
	//the output of the program 
		cout <<" Tim will earn " << d << " pesos in a day."<< endl;
		
	//loop to try it again
	     cout << "\n\n Do you want to try it again? (yes/no):";
	     cin  >> again;
	     cout << "\n\n";
    }
 return 0;
}

