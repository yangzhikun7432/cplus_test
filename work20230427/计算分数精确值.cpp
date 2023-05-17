#include<iostream>
using namespace std;
int main(void) {
	int a, b;
	char ch;
	cin >> a >> ch >> b;
	cout << 0 << '.';
	for (int i = 0; i <= 200; i++) {
		if (a != 0) {
			cout << a * 10 / b;
			a = a * 10 % b;
		}
	}
}
