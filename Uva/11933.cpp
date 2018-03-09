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
string toBinary(long long n)
{
	string s;
    while(n!=0)
	{
		s=(n%2==0 ?"0":"1")+s;
		n/=2;
	}
    return s;
}
long long todecimal(string s)
{
	long long result=0;
	int j=1;
	for(int i=s.size()-1;i>=0;i--,j*=2)
	{
		result+=(j*(s[i]-'0'));
	}
	return result;
}
long long div(string s)
{
	string c="";
	bool flag=false;
	for(int i=s.size()-1;i>=0;i--)
	{
		if(!flag&&s[i]=='1')
		{
			c='1'+c;
			flag=true;
		}
		else if(flag&&s[i]=='1')
		{
			c='0'+c;
			flag=false;
		}
		else
			c='0'+c;
	}
	return todecimal(c);
}
int main()
{
   // in_out_txt();
	ff();
	long long n,re;
	string s,c;
	while(cin>>n&&n)
	{
		s=toBinary(n);
		re=div(s);
		cout<<re<<" "<<n-re<<endl;
	}
	return 0;
}