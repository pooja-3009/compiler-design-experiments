# Question 1

## a) Explain how Syntax-Directed Definitions help in syntax tree construction.

Syntax-Directed Definitions (SDDs) associate semantic rules and attributes with grammar productions. They help the compiler connect the syntactic structure of a program with its meaning.

During parsing, attributes are calculated using semantic rules. These attributes can be used to construct syntax tree nodes and connect them according to the structure of the expression.

For example, consider the expression:

a + b

Its syntax tree can be represented as:

      +
     / \
    a   b

Here, the + operator becomes the parent node, while a and b become its child nodes.

SDDs help in syntax tree construction by:

1. Associating semantic rules with grammar productions.
2. Creating nodes for operators and operands.
3. Connecting the nodes to form the syntax tree.
4. Computing attributes required during translation.
5. Supporting semantic analysis before code generation.

For example, for the production:

E → E + T

a semantic rule can create a + node and attach the syntax trees of E and T as its children.

Therefore, Syntax-Directed Definitions provide a systematic method for constructing syntax trees and performing semantic processing during compilation.

---

## b) Compare S-attributed and L-attributed definitions in this scenario.

| Feature | S-attributed Definition | L-attributed Definition |
|---|---|---|
| Attributes | Uses only synthesized attributes | Uses synthesized and restricted inherited attributes |
| Information flow | From children to parent | From parent or left sibling to child, and upward through synthesized attributes |
| Evaluation | Suitable for bottom-up evaluation | Suitable for left-to-right evaluation |
| Parsing | Commonly associated with LR parsing | Commonly associated with top-down parsing |
| Complexity | Simpler | More flexible |
| Main use | Expression evaluation and syntax tree construction | Function parameters, declarations and scope-related information |

In this case, S-attributed definitions are suitable initially because arithmetic expressions can be evaluated using synthesized attributes. The information is calculated from child nodes and passed upward.

However, when the language needs to handle function parameters and variable scopes, inherited attributes become necessary. Therefore, L-attributed definitions are more suitable for passing contextual information from a parent or left sibling to a child.

Thus, S-attributed definitions are simpler and work well with bottom-up evaluation, whereas L-attributed definitions provide greater flexibility when inherited information is required.

## Conclusion

Syntax-Directed Definitions help the compiler construct syntax trees and perform semantic analysis. S-attributed definitions are useful for simple bottom-up evaluation, while L-attributed definitions are useful when inherited information is required for features such as function parameters and variable scopes.
