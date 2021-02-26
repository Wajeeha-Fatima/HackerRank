#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template<class T>
class stack{
    T *data;   
    int top;
    int size;
public:
    stack(int s)
    {
        size = s;
        data = new T [size];
        top = -1;
    }
    void push(int x)
    {
        if (full())
            resize();
        data[++top]  = x;
    }
    int pop()
    {
        if (empty())
            exit(0);    
        return data[top--];
    }
    int empty()
    {
        return ( top == -1 );
    }
    int full()
    {
        return ( top == size -1 );
    }
    void resize()
    {
        int* newArray = new T [size];
        for(int i=0; i<size; i++)
        {
            newArray[i] = data[i];
        }
        delete []data;
        
        data = new T [size*2];
        for(int i=0; i<size; i++)
        {
            data[i] = newArray[i];
        }
        size *= 2;
        
        delete []newArray;
        newArray = nullptr;
    }
};

int findmax(stack<int> mystack)
{
    int max = 0;

    for (int i = 0; !mystack.empty(); i++)
    {
        int temp = mystack.pop();
        if (temp > max) 
            max = temp;
    }

    return max;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int N, choice;
    int push;
    cin >> N;
    stack<int> s(50);
    
    for(int i=0; i<N; i++)
    {
        cin >> choice;
        if (choice == 1)
        {
            cin >> push;
            s.push(push);
        }
        else if (choice == 2)
                s.pop();
        else 
            cout << findmax(s) << endl;
    } 
    return 0;
}
