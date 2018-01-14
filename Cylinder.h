#ifndef CYLINDER_H
#define CYLINDER_H
#include<iostream>
#include "Circle.h"
using namespace std;

class Cylinder:public Circle
{
    public:
        Cylinder();
        virtual ~Cylinder();

    protected:
        int H;
        double V;
        double SALL;

    private:
    public:
        void setH()
        {
            cout<<"请输入圆柱体的高：　"<<endl;
            cin>>H;
        }
        int getH()
        {
            return H;
        }
        double getV()
        {
            Circle::getS();
            V=S*H;
            return V;
        }
        double getSALL()
        {
            Circle::getS();
            Circle::getC();
            SALL=C*H*S*2;
            return SALL;
        }
        void show()
        {
            Circle::show();
            getV();
            getSALL();
            cout<<"圆柱体的高："<<H<<endl;
            cout<<"圆柱体的体积："<<V<<endl;
            cout<<"圆柱体的全面积："<<SALL<<endl;
        }
};

#endif // CYLINDER_H
