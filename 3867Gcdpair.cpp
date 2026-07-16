class Solution {
public:
    long long gcdSum(vector<int>& nums) {

        vector<int>p;
        vector<int>m;
        int mx = INT_MIN ;
        long long result = 0;
        int left = 0 , right = nums.size()-1 ;

        for(int i = 0 ; i<nums.size() ; i++)
        {
           mx = max(nums[i],mx);
           m.push_back(mx);
        }

        for(int i = 0 ; i<nums.size() ; i++)
        {
            p.push_back(gcd(nums[i],m[i]));
        }

        sort(p.begin() , p.end());

        
        
        while (left < right) 
        {
            result += gcd(p[left], p[right]);
            left++;
            right --;
            
        }

        return result;
    }

};
