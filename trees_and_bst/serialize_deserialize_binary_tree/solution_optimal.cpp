#include "../../include/playground_types.hpp"

namespace optimal {
std::string serialize(playground::TreeNode*r){if(!r)return"#";std::ostringstream o;std::queue<playground::TreeNode*>q;q.push(r);while(!q.empty()){auto*x=q.front();q.pop();if(!x){o<<"#,";continue;}o<<x->val<<",";q.push(x->left);q.push(x->right);}return o.str();}playground::TreeNode* deserialize(const std::string&s){if(s=="#")return nullptr;std::vector<std::string>v;std::stringstream ss(s);std::string x;while(std::getline(ss,x,','))if(!x.empty())v.push_back(x);if(v.empty()||v[0]=="#")return nullptr;auto*r=new playground::TreeNode(std::stoi(v[0]));std::queue<playground::TreeNode*>q;q.push(r);std::size_t i=1;while(!q.empty()&&i<v.size()){auto*n=q.front();q.pop();if(v[i]!="#"){n->left=new playground::TreeNode(std::stoi(v[i]));q.push(n->left);}++i;if(i<v.size()&&v[i]!="#"){n->right=new playground::TreeNode(std::stoi(v[i]));q.push(n->right);}++i;}return r;}
}  // namespace optimal
