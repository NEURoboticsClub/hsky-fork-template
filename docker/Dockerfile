FROM alpine:3.23

WORKDIR /vexu

RUN apk --update add --no-cache \
    g++-arm-none-eabi \
    gcc-arm-none-eabi \
    git \
    make \
    pipx
RUN pipx install --global \
    pros-cli \
    --preinstall setuptools==80

ENV PATH="/arm-none-eabi-toolchain/bin:/root/.local/bin:${PATH}"

CMD ["/bin/sh"]
