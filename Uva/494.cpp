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
	string s;
	while(getline(cin,s))
	{
		int count=0;
		bool flag=true;
		for(int i=0;i<s.size();i++)
		{
			if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
			{
				if(flag)
					count++;
				flag=false;
			}
			else
				flag=true;
		}
		cout<<count<<endl;
	}
	return 0;
}