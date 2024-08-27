FROM debian:12-slim

RUN apt update && apt install -y build-essential binutils-arm-none-eabi git libpng-dev gdebi-core wget
RUN wget https://apt.devkitpro.org/install-devkitpro-pacman && chmod +x ./install-devkitpro-pacman && echo "Y" | ./install-devkitpro-pacman 
RUN git clone https://github.com/pret/agbcc

WORKDIR /agbcc

RUN chmod +x build.sh install.sh
RUN ./build.sh
RUN ./install.sh /pokeemerald