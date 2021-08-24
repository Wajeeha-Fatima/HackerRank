#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s) {
    string encrypted = "";
    int rows = ceil(sqrt(s.length()));

    for(int i=0; i<rows; i++) {
        encrypted += s[i];
        for(int j=i+rows; j<s.length(); j+=rows) {
            encrypted += s[j];
        }
        encrypted += ' ';
    }
    return encrypted;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
