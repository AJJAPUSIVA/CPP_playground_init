#include "../../include/playground_types.hpp"

namespace brute_force {
class MinStack{
    std::vector<int> data;
public:
    void push(int x){data.push_back(x);}
    void pop(){data.pop_back();}
    int top()const{return data.back();}
    int getMin()const{return *std::min_element(data.begin(),data.end());}
};
}  // namespace brute_force
