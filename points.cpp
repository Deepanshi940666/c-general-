#include <iostream>
#include <cmath>
using namespace std;
class point
{
public:
    int x, y;
    float distance(int a, int b)
    {
        float dis;
        dis = sqrt(((x - a) * (x - a)) + ((y - b) * (y - b)));
        return dis;
    }
};
int main()
{
    point p1, p2;
    cout << "Enter the x and y for first point\n";
    cin >> p1.x >> p1.y;
    cout << "Enter the x and y for first point\n";
    cin >> p2.x >> p2.y;
    float d;
    d = p1.distance(p2.x, p2.y);
    cout << "Distance btw points:" << d;
}