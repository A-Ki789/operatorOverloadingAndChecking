#include <iostream>
#include "overloadingh.h"
using namespace std;

int main(){
    Point point(2,4);
    Point point2(2,4);
    if (point == point2){
        cout<<"Equal "<<endl;
    }
}