
//https://leetcode.com/problems/generate-parentheses/
//Difficulty - Medium
#include<iostream>
#include<vector>
using namespace std;
vector<string> dp(int n, int m , vector<string> &ans , string brackets)
{
    if(m==0 && n==0)
    {
        ans.push_back(brackets);
        return ans;
    }

    if(n>0) //Left bracket is not zero then add a left bracket recursively
        dp(n-1,m+1,ans,brackets+"(");
    if(m>0)
        dp(n,m-1,ans,brackets+")");



    return ans;
}
int main()
{
    int n;
    cin>>n;

    vector<string> ans;
    
    dp(n,0,ans,"");

    for(auto i : ans)
        cout<<i<<" ";
        
    
}

