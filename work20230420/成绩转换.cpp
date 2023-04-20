#include<iostream>
using namespace std;
int main(void){
	int i = 0;
	cin >> i;
	if (i <60) {
		cout << 'E' << endl;
	}
	if (i < 70 && i >= 60) {
		cout << 'D' << endl;
	}
	if (i < 80 && i >= 70) {
		cout << 'C' << endl;
	}
	if (i < 90 && i >= 80) {
		cout << 'B' << endl;
	}
	if (i >= 90) {
		cout << 'A' << endl;
	}
	return 0;
}
