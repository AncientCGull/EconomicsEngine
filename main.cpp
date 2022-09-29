#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    std::vector<int> vec{1, 2, 3};
    for(auto elem : vec)
    {
        std::cout << elem << '\n';
    }

    std::cout << "Hello world" << std::endl;
    return 0;
}
