l=[1,2,3,4,5,7,8,9]
l.sort()
l.reverse()
l.append(0)
l.insert(3,6)
l.pop()
# l.pop(0)
l.remove(1)
print(l.count(3))
print(l)

a={"name":["Aryan","Ricky"],"place":["Kangra","Una"],"lastname":["Prasher","Chaudhary"]}
print(a.keys())
# ll=a.keys()
# print(ll)
print(a.items())
a.update({"age":[17,18]})
print(a)