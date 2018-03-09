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
	long long n,x,y,z,sum=0;
	cin>>n;
	while(n>=1)
	{
		x=1;
		while(x*2<=n)
			x*=2;
		sum++;
		n-=x;
	}
	cout<<sum<<endl;
	return 0;
}