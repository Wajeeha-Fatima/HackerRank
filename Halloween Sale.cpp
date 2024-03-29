#include <bits/stdc++.h>

using namespace std;

// Complete the howManyGames function below.
int howManyGames(int p, int d, int m, int s) {
    // Return the number of games you can buy
    
    if( p == d == m)
        return s;
        
    int games = 0;
    
    while( s >= p )
    {
        s -= p;
        games++;
        p -= d;
        
        if( p < m) 
            p = m;
    }
    
    return games;
}

int main()
{
    int p, d, m, s;
    cin >> p >> d >> m >> s;

    int answer = howManyGames(p, d, m, s);

    cout << answer << "\n";

    return 0;
}
