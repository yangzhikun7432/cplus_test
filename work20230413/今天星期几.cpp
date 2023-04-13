#include<iostream>
using namespace std;//输入方式有错，注意修改
int main(void){
	int a[10] = { 0 };
	char b[2];
	cin >> a[0];
	cin >> b[0];
	cin >> a[1];
	cin >> b[1];
	cin >> a[2];
	int years = a[0]-1900;
	int doy = years * 365 + years / 4;
	int dom = 0;
	if (a[0] % 4 == 0) {
		switch (a[1]) {
		case 1: dom = 0; break;
		case 2: dom = 31; break;
		case 3: dom = 60; break;
		case 4: dom = 91; break;
		case 5: dom = 121; break;
		case 6: dom = 152; break;
		case 7: dom = 182; break;
		case 8: dom = 213; break;
		case 9: dom = 244; break;
		case 10: dom = 274; break;
		case 11: dom = 305; break;
		case 12: dom = 335; break;
		}
	}
	else {
		switch (a[1]) {
		case 1: dom = 0; break;
		case 2: dom = 31; break;
		case 3: dom = 60-1; break;
		case 4: dom = 91 - 1; break;
		case 5: dom = 121 - 1; break;
		case 6: dom = 152 - 1; break;
		case 7: dom = 182 - 1; break;
		case 8: dom = 213 - 1; break;
		case 9: dom = 244 - 1; break;
		case 10: dom = 274 - 1; break;
		case 11: dom = 305 - 1; break;
		case 12: dom = 335 - 1; break;
		}
	}
	int days = doy + dom + a[2]+1;
	switch (days % 7) {
	case 0:cout << "Sunday";
	case 1:cout << "Monday";
	case 2:cout << "Tuesday";
	case 3:cout << "Wednesday";
	case 4:cout << "Thursday";
	case 5:cout << "Friday";
	case 6:cout << "Saturday";
	}
	return 0;
}
