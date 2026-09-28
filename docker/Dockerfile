FROM alpine:3.23

WORKDIR /arm-none-eabi-toolchain

RUN wget -O - "https://gitlab.arm.com/api/v4/projects/tooling%2Fgnu-toolchains-for-arm/packages/generic/gnu-toolchain/14.3.rel1/arm-gnu-toolchain-14.3.rel1-x86_64-arm-none-eabi.tar.xz" \
    | tar Jxf - -C . --strip-components=1

WORKDIR /vexu

RUN apk --update add --no-cache \
    gcompat \
    git \
    make \
    pipx
RUN pipx install --global \
    pros-cli \
    --preinstall setuptools==80

ENV PATH="/arm-none-eabi-toolchain/bin:/root/.local/bin:${PATH}"

CMD ["/bin/sh"]
