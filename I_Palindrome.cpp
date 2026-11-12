#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    string rev = n;
    reverse (rev.begin(),rev.end());
    int i = 0;
    while (i < rev.size()-1 && rev[i] == '0')
      {
        i++;
      }
      cout<<rev.substr(i)<<endl;
      if (n == rev)
          cout<<"YES"<<endl;
       else
         cout<<"NO"<<endl;
    return 0;
}