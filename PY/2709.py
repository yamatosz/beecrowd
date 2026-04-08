# 2709 - As Moedas de Robbie
import math

def is_prime(n):
    if n <= 1:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    
    for i in range(3, int(math.sqrt(n)) +1, 2):
        if n % i == 0:
            return False
    return True

while 1:
    try:
        m = int(input())
        v = [int(input()) for i in range(1,m+1)]
        n = int(input())
        s = sum(v[::-n])
        if not is_prime(s):
            print("Bad boy! I’ll hit you.")
        else:
            print("You’re a coastal aircraft, Robbie, a large silver aircraft.")
    except EOFError:
        break
        