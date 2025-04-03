#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int i, j, n, x, y, count=0;

    while (scanf("%i %i", &x, &y) != EOF)
    {
        int arr[x][y];

        for (i=0; i<x; ++i)
        {
            for (j=0; j<y; ++j)
                scanf("%i", &arr[i][j]);
        }

        for (i=0; i<x; ++i)
        {
            for (j=0; j<y; ++j)
            {
                if (arr[i][j]==1)
                    arr[i][j]=9;
            }
        }

        for (i=0; i<x; ++i)
        {
            for (j=0; j<y; ++j)
            {
                if (arr[i][j]==0)
                {
                    if (i==0 || i==x-1 || j==0 || j==y-1)
                    {
                        if (i==0 && j==0)
                        {
                            if (arr[i][j+1]==9)
                            count++;

                            if (arr[i+1][j]==9)
                            count++;

                            arr[i][j]=count;
                            count=0;
                        }

                        else if (i==0 && j==y-1)
                        {
                            if (arr[i][j-1]==9)
                            count++;

                            if (arr[i+1][j]==9)
                            count++;

                            arr[i][j]=count;
                            count=0;
                        }

                        else if (i==x-1 && j==0)
                        {
                            if (arr[i][j+1]==9)
                            count++;

                            if (arr[i-1][j]==9)
                            count++;

                            arr[i][j]=count;
                            count=0;
                        }

                        else if (i==x-1 && j==y-1)
                        {
                            if (arr[i][j-1]==9)
                            count++;

                            if (arr[i-1][j]==9)
                            count++;

                            arr[i][j]=count;
                            count=0;
                        }

                        else if (i==x-1)
                        {
                            if (arr[i][j+1]==9)
                                count++;

                            if (arr[i][j-1]==9)
                                count++;

                            if (arr[i-1][j]==9)
                                count++;

                            arr[i][j]=count;
                            count=0;
                        }

                        else if (i==0)
                        {
                            if (arr[i][j+1]==9)
                                count++;

                            if (arr[i][j-1]==9)
                                count++;

                            if (arr[i+1][j]==9)
                                count++;

                            arr[i][j]=count;
                            count=0;
                        }

                        else if (j==y-1)
                        {
                            if (arr[i][j-1]==9)
                                count++;

                            if (arr[i+1][j]==9)
                                count++;

                            if (arr[i-1][j]==9)
                                count++;

                            arr[i][j]=count;
                            count=0;
                        }

                        else if (j==0)
                        {
                            if (arr[i][j+1]==9)
                                count++;

                            if (arr[i+1][j]==9)
                                count++;

                            if (arr[i-1][j]==9)
                                count++;

                            arr[i][j]=count;
                            count=0;
                        }
                    }

                    else
                    {
                        if (arr[i][j+1]==9)
                            count++;

                        if (arr[i][j-1]==9)
                            count++;

                        if (arr[i+1][j]==9)
                            count++;

                        if (arr[i-1][j]==9)
                            count++;

                        arr[i][j]=count;
                        count=0;
                    }
                }
            }
        }

        for (i=0; i<x; ++i)
        {
            for (j=0; j<y; ++j)
            {
                if (j==y-1)
                    printf("%i\n", arr[i][j]);

                else
                    printf("%i", arr[i][j]);
            }
        }
    }

    return 0;
}
