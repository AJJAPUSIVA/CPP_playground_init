#include "../../include/playground_types.hpp"

namespace optimal {
class WordDictionary{struct N{std::array<std::unique_ptr<N>,26>c{};bool end=false;};N root;bool dfs(const N*n,const std::string&p,std::size_t i)const{if(i==p.size())return n->end;if(p[i]=='.'){for(auto&x:n->c)if(x&&dfs(x.get(),p,i+1))return true;return false;}auto&x=n->c[p[i]-'a'];return x&&dfs(x.get(),p,i+1);}public:void addWord(const std::string&s){N*n=&root;for(char ch:s){auto&x=n->c[ch-'a'];if(!x)x=std::make_unique<N>();n=x.get();}n->end=true;}bool search(const std::string&p)const{return dfs(&root,p,0);}};
}  // namespace optimal
