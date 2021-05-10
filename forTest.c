#include<stdio.h>
int main(){
	char ch, str[10];
	while((ch=fgetc(stdin)) != -1){
		fputc(ch, stdout);
	}
	return 0;
}


