#include<stdio.h>
#include<ctype.h>
#include<string.h>
void printToggle(char [],int);
int main(){
	char str[] = "SuRaNaReE";
	int len = strlen(str);
	printToggle(str,len);
	return 0;
}
void printToggle(char str[],int len){
	printf("%s = ",str);
	for(int i=0;i<len;i++){
		str[i] = isupper(str[i])? tolower(str[i]) : toupper(str[i]);
	}
	printf("%s\n",str);
}
