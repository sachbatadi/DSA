class Solution {
public:
    int binarySearch(vector<int>& arr,int t,bool flag){
        int s=0;
        int e=arr.size()-1;
        int occurance=-1;
        while(s<=e){
            int m=(s+e)/2;
            if(arr[m]==t){
                occurance=m;
                if(flag){
                    e=m-1;
                }
                else{
                    s=m+1;
                }
            }
            else if(arr[m]>t){
                e=m-1;
            }
            else{
                s=m+1;
            }
        }
        return occurance;
    }
    vector<int> searchRange(vector<int>& arr, int t) {
        int first=binarySearch(arr,t,true);
        int last=binarySearch(arr,t,false);
        return{first,last};
    }
};