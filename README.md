# WoodFlow

Modern C++23 project using Bazel build system.

## Build

```bash
# Build all targets
bazel build //...

# Run the main binary
bazel run //woodflow:woodflow
```

## Tools

- **Build System**: Bazel 8.4.2+
- **Compiler**: Clang 21 (LLVM toolchain)
- **Standard**: C++23
- **Formatters**: clang-format, buildifier, yamlfmt
- **Linters**: clang-tidy

## Linting

Comprehensive linting with `.clang-tidy` (all rules enabled):

```bash
# Run lint tests (standard Bazel)
bazel test --config=lint //...

# Or with Aspect CLI (if installed): bazel lint //...
```

**Configuration:**
- `.clang-tidy` - Comprehensive checks (all enabled rules)
- `.aspect/cli/config.yaml` - Aspect CLI configuration (optional)

**Auto-generated tests:**
- `<target>_lint_test` - clang-tidy validation (tag: `lint`)
- `<target>_format_test` - formatting validation (tag: `format`)
