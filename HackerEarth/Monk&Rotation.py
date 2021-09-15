def rightArrayRotation(num_array, shift):
    for i in range(0, shift):
        temp = num_array[len(num_array)-1]
        for j in range(len(num_array)-1, 0, -1):
            num_array[j] = num_array[j-1]
        num_array[0]= temp
    return num_array

def printArray(array):
    for i in range(0, len(array)):
        print(array[i], end=' ')

testcases=int(input())
i=0
while(i<testcases):
    i=i+1
    secondLiner=input().split()
    listsize=int(secondLiner[0])
    noofrotation=int(secondLiner[1])
    list1=list(map(int,input().split()))
    if len(list1)==listsize:
        rotated_array=rightArrayRotation(list1,noofrotation)
        printArray(rotated_array)
    else:pass



