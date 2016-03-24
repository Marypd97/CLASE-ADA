#include <iostream>

using namespace std;

void Merge(int *A,int ini,int med, int fin)
{
  int n1,n2;
  n1=med-ini+1;
  n2=fin-med;
  int L[n1];
  int R[n2];
  int i,j;

  for(i=0;i<n1;i++)
  {
        L[i]=A[ini+i];
  }

  for(j=0;j<n2;j++)
  {
        R[j]=A[med+j+1];
  }
i=0;
j=0;
  for (int k=ini; k<fin;k++)
  {
        if(L[i]<R[j])
        {
            A[k]=L[i];
            i++;
        }
        else
        {
            A[k]=R[j];
            j++;
        }
 
  }
}
void Merge_sort(int *A,int p, int r)
{
    int q;

    if(p<r)
    {
        q=(p+r)/2;
        Merge_sort(A,p,q);
        Merge_sort(A,q+1,r);
        Merge(A,p,q,r);
    }
}



#endif // MERGE_H_INCLUDED
