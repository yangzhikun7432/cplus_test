#include<iostream>
using namespace std;
int main(void){
	int N = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		long int m = 0;
		int k = 0;
		long int a[100000] = { 0 };
		cin >> m;
		cin >> k;
		a[0] = m + 1;
		int num = 0;
		for (int t = 1; t < 100000; t++) {
			a[t] = a[t - 1] + 1;
		}
		for (int t = 0; t < 100000&&num<=k; t++) {
			int b[100] = { 0 };
			int k = 10;
			for (; a[t] / k != 0; ) {
				k = k * 10;
			}
			k = k / 10;
			int h = 0;
			int d = 0;
			for (h; k >= 1; h++) {
				if (h == 0) {
					b[h] = a[i] / k;
				}
				else {
					b[h] = (a[i] - d) / k;
				}
				d = d + b[h] * k;
				k = k / 10;
			}
			h--;
			for (int j = 0;;) {
				if (j <= h / 2 && a[j] == a[h - j]) {
					j++;
				}
				else if (j <= h / 2 && a[j] != a[h - j]) {
					break;
				}
				else if (j > h / 2) {
					num++;
					cout << a[t];
					break;
				}
			}
		}
	}
	return 0;
}

