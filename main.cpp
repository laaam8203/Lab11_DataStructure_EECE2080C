#include <iostream>
#include <vector>
#include <string>

#include "whattotest.h"
 
using namespace std;

 int main ()
 { 
    
    WidgetWithArrays  widget1;
    widget1.storeInteger(1);
    widget1.storeInteger(3);
    int sum1 = widget1.sum();
    cout << "sum1:"<<sum1 << " ";

    WidgetWithVector widget2;
    widget2.storeInteger(1);
    widget2.storeInteger(3);
    int sum2 = widget2.sum();
    cout << "sum2:"<<sum2 << " ";


    vector<string> msg {"This", "is", "Lab11"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

}
// Changes
