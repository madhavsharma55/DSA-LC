class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        
        multiset<int> s(nums1.begin(), nums1.end());
        vector<int> result;
        
        for (int val : nums2)
         {
            
            auto it = s.upper_bound(val);
            
          
            if (it == s.end())
             {
                it = s.begin();
            }
            
         
            result.push_back(*it);
            s.erase(it);
        }
        
        return result;
    }
};
