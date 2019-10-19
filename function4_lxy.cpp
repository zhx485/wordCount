#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
#include<string>
//#include<regex>
#include<map>

using namespace std;

int n = 2;
//string s = "welcome hello welcome Hello Ye Ye ye ye Welcome com";

vector<string> split(const string& str,const string& delim){
	vector<string> res;
	vector<string> result;
	string ss;
	if("" == str) return res;
	
	char* strs = new char[str.length() + 1];
	strcpy(strs,str.c_str());
	
	char* d = new char[delim.length() + 1];
	strcpy(d,delim.c_str());
	
	char* p = strtok(strs,d);
	while(p){
		string s = p;
		res.push_back(s);
		p = strtok(NULL,d);
	} 
	for(int yy = 0; yy < res.size(); yy++){
		cout<<res[yy]<<endl;
	}
	for(int kk = 0; kk < res.size()-n; ++kk){
		ss="";
		for(int i = kk; i < kk + n -1; i++){
			ss += res[i];
			ss += ' ';
		}
		ss += res[kk+n-1];
		cout<<"ss: "<<ss<<endl;
		result.push_back(ss);
	}
	
	
	return result;
}


bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
        return a.second > b.second;
}

int main(){	
	int flag = 0;
	string s = "welcome hello welcome Hello Ye Ye ye ye Welcome com";
	//转小写 
	transform(s.begin(),s.end(),s.begin(),::tolower);
//	cout<<s<<endl;
	//以空格分割 
	vector<string> all_str = split(s," ");
//	for(int i = 0; i < all_str.size(); ++i){
//		cout<<all_str[i]<<endl;
//	}
	//定义map 
	map<string,int> m;
	for(int i = 0; i < all_str.size(); ++i){
		flag = 0;
		for(map<string,int>::iterator j = m.begin(); j != m.end(); ++j){
			pair<string,int> it = *j;
			if(all_str[i] == it.first){
				it.second++;
				m.erase(all_str[i]);
				m.insert(it);
				flag = 1;
			}
		}
		
		if(!flag){
			pair<string,int> p_tmp(all_str[i], 1);
			m.insert(p_tmp);
		}
	}
	
//	for(map<string,int>::iterator i = m.begin(); i != m.end(); ++i){
//		pair<string,int> p = *i;
//		cout<<p.first<<" "<<p.second<<endl;
//	}
	
	vector< pair<string, int> > vec(m.begin(), m.end());
    sort(vec.begin(), vec.end(), cmp);
    for (int i = 0; i < vec.size(); ++i)
        cout <<"<"<<vec[i].first<<">: "<<vec[i].second<<endl;
	//regex r1(".*? ");
	return 0;				
}

