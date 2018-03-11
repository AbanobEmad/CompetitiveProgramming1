#include<iostream>
#include<iostream>
#include<cmath>
#include<map>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    long long n,m,x,y,z,v,b,asd[100010];
    vector<long long>asd1;
    pair<int,int>asd3[100010];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>asd[i];
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>asd3[i].first>>asd3[i].second;
    }
    sort(asd3,asd3+m);
    for(int i=0;i<asd3[0].first-1;i++)
        asd1.push_back(asd[i]);
    x=asd3[0].second;
    for(int i=1;i<m;i++)
    {
        if(x>asd3[i].first)
        {
            if(asd3[i].second>x)
                x=asd3[i].second;
        }
        else
        {
             y=asd3[i].first-1;
             for(int i=x;i<y;i++)
                asd1.push_back(asd[i]);
            if(asd3[i].second>x)
                x=asd3[i].second;

        }
    }
    for(int i=x;i<n;i++)
        asd1.push_back(asd[i]);
    cout<<asd1.size()<<endl;
    for(int i=0;i<asd1.size();i++)
        cout<<asd1[i]<<" ";
    cout<<endl;
    return 0;
}