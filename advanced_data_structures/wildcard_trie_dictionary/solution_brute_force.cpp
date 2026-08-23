#include "../../include/playground_types.hpp"

namespace brute_force {
class WordDictionary{std::vector<std::string>w;public:void addWord(const std::string&s){w.push_back(s);}bool search(const std::string&p)const{for(auto&s:w)if(s.size()==p.size()){bool ok=true;for(std::size_t i=0;i<s.size();++i)if(p[i]!='.'&&p[i]!=s[i]){ok=false;break;}if(ok)return true;}return false;}};
}  // namespace brute_force
