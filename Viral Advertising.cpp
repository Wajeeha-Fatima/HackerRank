#include <bits/stdc++.h>

using namespace std;

// Complete the viralAdvertising function below.
int viralAdvertising(int n) {
    
    int shared = 5, liked = 2, commulative = 2;
    
    for(int i = 2; i <= n; i++)
    {
        shared = (shared / 2) * 3;
        liked = shared / 2; 
        commulative += liked;
    }
    
    return commulative;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
