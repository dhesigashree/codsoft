#include <iostream>
using namespace std;
int main(){
    int x;
    int y;
    int z;
    int n;
    cout<<"select operation\n1.add\n2.sub\n3.multipy\n4.divu";
    cout<<"\nyour choice:";
    cin>>n;
    cout<<"no 1:";
    cin>>x;
     cout<<"no 2:";
    cin>>y;
    
    switch (n){
    case 1:
        z=x+y;
        cout<<"sum:"<<z;
        break;
     case 2:
        z=x-y;
        cout<<"diff:"<<z;
        break;
    case 3:
        z=x*y;
        cout<<"product:"<<z;
        break;
    case 4:
        z=x/y;
        cout<<"q:"<<z;
        break;

    default:
        cout<<"wrong choice";
    }
    
}