#include<iostream>
using namespace std;
int a=2;
void increment(int *a){
    cout<<a<<"\t"<<*a<<"\t"<<&a<<endl;
*a++;
  cout<<a<<"\t"<<*a<<"\t"<<&a<<endl;
(*a)++;
    cout<<a<<"\t"<<*a<<"\t"<<&a;
}
int main()
{
increment(&a);
//cout<<a<<endl;
return 0;
}
//\\\\\\\\\\\\\\\\\\
#include<iostream>
using namespace std;
int a=2;
void increment(int *a){
    cout<<a<<"\t"<<*a<<"\t"<<&a<<endl;
//*a++;
//  cout<<a<<"\t"<<*a<<"\t"<<&a<<endl;
(*a)++;
    cout<<a<<"\t"<<*a<<"\t"<<&a;
}
int main()
{
increment(&a);
//cout<<a<<endl;
return 0;
}
