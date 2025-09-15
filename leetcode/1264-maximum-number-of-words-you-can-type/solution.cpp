class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count = 0;
        bool ok = true;  // current word valid?

        for (int i = 0; i < text.size(); i++) {
            char c = text[i];

            if (c == ' ') {         // word ends
                if (ok) count++;
                ok = true;          // reset for next word
            }
            else {
                for (int j = 0; j < brokenLetters.size(); j++) {
                    if (c == brokenLetters[j]) {
                        ok = false;   // mark word invalid
                        break;        // no need to check further brokenLetters
                    }
                }
            }
        }

        if (ok) count++;  // check last word
        return count;
    }
};

