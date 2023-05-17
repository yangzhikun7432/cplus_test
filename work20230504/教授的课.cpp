#include<iostream>
using namespace std;
int IsCancel(int a[], int n, int k);
int main(void) {
	int n, k;
	cin >> n >> k;
	int a[1000];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	IsCancel(a, n, k);
	if (IsCancel(a, n, k)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}
int IsCancel(int a[], int n, int k) {
	int num = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			num++;
		}
		else {
			;
		}
	}
	if (num > n - k) {
		return 1;
	}
	else {
		return 0;
	}
}
