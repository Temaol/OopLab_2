#include <iostream>
#include "Header.h"

using namespace std;

void Time::get (){
    cout << hour << ":" << minute << ":" << second << endl;
}
void Time:: get1 (){
       cout << hour << " годин " << minute << " хвилин " << second << " секунд"<< endl;
   }
Time::~Time (){
    cout << "destructor" << endl;
}
