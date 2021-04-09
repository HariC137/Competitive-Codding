#include <bits/stdc++.h> 
using namespace std ;
int main()
{
    string s = "(]" ;
    stack <char> p;
    for( auto i : s)
    {
        if(i == '(' || i=='[' || i=='{')
        {
            p.push(i);
        }
        else
        { 
            if(i == ')' && p.top() == '(')
        {
            p.pop();
        }
        else if(i == ']' && p.top() == '[')
        {
            p.pop();
        }
        else if(i == '}' && p.top() == '{')
        {
            p.pop();
        }
        }
    }
    if (p.empty() == 0)
    {
        cout << p.empty();
    }
    else
    {
        cout <<  false;
    } 
    return 0;
}


