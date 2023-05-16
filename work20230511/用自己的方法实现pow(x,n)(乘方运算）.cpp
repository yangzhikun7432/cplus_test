#include<iostream>
#include<string>
using namespace std;
int main(void) {
	int x = 0;
	int n = 0;
	int t = 0;
	char a;
	cin >> x>>a >> n;
	t = x;
	if (n == 0) {
		cout << 1;
	}
	else if (n == 1) {
		cout << x;
	}
	else {
		for (int i = 1; i < n; i++) {
			x = x * t;
		}
		cout << x;
	}
	
	return 0;
}
