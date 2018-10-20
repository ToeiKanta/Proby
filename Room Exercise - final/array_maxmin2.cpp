#include<stdio.h>
void findMax2(int [],int);
void findMin2(int [],int);
int main(){
	int n[] = {4, 9, 5, 2, 1, 8};
	int len = sizeof(n)/sizeof(n[0]);
	findMax2(n,len);
	findMin2(n,len);
	return 0;
}
void findMax2(int n[],int len){
	int max1,max2;
	max1 = max2 = -99999999;
	for(int i=0;i<len;i++){
		if(n[i]>max1){
			max1=n[i];	
		} 
	}
	for(int i=0;i<len;i++){
		if(n[i]>max2 && n[i]!=max1){
			max2=n[i];	
		} 
	}
	printf("second max = %d\n",max2);
}
void findMin2(int n[],int len){
	int min1,min2;
	min1 = min2 = 99999999;
	for(int i=0;i<len;i++){
		if(n[i]<min1){
			min1=n[i];	
		}
	}
	for(int i=0;i<len;i++){
		if(n[i]<min2 && n[i]!=min1){
			min2=n[i];	
		}
	}
	printf("second min = %d\n",min2);
}
