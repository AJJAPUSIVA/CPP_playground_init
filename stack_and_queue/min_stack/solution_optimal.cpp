#include "../../include/playground_types.hpp"

namespace optimal {
class MinStack{
    std::vector<std::pair<int,int>> data;
public:
    void push(int x){int m=data.empty()?x:std::min(x,data.back().second);data.push_back({x,m});}
    void pop(){data.pop_back();}
    int top()const{return data.back().first;}
    int getMin()const{return data.back().second;}
};
}  // namespace optimal
