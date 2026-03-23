class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int ev=0, odd=0, mini=1e8;

        for(int i=0; i<nums1.size(); i++){
            if(nums1[i]%2==0) ev++;
            else {
                odd++;
                mini=min(mini, nums1[i]);
            }
        }

        //sort(nums1.begin(), nums1.end());    


        if(odd == nums1.size() || ev == nums1.size()) return true;    
        
   
        for(int i=0; i<nums1.size(); i++){
            if(nums1[i]%2==0 && (nums1[i]-mini <=0) ){
                return false;
            }
        }

        return true;
        
        
    }
};