#include<iostream>
using namespace std;
void circumference(int r);
void area(int r);
void diameter(int r);
int main(void){
	int r;
	cin >> r;
	cout << endl;
	diameter(r);
	circumference(r);
	area(r);
	return 0;
}
void diameter(int r) {
	cout << "ֱ��=" << 2 * r;
}
void circumference(int r) {
	cout << "�ܳ�=" << r * 3.14 * 2 << endl;
}
void area(int r) {
	cout << "���=" << 3.14 * r * r << endl;
}
