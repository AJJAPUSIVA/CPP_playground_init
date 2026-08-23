#include "../../include/playground_types.hpp"

namespace optimal {
bool solve(const std::string&a,const std::string&b){if(a.size()!=b.size())return false;std::array<int,256>x{},y{};x.fill(-1);y.fill(-1);for(std::size_t i=0;i<a.size();++i){unsigned char p=a[i],q=b[i];if(x[p]==-1&&y[q]==-1){x[p]=q;y[q]=p;}else if(x[p]!=q||y[q]!=p)return false;}return true;}
}  // namespace optimal
