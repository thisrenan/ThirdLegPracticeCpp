#include <iostream>

using namespace std;

int main()
{
    cout << "1. Write an algorithm that reads a vector of 30 positions and reports how many elements are multiples of 2 and how many are multiples of 3.";

    int vectorSize = 5;
    int vector1[vectorSize], i=0, m2=0, m3=0;

    while (i<vectorSize)
    {
        cout<<"vector1["<<i<<"] = ";
        cin>>vector1[i];

        if (vector1[i] % 2 == 0){
            m2++;
        }

        if (vector1[i] % 3 == 0){
            m3++;
        }

        i++;
    }

    cout<<"M2: "<<m2<<"\nM3:"<<m3;
    cout <<endl<<endl;

    cout << "2. Build an algorithm that requests 5 values from the user, stores them in a vector of 5 integer positions. Then, find out how many elements are greater than the element in the first position.";

    vectorSize = 5;    
    int vector2[vectorSize], biggerThanFirst=0;

    i=0;
    while (i<vectorSize){
        cout<<"vector2["<<i<<"] = ";
        cin>>vector2[i];

        i++;
    }

    i=1;    
    while (i<vectorSize)
    {
        if (vector2[i] > vector2[0])
        {
            biggerThanFirst++;
        }

        i++;
    }

    cout<<"There are "<<biggerThanFirst<<" elements greater than the vector element "<<vector2[0]<<".";
    cout <<endl<<endl;

    cout << "3. Write an algorithm that reads two vectors of 10 positions and multiplies the elements with the same index, placing the result in a third vector. Display the resulting vector.";

    vectorSize = 10;
    int vector3One[vectorSize], vector3Two[vectorSize], vector3Three[vectorSize];
    i=0;

    i=0;
    while (i<vectorSize)
    {
        cout<<"vectorOne["<<i<<"] = ";
        cin>>vector3One[i];
        i++;
    }

    i=0;
    while (i<vectorSize)
    {
        cout<<"vectorTwo["<<i<<"] = ";
        cin>>vector3Two[i];
        i++;
    }

    i=0;
    while (i<vectorSize)
    {
        vector3Three[i] = vector3One[i] * vector3Two[i]; 
        cout<<"\n"<<vector3One[i]<<" x "<<vector3Two[i]<<" = "<<vector3Three[i];
        i++;
    }

    cout <<endl<<endl;

    return 0;
}