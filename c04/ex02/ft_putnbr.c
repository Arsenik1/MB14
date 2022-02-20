void    print(void);

void    ft_putnbr(int nb)
{
        int             ters;
        int             kalan;
        int             on;
        char    yaz;

        ters = 0;
        kalan = 0;
        while (nb != 0)
        {
                kalan = nb % 10;
                nb = nb / 10;
                ters = 10 * ters + kalan;
        }
        if (ters < 0)
        {
                write(1, "-", 1);
                ters = -ters;
        }
        if (ters != 0)
        {
                print(ters);
        }
}

void    print(int ters)
{
        int             kalan;
        char    yaz;

        while (ters != 0)
        {
                kalan = ters % 10;
                ters = ters / 10;
                yaz = (char)kalan + 48;
                write(1, &yaz, 1);
        }
}
