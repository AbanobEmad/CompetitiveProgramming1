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
	long long n,arr[10000],sum=0,x;
	vector<long long>Vsum;
	while(cin>>n&&n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>x;
			Vsum.push_back(x);
		}
		sort(Vsum.begin(),Vsum.end());
		while(Vsum.size()>1)
		{
			sum+=Vsum[0]+Vsum[1];
			Vsum.push_back(Vsum[0]+Vsum[1]);
			Vsum.erase(Vsum.begin(),Vsum.begin()+2);
			sort(Vsum.begin(),Vsum.end());
		}
		cout<<sum<<endl;
		Vsum.clear();
		sum=0;
	}
	return 0;
}