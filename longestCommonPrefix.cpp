class Solution {
public:
    string commonPrefix(string a, string b) {
    int i = 0;
    int n = a.length();
    int m = b.length();
    while (i < n && i < m) {
        if (a[i] != b[i]) break;
        i++;
    }

    return a.substr(0, i);
}

string longestCommonPrefix(vector<string>& strs) {
    string prefix = strs[0];
    int n = strs.size();
    for (int i = 1; i < n; i++) {
        prefix = commonPrefix(prefix, strs[i]);

        if (prefix == "") return "";
    }

    return prefix;
}
};
