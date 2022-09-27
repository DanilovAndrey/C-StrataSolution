#include <iostream>
#include <cmath>
#include "foo.h"
#include <array>
#include <vector>
using namespace std;

void solution(int a, int b, int c);
void array1();
void vector1();


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
void array1()
{
    const int N = 10;
    std::array<int, N> m;
    //std::array<std::array<int,N>, N> m;
    int min;
    for (int i = 0; i < m.size(); i++)
    {
        cin >> m[i];
        if (i == 0)
        {
            min = m[i];
        }
        else if (min > m[i])
        {
            min = m[i];
        }
    }
    for (int item : m)
    {
        cout << item << " ";
    }
    cout << "\n min: " << min;
}
void vector1()
{
    //int* m = new int[5];
    std::vector<int> m(10, 1);
    int min;
    for (int i = 0; i < 5; i++)
    {
        cin >> m[i];
        if (i == 0)
        {
            min = m[i];
        }
        else if (min > m[i])
        {
            min = m[i];
        }
    }

    for (int item : m)
    {
        cout << item << " ";
    }
    cout << "\n min: " << min;
}
int main()
{
    int a, b, c;
    //cin >> a >> b >> c;
    //solution(a, b, c);
    //cout << "\n" <<foo(a, b, c);
        // ...
    //array1();
    vector1();
    return 0;
}
