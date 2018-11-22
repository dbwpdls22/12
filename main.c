#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char src[100]="Programming course";
	int i=0;
	
	while(src[i]!=NULL)
	{
		i++;
	}
	
	
	printf("문자열 %s의 길이:%i \n",src,i);
	
	return 0;
	
}
