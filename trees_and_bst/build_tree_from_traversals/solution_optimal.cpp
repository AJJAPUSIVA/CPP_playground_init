#include "../../include/playground_types.hpp"

namespace optimal {
playground::TreeNode* rec(
    const std::vector<int>& preorder,
    int& preorder_index,
    int inorder_left,
    int inorder_right,
    const std::unordered_map<int, int>& inorder_index
) {
    if (inorder_left >= inorder_right) {
        return nullptr;
    }

    const int value = preorder[preorder_index++];
    const int split = inorder_index.at(value);

    auto* node = new playground::TreeNode(value);
    // Build in preorder order explicitly. Do not place both recursive calls in
    // one constructor expression because C++ does not guarantee argument
    // evaluation order in a way we should rely on for the shared index.
    node->left = rec(
        preorder,
        preorder_index,
        inorder_left,
        split,
        inorder_index
    );
    node->right = rec(
        preorder,
        preorder_index,
        split + 1,
        inorder_right,
        inorder_index
    );
    return node;
}

playground::TreeNode* solve(
    const std::vector<int>& preorder,
    const std::vector<int>& inorder
) {
    if (preorder.size() != inorder.size() || preorder.empty()) {
        return nullptr;
    }

    std::unordered_map<int, int> inorder_index;
    for (int i = 0; i < static_cast<int>(inorder.size()); ++i) {
        inorder_index[inorder[i]] = i;
    }

    int preorder_index = 0;
    return rec(
        preorder,
        preorder_index,
        0,
        static_cast<int>(inorder.size()),
        inorder_index
    );
}
}  // namespace optimal
