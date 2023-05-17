#include<iostream>
using namespace std;
void max(int n,int t);
void min(int n,int t);
int main(void){
	int n, t;
	cin >> n >> t;
	max(n, t);
	min(n, t);
}
void max(int n,int t) {
	int nmax = 0;
	for (int i = 1;i<n&&i<t; i++) {
		if (n % i == 0 && t % i == 0) {
			nmax = i;
		}
	}
	cout << nmax << endl;
}
void min(int n, int t) {
	int nmin = 0;
	for (int i = n;; i++) {
		if (i % n == 0 && i % t == 0) {
			nmin = i;
			break;
		}
	}
	cout << nmin << endl;
}
