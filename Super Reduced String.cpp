#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {

    bool exists = true;
    
    while(exists == true)
    {
        int size = s.size();
        exists = false;
        
        for(int i = 0; i < size-1; i++)
        {
            if(s[i] == s[i+1])
            {
                s.erase(i,2);
                exists = true;
            }
        }
    }
    
    if(s == "")
        return "Empty String";
    else 
        return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
