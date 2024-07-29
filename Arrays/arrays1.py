vetor = ['a', 'b', 'c', 'd']

# push -> add new item in the last index
vetor.append('a') # O(1)

# pop -> throw away the last item in the index
vetor.pop() #O(1)

# splice -> start, final, step
vetor[1:3]

# insert in the middle
def insert_middle(array, element): # O(n)
    # Calculate the middle index
    middle_index = len(array) // 2
    
    # Insert the element at the middle index
    array.insert(middle_index, element)
    
    return array

#insert in the beginning
def insert_at_beginning(array, element): # O(n)
    # Insert the element at the beginning of the array
    array.insert(0, element)
    
    return array
