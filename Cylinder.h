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
            cout<<"������Բ����ĸߣ���"<<endl;
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
            cout<<"Բ����ĸߣ�"<<H<<endl;
            cout<<"Բ����������"<<V<<endl;
            cout<<"Բ�����ȫ�����"<<SALL<<endl;
        }
};

#endif // CYLINDER_H
