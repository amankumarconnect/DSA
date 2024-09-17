class Solution {
public:
    int strStr(string haystack, string needle) {
        int lenx = needle.size();
        int lens = haystack.size();

        int i = 0;

        for (int i = 0; i < lens; i++) {
            if (haystack[i] == needle[0]) {
                int temp = i;
                for (int j = 0; j < lenx; j++, temp++) {
                    if (haystack[temp] != needle[j]) {
                        break;
                    }
                    if (j == lenx - 1 && haystack[temp] == needle[j]) {
                        return i;
                    }
                }
            }
        }
        return -1;
    }
};
