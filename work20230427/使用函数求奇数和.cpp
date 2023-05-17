#include<iostream>
using namespace std;
int even(int n);
int main(void){
	int n = 0;
	even(n);
}
int even(int n) {
	int t = 0;
	int a[100];
	for (int i = 0;; ) {
		cin >> a[i];
		if (a[i] > 0) {
			i++;
		}
		else {
			t = i++;
			break;
		}
	}
	int sum = 0;
	for (int i = 0;; i++) {
		if (a[i] % 2 == 0) {
			;
		}
		if (a[i] % 2 == 1) {
			sum = sum + a[i];
		}
		if (a[i] <= 0) {
			break;
		}
	}
	cout << sum << endl;
	if (t % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
