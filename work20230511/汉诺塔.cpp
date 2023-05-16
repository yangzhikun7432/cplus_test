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
		Hanoi(a, c, b, n - 1);//1.��A��n��Բ��ʱ��n-1��Բ��,����C,������B
		Move(a, c, n);//2.��Aʣ������1��Բ������C
		Hanoi(b, a, c, n - 1);//3.Bʣ��n-1��Բ��,����A,����C
	}
	else {
		Move(a, c, n);//����1��Բ�̣�ֱ�ӽ�Բ�̴�A�ƶ���C(�ݹ����)
	}
}
int main() {
	int n = 0;
	scanf("%d",&n);
	Hanoi('A','B','C',n);
	return 0;
//	printf("������%d��",step);
}
