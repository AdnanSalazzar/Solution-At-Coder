#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int a[4] , *pos, i ;

    for(i = 0 ; i< 4 ;i++)
    {
        cin >> a[i];
    }

    pos = min_element(a , a+4);

    cout << *pos<<endl ;

    return 0 ;
}
