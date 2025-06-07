// Copyright 2022 NNTU-CS
#include "tree.h"
#include <iostream>

int main() {
  std::vector<char> in = { '1', '2', '3' };
  PMTree tree(in);

  std::vector<std::vector<char>> perms = getAllPerms(tree);
  for (const auto& perm : perms) {
    for (char c : perm) std::cout << c;
    std::cout << "\n";
  }
  return 0;
}
