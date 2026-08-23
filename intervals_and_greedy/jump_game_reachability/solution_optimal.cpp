#include "../../include/playground_types.hpp"

namespace optimal {
bool solve(const std::vector<int>&a){int far=0;for(int i=0;i<static_cast<int>(a.size())&&i<=far;++i){far=std::max(far,i+a[i]);if(far>=static_cast<int>(a.size())-1)return true;}return a.empty();}
}  // namespace optimal
