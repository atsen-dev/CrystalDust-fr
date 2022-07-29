const struct PokedexEntry gPokedexEntries[] =
{
    [NATIONAL_DEX_NONE] =
    {
        .categoryName = _("INCONNU"),
        .height = 0,
        .weight = 0,
        .description = gDummyPokedexText,
		.pokedexShowEntry = gDummyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BULBASAUR] =
    {
        .categoryName = _("GRAINE"),
        .height = 7,
        .weight = 69,
        .description = gBulbasaurPokedexText,
		.pokedexShowEntry = gBulbasaurPokedexShowText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_IVYSAUR] =
    {
        .categoryName = _("GRAINE"),
        .height = 10,
        .weight = 130,
        .description = gIvysaurPokedexText,
		.pokedexShowEntry = gIvysaurPokedexShowText,
        .pokemonScale = 335,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VENUSAUR] =
    {
        .categoryName = _("GRAINE"),
        .height = 20,
        .weight = 1000,
        .description = gVenusaurPokedexText,
		.pokedexShowEntry = gVenusaurPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_CHARMANDER] =
    {
        .categoryName = _("LEZARD"),
        .height = 6,
        .weight = 85,
        .description = gCharmanderPokedexText,
		.pokedexShowEntry = gCharmanderPokedexShowText,
        .pokemonScale = 444,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHARMELEON] =
    {
        .categoryName = _("FLAMME"),
        .height = 11,
        .weight = 190,
        .description = gCharmeleonPokedexText,
		.pokedexShowEntry = gCharmeleonPokedexShowText,
        .pokemonScale = 302,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHARIZARD] =
    {
        .categoryName = _("FLAMME"),
        .height = 17,
        .weight = 905,
        .description = gCharizardPokedexText,
		.pokedexShowEntry = gCharizardPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_SQUIRTLE] =
    {
        .categoryName = _("MINITORTUE"),
        .height = 5,
        .weight = 90,
        .description = gSquirtlePokedexText,
		.pokedexShowEntry = gSquirtlePokedexShowText,
        .pokemonScale = 412,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WARTORTLE] =
    {
        .categoryName = _("TORTUE"),
        .height = 10,
        .weight = 225,
        .description = gWartortlePokedexText,
		.pokedexShowEntry = gWartortlePokedexShowText,
        .pokemonScale = 332,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLASTOISE] =
    {
        .categoryName = _("CARAPACE"),
        .height = 16,
        .weight = 855,
        .description = gBlastoisePokedexText,
		.pokedexShowEntry = gBlastoisePokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CATERPIE] =
    {
        .categoryName = _("VER"),
        .height = 3,
        .weight = 29,
        .description = gCaterpiePokedexText,
		.pokedexShowEntry = gCaterpiePokedexShowText,
        .pokemonScale = 549,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_METAPOD] =
    {
        .categoryName = _("COCON"),
        .height = 7,
        .weight = 99,
        .description = gMetapodPokedexText,
		.pokedexShowEntry = gMetapodPokedexShowText,
        .pokemonScale = 350,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BUTTERFREE] =
    {
        .categoryName = _("PAPILLON"),
        .height = 11,
        .weight = 320,
        .description = gButterfreePokedexText,
		.pokedexShowEntry = gButterfreePokedexShowText,
        .pokemonScale = 312,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WEEDLE] =
    {
        .categoryName = _("INSECTOPIC"),
        .height = 3,
        .weight = 32,
        .description = gWeedlePokedexText,
		.pokedexShowEntry = gWeedlePokedexShowText,
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KAKUNA] =
    {
        .categoryName = _("COCON"),
        .height = 6,
        .weight = 100,
        .description = gKakunaPokedexText,
		.pokedexShowEntry = gKakunaPokedexShowText,
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEEDRILL] =
    {
        .categoryName = _("GUEPOISON"),
        .height = 10,
        .weight = 295,
        .description = gBeedrillPokedexText,
		.pokedexShowEntry = gBeedrillPokedexShowText,
        .pokemonScale = 366,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIDGEY] =
    {
        .categoryName = _("MINOISEAU"),
        .height = 3,
        .weight = 18,
        .description = gPidgeyPokedexText,
		.pokedexShowEntry = gPidgeyPokedexShowText,
        .pokemonScale = 508,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIDGEOTTO] =
    {
        .categoryName = _("OISEAU"),
        .height = 11,
        .weight = 300,
        .description = gPidgeottoPokedexText,
		.pokedexShowEntry = gPidgeottoPokedexShowText,
        .pokemonScale = 331,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIDGEOT] =
    {
        .categoryName = _("OISEAU"),
        .height = 15,
        .weight = 395,
        .description = gPidgeotPokedexText,
		.pokedexShowEntry = gPidgeotPokedexShowText,
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RATTATA] =
    {
        .categoryName = _("SOURIS"),
        .height = 3,
        .weight = 35,
        .description = gRattataPokedexText,
		.pokedexShowEntry = gRattataPokedexShowText,
        .pokemonScale = 481,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RATICATE] =
    {
        .categoryName = _("SOURIS"),
        .height = 7,
        .weight = 185,
        .description = gRaticatePokedexText,
		.pokedexShowEntry = gRaticatePokedexShowText,
        .pokemonScale = 459,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPEAROW] =
    {
        .categoryName = _("MINOISEAU"),
        .height = 3,
        .weight = 20,
        .description = gSpearowPokedexText,
		.pokedexShowEntry = gSpearowPokedexShowText,
        .pokemonScale = 571,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FEAROW] =
    {
        .categoryName = _("BEC-OISEAU"),
        .height = 12,
        .weight = 380,
        .description = gFearowPokedexText,
		.pokedexShowEntry = gFearowPokedexShowText,
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EKANS] =
    {
        .categoryName = _("SERPENT"),
        .height = 20,
        .weight = 69,
        .description = gEkansPokedexText,
		.pokedexShowEntry = gEkansPokedexShowText,
        .pokemonScale = 298,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARBOK] =
    {
        .categoryName = _("COBRA"),
        .height = 35,
        .weight = 650,
        .description = gArbokPokedexText,
		.pokedexShowEntry = gArbokPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PIKACHU] =
    {
        .categoryName = _("SOURIS"),
        .height = 4,
        .weight = 60,
        .description = gPikachuPokedexText,
		.pokedexShowEntry = gPikachuPokedexShowText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RAICHU] =
    {
        .categoryName = _("SOURIS"),
        .height = 8,
        .weight = 300,
        .description = gRaichuPokedexText,
		.pokedexShowEntry = gRaichuPokedexShowText,
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SANDSHREW] =
    {
        .categoryName = _("SOURIS"),
        .height = 6,
        .weight = 120,
        .description = gSandshrewPokedexText,
		.pokedexShowEntry = gSandshrewPokedexShowText,
        .pokemonScale = 365,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SANDSLASH] =
    {
        .categoryName = _("SOURIS"),
        .height = 10,
        .weight = 295,
        .description = gSandslashPokedexText,
		.pokedexShowEntry = gSandslashPokedexShowText,
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDORAN_F] =
    {
        .categoryName = _("VENEPIC"),
        .height = 4,
        .weight = 70,
        .description = gNidoranFPokedexText,
		.pokedexShowEntry = gNidoranFPokedexShowText,
        .pokemonScale = 488,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDORINA] =
    {
        .categoryName = _("VENEPIC"),
        .height = 8,
        .weight = 200,
        .description = gNidorinaPokedexText,
		.pokedexShowEntry = gNidorinaPokedexShowText,
        .pokemonScale = 381,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDOQUEEN] =
    {
        .categoryName = _("PERCEUR"),
        .height = 13,
        .weight = 600,
        .description = gNidoqueenPokedexText,
		.pokedexShowEntry = gNidoqueenPokedexShowText,
        .pokemonScale = 293,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDORAN_M] =
    {
        .categoryName = _("VENEPIC"),
        .height = 5,
        .weight = 90,
        .description = gNidoranMPokedexText,
		.pokedexShowEntry = gNidoranMPokedexShowText,
        .pokemonScale = 511,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDORINO] =
    {
        .categoryName = _("VENEPIC"),
        .height = 9,
        .weight = 195,
        .description = gNidorinoPokedexText,
		.pokedexShowEntry = gNidorinoPokedexShowText,
        .pokemonScale = 408,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDOKING] =
    {
        .categoryName = _("PERCEUR"),
        .height = 14,
        .weight = 620,
        .description = gNidokingPokedexText,
		.pokedexShowEntry = gNidokingPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLEFAIRY] =
    {
        .categoryName = _("FEE"),
        .height = 6,
        .weight = 75,
        .description = gClefairyPokedexText,
		.pokedexShowEntry = gClefairyPokedexShowText,
        .pokemonScale = 441,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLEFABLE] =
    {
        .categoryName = _("FEE"),
        .height = 13,
        .weight = 400,
        .description = gClefablePokedexText,
		.pokedexShowEntry = gClefablePokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VULPIX] =
    {
        .categoryName = _("RENARD"),
        .height = 6,
        .weight = 99,
        .description = gVulpixPokedexText,
		.pokedexShowEntry = gVulpixPokedexShowText,
        .pokemonScale = 542,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NINETALES] =
    {
        .categoryName = _("RENARD"),
        .height = 11,
        .weight = 199,
        .description = gNinetalesPokedexText,
		.pokedexShowEntry = gNinetalesPokedexShowText,
        .pokemonScale = 339,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JIGGLYPUFF] =
    {
        .categoryName = _("BOUBOULE"),
        .height = 5,
        .weight = 55,
        .description = gJigglypuffPokedexText,
		.pokedexShowEntry = gJigglypuffPokedexShowText,
        .pokemonScale = 433,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WIGGLYTUFF] =
    {
        .categoryName = _("BOUBOULE"),
        .height = 10,
        .weight = 120,
        .description = gWigglytuffPokedexText,
		.pokedexShowEntry = gWigglytuffPokedexShowText,
        .pokemonScale = 328,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZUBAT] =
    {
        .categoryName = _("CHOVSOURIS"),
        .height = 8,
        .weight = 75,
        .description = gZubatPokedexText,
		.pokedexShowEntry = gZubatPokedexShowText,
        .pokemonScale = 362,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLBAT] =
    {
        .categoryName = _("CHOVSOURIS"),
        .height = 16,
        .weight = 550,
        .description = gGolbatPokedexText,
		.pokedexShowEntry = gGolbatPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ODDISH] =
    {
        .categoryName = _("RACINE"),
        .height = 5,
        .weight = 54,
        .description = gOddishPokedexText,
		.pokedexShowEntry = gOddishPokedexShowText,
        .pokemonScale = 423,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLOOM] =
    {
        .categoryName = _("RACINE"),
        .height = 8,
        .weight = 86,
        .description = gGloomPokedexText,
		.pokedexShowEntry = gGloomPokedexShowText,
        .pokemonScale = 329,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VILEPLUME] =
    {
        .categoryName = _("FLEUR"),
        .height = 12,
        .weight = 186,
        .description = gVileplumePokedexText,
		.pokedexShowEntry = gVileplumePokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PARAS] =
    {
        .categoryName = _("CHAMPIGNON"),
        .height = 3,
        .weight = 54,
        .description = gParasPokedexText,
		.pokedexShowEntry = gParasPokedexShowText,
        .pokemonScale = 593,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PARASECT] =
    {
        .categoryName = _("CHAMPIGNON"),
        .height = 10,
        .weight = 295,
        .description = gParasectPokedexText,
		.pokedexShowEntry = gParasectPokedexShowText,
        .pokemonScale = 307,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VENONAT] =
    {
        .categoryName = _("VERMINE"),
        .height = 10,
        .weight = 300,
        .description = gVenonatPokedexText,
		.pokedexShowEntry = gVenonatPokedexShowText,
        .pokemonScale = 360,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_VENOMOTH] =
    {
        .categoryName = _("PAPIPOISON"),
        .height = 15,
        .weight = 125,
        .description = gVenomothPokedexText,
		.pokedexShowEntry = gVenomothPokedexShowText,
        .pokemonScale = 285,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_DIGLETT] =
    {
        .categoryName = _("TAUPE"),
        .height = 2,
        .weight = 8,
        .description = gDiglettPokedexText,
		.pokedexShowEntry = gDiglettPokedexShowText,
        .pokemonScale = 833,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUGTRIO] =
    {
        .categoryName = _("TAUPE"),
        .height = 7,
        .weight = 333,
        .description = gDugtrioPokedexText,
		.pokedexShowEntry = gDugtrioPokedexShowText,
        .pokemonScale = 406,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEOWTH] =
    {
        .categoryName = _("CHADEGOUT"),
        .height = 4,
        .weight = 42,
        .description = gMeowthPokedexText,
		.pokedexShowEntry = gMeowthPokedexShowText,
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PERSIAN] =
    {
        .categoryName = _("CHADEVILLE"),
        .height = 10,
        .weight = 320,
        .description = gPersianPokedexText,
		.pokedexShowEntry = gPersianPokedexShowText,
        .pokemonScale = 320,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PSYDUCK] =
    {
        .categoryName = _("CANARD"),
        .height = 8,
        .weight = 196,
        .description = gPsyduckPokedexText,
		.pokedexShowEntry = gPsyduckPokedexShowText,
        .pokemonScale = 369,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLDUCK] =
    {
        .categoryName = _("CANARD"),
        .height = 17,
        .weight = 766,
        .description = gGolduckPokedexText,
		.pokedexShowEntry = gGolduckPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 273,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_MANKEY] =
    {
        .categoryName = _("PORSINGE"),
        .height = 5,
        .weight = 280,
        .description = gMankeyPokedexText,
		.pokedexShowEntry = gMankeyPokedexShowText,
        .pokemonScale = 404,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PRIMEAPE] =
    {
        .categoryName = _("PORSINGE"),
        .height = 10,
        .weight = 320,
        .description = gPrimeapePokedexText,
		.pokedexShowEntry = gPrimeapePokedexShowText,
        .pokemonScale = 326,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GROWLITHE] =
    {
        .categoryName = _("CHIOT"),
        .height = 7,
        .weight = 190,
        .description = gGrowlithePokedexText,
		.pokedexShowEntry = gGrowlithePokedexShowText,
        .pokemonScale = 346,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARCANINE] =
    {
        .categoryName = _("LEGENDAIRE"),
        .height = 19,
        .weight = 1550,
        .description = gArcaninePokedexText,
		.pokedexShowEntry = gArcaninePokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_POLIWAG] =
    {
        .categoryName = _("TETARD"),
        .height = 6,
        .weight = 124,
        .description = gPoliwagPokedexText,
		.pokedexShowEntry = gPoliwagPokedexShowText,
        .pokemonScale = 369,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POLIWHIRL] =
    {
        .categoryName = _("TETARD"),
        .height = 10,
        .weight = 200,
        .description = gPoliwhirlPokedexText,
		.pokedexShowEntry = gPoliwhirlPokedexShowText,
        .pokemonScale = 288,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POLIWRATH] =
    {
        .categoryName = _("TETARD"),
        .height = 13,
        .weight = 540,
        .description = gPoliwrathPokedexText,
		.pokedexShowEntry = gPoliwrathPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ABRA] =
    {
        .categoryName = _("PSY"),
        .height = 9,
        .weight = 195,
        .description = gAbraPokedexText,
		.pokedexShowEntry = gAbraPokedexShowText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KADABRA] =
    {
        .categoryName = _("PSY"),
        .height = 13,
        .weight = 565,
        .description = gKadabraPokedexText,
		.pokedexShowEntry = gKadabraPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALAKAZAM] =
    {
        .categoryName = _("PSY"),
        .height = 15,
        .weight = 480,
        .description = gAlakazamPokedexText,
		.pokedexShowEntry = gAlakazamPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MACHOP] =
    {
        .categoryName = _("COLOSSE"),
        .height = 8,
        .weight = 195,
        .description = gMachopPokedexText,
		.pokedexShowEntry = gMachopPokedexShowText,
        .pokemonScale = 342,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MACHOKE] =
    {
        .categoryName = _("COLOSSE"),
        .height = 15,
        .weight = 705,
        .description = gMachokePokedexText,
		.pokedexShowEntry = gMachokePokedexShowText,
        .pokemonScale = 323,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MACHAMP] =
    {
        .categoryName = _("COLOSSE"),
        .height = 16,
        .weight = 1300,
        .description = gMachampPokedexText,
		.pokedexShowEntry = gMachampPokedexShowText,
        .pokemonScale = 280,
        .pokemonOffset = 1,
        .trainerScale = 269,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_BELLSPROUT] =
    {
        .categoryName = _("FLEUR"),
        .height = 7,
        .weight = 40,
        .description = gBellsproutPokedexText,
		.pokedexShowEntry = gBellsproutPokedexShowText,
        .pokemonScale = 354,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WEEPINBELL] =
    {
        .categoryName = _("CARNIVORE"),
        .height = 10,
        .weight = 64,
        .description = gWeepinbellPokedexText,
		.pokedexShowEntry = gWeepinbellPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VICTREEBEL] =
    {
        .categoryName = _("CARNIVORE"),
        .height = 17,
        .weight = 155,
        .description = gVictreebelPokedexText,
		.pokedexShowEntry = gVictreebelPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_TENTACOOL] =
    {
        .categoryName = _("MOLLUSQUE"),
        .height = 9,
        .weight = 455,
        .description = gTentacoolPokedexText,
		.pokedexShowEntry = gTentacoolPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TENTACRUEL] =
    {
        .categoryName = _("MOLLUSQUE"),
        .height = 16,
        .weight = 550,
        .description = gTentacruelPokedexText,
		.pokedexShowEntry = gTentacruelPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 312,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_GEODUDE] =
    {
        .categoryName = _("ROCHE"),
        .height = 4,
        .weight = 200,
        .description = gGeodudePokedexText,
		.pokedexShowEntry = gGeodudePokedexShowText,
        .pokemonScale = 347,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRAVELER] =
    {
        .categoryName = _("ROCHE"),
        .height = 10,
        .weight = 1050,
        .description = gGravelerPokedexText,
		.pokedexShowEntry = gGravelerPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLEM] =
    {
        .categoryName = _("TITANESQUE"),
        .height = 14,
        .weight = 3000,
        .description = gGolemPokedexText,
		.pokedexShowEntry = gGolemPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PONYTA] =
    {
        .categoryName = _("CHEVAL FEU"),
        .height = 10,
        .weight = 300,
        .description = gPonytaPokedexText,
		.pokedexShowEntry = gPonytaPokedexShowText,
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RAPIDASH] =
    {
        .categoryName = _("CHEVAL FEU"),
        .height = 17,
        .weight = 950,
        .description = gRapidashPokedexText,
		.pokedexShowEntry = gRapidashPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 289,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_SLOWPOKE] =
    {
        .categoryName = _("CRETIN"),
        .height = 12,
        .weight = 360,
        .description = gSlowpokePokedexText,
		.pokedexShowEntry = gSlowpokePokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLOWBRO] =
    {
        .categoryName = _("SYMBIOSE"),
        .height = 16,
        .weight = 785,
        .description = gSlowbroPokedexText,
		.pokedexShowEntry = gSlowbroPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MAGNEMITE] =
    {
        .categoryName = _("MAGNETIQUE"),
        .height = 3,
        .weight = 60,
        .description = gMagnemitePokedexText,
		.pokedexShowEntry = gMagnemitePokedexShowText,
        .pokemonScale = 288,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGNETON] =
    {
        .categoryName = _("MAGNETIQUE"),
        .height = 10,
        .weight = 600,
        .description = gMagnetonPokedexText,
		.pokedexShowEntry = gMagnetonPokedexShowText,
        .pokemonScale = 292,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FARFETCHD] =
    {
        .categoryName = _("CANARD FOU"),
        .height = 8,
        .weight = 150,
        .description = gFarfetchdPokedexText,
		.pokedexShowEntry = gFarfetchdPokedexShowText,
        .pokemonScale = 330,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DODUO] =
    {
        .categoryName = _("DUOISEAU"),
        .height = 14,
        .weight = 392,
        .description = gDoduoPokedexText,
		.pokedexShowEntry = gDoduoPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_DODRIO] =
    {
        .categoryName = _("TRIOISEAU"),
        .height = 18,
        .weight = 852,
        .description = gDodrioPokedexText,
		.pokedexShowEntry = gDodrioPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEEL] =
    {
        .categoryName = _("OTARIE"),
        .height = 11,
        .weight = 900,
        .description = gSeelPokedexText,
		.pokedexShowEntry = gSeelPokedexShowText,
        .pokemonScale = 297,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEWGONG] =
    {
        .categoryName = _("OTARIE"),
        .height = 17,
        .weight = 1200,
        .description = gDewgongPokedexText,
		.pokedexShowEntry = gDewgongPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 275,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRIMER] =
    {
        .categoryName = _("DEGUEU"),
        .height = 9,
        .weight = 300,
        .description = gGrimerPokedexText,
		.pokedexShowEntry = gGrimerPokedexShowText,
        .pokemonScale = 258,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MUK] =
    {
        .categoryName = _("DEGUEU"),
        .height = 12,
        .weight = 300,
        .description = gMukPokedexText,
		.pokedexShowEntry = gMukPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHELLDER] =
    {
        .categoryName = _("BIVALVE"),
        .height = 3,
        .weight = 40,
        .description = gShellderPokedexText,
		.pokedexShowEntry = gShellderPokedexShowText,
        .pokemonScale = 675,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLOYSTER] =
    {
        .categoryName = _("BIVALVE"),
        .height = 15,
        .weight = 1325,
        .description = gCloysterPokedexText,
		.pokedexShowEntry = gCloysterPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 269,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_GASTLY] =
    {
        .categoryName = _("GAZ"),
        .height = 13,
        .weight = 1,
        .description = gGastlyPokedexText,
		.pokedexShowEntry = gGastlyPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAUNTER] =
    {
        .categoryName = _("GAZ"),
        .height = 16,
        .weight = 1,
        .description = gHaunterPokedexText,
		.pokedexShowEntry = gHaunterPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GENGAR] =
    {
        .categoryName = _("OMBRE"),
        .height = 15,
        .weight = 405,
        .description = gGengarPokedexText,
		.pokedexShowEntry = gGengarPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ONIX] =
    {
        .categoryName = _("SERPENROC"),
        .height = 88,
        .weight = 2100,
        .description = gOnixPokedexText,
		.pokedexShowEntry = gOnixPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 515,
        .trainerOffset = 14,
    },

    [NATIONAL_DEX_DROWZEE] =
    {
        .categoryName = _("HYPNOSE"),
        .height = 10,
        .weight = 324,
        .description = gDrowzeePokedexText,
		.pokedexShowEntry = gDrowzeePokedexShowText,
        .pokemonScale = 274,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HYPNO] =
    {
        .categoryName = _("HYPNOSE"),
        .height = 16,
        .weight = 756,
        .description = gHypnoPokedexText,
		.pokedexShowEntry = gHypnoPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KRABBY] =
    {
        .categoryName = _("DOUX CRABE"),
        .height = 4,
        .weight = 65,
        .description = gKrabbyPokedexText,
		.pokedexShowEntry = gKrabbyPokedexShowText,
        .pokemonScale = 469,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KINGLER] =
    {
        .categoryName = _("PINCE"),
        .height = 13,
        .weight = 600,
        .description = gKinglerPokedexText,
		.pokedexShowEntry = gKinglerPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VOLTORB] =
    {
        .categoryName = _("BALLE"),
        .height = 5,
        .weight = 104,
        .description = gVoltorbPokedexText,
		.pokedexShowEntry = gVoltorbPokedexShowText,
        .pokemonScale = 364,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELECTRODE] =
    {
        .categoryName = _("BALLE"),
        .height = 12,
        .weight = 666,
        .description = gElectrodePokedexText,
		.pokedexShowEntry = gElectrodePokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EXEGGCUTE] =
    {
        .categoryName = _("OEUF"),
        .height = 4,
        .weight = 25,
        .description = gExeggcutePokedexText,
		.pokedexShowEntry = gExeggcutePokedexShowText,
        .pokemonScale = 489,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EXEGGUTOR] =
    {
        .categoryName = _("FRUITPALME"),
        .height = 20,
        .weight = 1200,
        .description = gExeggutorPokedexText,
		.pokedexShowEntry = gExeggutorPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_CUBONE] =
    {
        .categoryName = _("SOLITAIRE"),
        .height = 4,
        .weight = 65,
        .description = gCubonePokedexText,
		.pokedexShowEntry = gCubonePokedexShowText,
        .pokemonScale = 545,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAROWAK] =
    {
        .categoryName = _("GARD'OS"),
        .height = 10,
        .weight = 450,
        .description = gMarowakPokedexText,
		.pokedexShowEntry = gMarowakPokedexShowText,
        .pokemonScale = 293,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HITMONLEE] =
    {
        .categoryName = _("LATTEUR"),
        .height = 15,
        .weight = 498,
        .description = gHitmonleePokedexText,
		.pokedexShowEntry = gHitmonleePokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 259,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_HITMONCHAN] =
    {
        .categoryName = _("PUNCHEUR"),
        .height = 14,
        .weight = 502,
        .description = gHitmonchanPokedexText,
		.pokedexShowEntry = gHitmonchanPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 277,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LICKITUNG] =
    {
        .categoryName = _("LECHEUR"),
        .height = 12,
        .weight = 655,
        .description = gLickitungPokedexText,
		.pokedexShowEntry = gLickitungPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KOFFING] =
    {
        .categoryName = _("GAZ MORTEL"),
        .height = 6,
        .weight = 10,
        .description = gKoffingPokedexText,
		.pokedexShowEntry = gKoffingPokedexShowText,
        .pokemonScale = 369,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WEEZING] =
    {
        .categoryName = _("GAZ MORTEL"),
        .height = 12,
        .weight = 95,
        .description = gWeezingPokedexText,
		.pokedexShowEntry = gWeezingPokedexShowText,
        .pokemonScale = 305,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RHYHORN] =
    {
        .categoryName = _("PIQUANT"),
        .height = 10,
        .weight = 1150,
        .description = gRhyhornPokedexText,
		.pokedexShowEntry = gRhyhornPokedexShowText,
        .pokemonScale = 267,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RHYDON] =
    {
        .categoryName = _("PERCEUR"),
        .height = 19,
        .weight = 1200,
        .description = gRhydonPokedexText,
		.pokedexShowEntry = gRhydonPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 299,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CHANSEY] =
    {
        .categoryName = _("OEUF"),
        .height = 11,
        .weight = 346,
        .description = gChanseyPokedexText,
		.pokedexShowEntry = gChanseyPokedexShowText,
        .pokemonScale = 257,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TANGELA] =
    {
        .categoryName = _("VIGNE"),
        .height = 10,
        .weight = 350,
        .description = gTangelaPokedexText,
		.pokedexShowEntry = gTangelaPokedexShowText,
        .pokemonScale = 304,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KANGASKHAN] =
    {
        .categoryName = _("MATERNEL"),
        .height = 22,
        .weight = 800,
        .description = gKangaskhanPokedexText,
		.pokedexShowEntry = gKangaskhanPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_HORSEA] =
    {
        .categoryName = _("DRAGON"),
        .height = 4,
        .weight = 80,
        .description = gHorseaPokedexText,
		.pokedexShowEntry = gHorseaPokedexShowText,
        .pokemonScale = 399,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEADRA] =
    {
        .categoryName = _("DRAGON"),
        .height = 12,
        .weight = 250,
        .description = gSeadraPokedexText,
		.pokedexShowEntry = gSeadraPokedexShowText,
        .pokemonScale = 299,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLDEEN] =
    {
        .categoryName = _("POISSON"),
        .height = 6,
        .weight = 150,
        .description = gGoldeenPokedexText,
		.pokedexShowEntry = gGoldeenPokedexShowText,
        .pokemonScale = 379,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEAKING] =
    {
        .categoryName = _("POISSON"),
        .height = 13,
        .weight = 390,
        .description = gSeakingPokedexText,
		.pokedexShowEntry = gSeakingPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STARYU] =
    {
        .categoryName = _("ETOILE"),
        .height = 8,
        .weight = 345,
        .description = gStaryuPokedexText,
		.pokedexShowEntry = gStaryuPokedexShowText,
        .pokemonScale = 326,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STARMIE] =
    {
        .categoryName = _("MYSTERIEUX"),
        .height = 11,
        .weight = 800,
        .description = gStarmiePokedexText,
		.pokedexShowEntry = gStarmiePokedexShowText,
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MR_MIME] =
    {
        .categoryName = _("BLOQUEUR"),
        .height = 13,
        .weight = 545,
        .description = gMrmimePokedexText,
		.pokedexShowEntry = gMrMimePokedexShowText,
        .pokemonScale = 258,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCYTHER] =
    {
        .categoryName = _("MANTE"),
        .height = 15,
        .weight = 560,
        .description = gScytherPokedexText,
		.pokedexShowEntry = gScytherPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_JYNX] =
    {
        .categoryName = _("HUMANOIDE"),
        .height = 14,
        .weight = 406,
        .description = gJynxPokedexText,
		.pokedexShowEntry = gJynxPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 300,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_ELECTABUZZ] =
    {
        .categoryName = _("ELECTRIQUE"),
        .height = 11,
        .weight = 300,
        .description = gElectabuzzPokedexText,
		.pokedexShowEntry = gElectabuzzPokedexShowText,
        .pokemonScale = 351,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGMAR] =
    {
        .categoryName = _("CRACHE-FEU"),
        .height = 13,
        .weight = 445,
        .description = gMagmarPokedexText,
		.pokedexShowEntry = gMagmarPokedexShowText,
        .pokemonScale = 277,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PINSIR] =
    {
        .categoryName = _("SCARABEE"),
        .height = 15,
        .weight = 550,
        .description = gPinsirPokedexText,
		.pokedexShowEntry = gPinsirPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TAUROS] =
    {
        .categoryName = _("BUFFLE"),
        .height = 14,
        .weight = 884,
        .description = gTaurosPokedexText,
		.pokedexShowEntry = gTaurosPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGIKARP] =
    {
        .categoryName = _("POISSON"),
        .height = 9,
        .weight = 100,
        .description = gMagikarpPokedexText,
		.pokedexShowEntry = gMagikarpPokedexShowText,
        .pokemonScale = 310,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GYARADOS] =
    {
        .categoryName = _("TERRIFIANT"),
        .height = 65,
        .weight = 2350,
        .description = gGyaradosPokedexText,
		.pokedexShowEntry = gGyaradosPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 481,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_LAPRAS] =
    {
        .categoryName = _("TRANSPORT"),
        .height = 25,
        .weight = 2200,
        .description = gLaprasPokedexText,
		.pokedexShowEntry = gLaprasPokedexShowText,
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_DITTO] =
    {
        .categoryName = _("MORPHING"),
        .height = 3,
        .weight = 40,
        .description = gDittoPokedexText,
		.pokedexShowEntry = gDittoPokedexShowText,
        .pokemonScale = 633,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EEVEE] =
    {
        .categoryName = _("EVOLUTIF"),
        .height = 3,
        .weight = 65,
        .description = gEeveePokedexText,
		.pokedexShowEntry = gEeveePokedexShowText,
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VAPOREON] =
    {
        .categoryName = _("BULLEUR"),
        .height = 10,
        .weight = 290,
        .description = gVaporeonPokedexText,
		.pokedexShowEntry = gVaporeonPokedexShowText,
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JOLTEON] =
    {
        .categoryName = _("ORAGE"),
        .height = 8,
        .weight = 245,
        .description = gJolteonPokedexText,
		.pokedexShowEntry = gJolteonPokedexShowText,
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLAREON] =
    {
        .categoryName = _("FLAMME"),
        .height = 9,
        .weight = 250,
        .description = gFlareonPokedexText,
		.pokedexShowEntry = gFlareonPokedexShowText,
        .pokemonScale = 306,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PORYGON] =
    {
        .categoryName = _("VIRTUEL"),
        .height = 8,
        .weight = 365,
        .description = gPorygonPokedexText,
		.pokedexShowEntry = gPorygonPokedexShowText,
        .pokemonScale = 328,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OMANYTE] =
    {
        .categoryName = _("SPIRALE"),
        .height = 4,
        .weight = 75,
        .description = gOmanytePokedexText,
		.pokedexShowEntry = gOmanytePokedexShowText,
        .pokemonScale = 521,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OMASTAR] =
    {
        .categoryName = _("SPIRALE"),
        .height = 10,
        .weight = 350,
        .description = gOmastarPokedexText,
		.pokedexShowEntry = gOmastarPokedexShowText,
        .pokemonScale = 307,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KABUTO] =
    {
        .categoryName = _("CARAPACE"),
        .height = 5,
        .weight = 115,
        .description = gKabutoPokedexText,
		.pokedexShowEntry = gKabutoPokedexShowText,
        .pokemonScale = 454,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KABUTOPS] =
    {
        .categoryName = _("CARAPACE"),
        .height = 13,
        .weight = 405,
        .description = gKabutopsPokedexText,
		.pokedexShowEntry = gKabutopsPokedexShowText,
        .pokemonScale = 271,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AERODACTYL] =
    {
        .categoryName = _("FOSSILE"),
        .height = 18,
        .weight = 590,
        .description = gAerodactylPokedexText,
		.pokedexShowEntry = gAerodactylPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 302,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_SNORLAX] =
    {
        .categoryName = _("PIONCEUR"),
        .height = 21,
        .weight = 4600,
        .description = gSnorlaxPokedexText,
		.pokedexShowEntry = gSnorlaxPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 423,
        .trainerOffset = 11,
    },

    [NATIONAL_DEX_ARTICUNO] =
    {
        .categoryName = _("GLACIAIRE"),
        .height = 17,
        .weight = 554,
        .description = gArticunoPokedexText,
		.pokedexShowEntry = gArticunoPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ZAPDOS] =
    {
        .categoryName = _("ELECTRIQUE"),
        .height = 16,
        .weight = 526,
        .description = gZapdosPokedexText,
		.pokedexShowEntry = gZapdosPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 318,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_MOLTRES] =
    {
        .categoryName = _("FLAMME"),
        .height = 20,
        .weight = 600,
        .description = gMoltresPokedexText,
		.pokedexShowEntry = gMoltresPokedexShowText,
        .pokemonScale = 270,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_DRATINI] =
    {
        .categoryName = _("DRAGON"),
        .height = 18,
        .weight = 33,
        .description = gDratiniPokedexText,
		.pokedexShowEntry = gDratiniPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 8,
        .trainerScale = 386,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_DRAGONAIR] =
    {
        .categoryName = _("DRAGON"),
        .height = 40,
        .weight = 165,
        .description = gDragonairPokedexText,
		.pokedexShowEntry = gDragonairPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 411,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_DRAGONITE] =
    {
        .categoryName = _("DRAGON"),
        .height = 22,
        .weight = 2100,
        .description = gDragonitePokedexText,
		.pokedexShowEntry = gDragonitePokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_MEWTWO] =
    {
        .categoryName = _("GENETIQUE"),
        .height = 20,
        .weight = 1220,
        .description = gMewtwoPokedexText,
		.pokedexShowEntry = gMewtwoPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_MEW] =
    {
        .categoryName = _("NOUVEAU"),
        .height = 4,
        .weight = 40,
        .description = gMewPokedexText,
		.pokedexShowEntry = gMewPokedexShowText,
        .pokemonScale = 457,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHIKORITA] =
    {
        .categoryName = _("FEUILLE"),
        .height = 9,
        .weight = 64,
        .description = gChikoritaPokedexText,
		.pokedexShowEntry = gChikoritaPokedexShowText,
        .pokemonScale = 512,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BAYLEEF] =
    {
        .categoryName = _("FEUILLE"),
        .height = 12,
        .weight = 158,
        .description = gBayleefPokedexText,
		.pokedexShowEntry = gBayleefPokedexShowText,
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEGANIUM] =
    {
        .categoryName = _("HERBE"),
        .height = 18,
        .weight = 1005,
        .description = gMeganiumPokedexText,
		.pokedexShowEntry = gMeganiumPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 277,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_CYNDAQUIL] =
    {
        .categoryName = _("SOURIS FEU"),
        .height = 5,
        .weight = 79,
        .description = gCyndaquilPokedexText,
		.pokedexShowEntry = gCyndaquilPokedexShowText,
        .pokemonScale = 539,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_QUILAVA] =
    {
        .categoryName = _("VOLCAN"),
        .height = 9,
        .weight = 190,
        .description = gQuilavaPokedexText,
		.pokedexShowEntry = gQuilavaPokedexShowText,
        .pokemonScale = 329,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYPHLOSION] =
    {
        .categoryName = _("VOLCAN"),
        .height = 17,
        .weight = 795,
        .description = gTyphlosionPokedexText,
		.pokedexShowEntry = gTyphlosionPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_TOTODILE] =
    {
        .categoryName = _("MACHOIRE"),
        .height = 6,
        .weight = 95,
        .description = gTotodilePokedexText,
		.pokedexShowEntry = gTotodilePokedexShowText,
        .pokemonScale = 487,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CROCONAW] =
    {
        .categoryName = _("MACHOIRE"),
        .height = 11,
        .weight = 250,
        .description = gCroconawPokedexText,
		.pokedexShowEntry = gCroconawPokedexShowText,
        .pokemonScale = 378,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FERALIGATR] =
    {
        .categoryName = _("MACHOIRE"),
        .height = 23,
        .weight = 888,
        .description = gFeraligatrPokedexText,
		.pokedexShowEntry = gFeraligatrPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_SENTRET] =
    {
        .categoryName = _("ESPION"),
        .height = 8,
        .weight = 60,
        .description = gSentretPokedexText,
		.pokedexShowEntry = gSentretPokedexShowText,
        .pokemonScale = 439,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FURRET] =
    {
        .categoryName = _("ALLONGE"),
        .height = 18,
        .weight = 325,
        .description = gFurretPokedexText,
		.pokedexShowEntry = gFurretPokedexShowText,
        .pokemonScale = 346,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HOOTHOOT] =
    {
        .categoryName = _("HIBOU"),
        .height = 7,
        .weight = 212,
        .description = gHoothootPokedexText,
		.pokedexShowEntry = gHoothootPokedexShowText,
        .pokemonScale = 380,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NOCTOWL] =
    {
        .categoryName = _("HIBOU"),
        .height = 16,
        .weight = 408,
        .description = gNoctowlPokedexText,
		.pokedexShowEntry = gNoctowlPokedexShowText,
        .pokemonScale = 278,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LEDYBA] =
    {
        .categoryName = _("5 ETOILES"),
        .height = 10,
        .weight = 108,
        .description = gLedybaPokedexText,
		.pokedexShowEntry = gLedybaPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LEDIAN] =
    {
        .categoryName = _("5 ETOILES"),
        .height = 14,
        .weight = 356,
        .description = gLedianPokedexText,
		.pokedexShowEntry = gLedianPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPINARAK] =
    {
        .categoryName = _("CRACHE FIL"),
        .height = 5,
        .weight = 85,
        .description = gSpinarakPokedexText,
		.pokedexShowEntry = gSpinarakPokedexShowText,
        .pokemonScale = 414,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARIADOS] =
    {
        .categoryName = _("LONG-PATTE"),
        .height = 11,
        .weight = 335,
        .description = gAriadosPokedexText,
		.pokedexShowEntry = gAriadosPokedexShowText,
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CROBAT] =
    {
        .categoryName = _("CHOVSOURIS"),
        .height = 18,
        .weight = 750,
        .description = gCrobatPokedexText,
		.pokedexShowEntry = gCrobatPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 281,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_CHINCHOU] =
    {
        .categoryName = _("POISSON"),
        .height = 5,
        .weight = 120,
        .description = gChinchouPokedexText,
		.pokedexShowEntry = gChinchouPokedexShowText,
        .pokemonScale = 424,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LANTURN] =
    {
        .categoryName = _("LUMIERE"),
        .height = 12,
        .weight = 225,
        .description = gLanturnPokedexText,
		.pokedexShowEntry = gLanturnPokedexShowText,
        .pokemonScale = 269,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PICHU] =
    {
        .categoryName = _("MINISOURIS"),
        .height = 3,
        .weight = 20,
        .description = gPichuPokedexText,
		.pokedexShowEntry = gPichuPokedexShowText,
        .pokemonScale = 508,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLEFFA] =
    {
        .categoryName = _("ETOILE"),
        .height = 3,
        .weight = 30,
        .description = gCleffaPokedexText,
		.pokedexShowEntry = gCleffaPokedexShowText,
        .pokemonScale = 462,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_IGGLYBUFF] =
    {
        .categoryName = _("BOUBOULE"),
        .height = 3,
        .weight = 10,
        .description = gIgglybuffPokedexText,
		.pokedexShowEntry = gIgglybuffPokedexShowText,
        .pokemonScale = 457,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOGEPI] =
    {
        .categoryName = _("BALLE PIC"),
        .height = 3,
        .weight = 15,
        .description = gTogepiPokedexText,
		.pokedexShowEntry = gTogepiPokedexShowText,
        .pokemonScale = 507,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOGETIC] =
    {
        .categoryName = _("BONHEUR"),
        .height = 6,
        .weight = 32,
        .description = gTogeticPokedexText,
		.pokedexShowEntry = gTogeticPokedexShowText,
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NATU] =
    {
        .categoryName = _("MINOISEAU"),
        .height = 2,
        .weight = 20,
        .description = gNatuPokedexText,
		.pokedexShowEntry = gNatuPokedexShowText,
        .pokemonScale = 610,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_XATU] =
    {
        .categoryName = _("MYSTIQUE"),
        .height = 15,
        .weight = 150,
        .description = gXatuPokedexText,
		.pokedexShowEntry = gXatuPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 318,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_MAREEP] =
    {
        .categoryName = _("LAINE"),
        .height = 6,
        .weight = 78,
        .description = gMareepPokedexText,
		.pokedexShowEntry = gMareepPokedexShowText,
        .pokemonScale = 379,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLAAFFY] =
    {
        .categoryName = _("LAINE"),
        .height = 8,
        .weight = 133,
        .description = gFlaaffyPokedexText,
		.pokedexShowEntry = gFlaaffyPokedexShowText,
        .pokemonScale = 372,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AMPHAROS] =
    {
        .categoryName = _("LUMIERE"),
        .height = 14,
        .weight = 615,
        .description = gAmpharosPokedexText,
		.pokedexShowEntry = gAmpharosPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BELLOSSOM] =
    {
        .categoryName = _("FLEUR"),
        .height = 4,
        .weight = 58,
        .description = gBellossomPokedexText,
		.pokedexShowEntry = gBellossomPokedexShowText,
        .pokemonScale = 472,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MARILL] =
    {
        .categoryName = _("AQUASOURIS"),
        .height = 4,
        .weight = 85,
        .description = gMarillPokedexText,
		.pokedexShowEntry = gMarillPokedexShowText,
        .pokemonScale = 476,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AZUMARILL] =
    {
        .categoryName = _("AQUALAPIN"),
        .height = 8,
        .weight = 285,
        .description = gAzumarillPokedexText,
		.pokedexShowEntry = gAzumarillPokedexShowText,
        .pokemonScale = 448,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SUDOWOODO] =
    {
        .categoryName = _("IMITATION"),
        .height = 12,
        .weight = 380,
        .description = gSudowoodoPokedexText,
		.pokedexShowEntry = gSudowoodoPokedexShowText,
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POLITOED] =
    {
        .categoryName = _("GRENOUILLE"),
        .height = 11,
        .weight = 339,
        .description = gPolitoedPokedexText,
		.pokedexShowEntry = gPolitoedPokedexShowText,
        .pokemonScale = 289,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HOPPIP] =
    {
        .categoryName = _("PISSENLIT"),
        .height = 4,
        .weight = 5,
        .description = gHoppipPokedexText,
		.pokedexShowEntry = gHoppipPokedexShowText,
        .pokemonScale = 562,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKIPLOOM] =
    {
        .categoryName = _("PISSENLIT"),
        .height = 6,
        .weight = 10,
        .description = gSkiploomPokedexText,
		.pokedexShowEntry = gSkiploomPokedexShowText,
        .pokemonScale = 387,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JUMPLUFF] =
    {
        .categoryName = _("PISSENLIT"),
        .height = 8,
        .weight = 30,
        .description = gJumpluffPokedexText,
		.pokedexShowEntry = gJumpluffPokedexShowText,
        .pokemonScale = 418,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AIPOM] =
    {
        .categoryName = _("LONGQUEUE"),
        .height = 8,
        .weight = 115,
        .description = gAipomPokedexText,
		.pokedexShowEntry = gAipomPokedexShowText,
        .pokemonScale = 363,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SUNKERN] =
    {
        .categoryName = _("GRAINE"),
        .height = 3,
        .weight = 18,
        .description = gSunkernPokedexText,
		.pokedexShowEntry = gSunkernPokedexShowText,
        .pokemonScale = 541,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SUNFLORA] =
    {
        .categoryName = _("SOLEIL"),
        .height = 8,
        .weight = 85,
        .description = gSunfloraPokedexText,
		.pokedexShowEntry = gSunfloraPokedexShowText,
        .pokemonScale = 444,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YANMA] =
    {
        .categoryName = _("TRANSLAILE"),
        .height = 12,
        .weight = 380,
        .description = gYanmaPokedexText,
		.pokedexShowEntry = gYanmaPokedexShowText,
        .pokemonScale = 274,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WOOPER] =
    {
        .categoryName = _("POISSON"),
        .height = 4,
        .weight = 85,
        .description = gWooperPokedexText,
		.pokedexShowEntry = gWooperPokedexShowText,
        .pokemonScale = 479,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_QUAGSIRE] =
    {
        .categoryName = _("POISSON"),
        .height = 14,
        .weight = 750,
        .description = gQuagsirePokedexText,
		.pokedexShowEntry = gQuagsirePokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ESPEON] =
    {
        .categoryName = _("SOLEIL"),
        .height = 9,
        .weight = 265,
        .description = gEspeonPokedexText,
		.pokedexShowEntry = gEspeonPokedexShowText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UMBREON] =
    {
        .categoryName = _("LUNE"),
        .height = 10,
        .weight = 270,
        .description = gUmbreonPokedexText,
		.pokedexShowEntry = gUmbreonPokedexShowText,
        .pokemonScale = 317,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MURKROW] =
    {
        .categoryName = _("OBSCURITE"),
        .height = 5,
        .weight = 21,
        .description = gMurkrowPokedexText,
		.pokedexShowEntry = gMurkrowPokedexShowText,
        .pokemonScale = 401,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_SLOWKING] =
    {
        .categoryName = _("ROYAL"),
        .height = 20,
        .weight = 795,
        .description = gSlowkingPokedexText,
		.pokedexShowEntry = gSlowkingPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_MISDREAVUS] =
    {
        .categoryName = _("STRIDENT"),
        .height = 7,
        .weight = 10,
        .description = gMisdreavusPokedexText,
		.pokedexShowEntry = gMisdreavusPokedexShowText,
        .pokemonScale = 407,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UNOWN] =
    {
        .categoryName = _("SYMBOLIQUE"),
        .height = 5,
        .weight = 50,
        .description = gUnownPokedexText,
		.pokedexShowEntry = gUnownPokedexShowText,
        .pokemonScale = 411,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WOBBUFFET] =
    {
        .categoryName = _("PATIENT"),
        .height = 13,
        .weight = 285,
        .description = gWobbuffetPokedexText,
		.pokedexShowEntry = gWobbuffetPokedexShowText,
        .pokemonScale = 274,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GIRAFARIG] =
    {
        .categoryName = _("LONG-COU"),
        .height = 15,
        .weight = 415,
        .description = gGirafarigPokedexText,
		.pokedexShowEntry = gGirafarigPokedexShowText,
        .pokemonScale = 281,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PINECO] =
    {
        .categoryName = _("VER CACHE"),
        .height = 6,
        .weight = 72,
        .description = gPinecoPokedexText,
		.pokedexShowEntry = gPinecoPokedexShowText,
        .pokemonScale = 445,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FORRETRESS] =
    {
        .categoryName = _("VER CACHE"),
        .height = 12,
        .weight = 1258,
        .description = gForretressPokedexText,
		.pokedexShowEntry = gForretressPokedexShowText,
        .pokemonScale = 293,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUNSPARCE] =
    {
        .categoryName = _("SERPENT"),
        .height = 15,
        .weight = 140,
        .description = gDunsparcePokedexText,
		.pokedexShowEntry = gDunsparcePokedexShowText,
        .pokemonScale = 316,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLIGAR] =
    {
        .categoryName = _("SCORPIVOL"),
        .height = 11,
        .weight = 648,
        .description = gGligarPokedexText,
		.pokedexShowEntry = gGligarPokedexShowText,
        .pokemonScale = 350,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STEELIX] =
    {
        .categoryName = _("SERPENFER"),
        .height = 92,
        .weight = 4000,
        .description = gSteelixPokedexText,
		.pokedexShowEntry = gSteelixPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_SNUBBULL] =
    {
        .categoryName = _("FEE"),
        .height = 6,
        .weight = 78,
        .description = gSnubbullPokedexText,
		.pokedexShowEntry = gSnubbullPokedexShowText,
        .pokemonScale = 465,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRANBULL] =
    {
        .categoryName = _("FEE"),
        .height = 14,
        .weight = 487,
        .description = gGranbullPokedexText,
		.pokedexShowEntry = gGranbullPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_QWILFISH] =
    {
        .categoryName = _("BOUBOULE"),
        .height = 5,
        .weight = 39,
        .description = gQwilfishPokedexText,
		.pokedexShowEntry = gQwilfishPokedexShowText,
        .pokemonScale = 430,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCIZOR] =
    {
        .categoryName = _("PINCE"),
        .height = 18,
        .weight = 1180,
        .description = gScizorPokedexText,
		.pokedexShowEntry = gScizorPokedexShowText,
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHUCKLE] =
    {
        .categoryName = _("POURRI"),
        .height = 6,
        .weight = 205,
        .description = gShucklePokedexText,
		.pokedexShowEntry = gShucklePokedexShowText,
        .pokemonScale = 485,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HERACROSS] =
    {
        .categoryName = _("UNICORNE"),
        .height = 15,
        .weight = 540,
        .description = gHeracrossPokedexText,
		.pokedexShowEntry = gHeracrossPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNEASEL] =
    {
        .categoryName = _("GRIFACEREE"),
        .height = 9,
        .weight = 280,
        .description = gSneaselPokedexText,
		.pokedexShowEntry = gSneaselPokedexShowText,
        .pokemonScale = 413,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TEDDIURSA] =
    {
        .categoryName = _("MINI OURS"),
        .height = 6,
        .weight = 88,
        .description = gTeddiursaPokedexText,
		.pokedexShowEntry = gTeddiursaPokedexShowText,
        .pokemonScale = 455,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_URSARING] =
    {
        .categoryName = _("HIBERNANT"),
        .height = 18,
        .weight = 1258,
        .description = gUrsaringPokedexText,
		.pokedexShowEntry = gUrsaringPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLUGMA] =
    {
        .categoryName = _("LAVE"),
        .height = 7,
        .weight = 350,
        .description = gSlugmaPokedexText,
		.pokedexShowEntry = gSlugmaPokedexShowText,
        .pokemonScale = 329,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGCARGO] =
    {
        .categoryName = _("LAVE"),
        .height = 8,
        .weight = 550,
        .description = gMagcargoPokedexText,
		.pokedexShowEntry = gMagcargoPokedexShowText,
        .pokemonScale = 332,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWINUB] =
    {
        .categoryName = _("COCHON"),
        .height = 4,
        .weight = 65,
        .description = gSwinubPokedexText,
		.pokedexShowEntry = gSwinubPokedexShowText,
        .pokemonScale = 324,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PILOSWINE] =
    {
        .categoryName = _("PORC"),
        .height = 11,
        .weight = 558,
        .description = gPiloswinePokedexText,
		.pokedexShowEntry = gPiloswinePokedexShowText,
        .pokemonScale = 306,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CORSOLA] =
    {
        .categoryName = _("CORAIL"),
        .height = 6,
        .weight = 50,
        .description = gCorsolaPokedexText,
		.pokedexShowEntry = gCorsolaPokedexShowText,
        .pokemonScale = 410,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REMORAID] =
    {
        .categoryName = _("JET"),
        .height = 6,
        .weight = 120,
        .description = gRemoraidPokedexText,
		.pokedexShowEntry = gRemoraidPokedexShowText,
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OCTILLERY] =
    {
        .categoryName = _("JET"),
        .height = 9,
        .weight = 285,
        .description = gOctilleryPokedexText,
		.pokedexShowEntry = gOctilleryPokedexShowText,
        .pokemonScale = 296,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DELIBIRD] =
    {
        .categoryName = _("LIVRAISON"),
        .height = 9,
        .weight = 160,
        .description = gDelibirdPokedexText,
		.pokedexShowEntry = gDelibirdPokedexShowText,
        .pokemonScale = 293,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MANTINE] =
    {
        .categoryName = _("CERVOLANT"),
        .height = 21,
        .weight = 2200,
        .description = gMantinePokedexText,
		.pokedexShowEntry = gMantinePokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_SKARMORY] =
    {
        .categoryName = _("ARMOISEAU"),
        .height = 17,
        .weight = 505,
        .description = gSkarmoryPokedexText,
		.pokedexShowEntry = gSkarmoryPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 271,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_HOUNDOUR] =
    {
        .categoryName = _("SOMBRE"),
        .height = 6,
        .weight = 108,
        .description = gHoundourPokedexText,
		.pokedexShowEntry = gHoundourPokedexShowText,
        .pokemonScale = 393,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HOUNDOOM] =
    {
        .categoryName = _("SOMBRE"),
        .height = 14,
        .weight = 350,
        .description = gHoundoomPokedexText,
		.pokedexShowEntry = gHoundoomPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KINGDRA] =
    {
        .categoryName = _("DRAGON"),
        .height = 18,
        .weight = 1520,
        .description = gKingdraPokedexText,
		.pokedexShowEntry = gKingdraPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 287,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PHANPY] =
    {
        .categoryName = _("LONG-NEZ"),
        .height = 5,
        .weight = 335,
        .description = gPhanpyPokedexText,
		.pokedexShowEntry = gPhanpyPokedexShowText,
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DONPHAN] =
    {
        .categoryName = _("ARMURE"),
        .height = 11,
        .weight = 1200,
        .description = gDonphanPokedexText,
		.pokedexShowEntry = gDonphanPokedexShowText,
        .pokemonScale = 313,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PORYGON2] =
    {
        .categoryName = _("VIRTUEL"),
        .height = 6,
        .weight = 325,
        .description = gPorygon2PokedexText,
		.pokedexShowEntry = gPorygon2PokedexShowText,
        .pokemonScale = 320,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STANTLER] =
    {
        .categoryName = _("MAXI CORNE"),
        .height = 14,
        .weight = 712,
        .description = gStantlerPokedexText,
		.pokedexShowEntry = gStantlerPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SMEARGLE] =
    {
        .categoryName = _("PEINTRE"),
        .height = 12,
        .weight = 580,
        .description = gSmearglePokedexText,
		.pokedexShowEntry = gSmearglePokedexShowText,
        .pokemonScale = 287,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYROGUE] =
    {
        .categoryName = _("BAGARREUR"),
        .height = 7,
        .weight = 210,
        .description = gTyroguePokedexText,
		.pokedexShowEntry = gTyroguePokedexShowText,
        .pokemonScale = 292,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HITMONTOP] =
    {
        .categoryName = _("POIRIER"),
        .height = 14,
        .weight = 480,
        .description = gHitmontopPokedexText,
		.pokedexShowEntry = gHitmontopPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SMOOCHUM] =
    {
        .categoryName = _("BISOU"),
        .height = 4,
        .weight = 60,
        .description = gSmoochumPokedexText,
		.pokedexShowEntry = gSmoochumPokedexShowText,
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELEKID] =
    {
        .categoryName = _("ELECTRIQUE"),
        .height = 6,
        .weight = 235,
        .description = gElekidPokedexText,
		.pokedexShowEntry = gElekidPokedexShowText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGBY] =
    {
        .categoryName = _("CHARBON"),
        .height = 7,
        .weight = 214,
        .description = gMagbyPokedexText,
		.pokedexShowEntry = gMagbyPokedexShowText,
        .pokemonScale = 284,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MILTANK] =
    {
        .categoryName = _("VACHALAIT"),
        .height = 12,
        .weight = 755,
        .description = gMiltankPokedexText,
		.pokedexShowEntry = gMiltankPokedexShowText,
        .pokemonScale = 280,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLISSEY] =
    {
        .categoryName = _("BONHEUR"),
        .height = 15,
        .weight = 468,
        .description = gBlisseyPokedexText,
		.pokedexShowEntry = gBlisseyPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 310,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_RAIKOU] =
    {
        .categoryName = _("FOUDRE"),
        .height = 19,
        .weight = 1780,
        .description = gRaikouPokedexText,
		.pokedexShowEntry = gRaikouPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_ENTEI] =
    {
        .categoryName = _("VOLCAN"),
        .height = 21,
        .weight = 1980,
        .description = gEnteiPokedexText,
		.pokedexShowEntry = gEnteiPokedexShowText,
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_SUICUNE] =
    {
        .categoryName = _("AURORE"),
        .height = 20,
        .weight = 1870,
        .description = gSuicunePokedexText,
		.pokedexShowEntry = gSuicunePokedexShowText,
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_LARVITAR] =
    {
        .categoryName = _("PEAUPIERRE"),
        .height = 6,
        .weight = 720,
        .description = gLarvitarPokedexText,
		.pokedexShowEntry = gLarvitarPokedexShowText,
        .pokemonScale = 472,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PUPITAR] =
    {
        .categoryName = _("CARAPADURE"),
        .height = 12,
        .weight = 1520,
        .description = gPupitarPokedexText,
		.pokedexShowEntry = gPupitarPokedexShowText,
        .pokemonScale = 292,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYRANITAR] =
    {
        .categoryName = _("ARMURE"),
        .height = 20,
        .weight = 2020,
        .description = gTyranitarPokedexText,
		.pokedexShowEntry = gTyranitarPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_LUGIA] =
    {
        .categoryName = _("PLONGEON"),
        .height = 52,
        .weight = 2160,
        .description = gLugiaPokedexText,
		.pokedexShowEntry = gLugiaPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
    },

    [NATIONAL_DEX_HO_OH] =
    {
        .categoryName = _("ARCENCIEL"),
        .height = 38,
        .weight = 1990,
        .description = gHoOhPokedexText,
		.pokedexShowEntry = gHoOhPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 610,
        .trainerOffset = 17,
    },

    [NATIONAL_DEX_CELEBI] =
    {
        .categoryName = _("TEMPOREL"),
        .height = 6,
        .weight = 50,
        .description = gCelebiPokedexText,
		.pokedexShowEntry = gCelebiPokedexShowText,
        .pokemonScale = 393,
        .pokemonOffset = -10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TREECKO] =
    {
        .categoryName = _("BOIS GECKO"),
        .height = 5,
        .weight = 50,
        .description = gTreeckoPokedexText,
		.pokedexShowEntry = gTreeckoPokedexText,
        .pokemonScale = 541,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GROVYLE] =
    {
        .categoryName = _("BOIS GECKO"),
        .height = 9,
        .weight = 216,
        .description = gGrovylePokedexText,
		.pokedexShowEntry = gGrovylePokedexText,
        .pokemonScale = 360,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCEPTILE] =
    {
        .categoryName = _("FORET"),
        .height = 17,
        .weight = 522,
        .description = gSceptilePokedexText,
		.pokedexShowEntry = gSceptilePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 275,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TORCHIC] =
    {
        .categoryName = _("POUSSIN"),
        .height = 4,
        .weight = 25,
        .description = gTorchicPokedexText,
		.pokedexShowEntry = gTorchicPokedexText,
        .pokemonScale = 566,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COMBUSKEN] =
    {
        .categoryName = _("POULET"),
        .height = 9,
        .weight = 195,
        .description = gCombuskenPokedexText,
		.pokedexShowEntry = gCombuskenPokedexText,
        .pokemonScale = 343,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLAZIKEN] =
    {
        .categoryName = _("ARDENT"),
        .height = 19,
        .weight = 520,
        .description = gBlazikenPokedexText,
		.pokedexShowEntry = gBlazikenPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_MUDKIP] =
    {
        .categoryName = _("POISSONBOUE"),
        .height = 4,
        .weight = 76,
        .description = gMudkipPokedexText,
		.pokedexShowEntry = gMudkipPokedexText,
        .pokemonScale = 535,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MARSHTOMP] =
    {
        .categoryName = _("POISSONBOUE"),
        .height = 7,
        .weight = 280,
        .description = gMarshtompPokedexText,
		.pokedexShowEntry = gMarshtompPokedexText,
        .pokemonScale = 340,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWAMPERT] =
    {
        .categoryName = _("POISSONBOUE"),
        .height = 15,
        .weight = 819,
        .description = gSwampertPokedexText,
		.pokedexShowEntry = gSwampertPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POOCHYENA] =
    {
        .categoryName = _("MORSURE"),
        .height = 5,
        .weight = 136,
        .description = gPoochyenaPokedexText,
		.pokedexShowEntry = gPoochyenaPokedexText,
        .pokemonScale = 481,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MIGHTYENA] =
    {
        .categoryName = _("MORSURE"),
        .height = 10,
        .weight = 370,
        .description = gMightyenaPokedexText,
		.pokedexShowEntry = gMightyenaPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZIGZAGOON] =
    {
        .categoryName = _("PETIT RATON"),
        .height = 4,
        .weight = 175,
        .description = gZigzagoonPokedexText,
		.pokedexShowEntry = gZigzagoonPokedexText,
        .pokemonScale = 560,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LINOONE] =
    {
        .categoryName = _("FONCEUR"),
        .height = 5,
        .weight = 325,
        .description = gLinoonePokedexText,
		.pokedexShowEntry = gLinoonePokedexText,
        .pokemonScale = 321,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WURMPLE] =
    {
        .categoryName = _("VER"),
        .height = 3,
        .weight = 36,
        .description = gWurmplePokedexText,
		.pokedexShowEntry = gWurmplePokedexText,
        .pokemonScale = 711,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SILCOON] =
    {
        .categoryName = _("COCON"),
        .height = 6,
        .weight = 100,
        .description = gSilcoonPokedexText,
		.pokedexShowEntry = gSilcoonPokedexText,
        .pokemonScale = 431,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEAUTIFLY] =
    {
        .categoryName = _("PAPILLON"),
        .height = 10,
        .weight = 284,
        .description = gBeautiflyPokedexText,
		.pokedexShowEntry = gBeautiflyPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CASCOON] =
    {
        .categoryName = _("COCON"),
        .height = 7,
        .weight = 115,
        .description = gCascoonPokedexText,
		.pokedexShowEntry = gCascoonPokedexText,
        .pokemonScale = 391,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUSTOX] =
    {
        .categoryName = _("PAPIPOISON"),
        .height = 12,
        .weight = 316,
        .description = gDustoxPokedexText,
		.pokedexShowEntry = gDustoxPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOTAD] =
    {
        .categoryName = _("AQUAPLANTE"),
        .height = 5,
        .weight = 26,
        .description = gLotadPokedexText,
		.pokedexShowEntry = gLotadPokedexText,
        .pokemonScale = 406,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOMBRE] =
    {
        .categoryName = _("JOVIAL"),
        .height = 12,
        .weight = 325,
        .description = gLombrePokedexText,
		.pokedexShowEntry = gLombrePokedexText,
        .pokemonScale = 277,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUDICOLO] =
    {
        .categoryName = _("INSOUCIANT"),
        .height = 15,
        .weight = 550,
        .description = gLudicoloPokedexText,
		.pokedexShowEntry = gLudicoloPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_SEEDOT] =
    {
        .categoryName = _("GLAND"),
        .height = 5,
        .weight = 40,
        .description = gSeedotPokedexText,
		.pokedexShowEntry = gSeedotPokedexText,
        .pokemonScale = 472,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NUZLEAF] =
    {
        .categoryName = _("MALIN"),
        .height = 10,
        .weight = 280,
        .description = gNuzleafPokedexText,
		.pokedexShowEntry = gNuzleafPokedexText,
        .pokemonScale = 299,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHIFTRY] =
    {
        .categoryName = _("MALVEILLANT"),
        .height = 13,
        .weight = 596,
        .description = gShiftryPokedexText,
		.pokedexShowEntry = gShiftryPokedexText,
        .pokemonScale = 290,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TAILLOW] =
    {
        .categoryName = _("MINIRONDEL"),
        .height = 3,
        .weight = 23,
        .description = gTaillowPokedexText,
		.pokedexShowEntry = gTaillowPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWELLOW] =
    {
        .categoryName = _("HIRONDELLE"),
        .height = 7,
        .weight = 198,
        .description = gSwellowPokedexText,
		.pokedexShowEntry = gSwellowPokedexText,
        .pokemonScale = 428,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WINGULL] =
    {
        .categoryName = _("MOUETTE"),
        .height = 6,
        .weight = 95,
        .description = gWingullPokedexText,
		.pokedexShowEntry = gWingullPokedexText,
        .pokemonScale = 295,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PELIPPER] =
    {
        .categoryName = _("OISEAUDO"),
        .height = 12,
        .weight = 280,
        .description = gPelipperPokedexText,
		.pokedexShowEntry = gPelipperPokedexText,
        .pokemonScale = 288,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RALTS] =
    {
        .categoryName = _("SENTIMENT"),
        .height = 4,
        .weight = 66,
        .description = gRaltsPokedexText,
		.pokedexShowEntry = gRaltsPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KIRLIA] =
    {
        .categoryName = _("EMOTION"),
        .height = 8,
        .weight = 202,
        .description = gKirliaPokedexText,
		.pokedexShowEntry = gKirliaPokedexText,
        .pokemonScale = 354,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GARDEVOIR] =
    {
        .categoryName = _("ETREINTE"),
        .height = 16,
        .weight = 484,
        .description = gGardevoirPokedexText,
		.pokedexShowEntry = gGardevoirPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SURSKIT] =
    {
        .categoryName = _("MARESURFEUR"),
        .height = 5,
        .weight = 17,
        .description = gSurskitPokedexText,
		.pokedexShowEntry = gSurskitPokedexText,
        .pokemonScale = 375,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MASQUERAIN] =
    {
        .categoryName = _("BOULE OEIL"),
        .height = 8,
        .weight = 36,
        .description = gMasquerainPokedexText,
		.pokedexShowEntry = gMasquerainPokedexText,
        .pokemonScale = 378,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHROOMISH] =
    {
        .categoryName = _("CHAMPIGNON"),
        .height = 4,
        .weight = 45,
        .description = gShroomishPokedexText,
		.pokedexShowEntry = gShroomishPokedexText,
        .pokemonScale = 513,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRELOOM] =
    {
        .categoryName = _("CHAMPIGNON"),
        .height = 12,
        .weight = 392,
        .description = gBreloomPokedexText,
		.pokedexShowEntry = gBreloomPokedexText,
        .pokemonScale = 324,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLAKOTH] =
    {
        .categoryName = _("FLANEUR"),
        .height = 8,
        .weight = 240,
        .description = gSlakothPokedexText,
		.pokedexShowEntry = gSlakothPokedexText,
        .pokemonScale = 291,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VIGOROTH] =
    {
        .categoryName = _("TURBUSINGE"),
        .height = 14,
        .weight = 465,
        .description = gVigorothPokedexText,
		.pokedexShowEntry = gVigorothPokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLAKING] =
    {
        .categoryName = _("FAINEANT"),
        .height = 20,
        .weight = 1305,
        .description = gSlakingPokedexText,
		.pokedexShowEntry = gSlakingPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 300,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_NINCADA] =
    {
        .categoryName = _("APPRENTI"),
        .height = 5,
        .weight = 55,
        .description = gNincadaPokedexText,
		.pokedexShowEntry = gNincadaPokedexText,
        .pokemonScale = 405,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NINJASK] =
    {
        .categoryName = _("NINJA"),
        .height = 8,
        .weight = 120,
        .description = gNinjaskPokedexText,
		.pokedexShowEntry = gNinjaskPokedexText,
        .pokemonScale = 383,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHEDINJA] =
    {
        .categoryName = _("EXUVIE"),
        .height = 8,
        .weight = 12,
        .description = gShedinjaPokedexText,
		.pokedexShowEntry = gShedinjaPokedexText,
        .pokemonScale = 372,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WHISMUR] =
    {
        .categoryName = _("CHUCHOTEUR"),
        .height = 6,
        .weight = 163,
        .description = gWhismurPokedexText,
		.pokedexShowEntry = gWhismurPokedexText,
        .pokemonScale = 373,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOUDRED] =
    {
        .categoryName = _("GROSSE VOIX"),
        .height = 10,
        .weight = 405,
        .description = gLoudredPokedexText,
		.pokedexShowEntry = gLoudredPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EXPLOUD] =
    {
        .categoryName = _("BRUIT SOURD"),
        .height = 15,
        .weight = 840,
        .description = gExploudPokedexText,
		.pokedexShowEntry = gExploudPokedexText,
        .pokemonScale = 284,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAKUHITA] =
    {
        .categoryName = _("TENACE"),
        .height = 10,
        .weight = 864,
        .description = gMakuhitaPokedexText,
		.pokedexShowEntry = gMakuhitaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HARIYAMA] =
    {
        .categoryName = _("COGNEUR"),
        .height = 23,
        .weight = 2538,
        .description = gHariyamaPokedexText,
		.pokedexShowEntry = gHariyamaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 343,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_AZURILL] =
    {
        .categoryName = _("POINT POLKA"),
        .height = 2,
        .weight = 20,
        .description = gAzurillPokedexText,
		.pokedexShowEntry = gAzurillPokedexText,
        .pokemonScale = 603,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NOSEPASS] =
    {
        .categoryName = _("BOUSSOLE"),
        .height = 10,
        .weight = 970,
        .description = gNosepassPokedexText,
		.pokedexShowEntry = gNosepassPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 9,
        .trainerScale = 289,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_SKITTY] =
    {
        .categoryName = _("CHATON"),
        .height = 6,
        .weight = 110,
        .description = gSkittyPokedexText,
		.pokedexShowEntry = gSkittyPokedexText,
        .pokemonScale = 492,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DELCATTY] =
    {
        .categoryName = _("GUINDE"),
        .height = 11,
        .weight = 326,
        .description = gDelcattyPokedexText,
		.pokedexShowEntry = gDelcattyPokedexText,
        .pokemonScale = 322,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SABLEYE] =
    {
        .categoryName = _("OBSCURITE"),
        .height = 5,
        .weight = 110,
        .description = gSableyePokedexText,
		.pokedexShowEntry = gSableyePokedexText,
        .pokemonScale = 451,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAWILE] =
    {
        .categoryName = _("TROMPEUR"),
        .height = 6,
        .weight = 115,
        .description = gMawilePokedexText,
		.pokedexShowEntry = gMawilePokedexText,
        .pokemonScale = 466,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARON] =
    {
        .categoryName = _("ARMURFER"),
        .height = 4,
        .weight = 600,
        .description = gAronPokedexText,
		.pokedexShowEntry = gAronPokedexText,
        .pokemonScale = 419,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LAIRON] =
    {
        .categoryName = _("ARMURFER"),
        .height = 9,
        .weight = 1200,
        .description = gLaironPokedexText,
		.pokedexShowEntry = gLaironPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AGGRON] =
    {
        .categoryName = _("ARMURFER"),
        .height = 21,
        .weight = 3600,
        .description = gAggronPokedexText,
		.pokedexShowEntry = gAggronPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 350,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_MEDITITE] =
    {
        .categoryName = _("MEDITATION"),
        .height = 6,
        .weight = 112,
        .description = gMedititePokedexText,
		.pokedexShowEntry = gMedititePokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEDICHAM] =
    {
        .categoryName = _("MEDITATION"),
        .height = 13,
        .weight = 315,
        .description = gMedichamPokedexText,
		.pokedexShowEntry = gMedichamPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELECTRIKE] =
    {
        .categoryName = _("ORAGE"),
        .height = 6,
        .weight = 152,
        .description = gElectrikePokedexText,
		.pokedexShowEntry = gElectrikePokedexText,
        .pokemonScale = 290,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MANECTRIC] =
    {
        .categoryName = _("DECHARGE"),
        .height = 15,
        .weight = 402,
        .description = gManectricPokedexText,
		.pokedexShowEntry = gManectricPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PLUSLE] =
    {
        .categoryName = _("ACCLAMEUR"),
        .height = 4,
        .weight = 42,
        .description = gPluslePokedexText,
		.pokedexShowEntry = gPluslePokedexText,
        .pokemonScale = 515,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MINUN] =
    {
        .categoryName = _("ACCLAMEUR"),
        .height = 4,
        .weight = 42,
        .description = gMinunPokedexText,
		.pokedexShowEntry = gMinunPokedexText,
        .pokemonScale = 512,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VOLBEAT] =
    {
        .categoryName = _("LUCIOLE"),
        .height = 7,
        .weight = 177,
        .description = gVolbeatPokedexText,
		.pokedexShowEntry = gVolbeatPokedexText,
        .pokemonScale = 442,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ILLUMISE] =
    {
        .categoryName = _("LUCIOLE"),
        .height = 6,
        .weight = 177,
        .description = gIllumisePokedexText,
		.pokedexShowEntry = gIllumisePokedexText,
        .pokemonScale = 572,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROSELIA] =
    {
        .categoryName = _("EPINE"),
        .height = 3,
        .weight = 20,
        .description = gRoseliaPokedexText,
		.pokedexShowEntry = gRoseliaPokedexText,
        .pokemonScale = 677,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GULPIN] =
    {
        .categoryName = _("ESTOMAC"),
        .height = 4,
        .weight = 103,
        .description = gGulpinPokedexText,
		.pokedexShowEntry = gGulpinPokedexText,
        .pokemonScale = 593,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWALOT] =
    {
        .categoryName = _("SAC POISON"),
        .height = 17,
        .weight = 800,
        .description = gSwalotPokedexText,
		.pokedexShowEntry = gSwalotPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 345,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_CARVANHA] =
    {
        .categoryName = _("FEROCE"),
        .height = 8,
        .weight = 208,
        .description = gCarvanhaPokedexText,
		.pokedexShowEntry = gCarvanhaPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHARPEDO] =
    {
        .categoryName = _("BRUTAL"),
        .height = 18,
        .weight = 888,
        .description = gSharpedoPokedexText,
		.pokedexShowEntry = gSharpedoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_WAILMER] =
    {
        .categoryName = _("BALEINBOULE"),
        .height = 20,
        .weight = 1300,
        .description = gWailmerPokedexText,
		.pokedexShowEntry = gWailmerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 493,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WAILORD] =
    {
        .categoryName = _("CACHABOUEE"),
        .height = 145,
        .weight = 3980,
        .description = gWailordPokedexText,
		.pokedexShowEntry = gWailordPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 1352,
        .trainerOffset = 18,
    },

    [NATIONAL_DEX_NUMEL] =
    {
        .categoryName = _("ENGOURDI"),
        .height = 7,
        .weight = 240,
        .description = gNumelPokedexText,
		.pokedexShowEntry = gNumelPokedexText,
        .pokemonScale = 342,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CAMERUPT] =
    {
        .categoryName = _("ERUPTION"),
        .height = 19,
        .weight = 2200,
        .description = gCameruptPokedexText,
		.pokedexShowEntry = gCameruptPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 7,
        .trainerScale = 345,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_TORKOAL] =
    {
        .categoryName = _("CHARBON"),
        .height = 5,
        .weight = 804,
        .description = gTorkoalPokedexText,
		.pokedexShowEntry = gTorkoalPokedexText,
        .pokemonScale = 390,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPOINK] =
    {
        .categoryName = _("REBOND"),
        .height = 7,
        .weight = 306,
        .description = gSpoinkPokedexText,
		.pokedexShowEntry = gSpoinkPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRUMPIG] =
    {
        .categoryName = _("MAGOUILLEUR"),
        .height = 9,
        .weight = 715,
        .description = gGrumpigPokedexText,
		.pokedexShowEntry = gGrumpigPokedexText,
        .pokemonScale = 358,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPINDA] =
    {
        .categoryName = _("PANDA TACHE"),
        .height = 11,
        .weight = 50,
        .description = gSpindaPokedexText,
		.pokedexShowEntry = gSpindaPokedexText,
        .pokemonScale = 321,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TRAPINCH] =
    {
        .categoryName = _("PIEGEUR"),
        .height = 7,
        .weight = 150,
        .description = gTrapinchPokedexText,
		.pokedexShowEntry = gTrapinchPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VIBRAVA] =
    {
        .categoryName = _("VIBRATION"),
        .height = 11,
        .weight = 153,
        .description = gVibravaPokedexText,
		.pokedexShowEntry = gVibravaPokedexText,
        .pokemonScale = 370,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLYGON] =
    {
        .categoryName = _("MYSTIQUE"),
        .height = 20,
        .weight = 820,
        .description = gFlygonPokedexText,
		.pokedexShowEntry = gFlygonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_CACNEA] =
    {
        .categoryName = _("CACTUS"),
        .height = 4,
        .weight = 513,
        .description = gCacneaPokedexText,
		.pokedexShowEntry = gCacneaPokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CACTURNE] =
    {
        .categoryName = _("EPOUVANTAIL"),
        .height = 13,
        .weight = 774,
        .description = gCacturnePokedexText,
		.pokedexShowEntry = gCacturnePokedexText,
        .pokemonScale = 327,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWABLU] =
    {
        .categoryName = _("OISEAUCOTON"),
        .height = 4,
        .weight = 12,
        .description = gSwabluPokedexText,
		.pokedexShowEntry = gSwabluPokedexText,
        .pokemonScale = 422,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALTARIA] =
    {
        .categoryName = _("VIREVOLTEUR"),
        .height = 11,
        .weight = 206,
        .description = gAltariaPokedexText,
		.pokedexShowEntry = gAltariaPokedexText,
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZANGOOSE] =
    {
        .categoryName = _("CHAT FURET"),
        .height = 13,
        .weight = 403,
        .description = gZangoosePokedexText,
		.pokedexShowEntry = gZangoosePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEVIPER] =
    {
        .categoryName = _("SERPACROC"),
        .height = 27,
        .weight = 525,
        .description = gSeviperPokedexText,
		.pokedexShowEntry = gSeviperPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUNATONE] =
    {
        .categoryName = _("METEORITE"),
        .height = 10,
        .weight = 1680,
        .description = gLunatonePokedexText,
		.pokedexShowEntry = gLunatonePokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SOLROCK] =
    {
        .categoryName = _("METEORITE"),
        .height = 12,
        .weight = 1540,
        .description = gSolrockPokedexText,
		.pokedexShowEntry = gSolrockPokedexText,
        .pokemonScale = 328,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BARBOACH] =
    {
        .categoryName = _("BARBILLON"),
        .height = 4,
        .weight = 19,
        .description = gBarboachPokedexText,
		.pokedexShowEntry = gBarboachPokedexText,
        .pokemonScale = 581,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WHISCASH] =
    {
        .categoryName = _("BARBILLON"),
        .height = 9,
        .weight = 236,
        .description = gWhiscashPokedexText,
		.pokedexShowEntry = gWhiscashPokedexText,
        .pokemonScale = 317,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CORPHISH] =
    {
        .categoryName = _("BRUTE"),
        .height = 6,
        .weight = 115,
        .description = gCorphishPokedexText,
		.pokedexShowEntry = gCorphishPokedexText,
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRAWDAUNT] =
    {
        .categoryName = _("CRAPULE"),
        .height = 11,
        .weight = 328,
        .description = gCrawdauntPokedexText,
		.pokedexShowEntry = gCrawdauntPokedexText,
        .pokemonScale = 365,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BALTOY] =
    {
        .categoryName = _("POUPARGILE"),
        .height = 5,
        .weight = 215,
        .description = gBaltoyPokedexText,
		.pokedexShowEntry = gBaltoyPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLAYDOL] =
    {
        .categoryName = _("POUPARGILE"),
        .height = 15,
        .weight = 1080,
        .description = gClaydolPokedexText,
		.pokedexShowEntry = gClaydolPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 280,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_LILEEP] =
    {
        .categoryName = _("LIS D'EAU"),
        .height = 10,
        .weight = 238,
        .description = gLileepPokedexText,
		.pokedexShowEntry = gLileepPokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRADILY] =
    {
        .categoryName = _("BERNACLE"),
        .height = 15,
        .weight = 604,
        .description = gCradilyPokedexText,
		.pokedexShowEntry = gCradilyPokedexText,
        .pokemonScale = 267,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ANORITH] =
    {
        .categoryName = _("CRUSTAGE"),
        .height = 7,
        .weight = 125,
        .description = gAnorithPokedexText,
		.pokedexShowEntry = gAnorithPokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARMALDO] =
    {
        .categoryName = _("BLINDAGE"),
        .height = 15,
        .weight = 682,
        .description = gArmaldoPokedexText,
		.pokedexShowEntry = gArmaldoPokedexText,
        .pokemonScale = 312,
        .pokemonOffset = 3,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FEEBAS] =
    {
        .categoryName = _("POISSON"),
        .height = 6,
        .weight = 74,
        .description = gFeebasPokedexText,
		.pokedexShowEntry = gFeebasPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MILOTIC] =
    {
        .categoryName = _("TENDRE"),
        .height = 62,
        .weight = 1620,
        .description = gMiloticPokedexText,
		.pokedexShowEntry = gMiloticPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 360,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_CASTFORM] =
    {
        .categoryName = _("CLIMAT"),
        .height = 3,
        .weight = 8,
        .description = gCastformPokedexText,
		.pokedexShowEntry = gCastformPokedexText,
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KECLEON] =
    {
        .categoryName = _("MULTICOLOR"),
        .height = 10,
        .weight = 220,
        .description = gKecleonPokedexText,
		.pokedexShowEntry = gKecleonPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHUPPET] =
    {
        .categoryName = _("POUPEE"),
        .height = 6,
        .weight = 23,
        .description = gShuppetPokedexText,
		.pokedexShowEntry = gShuppetPokedexText,
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BANETTE] =
    {
        .categoryName = _("MARIONETTE"),
        .height = 11,
        .weight = 125,
        .description = gBanettePokedexText,
		.pokedexShowEntry = gBanettePokedexText,
        .pokemonScale = 262,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUSKULL] =
    {
        .categoryName = _("REQUIEM"),
        .height = 8,
        .weight = 150,
        .description = gDuskullPokedexText,
		.pokedexShowEntry = gDuskullPokedexText,
        .pokemonScale = 406,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUSCLOPS] =
    {
        .categoryName = _("APPEL"),
        .height = 16,
        .weight = 306,
        .description = gDusclopsPokedexText,
		.pokedexShowEntry = gDusclopsPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 299,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_TROPIUS] =
    {
        .categoryName = _("FRUIT"),
        .height = 20,
        .weight = 1000,
        .description = gTropiusPokedexText,
		.pokedexShowEntry = gTropiusPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 344,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_CHIMECHO] =
    {
        .categoryName = _("CARILLON"),
        .height = 6,
        .weight = 10,
        .description = gChimechoPokedexText,
		.pokedexShowEntry = gChimechoPokedexText,
        .pokemonScale = 505,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ABSOL] =
    {
        .categoryName = _("DESASTRE"),
        .height = 12,
        .weight = 470,
        .description = gAbsolPokedexText,
		.pokedexShowEntry = gAbsolPokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WYNAUT] =
    {
        .categoryName = _("RAVI"),
        .height = 6,
        .weight = 140,
        .description = gWynautPokedexText,
		.pokedexShowEntry = gWynautPokedexText,
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNORUNT] =
    {
        .categoryName = _("CAPUCHE"),
        .height = 7,
        .weight = 168,
        .description = gSnoruntPokedexText,
		.pokedexShowEntry = gSnoruntPokedexText,
        .pokemonScale = 380,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLALIE] =
    {
        .categoryName = _("FACE"),
        .height = 15,
        .weight = 2565,
        .description = gGlaliePokedexText,
		.pokedexShowEntry = gGlaliePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 344,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPHEAL] =
    {
        .categoryName = _("CLAP CLAP"),
        .height = 8,
        .weight = 395,
        .description = gSphealPokedexText,
		.pokedexShowEntry = gSphealPokedexText,
        .pokemonScale = 315,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEALEO] =
    {
        .categoryName = _("ROULE BOULE"),
        .height = 11,
        .weight = 876,
        .description = gSealeoPokedexText,
		.pokedexShowEntry = gSealeoPokedexText,
        .pokemonScale = 338,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WALREIN] =
    {
        .categoryName = _("BRISE GLACE"),
        .height = 14,
        .weight = 1506,
        .description = gWalreinPokedexText,
		.pokedexShowEntry = gWalreinPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLAMPERL] =
    {
        .categoryName = _("BIVALVE"),
        .height = 4,
        .weight = 525,
        .description = gClamperlPokedexText,
		.pokedexShowEntry = gClamperlPokedexText,
        .pokemonScale = 691,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HUNTAIL] =
    {
        .categoryName = _("ABYSSE"),
        .height = 17,
        .weight = 270,
        .description = gHuntailPokedexText,
		.pokedexShowEntry = gHuntailPokedexText,
        .pokemonScale = 307,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOREBYSS] =
    {
        .categoryName = _("MER DU SUD"),
        .height = 18,
        .weight = 226,
        .description = gGorebyssPokedexText,
		.pokedexShowEntry = gGorebyssPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RELICANTH] =
    {
        .categoryName = _("LONGEVITE"),
        .height = 10,
        .weight = 234,
        .description = gRelicanthPokedexText,
		.pokedexShowEntry = gRelicanthPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUVDISC] =
    {
        .categoryName = _("RENDEZVOUS"),
        .height = 6,
        .weight = 87,
        .description = gLuvdiscPokedexText,
		.pokedexShowEntry = gLuvdiscPokedexText,
        .pokemonScale = 371,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BAGON] =
    {
        .categoryName = _("TETE DE ROC"),
        .height = 6,
        .weight = 421,
        .description = gBagonPokedexText,
		.pokedexShowEntry = gBagonPokedexText,
        .pokemonScale = 448,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHELGON] =
    {
        .categoryName = _("ENDURANT"),
        .height = 11,
        .weight = 1105,
        .description = gShelgonPokedexText,
		.pokedexShowEntry = gShelgonPokedexText,
        .pokemonScale = 311,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SALAMENCE] =
    {
        .categoryName = _("DRAGON"),
        .height = 15,
        .weight = 1026,
        .description = gSalamencePokedexText,
		.pokedexShowEntry = gSalamencePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BELDUM] =
    {
        .categoryName = _("BOULEFER"),
        .height = 6,
        .weight = 952,
        .description = gBeldumPokedexText,
		.pokedexShowEntry = gBeldumPokedexText,
        .pokemonScale = 414,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_METANG] =
    {
        .categoryName = _("PINCEFER"),
        .height = 12,
        .weight = 2025,
        .description = gMetangPokedexText,
		.pokedexShowEntry = gMetangPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_METAGROSS] =
    {
        .categoryName = _("PATTEFER"),
        .height = 16,
        .weight = 5500,
        .description = gMetagrossPokedexText,
		.pokedexShowEntry = gMetagrossPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 447,
        .trainerOffset = 9,
    },

    [NATIONAL_DEX_REGIROCK] =
    {
        .categoryName = _("PIC ROCHEUX"),
        .height = 17,
        .weight = 2300,
        .description = gRegirockPokedexText,
		.pokedexShowEntry = gRegirockPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 309,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_REGICE] =
    {
        .categoryName = _("ICEBERG"),
        .height = 18,
        .weight = 1750,
        .description = gRegicePokedexText,
		.pokedexShowEntry = gRegicePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_REGISTEEL] =
    {
        .categoryName = _("FER"),
        .height = 19,
        .weight = 2050,
        .description = gRegisteelPokedexText,
		.pokedexShowEntry = gRegisteelPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 359,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_LATIAS] =
    {
        .categoryName = _("EON"),
        .height = 14,
        .weight = 400,
        .description = gLatiasPokedexText,
		.pokedexShowEntry = gLatiasPokedexText,
        .pokemonScale = 304,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LATIOS] =
    {
        .categoryName = _("EON"),
        .height = 20,
        .weight = 600,
        .description = gLatiosPokedexText,
		.pokedexShowEntry = gLatiosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 294,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_KYOGRE] =
    {
        .categoryName = _("BASSINMARIN"),
        .height = 45,
        .weight = 3520,
        .description = gKyogrePokedexText,
		.pokedexShowEntry = gKyogrePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 614,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_GROUDON] =
    {
        .categoryName = _("CONTINENT"),
        .height = 35,
        .weight = 9500,
        .description = gGroudonPokedexText,
		.pokedexShowEntry = gGroudonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
    },

    [NATIONAL_DEX_RAYQUAZA] =
    {
        .categoryName = _("CIEUX"),
        .height = 70,
        .weight = 2065,
        .description = gRayquazaPokedexText,
		.pokedexShowEntry = gRayquazaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 448,
        .trainerOffset = 12,
    },

    [NATIONAL_DEX_JIRACHI] =
    {
        .categoryName = _("SOUHAIT"),
        .height = 3,
        .weight = 11,
        .description = gJirachiPokedexText,
		.pokedexShowEntry = gJirachiPokedexText,
        .pokemonScale = 608,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEOXYS] =
    {
        .categoryName = _("ADN"),
        .height = 17,
        .weight = 608,
        .description = gDeoxysPokedexText,
		.pokedexShowEntry = gDeoxysPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },
};