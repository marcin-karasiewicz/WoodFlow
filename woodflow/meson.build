subdir('io')
subdir('core')

# Main executable
executable(
    'woodflow_bin',
    'woodflow.cpp',
    include_directories: root_inc,
    dependencies: [mp_units_dep, core_dep],
    install: true,
)
