prev = 550
n = 8

def P(n):
    return 4 * (n - 1)

def In(n):
    return (n - 2) ** 2

val = prev + P(n) * In(n) + 6*P(n) + 14 + ((P(n) - 20) * (P(n) - 1)) / 2

v = prev + (4 * (n - 1) * ((n - 2) ** 2 + 6)) + 14 + ((4*n - 24) * (4 * n - 5)) / 2

print(val)
print(v)
