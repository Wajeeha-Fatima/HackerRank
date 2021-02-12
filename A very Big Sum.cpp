#include <iostream>
using namespace std;

// Complete the aVeryBigSum function below.
long aVeryBigSum(vector<long> ar) {
    long sum = 0;
    for(int i=0; i<ar.size(); i++)
        sum+=ar[i];
    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int ar_count;
    cin >> ar_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<long> ar(ar_count);

    for (int i = 0; i < ar_count; i++) {
        cin >> ar[i];
    }

    long result = aVeryBigSum(ar);

    fout << result << "\n";

    fout.close();
    
    return 0;
}
