main()
{
    float i = 10, *j;
    void *k;
    k = &i;
    j = k;
    printf("%f", *j);
}

