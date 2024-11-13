#include<iostream>
using namespace std;
int i,n;
class bank{
    long int amount,acc;
    string name;
    public:
    void accept();
    void display();
    void withdraw();
    void deposite();
}s[100];

void bank::accept()
{
    cout<<"\nEnter name:";
    cin>>name;
    cout<<"\nEnter account no. and amount:";
    cin>>acc>>amount;
}

void bank::display()
{
    cout<<"\n"<<name<<"\t"<<acc<<"\t"<<amount;
    
}

void bank::withdraw()
{
    int ac,am;
    cout<<"\nEnter account no. u want to withdraw:";
    cin>>ac;
    for(i=0;i<n;i++)
    {
        if(s[i].acc==ac)
        {
            cout<<"\nEnter amount u want to withdraw:";
            cin>>am;
            if(s[i].amount>=am);
            {
                s[i].amount-=am;
            }
            cout<<"\namount:"<<s[i].amount;
        }
    }
    
}


void bank::deposite()
{
     int ac,am;
    cout<<"\nEnter account no. u want to deposite:";
    cin>>ac;
    for(i=0;i<n;i++)
    {
        if(s[i].acc==ac)
        {
            cout<<"\nEnter amount u want to deposite:";
            cin>>am;
            s[i].amount+=am;
            cout<<"\namount:"<<s[i].amount;
        }
    }
}

int main()
{
    int ch;
    cout<<"\nenter no. of users:";
    cin>>n;
    do
    {
    cout<<"\n1.accept\n2.display\n3.withdraw\n4.deposite";
    cout<<"\nEnter ur choice:";
    cin>>ch;
    switch(ch)
    {
     case 1:
     for(i=0;i<n;i++)
     {
     s[i].accept();
     }
     break;
    
    
    case 2:
     for(i=0;i<n;i++)
     {
     s[i].display();
     }
     break;
     
     case 3:
     s[i].withdraw();
     break;
     
     case 4:
     s[i].deposite();
     break;
    
    }
    
}while(ch!=0);
return 0;
}