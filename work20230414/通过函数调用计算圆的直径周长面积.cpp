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
	cout << "直径=" << 2 * r;
}
void circumference(int r) {
	cout << "周长=" << r * 3.14 * 2 << endl;
}
void area(int r) {
	cout << "面积=" << 3.14 * r * r << endl;
}
