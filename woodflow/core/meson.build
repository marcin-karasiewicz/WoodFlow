# Core library (static by default)
core_lib = static_library(
  'woodflow_core',
  'core.cpp',
  include_directories: root_inc,
  install: true,
)

# Dependency for other parts of the project
core_dep = declare_dependency(
  link_with: core_lib,
  include_directories: root_inc,
)
