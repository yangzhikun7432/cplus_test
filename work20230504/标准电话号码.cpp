#include<iostream>
#include<string>
using namespace std;
int main(void) {
	string letter;
	cin >> letter;
	for (int i = 0; i <= letter.length(); i++) {
		if (letter[i] >= 65 && letter[i] < 68) {
			cout << 2;
		}
		else if (letter[i] >= 68 && letter[i] < 71) {
			cout << 3;
		}
		else if (letter[i] >= 71 && letter[i] < 74) {
			cout << 4;
		}
		else if (letter[i] >= 74 && letter[i] < 77) {
			cout << 5;
		}
		else if (letter[i] >= 77 && letter[i] < 80) {
			cout << 6;
		}
		else if (letter[i] >= 80 && letter[i] < 84) {
			cout << 7;
		}
		else if (letter[i] >= 84 && letter[i] < 87) {
			cout << 8;
		}
		else if (letter[i] >= 87 && letter[i] < 91) {
			cout << 9;
		}
	}
	return 0;
}
