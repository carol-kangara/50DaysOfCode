class Solution {
    public int dominantIndex(int[] nums) {
        if (nums.length==0){
            return -1;
        }
        else if (nums.length==1){
            return 0;
        }
        int max1=0;
        int max2=0;
        int n=-1;
        for(int i=0;i<nums.length;i++){
            if (nums[i]>=max1){
                max2=max1;
                max1=nums[i];
                n=i;
            }else if (nums[i]>=max2){
                max2=nums[i];
            }
        }
        if (max1>=(2*max2)){
            return n;
        }
        return -1;
    }
}
