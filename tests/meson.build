# Google Test dependency
gtest_dep = dependency('gtest', fallback: ['gtest', 'gtest_main_dep'])


# Example test
test_example = executable(
    'test_example',
    ['test_example.cpp'],
    dependencies: [gtest_dep],
    include_directories: root_inc,
)

test('example test', test_example)

# Additional core tests
test_core = executable(
    'test_core',
    ['test_core.cpp'],
    dependencies: [gtest_dep],
    include_directories: root_inc,
)

test('core test', test_core)
