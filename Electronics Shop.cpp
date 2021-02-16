#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the getMoneySpent function below.
 */
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    /*
     * Write your code here.
     */
    
    int max = -1;
    
    for(int i=0; i<keyboards.size(); i++)
    {
        for(int j=0; j<drives.size(); j++)
        {
            if((keyboards[i] + drives[j]) <= b)
            {
               if((keyboards[i] + drives[j]) > max)
               {
                   max = keyboards[i] + drives[j];
               } 
            }
        }
    }
    
    return max;
}

int main()
{
    int b, n, m;
    cin >> b >> n >> m;

    vector<int> keyboards(n);

    for (int keyboards_itr = 0; keyboards_itr < n; keyboards_itr++) {
        cin >> keyboards[keyboards_itr];
    }

    vector<int> drives(m);

    for (int drives_itr = 0; drives_itr < m; drives_itr++) {
        cin >> drives[drives_itr];
    }

    /*
     * The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
     */

    int moneySpent = getMoneySpent(keyboards, drives, b);

    cout << moneySpent << "\n";
    
    return 0;
}
