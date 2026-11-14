From docker.io/library/debian:stable-slim

run apt-get update && apt-get install -y --no-install-recommends build-essential

WORKDIR /app
COPY project/ ./

RUN make
CMD ["make", "test"]
