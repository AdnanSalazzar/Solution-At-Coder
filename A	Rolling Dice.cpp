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

using namespace std ;

int main()
{
    AMAI ;

    ll a , b ;
    cin >> a >> b ;

    ll maxi , mini ;


    mini = a * 1 ;
    maxi = a * 6 ;

    if(b <= maxi && b >= mini)
    {
        cout << "Yes" <<endl;
    }
    else
    {
        cout << "No" <<endl;
    }



return 0 ;
}

