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
int row[110],col[110];
void makefalse()
{
	for(int i=0;i<110;i++)
		row[i]=col[i]=0;
}
int main()
{
   //in_out_txt();
	ff();
	long long n,l,r,x,arr[20],mx,mn,sum,count,ans=0;
	cin>>n>>l>>r>>x;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=1;i<(1<<n);i++)
	{
		sum=mx=count=0;
		mn=10000000000;
		for(int j=0;j<n;j++)
		{
			if((i>>j)&1)
			{
				count++;
				sum+=arr[j];
				mx=max(mx,arr[j]);
				mn=min(mn,arr[j]);
			}
		}
		if(sum>=l&&sum<=r&&(mx-mn)>=x&&count>=2)
			ans++;
	}
	cout<<ans<<endl;
	return 0;
}