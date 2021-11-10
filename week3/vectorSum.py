from typing import List, Tuple

def sumVec(l1: List[Tuple[float]], l2: List[Tuple[float]]) -> List[Tuple[float]]:
    res = []
    
    ptr1 = 0
    ptr2 = 0
    
    while ptr1 < len(l1) and ptr2 < len(l2):
        l_sum = 0
        l_index = None
        if l1[ptr1][0] == l2[ptr2][0]:
            l_sum = l1[ptr1][1] + l2[ptr2][1]
            l_index = l1[ptr1][0]
            ptr1 += 1
            ptr2 += 1
        elif l1[ptr1][0] < l2[ptr2][0]:
            l_sum = l1[ptr1][1]
            l_index = l1[ptr1][0]
            ptr1 += 1
        elif l1[ptr1][0] > l2[ptr2][0]:
            l_sum = l2[ptr2][1]
            l_index = l2[ptr2][0]
            ptr2 += 1
        
        res.append((l_sum, l_index))
    
    '''
        v1 = [(4,2), (9,2.3)]
        v2 = [(4,4), (5,6), (9, -2.3)]
        v3 = [(4,6), (5,6), (9,0)]
        
        ptr1 = 0 <- index of list1
        ptr2 = 0 <- index of list2
        
        
    '''
    
    return res
    
if __name__ == '__main__':
    pass
