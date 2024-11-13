#include<iostream>
using namespace std;
class student{
    public:
    int rn;
    string name,prn;
    public:
    void get();
    void displayinfo();
};

class test:virtual public student{
    public:
    string s[5];
    int c[5],e[5];
    public:
    void getm();
    void display();
};

class sport:public virtual student{
  public:
  string sp,grade;
  public:
  void getsp();
  void desplay();
};

class result:public test,public sport
{
    public:
    void displayall();
}s[100];

void student::get()
{
    cout<<"\nenter student name rn prn:";
    cin>>name>>rn>>prn;
}
void student::displayinfo()
{
    cout<<"\n"<<"Name-"<<name<<"\nRoll no."<<rn<<"\nPRN-"<<prn;
}


void test::getm()
{
    int a=0;
    for(int i=0;i<5;i++)
     {  
        cout<<"enter subject:";
        cin>>s[i];
        cout<<"enter CIA marks:";
        cin>>c[i];
        cout<<"enter ese marks:";
        cin>>e[i];
     }
}

void test::display()
{
    for(int i=0;i<5;i++)
    {
        cout<<"\n"<<s[i]<<"\t"<<c[i]<<"\t"<<e[i];
    }
}

void sport::getsp()
{
    cout<<"\nenter sport name:";
    cin>>sp;
    cout<<"\nenter grade";
    cin>>grade;
}
void sport::desplay()
{
    cout<<"\n"<<sp<<"\t"<<grade;
}

void result::displayall()
{
    displayinfo();
    display();
    desplay();
}

int main()
{
    int ch,i;
    do{
    cout<<"\n1.accept information\n2.accept marks\n3.accept sport\n4.display all";
    cout<<"\nEnter ur choice:";
    cin>>ch;
    result s;
    switch(ch)
    {
        case 1:
        s.get();
        break;
        
        case 2:
        s.getm();
        break;
        
        case 3:
        s.getsp();
        break;
        
        case 4:
        s.displayall();
        break;
        
        
    }
  }while(ch!=0);
  return 0;
}