#include<iostream>
#include<cstdio>
#include<fstream>
using namespace std;
string a[10];
int tongjizifu(string h){
	int k;
    int sum=0;
	char filename[10] ; //文件名
	for (k = 0; k < h.length(); k++) //string => char[]
	{
		filename[k] = h[k];
	}
	filename[k] = '\0';
	char zh[10000]={'\0'};
	ifstream ax;
	int i=0;
	ax.open(filename);
	while(!ax.eof()){
		zh[i]=ax.get();
		i++;
		sum++;
	}
	ax.close();
	/*
	FILE* fp;
	fp = fopen(filename, "a+"); //判断文件是否存在及可读
	char jk;
	int i=0 ,j=0;
	while(1){
	fscanf(fp, "%c", &a[i][j]);  
	if (a[i][j]=='\0') break;
	if (a[i][j]=='\n'){
		i++;
		j=0;
	}
	else j++;
}
	fclose(fp);

	i=0,j=0;
	while(1)
	{
		if (a[i][j]!=0)sum++;//统计字符数 
		else break;
		if (a[i][j]=='\n') {
		i++;
		j=0;
	}
		else j++;
	}*/
	return sum;
}
int main(){
	int m;
    cout<<tongjizifu("input.txt");
    return 0;
}
