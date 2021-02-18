#include <bits/stdc++.h>

using namespace std;

// Complete the chocolateFeast function below.
int chocolateFeast(int n, int c, int m) {

    int chocalates_count = n / c;
    int wrapers = chocalates_count;
    
    while(wrapers >= m)
    {
        wrapers -= m;  
        chocalates_count++;
        wrapers++;
    }
    
    return chocalates_count;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n, c, m;
        cin >> n >> c >> m;

        int result = chocolateFeast(n, c, m);

        cout << result << "\n";
    }

    return 0;
}
