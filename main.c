#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int Ecart(int *T,int size);
bool Test_Sort(int *T, int size );

int main()
{
int t[]={1,2,3,3,4,6,7};
bool flag = Test_Sort(t,7);

if(flag) printf("Sorted  :)");
 else
    printf("NOT Sorted ): ");

    return 0;
}
/// this function show the signe between two cases in the array
int Ecart(int *t,int size){
int i,d;
i=0;

d=t[1]-t[0];

while(i<size-1 && d==0)
    {
    d = t[i+1] - t[i];
    i++;
    }


return d;
}
bool Test_Sort(int *T, int size )
{
    int d;
    d=Ecart(T,size);

 if(d==0) return true; /// all the numbers are equal in the array
 for(int i = 0 ; i<size-2 ; i++)
    {
    if((d>0 && T[i+1]-T[i] < 0 )|| (d<0 && T[i+1]-T[i]>0 ))
/* for exemple : if we have t[]={1,2,3,4,5} so here
d=t[1]-t[0] so d==1 and " 1>0 "
in this case we must to check with for loop if the diffrence between two elements are negative
*/
    return false;
    }
  return true;
}
