#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int count,i;
    long long sum=0,aray[25];
    cin>>count;
    for(i=0;i<count;i++)
    {
        cin>>aray[i];
        sum+=aray[i];
    }
    cout<<sum;

    return 0;
}
