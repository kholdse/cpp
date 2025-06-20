#include <iostream>
#include <string>
using namespace std;
/* Геттеры и Сеттеры */
class Point
{
    public:
    int GetX()
    {
        return x;
    }
    void SetX(int valueX)
    {
        x = valueX;
    }
    private:
    int x;
};
int main()
{
    Point a;
    a.SetX(5);
    cout << "\t X=" << a.GetX();
}
