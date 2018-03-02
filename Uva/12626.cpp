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
	int n,Ingredients[]={1,3,2,1,1,1};
	char c[]={'M','A','R','G','I','T'};
	string s;
	cin>>n;
	map<char,int>map1;
	while(n--)
	{
		cin>>s;
		for(int i=0;i<s.size();i++)
			map1[s[i]]++;
		int NumOfPi=100000;
		for(int i=0;i<6;i++)
		{
			NumOfPi=min(NumOfPi,(map1[c[i]]/Ingredients[i]));
		}
		cout<<NumOfPi<<endl;
		map1.clear();
	}
	return 0;
}