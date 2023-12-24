def reverseString(s):
    if(len(s) == 0):
        return ""
    a = reverseString(s[1:])
    return a+s[0]


def replacePi(s):
    if(len(s)==0):
        return ""
    if(s[:2] == "pi"):
        print("3.14")
        replacePi(s[2:])
    else:
        print(s[0])
        replacePi(s[1:])

# we have 3 towers and qw have to go from A to Cand B is helper rod and we cant
# put a small above larger
        
def towerOfHanoi(n, src, dest, helper):
    if(n==0):
        return ""
    towerOfHanoi(n-1, src, helper, dest)
    print("Move from ",src," to ", dest)
    towerOfHanoi(n-1,helper, src, dest)

def removeAllDuplicates(s):
    if(len(s)==0):
        return ""
    if(s[0] == s[1]):
        return s[1:]
    removeAllDuplicates(s[1:])
s = "pipppxxpi"
print(replacePi(s))
print(towerOfHanoi(4,'A','c','B'))
print(removeAllDuplicates(s))
