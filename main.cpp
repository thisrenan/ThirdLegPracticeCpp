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

    return 0;
}