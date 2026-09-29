class Solution {
public:
    int calPoints(vector<string>& operations) {
        int arr[1000];
        int top=0;
        for(int i=0;i<operations.size();i++){
            const std::string& o=operations[i];
            if(o=="+"){
                arr[top]=arr[top-1]+arr[top-2];
                top++;
            }
            else if(o=="D"){
                arr[top]=2*arr[top-1];
                top++;
            }
            else if(o=="C"){
                top--;
            }
            else{
                int val=0;
                int sign=1;
                int idx=0;
                if (o[0] == '-') {
                    sign = -1;
                    idx = 1;
                }

                while (idx < o.length()) {
                    val = val * 10 + (o[idx] - '0');
                    idx++;
                }
                arr[top] = sign * val;
                top++;
            }
        }
        int totalSum = 0;
        for (int i = 0; i < top; i++) {
            totalSum += arr[i];
        }

        return totalSum;
    }
};