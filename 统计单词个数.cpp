#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int i,sum = 0,word = 0;
	int is;
char string[100];
gets(string);
for (i = 0;string[i] != '\0'; i++)
    
	if(string[i] == ' ')
	word = 0;
	else if(word == 0){
		word = 1;
		if(is = 4)
		sum++;
	}
	

	cout<<sum;
	return 0;
}
