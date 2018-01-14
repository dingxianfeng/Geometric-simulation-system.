#ifndef POINT_H
#define POINT_H
#include<iostream>
using namespace std;

class Point
{
    public:
        Point();
        virtual ~Point();

    protected:
        int x;
        int y;

    private:
    public:
        void setX()
        {
            cout<<"请输入ｘ坐标："<<endl;
            cin>>x;
        }
        void setY()
        {
            cout<<"请输入y坐标："<<endl;
            cin>>y;
        }
        int getX()
        {
            return x;
        }
        int getY()
        {
            return y;
        }
        void setPoint()
        {
            setX();
            setY();
        }
        virtual void show()
        {
            cout<<"点的坐标("<<x<<","<<y<<")"<<endl;
        }
};

#endif // POINT_H
