class Solution {
public:
    int reverse(int num){
        long res=0;

        while(num!=0){
            int temp = num%10;
            res=temp+res*10;
            if(res>INT_MAX || res<INT_MIN) return 0;
            num=num/10;
        }

        cout<<res;
        return res;
    }

    bool isSameAfterReversals(int num) {
        int temp = reverse(num);
        return num==reverse(temp);
    }
};