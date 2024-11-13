#include<iostream>
using namespace std;
class Person{
    public:
    int salary;
    string name,des;
    virtual void accept()=0;
    virtual void display()=0;
};

class Doctor:public Person{
    public:
    void accept();
    void display();
}d;

void Doctor::accept()
{
    cout<<"\nEnter doctor info:";
    cout<<"\nEnter ur name:";
    cin>>name;
    cout<<"\nEnter ur designation:";
    cin>>des;
    cout<<"\nEnter ur salary:";
    cin>>salary;
}

void Doctor::display()
{
    cout<<"\n"<<" Name:"<<name<<"\t"<<" Designation:"<<des<<"\t"<<" Salary"<<salary;
}

class Nurse:public Person{
    public:
    void accept();
    void display();
}n;


void Nurse::accept()
{
    cout<<"\nEnter nurse info:";
    cout<<"\nEnter ur name:";
    cin>>name;
    cout<<"\nEnter ur designation:";
    cin>>des;
    cout<<"\nEnter ur salary:";
    cin>>salary;
}

void Nurse::display()
{
    cout<<"\n"<<" Name:"<<name<<"\t"<<" Designation:"<<des<<"\t"<<" Salary"<<salary;
}



class Staff:public Person{
    public:
    void accept();
    void display();
}s;


void Staff::accept()
{
    cout<<"\nEnter staff info:";
    cout<<"\nEnter ur name:";
    cin>>name;
    cout<<"\nEnter ur designation:";
    cin>>des;
    cout<<"\nEnter ur salary:";
    cin>>salary;
}

void Staff::display()
{
    cout<<"\n"<<" Name:"<<name<<"\t"<<" Designation:"<<des<<"\t"<<" Salary"<<salary;
}


int main()
{
    int ch;
    do{
    cout<<"\n1.accept info\n2.display info";
    cout<<"\nEnter ur choice:";
    cin>>ch;
    switch(ch)
    {
        case 1:
        d.accept();
        n.accept();
        s.accept();
        break;
        
        case 2:
        d.display();
        n.display();
        s.display();
        break;
        
    }
  }while(ch!=0);
}