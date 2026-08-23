#include "../../include/playground_types.hpp"

namespace optimal {
void dfs(const std::string& s, int start, const std::vector<std::vector<bool>>& dp,
         std::vector<std::string>& cur, std::vector<std::vector<std::string>>& out) {
    if (start == static_cast<int>(s.size())) { out.push_back(cur); return; }
    for (int end=start;end<static_cast<int>(s.size());++end) if (dp[start][end]) {
        cur.push_back(s.substr(start,end-start+1)); dfs(s,end+1,dp,cur,out); cur.pop_back();
    }
}
std::vector<std::vector<std::string>> solve(const std::string& s) {
    int n=s.size(); std::vector<std::vector<bool>> dp(n,std::vector<bool>(n));
    for (int i=n-1;i>=0;--i) for (int j=i;j<n;++j)
        dp[i][j]=(s[i]==s[j] && (j-i<2 || dp[i+1][j-1]));
    std::vector<std::vector<std::string>> out; std::vector<std::string> cur; dfs(s,0,dp,cur,out); return out;
}
}  // namespace optimal
