//https://www.hackerrank.com/challenges/30-binary-numbers/problem
//**************************************************************

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,count=0;
    cin >> n;
    int sum=0,max=0;

    while(n>0)
    {
        if(n%2==1){
        sum++;
        if(sum>max)max=sum;
        }
        else sum=0;

        n=n/2;

    }
    cout<<max;

    return 0;
}
