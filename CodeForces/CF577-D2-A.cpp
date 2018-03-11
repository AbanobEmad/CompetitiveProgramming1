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
	long long n,m,k,x=0,y,z;
	cin>>n>>m;
	if(m==1)
		x++;
	else if(m<=n)
		x+=2;
	for(int i=2;i*i<=m;i++)
	{
		if(m%i==0)
		{
			y=m/i;
			if(i<=n&&y<=n&&i!=y)
				x+=2;
			else if(i<=n&&y<=n&&i==y)
				x++;
		}
	}
	cout<<x<<endl;
   return 0;
}