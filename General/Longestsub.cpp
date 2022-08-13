#include<iostream>
#include<string>
#include<set>
#include<climits>


using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0,j=0;
    set<char> st;
    int maxsize=0;
    while(j<s.size())
    {
        if(st.count(s[j])==0)
        {
            st.insert(s[j]);
            maxsize=max(maxsize,int(st.size()));

            j++;
        }

        else
        {
            st.erase(s[i]);
            i++;
        }
    }
    cout<<maxsize;
    

}