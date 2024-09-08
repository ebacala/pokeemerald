# Pokémon Emerald

This project is a fork of [pret/pokeemerald](https://github.com/pret/pokeemerald).

## Usage

Run `./build.sh` to build the game. It will create a Docker image of Debian along with all the necessary dependencies. It will also install agbcc in the created image.
It will then create a container from that image and mount the pokeemerald folder so that the build can be run inside the container.

## Changes

* French translation for pokemons, moves, abilities and natures
* Removed save overwrite confirmation for the same save file
* Streamlined IV inheritance in POKéMON breeding, allowing the egg to inherit the superior IV from either parent with an added bonus from 0 to 5
* Added a new dialog line to the Battle Frontier breeder for POKéMONS with perfect IVs
* Added new dialog lines to the Slateport effort ribbon lady for 
    * POKéMONS with EVs > 0
    * POKéMONS with maxed out EVs (255 out of 255)
* Increased MACHO BRACE EV multiplier from 2 to 4
* The Moon Stone can now be sold for 2100 POKéDOLLARS
* Battle Frontier shop now sells:
    * All the evolution stones
    * Deep Sea Tooth & Deep Sea Scale (10 000 POKéDOLLARS each)
    * All the TMs
    * PP ups
    * Ether (2 500 POKéDOLLARS) & Max Ether (5 000 POKéDOLLARS)
    * Elixir (5 000 POKéDOLLARS) & Max Elixir (10 000 POKéDOLLARS)
* TMs names are now displayed in shops (instead of "TMxx")
* Level 100 POKéMONS that fought are no longer taken into account for EXP. calculations
* Pressing the R button will check if items were picked up using the PICKUP ability
* Added self trade (in Littleroot Town)
* Added a zone on the left side of Littleroot Town where the player can find the 3 Hoenn starters (only accessible after defeating the POKéMON LEAGUE)
* Added the missing Hoenn POKéMON from Emerald:
    - MEDITITE
        - Mt. Pyre (exterior): 20% chance (lv. 27-29) | Decreased SHUPPET chance from 60% to 40%
        - Victory Road (1st basement floor): 5% chance (lv. 42) | Decreased GOLBAT chance from 35% to 30%
    - ARAKDO
        - Route 102 (land): 1% chance (lv. 3) | Decreased ZIGZAGOON chance from 15% to 14%
        - Route 102 (water): 4% chance (lv. 20-30) | Decreased MARILL chance from 99% to 95%
        - Route 111 (water): 4% chance (lv. 20-30) | Decreased MARILL chance from 99% to 95%
        - Route 114 (land): 1% chance (lv. 15) | Decreased SEVIPER chance from 9% to 4%
        - Route 114 (water): 1% chance (lv. 20-30) | Decreased MARILL chance from 99% to 95%
        - Route 117 (land): 4% chance (lv. 13) | Decreased ILLUMISE chance from 18% to 14%
        - Route 117 (water): 4% chance (lv. 20-30) | Decreased MARILL chance from 99% to 95%
        - Route 120 (land): 5% chance (lv. 25) | Decreased ODDISH chance from 25% to 20%
        - Route 120 (water): 1% chance (lv. 20-30) | Decreased MARILL chance from 99% to 95%
    - ROSELIA
        - Route 117 (land): 10% chance (lv. 13-14) | Decreased POOCHYENA chance from 30% to 20%
    - ZANGOOSE
        - Route 114 (land): 5% chance (lv. 15-17) | Decreased SEVIPER chance from 8% to 4%
    - LUNATONE
        - Meteor Falls (1st basement floor, 2nd room, land): 8% chance (lv. 35-39) | Decreased GOLBAT chance from 50% to 42%
        - Meteor Falls (1st basement floor, 2nd room, water): 4% chance (lv. 5-35) | Decreased SOLROCK chance from 10% to 6%
* Added some decor to Littleroot Town
* Pressing the A, L or START button will skip the copyright intro scene


## Original project README

This is a decompilation of Pokémon Emerald.

It builds the following ROM:

* [**pokeemerald.gba**](https://datomatic.no-intro.org/index.php?page=show_record&s=23&n=1961) `sha1: f3ae088181bf583e55daf962a92bb46f4f1d07b7`

To set up the repository, see [INSTALL.md](INSTALL.md).

For contacts and other pret projects, see [pret.github.io](https://pret.github.io/).
