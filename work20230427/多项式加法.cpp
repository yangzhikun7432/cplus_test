#include<iostream>
using namespace std;
int main(void) {
	int a0[10];
	int a1[10];
	int b0[10];
	int b1[10];
	int sum0[20];
	int sum1[20];
	for (int i = 0;; i++) {
		cin >> a0[i] >> a1[i];
		if (a0[i] == 0) {
			break;
		}
	}
	for (int i = 0;; i++) {
		cin >> b0[i] >> b1[i];
		if (b0[i] == 0) {
			break;
		}
	}
	int j = 0;
	int h = 0;
	for (int i = 0;; i++) {
		for (int t = h;; t++) {
			if (a0[i] < b0[t]) {
				sum0[j] = b0[t];
				sum1[j] = b1[t];
				j++;
				h = t;
			}
			if (a0[i] == b0[t]) {
				a1[i] = a1[i] + b1[i];
				sum0[j] = a0[i];
				sum1[j] = a1[i];
				j++;
				break;
			}
			if (a0[i] > b0[t]) {
				sum0[j] = a0[i];
				sum1[j] = a1[i];
				j++;
				break;
			}
		}
	}
	for (int j = 0;; j++) {
		if (sum0[j] != 0) {
			cout << sum1[j] << 'x' << sum0[j] << '+';
		}
		else {
			cout << sum1[j] << 'x' << endl;
		}
	}
}
