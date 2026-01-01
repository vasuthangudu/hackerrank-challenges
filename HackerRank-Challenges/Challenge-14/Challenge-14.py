a=int(input())
bb=int(input())
c=0
while a!=0:
     b=a%10
     if b==bb:
        c = c+1
     a=a//10
print(c)