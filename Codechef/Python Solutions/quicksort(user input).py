def quicksort(arr):
    if len(arr)<=1:
        return arr
    pivot=arr[len(arr)//2]
    left=[x for x in arr if x<pivot]
    right=[x for x in arr if x>pivot]
    middle=[x for x in arr if x==pivot]
    return quicksort(left)+middle+quicksort(right)

list1=[]
inp1=int(input("Enter the limit"))
for i in range(0,inp1):
    items=int(input(f"Enter the number for position "+str(i+1)+":-"))
    list1.append(items)
print("The original list:-",list1)
print("The sorted list is:-",quicksort(list1))