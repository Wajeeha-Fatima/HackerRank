#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pickingNumbers' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

int pickingNumbers(vector<int> a) {
    
    int count;
    vector <int> pairs;
    
    sort(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++)
    {
        count = 1;
        for(int j = i+1; j < a.size(); j++)
        {
            if(abs(a[i] - a[j]) <= 1)
                count++;
        }
        pairs.push_back(count);
    }
    
    sort(pairs.begin(), pairs.end());
    
    return pairs[pairs.size()-1];
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int result = pickingNumbers(a);

    cout << result << "\n";

    return 0;
}
