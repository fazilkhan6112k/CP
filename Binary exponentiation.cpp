long long int power(long long int A, long long int B)
{
    if (B == 0)
        return 1;

    else if (B % 2 == 0)
        return power((A*A) % mod, B >> 1) % mod;
    else
        return (A * power((A*A) % mod, B >> 1) % mod );
}
