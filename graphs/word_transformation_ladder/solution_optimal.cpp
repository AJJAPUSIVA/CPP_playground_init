#include "../../include/playground_types.hpp"

namespace optimal {
int solve(const std::string&begin,const std::string&end,const std::vector<std::string>&words){std::unordered_set<std::string>d(words.begin(),words.end());if(!d.count(end))return 0;std::queue<std::string>q;q.push(begin);int steps=1;while(!q.empty()){int sz=q.size();while(sz--){auto w=q.front();q.pop();if(w==end)return steps;for(std::size_t i=0;i<w.size();++i){char old=w[i];for(char c='a';c<='z';++c){w[i]=c;if(d.erase(w))q.push(w);}w[i]=old;}}++steps;}return 0;}
}  // namespace optimal
