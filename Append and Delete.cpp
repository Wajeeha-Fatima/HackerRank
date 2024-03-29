#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
    
    if(k >= (s.size() + t.size())) 
        return "Yes";

    int count;
    for(count = 0; count < s.size() && count < t.size(); count++)
    {
        if(s[count] != t[count])
            break;
    }
    
    count--;
    k -= (s.size() - count);
    k -= (t.size() - count);
    
    if(k % 2 == 0)
        return "Yes";
    else
        return "No";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
