#include<iostream>
using namespace std;
int main(void) {
	int i;
	cin >> i;
	if (i >= 0 && i <= 15) {
		int a[15][15];
		for (int j = 0; j < i; j++) {
			a[j][0] = 1;
		}
		for (int j = 0; j < i; j++) {
			a[j][j] = 1;
		}
		for (int j = 2; j < i; j++) {
			for (int t = 1; t < j; t++) {
				a[j][t] = a[j - 1][t - 1] + a[j - 1][t];
			}
		}
		int j = 0;
		int t = 0;
		for (j; j < i; j++) {
			int m = i - j - 1;//每一行前空格数
			for (int n = 1; n <= m; n++) {
				cout << ' ';
			}
			for (t; t <= j; t++) {
				cout << a[j][t] << ' ';
			}
			cout << endl;
			t = 0;
		}
	}
	return 0;
}
