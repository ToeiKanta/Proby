#include<stdio.h>
int findMax(int [],int);
int findMin(int [],int);
int main(){
	int n[] = {3, 9, 2, 1, 5, 10, 12, 3, 15};
	int len = sizeof(n)/sizeof(n[0]);
	printf("Max = %d\n",findMax(n,len));
	printf("Min = %d\n",findMin(n,len));
	return 0;
}
int findMax(int n[],int len){
	int max=0;
	for(int i=0;i<len;i++){
		if(n[i]>max)max= n[i];
	}
	return max;
}
int findMin(int n[],int len){
	int min=n[0];
	for(int i=0;i<len;i++){
		if(n[i]<min)min = n[i];
	}
	return min;
}
