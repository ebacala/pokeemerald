#!/bin/bash

docker compose up -d
docker exec -it pokemaker /bin/bash -c "cd /pokeemerald && make -j16"