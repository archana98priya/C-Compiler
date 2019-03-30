int strangelyCompatible(vector<string> students) {

    int n = students.size();
    int m = students[0].length();
    int ans = 0;

    map<string, int> maps;
    for(int i=0; i<n; i++) {
        maps[students[i]]++;
        for(int j=0; j<m; j++) {
            int c = students[i][j] - 'a';
            for(int k=0; k<26; k++) {
                if(k != c) {
                    students[i][j] = k + 'a';
                    ans += maps[students[i]];
                }
            }
            students[i][j] = c + 'a';
        }
    }

    return ans;
}