class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26]={0};
        for (int i=0; i<s.length();i++)
        {
            int index = s[i]-'a';
            freq[index]++;
        } 
        int vowel_max = 0;
        int cons_max=0;
        for (int i=0; i<26;i++)
        {
            if (i==0||i== 4 || i==8|| i==14 || i==20)
            vowel_max = max(vowel_max, freq[i]);
            else
            cons_max = max(cons_max, freq[i]);
        } 
        return (vowel_max + cons_max);
    }
};
