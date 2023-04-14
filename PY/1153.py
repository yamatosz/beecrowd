def fatorial(n):
    return 1 if n == 1 else n*fatorial(n-1)


n = int(input())

print(fatorial(n))
