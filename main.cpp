#include <iostream>

using namespace std;

int main()
{
    cout << "1. Write an algorithm that reads a vector of 30 positions and reports how many elements are multiples of 2 and how many are multiples of 3.";

    int vectorSize = 30;
    int a[vectorSize], i=0, m2=0, m3=0;

    while (i<vectorSize)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];

        if (a[i] % 2 == 0){
            m2++;
        }

        if (a[i] % 3 == 0){
            m3++;
        }

        i++;
    }

    cout<<"M2: "<<m2<<"\nM3:"<<m3;

    cout <<endl<<endl;

    cout << "2. Build an algorithm that requests 5 values from the user, stores them in a vector of 5 integer positions. Then, find out how many elements are greater than the element in the first position.";

    int vectorSize = 5;
    int a[vectorSize], i=0, biggerThanFirst=0;

    while (i<vectorSize){
        cout<<"a["<<i<<"] = ";
        cin>>a[i];

        i++;
    }

    i=1;
    while (i<vectorSize){
        if (a[i] > a[0]){
            biggerThanFirst++;
        }
        i++;
    }
    cout<<"There are "<<biggerThanFirst<<" elements greater than the vector element "<<a[0]<<".";

    cout <<endl<<endl;

    return 0;
}