class Solution {
public:
    int fib(int N) {
        long long int prev = 1;
        long long int prevPrev = 0;
        long long int answer = 0;
        
        if(N == 1) {
            return prev; 
        }
        
        for(int i = 2; i <= N; ++i) {
            answer = prevPrev + prev;
            prevPrev = prev;
            prev = answer;
        }
        
        return answer;
    }
};