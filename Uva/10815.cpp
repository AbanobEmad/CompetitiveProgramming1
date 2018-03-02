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
map<string,int>map1;
map<string,int>::iterator it;
void tolow(string s)
{
	string c="";
	for(int i=0;i<s.size();i++)
	{
		if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
		{
			c+=tolower(s[i]);
		}
		else if(c!="")
		{
		    map1[c]=1;
			c="";
		}
	}
	if(c!="")
		map1[c]=1;
}
int main()
{
    //in_out_txt();
    ff();
	string s;
	
	while(cin>>s)
	{
		tolow(s);
	}
	for(it=map1.begin();it!=map1.end();it++)
		   cout<<it->first<<endl;
	return 0;
}