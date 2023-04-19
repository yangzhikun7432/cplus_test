#include<iostream>
#include<iomanip>
using namespace std;
int main(void){
	char ch;
	int i = 0;
	struct grade {
		char name[31];
		double usual;
		double final;
		double result = usual * 0.4 + final * 0.6;
	};
	struct grade stu[100];
	int i = 0;
	while ((ch = getchar()) != EOF) {
		cin >> stu[i].name;
		cin >> stu[i].usual;
		cin >> stu[i].final;
		i++;
	}
	int t = 0;
	int j = i;
	for (j; j > 0;j--) {
		t = 0;
		for (t;t<j;) {
			if (stu[t].result < stu[t + 1].result) {
				struct grade a = stu[t];
				stu[t] = stu[t + 1];
				stu[t + 1] = a;
			}
			t++;
		}
	}
	t = 0;
	for (t; t <= i; t++) {
		cout << fixed << setprecision(2);
		cout << stu[t].name << stu[t].result << endl;
	}
	return 0;
}
