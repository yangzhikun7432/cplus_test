#include<iostream>
using namespace std;
int main(void){
	int i = 0;
	cin >> i;
	if (i == 1) {
		cout << "Spring" << endl;
	}
	if (i == 2) {
		cout << "Summer" << endl;
	}
	if (i == 3) {
		cout << "Fall" << endl;
	}
	if (i == 4) {
		cout << "Winter" << endl;
	}
	else {
		cout << "error" << endl;
	}
	return 0;
}
