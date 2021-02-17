#include <iostream>
#include<vector>

using namespace std;

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c) {

    int i = 0, jumps = 0;
    
    do {
        i += (c[i + 2] == 0) + 1;
        jumps++;
    } while (i < c.size() - 1);
    
    return jumps;
}

int main()
{
    int n;
    cin >> n;

    vector<int> c(n);

    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    int result = jumpingOnClouds(c);

    cout << result << "\n";

    return 0;
}
