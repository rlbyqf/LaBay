//Ryan Bay
//Austin La



#include <iostream>
#include <iomanip>
using namespace std;

float addition(int x,int y)
{
	return x + y;
}

float subtraction(float x, float y)
{
	return x - y;
}


float multiplication(float x , float y)
{
	return x*y;
}

float division(float x , float y)
{
	return x/y;
}



int main()
{
	float num;
	float x;
	float y;
	char leave;
	
	cout << "Hello! Welcome to the a simple calculator!"<<endl;
	while(1)
	{
		cout << "Which operation would you like to perform?(enter a number): " <<endl;
		cout << "(1) Addition"<<endl;
		cout << "(2) Subtraction"<<endl;
		cout << "(3) Multiplication"<<endl;
		cout << "(4) Division" <<endl;
		cin >> num;
	
		if(num==1)
		{
			cout << "Please enter the two numbers to be added" <<endl;
			cin >> x;
			cin >> y;
			cout << setprecision(8) << addition(x,y)<<endl;
		}
	
		if(num==2)
		{
			cout << "Please enter the two numbers to be subtracted" << endl;
			cin >> x;
			cin >> y;
			cout << setprecision(8) << subtraction(x,y)<<endl;
		}
	
		if(num==3)
		{
			cout << "Please enter the two numbers to be multiplied" << endl;
			cin >> x;
			cin >> y;
			cout << setprecision(8) << multiplication(x,y)<<endl;
		}
	
		if(num==4)
		{
			cout << "Please enter the two numbers to be divided" << endl;
			cin >> x;
			cin >> y;
			cout << setprecision(8) << division(x,y)<<endl;
		}
	
		cout << "Would you like to perform another operation?(y/n)" <<endl;
		cin >> leave;
		
		if(leave=='n' || leave=='N')
		{
			return 0;
		}
	}
	
	
	
	
	

}

