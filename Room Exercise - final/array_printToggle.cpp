#include<stdio.h>
void printScreen(int [],int);
void printDot(int);
void printChar(int);
int main(){
	int n[] = {4, 9, 5, 2, 1, 8};
	int len = sizeof(n)/sizeof(n[0]);
	printScreen(n,len);
	return 0;
}
void printScreen(int n[],int len){
	printf("Dot \n");
	for(int i=0;i<len;i++){
		printDot(n[i]); 
	}
	printf("================\nChar \n");
	for(int i=0;i<len;i++){
		printChar(n[i]); 
	}
}
void printDot(int n){
	for(int i=1;i<=n;i++)
		printf("*");
	printf("\n");
}
void printChar(int n){
	for(int i=1;i<=n;i++)
		if(i%4 == 1)
			printf("@");
		else 
			if(i%4 == 2)
				printf("#");
		else 
			if(i%4 == 3)
				printf("*");
		else 
			printf("-");
			
	printf("\n");
}
