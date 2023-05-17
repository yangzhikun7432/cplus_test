#include<iostream>
#include<string>
using namespace std;
int main(void) {
    string str1;
    string str2;
    getline(cin, str1);
    getline(cin, str2);
    int num = 0;
    for (int i = 0; i < str2.length(); i++) {
        int t = i;
        for (int j = 0; j < str1.length();) {
            if (str1[j] == str2[t]) {
                j++;
                t++;
                if (j == str1.length()) {
                    cout << i<<' ';
                    num++;
                    break;
                }
            }
            else {
                break;
            }
        }
    }
    if (num == 0) {
        cout << -1;
    }
}
