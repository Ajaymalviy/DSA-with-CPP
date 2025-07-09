class Queue:
    def __init__(self, capacity):
        self.capacity=capacity
        self.queue=[]
        self.front=0
        self.rear=-1


    def enqueue(self, data):
        if self.isfull():
            print('queue is fulled') 
            return
        else:
            self.queue.append(data)
            self.rear+=1
            
    def dequeue(self):
        if self.isempty():
            print('queue is empty')
            return # as we write return so we don't need to be write else. 
        else:
            self.front +=1

    def isfull(self):
        return len(self.queue) - self.front >= self.capacity 
    
    def isempty(self):
        return self.rear<self.front
    
    def display(self):
        if self.isempty():
            print("Queue is empty")
        else:
            print(self.queue[self.front:self.rear + 1])

    def front_element(self):
        if self.isempty():
            print('queue is empty')
            return -1
        else:
            return self.queue[self.front]

q = Queue(5)

q.enqueue(20)
q.enqueue(43)
q.enqueue(30)
q.enqueue(30)
q.enqueue(34)

q.display()            
print(q.front_element())

q.dequeue()
q.display()    
    
      

           
