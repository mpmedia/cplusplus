#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(int nNumberofArgs,char* pszArgs[])
{
	int celsius;
	cout <<"Enter the temperature in Celsius : "<<endl;
	cin >> celsius;
	int factor;
	factor =212 - 32;
	int fahrenheit;
	fahrenheit =factor * celsius/100+32;
	cout << "Fahrenheit value is : ";
	cout << fahrenheit << endl;
	return 0;
}
