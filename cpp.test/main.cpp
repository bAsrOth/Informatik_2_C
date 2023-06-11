#include <iostream>
using namespace std;
int main()
{
	cout << "Size of bool is: " << sizeof(bool) << " bytes" << endl;
	cout << "Size of char is: " << sizeof(char) << " bytes" << endl;
	cout << "Size of int is: " << sizeof(int) << " bytes" << endl;
	cout << "Size of short int is: " << sizeof(short int) << " bytes" << endl;
	cout << "Size of long int is: " << sizeof(long int) << " bytes" << endl;
	cout << "Size of signed long int is: " << sizeof(signed long int) << " bytes" << endl;
	cout << "Size of unsigned long int is: " << sizeof(unsigned long int) << " bytes" << endl;
	cout << "Size of float is: " << sizeof(float) << " bytes" << endl;
	cout << "Size of double is: " << sizeof(double) << " bytes" << endl;
	cout << "Size of wchar_t is: " << sizeof(wchar_t) << " bytes" << endl;
	getchar();
	return 0;
}