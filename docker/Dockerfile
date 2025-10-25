# Fedora 43 based CI image for WoodFlow project
FROM fedora:43

# Install build dependencies
RUN dnf install -y \
    clang \
    clang-tools-extra \
    ninja-build \
    python3 \
    python3-pip \
    git \
    && dnf clean all

RUN pip3 install --no-cache-dir \
    meson>=1.9.0 \
    pre-commit

ENV CC=clang \
    CXX=clang++

# Create non-root user
RUN useradd -m -u 1000 -s /bin/bash ci

WORKDIR /workspace

# Change ownership of workspace to ci user
RUN chown -R ci:ci /workspace

USER ci
