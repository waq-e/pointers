#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {
	int i = 5;
	int j = 6;

	// Print the memory addresses of i and j
	cout << "The address of i is: " << &i << "\n";
	cout << "The address of j is: " << &j << "\n";

	// Vector v is declared and initialized to {1, 2, 3}
	vector<int> v {1, 2, 3};

	// Declare and initialize a pointer to the address of v here:
	vector<int> * vp = &v;

	// The following loops over each int a in the vector v and prints.
	// Note that this uses a "range-based" for loop:
	// https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Res-for-range
	for (int a: v) {
		cout << a << "\n";
	}

	// Dereference your pointer to v and print the int at index 0 here (note: you should print 1):
	cout << (*vp)[0] << '\n';

}