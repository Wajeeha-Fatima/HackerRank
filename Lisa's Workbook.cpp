#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the workbook function below.
int workbook(int n, int k, vector<int> arr) {

    int special = 0, page = 0, question = 0, problem;
    
    for(int i = 0; i < n; i++)
    {
        problem = 1;
        question = arr[i];
        page++;
        while(question > 0) 
        {
            question--;
            if(problem == page) 
                special++;
            if(problem % k == 0 && question != 0) 
                page++;
            
            problem++;
        }
        
    }
    
    return special;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = workbook(n, k, arr);

    cout << result << "\n";

    return 0;
}
