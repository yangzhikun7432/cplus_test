#include<iostream>
#include<cstdio>
using namespace std;
int step=1;
void Move(char a,char c,int n) {
	
	printf("Step%d:Move Disk%d from %c to %c\n",step,n,a,c);
	step++;
}
void Hanoi(char a,char b,char c,int n) {
	if (n != 1) {
		Hanoi(a, c, b, n - 1);//1.当A有n个圆盘时将n-1个圆盘,借助C,移至到B
		Move(a, c, n);//2.将A剩余的最后1个圆盘移至C
		Hanoi(b, a, c, n - 1);//3.B剩余n-1个圆盘,借助A,移至C
	}
	else {
		Move(a, c, n);//若有1个圆盘，直接将圆盘从A移动到C(递归出口)
	}
}
int main() {
	int n = 0;
	scanf("%d",&n);
	Hanoi('A','B','C',n);
	return 0;
//	printf("共走了%d步",step);
}
