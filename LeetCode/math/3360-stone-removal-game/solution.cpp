class Solution {
public:
    bool canAliceWin(int n) {
        int cnt = 0;
        int i = 10;

        while(true){
            if((n-i) < 0){
                break;
            }
            n = n - i;
            cnt++;
            i--;
        }

        if(cnt%2 == 0){
            return false;
        }
        
        return true;
    }
};
