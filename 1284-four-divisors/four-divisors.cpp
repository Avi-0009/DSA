class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n=nums.size();
        long long ans=0;
        unordered_map<int, int> mp;
        for (int i=0; i<n; i++){
            int cnt=0;
            int sum=0;
            if(mp.find(sum)!=mp.end()){
                if(mp[nums[i]]!=4)
                    continue;
                else{
                    ans+=sum;
                    mp[nums[i]]=sum;
                    continue;
                }
            }

            for(int j=1; j*j<=nums[i]; j++){
                int d=nums[i]/j;
                if(nums[i]%j==0){
                    cnt++;
                    sum+=j;
                }
                if(nums[i]%d==0 and d!=j){
                    cnt++;
                    sum+=d;
                }
            }
            if(cnt==4){
                mp[nums[i]]=sum;
                ans+=sum;
            }
        }
        return (int)ans;
    }
};