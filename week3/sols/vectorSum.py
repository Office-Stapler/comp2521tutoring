from typing import List, Tuple

def sumVec(l1: List[Tuple[float]], l2: List[Tuple[float]]) -> List[Tuple[float]]:
    # tuple[0] represents the index of where the non-zero values are
    # tuple[1] is the actual value
    res = []
    ptr1 = 0
    ptr2 = 0
    while ptr1 < len(l1) and ptr2 < len(l2):
        print(ptr1, ptr2)
        l_sum = 0
        index = None
        if l1[ptr1][0] == l2[ptr2][0]:
            l_sum = l1[ptr1][1] + l2[ptr2][1]
            index = l1[ptr1][0]
            ptr1 += 1
            ptr2 += 1
        elif l1[ptr1][0] < l2[ptr2][0]:
            l_sum = l1[ptr1][1]
            index = l1[ptr1][0]
            ptr1 += 1
        else:
            l_sum = l2[ptr2][1]
            index = l2[ptr2][0]
            ptr2 += 1
        res.append((index, l_sum))
    while ptr1 < len(l1):
        res.append(l1[ptr1])
    while ptr2 < len(l2):
        res.append(l2[ptr2])
    return res
    
if __name__ == '__main__':
    l1 = [(0,2.3), (4, -5.61), (7, 1.8)]
    l2 = [(1,3.14), (4, -1.7), (7, -1.8)]
    print(sumVec(l1, l2))
