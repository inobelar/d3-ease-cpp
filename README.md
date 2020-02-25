# [d3-ease](https://github.com/d3/d3-ease) c++

## TODO

- [ ] elastic easing

----

- Implement js-like implicit values coercion (very minor/optional)
  - [ ] value from string (line `d3_ease::easePolyIn<double>{}(".9")`)
  - [ ] value from lambda (like `d3_ease::easeLinear({valueOf: [] { return 0.9; }})`)

- [ ] strict function aliases (currently used wrappers)

----

- [ ] possibly better/easier `poly` / `back` / `elastic` usage (more like funcs, not like callables)
  - [ ] reduce unnecessary explicit type specification:
    - `d3_ease::easePolyIn<double>::exponent(2.5)(0.0)` - current
    - `d3_ease::easePolyIn::exponent(2.5)(0.0)` - wanted (`exponent(2.5)` called with `double` type)
