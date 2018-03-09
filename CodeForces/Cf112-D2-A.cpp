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
   // in_out_txt();
    ff();
	string s1,s2;
	char c1,c2;
	cin>>s1>>s2;
	for(int i=0;i<s1.size();i++)
	{
		c1=tolower(s1[i]);
		c2=tolower(s2[i]);
		if(c1>c2)
		{
			cout<<1<<endl;
			return 0;
		}
		else if(c1<c2)
		{
			cout<<-1<<endl;
			return 0;
		}
	}
	cout<<0<<endl;
	return 0;
}