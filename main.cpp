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

    cout <<endl<<endl;

    cout << "9. Read 30 values and place the even values in one vector and the odd values in another. After reading, calculate the sum of the two vectors and display the one with the highest value."<<endl;
    
    vectorSize = 30;
    int vector9Even[vectorSize];
    int vector9Odd[vectorSize];
    int value, auxEven=0, auxOdd=0, sumEven=0, sumOdd=0;

    i=0;
    while(i<vectorSize)
    {
        cout<<"vector["<<i<<"] = ";
        cin>>value;
        if (value %2 == 0)
        {
            vector9Even[auxEven] = value;
            auxEven++;
        }
        else
        {
            vector9Odd[auxOdd] = value;
            auxOdd++;
        }

        i++;
    }

    i=0;
    while(i<auxEven)
    {
        sumEven=sumEven+vector9Even[i];
        i++;
    }

    i=0;
    while(i<auxOdd)
    {
        sumOdd=sumOdd+vector9Odd[i];
        i++;
    }

    if(sumOdd>sumEven)
        cout<<"\nOdd won with a total of "<<sumOdd;
    else 
        cout<<"\nEven won with a total of "<<sumEven;
    
    cout<<endl<<endl;

    cout<<"10. Build an algorithm that fills a vector with 5 integer values. Then check if the number 7 is in the vector. If so, display the position in which it was found. If it is found more than once, also show how many times it was found."<<endl;

    vectorSize = 5;
    int vector10[vectorSize];
    int n7=0;

    i=0;
    while(i<vectorSize)
    {
        cout<<"vector["<<i<<"] = ";
        cin>>vector10[i];
        i++;
    }

    i=0;
    while(i<vectorSize)
    {
        if(vector10[i]%7==0)
        {
            n7++;
            cout<<"\n7 found in vector["<<i<<"] for "<<n7<<" times";
        }

        i++;
    }
    
    cout<<endl<<endl;

    cout<<"11. Write an algorithm that fills a vector of 10 positions with random numbers (between 10 and 30) and informs how many numbers are multiples of 5, and in which position they are found."<<endl;

    vectorSize = 10;
    int vector11[vectorSize],n5=0;
    srand(time(NULL));

    for(int i=0;i<vectorSize;i++)
    {
        vector11[i]=rand()%21+10;
        cout<<vector11[i]<<" ";
    }

    for(int i=0;i<vectorSize;i++)
    {
        if(vector11[i]%5==0)
        {
            n5++;
            cout<<"\nMultiple of 5 found in vector["<<i<<"] by "<<n5<<" times";
        }
    }

    cout<<endl<<endl;

    cout<<"12. Build an algorithm that requests 5 values from the user, stores them in a vector of 5 integer positions. Then check if the number 13 is in the vector. If so, display the position in which it was found. If it is found more than once, also show how many times it was found."<<endl;

    vectorSize = 5;
    int vector12[vectorSize],n13=0;

    i=0;
    while(i<vectorSize)
    {
        cout<<"vector["<<i<<"] = ";
        cin>>vector12[i];
        i++;
    }

    i=0;
    while(i<vectorSize)
    {
        cout<<vector12[i]<<" ";
        i++;
    }

    i=0;
    while(i<vectorSize)
    {
        if(vector12[i]%13==0)
        {
            n13++;
            cout<<"\n13 found in vector["<<i<<"] for "<<n13<<" times";
        }

        i++;
    }

    cout<<endl<<endl;

    cout<<"13. Write an algorithm that fills a vector of 10 positions with generated values (use rand), and ensures that there are no repeated numbers. Then, sort the vector and show it on the screen."<<endl;

    vectorSize = 10;
    int vector13[vectorSize], aux;
    srand(time(NULL));

    for(int i=0;i<vectorSize;i++)
	{
        vector13[i]=rand()%10;
        for(int j=0;j<i;j++)
        {
            if(vector13[j]==vector13[i])
			{
                i--;
            }
        }
    }

    cout<<endl;

    for(int i=0;i<vectorSize;i++)
	{
        cout<<vector13[i]<<" ";
    }

    for(int i=0;i<vectorSize-1;i++)
	{
        for(int j=0;j<vectorSize-1;j++)
		{
            if(vector13[j]>vector13[j+1])
			{
                aux=vector13[j];
                vector13[j]=vector13[j+1];
                vector13[j+1]=aux;
            }
        }
    }

    cout<<endl;

    for(int i=0;i<vectorSize;i++)
	{        
        cout<<vector13[i]<<" ";
    }

    cout<<endl<<endl;

    cout<<"14. Write a program that fills a vector of 30 positions with the first prime numbers starting from 333. Display the resulting vector on the screen."<<endl;

    vectorSize = 30;
    int vector14[vectorSize];
    int primeTest;
    int firstPrime=333;

    i=0;
    while (i<vectorSize)
    {
        primeTest=0;
        for (int i=2; i<firstPrime;i++)
        {
            if (firstPrime%i==0)
            {
                primeTest=1;
            }
        }

        if (primeTest==0)
        {
            vector14[i]=firstPrime;
            i++;
        }

        firstPrime++;
    }

    for (int i=0;i<vectorSize;i++)
    {
        cout<<"\nvector["<<i<<"] = "<<vector14[i];
    }

    cout<<endl<<endl;

    
    cout<<"15. Create an algorithm that fills two vectors of size 10 (without having repeated elements within the vector itself). Then, create a third vector that is the union between the first two vectors. Note: the union vector is composed of all the elements of both vectors, without repetition."<<endl;

    vectorSize = 10;
    int vector15a[vectorSize], vector15b[vectorSize], vector15c[vectorSize*2], vector15final[vectorSize*2];

    for(int i=0;i<vectorSize;i++)
	{
        vector15a[i]=rand()%20;
        for(int j=0;j<i;j++)
        {
            if(vector15a[j]==vector15a[i])
			{
                i--;
            }
        }
    }

    for (int i=0;i<vectorSize;i++)
    {
        cout<<"\nvectora["<<i<<"] = "<<vector15a[i];
    }

    for(int i=0;i<vectorSize;i++)
	{
        vector15b[i]=rand()%20;
        for(int j=0;j<i;j++)
        {
            if(vector15b[j]==vector15b[i])
			{
                i--;
            }
        }
    }    

    for (int i=0;i<vectorSize;i++)
    {
        cout<<"\nvectorb["<<i<<"] = "<<vector15b[i];
    }    

    int auxQuantityAdded = 0;
    for(int i=0;i<vectorSize;i++)
	{
        vector15c[auxQuantityAdded] = vector15a[i];
        auxQuantityAdded++;

        vector15c[auxQuantityAdded] = vector15b[i];
        auxQuantityAdded++;                       
    }

    auxQuantityAdded = 0;
    for (int i = 0; i < vectorSize*2; i++) 
    {
        bool auxInUse = false;
        for (int j = 0; j < vectorSize*2; j++) 
        {        
            if (vector15c[i] == vector15final[j])
            {
                auxInUse = true;
            }
        }

        if (auxInUse == false)
        {
            vector15final[auxQuantityAdded] = vector15c[i];
            auxQuantityAdded++;
        }
    }

    for (int i=0;i<auxQuantityAdded;i++)
    {
        cout<<"\nvectorfinal["<<i<<"] = "<<vector15final[i];
    }

    cout<<endl<<endl;

    cout<<"16. Create an algorithm that fills two vectors of size 10 (without having repeated elements within the vector itself). Then, create a third vector that is the intersection between the first two vectors. Note: the intersection vector is composed of all elements in common in both vectors."<<endl;

    vectorSize = 10;
    int vector16a[vectorSize], vector16b[vectorSize], vector16c[vectorSize*2];

    for(int i=0;i<vectorSize;i++)
	{
        vector16a[i]=rand()%20;
        for(int j=0;j<i;j++)
        {
            if(vector16a[j]==vector16a[i])
			{
                i--;
            }
        }
    }

    for (int i=0;i<vectorSize;i++)
    {
        cout<<"\nvectora["<<i<<"] = "<<vector16a[i];
    }

    for(int i=0;i<vectorSize;i++)
	{
        vector16b[i]=rand()%20;
        for(int j=0;j<i;j++)
        {
            if(vector16b[j]==vector16b[i])
			{
                i--;
            }
        }
    }    

    for (int i=0;i<vectorSize;i++)
    {
        cout<<"\nvectorb["<<i<<"] = "<<vector16b[i];
    }

    auxQuantityAdded = 0;
    for (int i=0;i<vectorSize;i++)
    {        
        for (int j=0;j<vectorSize;j++)
        {
            if (vector16a[i] == vector16b[j])
            {
                vector16c[auxQuantityAdded] = vector16a[i];
                auxQuantityAdded++;
            }
        }
    }

    for (int i=0;i<auxQuantityAdded;i++)
    {
        cout<<"\nvectorfinal["<<i<<"] = "<<vector16c[i];
    }

    cout<<endl<<endl;
   

    cout<<"17. Create an algorithm that fills two vectors of size 10 (without having repeated elements within the vector itself). Then, create a third vector that is the difference between the first two vectors. Note: a difference vector is one formed by the elements that are in Vector A, but not in Vector B."<<endl;

    vectorSize = 10;
    int vector17a[vectorSize], vector17b[vectorSize], vector17c[vectorSize];

    for(int i=0;i<vectorSize;i++)
	{
        vector17a[i]=rand()%20;
        for(int j=0;j<i;j++)
        {
            if(vector17a[j]==vector17a[i])
			{
                i--;
            }
        }
    }

    for (int i=0;i<vectorSize;i++)
    {
        cout<<"\nvectora["<<i<<"] = "<<vector17a[i];
    }

    for(int i=0;i<vectorSize;i++)
	{
        vector17b[i]=rand()%20;
        for(int j=0;j<i;j++)
        {
            if(vector17b[j]==vector17b[i])
			{
                i--;
            }
        }
    }    

    for (int i=0;i<vectorSize;i++)
    {
        cout<<"\nvectorb["<<i<<"] = "<<vector17b[i];
    }

    auxQuantityAdded = 0;    
    for (int i=0;i<vectorSize;i++)
    {     
        bool auxInUse = false;   

        for (int j=0;j<vectorSize;j++)
        {
            if (vector17a[i] == vector17b[j])
            {
                auxInUse = true;                
            }
        }

        if (auxInUse == false)
        {
            vector17c[auxQuantityAdded] = vector17a[i];
            auxQuantityAdded++;
        }
    }

    for (int i=0;i<auxQuantityAdded;i++)
    {
        cout<<"\nvectorfinal["<<i<<"] = "<<vector17c[i];
    }

    cout<<endl<<endl;

    cout<<"18. Fill two vectors of size 5. Then create a third vector composed by merging the first two."<<endl;

    vectorSize = 10;
    int vector18a[vectorSize], vector18b[vectorSize], vector18final[vectorSize*2];

    for(int i=0;i<vectorSize;i++)
	{
        vector18a[i]=rand()%20;
        for(int j=0;j<i;j++)
        {
            if(vector18a[j]==vector18a[i])
			{
                i--;
            }
        }
    }

    for (int i=0;i<vectorSize;i++)
    {
        cout<<"\nvectora["<<i<<"] = "<<vector18a[i];
    }

    for(int i=0;i<vectorSize;i++)
	{
        vector18b[i]=rand()%20;
        for(int j=0;j<i;j++)
        {
            if(vector18b[j]==vector18b[i])
			{
                i--;
            }
        }
    }    

    for (int i=0;i<vectorSize;i++)
    {
        cout<<"\nvectorb["<<i<<"] = "<<vector18b[i];
    }    

    auxQuantityAdded = 0;
    for(int i=0;i<vectorSize;i++)
	{
        vector18final[auxQuantityAdded] = vector18a[i];
        auxQuantityAdded++;

        vector18final[auxQuantityAdded] = vector18b[i];
        auxQuantityAdded++;                       
    }

    for (int i=0;i<auxQuantityAdded;i++)
    {
        cout<<"\nvectorfinal["<<i<<"] = "<<vector18final[i];
    }

    return 0;
}