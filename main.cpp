#include <iostream>
#include <fmt/core.h>

using namespace std;

void print_nums(const vector<string>& strs) {
    for (const auto& str : strs) {
        cout << str << endl;
    }
}

int main() {
    vector<string> names {"dylan", "luffy"};

    print_nums(names);
}
