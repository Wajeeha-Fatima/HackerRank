#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    bool isNotpresent = true;
    int count = 0;
    
    for(int i=0; i<s.length(); i++) {
      if(s[i] >= 65 && s[i] <= 90) {
        s[i] += 32;
      }
      isNotpresent = true;
      for(int j=0; j<i; j++) {
        if(s[i] == s[j]) {
          isNotpresent = false;
          break;
        }
      }
      if(isNotpresent == true) 
        count++;
    }
    
    return (count == 27) ? "pangram" : "not pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
