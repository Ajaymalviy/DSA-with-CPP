class Twostack:
    def __init__(self, size):
        self.arr=[0]*size
        self.size=size
        self.top1=-1
        self.top2=size
        
    def push1(self, data):
        if self.top2-self.top1>1:
            self.top1 +=1
            self.arr[self.top1]=data
            print('pushed element in arr by push1')
            return 
        return "overflow from right"

    def push2(self,data):
        if self.top2-self.top1 > 1:
            self.top2 -=1
            self.arr[self.top2]=data
            print('pushed element in arr by push2')
            return 
        return 'overflow from left'
    

    def pop1(self):
        if self.top1 >= 0:
            x=self.arr[self.top1]
            self.top1 -=1
            return x
        return 'empty first array'
    
    def pop2(self):
        if self.top2 < self.size:
            x=self.arr[self.top2]
            self.top2 +=1
            return x 
        return 'empty second array'
    
if __name__=='__main__':
    ts = Twostack(5)
    ts.push1(2)
    ts.push1(3)
    ts.push2(4)

    print(ts.pop1(), end=' ')
    print(ts.pop2(), end=' ')
    print(ts.pop2(), end=' ')
