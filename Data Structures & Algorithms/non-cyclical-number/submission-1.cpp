class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> visit;
        while(visit.find(n) == visit.end()){
            visit.insert(n);
            n = numofSquares(n);
            if(n == 1){
                return true;
            }
        }
        return false;
    }
    private:
         int numofSquares(int n){
            int output = 0;
            while(n > 0){
                int digits = n % 10;
                digits = digits * digits;
                output += digits;
                n /= 10;
            }
        return output;
    }
};



