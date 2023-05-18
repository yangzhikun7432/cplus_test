#include<iostream>
#include<string>
using namespace std;
void mystrstr(char a[], char b[]);
int main(void) {
	char a[100];
	char b[50];
	cin  >> a;
	cin  >> b;
	mystrstr(a, b);
	return 0;
}
void mystrstr(char a[], char b[]) {
	int j = 0;
	int note = 0;
	for (int i = 0; i < strlen(a); i++) {
		int t = i;
		for (j; j < strlen(b);) {
			if (a[t] == b[j]) {
				if (j == strlen(b) - 1) {
					cout << i;
					note = 1;
					break;
				}
				else {
					t++;
					j++;
				}
			}
			else {
				j = 0;
				break;
			}
		}
		if (note == 1) {
			break;
		}
	}
}
