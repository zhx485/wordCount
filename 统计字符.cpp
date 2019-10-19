#include<iostream>
#include<cstdio>
#include<fstream>
using namespace std;
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
	return sum;
}
int main(){
	int m;
    cout<<tongjizifu("input.txt");
    return 0;
}
