#include<iostream>
using namespace std;
int main(void) {
	int i = 0;
	cin >> i;
	if (i >= 0 && i <= 32767) {
		int a[10];
		int t = 1;
		int m = 0;
		for (;;) {
			if (i / t != 0) {
				t = t * 8;
				m++;
			}
			else
				break;
		}//最后m为8进制的位数
		t = t / 8;
		for (int n = 0; n < m; n++) {
			if (n == 0) {
				a[n] = i / t;
				i = i - a[n] * t;
				t = t / 8;
			}
			if (n >= 1) {
				a[n] = i / t;
				i = i - a[n] * t;
				t = t / 8;
			}
		}
		for (int n = 0; n < m; n++) {
			cout << a[n];
		}
	}
	return 0;
}
