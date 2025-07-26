

def deleteMiddle(stack, count, n):
    if count==n//2:
        stack.pop()
        return stack
    top=stack[-1]
    stack.pop()
    count +=1
    deleteMiddle(stack, count, n)
    stack.append(top)
    return stack



if __name__=='__main__':
    stack=[]
    stack.append(3)
    stack.append(4)
    stack.append(6)
    stack.append(00)
    stack.append(5)
    stack.append(7)    
    stack.append(11)
    stack.append(5)
    stack.append(7)    
    stack.append(11)
    n=len(stack)
    count=0
    deleteMiddle(stack, count, n)
    print(stack)