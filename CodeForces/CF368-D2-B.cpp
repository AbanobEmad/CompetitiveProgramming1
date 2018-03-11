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
	int n,m,arr[100010],num=0,l;
	map<int,int>map1;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=n-1;i>=0;i--)
	{
		if(map1[arr[i]]==0)
		{
			num++;
			map1[arr[i]]++;
		}
		arr[i]=num;
	}
	for(int i=0;i<m;i++)
	{
		cin>>l;
		cout<<arr[l-1]<<endl;
	}
   return 0;
}