#include<iostream>
using namespace std;

int taketop(char *,int );
int takebottom(char *,int );
int addtop(int ,int,int ,int);
int addbottom(int ,int);
int simplifytop(int ,int );
int simplifybottom(int ,int );

int main()
{
	int n;
	cin >>n;
	
	int sumzi=0,summu=0;
	for(int i=1;i<=n;i++){
		char a[50]={'\0'};
		cin >>a;
		
		int zi=0,mu=0;
		if(i==1){
			sumzi=taketop(a,zi);
			summu=takebottom(a,mu);
		}
		else{
			zi=taketop(a,zi);
			mu=takebottom(a,mu);
			sumzi=addtop(zi,mu,sumzi,summu);
			summu=addbottom(mu,summu);
			int x=sumzi,y=summu;
			sumzi=simplifytop(sumzi,summu);
			summu=simplifybottom(x,y);
		}
		if(i==n){
			if(summu==1){
				cout <<sumzi<<endl;
			}
			else if(sumzi==0){
				cout <<sumzi<<endl;
			}
			else{
				cout <<sumzi<<"/"<<summu<<endl;
			}
		}		
	}
	
	return 0;
}

int taketop(char *x,int y){     	
	if(x[0]!='-'){
		for(int i=0;x[i]!='/';i++){
			y=y*10+x[i]-48;
		}
	}
	else{
		for(int i=1;x[i]!='/';i++){
			y=y*10+x[i]-48;
		}
		y=-y;
	}
	
	return y;
}

int takebottom(char *x,int y){
	int s=0;
	if(x[0]!='-'){
		for(int i=0;x[i]!='/';i++){
			s=i+1;
		}
		for(int i=s+1;x[i]!='\0';i++){
			y=y*10+x[i]-48;
		}
	}
	else{
		for(int i=1;x[i]!='/';i++){
			s=i+1;
		}
		for(int i=s+1;x[i]!='\0';i++){
			y=y*10+x[i]-48;
		}
	}
		
	return y;
}

int addtop(int a,int b,int x,int y){     
	int c,d;
	c=x,d=y;
	x=a*d+b*c;	
	
	return x;
}

int addbottom(int x,int y){     
	int c;
	c=y;
	y=x*c;
		
	return y;
}

int simplifytop(int sumzi,int summu){
		for(int i=2;i<=sumzi || i<=summu;i++){
			if(sumzi%i==0 && summu%i==0){
				sumzi=sumzi/i;
				summu=summu/i;
				i=i-1;
			}
		}
			
	return sumzi;
}

int simplifybottom(int sumzi,int summu){
		for(int i=2;i<=sumzi || i<=summu;i++){
			if(sumzi%i==0 && summu%i==0){
				sumzi=sumzi/i;
				summu=summu/i;
				i=i-1;
			}
		}
			
	return summu;
}
