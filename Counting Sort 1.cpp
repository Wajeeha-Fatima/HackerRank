#include <bits/stdc++.h>

using namespace std;

// Complete the countingSort function below.
vector<int> countingSort(vector<int> arr) {

    vector <int> counting(100);
    for(int i = 0; i < arr.size(); i++)
    {
        counting[arr[i]]++;
    }
    
    return counting;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
       cin >> arr[i];
    }

    vector<int> result = countingSort(arr);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << " ";
        }
    }
    
    return 0;
}
