def is_prime(n):
    if n < 2:
        return 0
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return 0
    return 1

# Example usage:
n = int(input("Enter a positive integer: "))
print(is_prime(n))
