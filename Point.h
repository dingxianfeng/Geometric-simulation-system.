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
            cout<<"����������꣺"<<endl;
            cin>>x;
        }
        void setY()
        {
            cout<<"������y���꣺"<<endl;
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
            cout<<"�������("<<x<<","<<y<<")"<<endl;
        }
};

#endif // POINT_H
