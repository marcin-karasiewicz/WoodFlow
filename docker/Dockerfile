# Ubuntu 25.10 based CI image for WoodFlow project
FROM ubuntu:25.10

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
    build-essential \
    clang \
    clang-tidy \
    clang-format \
    ninja-build \
    pkg-config \
    python3 \
    python3-pip \
    git \
    && rm -rf /var/lib/apt/lists/*

RUN pip3 install --no-cache-dir --break-system-packages \
    meson>=1.9.0 \
    pre-commit

ENV CC=clang \
    CXX=clang++

WORKDIR /workspace
