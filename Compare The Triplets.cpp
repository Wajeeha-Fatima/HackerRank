#include <bits/stdc++.h>

using namespace std;

// Complete the compareTriplets function below.
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    
    vector<int> result(2);
    
    for(int i=0; i<a.size(); i++)
    {
        if( a[i] > b[i] ) 
            result[0]++;
        else if( a[i] < b[i] )
            result[1]++;
    }
    return result;
}

int main()
{
    vector<int> a(3);

    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    vector<int> b(3);

    for (int i = 0; i < 3; i++) {
        cin >> b[i];
    }

    vector<int> result = compareTriplets(a, b);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
