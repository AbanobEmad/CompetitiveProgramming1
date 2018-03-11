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
	long long n,m,x,y,z,asd[100010],odd[100010],sum;
	cin>>n;
	x=sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>y;
		if(y%2)
		{
			odd[x++]=y;
		}
		sum+=y;
	}
	if(x%2)
	{
		sort(odd,odd+x);
		cout<<sum-odd[0]<<endl;
	}
	else
		cout<<sum<<endl;
   return 0;
}