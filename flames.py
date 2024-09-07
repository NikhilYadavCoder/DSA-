a = input("Enter first name: ")
b = input("Enter second name: ")
a = a.replace(" ","")
b = b.replace(" ","")
l1 = list(a)
l2 = list(b)
l3 = []
l4 = []
lis = []
for x in a:
    l3.append(x)
for y in b:
    l4.append(y)
for x in l1:
    if x in l2:
        l2.remove(x)
    else:
        lis.append(x)
for x in l4:
    if x in l3:
        l3.remove(x)
    else:
        lis.append(x)
    
print("Common letters:", lis)
count = len(lis)
flame = "flames"
p = list(flame)
cnt = len(p)
print(count)
print(cnt)
li = list(p)
while cnt>0:
    temp = (count%cnt)-1
    if temp == -1:
        li = li[:len(li)-1]
    if temp>=0:
        li = li[temp + 1 :]+li[:temp]
    cnt = len(li) 
    if(len(li)>=1):
        print(li)
    if(len(li)==1): 
        li = ''.join(li)
        if li =='f':
            print("Friends")
        elif li == 'l':
            print("Lovers") 
        elif li == 'a':
            print("Affection")
        elif li == 'm':
            print("Marriage")
        elif li == 'e':
            print("Enemies")
        elif li == 's':
            print("sisters")
        else:
            exit





