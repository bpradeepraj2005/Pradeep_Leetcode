class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int l=0, r=0;
        // int prod=1, maxi=INT_MIN;
        // while(r<nums.size()){
        //    if(nums[r]>=0){
        //     prod*=nums[r];
        //     maxi=max(maxi, prod);
        //     r++;
        //    }
        //    else{
        //     if(nums[r]<0){
        //         l++;
        //     }
        //     prod=1;
        //     r=l;
        //    }
        //    maxi=max(maxi, prod);
        // }
        // return prod;

        //*************************************************

        // correct but for some testcase it won't work
        // written on own
        
        // int maxi=INT_MIN;
        // int prod=1, prev=0;
        // for(int i=0;i<nums.size();i++){

        //     prod=prod*nums[i];
        //     maxi=max(maxi, prod);
        //     // if(prod<0){
        //     //     prod*=nums[];
        //     // }
        //     if(prod==0){
        //         prod=1;
        //     }
        //     //cout<<maxi<<endl;           
        // }
        // return maxi;
        //******************************************************
        
        // learn and wrote it, at first i had thought of preffix and suffix array;
        int pref=1, suff=1, maxi=INT_MIN;

        for(int i=0; i<nums.size(); i++){
            if(pref==0) pref=1;
            if(suff==0) suff=1;

            pref=pref*nums[i];
            suff=suff*nums[nums.size()-i-1];

            maxi=max(maxi, max(pref,suff));
        }

        return maxi;

        
    }
};