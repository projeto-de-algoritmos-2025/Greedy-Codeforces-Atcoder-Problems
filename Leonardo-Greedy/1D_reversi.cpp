#include <bits/stdc++.h>
using namespace std;

int solve(string s){
    int count  = 0;
    for(int i = 1; i < s.length(); i++)
        if(s[i] != s[i - 1])
            count++;
    return count;
}

int main(){
    string s;
    cin >> s;
    cout << solve(s) << '\n';
    return 0;
}