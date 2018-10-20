#include<stdio.h>
#include<string.h>

int main(){
	char str[30] = {0};
	printf("Enter String : ");
	scanf("%[^\n]",str);
	int len = strlen(str);
	int wordCount=0;
	int charCount=0;
	for(int i =0;i<len;i++){
		if(str[i] != ' '){
			charCount++;
		}else
		if(str[i] == ' ' && str[i+1] != ' '){
			if(i==0) 
				wordCount++;
			wordCount++;
		}
	}
	printf("Characters = %d\n",charCount);
	printf("Words = %d\n",wordCount);
	return 0;
	
}

//Enter String :    Hello    World   Test
//Characters = 14
//Words = 3
