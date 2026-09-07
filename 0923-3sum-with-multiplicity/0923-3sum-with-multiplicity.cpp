class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        long long ans=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            int left=i+1;
            int right=n-1;
            while(left<right)
            {
                int sum=arr[i]+arr[left]+arr[right];
                if(sum<target)
                left++;
                else if(sum>target)
                right--;
                else {
                    if(arr[left]==arr[right])
                    {
                        long long count=right-left+1; 
                        ans+=count*(count-1)/2;break;
                    }
                    else
                    {
                        long long leftCount=1;
                        long long rightCount=1;
                        while(left+1<right+1 && arr[left]==arr[left+1]){
                            leftCount++;left++;
                        }
                        while(right-1>left && arr[right]==arr[right-1]){
                            rightCount++;
                            right--;
                        }
                        ans+=leftCount*rightCount;
                        left++; right--;
                    }
                }
            }
        } return ans%1000000007;
    }
};