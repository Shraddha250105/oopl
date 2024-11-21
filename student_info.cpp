//Assignment based on personal information system
#include<iostream>
#include<cstring>
using namespace std;

int i,n;
class PIS
{
static int  cnt;
int  pn,cn,wt,ht,dob;
char *name,*add,*dln,bg[3];

public:
PIS()       
{
name= new char;
add=new char;
dln=new char;
strcpy(name,"saii");
strcpy(add,"Nasik");
strcpy(dln,"dl100");
strcpy(bg,"O+");
pn=100;
cn=99999;
wt=10;
ht=10;
dob=2024;
}


PIS(int h,int w,int d,int p)   
{
pn=p;
ht=h;
wt=w;
dob=d;
}



PIS(PIS &ss)           //copy constructor
{
ss.ht=ht;
}


~PIS()
{
delete add;
delete dln;
delete name;
cout<<"\n Destructor is called";
}

static void displaycnt()
{
cout<<"\n Total number of Records in the database:  "<<cnt;
}


friend void search(PIS [],int);
void display();
void accept();
void Delete();
void update();
}
p[100];



int PIS::cnt;

void PIS::accept()
{
cout<<"\nEnter the size:";
cin>>n;
cnt++;
for(i=0;i<n;i++)
{
cout<<"\nEnter the PIS as name,address,driving_lino,policy_no,ht,wt,dob,bg:";
cin>>p[i].name>>p[i].add>>p[i].dln>>p[i].pn>>p[i].ht>>p[i].wt>>p[i].dob>>p[i].bg;
}
}

void PIS::update()
{
int q,f=0;
cout<<"\n Enter the policy number";
cin>>q;
for(i=0;i<n;i++)
{
if(q==p[i].pn)
{
f=1;
p[i].accept();
break;
}
}
if(f==0)
cout<<"\n Record is not found";
}



void PIS::Delete()
{
int q,f=0;
cout<<"\n Enter the policy number";
cin>>q;
for(i=0;i<n;i++)
{
if(q==p[i].pn)
{
f=1;

do
{
p[i]=p[i+1];
i++;
}while(i<n);
n--;
break;
}
}
if(f==0)
cout<<"\n not found";
}


void search(PIS p[] ,int i)
{
int f=0,pp;
cout<<"\n Enter the Policy number for search";
cin>>pp;

for(i=0;i<n;i++)
{
if(pp==p[i].pn)
{
f=1;

p[i].display();
break;

}
}
if(f==0)
cout<<"\n Details are not found";
}



inline void PIS::display()
{
cout<<"\n"<<name<<"\t"<<add<<"\t"<<dln<<"\t"<<pn<<"\t"<<ht<<"\t"<<wt<<"\t"<<dob<<"\t"<<bg;
}





int main()
{
int ch;

do
{

cout<<"\n Main menu";
cout<<"\n1.Accept\n2.Display\n3.search\n4.Display number of record\n5.update\n6.Delete\n";
cout<<"\nEnter your choice:";
cin>>ch;
switch(ch)
{
case 1:p[i].accept();
       break;
case 2:cout<<"\n Name\t Add\tDln\tPn\tht\twt\tdob\tbg";
       for(i=0;i<n;i++)
       {
       p[i].display();
       }
       break;
case 3:search(p,i);
       break;
case 4:PIS::displaycnt();
       break;
case 5:p[i].update();
       break;
case 6:p[i].Delete();
       break;
}
}
while(ch!=0);
return 0;
}