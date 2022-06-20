#include <iostream>

int main()
{
    int a;
    short b, c, d;
    long k;
    std::cin >> a >> b >> c >> d >> k;

    int last = -99999;
    for (long i = 0; i < k; i++, last = a) {
        a = a * b - c;

        if (a <= 0) {
            a = 0;
            break;
        }

        if (a > d) {
            a = d;
            break;
        }
        if (a == last) break;
    }

    std::cout << a;
    return 0;
}
