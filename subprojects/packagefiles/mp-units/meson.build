project('mp-units', 'cpp', version: '2.3.0', default_options: ['cpp_std=c++20'])

# mp-units is header-only, we just need to expose include directories
mp_units_inc = include_directories('src/core/include', 'src/systems/include')

# Wrap with warning suppression for third-party code
mp_units_dep = declare_dependency(
    include_directories: mp_units_inc,
    version: meson.project_version(),
    compile_args: ['-w'],  # Suppress all warnings from mp-units headers
)

# Alias for compatibility
mp_units = mp_units_dep
