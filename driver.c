#include <unistd.h>
#include <string.h>
#include <aliases.h>
#include <stdlib.h>
#include <signal.h>
#include <stdio.h>

int main()
{
    //buffer
    char arr[10];

    char s1[] = "I owe you $1000";
    char s2[] = "I don't know you";

    //string to use to overflow
    char pt1[] = "yt joker  I owe you $2000";
    char pt2[] = "joker yt  I owe you $1,000,000";

    int cons = 1;
    while (cons == 1)
    {
        printf("What is your name? \n");
        //put either part 1 (pt1) or part 2 (pt2) here.
        strcpy(arr, pt2);
        for(int i = 0; i <= strlen(arr); i++)
        {
            if (arr[i] == 'j')
                { 
                    if (arr[i+1] == 'o') 
                    { 
                        if (arr[i+2] == 'k') 
                        { 
                            if (arr[i+3] == 'e') 
                            { 
                                if (arr[i+4] == 'r') {
                                printf("%s \n", s1);
                                return(1);
                            }                            
                        }
                    }
                }
            }
            else
            {   
                printf("%s \n", s2);
            }
        }
        return(1);
    }
}
