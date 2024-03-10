import random
import matplotlib.pyplot as plt
import time

def partition(a,low,high):
    pivot=a[low]
    i=low
    j=high
    while(i<j):
        while(a[i]<pivot):
            i+=1
        while(a[j]>pivot):
            j-=1
        if(i<j):
            a[i],a[j]=a[j],a[i]
    a[j],pivot=pivot,a[j]
    return j
def qs(a,low,high):
    if(low<high):
        m=partition(a,low,high)
        qs(a,low,m-1)
        qs(a,m+1,high)

retx=[]
ret=[]
for i in range(0,21):
    p=[]
    for l in range(0,i):
        p.append(random.randint(1,1000000))
    print(p)
    t1=time.perf_counter()
    qs(p,0,i-1)
    t2=time.perf_counter()
    print(p)
    retx.append(i)
    ret.append(t2-t1)
print(retx)
print(ret)

plt.plot(retx,ret)
plt.show()