#include <iostream>

using namespace std;
void insertsort(int *A,int n)
{
    int key;
    int i;
    for(int j=1;j<n;j++)
    {
        key=A[j];
        i=j-1;
        while (i>-1 and A[i]>key)
        {
            A[i+1]=A[i];
            i=i-1;
        }
        A[i+1]=key;
    }
}

int main()
{
    int n;
 cout << "***INSERT SORT***" << endl<<endl;
     int A[6]={5,2,3,8,6,4};
    int B[9]={9,5,3,15,8,19,5,4,13};
    int *a;

    a=A;

    insertsort(a,6);
    cout << "LISTA A" << endl;
    for(int i=0;i<6;i++)
    {
        cout<<A[i]<<", ";
    }

    int *b;
    b=B;

    insertsort(b,9);
    cout <<endl<< "LISTA B" << endl;
    for(int i=0;i<9;i++)
    {
        cout<<B[i]<<", ";
    }

    return 0;
}
