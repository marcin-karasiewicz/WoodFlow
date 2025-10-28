FROM alpine:latest

RUN apk add --no-cache \
    git \
    curl \
    python3 \
    py3-pip \
    bash

RUN pip3 install --no-cache-dir --break-system-packages pre-commit

# Install bazelisk
RUN curl -fsSL -o /usr/local/bin/bazelisk \
    https://github.com/bazelbuild/bazelisk/releases/latest/download/bazelisk-linux-amd64 \
    && chmod +x /usr/local/bin/bazelisk \
    && ln -sf /usr/local/bin/bazelisk /usr/local/bin/bazel


# Setup non-root user and GitHub Actions cache compatibility
RUN adduser -D ci \
    && mkdir -p /workspace \
    && chown ci:ci /workspace

USER ci
WORKDIR /workspace
