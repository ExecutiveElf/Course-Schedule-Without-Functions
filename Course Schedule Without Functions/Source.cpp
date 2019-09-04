/* Benjamin Roe
 C++ Fall 2019
 Due September 12, 2019
 Lab 2 Exploring Output
 Getting Class Schedule and Checker Board to display.
*/

#include <iostream>
using namespace std;

const string Calc = "	 8:00	Calculus 210";
const string Coll = "	11:30	College Experience 108";
const string Cpp = "	12:40	C++ 162";
const string Mon = "Monday	";
const string Tue = "Tuesday	";
const string Wed = "Wednesday";
const string Thu = "Thursday";
const string Fri = "Friday	";

int main()
{
	cout << Mon << Calc << endl;
	cout << Mon << Coll << endl;
	cout << Mon << Cpp << endl;
	cout << endl;
	cout << Tue << Calc << endl;
	cout << Tue << Cpp << endl;
	cout << endl;
	cout << Wed << Calc << endl;
	cout << Wed << Coll << endl;
	cout << Wed << Cpp << endl;
	cout << endl;
	cout << Thu << Calc << endl;
	cout << Thu << Cpp << endl;
	cout << endl;
	cout << Fri << Coll << endl;
	cout << endl;
	return 0;
}