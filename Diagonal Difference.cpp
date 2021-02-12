#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
    int primary = 0, secondary = 0;
    
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr[i].size(); j++)
        {
            if( i == j )
                primary += arr[i][j];
            if( i+j == arr.size()-1 ) 
                secondary += arr[i][j];
        }
    }
        
    return abs(primary - secondary);
}

int main()
{
	  int n;
	  cin >> n;

    vector<vector<int>> arr(n);

    for (int i = 0; i < n; i++) {
        arr[i].resize(n);


        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int result = diagonalDifference(arr);

    cout << result << "\n";

    return 0;
}
