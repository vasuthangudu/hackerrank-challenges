a, b, c = map(int, input().split())

if a != b and b != c and c != a:
    print(a + b + c)
elif a == b:
    print(c)
elif b == c:
    print(a)
else:
    print(b)
