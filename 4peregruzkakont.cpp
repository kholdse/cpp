#include <iostream>
using namespace std;
class Point
{
    public:
    Point()
    {
    x=0;
    y=0;    
    }
    Point(int ValueX, int ValueY)
    {
        x=ValueX;
        y=ValueY;
    }
    int GetX()
    {
        return x;
    }
    int GetY()
    {
        return y;
    }
    void SetX(int ValX)
    {
        x = ValX;
    }
    void SetY(int ValY)
    {
        y = ValY;
    }
    void Print()
    {
        cout << "\t X=" << x << endl << "\t Y=" << y;     
    }
    private:
    int x;
    int y;
};
int main()
{
    Point a;
    a.SetX(4);
    a.Print();
    Point b;
    b.Print();
    Point c(5, 13);
    c.Print();
}