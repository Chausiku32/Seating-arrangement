#include<stdio.h>
void seat(int n)
{
    int i,seat,l;
    for(i=0;i<n;i++)
{
    int a=6,b=-1;
    if(n>=(12*i+1)&&n<((12*i+1)+6))
    {
    for(l=(12*i)+1;l<((12*i+1)+6);l++)
    {
            a-=1;
                if(l==n)
            {
                  seat=n+(2*a + 1);
                  printf("%d",seat);
                    break;
            }
    }
    }
    else if(n>=(6*(2*i+1)+1)&&n<(6*(2*i+1)+7))
    {
        for(l=(6*(2*i+1)+1);l<(6*(2*i+1)+7);l++)
        {
          b+=1;
        if(l==n)
           {
                 seat=n-(2*b+1);
                  printf("%d",seat);
                  break;
           }
        }
    }
}
for(i=0;i<18;i++)
{
     if(n==((6*i)+1)||n==((6*i+1)+5))
                   {
                        printf(" WS\n");
                        break;
                   }
                  else if(n==((6*i)+2)||n==((6*i+1)+4))
                          {
                              printf(" MS\n");
                              break;
                          }
                          else if(n==((6*i)+3)||n==((6*i)+4))
                           {
                                printf(" AS\n");
                                break;
                           }
}
}
void main()
{
    int t,i,n;
    scanf("%d",&t);
	if(t>=1&&t<=100000)
	{
		for(i=0;i<t;i++)
    {
    scanf("%d",&n);
	if(n>=1&&n<=108)
    seat(n);
	continue;
    }
	}
    
}
