#include<iostream>
using namespace std;
int main(void){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		int b;
		cin >> a;
		cin >> b;
		if (a >= 0 && a <= 100000 && b >= 2 && b <= 10) {
			int c[20] = { 0 };
			int m = 0;
			for (m;; m++) {
				if (a / b == 0) {
					c[m] = a % b;
					break;
				}
				else {
					c[m] = a % b;
					a = a / b;
				}
			}
			int n = m;
			int d[20];
			for (int t = 0; t < 20; t++) {
				d[t] = 10;
			}
			if (c[m] != 0) {
				for (int t = 0; t <= m; t++) {
					d[t] = c[n];
					n--;
				}
				for (int t = 0;d[t]!=10; t++) {
					cout << d[t];
				}
				cout << endl;
			}
			else {
				for (int t = 0; t <= m-1; t++) {
					d[t] = c[n-1];
					n--;
				}
				for (int t = 0;; t++) {
					cout << d[t];
				}
				cout << endl;
			}
		}
		
	}
	return 0;
}
