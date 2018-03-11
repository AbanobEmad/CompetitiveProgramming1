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
map<string,int>map1;
int co=1;
void fill()
{
	string s;
	for(char i='a';i<='z';i++)
	{
		s=i;
		map1[s]=co++;
	}
	for(char i='a';i<='z';i++)
	{
		for(char j=i+1;j<='z';j++)
		{
			s=i;
			s+=j;
			map1[s]=co++;
		}
	}
	for(char i='a';i<='z';i++)
	{
		for(char j=i+1;j<='z';j++)
		{
			for(char k=j+1;k<='z';k++)
			{
				s=i;
				s+=j;
				s+=k;
				map1[s]=co++;
			}
		}
	}
	for(char i='a';i<='z';i++)
	{
		for(char j=i+1;j<='z';j++)
		{
			for(char k=j+1;k<='z';k++)
			{
				for(char h=k+1;h<='z';h++)
				{
					s=i;
					s+=j;
					s+=k;
					s+=h;
					map1[s]=co++;
				}
			}
		}
	}
	for(char i='a';i<='z';i++)
	{
		for(char j=i+1;j<='z';j++)
		{
			for(char k=j+1;k<='z';k++)
			{
				for(char h=k+1;h<='z';h++)
				{
					for(char l=h+1;l<='z';l++)
					{
						s=i;
						s+=j;
						s+=k;
						s+=h;
						s+=l;
						map1[s]=co++;
					}
				}
			}
		}
	}
}
int main()
{
   //in_out_txt();
	ff();
	fill();
	string c;
	while(cin>>c)
	{
		cout<<map1[c]<<endl;
	}
	return 0;
}