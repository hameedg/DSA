  int digits(int x) {
        int count = 0;
        while(x)
        {
			count++;
            x = x/10;
        }
        return count;
    }
    void findNumbers(int curr, int n ,int k, vector<int> &result){
        if(digits(curr) == n) //Base case
        {
            result.push_back(curr);
            return;
        }
        for(int i=0;i<10;i++) {
           int last_digit = curr % 10;
           if(abs(last_digit - i) == k) 
           {
               findNumbers((curr*10 + i), n, k, result); 
           } 
        }
    }
    vector<int> numsSameConsecDiff(int N, int K) {
        vector<int> result; 
        if(N == 1) //Special Case where 0 can be included if given 'N' is 1
        {
            result.push_back(0);
        }
        for(int i=1;i<10;i++) {
            findNumbers(i, N, K, result);    
        }
        return result; 
    }