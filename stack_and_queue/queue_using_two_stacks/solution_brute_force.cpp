#include "../../include/playground_types.hpp"

namespace brute_force {
class MyQueue{
    std::vector<int> data;
public:
    void push(int x){data.push_back(x);}
    int pop(){int x=data.front();data.erase(data.begin());return x;}
    int peek()const{return data.front();}
    bool empty()const{return data.empty();}
};
}  // namespace brute_force
