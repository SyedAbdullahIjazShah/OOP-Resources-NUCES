//What is wrong with code segment below?
#include<iostream>
using namespace std;

void main()
{

	//Solution 1: char stdList[40][50]
	
	/*Solution 2: char* list[40];
	for()
	cin>>list[i];//????
	*/
	/*Solution 3: char** list;
	*/



	//char** stdList ... Keep all the data on heap


	//Test 1
	/*char* firstName =0;
	char* lastName = 0;

	cout << "Enter First Name:\t";
	cin >> firstName;	

	cout << "Enter Last Name:\t";
	cin >> lastName;	

	cout << "User Entered Name:\t" << firstName << " " << lastName << endl << endl;
*/
	//Test 2 - Try above code without initializing the pointers to null

	char arr1[20];
	char arr2[20];

	char* firstName = arr1;
	char* lastName = arr2;

	cout << "Enter First Name:\t";
	cin >> firstName;	

	cout << "Enter Last Name:\t";
	cin >> lastName;	

	cout << "User Entered Name:\t" << firstName << " " << lastName << endl << endl;

	
	//char* firstName = new char[20];
	//char* lastName = new char[20];

	//cout << "Enter First Name:\t";
	//cin >> firstName;	

	//cout << "Enter Last Name:\t";
	//cin >> lastName;	

	//cout << "User Entered Name:\t" << firstName << " " << lastName << endl << endl;

}