#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
     
    string new_time;
    int h1 = (int)s[1] - '0';
    int h2 = (int)s[0] - '0';
    int new_hours = (h2 * 10 + h1 % 10);
 
    if (s[8] == 'A')
    {
        if (new_hours == 12)
        {
            new_time = "00";
            new_time.append(s.substr(2,6));
        }
        else
        {
            new_time.append(s.substr(0,8));
        }
    }
 
    else
    {
        if (new_hours == 12)
        {
            new_time = "12";
            new_time.append(s.substr(2,6));
        }
        else
        {
            new_hours = new_hours + 12;
            new_time = to_string(new_hours);
            new_time.append(s.substr(2,6));
        }
    }
    return new_time;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
