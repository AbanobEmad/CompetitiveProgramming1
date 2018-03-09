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
bool arr[510][510];
void makefalse()
{
	for(int i=0;i<510;i++)
		for(int j=0;j<510;j++)
			arr[i][j]=false;
}
int main()
{
    //in_out_txt();
	ff();
	int w,h,n,x1,y1,x2,y2,sum;
	while(cin>>w>>h>>n&&w)
	{
		sum=0;
		makefalse();
		for(int k=0;k<n;k++)
		{
			cin>>x1>>y1>>x2>>y2;
			for(int i=min(x1,x2);i<=max(x1,x2);i++)
				for(int j=min(y1,y2);j<=max(y1,y2);j++)
					arr[i][j]=true;
		}
		for(int i=1;i<=w;i++)
		{
			for(int j=1;j<=h;j++)
			{
				if(!arr[i][j])
					sum++;
			}
		}
		if (sum == 0)
            cout << "There is no empty spots.\n";
        else if (sum == 1)
            cout << "There is one empty spot.\n";
        else
            cout << "There are " << sum << " empty spots.\n";
	}

	return 0;
}