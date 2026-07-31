expr="a=b+c*d"

print("Input :",expr)

print("\nLexical Analysis")

tokens=[]

i=0

while i<len(expr):

    ch=expr[i]

    if ch.isalpha():

        tokens.append(("ID",ch))

    elif ch in "+-*=/()":

        tokens.append(("OP",ch))

    i+=1

for t in tokens:
    print(t)

print("\nThree Address Code")

print("t1 = c * d")
print("t2 = b + t1")
print("a = t2")

print("\nCompilation Successful")
