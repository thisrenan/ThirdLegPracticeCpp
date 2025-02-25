#include <iostream>

using namespace std;

int main()
{
    cout << "1. Write an algorithm that reads a vector of 30 positions and reports how many elements are multiples of 2 and how many are multiples of 3."<<endl;

    int vectorSize = 30;
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

    cout << "2. Build an algorithm that requests 5 values from the user, stores them in a vector of 5 integer positions. Then, find out how many elements are greater than the element in the first position."<<endl;

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

    cout << "3. Write an algorithm that reads two vectors of 10 positions and multiplies the elements with the same index, placing the result in a third vector. Display the resulting vector."<<endl;

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

    cout << "4. Write an algorithm that reads two vectors (A and B) of ten integer positions. The algorithm must then subtract the first element of A from the last element of B, and accumulate the value, subtract the second element of A from the penultimate element of B, accumulating the result, and so on. Display the result of the accumulated sum."<<endl;

    vectorSize = 10;
    int vector4One[vectorSize], vector4Two[vectorSize], sum=0;

    i=0;
    while(i<vectorSize){
        cout<<"vectorOne["<<i<<"] = ";
        cin>>vector4One[i];
        i++;
    }

    i=0;
    while(i<vectorSize){
        cout<<"vectorTwo["<<i<<"] = ";
        cin>>vector4Two[i];
        i++;
    }

    i=0;
    while(i<vectorSize){
        sum=sum+(vector4Two[9-i] - vector4One[i]);
        cout<<"\n"<<" + "<<vector4Two[9-i]<<" - "<<vector4One[i]<<" = "<<sum;
        i++;
    }

    cout << endl << "The final sum is " << sum;

    cout <<endl<<endl;

    cout << "5. Write a program that reads two one-dimensional vectors A and B, of size 8, and exchanges the elements of these vectors; In other words, after executing the program, vector B should contain the values provided for vector A, and vice versa."<<endl;

    vectorSize = 8;
    int vector5One[vectorSize], vector5Two[vectorSize], temp;    

    i=0;
    while (i<vectorSize)
    {
        cout<<"vectorOne["<<i<<"] = ";
        cin>>vector5One[i];
        i++;
    }

    i=0;
    while (i<vectorSize)
    {
        cout<<"vectorTwo["<<i<<"] = ";
        cin>>vector5Two[i];
        i++;
    }

    i=0;
    while (i<vectorSize)
    {
        temp=vector5One[i];
        vector5One[i]=vector5Two[i];
        vector5Two[i]=temp;
        cout<<"\nVectorOne["<<i<<"] = "<<vector5One[i]<<" / Vector["<<i<<"] = "<<vector5Two[i];
        i++;
    }

    cout <<endl<<endl;

    cout << "6. Build an algorithm that requests 5 integer values from the user and stores them in a vector. Then, the value of the vector should be inverted using a second vector."<<endl;

    vectorSize = 5;
    int vector6One[vectorSize], vector6Two[vectorSize];

    i=0;
    while (i<vectorSize)
    { 
        cout<<"VectorOne["<<i<<"] = ";
        cin>>vector6One[i];
        i++;
    }


    i=0;
    while (i<vectorSize){
        vector6Two[i]=vector6One[vectorSize-1-i];
        cout<<"\nVectorOne["<<i<<"] = "<<vector6One[i]<<" / Vector["<<i<<"] = "<<vector6Two[i];
        i++;
    }

    cout <<endl<<endl;

    cout << "7. Build an algorithm that requests 5 integer values from the user and stores them in a vector. Then, the values of the vector should be inverted without using a second vector."<<endl;

    vectorSize = 5;
    int vector7[vectorSize];
    temp = 0;

    i=0;
    while (i<vectorSize)
    {
        cout<<"vector["<<i<<"] = ";
        cin>>vector7[i];
        i++;
    }

    i=0;
    while (i<vectorSize/2)
    {
        temp=vector7[i];
        vector7[i]=vector7[vectorSize-1-i];
        vector7[vectorSize-1-i]=temp;
        i++;
    }

    i=0;
    while (i<vectorSize)
    {
        cout<<vector7[i]<<" ";
        i++;
    }

    cout <<endl<<endl;

    cout << "8. Write a program that loads a vector with 10 integer elements and checks for the existence of elements that are multiples of 5, showing the positions in which these elements appear."<<endl;

    vectorSize = 10;
    int vector8[vectorSize];

    i=0;
    while(i<vectorSize)
    {
        cout<<"vector["<<i<<"] = ";
        cin>>vector8[i];
        i++;
    }

    i=0;
    while(i<vectorSize){
        if (vector8[i]%5==0)
        {
            cout<<"\nvector["<<i<<"] = "<<vector8[i];
        }
        i++;
    }

    return 0;
}




