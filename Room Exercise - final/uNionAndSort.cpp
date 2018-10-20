#include<stdio.h>

void uNion(int [], int ,int [], int);
int main(){
	int n1[] = {1,3,9,10,12,15,20};
	int n2[] = {2,4,9,10,11,15,25,30,50,90};
	int len1 = sizeof(n1)/sizeof(n1[0]);
	int len2 = sizeof(n2)/sizeof(n2[0]);
	uNion(n1,len1,n2,len2);
	return 0;
	
}

void uNion(int n1[] , int len1,int n2[] , int len2){
	int i =0, j =0;
	while(i<len1 && j<len2){
		if(n1[i]<n2[j]){
			printf("%d ",n1[i++]);
		}else
		if(n1[i]>n2[j]){
			printf("%d ",n2[j++]);
		}else
		if(n1[i]==n2[j]){
			printf("%d ",n2[j++]);
			i++;
		}
	}
	while(i<len1)
		printf("%d ",n1[i++]);
	while(j<len2)
		printf("%d ",n2[j++]);
}
//1 2 3 4 9 10 11 12 15 20 25 30 50 90
