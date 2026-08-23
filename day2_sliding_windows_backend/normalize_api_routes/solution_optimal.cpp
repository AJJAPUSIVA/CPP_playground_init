#include "../../include/playground_types.hpp"

namespace optimal {
std::string solve(const std::string&p){std::string out;for(std::size_t i=0;i<p.size();){if(p[i]=='/'){out+='/';++i;continue;}std::size_t j=i;bool num=true;while(j<p.size()&&p[j]!='/'){num&=std::isdigit(static_cast<unsigned char>(p[j]));++j;}out+=num?":id":p.substr(i,j-i);i=j;}return out.empty()?"/":out;}
}  // namespace optimal
