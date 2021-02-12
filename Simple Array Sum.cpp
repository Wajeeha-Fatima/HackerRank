#include <iostream>
using namespace std;


/*
 * Complete the simpleArraySum function below.
 */
int simpleArraySum(vector<int> ar) {
    /*
     * Write your code here.
    */
     
    int sum = 0;
    for(int i=0; i<ar.size(); i++)
        sum += ar[i];
    return sum;
}

int main()
{
   int count;
   cin >> count;
   
   vector<int> ar(count);
   for(int i=0; i<count; i++)
        cin >> ar[i];
        
   int result = simpleArraySum(ar);
   
   cout << result;
   
   return 0;
}
