#include <bits/stdc++.h>
#include <array>

using namespace std;

/*
 * Complete the 'birthdayCakeCandles' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY candles as parameter.
 */

int birthdayCakeCandles(vector<int> candles) {

    int max = *max_element(candles.begin(), candles.end()), tallest = 0;
    
    for(int i=0; i<candles.size(); i++)
    {
        if( max == candles[i] )
            tallest++;
    }
    return tallest;
}

int main()
{
    int candles_count;
    cin >> candles_count;

    vector<int> candles(candles_count);

    for (int i = 0; i < candles_count; i++) {
        cin >> candles[i];
    }

    int result = birthdayCakeCandles(candles);

    cout << result;

    return 0;
}
