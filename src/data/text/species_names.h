const u8 gSpeciesNames[][POKEMON_NAME_LENGTH + 1] = {
    [SPECIES_NONE] = _("??????????"),
    [SPECIES_BULBASAUR] = _("BULBIZARRE"),
    [SPECIES_IVYSAUR] = _("HERBIZARRE"),
    [SPECIES_VENUSAUR] = _("FLORIZARRE"),
    [SPECIES_CHARMANDER] = _("SALAMECHE"),
    [SPECIES_CHARMELEON] = _("REPTINCEL"),
    [SPECIES_CHARIZARD] = _("DRACAUFEU"),
    [SPECIES_SQUIRTLE] = _("CARAPUCE"),
    [SPECIES_WARTORTLE] = _("CARABAFFE"),
    [SPECIES_BLASTOISE] = _("TORTANK"),
    [SPECIES_CATERPIE] = _("CHENIPAN"),
    [SPECIES_METAPOD] = _("CRYSACIER"),
    [SPECIES_BUTTERFREE] = _("PAPILUSION"),
    [SPECIES_WEEDLE] = _("ASPICOT"),
    [SPECIES_KAKUNA] = _("COCONFORT"),
    [SPECIES_BEEDRILL] = _("DARDARGNAN"),
    [SPECIES_PIDGEY] = _("ROUCOOL"),
    [SPECIES_PIDGEOTTO] = _("ROUCOUPS"),
    [SPECIES_PIDGEOT] = _("ROUCARNAGE"),
    [SPECIES_RATTATA] = _("RATTATA"),
    [SPECIES_RATICATE] = _("RATTATAC"),
    [SPECIES_SPEAROW] = _("PIAFABEC"),
    [SPECIES_FEAROW] = _("RAPASDEPIC"),
    [SPECIES_EKANS] = _("ABO"),
    [SPECIES_ARBOK] = _("ARBOK"),
    [SPECIES_PIKACHU] = _("PIKACHU"),
    [SPECIES_RAICHU] = _("RAICHU"),
    [SPECIES_SANDSHREW] = _("SABELETTE"),
    [SPECIES_SANDSLASH] = _("SABLAIREAU"),
    [SPECIES_NIDORAN_F] = _("NIDORAN♀"),
    [SPECIES_NIDORINA] = _("NIDORINA"),
    [SPECIES_NIDOQUEEN] = _("NIDOQUEEN"),
    [SPECIES_NIDORAN_M] = _("NIDORAN♂"),
    [SPECIES_NIDORINO] = _("NIDORINO"),
    [SPECIES_NIDOKING] = _("NIDOKING"),
    [SPECIES_CLEFAIRY] = _("MELOFEE"),
    [SPECIES_CLEFABLE] = _("MELODELFE"),
    [SPECIES_VULPIX] = _("GOUPIX"),
    [SPECIES_NINETALES] = _("FEUNARD"),
    [SPECIES_JIGGLYPUFF] = _("RONDOUDOU"),
    [SPECIES_WIGGLYTUFF] = _("GRODOUDOU"),
    [SPECIES_ZUBAT] = _("NOSFERAPTI"),
    [SPECIES_GOLBAT] = _("NOSFERALTO"),
    [SPECIES_ODDISH] = _("MYSTHERBE"),
    [SPECIES_GLOOM] = _("ORTIDE"),
    [SPECIES_VILEPLUME] = _("RAFFLESIA"),
    [SPECIES_PARAS] = _("PARAS"),
    [SPECIES_PARASECT] = _("PARASECT"),
    [SPECIES_VENONAT] = _("MIMITOSS"),
    [SPECIES_VENOMOTH] = _("AEROMITE"),
    [SPECIES_DIGLETT] = _("TAUPIQUEUR"),
    [SPECIES_DUGTRIO] = _("TRIOPIKEUR"),
    [SPECIES_MEOWTH] = _("MIAOUSS"),
    [SPECIES_PERSIAN] = _("PERSIAN"),
    [SPECIES_PSYDUCK] = _("PSYKOKWAK"),
    [SPECIES_GOLDUCK] = _("AKWAKWAK"),
    [SPECIES_MANKEY] = _("FEROSINGE"),
    [SPECIES_PRIMEAPE] = _("COLOSSINGE"),
    [SPECIES_GROWLITHE] = _("CANINOS"),
    [SPECIES_ARCANINE] = _("ARCANIN"),
    [SPECIES_POLIWAG] = _("PTITARD"),
    [SPECIES_POLIWHIRL] = _("TETARTE"),
    [SPECIES_POLIWRATH] = _("TARTARD"),
    [SPECIES_ABRA] = _("ABRA"),
    [SPECIES_KADABRA] = _("KADABRA"),
    [SPECIES_ALAKAZAM] = _("ALAKAZAM"),
    [SPECIES_MACHOP] = _("MACHOC"),
    [SPECIES_MACHOKE] = _("MACHOPEUR"),
    [SPECIES_MACHAMP] = _("MACKOGNEUR"),
    [SPECIES_BELLSPROUT] = _("CHETIFLOR"),
    [SPECIES_WEEPINBELL] = _("BOUSTIFLOR"),
    [SPECIES_VICTREEBEL] = _("EMPIFLOR"),
    [SPECIES_TENTACOOL] = _("TENTACOOL"),
    [SPECIES_TENTACRUEL] = _("TENTACRUEL"),
    [SPECIES_GEODUDE] = _("RACAILLOU"),
    [SPECIES_GRAVELER] = _("GRAVALANCH"),
    [SPECIES_GOLEM] = _("GROLEM"),
    [SPECIES_PONYTA] = _("PONYTA"),
    [SPECIES_RAPIDASH] = _("GALOPA"),
    [SPECIES_SLOWPOKE] = _("RAMOLOSS"),
    [SPECIES_SLOWBRO] = _("FLAGADOSS"),
    [SPECIES_MAGNEMITE] = _("MAGNETI"),
    [SPECIES_MAGNETON] = _("MAGNETON"),
    [SPECIES_FARFETCHD] = _("CANARTICHO"),
    [SPECIES_DODUO] = _("DODUO"),
    [SPECIES_DODRIO] = _("DODRIO"),
    [SPECIES_SEEL] = _("OTARIA"),
    [SPECIES_DEWGONG] = _("LAMANTINE"),
    [SPECIES_GRIMER] = _("TADMORV"),
    [SPECIES_MUK] = _("GROTADMORV"),
    [SPECIES_SHELLDER] = _("KOKIYAS"),
    [SPECIES_CLOYSTER] = _("CRUSTABRI"),
    [SPECIES_GASTLY] = _("FANTOMINUS"),
    [SPECIES_HAUNTER] = _("SPECTRUM"),
    [SPECIES_GENGAR] = _("ECTOPLASMA"),
    [SPECIES_ONIX] = _("ONIX"),
    [SPECIES_DROWZEE] = _("SOPORIFIK"),
    [SPECIES_HYPNO] = _("HYPNOMADE"),
    [SPECIES_KRABBY] = _("KRABBY"),
    [SPECIES_KINGLER] = _("KRABBOSS"),
    [SPECIES_VOLTORB] = _("VOLTORBE"),
    [SPECIES_ELECTRODE] = _("ELECTRODE"),
    [SPECIES_EXEGGCUTE] = _("NOEUNOEUF"),
    [SPECIES_EXEGGUTOR] = _("NOADKOKO"),
    [SPECIES_CUBONE] = _("OSSELAIT"),
    [SPECIES_MAROWAK] = _("OSSATUEUR"),
    [SPECIES_HITMONLEE] = _("KICKLEE"),
    [SPECIES_HITMONCHAN] = _("TYGNON"),
    [SPECIES_LICKITUNG] = _("EXCELANGUE"),
    [SPECIES_KOFFING] = _("SMOGO"),
    [SPECIES_WEEZING] = _("SMOGOGO"),
    [SPECIES_RHYHORN] = _("RHINOCORNE"),
    [SPECIES_RHYDON] = _("RHINOFEROS"),
    [SPECIES_CHANSEY] = _("LEVEINARD"),
    [SPECIES_TANGELA] = _("SAQUEDENEU"),
    [SPECIES_KANGASKHAN] = _("KANGOUROX"),
    [SPECIES_HORSEA] = _("HYPOTREMPE"),
    [SPECIES_SEADRA] = _("HYPOCEAN"),
    [SPECIES_GOLDEEN] = _("POISSIRENE"),
    [SPECIES_SEAKING] = _("POISSOROY"),
    [SPECIES_STARYU] = _("STARI"),
    [SPECIES_STARMIE] = _("STAROSS"),
    [SPECIES_MR_MIME] = _("M. MIME"),
    [SPECIES_SCYTHER] = _("INSECATEUR"),
    [SPECIES_JYNX] = _("LIPPOUTOU"),
    [SPECIES_ELECTABUZZ] = _("ELECTEK"),
    [SPECIES_MAGMAR] = _("MAGMAR"),
    [SPECIES_PINSIR] = _("SCARABRUTE"),
    [SPECIES_TAUROS] = _("TAUROS"),
    [SPECIES_MAGIKARP] = _("MAGICARPE"),
    [SPECIES_GYARADOS] = _("LEVIATOR"),
    [SPECIES_LAPRAS] = _("LOKHLASS"),
    [SPECIES_DITTO] = _("METAMORPH"),
    [SPECIES_EEVEE] = _("EVOLI"),
    [SPECIES_VAPOREON] = _("AQUALI"),
    [SPECIES_JOLTEON] = _("VOLTALI"),
    [SPECIES_FLAREON] = _("PYROLI"),
    [SPECIES_PORYGON] = _("PORYGON"),
    [SPECIES_OMANYTE] = _("AMONITA"),
    [SPECIES_OMASTAR] = _("AMONISTAR"),
    [SPECIES_KABUTO] = _("KABUTO"),
    [SPECIES_KABUTOPS] = _("KABUTOPS"),
    [SPECIES_AERODACTYL] = _("PTERA"),
    [SPECIES_SNORLAX] = _("RONFLEX"),
    [SPECIES_ARTICUNO] = _("ARTIKODIN"),
    [SPECIES_ZAPDOS] = _("ELECTHOR"),
    [SPECIES_MOLTRES] = _("SULFURA"),
    [SPECIES_DRATINI] = _("MINIDRACO"),
    [SPECIES_DRAGONAIR] = _("DRACO"),
    [SPECIES_DRAGONITE] = _("DRACOLOSSE"),
    [SPECIES_MEWTWO] = _("MEWTWO"),
    [SPECIES_MEW] = _("MEW"),
    [SPECIES_CHIKORITA] = _("GERMIGNON"),
    [SPECIES_BAYLEEF] = _("MACRONIUM"),
    [SPECIES_MEGANIUM] = _("MEGANIUM"),
    [SPECIES_CYNDAQUIL] = _("HERICENDRE"),
    [SPECIES_QUILAVA] = _("FEURISSON"),
    [SPECIES_TYPHLOSION] = _("TYPHLOSION"),
    [SPECIES_TOTODILE] = _("KAIMINUS"),
    [SPECIES_CROCONAW] = _("CROCRODIL"),
    [SPECIES_FERALIGATR] = _("ALIGATUEUR"),
    [SPECIES_SENTRET] = _("FOUINETTE"),
    [SPECIES_FURRET] = _("FOUINAR"),
    [SPECIES_HOOTHOOT] = _("HOOTHOOT"),
    [SPECIES_NOCTOWL] = _("NOARFANG"),
    [SPECIES_LEDYBA] = _("COXY"),
    [SPECIES_LEDIAN] = _("COXYCLAQUE"),
    [SPECIES_SPINARAK] = _("MIMIGAL"),
    [SPECIES_ARIADOS] = _("MIGALOS"),
    [SPECIES_CROBAT] = _("NOSTENFER"),
    [SPECIES_CHINCHOU] = _("LOUPIO"),
    [SPECIES_LANTURN] = _("LANTURN"),
    [SPECIES_PICHU] = _("PICHU"),
    [SPECIES_CLEFFA] = _("MELO"),
    [SPECIES_IGGLYBUFF] = _("TOUDOUDOU"),
    [SPECIES_TOGEPI] = _("TOGEPI"),
    [SPECIES_TOGETIC] = _("TOGETIC"),
    [SPECIES_NATU] = _("NATU"),
    [SPECIES_XATU] = _("XATU"),
    [SPECIES_MAREEP] = _("WATTOUAT"),
    [SPECIES_FLAAFFY] = _("LAINERGIE"),
    [SPECIES_AMPHAROS] = _("PHARAMP"),
    [SPECIES_BELLOSSOM] = _("JOLIFLOR"),
    [SPECIES_MARILL] = _("MARILL"),
    [SPECIES_AZUMARILL] = _("AZUMARILL"),
    [SPECIES_SUDOWOODO] = _("SIMULARBRE"),
    [SPECIES_POLITOED] = _("TARPAUD"),
    [SPECIES_HOPPIP] = _("GRANIVOL"),
    [SPECIES_SKIPLOOM] = _("FLORAVOL"),
    [SPECIES_JUMPLUFF] = _("COTOVOL"),
    [SPECIES_AIPOM] = _("CAPUMAIN"),
    [SPECIES_SUNKERN] = _("TOURNEGRIN"),
    [SPECIES_SUNFLORA] = _("HELIATRONC"),
    [SPECIES_YANMA] = _("YANMA"),
    [SPECIES_WOOPER] = _("AXOLOTO"),
    [SPECIES_QUAGSIRE] = _("MARAISTE"),
    [SPECIES_ESPEON] = _("MENTALI"),
    [SPECIES_UMBREON] = _("NOCTALI"),
    [SPECIES_MURKROW] = _("CORNEBRE"),
    [SPECIES_SLOWKING] = _("ROIGADA"),
    [SPECIES_MISDREAVUS] = _("FEUFOREVE"),
    [SPECIES_UNOWN] = _("ZARBI"),
    [SPECIES_WOBBUFFET] = _("QULBUTOKE"),
    [SPECIES_GIRAFARIG] = _("GIRAFARIG"),
    [SPECIES_PINECO] = _("POMDEPIN"),
    [SPECIES_FORRETRESS] = _("FORETRESS"),
    [SPECIES_DUNSPARCE] = _("INSOLOURDO"),
    [SPECIES_GLIGAR] = _("SCORPLANE"),
    [SPECIES_STEELIX] = _("STEELIX"),
    [SPECIES_SNUBBULL] = _("SNUBBULL"),
    [SPECIES_GRANBULL] = _("GRANBULL"),
    [SPECIES_QWILFISH] = _("QWILFISH"),
    [SPECIES_SCIZOR] = _("CIZAYOX"),
    [SPECIES_SHUCKLE] = _("CARATROC"),
    [SPECIES_HERACROSS] = _("SCARHINO"),
    [SPECIES_SNEASEL] = _("FARFURET"),
    [SPECIES_TEDDIURSA] = _("TEDDIURSA"),
    [SPECIES_URSARING] = _("URSARING"),
    [SPECIES_SLUGMA] = _("LIMAGMA"),
    [SPECIES_MAGCARGO] = _("VOLCAROPOD"),
    [SPECIES_SWINUB] = _("MARCACRIN"),
    [SPECIES_PILOSWINE] = _("COCHIGNON"),
    [SPECIES_CORSOLA] = _("CORAYON"),
    [SPECIES_REMORAID] = _("REMORAID"),
    [SPECIES_OCTILLERY] = _("OCTILLERY"),
    [SPECIES_DELIBIRD] = _("CADOIZO"),
    [SPECIES_MANTINE] = _("DEMANTA"),
    [SPECIES_SKARMORY] = _("AIRMURE"),
    [SPECIES_HOUNDOUR] = _("MALOSSE"),
    [SPECIES_HOUNDOOM] = _("DEMOLISSE"),
    [SPECIES_KINGDRA] = _("HYPOROI"),
    [SPECIES_PHANPY] = _("PHANPY"),
    [SPECIES_DONPHAN] = _("DONPHAN"),
    [SPECIES_PORYGON2] = _("PORYGON2"),
    [SPECIES_STANTLER] = _("CERFROUSSE"),
    [SPECIES_SMEARGLE] = _("QUEULORIOR"),
    [SPECIES_TYROGUE] = _("DEBUGANT"),
    [SPECIES_HITMONTOP] = _("KAPOERA"),
    [SPECIES_SMOOCHUM] = _("LIPPOUTI"),
    [SPECIES_ELEKID] = _("ELEKID"),
    [SPECIES_MAGBY] = _("MAGBY"),
    [SPECIES_MILTANK] = _("ECREMEUH"),
    [SPECIES_BLISSEY] = _("LEUPHORIE"),
    [SPECIES_RAIKOU] = _("RAIKOU"),
    [SPECIES_ENTEI] = _("ENTEI"),
    [SPECIES_SUICUNE] = _("SUICUNE"),
    [SPECIES_LARVITAR] = _("EMBRYLEX"),
    [SPECIES_PUPITAR] = _("YMPHECT"),
    [SPECIES_TYRANITAR] = _("TYRANOCIF"),
    [SPECIES_LUGIA] = _("LUGIA"),
    [SPECIES_HO_OH] = _("HO-OH"),
    [SPECIES_CELEBI] = _("CELEBI"),
    [SPECIES_OLD_UNOWN_B] = _("?"),
    [SPECIES_OLD_UNOWN_C] = _("?"),
    [SPECIES_OLD_UNOWN_D] = _("?"),
    [SPECIES_OLD_UNOWN_E] = _("?"),
    [SPECIES_OLD_UNOWN_F] = _("?"),
    [SPECIES_OLD_UNOWN_G] = _("?"),
    [SPECIES_OLD_UNOWN_H] = _("?"),
    [SPECIES_OLD_UNOWN_I] = _("?"),
    [SPECIES_OLD_UNOWN_J] = _("?"),
    [SPECIES_OLD_UNOWN_K] = _("?"),
    [SPECIES_OLD_UNOWN_L] = _("?"),
    [SPECIES_OLD_UNOWN_M] = _("?"),
    [SPECIES_OLD_UNOWN_N] = _("?"),
    [SPECIES_OLD_UNOWN_O] = _("?"),
    [SPECIES_OLD_UNOWN_P] = _("?"),
    [SPECIES_OLD_UNOWN_Q] = _("?"),
    [SPECIES_OLD_UNOWN_R] = _("?"),
    [SPECIES_OLD_UNOWN_S] = _("?"),
    [SPECIES_OLD_UNOWN_T] = _("?"),
    [SPECIES_OLD_UNOWN_U] = _("?"),
    [SPECIES_OLD_UNOWN_V] = _("?"),
    [SPECIES_OLD_UNOWN_W] = _("?"),
    [SPECIES_OLD_UNOWN_X] = _("?"),
    [SPECIES_OLD_UNOWN_Y] = _("?"),
    [SPECIES_OLD_UNOWN_Z] = _("?"),
    [SPECIES_TREECKO] = _("ARCKO"),
    [SPECIES_GROVYLE] = _("MASSKO"),
    [SPECIES_SCEPTILE] = _("JUNGKO"),
    [SPECIES_TORCHIC] = _("POUSSIFEU"),
    [SPECIES_COMBUSKEN] = _("GALIFEU"),
    [SPECIES_BLAZIKEN] = _("BRASEGALI"),
    [SPECIES_MUDKIP] = _("GOBOU"),
    [SPECIES_MARSHTOMP] = _("FLOBIO"),
    [SPECIES_SWAMPERT] = _("LAGGRON"),
    [SPECIES_POOCHYENA] = _("MEDHYENA"),
    [SPECIES_MIGHTYENA] = _("GRAHYENA"),
    [SPECIES_ZIGZAGOON] = _("ZIGZATON"),
    [SPECIES_LINOONE] = _("LINEON"),
    [SPECIES_WURMPLE] = _("CHENIPOTTE"),
    [SPECIES_SILCOON] = _("ARMULYS"),
    [SPECIES_BEAUTIFLY] = _("CHARMILLON"),
    [SPECIES_CASCOON] = _("BLINDALYS"),
    [SPECIES_DUSTOX] = _("PAPINOX"),
    [SPECIES_LOTAD] = _("NENUPIOT"),
    [SPECIES_LOMBRE] = _("LOMBRE"),
    [SPECIES_LUDICOLO] = _("LUDICOLO"),
    [SPECIES_SEEDOT] = _("GRAINIPIOT"),
    [SPECIES_NUZLEAF] = _("PIFEUIL"),
    [SPECIES_SHIFTRY] = _("TENGALICE"),
    [SPECIES_NINCADA] = _("NINGALE"),
    [SPECIES_NINJASK] = _("NINJASK"),
    [SPECIES_SHEDINJA] = _("MUNJA"),
    [SPECIES_TAILLOW] = _("NIRONDELLE"),
    [SPECIES_SWELLOW] = _("HELEDELLE"),
    [SPECIES_SHROOMISH] = _("BALIGNON"),
    [SPECIES_BRELOOM] = _("CHAPIGNON"),
    [SPECIES_SPINDA] = _("SPINDA"),
    [SPECIES_WINGULL] = _("GOELISE"),
    [SPECIES_PELIPPER] = _("BEKIPAN"),
    [SPECIES_SURSKIT] = _("ARAKDO"),
    [SPECIES_MASQUERAIN] = _("MASKADRA"),
    [SPECIES_WAILMER] = _("WAILMER"),
    [SPECIES_WAILORD] = _("WAILORD"),
    [SPECIES_SKITTY] = _("SKITTY"),
    [SPECIES_DELCATTY] = _("DELCATTY"),
    [SPECIES_KECLEON] = _("KECLEON"),
    [SPECIES_BALTOY] = _("BALBUTO"),
    [SPECIES_CLAYDOL] = _("KAORINE"),
    [SPECIES_NOSEPASS] = _("TARINOR"),
    [SPECIES_TORKOAL] = _("CHARTOR"),
    [SPECIES_SABLEYE] = _("TENEFIX"),
    [SPECIES_BARBOACH] = _("BARLOCHE"),
    [SPECIES_WHISCASH] = _("BARBICHA"),
    [SPECIES_LUVDISC] = _("LOVDISC"),
    [SPECIES_CORPHISH] = _("ECRAPINCE"),
    [SPECIES_CRAWDAUNT] = _("COLHOMARD"),
    [SPECIES_FEEBAS] = _("BARPAU"),
    [SPECIES_MILOTIC] = _("MILOBELLUS"),
    [SPECIES_CARVANHA] = _("CARVANHA"),
    [SPECIES_SHARPEDO] = _("SHARPEDO"),
    [SPECIES_TRAPINCH] = _("KRAKNOIX"),
    [SPECIES_VIBRAVA] = _("VIBRANINF"),
    [SPECIES_FLYGON] = _("LIBEGON"),
    [SPECIES_MAKUHITA] = _("MAKUHITA"),
    [SPECIES_HARIYAMA] = _("HARIYAMA"),
    [SPECIES_ELECTRIKE] = _("DYNAVOLT"),
    [SPECIES_MANECTRIC] = _("ELECSPRINT"),
    [SPECIES_NUMEL] = _("CHAMALLOT"),
    [SPECIES_CAMERUPT] = _("CAMERUPT"),
    [SPECIES_SPHEAL] = _("OBALIE"),
    [SPECIES_SEALEO] = _("PHOGLEUR"),
    [SPECIES_WALREIN] = _("KAIMORSE"),
    [SPECIES_CACNEA] = _("CACNEA"),
    [SPECIES_CACTURNE] = _("CACTURNE"),
    [SPECIES_SNORUNT] = _("STALGAMIN"),
    [SPECIES_GLALIE] = _("ONIGLALI"),
    [SPECIES_LUNATONE] = _("SELEROC"),
    [SPECIES_SOLROCK] = _("SOLAROC"),
    [SPECIES_AZURILL] = _("AZURILL"),
    [SPECIES_SPOINK] = _("SPOINK"),
    [SPECIES_GRUMPIG] = _("GRORET"),
    [SPECIES_PLUSLE] = _("POSIPI"),
    [SPECIES_MINUN] = _("NEGAPI"),
    [SPECIES_MAWILE] = _("MYSDIBULE"),
    [SPECIES_MEDITITE] = _("MEDITIKKA"),
    [SPECIES_MEDICHAM] = _("CHARMINA"),
    [SPECIES_SWABLU] = _("TYLTON"),
    [SPECIES_ALTARIA] = _("ALTARIA"),
    [SPECIES_WYNAUT] = _("OKEOKE"),
    [SPECIES_DUSKULL] = _("SKELENOX"),
    [SPECIES_DUSCLOPS] = _("TERACLOPE"),
    [SPECIES_ROSELIA] = _("ROSELIA"),
    [SPECIES_SLAKOTH] = _("PARECOOL"),
    [SPECIES_VIGOROTH] = _("VIGOROTH"),
    [SPECIES_SLAKING] = _("MONAFLEMIT"),
    [SPECIES_GULPIN] = _("GLOUPTI"),
    [SPECIES_SWALOT] = _("AVALTOUT"),
    [SPECIES_TROPIUS] = _("TROPIUS"),
    [SPECIES_WHISMUR] = _("CHUCHMUR"),
    [SPECIES_LOUDRED] = _("RAMBOUM"),
    [SPECIES_EXPLOUD] = _("BROUHABAM"),
    [SPECIES_CLAMPERL] = _("COQUIPERL"),
    [SPECIES_HUNTAIL] = _("SERPANG"),
    [SPECIES_GOREBYSS] = _("ROSABYSS"),
    [SPECIES_ABSOL] = _("ABSOL"),
    [SPECIES_SHUPPET] = _("POLICHOMBR"),
    [SPECIES_BANETTE] = _("BRANETTE"),
    [SPECIES_SEVIPER] = _("SEVIPER"),
    [SPECIES_ZANGOOSE] = _("MANGRIFF"),
    [SPECIES_RELICANTH] = _("RELICANTH"),
    [SPECIES_ARON] = _("GALEKID"),
    [SPECIES_LAIRON] = _("GALEGON"),
    [SPECIES_AGGRON] = _("GALEKING"),
    [SPECIES_CASTFORM] = _("MORPHEO"),
    [SPECIES_VOLBEAT] = _("MUCIOLE"),
    [SPECIES_ILLUMISE] = _("LUMIVOLE"),
    [SPECIES_LILEEP] = _("LILIA"),
    [SPECIES_CRADILY] = _("VACILYS"),
    [SPECIES_ANORITH] = _("ANORITH"),
    [SPECIES_ARMALDO] = _("ARMALDO"),
    [SPECIES_RALTS] = _("TARSAL"),
    [SPECIES_KIRLIA] = _("KIRLIA"),
    [SPECIES_GARDEVOIR] = _("GARDEVOIR"),
    [SPECIES_BAGON] = _("DRABY"),
    [SPECIES_SHELGON] = _("DRACKHAUS"),
    [SPECIES_SALAMENCE] = _("DRATTAK"),
    [SPECIES_BELDUM] = _("TERHAL"),
    [SPECIES_METANG] = _("METANG"),
    [SPECIES_METAGROSS] = _("METALOSSE"),
    [SPECIES_REGIROCK] = _("REGIROCK"),
    [SPECIES_REGICE] = _("REGICE"),
    [SPECIES_REGISTEEL] = _("REGISTEEL"),
    [SPECIES_KYOGRE] = _("KYOGRE"),
    [SPECIES_GROUDON] = _("GROUDON"),
    [SPECIES_RAYQUAZA] = _("RAYQUAZA"),
    [SPECIES_LATIAS] = _("LATIAS"),
    [SPECIES_LATIOS] = _("LATIOS"),
    [SPECIES_JIRACHI] = _("JIRACHI"),
    [SPECIES_DEOXYS] = _("DEOXYS"),
    [SPECIES_CHIMECHO] = _("EOKO"),
};
