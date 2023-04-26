for _ in range(int(input())):
    x, y = map(int, input().split())
    min_cost = float('inf')
    for i in range(0, 6):
        for j in range(0, 6-i):
            if i*2 + j*4 == 10:
                cost = x*i + y*j
                if cost < min_cost:
                    min_cost = cost
    print(min_cost)
