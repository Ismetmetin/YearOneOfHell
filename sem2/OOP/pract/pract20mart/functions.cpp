

unsigned int Factorial(unsigned int n) 
{
    return (n <= 1) ?  n : Factorial(n-1)*n;
} 