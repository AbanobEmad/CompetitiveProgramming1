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
bool checkpalin(string s)
{
	string c="";
	for(int i=0;i<s.size();i++)
	{
		if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
		{
			c+=tolower(s[i]);
		}
	}
	for(int i=0;i<c.size()/2;i++)
	{
		if(c[i]!=c[c.size()-i-1])
			return false;
	}
	return true;
}
int main()
{
    //in_out_txt();
    ff();
	string s;
	while(getline(cin,s)&&s!="DONE")
	{
		if(checkpalin(s))
			cout<<"You won't be eaten!\n";
		else
			cout<<"Uh oh..\n";
	}
	return 0;
}