#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>


int main()

{
 int n;
 scanf("%d\n",&n);
  int a[n];
  for(int i=0;i<n;i++)
   {
      scanf("%d",&a[i]);


    }
    while(1)

    {

        int min=a[0];
        int r=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0)
            r++;
        }
        if(r==0)
        break;
        printf("%d\n",r);
        r=0;
        for(int i=1;i<n;i++)
        {

        if((a[i]<min) && (a[i]!=0))

            min=a[i];

            if(min==0)

            min=a[i];

        }


        for(int i=0;i<n;i++)


        {


            if(a[i]!=0)


            a[i]-=min;


        }


    }


    return 0;


}