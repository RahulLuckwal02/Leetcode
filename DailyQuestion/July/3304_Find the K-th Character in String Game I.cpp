// 3304. Find the K-th Character in String Game I

class Solution {
public:
    char kthCharacter(int k) {
        string result = "a";

        while(result.length() < k){
            int n = result.length();
            for(int i = 0 ; i < n ;i++){
                char ch = result[i] == 'z' ? 'a' : result[i]+1;
                result.push_back(ch);
            }
        }
        return result[k-1];
        
    }
};
// Time Complexity: O(k), where k is the input number.
// Space Complexity: O(k)