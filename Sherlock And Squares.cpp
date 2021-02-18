#include <bits/stdc++.h>

using namespace std;

// Complete the squares function below.
int squares(int a, int b) {

    long square_integer = (long)sqrt(b) - (long)sqrt(a);
    if(sqrt(a) - (long)sqrt(a) == 0) 
        square_integer++;
    
    return square_integer;
}

int main()
{
    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        int a, b;
        cin >> a >> b;

        int result = squares(a, b);

        cout << result << "\n";
    }

    return 0;
}
