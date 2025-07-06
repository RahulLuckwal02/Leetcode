// 3330. Find the Original Typed String I


class Solution {
public:
    int possibleStringCount(string word) {
        int n = word.size();
        int count = 0;

        for(int i = 0 ; i < n ; i++){
            if(word[i] == word[i+1])
            count++;
        }

        return count+1;
        
    }
};
// Time Complexity: O(n), where n is the length of the string 'word'. We iterate through the string once to count adjacent pairs.
// Space Complexity: O(1), as we use a constant amount of space for the count variable