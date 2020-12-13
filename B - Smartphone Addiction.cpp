#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int N, M, T, i, A,B, temp, battery;

    cin >> N >> M >> T ;
    int a[M * 2];

    battery = N ;

    for(i = 0 ; i< M* 2 ; i++ )
    {
        cin >> a[i];
    }
    battery = battery - a[0];

    if(battery <= 0)
    {
        cout << "No"<<endl;
        return 0 ;

    }

    for(i = 0 ; i < (M*2) -1  ; i++)
    {

        temp = a[i+1] - a[i];

        if(i % 2 == 0)
        {
            battery = battery + temp;
            if(battery >= N)
                battery = N;
        }
        else
            battery = battery - temp;

        //cout << battery<<endl;
        if(battery <= 0)
        {
            cout << "No"<<endl;
            return 0 ;

        }

    }
    temp = T -  a[(M*2) -1];
    battery = battery - ( temp );

     //cout << battery<<endl;
    if(battery > 0)
    {
        cout << "Yes" <<endl;
    }
    else
        cout << "No"<<endl;

    return 0 ;
}
