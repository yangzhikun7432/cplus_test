#include<iostream>
using namespace std;
int main(void){
	int bjt;
	cin >> bjt;
	int hour;
	int minute;
	int uh;
	hour = bjt / 100;
	minute = (bjt - hour * 100);
	if (hour < 8) {
		uh = 24 + hour - 8;
	}
	else {
		uh = hour - 8;
	}
	if (uh == 0) {
		cout << minute << endl;
	}
	if (uh > 0 && minute < 10) {
		cout << uh << 0 << minute << endl;
	}
	else {
		cout << uh << minute << endl;
	}
	return 0;
}
