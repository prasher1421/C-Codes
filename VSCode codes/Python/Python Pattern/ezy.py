for i in range(1,6):
    print("*"*i)
for j in range(1,6):
    k=5-j
    if(j!=5):
        print(" "*(j-1),"*"*k,end='')
        print()
for m in range(1,6):
    h=5-m
    print(" "*(h),"*"*m,sep='')
for p in range(1,6):
    w=5-p
    print("*"*w)