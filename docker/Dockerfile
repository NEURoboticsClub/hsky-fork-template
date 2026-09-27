FROM alpine:3.23

WORKDIR /vexu

RUN apk --update add --no-cache \
    gcc-arm-none-eabi \
    git python3=~3.12 \
    py3-pip
RUN python3 -m pip install --break-system-packages --user pros-cli

ENV PATH="/root/.local/bin:${PATH}"
