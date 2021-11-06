double posi_mul(double x, int n)
{
    if(n==0)
    {
        return 1;
    }
    
    return x*posi_mul(x, n-1);
}

double nega_mul(double x, int n)
{
    if(n==0)
    {
        return 1;
    }
    return (1/x)*(nega_mul(x, n+1));
}

double myPow(double x, int n){
    double result=1;
    
    if(n>0)
    {
        return result = x*posi_mul(x, n-1);
    }
    else if(n<0)
    {
        return result = (1/x)*(nega_mul(x, n+1));
    }
    else
    {
        return result = 1;
    }

}
