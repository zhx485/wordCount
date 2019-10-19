#include<stido.h>
#include<frestream>
using namespace std;
int length;
int count;
int read numbe(int argc,char* argv[])
{
	 ifstream ifile;     //说明输入文件流对象ifile    
     ofstream ofile;     //说明输出文件流对象ofile
     char* inputname=NULL;   //定义输出文件 
     char* Outputname=NULL;  //定义输出文件 
     string a = "-m", b = "-n", c= "-i", d="-o";
	 //判断参数类型 
	for (int i = 1; i < argc; i++ )
	{
		if (argv[i] == a)
		{
			length=argv[++i][0]-'0';// 指定需统计的词组长度
		}
		else if (argv[i] == b)
		{
			count=argv[++i][0]-'0';// 指定需要输出的词频排行的前n项
		}
		else if (argv[i] == c)
		{
			InputName=argv[++i];//指定输入文件
		}
		else if (argv[i]==d)
		{
			OutputName=argv[++i];//指定程序的输出文件
		}
		
}
}




int main(int argc,char* argv[])
{
	 number(argc,argv[]);
	
	return 0;
}

