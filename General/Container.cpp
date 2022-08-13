
//https://leetcode.com/problems/container-with-most-water/
#include<bits/stdc++.h>
using namespace std;


    int maxArea(vector<int>& height) {
        if(height.size()==2)
            return min(height[0],height[1]);
        
        int ans = INT_MIN;
        int i=0;
        int j= height.size()-1;
        while(i<j)
        {
            int area= (j-i)*(min(height[i],height[j]));
            if(area>ans)
                ans=area;
            
            if(height[i]>height[j])
                    j--;
            else
                i++;
            
        }
        return ans;
    }
    int main()
    {
        int n;
        cin>>n;
         vector<int> height;
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            height.push_back(val);
            
        }

    }