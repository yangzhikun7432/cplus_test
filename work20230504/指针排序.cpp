#include<iostream>
using namespace std;
int sort(int num[], int n);
int main(void) {
    int num[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, n);
}
int sort(int num[], int n) {
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            int t = num[j];
            if (num[j] > num[j + 1]) {
                num[j] = num[j + 1];
                num[j + 1] = t;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (i != n - 1) {
            cout << num[i] << ' ';
        }
        else {
            cout << num[i];
        }
    }
}
