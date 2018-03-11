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
int main()
{
    //in_out_txt();
    ff();
	string s,c;
	getline(cin,s);
	c="";
	bool sp=0,ma=0;
	for(int i=0;i<s.size();i++)
	{
		if(!sp&&s[i]==' ')
			sp=1;
		else if(s[i]==','||s[i]=='!'||s[i]=='?'||s[i]=='.')
		{
			sp=1;
			c+=s[i];
			c+=' ';
		}
		else if(sp&&s[i]!=' ')
		{
			if(c[c.size()-1]!=' ')
			    c+=' ';
			c+=s[i];
			sp=0;
		}
		else if(s[i]!=' ')
			c+=s[i];
	}
	cout<<c<<endl;
   return 0;
}