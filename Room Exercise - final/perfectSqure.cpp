#include<stdio.h>
int isPerfSquare(int,int);
int main(){
	int n[] = {100, 15, 4, 2, 10, 25, 5, 16, 36};
	int len = sizeof(n)/sizeof(n[0]);
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			printf(isPerfSquare(n[i],n[j])? "%d ":"",n[i]);
		}
	}
	return 0;
}

int isPerfSquare(int n,int b){
	for(int i=1;i*i<=n;i++){
		if(n == b*b) return 1;
	}
	return 0;
}
