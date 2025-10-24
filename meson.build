project(
    'woodflow',
    'cpp',
    version: '0.0.1',
    license: 'MIT',
    meson_version: '>=1.9.0',
    default_options: [
        'cpp_std=c++23',
        'warning_level=3',
        'buildtype=debugoptimized',
    ],
)

# Base flags
base_args = [
    '-fcolor-diagnostics', # Colored error messages
    '-pedantic', # Strict standard compliance
    '-pedantic-errors', # Pedantic as errors
]

# Comprehensive warnings
warning_args = [
    '-Weverything', # All Clang warnings

    # Disable unnecessary warnings from -Weverything
    '-Wno-c++98-compat',
    '-Wno-c++98-compat-pedantic',
    '-Wno-c++11-compat',
    '-Wno-c++14-compat',
    '-Wno-c++17-compat',
    '-Wno-c++20-compat',
    '-Wno-padded', # Struct padding warnings
    '-Wno-weak-vtables', # Vtables in header-only
    '-Wno-global-constructors', # Global constructors
    '-Wno-exit-time-destructors', # Exit-time destructors
]

add_project_arguments(base_args + warning_args, language: 'cpp')

# Dependencies
mp_units_dep = dependency('mp-units', fallback: 'mp-units')

# Include directories
root_inc = include_directories('.')

# Subdirectories
subdir('woodflow')
subdir('tests')
