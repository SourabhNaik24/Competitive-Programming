# cook your dish here
n = input()
n1 = int(n)
if (n1 == 1 or n1 == 2):
    print("No")
else:
    for num in range(0,n1+1):
        if num > 1:
            for i in range(2, num):
                if (num % i) == 0:
                    break
            else:
                print(num, end=' ')
        