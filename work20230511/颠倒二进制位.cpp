#include<iostream>
#include<string>
using namespace std;
int main(void) {
	string a;
	char b[100];
	cin >> a;
	int t = 0;
	for (int i = 0; a[i]=='0'||a[i]=='1'; i++) {
		t++;
	}
	int x = t;
	for (int i = 0; t >= 0; i++) {
		b[i] = a[t];
		t--;
	}
	for (int i = 0; i <= x; i++) {
		cout << b[i];
	}
	return 0;
}
