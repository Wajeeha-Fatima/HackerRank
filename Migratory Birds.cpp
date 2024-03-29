#include <bits/stdc++.h>

using namespace std;

// Complete the migratoryBirds function below.
int migratoryBirds(vector<int> arr) {
    
    int max = 0, temp = 0, bird_no = 0;
    
    sort(arr.begin(), arr.end());
    for(int i=0; i<arr.size()-1; i++)
    {
        if(arr[i] == arr[i+1])
            temp++;
        else 
            temp = 0;
            
        if(temp > max)
        {
            max = temp;
            bird_no = arr[i];
        }
    }
    
    return bird_no;
}

int main()
{
    int arr_count;
    cin >> arr_count;

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        cin >> arr[i];
    }

    int result = migratoryBirds(arr);

    cout << result << "\n";

    return 0;
}
