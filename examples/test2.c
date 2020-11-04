int factorial(int n)
{
	if (n <= 0)
		return 1;
	else return n*factorial(n-1);
}

int fibonacci(int a, int b, int n)
{
	if (n <= 0)
		return a;

	while (n > 0) {
		int t;
		t = b;
		b = a+b;
		a = t;
		n = n-1;
	}
	return b;
}

int main()
{
  return fibonacci(factorial(1), factorial(2), factorial(5));
}
