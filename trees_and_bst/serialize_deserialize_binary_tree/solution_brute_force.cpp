#include "../../include/playground_types.hpp"

namespace brute_force {
void ser(playground::TreeNode*r,std::ostringstream&o){if(!r){o<<"# ";return;}o<<r->val<<" ";ser(r->left,o);ser(r->right,o);}std::string serialize(playground::TreeNode*r){std::ostringstream o;ser(r,o);return o.str();}playground::TreeNode* de(std::istringstream&i){std::string x;if(!(i>>x)||x=="#")return nullptr;auto*r=new playground::TreeNode(std::stoi(x));r->left=de(i);r->right=de(i);return r;}playground::TreeNode* deserialize(const std::string&s){std::istringstream i(s);return de(i);}
}  // namespace brute_force
