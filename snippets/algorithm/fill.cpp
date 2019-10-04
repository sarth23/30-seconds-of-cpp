// fill algorithm example
#include <iostream>
#include <algorithm>

using std::cout;
using std::vector;

int main()
{
    std::vector<int> myvector(8); // myvector: 0 0 0 0 0 0 0 0

    std::fill(myvector.begin(), myvector.begin() + 4, 5);   // myvector: 5 5 5 5 0 0 0 0
    std::fill(myvector.begin() + 3, myvector.end() - 2, 8); // myvector: 5 5 5 8 8 8 0 0

    for (int i = 0; i < 10; i++)
        cout << myvector[i] << " ";
    std::cout << '\n';

    return 0;
}