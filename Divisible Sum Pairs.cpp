#include <bits/stdc++.h>

using namespace std;

// Complete the divisibleSumPairs function below.
int divisibleSumPairs(int n, int k, vector<int> ar) {

    int pairs_count = 0;
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if((ar[i] + ar[j]) % k == 0)
                pairs_count++;
        }
    }
    
    return pairs_count;
}

int main()
{
    int n, k;
    
    cin >> n >> k;

    vector<int> ar(n);

    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    int result = divisibleSumPairs(n, k, ar);

    cout << result << "\n";

    return 0;
}
