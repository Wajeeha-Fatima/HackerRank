#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

vector<int> gradingStudents(vector<int> grades) {
    
    vector<int> res(grades.size());
    
    for(int i=0; i<grades.size(); i++)
    {
        if(grades[i] < 38)
            res[i] = grades[i];
        else 
        {
            int mul = grades[i] / 5;
            int rem = ((mul+1)*5) % grades[i];
            if( rem < 3 )
                res[i] = grades[i] + rem;
            else
                res[i] = grades[i];
        }
    }
    
    return res;
}

int main()
{
    int grades_count;
    cin >> grades_count;
    
    vector<int> grades(grades_count);

    for (int i = 0; i < grades_count; i++) {
        cin >> grades[i];
    }

    vector<int> result = gradingStudents(grades);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << "\n";
        }
    }

    return 0;
 }
