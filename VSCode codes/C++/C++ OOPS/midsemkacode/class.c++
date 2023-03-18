#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

class Point{
    int x; int y;
    public:
        Point(int i = 0,int j=0);
        Point(const Point &t);
};
Point::Point(int i, int j){
    x=i; y=j;
    cout<<"Hello\n";
}
Point::Point(const Point &t){
    y=t.y;
    cout<<"World\n";
}

int main()
{
    Point *t1, *t2;
    t1=new Point(10,15);
    t2 = new Point(*t1);

    Point t3 = *t1;
    Point t4;
    t4=t3;

    return 0;
}