#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    stack<char> s1;
    vector<int> maxii;
    int counter = 0;
    int sub = 0;

    for (int i = 0; i < s.size(); i++)
     {
        if (!s1.empty()) {
            if (s1.top() == '(' && s[i] == ')') 
            {
                s1.pop();
                counter += 2;
            } 
            else if (s1.top() == '{' && s[i] == '}')
            
            {
                s1.pop();
                counter += 2;
            } 
            
            else if (s1.top() == '<' && s[i] == '>') 
            
            {
                s1.pop();
                counter += 2;
            } 
            
            else if (s1.top() == '[' && s[i] == ']') 
            {
                s1.pop();
                counter += 2;
            } 
           
            else if (s[i] == '(' || s[i] == '{' || s[i] == '<' || s[i] == '[')
             {
                s1.push(s[i]);
            
            }

             else 
            {
                maxii.push_back(counter);
                sub++;
                counter = 0;
            }
        }

         else 
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '<' || s[i] == '[') {
                s1.push(s[i]);
            }
            
             else {
                if (counter > 0) {
                    maxii.push_back(counter);
                    sub++;
                    counter = 0;
                }
            }
        }
    }

    if (counter != 0) 
    {
        sub++;
        maxii.push_back(counter);
    }

    if (!maxii.empty()) 
    {
        cout << *max_element(maxii.begin(), maxii.end()) << " " << sub;
    } 
    
    
    else 
    {
        cout << 0 << " " << 1;
    }

    return 0;
}
