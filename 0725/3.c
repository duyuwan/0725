#include<stdio.h>


char isodd(int a )
{
        if(a %2)
        {
                return 0;
        }
        else
        {
                return 1;
        }
}

int main(int argc, char * argv[])
{
        int a = 0;

        scanf("%d", &a);

        if(isodd(a))
        {
          printf("a is odd\n");
        }
        else
        {
          printf("a is even\n");
        }

        return 0;
}
                               