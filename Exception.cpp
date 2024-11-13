#include<iostream>
using namespace std;
class television
{
    int mn,pz,sz;
    public:
    friend ostream& operator <<(ostream &dout , television &t);
    friend istream& operator >>(istream &din , television &t);
};

istream& operator >>(istream &din , television &t)
{
    cout<<"\nEnter the model no. , price ,size of television :";
    din>> t.mn >>t.pz >> t.sz;
   try
    {
        int e;
        if( t.mn > 9999 || t.pz < 0 || t.pz > 5000 || t.sz <12 || t.sz > 70 )
        {
            throw e;
        }
    }
    catch(int e)
    {
        cout<< "\nException Occurred !";
        t.mn =0;
        t.pz=0;
        t.sz=0;
    }
    
    return din;
}

ostream& operator <<(ostream &dout , television &t)
{
    dout <<"Model No:" <<t.mn <<endl;
    dout <<"Price :"<<t.pz << " $"<<endl;
    dout <<"Size :"<<t.sz <<" inches"<<endl;

return dout;
}

int main()
{
    television tv;
    int ch;
    do{
    cout<<"\n1.accept\n2.display";
    cout<<"\nEnter choice:";
    cin>>ch;
    switch(ch)
    {
    case 1:
    cin >> tv;
    break;
    
    case 2:
    cout << tv;
    break;
    }
    }while(ch!=0);
    return 0;
}
