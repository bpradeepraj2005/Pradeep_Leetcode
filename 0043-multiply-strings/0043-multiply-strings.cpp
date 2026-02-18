#define ll long long
class Solution {
public:
    string multiply(string num1, string num2) {
        // ll ans=0, ans1=0;
        // for(int i=0; i<num1.size(); i++){

        //     int a= num1[i]-'0';

        //     ans=(ans*10)+a;
        // }

        // for(int i=0; i<num2.size(); i++){
        //     int a= num2[i]-'0';

        //     ans1=(ans1*10)+a;
        // }

        // ll s=(ans*ans1);

        

        // return to_string(s);

        if(num1=="0" || num2=="0") return "0";

        int n=num1.size();
        int m=num2.size();

        vector<int>temp(n+m,0);

        for(int i=n-1; i>=0; i--){

            // int a=num1[i]-'0';

            for(int j=m-1; j>=0; j--){
                
                // int b=num2[j]-'0';

                temp[i+j+1] += (num1[i]-'0') * (num2[j]-'0');
                
                temp[i+j] += temp[i+j+1]/10;
                temp[i+j+1] %= 10;

               // cout<<temp[i+j+1]<<" "<<temp[i+j]<<endl;
            }
        }

        int i=0;
        while(temp[i]==0){
            i++;
        } 

        string str="";
        while(i<temp.size()){
            str.push_back(temp[i]+'0');
            i++;
        }

        return str;


    }
};