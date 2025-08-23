FROM ubuntu@sha256:80dd3c3b9c6cecb9f1667e9290b3bc61b78c2678c02cbdae5f0fea92cc6734ab AS app

RUN mkdir -p /challenge
WORKDIR /challenge
COPY chall .
COPY flag.txt .

RUN chmod 555 chall

FROM pwn.red/jail

COPY --from=app / /srv
RUN mkdir -p /srv/app
COPY ./run /srv/app/run

RUN chmod 555 /srv/app/run

RUN chmod 777 /srv/challenge/flag.txt

ENV JAIL_PIDS=40 JAIL_MEM=10M JAIL_TIME=120
