#include<bits/stdc++.h>
#include<list>
#include<iterator>
#include<algorithm>
#include<cmath>
#include<string.h>
#include<vector>
 
 
#define longpro int64_t ;
#define AMAI ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define MAX 1000000
 
using namespace std ;
 
int main()
{
    AMAI ;
    ll n ,x , k , i , j  ;
 
    cin >> n >> x ;
 
    char tester = 'A';
 
    for(i = 1 ; i <= (26*n) ; i++)
    {
        for(j = 1; j <= n ; j++)
        {
            x-- ;
            //cout << tester << endl;
            if(x == 0)
            {
                cout <<   tester << endl;
                return 0 ;
            }
        }
 
        tester++ ;
    }
 
 
 
 
 
return 0 ;
}
 
