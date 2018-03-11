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
	int n;
	cin>>n;
	string s;
	cin>>s;
	map<char,int>asd;
	for(int i=0;i<n;i++)
		asd[tolower(s[i])]++;
	if(asd.size()==26)
		cout<<"YES\n";
	else
		cout<<"NO\n";
   return 0;
}