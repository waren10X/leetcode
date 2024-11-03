#include <string.h>
#include <stdbool.h>

bool rotateString(char* s, char* goal)
{
    int len_s;
    int len_goal;

    len_s = strlen(s);
    len_goal = strlen(goal);
    if (len_s != len_goal)
    {
        return false;
    }
    char double_s[2 * len_s + 1];
    strcpy(double_s, s);
    strcat(double_s, s);
    return strstr(double_s, goal) != NULL;
}