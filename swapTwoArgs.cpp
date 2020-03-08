#include <iostream>

using namespace std;

template <typename T>
void swapTwoArgs(T& a, T& b) {
	if (typeid(bool) == typeid(T)) {
		cout << "Unexcpected types" << endl;
		return;
	}
	swap(a, b);
}