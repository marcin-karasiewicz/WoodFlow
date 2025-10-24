# IO library (static by default)
io_lib = static_library(
  'woodflow_io',
  'io.cpp',
  include_directories: root_inc,
  install: true,
)

# Dependency for other parts of the project
io_dep = declare_dependency(
  link_with: io_lib,
  include_directories: root_inc,
)
