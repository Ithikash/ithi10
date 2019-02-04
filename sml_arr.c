#include<stdio.h>

int main()
{
	int array[5] = {13, 10, 21, 28, 8};
        int first, i, sec;

        if( array[0] > array[1] )
        {
                first = array[1];
                sec = array[0];
        }
        else
        {
                first = array[0];
                sec = array[1];
        }
        for( i = 2; i < 5; i++ )
        {

                if( first > array[i])
                {
                        sec = first;
                        first = array[i];
		}
		else if( first < array[i] && sec > array[i] )
                {
                        sec = array[i];
                }
        }
        printf("%d\n",sec);
}








