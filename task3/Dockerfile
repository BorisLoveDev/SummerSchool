FROM alpine:latest

LABEL maintainer="Boris Kharchenko <har.bv@mail.ru>"
LABEL description="This Dockerfile for task 3"

RUN apk update && \
apk upgrade && \ 
apk add --update python3

COPY ./README.txt /home/Readme_here/README.txt
