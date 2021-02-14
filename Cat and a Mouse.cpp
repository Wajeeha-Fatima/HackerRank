#include <bits/stdc++.h>

using namespace std;

// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z) {

    if( abs(z-x) == abs(y-z) )
        return "Mouse C";
    else if( abs(y-z) < abs(z-x) )
        return "Cat B";
    else 
        return "Cat A";

}

int main()
{
    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {

        int x, y, z;

        cin >> x >> y >> z;

        string result = catAndMouse(x, y, z);

        cout << result << "\n";
    }

    return 0;
}
