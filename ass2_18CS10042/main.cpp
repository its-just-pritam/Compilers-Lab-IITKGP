//PRITAM MALLICK
//18CS10042

#include <iostream>
#include "toylib.h"

using namespace std;

int main()
{

    cout<<"printStringUpper : "<<printStringUpper("printStringUpper")<<"\n";

    int x;
    cout<<"readHexInteger : "<<readHexInteger(&x);

    int y;
    cin>>y;

    int temp = printHexInteger(y);

    float z;
    temp = readFloat(&z);
    printf("readFloat : %f\n", z);



    float a;
    cin>>a;
    temp = printFloat(a);

    return 0;

}