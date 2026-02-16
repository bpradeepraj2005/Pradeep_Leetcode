class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>mapp;

        for(int i=0;  i<nums.size(); i++){
            mapp[nums[i]]++;
        }

        unordered_map<int,int>frq;

        for(auto it:mapp){
            frq[it.second]++;
        }
        
        //int ans=-1;

        for(int i=0; i<nums.size(); i++){
            if(frq[mapp[nums[i]]] == 1){
                return nums[i];
                
            }
        }

        return -1;
        
    }
};