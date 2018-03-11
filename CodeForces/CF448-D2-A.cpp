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
	long long n,m,x,y,z,fir[3],sec[3];
	cin>>fir[0]>>fir[1]>>fir[2]>>sec[0]>>sec[1]>>sec[2]>>n;
	x=0;
	y=fir[0]+fir[1]+fir[2];
	if(y%5!=0)
	{
		y/=5;
		y++;
	}
	else
		y/=5;
	z=sec[0]+sec[1]+sec[2];
	if(z%10!=0)
	{
		z/=10;
		z++;
	}
	else
		z/=10;
	x=y+z;
	if(x<=n)
		cout<<"YES\n";
	else
		cout<<"NO\n";
   return 0;
}