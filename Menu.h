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
            cout<<"\n\n ����ͼ��ģ��ϵͳ"<<endl;
            cout<<"----------------------------"<<endl;
        }
        void showMainMenu()
        {
            cout<<"1.ģ������"<<endl;
            cout<<"2.ģ��Բ����"<<endl;
            cout<<"3.ģ��Բ�������"<<endl;
            cout<<"4.�˳�ϵͳ��"<<endl;
        }
        void showFooterMenu()
        {
            cout<<"-----------------------------"<<endl;
            cout<<"����ѡ�"<<endl;
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
                    cout<<"��ģ��"<<endl;
                    p.setX();
                    p.setY();
                    p.show();
                    break;
                case '2':
                    cout<<"Բģ��"<<endl;
                    c.setPoint();
                    c.setR();
                    c.show();
                    break;
                case '3':
                    cout<<"Բ����ģ��"<<endl;
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
