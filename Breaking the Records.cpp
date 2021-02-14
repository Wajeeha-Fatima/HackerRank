#include <bits/stdc++.h>

using namespace std;

// Complete the breakingRecords function below.
vector<int> breakingRecords(vector<int> scores) {
    
    vector<int> record(2);
    
    int maximum = scores[0], minimum = scores[0];
    
    for(int i=0; i<scores.size(); i++)
    {
        if( scores[i] > maximum  )
        {
            maximum = scores[i];
            record[0]++;
        }
        if( scores[i] < minimum  )
        {
            minimum = scores[i];
            record[1]++;
        }
    }
    
    return record;
}

int main()
{
    int n;
    cin >> n;

    vector<int> scores(n);

    for (int i = 0; i < n; i++) {
       cin >> scores[i];
    }

    vector<int> result = breakingRecords(scores);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << " ";
        }
    }

    cout << "\n";

    return 0;
}
