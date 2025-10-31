load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "mp-units",
    hdrs = glob([
        "src/core/include/**/*.h",
        "src/systems/include/**/*.h",
    ]),
    includes = [
        "src/core/include",
        "src/systems/include",
    ],
    visibility = ["//visibility:public"],
)
