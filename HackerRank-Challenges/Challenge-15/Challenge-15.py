a=int(input())
max=0
while a != 0:
    digit=a%10
    if(digit > max):
       max = digit
    a=a//10
print(max)    