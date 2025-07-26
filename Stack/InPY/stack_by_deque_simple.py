from collections import deque

class Stack:
    #here we dont need to manage manually top , list are auto manage thier size top++, -- need not in py just do append or pop.
    def __init__(self, size):
        self.stack=deque()
        self.size=size

    def push(self, data):
        if len(self.stack) == self.size:
            print("stack is full")
            return None
        return self.stack.append(data)

    def pop(self):
        if self.isempty():
            return None
        return self.stack.pop()
    
    def peek(self):
        if self.isempty():
            return None
        return self.stack[-1]
    
    def isempty(self):
        return self.stack==0
    
    def show(self):
        if self.isempty():
            print('stack is empty btw')
            return None
        else:
            print("elements in stack is ", self.stack)

s=Stack(4)
s.push(10)
s.push(10)
s.push(12)
s.push(14)
s.show()
s.pop()
s.show()
print('peak element is ', s.peek())

