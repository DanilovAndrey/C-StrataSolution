#include <iostream>
#include <cmath>
#include "foo.h"
using namespace std;

void solution(int a, int b, int c);
void solution(int a, int b, int c) // квадратное уравнение https://stepik.org/lesson/13377/step/11
{
    double D = b * b - 4 * a * c;
    if (D < 0)
    {
        cout << "No real roots";
        return ;
    }
    double x1 = double((-b + sqrt(D)) / (2 * a));
    double x2 = double((-b - sqrt(D)) / (2 * a));
    cout << x1 << ' ' << x2;
    return;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    solution(a, b, c);
    cout << "\n" <<foo(a, b, c);
        // ...

    return 0;
}
