#ifndef CIRCLE_H
#define CIRCLE_H
#include<iostream>
#include"Point.h"
using namespace std;
#define PI 3.1415926
class Circle:public Point
{
    public:
        Circle();
        virtual ~Circle();

    protected:
        int R;
        double C;
        double S;

    private:
    public:
        void setR()
        {
            cout<<"������뾶����";
            cin>>R;
        }
        int getR()
        {
            return R;
        }
        double getS()
        {
            S=PI * R * R;
            return S;
        }
        double getC()
        {
            C=2 * PI * R;
            return C;
        }
        void show()
        {
            Point::show();
            getC();
            getS();
            cout<<"�뾶��"<<R<<endl;
            cout<<"�ܳ���"<<C<<endl;
            cout<<"�����"<<S<<endl;
        }
};

#endif // CIRCLE_H
