#include<iostream>
int main()

{   long long int test,count,k,m,n,x;
    scanf("%lld",&test);
    while(test--)
    {      count=0;
        scanf("%lld%lld%lld",&k,&m,&n);
    while(k<m)

        {

          if(m%n==0)

         {

             m=m/n;

             count++;

         }

         else

         {       x=(n-(m%n));

             m+=(n-(m%n))/2*2+(n-(m%n))%2;

             count+=x/2+x%2;

         }  

     }

        if(k>m)

        {

            count+=(k-m)/2+(k-m)%2;

        }

        printf("%lld\n",count);

    }

    return 0;

}