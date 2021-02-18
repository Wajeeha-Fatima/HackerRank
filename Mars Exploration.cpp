#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {
    
    int count = 0, modules = s.length() / 3;
    string altered;
    
    for (int i = 0; i < modules; i++)
    {
        altered += "SOS";
    }

    for (int i = 0; i < altered.length(); i++)
    {
        if (altered[i] != s[i])
            count++;
    }
   
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
