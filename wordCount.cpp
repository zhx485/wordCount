#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

int main(int argc,char *argv[])
{
	ifstream infile;
	ofstream outfile;
	char ch;
	//对命令行参数的处理 
	string si="-i",so="-o",sm="-m",sn="-n";
	int inputpos=0,outputpos=0,mpos=0,npos=0;
	for(int i=0;i<argc;i++)
	{
		if(argv[i]==si)inputpos=i+1;
		if(argv[i]==so)outputpos=i+1;
		if(argv[i]==sm)mpos=i+1;
		if(argv[i]==sn)npos=i+1;
	}
	infile.open(argv[inputpos]);
	int countn=0,countt=0,count0=0,countc=0;//换行 制表符 空格 字符的统计 
	while(!infile.eof())
    {
    	char temp;
       temp=infile.get();
       if(temp=='\n'||temp=='\r')countn++;
       if(temp=='\t')countt++; 
       if(temp==' ')count0++;
       countc++;
    }
    infile.close();
    countc--;
    
	string sign="mn";//默认实现所有功能 
	int m,n=0;//m,n后的参数的初始化 
	if(argc==9)	m= atoi(argv[mpos]),n=atoi(argv[npos]);
	if(argc==7)
	{
		if(mpos!=0)
		{
		sign="om";
		m=atoi(argv[mpos]);//only "m"-methed		
		}
		else if(npos!=0)
		{
			sign="on";
			n=atoi(argv[npos]);//only "n"-methed
		}
		
		else cout<<"something goes wrong?"<<endl;
	}
	if(sign=="mn")
	{
		cout<<"实现m,n两种功能，其参数分别为"<<m<<" "<<n<<endl;
		//全部函数 
		
		
		
		
		
	}
	else if(sign=="on")
	{
		cout<<"仅实现n功能，其参数为"<<" "<<n<<endl;
		//启用自定义词频统计输出功能，默认输出10个（不够指定数目时，按实际数目输出）
		
		
		
	}
	else if(sign=="om")
	{
		cout<<"仅实现m功能，其参数为"<<" "<<m<<endl;
		//启用词组词频统计功能，默认对单词进行词频统计
		
		
		
	}
	else cout<<"sign wrong!!!"<<endl;
	
	
	
	outfile.open(argv[outputpos]);
	//流的写入 
	outfile.close();
	return 0;
}
