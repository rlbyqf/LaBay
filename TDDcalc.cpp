//Ryan Bay
//Austin La



#include <iostream>
using namespace std;

int addition(int x,int y)
{
	return x + y;
}

int subtraction(int x, int y)
{
	return x - y;
}


int multiplication(int x , int y)
{
	return x*y;
}

float division(int x , float y)
{
	return x/y;
}



int main()
{
	int num;
	int x;
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
			cout << addition(x,y)<<endl;
		}
	
		if(num==2)
		{
			cout << "Please enter the two numbers to be subtracted" << endl;
			cin >> x;
			cin >> y;
			cout << subtraction(x,y)<<endl;
		}
	
		if(num==3)
		{
			cout << "Please enter the two numbers to be multiplied" << endl;
			cin >> x;
			cin >> y;
			cout << multiplication(x,y)<<endl;
		}
	
		if(num==4)
		{
			cout << "Please enter the two numbers to be divided" << endl;
			cin >> x;
			cin >> y;
			cout << division(x,y)<<endl;
		}
	
		cout << "Would you like to perform another operation?(y/n)" <<endl;
		cin >> leave;
		
		if(leave=='n' || leave=='N')
		{
			return 0;
		}
	}
	
	
	
	
	

}

