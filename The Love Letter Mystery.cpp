#include <bits/stdc++.h>

using namespace std;

// Complete the theLoveLetterMystery function below.
int theLoveLetterMystery(string s) {
    
    int count = 0;

    for (int i = 0, n = s.length()-1; i < s.length()/2; i++,n--)
    {
        while (s[i] != s[n])
        {
            if (s[i] < s[n] && s[n] != 'a')
                s[n]--;
            else if (s[i] > s[n] && s[i] != 'a')
                s[i]--;
            count++;
        }
    }
    
    return count;
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

        int result = theLoveLetterMystery(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
