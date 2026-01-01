# Study Guide: Mathematics - Calculus

## Subject: Mathematics

### Topic: Differential Calculus

---

## Key Concepts

### Concept 1: Derivatives
**Definition**: The derivative of a function measures the rate at which the function's value changes with respect to changes in its input value.

**Key Points**:
- The derivative represents the slope of the tangent line at any point
- Notation: f'(x), dy/dx, or df/dx
- Geometric interpretation: instantaneous rate of change

**Examples**:
```
f(x) = x²
f'(x) = 2x

f(x) = sin(x)
f'(x) = cos(x)
```

### Concept 2: Chain Rule
**Definition**: A method for finding the derivative of composite functions.

**Key Points**:
- If h(x) = f(g(x)), then h'(x) = f'(g(x)) · g'(x)
- Essential for complex functions
- Work from outside to inside

**Examples**:
```
h(x) = (x² + 1)³
Let u = x² + 1, then h = u³
h'(x) = 3u² · 2x = 3(x² + 1)² · 2x = 6x(x² + 1)²
```

---

## Important Formulas/Rules

| Formula/Rule | Description | When to Use |
|--------------|-------------|-------------|
| Power Rule: d/dx(xⁿ) = nxⁿ⁻¹ | Basic differentiation | Simple polynomial terms |
| Product Rule: (uv)' = u'v + uv' | Derivative of products | When multiplying functions |
| Quotient Rule: (u/v)' = (u'v - uv')/v² | Derivative of quotients | When dividing functions |
| Chain Rule: (f∘g)' = f'(g(x))·g'(x) | Composite functions | Nested functions |

---

## Common Mistakes to Avoid

1. **Forgetting the chain rule** - Always check if you have a composite function before differentiating
2. **Product rule confusion** - Don't just multiply the derivatives; use (uv)' = u'v + uv'
3. **Sign errors in quotient rule** - Remember it's (u'v - uv'), not (u'v + uv')

---

## Practice Problems

### Problem 1
**Question**: Find the derivative of f(x) = 3x⁴ - 2x³ + 5x - 7

**Solution**:
f'(x) = 12x³ - 6x² + 5

**Key Takeaway**: Apply power rule to each term separately

### Problem 2
**Question**: Find the derivative of f(x) = (2x + 1)(x² - 3)

**Solution**:
Using product rule: u = 2x + 1, v = x² - 3
u' = 2, v' = 2x
f'(x) = 2(x² - 3) + (2x + 1)(2x)
f'(x) = 2x² - 6 + 4x² + 2x = 6x² + 2x - 6

**Key Takeaway**: Use product rule when functions are multiplied

---

## Summary

- Derivatives measure instantaneous rate of change
- Master the basic rules: power, product, quotient, and chain
- Always check for composite functions (chain rule)
- Practice identifying which rule to apply

---

## Additional Resources

- Khan Academy: Calculus 1
- MIT OpenCourseWare: Single Variable Calculus
- Practice problems: Stewart Calculus textbook
