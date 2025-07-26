class Stack:
    def __init__(self, size):
        self.stack=[]
        self.size=size

    def push1(self, data):
        if self.stack[-1]-self.stack[0]>1:
            return self.stack.append(data)
        else:
            return 'overflow'

    def push2(self,data):
        if self.stack[-1]-self.stack[0]>0:
            return self.stack[-1]==data    
        else:
            return 'overflow'