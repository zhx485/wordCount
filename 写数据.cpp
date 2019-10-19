#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int i,d;
	fp=fopen("data.tex","w");
	if(fp==NULL){
		printf ("File cannot open!");
        exit(0);
        
        
	}
	for(i=0;i<10;i++){
		scanf("%d",&d);
		fprintf(fp,"%d\t",d);
	}
	fclose(fp);
	return 0;
}
