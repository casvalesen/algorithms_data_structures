class TreeNode(object):

    def __init__(self, val , left= None, right=None): 
        self.val = val
        self.left = left
        self.right= right
        print(f'initialised, self.val: {self.val} , self.left {self.left} , self.right {self.right}')
         
    def __str__(self):
        return str(self.val)

    def __repr__(self):
        return f"Treenode data {self.val}"

    def preOrderTraversal(self, answer):

        '''
        args: 
            root, an instance of TreeNode

        returns: 
           answer, list of of values of traversed tree
        '''
        #Base case of recursive algo 
        if root: 
            
            #Set state to first in root, visit the root. 
            answer.append(self.val)

            #Then traverse the left subtree. Recursively
            print(f"traversing righ, with self.val: {self.val}")
            self.preOrderTraversal(self.right, answer)
            
            #Finally, traverse the right subtree. Recursively
            print(f"traversing left, with self.val: {self.val}")
            self.preOrderTraversal(self.left, answer)

            print(answer)

    def get_answer(self) :
        answer = []
        self.preOrderTraversal(self, answer)

        return answer

    def printTree(self):
        print(self.val)

    def insert(self, root, value):

        #Base case
        if value ==None:
            print('Value is none, skipping')

        #If the binary tree is empty, make a new node and declare it as root 
        elif root ==None: 
            print( f'root is empty,making a new node and declaring as root')
            root = TreeNode(value)

        #If a binary tree is not empty, we will insert into the tree

        #If a value is less than the balue of the data in root, we 
        elif value < root.val:
            print(f'value {value} less than self.val {root.val}, adding to left')
            root.left = self.insert(root.left, value)

        #If a new value is greater  than the value of the data in root, we add it to the right subtree
        elif value > root.val:
            print(f'value {value} more than self.val {root.val}, adding to right')
            root.right = self.insert(root.right, value)

            #TODO: change root w. self
        
        print(f'Root is {root} at the end of insert method execution')
        
        return root 

def tree_from_list(list):
    
    root = TreeNode(list[0])

    for value in list[1:]: 
        print(f'adding element {value} to tree, root is now {root}')
        root.insert(root,value) #root = 
        print(f'Root is {root} after insert')

    return root

### Execution

value_list = [1,None,2,3]

tree =tree_from_list(value_list) 