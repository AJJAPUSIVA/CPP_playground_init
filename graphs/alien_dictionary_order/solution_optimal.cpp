#include "../../include/playground_types.hpp"

namespace optimal {
std::string solve(const std::vector<std::string>&words){std::unordered_map<char,std::set<char>>g;std::unordered_map<char,int>d;for(auto&w:words)for(char c:w)d[c]=0;for(std::size_t i=1;i<words.size();++i){auto&a=words[i-1];auto&b=words[i];std::size_t k=0;while(k<a.size()&&k<b.size()&&a[k]==b[k])++k;if(k==b.size()&&a.size()>b.size())return"";if(k<a.size()&&k<b.size()&&g[a[k]].insert(b[k]).second)++d[b[k]];}std::priority_queue<char,std::vector<char>,std::greater<char>>q;for(auto [c,x]:d)if(!x)q.push(c);std::string out;while(!q.empty()){char c=q.top();q.pop();out+=c;for(char v:g[c])if(--d[v]==0)q.push(v);}return out.size()==d.size()?out:"";}
}  // namespace optimal
