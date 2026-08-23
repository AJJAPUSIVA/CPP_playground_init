#include "../../include/playground_types.hpp"

namespace brute_force {
bool before(const std::string&a,const std::string&b,const std::string&ord){std::array<int,26>p{};for(int i=0;i<static_cast<int>(ord.size());++i)p[ord[i]-'a']=i;std::size_t k=0;while(k<a.size()&&k<b.size()&&a[k]==b[k])++k;if(k==b.size())return k==a.size();if(k==a.size())return true;return p[a[k]-'a']<p[b[k]-'a'];}
std::string solve(const std::vector<std::string>&words){std::set<char>chars;for(auto&w:words)for(char c:w)chars.insert(c);std::string s(chars.begin(),chars.end());do{bool ok=true;for(std::size_t i=1;i<words.size();++i)if(!before(words[i-1],words[i],s)){ok=false;break;}if(ok)return s;}while(std::next_permutation(s.begin(),s.end()));return"";}
}  // namespace brute_force
