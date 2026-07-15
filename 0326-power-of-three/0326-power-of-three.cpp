class Solution {
public:
    bool isPowerOfThree(int n) {
        int x;
        if(n<=0)
        return false;
        while(n%3==0)
        {
            n/=3;
        }
        return (n==1);

    }
};