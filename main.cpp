#include <iostream>
#include <cctype>

using namespace std;

int main() {
   vector<int> nums {1, 2, 3};
   int total {};

   nums.push_back(4);

   for (const auto num : nums) {
      total += num;
   }

   cout << total << endl;
}