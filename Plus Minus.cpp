#include <bits/stdc++.h>

using namespace std;


// Complete the plusMinus function below.
void plusMinus(vector<int> arr) {
    
    float zero = 0, positive = 0, negative = 0;
    
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i] > 0) 
          positive++;
        else if(arr[i] < 0) 
          negative++;
        else 
          zero++;
    }
    
    cout << fixed << setprecision(6);
    cout << positive / arr.size() << endl;
    cout << negative / arr.size() << endl;
    cout << zero / arr.size() << endl;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    plusMinus(arr);

    return 0;
}
