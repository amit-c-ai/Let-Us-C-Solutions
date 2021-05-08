#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fa, *fb, *fm;
	int i, null=0;
	char source[15], target[15], merge[15], buff[80], buffer[80];
	printf("Enter source file name: ");
	scanf("%s", source);
	fflush(stdin);
	printf("Enter target file name: ");
	scanf("%s", target);
	fflush(stdin);
	printf("Enter merging file name: ");
	scanf("%s", merge);
	
	fa = fopen(source, "r");
	if(fa==NULL){
		printf("\ncan't open source file");
		exit(0);
	}
	fb = fopen(target, "r");
	if(fb==NULL){
		printf("\ncan't open target file");
		fclose(fa); exit(1);
	}
	fm = fopen(merge, "w+");
	if(fm==NULL){
		printf("\ncan't open merging file");
		fclose(fa); fclose(fb); exit(2);
	}
	
	while(1){
		if(null==2)
			break;
		if(fgets(buff, 79, fa)==NULL)           //file a contains 3 lines and file b contains 5 lines
			null++;                            //at the end of file a EOF is found and there is no "\n"          
		else                                   // therefore line 3 of file b is not in new line
			fputs(buff, fm);
			
		if(fgets(buffer, 79, fb)==NULL)
			null++;
		else
			fputs(buffer, fm);
	}
	
	printf("\nDone");
	fclose(fa); fclose(fb); fclose(fm);
	return 0;
}
