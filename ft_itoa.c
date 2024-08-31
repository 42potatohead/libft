
#include "libft.h"

char	*ft_itoa(int n)
{
    char	*str;
    int		len;
    size_t		nb;

    len = 1;
    nb = n;
    while (nb /= 10)
        len++;
    if (n < 0)
        len++;
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (n < 0)
        str[0] = '-';
    while (len > (n < 0 ? 1 : 0))
    {
        str[len - 1] = (n < 0 ? -(n % 10) : n % 10) + '0';
        n /= 10;
        len--;
    }
    return (str);
}