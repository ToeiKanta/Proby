#include<stdio.h>

int main(){
	int num = 899223;
	int count[10] = {0};
	while(num>0){
		count[num%10]++;
		num/=10;
	}
	for(int i=0;i<10;i++){
		if(count[i]>0)
			printf("%d = %d \n",i,count[i]);
	}
	return 0;
	
}
//2 = 2
//3 = 1
//8 = 1
//9 = 2
