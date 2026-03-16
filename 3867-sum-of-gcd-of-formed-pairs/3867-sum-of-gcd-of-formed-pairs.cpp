class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>pref;

        int maxi=-1;
        for(int i=0; i<nums.size();i++){
            maxi=max(maxi, nums[i]);
            long long var=__gcd(nums[i], maxi);
            pref.push_back(var);
        }

        sort(pref.begin(), pref.end());

        // for(auto it:pref) cout<<it<<" ";
        // cout<<endl;

        long long  i=0, j=pref.size()-1;
        long long sum=0;

        while(i<j){
            if(i==j) break;

            sum+=__gcd(pref[i], pref[j]);

            i++;
            j--;
        }

        return sum;

    }
};