vol=['a','e','i','o','u']
def counter(string):
    num=0
    for i in range(len(string)):
            if (i+1==len(string)):
                return num
            if string[i] not in vol and string[i+1] in vol:
               num+=1


testCase=int(input())
for i in range(testCase):
        num=int(input())
        data=input()
        print(counter(data[:num]))