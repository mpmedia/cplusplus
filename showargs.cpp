#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(int argc,char* argv[])
{
	cout << "this program shows arguments passed to the program" << endl;
	int i;
	for(i=0;i<argc;i++){
		cout << " argument ";
		cout << i ;
		cout << " : " ; 
		cout << argv[i] << endl;
	}
	system("PAUSE");
	return 0;
}
