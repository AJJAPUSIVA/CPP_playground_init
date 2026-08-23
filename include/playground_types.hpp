#pragma once

#include <algorithm>
#include <array>
#include <bitset>
#include <cctype>
#include <cmath>
#include <climits>
#include <cstdint>
#include <deque>
#include <functional>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <memory>
#include <numeric>
#include <optional>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

namespace playground {

struct ListNode {
    int val{};
    ListNode* next{};
    explicit ListNode(int v = 0, ListNode* n = nullptr) : val(v), next(n) {}
};

struct RandomNode {
    int val{};
    RandomNode* next{};
    RandomNode* random{};
    explicit RandomNode(int v = 0) : val(v) {}
};

struct TreeNode {
    int val{};
    TreeNode* left{};
    TreeNode* right{};
    explicit TreeNode(int v = 0, TreeNode* l = nullptr, TreeNode* r = nullptr)
        : val(v), left(l), right(r) {}
};

struct Interval {
    int start{};
    int end{};
};

struct Edge {
    int from{};
    int to{};
    int weight{};
};

struct Point {
    int x{};
    int y{};
};

struct Transaction {
    std::string account_id;
    double amount{};
};

struct Event {
    std::string id;
    long long timestamp{};
    std::string type;
};

inline void deleteList(ListNode* head) {
    while (head) {
        auto* next = head->next;
        delete head;
        head = next;
    }
}

inline void deleteTree(TreeNode* root) {
    if (!root) return;
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

inline std::vector<int> listToVector(ListNode* head) {
    std::vector<int> out;
    while (head) {
        out.push_back(head->val);
        head = head->next;
    }
    return out;
}

inline ListNode* vectorToList(const std::vector<int>& values) {
    ListNode dummy;
    ListNode* tail = &dummy;
    for (int value : values) {
        tail->next = new ListNode(value);
        tail = tail->next;
    }
    return dummy.next;
}

}  // namespace playground
