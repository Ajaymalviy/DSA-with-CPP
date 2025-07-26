class Stack:
    def __init__(self, size):
        self.stack=[]
        self.size=size
    
    def push(self, element):
        if(len(self.stack)==self.size):
            print("stack is full btw")
            return None
        return self.stack.append(element)

    def pop(self):
        if(self.isempty()):
            print("stack is empty btw")
            return None
        return  self.stack.pop()  

    def peek(self):
        if(len(self.stack)==0):
            print("stack is empty btw")
            return None
        return self.stack[-1]

    def isempty(self):
        return len(self.stack)==0    
    def show(self):
        if(self.isempty()):
            print("stack is empty")
        else:
            print("stack elements is ", self.stack)

S=Stack(5)
S.pop()
S.push(21)
S.push(11)
S.push(6)
S.show()
S.pop()
S.push(3)
S.push(21)
print("Top:", S.peek())  # 30
S.push(21)
S.show()
S.pop()
print("Top after pop:", S.peek())  # 20
S.show()


