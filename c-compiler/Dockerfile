# Use Ubuntu as the base image
FROM ubuntu:latest


RUN apt-get update && \
    apt-get install -y build-essential python3


WORKDIR /app


COPY . .


COPY entrypoint.sh /usr/local/bin/entrypoint.sh
RUN chmod +x /usr/local/bin/entrypoint.sh

ENTRYPOINT ["/usr/local/bin/entrypoint.sh"]
