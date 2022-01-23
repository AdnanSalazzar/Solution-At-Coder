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

    string a ;

    cin >> a;

    ll b , c ;

    cin >> b >> c ;

    b-- ; c-- ;

    swap(a[b] , a[c]);

    cout << a << endl;


return 0 ;
}

