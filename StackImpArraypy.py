from sys import maxsize
def stackarray():
    Sa = []
    return Sa

def empty(Sa):
    return len(Sa) == 0

def Push(Sa, x):
    Sa.append(x)
    print(x + " push into stack ")

def pop(Sa):
    if (empty(Sa)):
        return str(-maxsize - 1)

    return Sa.pop()
def Peek(Sa):
    if (empty(Sa)):
        return str(-maxsize - 1)
    return Sa[len(Sa) - 1]

Sa = stackarray()
Push(Sa, str(5))
Push(Sa, str(12))
Push(Sa, str(20))
Push(Sa, str(32))
Push(Sa, str(10))

print(pop(Sa) + " pop from the stack")
print(pop(Sa) + " pop from the stack")
print(Peek(Sa) + " is highest element of the stack")

