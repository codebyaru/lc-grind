class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len1 = s1.length();
        int len2 = s2.length();
        
        if (len1 > len2) return false;
        
        // Sort s1 once
        string sortedS1 = s1;
        sort(sortedS1.begin(), sortedS1.end());
        
        // Check every substring of length len1 in s2
        for (int i = 0; i <= len2 - len1; i++) {
            // Extract the substring and sort it
            string sub = s2.substr(i, len1);
            sort(sub.begin(), sub.end());
            
            // Compare the sorted substring with sorted s1
            if (sortedS1 == sub) {
                return true;
            }
        }
        
        return false;
    }
};
