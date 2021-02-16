#include <bits/stdc++.h>

using namespace std;

// Complete the beautifulDays function below.
int beautifulDays(int i, int j, int k) {
    
    int count = 0;
    
    for(int itr = i; itr<=j; itr++)
    {
        int rev = 0,rem;  
        int temp = itr;  
        
        while(temp!=0)    
        {    
            rem = temp % 10;      
            rev = rev * 10 + rem;    
            temp /= 10;    
        }    
        if(abs(itr - rev) % k == 0)
            count++;
    }
    
    return count;
}

int main()
{
    int i, j, k;
    cin >> i >> j >> k;

    int result = beautifulDays(i, j, k);

    cout << result << "\n";

    return 0;
}
