# GitHub Copilot Instructions

## Project Overview
This is a modern C++23 project using Meson build system and Clang compiler.

## Code Style Guidelines

### General
- Use C++23 features and modern C++ idioms
- Follow RAII principles
- Prefer `auto` for type deduction when it improves readability
- Use `constexpr` and `consteval` when possible
- Prefer stack allocation over heap when appropriate

### File Organization
- Header files: `.hpp` extension
- Source files: `.cpp` extension
- One class per file when possible
- Header guards: use `#pragma once`

### Modern C++ Features to Use
- Use `std::span` instead of raw pointers + size
- Use `std::optional` for optional values
- Use `std::expected` for error handling (C++23)
- Use ranges and views from `<ranges>`
- Use `std::format` for string formatting (C++20)
- Use concepts for template constraints
- Use designated initializers
- Use `if constexpr` for compile-time branching

### Memory Management
- Prefer stack allocation
- Use smart pointers: `std::unique_ptr`, `std::shared_ptr`
- Never use raw `new`/`delete` directly
- Use RAII for resource management

### Error Handling
- Use `std::expected` for recoverable errors
- Use exceptions only for truly exceptional cases
- Document error conditions in comments
- Provide strong exception safety guarantee when possible

### Comments and Documentation
- Use `///` for documentation comments
- Document all public APIs
- Explain "why" not "what" in implementation comments
- Use TODO/FIXME/NOTE markers when appropriate

### Include Order
1. Corresponding header (for .cpp files)
2. C++ standard library headers
3. Third-party library headers
4. Project headers

Use blank lines between groups.

## Commit Message Style
Use Conventional Commits format:
- `feat(scope): description` - new feature
- `fix(scope): description` - bug fix
- `docs: description` - documentation
- `refactor(scope): description` - code refactoring
- `test(scope): description` - tests
- `style: description` - formatting
- `build: description` - build system changes

## Testing
- Write unit tests for all public APIs
- Use Catch2 or Google Test framework
- Test file naming: `test_<module>.cpp`
- Aim for high test coverage

## Build System
- Use Meson build system
- Compiler: Clang
- Standard: C++23
- Enable all warnings (`-Weverything` with selective disabling)

## Don't Do
- Don't use C-style casts (use `static_cast`, etc.)
- Don't use raw pointers for ownership
- Don't use `using namespace` in headers
- Don't ignore compiler warnings
- Don't use macros when templates/constexpr can be used
- Don't use `void*` unless absolutely necessary
