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
	int n,arr[110][110];
	while(cin>>n&&n)
	{
		makefalse();
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>arr[i][j];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				row[i]+=arr[i][j];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				col[i]+=arr[j][i];
		}
		int x=-1,y=-1;
		for(int i=0;i<n;i++)
		{
			if(row[i]%2&&x==-1)
				x=i+1;
			else if(row[i]%2&&x!=-1)
				x=-2;
		}
		for(int i=0;i<n;i++)
		{
			if(col[i]%2&&y==-1)
				y=i+1;
			else if(col[i]%2&&y!=-1)
				y=-2;
		}
		if(x==-1&&y==-1)
			cout<<"OK\n";
		else if(x!=-1&&x!=-2&&y!=-1&&y!=-2)
			cout<<"Change bit ("<<x<<","<<y<<")\n";
		else
			cout<<"Corrupt\n";
	}
	return 0;
}