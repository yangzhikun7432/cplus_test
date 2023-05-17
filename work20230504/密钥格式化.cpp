#include<iostream>
#include<string>
using namespace std;
int main(void) {
	int k;
	string str_s;
	string str;
	getline(cin, str_s);
	cin >> k;
	int j = 0;
	for (int i = 0; i < str_s.length(); i++) {
		if (str_s[i] != '-') {
			str[j] = str_s[i];
			j++;
		}
	}
	for (int i = 0; i < str.length(); i++) {
		if (str[i] > 97 && str[i] < 112) {
			str[i] = str[i] - 32;
		}
	}
	int m = str.length()%k;
	for (int i = 0; i < m; i++) {
		cout << str[i];
	}
	cout << '-';
	int t = m;
	for (int j = t; j < str.length()-3;) {
		for (int i = 0; i < 4; i++) {
			cout << str[j + i];
		}
		t = t + 4;
		if (j < str.length() - 4) {
			cout << '-';
		}
	}
	return 0;
}
