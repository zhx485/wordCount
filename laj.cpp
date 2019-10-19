#include<iostream>
#include<string>
using namespace std;

void Find()
{
    FILE *fp;
    fp=fopen("C:\\Users\\10921\\Desktop\\asd.txt","r");
	char *s2[WORDLEN], line[300];
	char word[WORDLEN], *p;
	int i, len,lenword, how[WORDLEN];

	for (i=0; i<WORDLEN; i++)
	{
		s2[i] = (char *)malloc(WORDLEN);
	}
	memset(how, 0, sizeof(how));		//构建词典，从文件读入，必须每个单词用空格隔开且小写
	lenword = BuildDictionary(s2);
	printf("\n每个单词出现次数：\n");		//输出一串字符，回车结束
	fgets(line,300,fp);
	FindWord(line, how, s2, lenword);		//输出单词统计结果
	for (i=0;i<WORDLEN;i++)
	if(how[i])printf("%-10s %-10d \n",s2[i],how[i]);
	printf("\n");
	//for (i=0;i<WORDLEN;i++)
	//	if(how[i])printf("%-10d ",how[i]);
	//		printf("\n");
}
int main(){

    char filename[30];
    // totalNum[0]: 总行数  totalNum[1]: 总字符数  totalNum[2]: 总单词数
    int totalNum[3] = {0, 0, 0};

    printf("Input file name: ");
    scanf("%s", filename);

    if(getCharNum(filename, totalNum)){
        printf("Total: %d lines, %d words, %d chars\n", totalNum[0], totalNum[2], totalNum[1]);
    }else{
        printf("Error!\n");
    }
	

    return 0;
}

