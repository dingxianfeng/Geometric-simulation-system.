#ifndef MENU_H
#define MENU_H
#include<iostream>
#include<stdlib.h>
#include"Point.h"
#include"Circle.h"
#include"Cylinder.h"
using namespace std;

class Menu
{
    public:
        Menu();
        virtual ~Menu();

    protected:

    private:
    public:
        void showHeaderMenu()
        {
            cout<<"\n\n 几何图形模拟系统"<<endl;
            cout<<"----------------------------"<<endl;
        }
        void showMainMenu()
        {
            cout<<"1.模拟点操作"<<endl;
            cout<<"2.模拟圆操作"<<endl;
            cout<<"3.模拟圆柱体操作"<<endl;
            cout<<"4.退出系统！"<<endl;
        }
        void showFooterMenu()
        {
            cout<<"-----------------------------"<<endl;
            cout<<"输入选项："<<endl;
        }
        void doWork()
        {
            char ch;
            Point p;
            Circle c;
            Cylinder cy;
            do
            {
                system("cls");
                showHeaderMenu();
                showMainMenu();
                showFooterMenu();

                cin>>ch;
                switch(ch)
                {
                case '0':
                    return;
                case '1':
                    cout<<"点模拟"<<endl;
                    p.setX();
                    p.setY();
                    p.show();
                    break;
                case '2':
                    cout<<"圆模拟"<<endl;
                    c.setPoint();
                    c.setR();
                    c.show();
                    break;
                case '3':
                    cout<<"圆柱体模拟"<<endl;
                    cy.setPoint();
                    cy.setR();
                    cy.setH();

                    cy.show();
                    break;

                }

                system("pause");
            }while(1);

        }
};

#endif // MENU_H
