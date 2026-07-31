stack=[]
input_buffer=["id","+","id","*","id","$"]

print("Shift Reduce Parsing")

print("\nStack\t\tInput\t\tAction")

while input_buffer:

    token=input_buffer.pop(0)

    stack.append(token)

    print(stack,input_buffer,"Shift")

    if len(stack)>=1 and stack[-1]=="id":
        stack[-1]="E"
        print(stack,input_buffer,"Reduce E->id")

    if len(stack)>=3:

        if stack[-3:] == ["E","*","E"]:
            stack=stack[:-3]
            stack.append("E")
            print(stack,input_buffer,"Reduce E->E*E")

        elif stack[-3:] == ["E","+","E"]:
            stack=stack[:-3]
            stack.append("E")
            print(stack,input_buffer,"Reduce E->E+E")

if stack==["E","$"] or stack==["E"]:
    print("\nString Accepted")
