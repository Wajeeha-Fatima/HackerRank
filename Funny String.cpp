#include <bits/stdc++.h>

using namespace std;

// Complete the funnyString function below.
string funnyString(string s) {

    string fun = "Funny";
    string reverse = s;

    for (int i = 0, n = s.length() - 1; i < s.length(); i++, n--)
    {
        reverse[i] = s[n];
    }

    for (int i = 0; i < s.length()-1; i++)
    {
        int str = s[i] - s[i + 1];
        int reverse_str = reverse[i] - reverse[i + 1];
        if (str < 0) 
            str *= -1;
        if (reverse_str < 0) 
            reverse_str *= -1;
        if (str != reverse_str)
        {
            fun = "Not Funny";
            break;
        }
    }

    return fun;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = funnyString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
