class Solution {
public:
    int uniquePaths(int m, int n) {
        
    int count=0;
    dp(0,0,count,m,n);
        
        
    return count;                      
        
        
    }
    
    void dp(int x, int y , int &count,int m ,int n)
    {
        if(x==m-1 && y==n-1)
        {
            count+=1;
            
            
            return  ;
            
        }
        
        if(x<m-1)
        {
            dp(x+1,y,count,m,n);
        }
        if(y<n-1)
            dp(x,y+1,count,m,n);
    }
};