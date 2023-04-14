n = int(input())

for i in range(1,1001):
    resto=i%n
    if resto == 2:
        print(i)