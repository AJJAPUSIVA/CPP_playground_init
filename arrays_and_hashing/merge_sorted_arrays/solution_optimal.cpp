#include "../../include/playground_types.hpp"

namespace optimal {
std::vector<int> solve(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> out; out.reserve(a.size()+b.size());
    std::size_t i=0,j=0;
    while(i<a.size() && j<b.size()) out.push_back(a[i] <= b[j] ? a[i++] : b[j++]);
    out.insert(out.end(),a.begin()+i,a.end());
    out.insert(out.end(),b.begin()+j,b.end());
    return out;
}
}  // namespace optimal
