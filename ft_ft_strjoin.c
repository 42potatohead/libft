char *ft_strjoin(const char *s1, const char *s2)
{
    char *str;
    size_t i;
    size_t j;

    res =(char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!res)
        return (NULL);
    i = 0;
    j = 0;
    while (s1[i])
    {
        res[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while (s2[i])
    {
        res[j] = s2[i];
        i++;
        j++;
    }
    res[j] = '\0';
    return (res);
}