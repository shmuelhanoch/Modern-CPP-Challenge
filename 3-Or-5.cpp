#include <iostream>

#include <range/v3/all.hpp>

int main()
{
    using namespace ranges;

    int n;
    std::cin >> n;
    const auto sum = accumulate(view::ints(1, n)
                   | view::remove_if([](int x) { return x % 3 != 0 && x % 5 != 0; })
                   , 0);
    
    std::cout << sum << '\n';
}
