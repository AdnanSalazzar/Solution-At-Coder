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

    ll  n, m,  i, j;
    string temp ;

    cin >> n >> m ;

    vector< pair<bool, string > > a ;

    for(i = 0 ; i < n ; i++)
    {
        cin >> temp ;
        a.push_back( make_pair(false, temp));
    }
    j = 0 ;
    for(i = 0 ; i < m ; i++)
    {
        cin >> temp ;

        while(1)
        {
            if(a[j].second == temp)
            {
                cout << "Yes" <<endl;
                j++;
                break ;
            }
            else
            {
                cout << "No" <<endl;
                j++ ;
            }


        }

    }
    /*
        for(i = 0 ; i < n ; i++)
        {
            if(a[i].first)
            {
                cout << "Yes" <<endl; ;
            }
            else cout << "No" <<endl;;
        }
    */
    cout << endl;
    return 0 ;
}

