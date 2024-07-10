#include <stdio.h>

int getLastIndex(char *s)
{
    if (*s == '\0')
    {
        return (-1);
    }
    return 1 + (getLastIndex(s + 1));
}



int testIsPalindrome(char *s, int i, int j)
{
    if (i >= j)
    {
        return (1);
    }
    if (s[i] == s[j])
    {
        return (testIsPalindrome(s, i + 1, j - 1));
    } else {
        return (0);
    }
}

int is_palindrome(char *s)
{
    if (*s == '\0')
    {
        return (1);
    }
    return (testIsPalindrome(s, 0, getLastIndex(s)));
}
int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("ahmmha");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}