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

    ll T,x , i , num  ;

    ll counter[100000] = {0} ;
    cin >> T;

    for(i = 0 ; i < 4*T-1 ; i++)
    {
        cin >> num ;

        counter[num]++ ;
    }

    for(i = 1 ; i <= T ; i++)
    {
        if(counter[i] < 4 )
        {
            cout << i << endl;
            break ;
        }
    }


    return 0 ;
}

