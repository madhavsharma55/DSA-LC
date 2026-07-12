class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr)
     {

      
        vector<int> unique_elements = arr;
        sort(unique_elements.begin(), unique_elements.end());

        unique_elements.erase(unique(unique_elements.begin(), unique_elements.end()), unique_elements.end());

        vector<int> ans;

        for (int i = 0; i < arr.size(); i++) 
        {
            
            auto it = lower_bound(unique_elements.begin(), unique_elements.end(), arr[i]);
     
            int rank = (it - unique_elements.begin()) + 1;
            ans.push_back(rank);
        }

        return ans;
    }
};
