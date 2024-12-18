#include <iostream>
#include <cmath> 
using namespace std;

double power(double a, int n)
{
    if (n == 0)
    {
        return 1.0;
    }

    double result = 1.0;
    int i = 0;

    if (n > 0)
    {
        while (i < n)
        {
            result *= a;
            i++;
        }
    }
    else
    {
        while (i < -n)
        {
            result *= a;
            i++;
        }
        result = 1.0 / result; 
    }

    return result;
}

    int main()
    {
        double s, a;
        int n;
        cin >> a >> n;
        cout << power(a, n) << endl;
        return 0;
}