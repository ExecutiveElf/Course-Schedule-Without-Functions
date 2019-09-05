/* Benjamin Roe
 C++ Fall 2019
 Due September 12, 2019
 Lab 2 Exploring Output
 Getting Class Schedule and Checker Board to display.
*/

#include <iostream>
using namespace std;

//Strings defining my classes
const string Calc = "	 8:00	Calculus 210";
const string Coll = "	11:30	College Experience 108";
const string Cpp = "	12:40	C++ 162";

//Strings defining each day of the week
const string Mon = "Monday	";
const string Tue = "Tuesday	";
const string Wed = "Wednesday";
const string Thu = "Thursday";
const string Fri = "Friday	";

/*Assembling the strings into my course schedule by having a day of the
week followed by a class and then ending the line.*/
int main()
{
	//Monday
	cout << Mon << Calc << endl;
	cout << Mon << Coll << endl;
	cout << Mon << Cpp << endl;
	cout << endl;
	//Tuesday
	cout << Tue << Calc << endl;
	cout << Tue << Cpp << endl;
	cout << endl;
	//Wednesday
	cout << Wed << Calc << endl;
	cout << Wed << Coll << endl;
	cout << Wed << Cpp << endl;
	cout << endl;
	//Thursday
	cout << Thu << Calc << endl;
	cout << Thu << Cpp << endl;
	cout << endl;
	//Friday
	cout << Fri << Coll << endl;
	cout << endl;
	return 0;
}