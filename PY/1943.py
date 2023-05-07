# BEE 1943 - Top N - Python

def top_n(n: int):
    if n == 1:
        return 'Top 1'
    elif n <= 3:
        return 'Top 3'
    elif n <= 5:
        return 'Top 5'
    elif n <= 10:
        return 'Top 10'
    elif n <= 25:
        return 'Top 25'
    elif n <= 50:
        return 'Top 50'
    return 'Top 100'


print(top_n(int(input())))
