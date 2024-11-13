#include<iostream>
using namespace std;
class Person{
    public:
    int salary;
    string name,des;
    virtual void accept()
    { }
    virtual void display()
    { }
};

class Doctor:public Person{
    public:
    void accept()
{
    cout<<"\nEnter doctor info:";
    cout<<"\nEnter ur name:";
    cin>>name;
    cout<<"\nEnter ur designation:";
    cin>>des;
    cout<<"\nEnter ur salary:";
    cin>>salary;
}

void display()
{
    cout<<"\n"<<" Name: "<<name<<"\t"<<" Designation: "<<des<<"\t"<<" Salary "<<salary;
}
};



class Nurse:public Person{
    public:
    void accept()
{
    cout<<"\nEnter nurse info:";
    cout<<"\nEnter ur name:";
    cin>>name;
    cout<<"\nEnter ur designation:";
    cin>>des;
    cout<<"\nEnter ur salary:";
    cin>>salary;
}

void display()
{
    cout<<"\n"<<" Name: "<<name<<"\t"<<" Designation: "<<des<<"\t"<<" Salary "<<salary;
}
};


class Staff:public Person{
    public:
    void accept()
{
    cout<<"\nEnter staff info:";
    cout<<"\nEnter ur name:";
    cin>>name;
    cout<<"\nEnter ur designation:";
    cin>>des;
    cout<<"\nEnter ur salary:";
    cin>>salary;
}

void display()
{
    cout<<"\n"<<" Name: "<<name<<"\t"<<" Designation: "<<des<<"\t"<<" Salary "<<salary;
}
};


int main()
{ 
    Person *p;
    Doctor d;
    Nurse n;
    Staff s;
    int ch;
    do{
    cout<<"\n1.accept info\n2.display info";
    cout<<"\nEnter ur choice:";
    cin>>ch;
    switch(ch)
    {
        case 1:
        p=&d;
        p->accept();
        p=&n;
        p->accept();
        p=&s;
        p->accept();
        break;
        
        case 2:
        p=&d;
        p->display();
        p=&n;
        p->display();
        p=&s;
        p->display();
        break;
    }
  }while(ch!=0);
}