#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

class ATM{                	    // class ATM declaration
	private:		    // member varibles defined with private access modifier
	long int Acc_No;
  	string Mobile_No;
	string Name;
	int PIN;
	double Balance;
	
	
	public:	                      // member functions defined with public access modifier
	
	// setData function is setting the Data into the private member variables
	void setData(){
	}
	//getAccountNo function is returning the user's account no.
	long int getAccountNo(){
		return Acc_No;
	}
	
	//getName function is returning the user's Name
	string getName(){
		return Name;
	}

	//getPIN function is returning the user's PIN
	int getPIN(){
		return PIN;
	}
};
