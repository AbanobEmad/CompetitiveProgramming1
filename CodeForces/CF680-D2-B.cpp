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
	long long n,m,x=0,y,z,asd[100010];
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>asd[i];
	if(asd[m])
		x++;
	int h=m+1,k=m-1;
	while(h<=n||k>=1)
	{
		if(h<=n&&k>=1&&asd[h]&&asd[k])
		{
			x+=2;
			h++;
			k--;
		}
		else if(k<1&&h<=n&&asd[h])
		{
			h++;
			x++;
		}
		else if(h>n&&k>=1&&asd[k])
		{
			k--;
			x++;
		}
		else
		{
			h++;
			k--;
		}
	}
	cout<<x<<endl;
   return 0;
}