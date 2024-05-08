int printf(const char *str, ...)
{
    size_t  count;
    size_t  i;
    va_list argp;

    va_start(argp,str);
    i = 0,
    count = 0;
    while (str[i])
    {
        if(str[i] == '%')
            count += ft_add(&argp, str[++i]);
        else
            count += ft_putchar(str[i]);
    i++;
    }
    va_end(argp);
    return (count);
}