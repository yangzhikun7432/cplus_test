#include<iostream>
using namespace std;
int main(void){
	int i = 0;
	cin >> i;
	if (i <= 10 && i >= 1) {
		cout << "Children" << endl;
	}
	if (i <= 20 && i >= 11) {
		cout << "Teenagers" << endl;
	}
	if (i <= 40 && i >= 21) {
		cout << "Youth" << endl;
	}
	if (i <= 50 && i >= 41) {
		cout << "middle-aged" << endl;
	}
	if (i <= 80 && i >= 51) {
		cout << "Elderly" << endl;
	}
	if (i <= 100 && i >= 81) {
		cout << "Old man" << endl;
	}
	return 0;
}
