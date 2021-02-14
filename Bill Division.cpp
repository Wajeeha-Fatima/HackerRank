#include <bits/stdc++.h>

using namespace std;

// Complete the bonAppetit function below.
void bonAppetit(vector<int> bill, int k, int b) {
    
    int actual_amount = 0, total_amount = 0;
    
    for(int i=0; i<bill.size(); i++)
    {
        if( i != k )
            total_amount += bill[i];
    }
    
    actual_amount = total_amount / 2;
    
    if( actual_amount == b )
        cout << "Bon Appetit";
    else 
        cout << b - actual_amount;
}

int main()
{
    int n, k;
    cin >> n >> k;
    
    vector<int> bill(n);

    for (int i = 0; i < n; i++) {
        cin >> bill[i];
    }
    
    int b;
    cin >> b;

    bonAppetit(bill, k, b);

    return 0;
}
