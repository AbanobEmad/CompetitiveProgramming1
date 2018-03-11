#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<cmath>
#include<math.h>
#include<bitset>
#include<sstream>
#include <stdio.h> 
#include <iomanip>
#include<queue>'
#include<fstream>
//#include <bits/stdc++.h>
using namespace std;
void in_out_txt()
{
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
}
void ff()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
}
map<string,string>map1;
map<string,string>::iterator it;
vector<string>add,sub,chan;
string s1,s2;
int n;
void divs1()
{
	string c1="",c2="";
	int i=2;
	bool flag=0;
	while(i<s1.size())
	{
		if(!flag)
		{
			if(s1[i]!=':')
				c1+=s1[i++];
			else
			{
				i++;
				flag=1;
			}
		}
		else
		{
			if(s1[i]!=','&&s1[i]!='}')
				c2+=s1[i++];
			else
			{
				map1[c1]=c2;
				flag=0;
				i++;
				c1=c2="";
			}
		}
	}
}
void divs2()
{
	string c1="",c2="";
	int i=2;
	bool flag=0;
	while(i<s2.size())
	{
		if(!flag)
		{
			if(s2[i]!=':')
				c1+=s2[i++];
			else
			{
				i++;
				flag=1;
			}
		}
		else
		{
			if(s2[i]!=','&&s2[i]!='}')
				c2+=s2[i++];
			else
			{
				if(map1[c1]=="")
				{
					add.push_back(c1);
				}
				else if(map1[c1]!=c2)
				{
					chan.push_back(c1);
					map1[c1]="";
				}
				else if(map1[c1]==c2)
				{
					map1[c1]="";
				}
				flag=0;
				i++;
				c1=c2="";
			}
		}
	}
}
int main()
{
   //in_out_txt();
	ff();
	cin>>n;
	while(n--)
	{
		getline(cin,s1,'}');
		getline(cin,s2,'}');
		s1+="}";
		s2+="}";
		divs1();
		divs2();
		for(it=map1.begin();it!=map1.end();it++)
		{
			if(it->second!="")
				sub.push_back(it->first);
		}
		if(add.size()==0&&sub.size()==0&&chan.size()==0)
			cout<<"No changes\n";
		else 
		{
			if(add.size()>0)
			{
				sort(add.begin(),add.end());
				cout<<"+";
				for(int i=0;i<add.size();i++)
				{
					if(i!=add.size()-1)
						cout<<add[i]<<",";
					else
						cout<<add[i]<<endl;
				}
			}
			if(sub.size()>0)
			{
				cout<<"-";
				sort(sub.begin(),sub.end());
				for(int i=0;i<sub.size();i++)
				{
					if(i!=sub.size()-1)
						cout<<sub[i]<<",";
					else
						cout<<sub[i]<<endl;
				}
			}
			if(chan.size()>0)
			{
				cout<<"*";
				sort(chan.begin(),chan.end());
				for(int i=0;i<chan.size();i++)
				{
					if(i!=chan.size()-1)
						cout<<chan[i]<<",";
					else
						cout<<chan[i]<<endl;
				}
			}
		}
		cout<<endl;
		map1.clear();
		add.clear();
		sub.clear();
		chan.clear();
	}
	return 0;
}