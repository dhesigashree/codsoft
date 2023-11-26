#include <iostream>
#include <ctime>
using namespace std;
int main()
{
  
      srand(time(0));
   int random=rand()%100+20;
   int guess=0;
   int moves=0;
   do{
    cout<<"Guess numbers from 1 to 100:";
    cin>>guess;

    if(guess==random){
        cout<<"****you won****";
    }
    else if(guess<random){
        cout<<"NO,bit greater number";
    }
    else{
        cout<<"NO,bit smaller number";
    }
   }
    while (guess!=random);
}
