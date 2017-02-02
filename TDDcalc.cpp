//Ryan Bay
//Austin La


#include <iostream>
using namespace std;

int addition(int x,int y)
{
	return x + y;
	
}

int substraction(int x, int y)
{
	return x - y;
}


int multiplication(int x , int y)
{
	return x*y;
}

int division(int x , int y)
{
	return x/y;
}



int main()
{
	int num;
	num = addition(4,5);
	cout << num << endl;
	
	num = substraction(4,5);
	cout << num << endl;
	
	num = multiplication(4,5);
	cout << num << endl;
	
	num = division(10,5);
	cout << num << endl;
	
	return 0;
}

