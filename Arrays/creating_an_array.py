class MyArray:
    def __init__(self):
        self.length = 0
        self.data = {}

    def get(self, index):
        return self.data.get(index, None)
    
    def push(self, item):
        self.data[self.length] = item
        self.length += 1
        return self.length
    
    def pop(self):
        last_item = self.data[self.length - 1]
        del self.data[self.length - 1]
        self.length -= 1
        return last_item

    def __str__(self):
        return str(self.data)

    def __repr__(self):
        return f"MyArray(length={self.length}, data={self.data})"
    

array = MyArray()
array.push('1')
array.pop()
print(array)