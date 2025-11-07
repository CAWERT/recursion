def power(x, n):
    if n == 0:
        return 1
    elif n < 0:
        return 1 / power(x, -n)
    else:
        return x * power(x, n - 1)
print(power(2, 3))
print(power(2, -2))

