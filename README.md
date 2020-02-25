# [d3-ease](https://github.com/d3/d3-ease) c++

## TODO

- **minor/optional**: Implement js-like implicit values coercion:
  - [ ] value from string (line `d3_ease::easePolyIn<double>{}(".9")`)
  - [ ] value from lambda (like `d3_ease::easeLinear({valueOf: [] { return 0.9; }})`)

- [ ] strict function aliases (currently used wrappers)

----

- [ ] Add descriptive comments from [DefinitelyTyped/d3-ease](https://github.com/DefinitelyTyped/DefinitelyTyped/blob/master/types/d3-ease/index.d.ts)

- [ ] possibly better/easier `poly` / `back` / `elastic` usage (more like funcs, not like callables)
  - [ ] reduce unnecessary explicit type specification:
    - `d3_ease::easePolyIn<double>::exponent(2.5)(0.0)` - current
    - `d3_ease::easePolyIn::exponent(2.5)(0.0)` - wanted (`exponent(2.5)` called with `double` type)

----

## Usage

In your `*.pro` file add:
```qmake
include(<path/to>/d3-ease-cpp/src/d3_ease.pri)
````
