t=int(input())+1
def binary_using_ab(n):
    
    result = ''
    while n>0:
        n-=1
        char= letters[(n%len(letters))]
        n=int(n/len(letters))
        result=char+result
    return result

while t>0:
    t-=1
    letters=input()
    n=int(input())
    m=binary_using_ab(n)
    print (m)


    
           


  
