class Solution {
public:
    vector<string> fizzBuzz(int n) {
       vector<string> arr(n);
        
        for(int i=0;i<n;i++){
            int num=i+1;
            if((num%3==0) && (num%5==0)){
                arr[i]="FizzBuzz";
            }
            else if(num%5==0){
                arr[i]="Buzz";
            }
            else if(num%3==0){
                arr[i]="Fizz";
            }
            else{
                arr[i]=to_string(num);
            }
        }
            return arr;
    }
};