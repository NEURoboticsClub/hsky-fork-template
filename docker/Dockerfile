FROM alpine:3.23

WORKDIR /arm-none-eabi-toolchain

RUN wget -O - "https://gitlab.arm.com/api/v4/projects/tooling%2Fgnu-toolchains-for-arm/packages/generic/gnu-toolchain/14.3.rel1/arm-gnu-toolchain-14.3.rel1-x86_64-arm-none-eabi.tar.xz" \
    | tar Jxf - -C . --strip-components=1

WORKDIR /vexu

RUN apk --update add --no-cache \
    clang21 \
    clang21-extra-tools \
    gcompat \
    git \
    libc6-compat \
    make \
    pipx \
    uv
RUN pipx install --global \
    pros-cli \
    --preinstall setuptools==80

ENV PATH="/opt/pipx/venvs/pros-cli/bin:/arm-none-eabi-toolchain/bin:/root/.local/bin:${PATH}"
ENV PS1="(DOCKER) \[\033[01;31m\]\u@\h\[\033[00m\]:\[\033[01;35m\]\w\[\033[00m\]\$ "

CMD ["/bin/sh"]
