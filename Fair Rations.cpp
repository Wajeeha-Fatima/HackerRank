#include <bits/stdc++.h>

using namespace std;

// Complete the fairRations function below.
void fairRations(vector<int> B) {
    
    int sum = 0;
    for(int i = 0; i < B.size(); i++) sum+=B[i];
    
    if(sum % 2 != 0) 
    {
        cout << "NO" << endl;
        return;
    }
    else{
        int loaves = 0;
        for(int i=0; i<B.size()-1; i++)
        {
            while( B[i] % 2 != 0 )
            {
                B[i] += 1;
                B[i+1] += 1;
                loaves += 2; 
            }
        }
        cout << loaves << endl;
    }
}

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> B(N);

    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    fairRations(B);
    
    return 0;
}
