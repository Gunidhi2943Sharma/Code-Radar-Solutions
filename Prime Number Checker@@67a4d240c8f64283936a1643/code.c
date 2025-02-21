def is_prime(n):
    if n < 2:
        return 0  # Numbers less than 2 are not prime
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return 0  # Not a prime number
    return 1  # Prime number

# Example usage:
n = int(input("Enter a positive integer: "))
print(is_prime(n))