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
	string s;
	set<char>set1;
	cin>>s;
	for(int i=0;i<s.size();i++)
		set1.insert(s[i]);
	if(set1.size()%2==0)
		cout<<"CHAT WITH HER!"<<endl;
	else
		cout<<"IGNORE HIM!"<<endl;
	return 0;
}