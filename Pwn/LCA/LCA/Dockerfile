FROM ubuntu:20.04
ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get update && apt-get install -y python3.9 python3-pip
WORKDIR /pwn
COPY ./app .
RUN pip3 install flask gunicorn 
CMD gunicorn --bind 0.0.0.0:8888 app:app