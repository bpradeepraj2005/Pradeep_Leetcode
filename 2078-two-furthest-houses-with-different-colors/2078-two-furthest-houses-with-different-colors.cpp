class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxi=-1;
        int i=0, j=colors.size()-1;
        // forward
        while(i<j){
            if(colors[i]!=colors[j]){
                maxi=max(maxi,j-i);
            }
            i++;
        }
        // backward
        i=0, j=colors.size()-1;
        while(i<j){
            if(colors[i]!=colors[j]){
                maxi=max(maxi,j-i);
            }
            j--;
        }

        return maxi;
    }
};