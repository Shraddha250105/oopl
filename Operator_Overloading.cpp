                                                                                                
#include<iostream>
using namespace std;
class complex{
    int r,img;
    public:
    complex(){
        r=0;
        img=0;
    }
    complex(int a,int b)
    {
        r=a;
        img=b;
    }
    void display()
    {
        if(img>=0)
        {
            cout<<"\n"<<r<<"+"<<img<<"i";
        }
        else
        {
            cout<<"\n"<<r<<""<<img<<"i";
        }
    }
    
    complex operator+(complex c2);
    complex operator-(complex c2);
    complex operator*(complex c2);
    complex operator/(complex c2);

}c1,c2,c3;

complex complex::operator+(complex c2)
{
    c3.r=r+c2.r;
    c3.img=img+c2.img;
    return c3;
}

complex complex::operator-(complex c2)
{
    c3.r=r-c2.r;
    c3.img=img-c2.img;
    return c3;
}

complex complex::operator*(complex c2)
{
    c3.r=(r*c2.r)-(img*c2.img);
    c3.img=(r*c2.img)+(img*c2.r);
    return c3;
}

complex complex::operator/(complex c2)
{
    c3.r=(r*c2.r)-(img*c2.img)/(c2.r*c2.r+c2.img*c2.img);
    c3.img=(r*c2.img)+(img*c2.r)/(c2.r*c2.r+c2.img*c2.img); 
    return c3;
}


int main()
{
    int rr,im;
    cout<<"enter first number:";
    cin>>rr>>im;
    complex c1(rr,im);
    
    cout<<"enter second number:";
    cin>>rr>>im;
    complex c2(rr,im);
    
    cout<<"\naddition";
    c3=c1+c2;
    c3.display();
    cout<<"\n";
    
    cout<<"\nSubstraction";
    c3=c1-c2;
    c3.display();
    cout<<"\n";
    
    cout<<"\nMultiplication";
    c3=c1*c2;
    c3.display();
    cout<<"\n";
    
    cout<<"\nDivision";
    c3=c1/c2;
    c3.display();
    cout<<"\n";
    return 0;
}
