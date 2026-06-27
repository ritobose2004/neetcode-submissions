class Solution {
public:
    int canEat(vector<int>arr, int rate){
        int finished=0;
        for(int i=0;i<arr.size();i++){
            finished+=ceil(double(arr[i])/double(rate));
        }
        cout<<finished<<endl;
        return finished;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=*max_element(piles.begin(),piles.end());
        int start=1;
        int end=maxi;
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(canEat(piles,mid)<=h){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};
