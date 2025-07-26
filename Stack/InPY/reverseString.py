def reverseString(string):
    ans=''
    stack=[]
    for i in string:
        stack.append(i)
    print(stack)
    while stack:
        x=stack.pop()
        print(x)
        ans += x
    return ans



if __name__ =='__main__':
    string='hellojikyahaalchal'
    print(reverseString(string))