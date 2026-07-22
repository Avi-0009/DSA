#include<bits/stdc++.h>
using namespace std;

int longestValidParenthesis(string &s){
    int n = s.size();
    if(n == 0)return 0;
    int left = 0, right = 0;
    int maxLen = 0;

    for(int i = 0; i < n;  i++){
        if(s[i] == '('){
            left++;
        } else{
            right++;
        }

        if(left == right){
            maxLen = max(maxLen, 2 * left);
        } else if(right > left){
            left = 0; right = 0;
        }
    }
    left = 0, right= 0;

    for(int i = n - 1; i >= 0;i --){
        (s[i] == '(') ? left ++ : right ++;

        if(left == right){
            maxLen = max(maxLen, 2 * left);
        } else if(left > right){
            left = right = 0;
        }
    }
    return maxLen;
}

int main(){
    string s; getline(cin, s);
    cout << longestValidParenthesis(s) <<"\n";
    return 0;
}
