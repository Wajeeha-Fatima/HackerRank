#include <iostream>
#include <string>
using namespace std;

template<class T>
class stack
{
    int* data;
    int peek;
public:
    stack()
    {
        peek = -1;
        data = new int [50];
    }
    void push(T x)
    {
        data[++peek] = x;
    }
    T pop()
    {
        return data[peek--];
    }
    bool empty()
    {
        return (peek == -1);
    }
    T top()
    {
        return (data[peek]);
    }
    ~stack()
    {
        delete []data;
        data = nullptr;
    }
};

bool isBalanced(string s)
{
    stack<char> first;
    bool ans = true;

    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i] == '(' or s[i] == '[' or s[i] == '{')
            first.push(s[i]);
        else if(s[i] == ')')
        {
            if(!first.empty() and first.top() == '(')
                first.pop();
            else 
            {
                ans = false;
                break;
            }
        }
        else if(s[i] == ']')
        {
            if(!first.empty() and first.top() == '[')
                first.pop();
            else 
            {
                ans = false;
                break;
            }
        }
        else if(s[i] == '}')
        {
            if(!first.empty() and first.top() == '{')
                first.pop();
            else 
            {
                ans = false;
                break;
            }
        }
    }

    if(!first.empty())
        return false;
    else
        return ans;
    
}

int main() {
  
    string s = "";
    getline(cin, s);

    cout << (isBalanced(s) ? "Valid String" : "Invalid string");
    
    return 0;
} 
