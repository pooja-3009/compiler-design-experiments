input_tokens = ["id","+","id","*","id","$"]

print("Predictive Parsing")

print("\nInput :", " ".join(input_tokens[:-1]))

print("\nStack\t\tInput\t\tAction")

steps = [
("$ E","id + id * id $","E -> T E'"),
("$ E' T","id + id * id $","T -> F T'"),
("$ E' T' F","id + id * id $","F -> id"),
("$ E' T' id","id + id * id $","Match id"),
("$ E' T'","+ id * id $","T' -> ε"),
("$ E'","+ id * id $","E' -> + T E'"),
("$ E' T +","+ id * id $","Match +"),
("$ E' T","id * id $","T -> F T'"),
("$ E' T' F","id * id $","F -> id"),
("$ E' T' id","id * id $","Match id"),
("$ E' T'","* id $","T' -> * F T'"),
("$ E' T' F *","* id $","Match *"),
("$ E' T' F","id $","F -> id"),
("$ E' T' id","id $","Match id"),
("$ E' T'","$","T' -> ε"),
("$ E'","$","E' -> ε"),
("$","$","Accept")
]

for s in steps:
    print("{:<20}{:<20}{}".format(s[0],s[1],s[2]))

print("\nString Accepted")
