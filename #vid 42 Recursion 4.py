def permutations(s,ans):
    if(len(s)==0):
        print(ans)
    for i in range(len(s)):
        ch = s[i]
        ros = s[:i] + s[i+1:]
        permutations(ros,ans+ch)

def countPath(s,e):
    if(s==e):
        return 1
    if(s>e):
        return 0
    count = 0
    for i in range(1,6):
        count+=countPath(s+i,e)
    return count 


def countMaze(n,i,j):
    if(i==n-1 and j==n-1):
        return 1
    if(i>n-1 or j > n-1):
        return 1
    return countMaze(n,i+1,j) + countMaze(n,i,j+1)

print(countPath(0,3))
print(permutations("ABC",""))
