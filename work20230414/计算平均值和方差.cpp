#include<iostream>
using namespace std;
int main(void){
	int n;
	cin >> n;
	struct num {
		int a, b, c, d, e, f;
		double aver = a + b + c + d + e + f;
		double variance=((a-aver)*(a-aver)+ (b - aver) * (b - aver)+ (c - aver) * (c - aver)+ (d - aver) * (d - aver)+ (e - aver) * (e - aver)+ (f - aver) * (f - aver))/6;
	};
	struct num stu[100];
	int i = 0;
	while (i<n) {
		cin >> stu[i].a >> stu[i].b >> stu[i].c >> stu[i].d >> stu[i].e >> stu[i].f;
		i++;
	}
	for (int t = 0; t < n; t++) {
		cout << stu[t].aver << stu[t].variance << endl;
	}
	return 0;
}
