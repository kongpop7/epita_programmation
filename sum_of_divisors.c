# include <stdio.h>

unsigned long sum_of_divisors(unsigned long n, size_t *count)
{
	// TODO
	int sum = 0 ;
	*count = 0;
	for(size_t i = 1 ; i <= n/2 ; i++){
		if ( n%i == 0 ){
			*count = *count + 1;
			sum = sum + i;
		}
	}
	return sum;

}

int main()
{
    unsigned long x;
    unsigned long sum;
    size_t count;

    x = 28;
    sum = sum_of_divisors(x, &count);
    printf("x = %lu\n", x);
    printf("sum   = %lu\n", sum);
    printf("count = %zu\n\n", count);

    x = 100;
    sum = sum_of_divisors(x, &count);
    printf("x = %lu\n", x);
    printf("sum   = %lu\n", sum);
    printf("count = %zu\n", count);
}
