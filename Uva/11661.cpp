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
	string s,c;
	long long n,m,x,y,z,d,r,minn;
	bool f;
	while(cin>>n&&n)
	{
		cin>>s;
		r=d=-100000000;
		minn=100000000;
		f=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='Z')
			{
				cout<<0<<endl;
				f=1;
				break;
			}
			else if(s[i]=='D')
			{
				minn=min(minn,i-d);
				r=i;
			}
			else if(s[i]=='R')
			{
				minn=min(minn,i-r);
				d=i;
			}
		}
		if(!f)
			cout<<minn<<endl;
	}
   return 0;
}