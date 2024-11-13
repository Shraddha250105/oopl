#include<iostream>
using namespace std;
template<class T>
void selsort(T a[100],int n)
{
T temp;
int i;
cout<<"\nEnter array elements:";
for(i=0;i<n;i++)
{
cin>>a[i];
 }
//selection sort
for(i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
cout<<"\nsorted array:";
for(i=0;i<n;i++)
{
cout<< a[i]<<"\t";
}
}

int main()
{
int ch,n;
cout<<"\nEnter size:";
cin>>n;
int a[100];
float b[100];
char c[100];
do{
cout<<"\n1.sort integer\n2.sort float\n3.sort char";
cout<<"\nEnter ur choice:";
cin>>ch;
switch(ch)
{
case 1:
selsort(a,n);
break;

case 2:
selsort(b,n);
break;

case 3:
selsort(c,n);
break;

}
}while(ch!=0);
return 0;
}