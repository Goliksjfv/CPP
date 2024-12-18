#include <iostream>
#include <cmath>

int min(int a, int b)
{
    return (a + b - abs(a - b)) / 2;
}

int min(int a, int b, int c, int d)
{
    return min(min(a, b), min(c, d));
}

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    std::cout << min(a, b, c, d) << std::endl;

    return 0;
}