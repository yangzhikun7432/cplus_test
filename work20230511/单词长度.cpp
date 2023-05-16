#include<iostream>
#include<string>
using namespace std;
int main(void) {
	char a[100] = { 0 };
	int num[20] = { 0 };
	int t = 0;
	for (int i = 0; i < 100; i++) {
		cin >> noskipws >> a[i];
		if (a[i] == '.') {
			break;
		}
		else if (a[i] != ' ') {
			num[t]++;
		}
		else {
			t++;
		}
	}
	for (int i = 0; i <= t; i++) {
		if (i != t) {
			cout << num[i] << ' ';
		}
		else {
			cout << num[t];
		}
	}
	return 0;
}
