#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int balance = 0;
    int start = 0;
    vector<string>ans;
    for (int i = 0;i<s.size();i++)
    {
        if (s[i] == 'L')
           balance++;
        else
           balance--;
        if (balance == 0)
        {
            ans.push_back (s.substr(start, i-start + 1));
            start = i + 1;
        }
    }
    cout<<ans.size()<<endl;
    for (string x : ans)
    {
        cout<<x<<" ";
    }
    return 0;
}