// Question : 11

// Brute Force Solution

for (int i=0;i<height.size();i++)
{
    for(int j=i+1;j<height.size();j++)
    {
        int area=min(height[i],height[j])*(j-i);
        maxArea=max(maxArea,area);
    }
}



// Optimal Solution

class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0;
        int rp=height.size()-1;
        int ans = 0;
        while(lp<rp)
        {
            int w= rp-lp;
            int h =min(height[lp],height[rp]);
            int currwat=w*h;
            ans=max(ans,currwat);
            if(height[lp]<height[rp])
                lp++;
            else
                rp --;
        }
        return ans;
    }
};