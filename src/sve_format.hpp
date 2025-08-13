#ifndef SVE_FORMAT_HPP
#define SVE_FORMAT_HPP

#include <cstdint>

// ================================================================
//   Enum definitions
// ===============================================================

enum class DifficultyLevel : uint16_t {
    CHIEFTAIN = 0,  // Easiest
    WARLORD   = 1,
    PRINCE    = 2,
    KING      = 3,
    EMPEROR   = 4   // Hardest
};

enum class CivID : uint16_t{

    // it is possible (tested) to set any value for any Civ, so that any leader can have any other leader graphics
   
    CIV_ROMANS      = 1,   // Caesar      = KING10.PIC (White flavor)
    CIV_BABYLONIANS = 2,   // Hammurabi   = KING07.PIC
    CIV_GERMANS     = 3,   // Frederick   = KING12.PIC
    CIV_EGYPTIANS   = 4,   // Ramesses    = KING01.PIC
    CIV_AMERICANS   = 5,   // Abe Lincoln = KING04.PIC
    CIV_GREEKS      = 6,   // Alexander   = KING13.PIC
    CIV_INDIANS     = 7,   // Gandhi      = KING02.PIC
    
    CIV_RUSSIANS    = 8,   // Stalin      = KING08.PIC (White flavor alternate: 1 + 8)
    CIV_ZULU        = 9,  // Shaka       = KING03.PIC
    CIV_FRENCH      = 10,  // Napoleon    = KING11.PIC
    CIV_AZTECS      = 11,  // Moctezuma   = KING09.PIC
    CIV_CHINESE     = 12,  // Mao Zedong  = KING06.PIC
    CIV_ENGLISH     = 13,  // Elizabeth   = KING00.PIC
    CIV_MONGOLS     = 14,  // Genghis Khan= KING05.PIC
   

    CIV_BARBARIANS = 0xffff,   // Attila - no graphics

    CIV_NONE       = 0      
};


// Speculative enum for Civ1 City Improvements (IDs 0–23)
// TODO: prove or disprove this 
enum class CityImprovements : uint8_t
{
    AQUEDUCT            = 0,
    BARRACKS            = 1,
    GRANARY             = 2,
    TEMPLE              = 3,
    CITY_WALLS          = 4,
    CATHEDRAL           = 5,
    COURTHOUSE          = 6,
    COLOSSEUM           = 7,
    LIBRARY             = 8,
    MARKETPLACE         = 9,
    BANK                = 10,
    FACTORY             = 11,
    HYDRO_PLANT         = 12,
    POWER_PLANT         = 13,
    MANUFACTURING_PLANT = 14,
    NUCLEAR_PLANT       = 15,
    MASS_TRANSIT        = 16,
    RECYCLING_CENTER    = 17,
    UNIVERSITY          = 18,
    PALACE              = 19,
    SDI_DEFENSE         = 20,
    SS_COMPONENT        = 21,
    SS_MODULE           = 22,
    SS_STRUCTURAL       = 23
    // bits 24–31 may be unused or reserved
};


enum class Government : uint16_t {
    ANARCHY   = 0,
    DESPOTISM = 1,
    MONARCHY  = 2,
    COMMUNISM = 3,
    REPUBLIC  = 4,
    DEMOCRACY = 5
};

enum class TechID : uint16_t {
    ALPHABET              = 0,
    CODE_OF_LAWS          = 1,
    CURRENCY              = 2,
    ATOMIC_THEORY         = 3,
    DEMOCRACY             = 4,
    MONARCHY              = 5,
    ASTRONOMY             = 6,
    MAPMAKING             = 7,
    NAVIGATION            = 8,
    MATHEMATICS           = 9,
    MEDICINE              = 10,
    PHYSICS               = 11,
    ENGINEERING           = 12,
    UNIVERSITY            = 13,
    MAGNETISM             = 14,
    ELECTRONICS           = 15,
    MASONRY               = 16,
    BRONZE_WORKING        = 17,
    IRON_WORKING          = 18,
    BRIDGE_BUILDING       = 19,
    INVENTION             = 20,
    COMPUTERS             = 21,
    WRITING               = 22,
    STEAM_ENGINE          = 23,
    TRADE                 = 24,
    CEREMONIAL_BURIAL     = 25,
    MYSTICISM             = 26,
    NUCLEAR_FISSION       = 27,
    PHILOSOPHY            = 28,
    RELIGION              = 29,
    LITERACY              = 30,
    HORSEBACK_RIDING      = 31,
    FEUDALISM             = 32,
    THE_WHEEL             = 33,
    GUNPOWDER             = 34,
    INDUSTRIALIZATION     = 35,
    CHEMISTRY             = 36,
    COMBUSTION            = 37,
    FLIGHT                = 38,
    ADVANCED_FLIGHT       = 39,
    SPACE_FLIGHT          = 40,
    MASS_PRODUCTION       = 41,
    POTTERY               = 42,
    COMMUNISM             = 43,
    THE_REPUBLIC          = 44,
    CONSTRUCTION          = 45,
    ROCKETRY              = 46,
    THE_CORPORATION       = 47,
    METALLURGY            = 48,
    RAILROAD              = 49,
    NUCLEAR_POWER         = 50,
    THEORY_OF_GRAVITY     = 51,
    STEEL                 = 52,
    BANKING               = 53,
    ELECTRICITY           = 54,
    REFINING              = 55,
    EXPLOSIVES            = 56,
    SUPERCONDUCTOR        = 57,
    AUTOMOBILE            = 58,
    GENETIC_ENGINEERING   = 59,
    PLASTICS              = 60,
    RECYCLING             = 61,
    CHIVALRY              = 62,
    ROBOTICS              = 63,
    CONSCRIPTION          = 64,
    LABOR_UNION           = 65,
    FUSION_POWER          = 66,
    DUMMY1                = 67,
    DUMMY2                = 68,
    DUMMY3                = 69,
    DUMMY4                = 70,
    FUTURE_TECH           = 71,
    NONE                  = 0xffff
};

// TODO: THIS IS NOT CORRECT -- FOUND IN GAME VALUE OF 19
enum class DiplomaticStatus : uint16_t{

    DIPLOMACY_AT_WAR             = 1 << 0,   // Bit 0: at war
    DIPLOMACY_AT_PEACE           = 1 << 1,   // Bit 1: at peace
    DIPLOMACY_ALLIANCE           = 1 << 2,   // Bit 2: alliance
    DIPLOMACY_VENDETTA           = 1 << 3,   // Bit 3: vendetta
    DIPLOMACY_UNKNOWN_4          = 1 << 4,   // Bit 4: ?
    DIPLOMACY_UNKNOWN_5          = 1 << 5,   // Bit 5: ?
    DIPLOMACY_EMBASSY_ESTABLISHED= 1 << 6,   // Bit 6: embassy established
    DIPLOMACY_UNKNOWN_7          = 1 << 7,   // Bit 7: ?

    DIPLOMACY_UNKNOWN_8          = 1 << 8,   // Bit 8: ?
    DIPLOMACY_UNKNOWN_9          = 1 << 9,   // Bit 9: ?
    DIPLOMACY_UNKNOWN_10         = 1 << 10,  // Bit 10: ?
    DIPLOMACY_UNKNOWN_11         = 1 << 11,  // Bit 11: ?
    DIPLOMACY_UNKNOWN_12         = 1 << 12,  // Bit 12: ?
    DIPLOMACY_UNKNOWN_13         = 1 << 13,  // Bit 13: ?
    DIPLOMACY_UNKNOWN_14         = 1 << 14,  // Bit 14: ?
    DIPLOMACY_UNKNOWN_15         = 1 << 15   // Bit 15: ?
};


// Complete City Name Enum for Civilization I
// Format: CITY_<NAME>_<CIVILIZATION>

enum  CityId : uint8_t{
    // Roman
    CITY_ROME_ROMAN = 0,
    CITY_CAESAREA_ROMAN,
    CITY_CARTHAGE_ROMAN,
    CITY_NICOPOLIS_ROMAN,
    CITY_BYZANTIUM_ROMAN,
    CITY_BRUNDISIUM_ROMAN,
    CITY_SYRACUSE_ROMAN,
    CITY_ANTIOCH_ROMAN,
    CITY_PALMYRA_ROMAN,
    CITY_CYRENE_ROMAN,
    CITY_GORDION_ROMAN,
    CITY_TYRUS_ROMAN,
    CITY_JERUSALEM_ROMAN,
    CITY_SELEUCIA_ROMAN,
    CITY_RAVENNA_ROMAN,
    CITY_ARTAXATA_ROMAN,

    // Babylonian
    CITY_BABYLON_BABYLONIAN,
    CITY_SUMER_BABYLONIAN,
    CITY_URUK_BABYLONIAN,
    CITY_NINEVEH_BABYLONIAN,
    CITY_ASHUR_BABYLONIAN,
    CITY_ELLIPI_BABYLONIAN,
    CITY_AKKAD_BABYLONIAN,
    CITY_ERIDU_BABYLONIAN,
    CITY_KISH_BABYLONIAN,
    CITY_NIPPUR_BABYLONIAN,
    CITY_SHURUPPAK_BABYLONIAN,
    CITY_ZARIQUM_BABYLONIAN,
    CITY_IZIBIA_BABYLONIAN,
    CITY_NIMRUD_BABYLONIAN,
    CITY_ARBELA_BABYLONIAN,
    CITY_ZAMUA_BABYLONIAN,

    // German
    CITY_BERLIN_GERMAN,
    CITY_LEIPZIG_GERMAN,
    CITY_HAMBURG_GERMAN,
    CITY_BREMEN_GERMAN,
    CITY_FRANKFURT_GERMAN,
    CITY_BONN_GERMAN,
    CITY_NUREMBERG_GERMAN,
    CITY_COLOGNE_GERMAN,
    CITY_HANNOVER_GERMAN,
    CITY_MUNICH_GERMAN,
    CITY_STUTTGART_GERMAN,
    CITY_HEIDELBURG_GERMAN,
    CITY_SALZBURG_GERMAN,
    CITY_KONIGSBERG_GERMAN,
    CITY_DORTMUND_GERMAN,
    CITY_BRANDENBURG_GERMAN,

    // Egyptian
    CITY_THEBES_EGYPTIAN,
    CITY_MEMPHIS_EGYPTIAN,
    CITY_ORYX_EGYPTIAN,
    CITY_HELIOPOLIS_EGYPTIAN,
    CITY_GAZA_EGYPTIAN,
    CITY_ALEXANDRIA_EGYPTIAN,
    CITY_BYBLOS_EGYPTIAN,
    CITY_CAIRO_EGYPTIAN,
    CITY_COPTOS_EGYPTIAN,
    CITY_EDFU_EGYPTIAN,
    CITY_PITHOM_EGYPTIAN,
    CITY_BUSIRIS_EGYPTIAN,
    CITY_ATHRIBIS_EGYPTIAN,
    CITY_MENDES_EGYPTIAN,
    CITY_TANIS_EGYPTIAN,
    CITY_ABYDOS_EGYPTIAN,

    // American
    CITY_WASHINGTON_AMERICAN,
    CITY_NEW_YORK_AMERICAN,
    CITY_BOSTON_AMERICAN,
    CITY_PHILADELPHIA_AMERICAN,
    CITY_ATLANTA_AMERICAN,
    CITY_CHICAGO_AMERICAN,
    CITY_BUFFALO_AMERICAN,
    CITY_ST_LOUIS_AMERICAN,
    CITY_DETROIT_AMERICAN,
    CITY_NEW_ORLEANS_AMERICAN,
    CITY_BALTIMORE_AMERICAN,
    CITY_DENVER_AMERICAN,
    CITY_CINCINNATI_AMERICAN,
    CITY_DALLAS_AMERICAN,
    CITY_LOS_ANGELES_AMERICAN,
    CITY_LAS_VEGAS_AMERICAN,

    // Greek
    CITY_ATHENS_GREEK,
    CITY_SPARTA_GREEK,
    CITY_CORINTH_GREEK,
    CITY_DELPHI_GREEK,
    CITY_ERETRIA_GREEK,
    CITY_PHARSALOS_GREEK,
    CITY_ARGOS_GREEK,
    CITY_MYCENAE_GREEK,
    CITY_HERAKLEIA_GREEK,
    CITY_ANTIOCH_GREEK,
    CITY_EPHESOS_GREEK,
    CITY_RHODES_GREEK,
    CITY_KNOSSOS_GREEK,
    CITY_TROY_GREEK,
    CITY_PERGAMON_GREEK,
    CITY_MILETOS_GREEK,

    // Indian
    CITY_DELHI_INDIAN,
    CITY_BOMBAY_INDIAN,
    CITY_MADRAS_INDIAN,
    CITY_BANGALORE_INDIAN,
    CITY_CALCUTTA_INDIAN,
    CITY_LAHORE_INDIAN,
    CITY_KARACHI_INDIAN,
    CITY_KOLHAPUR_INDIAN,
    CITY_JAIPUR_INDIAN,
    CITY_HYDERABAD_INDIAN,
    CITY_BENGAL_INDIAN,
    CITY_CHITTAGONG_INDIAN,
    CITY_PUNJAB_INDIAN,
    CITY_DACCA_INDIAN,
    CITY_INDUS_INDIAN,
    CITY_GANGES_INDIAN,

    // Russian
    CITY_MOSCOW_RUSSIAN,
    CITY_LENINGRAD_RUSSIAN,
    CITY_KIEV_RUSSIAN,
    CITY_MINSK_RUSSIAN,
    CITY_SMOLENSK_RUSSIAN,
    CITY_ODESSA_RUSSIAN,
    CITY_SEVASTOPOL_RUSSIAN,
    CITY_TBLISI_RUSSIAN,
    CITY_SVERDLOVSK_RUSSIAN,
    CITY_YAKUTSK_RUSSIAN,
    CITY_VLADIVOSTOK_RUSSIAN,
    CITY_NOVOGRAD_RUSSIAN,
    CITY_KRASNOYARSK_RUSSIAN,
    CITY_RIGA_RUSSIAN,
    CITY_ROSTOV_RUSSIAN,
    CITY_ASTRAKHAN_RUSSIAN,

    // Zulu
    CITY_ZIMBABWE_ZULU,
    CITY_ULUNDI_ZULU,
    CITY_BAPEDI_ZULU,
    CITY_HLOBANE_ZULU,
    CITY_ISANDHLWANA_ZULU,
    CITY_INTOMBE_ZULU,
    CITY_MPONDO_ZULU,
    CITY_NGOME_ZULU,
    CITY_SWAZI_ZULU,
    CITY_TUGELA_ZULU,
    CITY_UMTATA_ZULU,
    CITY_UMFOLOZI_ZULU,
    CITY_IBABANAGO_ZULU,
    CITY_ISIPEZI_ZULU,
    CITY_AMATIKULU_ZULU,
    CITY_ZUNGUIN_ZULU,

    // French
    CITY_PARIS_FRENCH,
    CITY_ORLEANS_FRENCH,
    CITY_LYONS_FRENCH,
    CITY_TOURS_FRENCH,
    CITY_CHARTRES_FRENCH,
    CITY_BORDEAUX_FRENCH,
    CITY_ROUEN_FRENCH,
    CITY_AVIGNON_FRENCH,
    CITY_MARSEILLES_FRENCH,
    CITY_GRENOBLE_FRENCH,
    CITY_DIJON_FRENCH,
    CITY_AMIENS_FRENCH,
    CITY_CHERBOURG_FRENCH,
    CITY_POITIERS_FRENCH,
    CITY_TOULOUSE_FRENCH,
    CITY_BAYONNE_FRENCH,

    // Aztec
    CITY_TENOCHTITLAN_AZTEC,
    CITY_CHIAUHTIA_AZTEC,
    CITY_CHAPULTEPEC_AZTEC,
    CITY_COATEPEC_AZTEC,
    CITY_AYOTZINCO_AZTEC,
    CITY_ITZAPALAPA_AZTEC,
    CITY_IZTAPAM_AZTEC,
    CITY_MITXCOAC_AZTEC,
    CITY_TACUBAYA_AZTEC,
    CITY_TECAMAC_AZTEC,
    CITY_TEPEZINCO_AZTEC,
    CITY_TICOMAN_AZTEC,
    CITY_TLAXCALA_AZTEC,
    CITY_XALTOCAN_AZTEC,
    CITY_XICALANGO_AZTEC,
    CITY_ZUMPANCO_AZTEC,

    // Chinese
    CITY_PEKING_CHINESE,
    CITY_SHANGHAI_CHINESE,
    CITY_CANTON_CHINESE,
    CITY_NANKING_CHINESE,
    CITY_TSINGTAO_CHINESE,
    CITY_HANGCHOW_CHINESE,
    CITY_TIENTSIN_CHINESE,
    CITY_TATUNG_CHINESE,
    CITY_MACAO_CHINESE,
    CITY_ANYANG_CHINESE,
    CITY_SHANTUNG_CHINESE,
    CITY_CHINAN_CHINESE,
    CITY_KAIFENG_CHINESE,
    CITY_NINGPO_CHINESE,
    CITY_PAOTING_CHINESE,
    CITY_YANGCHOW_CHINESE,

    // English
    CITY_LONDON_ENGLISH,
    CITY_COVENTRY_ENGLISH,
    CITY_BIRMINGHAM_ENGLISH,
    CITY_DOVER_ENGLISH,
    CITY_NOTTINGHAM_ENGLISH,
    CITY_YORK_ENGLISH,
    CITY_LIVERPOOL_ENGLISH,
    CITY_BRIGHTON_ENGLISH,
    CITY_OXFORD_ENGLISH,
    CITY_READING_ENGLISH,
    CITY_EXETER_ENGLISH,
    CITY_CAMBRIDGE_ENGLISH,
    CITY_HASTINGS_ENGLISH,
    CITY_CANTERBURY_ENGLISH,
    CITY_BANBURY_ENGLISH,
    CITY_NEWCASTLE_ENGLISH,

    // Mongol
    CITY_SAMARKAND_MONGOL,
    CITY_BOKHARA_MONGOL,
    CITY_NISHAPUR_MONGOL,
    CITY_KARAKORUM_MONGOL,
    CITY_KASHGAR_MONGOL,
    CITY_TABRIZ_MONGOL,
    CITY_ALEPPO_MONGOL,
    CITY_KABUL_MONGOL,
    CITY_ORMUZ_MONGOL,
    CITY_BASRA_MONGOL,
    CITY_KHANBALYK_MONGOL,
    CITY_KHORASAN_MONGOL,
    CITY_SHANGTU_MONGOL,
    CITY_KAZAN_MONGOL,
    CITY_QUINSAY_MONGOL,
    CITY_KERMAN_MONGOL,

    // Extra / Overflow Cities
    CITY_MECCA_EXTRA,
    CITY_NAPLES_EXTRA,
    CITY_SIDON_EXTRA,
    CITY_TYRE_EXTRA,
    CITY_TARSUS_EXTRA,
    CITY_ISSUS_EXTRA,
    CITY_CUNAXA_EXTRA,
    CITY_CREMONA_EXTRA,
    CITY_CANNAE_EXTRA,
    CITY_CAPUA_EXTRA,
    CITY_TURIN_EXTRA,
    CITY_GENOA_EXTRA,
    CITY_UTICA_EXTRA,
    CITY_CRETE_EXTRA,
    CITY_DAMASCUS_EXTRA,
    CITY_VERONA_EXTRA,
    CITY_SALAMIS_EXTRA,
    CITY_LISBON_EXTRA,
    CITY_HAMBURG_EXTRA,
    CITY_PRAGUE_EXTRA,
    CITY_SALZBURG_EXTRA,
    CITY_BERGEN_EXTRA,
    CITY_VENICE_EXTRA,
    CITY_MILAN_EXTRA,
    CITY_GHENT_EXTRA,
    CITY_PISA_EXTRA,
    CITY_CORDOBA_EXTRA,
    CITY_SEVILLE_EXTRA,
    CITY_DUBLIN_EXTRA,
    CITY_TORONTO_EXTRA,
    CITY_MELBOURNE_EXTRA,
    CITY_SYDNEY_EXTRA
};

enum class Strategy : uint16_t {
    SETTLE                = 0,
    ATTACK                = 1,
    DEFEND                = 2,
    TRANSPORT_UNITS_TO    = 3
};

enum class PalacePart : uint16_t{

    PALACE_PART_CANNOT_BE_BUILT =  0xffff,
    PALACE_PART_EMPTY           =  0,
    PALACE_PART_LEVEL_1         =  1,
    PALACE_PART_LEVEL_2         =  2,
    PALACE_PART_LEVEL_3         =  3, // highest possible level for garden parts
    PALACE_PART_LEVEL_4         =  4, // (highest possible level for castle parts)

};

enum class PalacePartStyle : uint16_t{

    PALACE_STYLE_MEDIVAL_EUROPE = 0,
    PALACE_STYLE_ANCIENT_ROME,
    PALACE_STYLE_ARABIAN    

};

enum class TerrainCategoryEnum : uint16_t{
    TERRAIN_LAND,
    TERRAIN_AIR,
    TERRAIN_SEA
};


// Classifies the functional role of a unit in Civ 1
// Controls AI behavior and allowable actions
enum class UnitRole : uint16_t{
    UNIT_ROLE_SETTLER     = 0,  // Can improve terrain, build roads/irrigation, and found cities
    UNIT_ROLE_LAND_ATTACK = 1,  // Ground units that can attack (e.g., Catapult, Bomber)
    UNIT_ROLE_DEFENSE     = 2,  // Units focused on defense (e.g., Phalanx, Riflemen)
    UNIT_ROLE_SEA_ATTACK  = 3,  // Naval units that can attack (e.g., Trireme, Battleship)
    UNIT_ROLE_AIR_ATTACK  = 4,  // Air units used for bombing and air combat (e.g., Bomber, Fighter)
    UNIT_ROLE_TRANSPORT   = 5,  // Sea units that carry land units (e.g., Transport, Carrier)
    UNIT_ROLE_CIVILIAN    = 6   // Non-combat units that can pass through enemy zones (e.g., Caravan, Diplomat)
};



enum class UnitTypeMap : uint8_t{

    UNIT_SETTLERS   = 0,
    UNIT_MILITIA    = 1,
    UNIT_PHALANX    = 2,
    UNIT_LEGION     = 3,
    UNIT_MUSKETEERS = 4,
    UNIT_RIFLEMEN   = 5,
    UNIT_CAVALRY    = 6,
    UNIT_KNIGHTS    = 7,
    UNIT_CATAPULT   = 8,
    UNIT_CANNON     = 9,
    UNIT_CHARIOT    = 10,
    UNIT_ARMOR      = 11,
    UNIT_MECH_INF   = 12,
    UNIT_ARTILLERY  = 13,
    UNIT_FIGHTER    = 14,
    UNIT_BOMBER     = 15,
    UNIT_TRIREME    = 16,
    UNIT_SAIL       = 17,
    UNIT_FRIGATE    = 18,
    UNIT_IRONCLAD   = 19,
    UNIT_CRUISER    = 20,
    UNIT_BATTLESHIP = 21,
    UNIT_SUBMARINE  = 22,
    UNIT_CARRIER    = 23,
    UNIT_TRANSPORT  = 24,
    UNIT_NUCLEAR    = 25,
    UNIT_DIPLOMAT   = 26,
    UNIT_CARAVAN    = 27,

    UNIT_NONE       = 0xff
};


// ================================================================================================================================================================================================
//   Helper structs
// ================================================================================================================================================================================================

struct Coordinates {
    uint8_t x;
    uint8_t y;
};

struct LeaderName {
    char Name[14];
};

struct CivName {
    char Name[12];
};

struct CitizenName {
    char Name[11];
};

struct ActiveUnit {
    int16_t Units[28];
};

struct UnitsInProduction {
    uint16_t Units[28];
};

struct DiscoveredCivAdvance {
     /*Advances already discovered by a Civ:

    !!! Must also update tech count !!!


    a series of 10 uint8_ts, 5 uint16_t bitflags, where each indicates whether an Advance was discovered or not
    refer to Civ Advances table for the list of valid IDs
    the discovered Advance bits are orderes in the same order as in the Civ Advances table (see this thread by Gowron, section 6. 'Tech Tree');
    the flag bits must be read as follows:

        flag_tech0 bit: 15 14 13 12   11 10 9   8     7  6  5    4  3  2  1  0
        advance ID:     15 14 13 12   11 10 9   8     7  6  5    4  3  2  1  0
        
        flag_tech1 bit: 15 14 13 12   11 10  9  8     7  6  5  4    3  2  1  0
        advance ID:     31 30 29 28   27 26 25 24    23 22 21 20   19 18 17 16
        
        flag_tech2 bit: 15 14 13 12   11 10  9  8     7  6  5  4    3  2  1  0
        advance ID:     47 46 45 44   43 42 41 40    39 38 37 36   35 34 33 32
        
        flag_tech3 bit: 15 14 13 12   11 10  9  8     7  6  5  4    3  2  1  0
        advance ID:     63 62 61 60   59 58 57 56    55 54 53 52   51 50 49 48
        
        flag_tech4 bit: 15 14 13 12   11 10  9  8     7  6  5  4    3  2  1  0
        advance ID:     79 78 77 76   75 74 73 72    71 70 69 68   67 66 65 64
    

    See above enum for tech id mappings
    */
    int16_t flag_tech0;
    int16_t flag_tech1;
    int16_t flag_tech2;
    int16_t flag_tech3;
    int16_t flag_tech4;
};

struct PerContinentCivAiStrategy {
    /*
    Per-continent Civ strategy:
    a series of 8 data blocks (1 for each Civ)
    each data block contains 16 uint16_t integers, 1 for each continent (16*2 = 32 uint8_ts)
    total size is 8*32 = 256 uint8_ts
    each uint16_t integer is a value that describes the Civ's AI strategy for this continent (values above suggested by Gowron):

    */
    Strategy strategy[16];
};


struct DiplomaticRelations{
    DiplomaticStatus relations[8];
};


struct PerContinentCivDefense{
    uint16_t continent[16];
};

struct PerContinentCivAtack{
    uint16_t continent[16];
};

struct PerContinentCivCityCount{
    uint16_t continent[16];
};

struct CityBuildingFlags{
/*
    a series of 4 uint8_t bitflag, where each bit indicates whether a given City improvement is built in the city
    the building bits are ordered in the same order as in the City Improvements table (see ref);
    the flag bits must be read as follows:
    Code:

    buildings_flag0 bit:  8  7  6  5    4  3  2  1
    building ID:          7  6  5  4    3  2  1  0

    buildings_flag1 bit:  8  7  6  5    4  3  2  1
    building ID:         15 14 13 12   11 10  9  8

    buildings_flag2 bit:  8  7  6  5    4  3  2  1
    building ID:         23 22 21 20   19 18 17 16

    buildings_flag3 bit:  8  7  6  5    4  3  2  1
    building ID:          .  .  .  .    .  .  .  .

    the last uint8_t is actually unused, at least not for city buildings
*/
    uint8_t buildings_flag0;
    uint8_t buildings_flag1;
    uint8_t buildings_flag2;
    uint8_t buildings_flag3; // possibly unused
};


struct City{

    CityBuildingFlags BuildingFlags;
    Coordinates Coords;

/*
    a single uint8_t used as bitflag representing the city status:
    currently known bits are as follows:
    Code:
    
    bit | meaning of bit value = 1
      0 | Civil disorder
      1 | Costal city (used by AI to build ships)
      2 | something related to city celebration/rapture
      3 | Hydro-powered: city benefits from hydro-electrical power bonus
      4 | Auto-build: city is in auto-build mode
      5 | Stolen tech: unclear, related to diplomats stealing techs from cities
      6 | Something else related to celebration/rapture
      7 | A city improvement was sold during this turn (cannot sell another one)
*/
    uint8_t StatusFlag;

    uint8_t ActualSize;                        // City 'true' size, as opposed to visible size below
    uint8_t VisibleSize;                       // City size as visible by the human player.

    uint8_t CurentProduction;                  //  ID of the current city production; refer to CITY PROD table (TODO)

    uint8_t BaseTrade;
    uint8_t OwningCiv;                         // ID of the Civ who owns the city
    uint16_t FoodStorage;
    uint16_t ShieldsStorage;
    uint8_t CitySquaresAndSpecialists[6];    

    CityId CityNameId;                        // ID of the name used for the city; this is an index to another data block, which is the list of city names
    
    CityId TradingCities[3];                  // ID of up to 3 other cities with which this city is trading; value 0xFF means that no trade route is established
                                              // Potential oversight: -> SIDNEY is of value 0xFF meaning that no city can have trades with Sidney

    uint8_t Unk[2];
};


struct CityName{
    char Name[13];
};




struct UnitType{

    char TypeName[12];
    TechID Cancelling_TechId;

    TerrainCategoryEnum TerrainCategory;

    uint16_t TotalMoves;

    // Number of turns that the unit can stay outdoors, meaning outside a city, a transport or a carrier:
    // if value is 0, there is no limitation
    // if value is 1 or more, the unit will be destroyed after it finished its Nth turn outside a city (if value is 1, then the unit can NEVER end its turn outdoors)
    uint16_t TurnsOutdoord;       

    uint16_t Atack;
    uint16_t Defense;

    uint16_t Cost; // The actual shield cost (amount of shileds needed to produce the unit) is tenfolds this value:

    /*
    The range of sight of the unit, i.e. how 'black' squares are revealed when the unit moves towards them:

    0 means that the unit will only reveal its own square and the 8 squares surrounding it; this is the default value, for most unit types; if the unit's terrain category is Land (0),
    2 means that the unit will reveal two 'rings' of squares surrounding it: the first 'ring' corresponds to the same 8 squares as for value 0; the second 'ring' is compomsed of the 16 additional squares surrounding the 8 squares of the first ring; this is the value for jetfighters and bombers
    3 is the same as 2, but is assigned to ships (cruiser, battleship, submarine); other difference not identified yet
    */
    uint16_t SightRange; 
    uint16_t TransportCapacity;

    UnitRole role;

    TechID UnlockingTech;

};



/*
    The following 12 uint8_ts represent a Unit
    this 12-uint8_t sequence is repeated 128 times for each Unit of a Civ
    the 12*128 uint8_ts block is then repeated 8 times, once for each Civ (totally 12*128*8 = 12288 uint8_ts), representing all of the units available in Civ (TODO: unit type ref table)
    this also means that Civ only supports 128 active units per civ at any single time
*/
struct Unit{
 /*
  A single uint8_t used as bitflag representing the unit status:

        bits are as follows:
  
            bit | meaning of bit value = 1
              0 | Sentry/sleeping
              1 | Improving terrain; see below
              2 | Fortifying (non-settler unit marked with an 'F', fortified this turn)
              3 | Fortified (non-settler unit surrounded with 'walls', fortified before this turn)
              4 | ? (unknown, thought to be related to sea transport, somehow)
              5 | Veteran
              6 | Improving terrain; see below
              7 | Improving terrain; see below

        Flags 1, 6 and 7 are combined as below to determine the current terrain improving task of a settler:

            bit1 | bit6 | bit7 | Task
               1 |    0 |    0 | Road/rail
               0 |    1 |    0 | Irrigation
               0 |    0 |    1 | Mining/forest
               0 |    1 |    1 | Building fortress
               1 |    0 |    1 | Cleaning pollution

*/
    uint8_t Status;
    
    Coordinates Position;
    UnitTypeMap Type; 
    uint8_t RemainingMoves;
    uint8_t SpecialMoves;
    Coordinates GoToCoordinates;
    uint8_t _unknown;
    uint8_t visibility;
    
    /*
    ID of the next unit in this unit's stack:

    when several units are located on the same map cell, Civ records them as a 'stack', which is actually a linked list;
    this value is the link to the next unit in the stack;
    the full linked list is closed loop, i.e. the last unit of the stack has a pointer to the first one
    the stack/list is used to decide in which order units are activated;
    for some operations where the maximum number of units is 10 (battle, nukes), this list is also controls which of the 10 units will be affected (first 10 units of the stack)
    */
    uint8_t NextUnitInStack;
    uint8_t HomeCity;

};



// this also means that Civ only supports 128 active units per civ at any single time
struct UnitsPerCivilization{
    Unit CivilizationUnits[128];
};


struct DestroyedUnitCounts{
    uint16_t NumOfDestroydUnits[8];
};


struct Wonders {
    uint8_t _unknown[2]; // placeholder for remaining data

    /*
     Each element contains the index of the city that currently owns the corresponding wonder.
     The value is a 16-bit index pointing to a city in the dynamic city block (not the static 8-bit CityId enum).
     A value of 0xFFFF typically means the wonder has not yet been built.
    */
    uint16_t Pyramids;
    uint16_t HangingGardens;
    uint16_t Colossus;
    uint16_t Lighthouse;
    uint16_t GreatLibrary;
    uint16_t Oracle;
    uint16_t GreatWall;
    uint16_t MagellansExpedition;
    uint16_t MichelangelosChapel;
    uint16_t CopernicusObservatory;
    uint16_t ShakespearesTheatre;
    uint16_t IsaacNewtonsCollege;
    uint16_t JSBachsCathedral;
    uint16_t DarwinsVoyage;
    uint16_t HooverDam;
    uint16_t WomensSuffrage;
    uint16_t ManhattanProject;
    uint16_t UnitedNations;
    uint16_t ApolloProgram;
    uint16_t SETIProgram;
    uint16_t CureForCancer;
};


struct UnitsLostPerCiv {

    uint16_t SettlersLost;
    uint16_t MilitiaLost;
    uint16_t PhalanxLost;
    uint16_t LegionLost;
    uint16_t MusketeersLost;
    uint16_t RiflemenLost;
    uint16_t CavalryLost;
    uint16_t KnightsLost;
    uint16_t CatapultLost;
    uint16_t CannonLost;
    uint16_t ChariotLost;
    uint16_t ArmorLost;
    uint16_t MechInfantryLost;
    uint16_t ArtilleryLost;
    uint16_t FighterLost;
    uint16_t BomberLost;
    uint16_t TriremeLost;
    uint16_t SailLost;
    uint16_t FrigateLost;
    uint16_t IroncladLost;
    uint16_t CruiserLost;
    uint16_t BattleshipLost;
    uint16_t SubmarineLost;
    uint16_t CarrierLost;
    uint16_t TransportLost;
    uint16_t NuclearLost;
    uint16_t DiplomatLost;
    uint16_t CaravanLost;
};



struct TechnologiesSource {
/*    
    Source Civs for technologies:
    For each civ and each technology, the game stores where the technology came from
    This only applies to technologies what were acquired via espionage, conquest or diplomatic exchange
    If a tech is not acquired yet, the value is 0xFF (-1)
    If a tech was self-discovered, or discovered in a hut, the value is 0
    It has been observed that for AI Civs, their own Civ ID is stored instead of '0' when they make the discovery themselves
*/
    uint8_t techs[72];
};



struct Palace{
    uint8_t _unknown0[2];

    // 7 buiding parts: leftmost(0) left(1) centerleft(2) center(3) centerright(4) right(5) rightmost(6)
    PalacePart BuildingParts[7];

    uint8_t _unknown1[2];

    // 3 garden parts: left hedge(0) central alley(1) right hedge(2)

    PalacePart GardenParts[3];
    uint8_t _unknown2[2];

    PalacePartStyle BuildingPartsStyle[7];

    uint8_t _unknown3[8];

};

// ================================================================================================================================================================================================
//   Main struct
// ================================================================================================================================================================================================

struct SVE_FILE{

    uint16_t gameTurnCounter;
    uint16_t HumanPlayerCiv;

    // this value does NOT determine what Civ the human player is controlling, so changing it does not seem to affect the game
    // its exact usage is still unclear
    uint16_t HumanPlayerCivBitflag; 


    uint16_t RandomMapSeed;

    // if this value is -4000 (4000 BC) and value of game.game_turn is 0, 
    // loading this savegame will prompt the user to the Civ selection screen
    uint16_t CurentYear;
    DifficultyLevel GameDifficultyLevel;
    uint16_t ActiveCivilizations;


    //  ID of the Civ Advance that the current human player is researching; refer to Civ Advances table for the list of valid IDs
    TechID CurentResearchedCivAdvance;

    LeaderName LeaderNames[8];
    CivName CivNames[8];
    CitizenName CitizenNames[8];

    // Capps at 30.000
    uint16_t Gold[8]; 


    uint16_t researchProgress[8];

    ActiveUnit ActiveUnits[8];
    UnitsInProduction UnitsInProductionPerCiv[8];

    // Each integer s the count of how many Advances a Civ has already discovered
    uint16_t DiscoveredAdvancesCount[8];
    DiscoveredCivAdvance DiscoveredCivAdvances[8];

    Government CivGovernment[8];

    PerContinentCivAiStrategy PerContinentCivAiStrategys[8];

    DiplomaticRelations Diplomacy[8];

    uint16_t CityCounts[8];
    uint16_t UnitCounts[8];
    uint16_t LandCounts[8];
    uint16_t SettlerCounts[8];

    uint16_t TotalCivSize[8];
    uint16_t MilitaryPower[8];
    // each of the 8 uint16_t is a ranking value representing the Civ's relative power in the world; the highest rank is 7, the lowest is 0 (Barbarians)
    uint16_t CivRankings[8];

    uint16_t TaxRate[8];
    uint16_t CivScore[8]; // each of the 8 uint16_t describes the score of a Civ, as shown in the F9 screen in-game
    uint16_t HumanContactTurnCounter[8]; // each of the 8 shorts seems to describe the number of turns when a Civ is willing to contact the human player again

    uint16_t StartingPositionXCoordinate[8];


    CivID CivIdentityAndGraphics[8];

    PerContinentCivDefense PerContinentCivDefenses[8];
    PerContinentCivAtack PerContinentCivAtacks[8];
    PerContinentCivCityCount PerContinentCivCityCounts[8];

    uint16_t ContinentSizes[64];
    uint16_t OceanSizes[64];

    uint16_t ContinentBuildingSiteCounts[16];

    uint8_t ScoreChart[1200];
    uint8_t PeaceChart[1200];


    City Cities[128];

    UnitType UnitTypes[28];  // representing all of the 28 unit types available in Civ
    UnitsPerCivilization Units[8];

    /*
    Map visibility for all Civs:

        this data block contains 1 uint8_t per map cell (80*50 = 4000)
        each uint8_t contains 8 bits, each bit acts as a 'flag' to determine whether the map cell is revealed (i.e. not black) for a particular Civ
        bit 0 determines whether Barbarians can see a cell: 
        it has a particular role, to also indicate whether a tribe hut was visited or not (see Random Seed regarding Tribe Huts)
        bits 1 to 7 indicate whether Civ 1 to 7 can see the map cell
    */

    uint8_t MapVisibility[4000];


    // TODO: see how this works
    // for more details, see this post and following: http://forums.civfanatics.com/showthread.php?p=12716635&post12716635
    uint8_t StrategicLocationsStatus[128];
    uint8_t StrategicLocationsPolicy[128];
    uint8_t StrategicLocationsX[128];
    uint8_t StrategicLocationsY[128];

    // Each value represents the ID of the Civ who first discovered the corresponding Tech (one of 72 (- 4 dummy) techs)
    CivID TechFirstInventors[72];

    DestroyedUnitCounts CivToCivDestroyedUnitCounts[8];

    CityName CityNames[256];


    // TODO: research this
    // Replay data: this block stores data used to generate the replay at the end of a Civ game; see this post by darkpanda: https://forums.civfanatics.com/threads/sve-file-format.493581/#post-12383993
    uint8_t Replay[4098];

    Wonders WorldWonders;

    UnitsLostPerCiv UnitsLost[8];

    TechnologiesSource SourceCivsForTechnologies[8];


    uint16_t PollutedSquareCount;


    // World pollution accumulated level
    // this is a single uint8_t controlling the level of global warming / world pollution: 
    /*
        values | sun color
            0   | none
        1,2,3 | dark red
        4,5,6,7 | red
        8,9,A,B | yellow
    C,D,E,F,10 | white

        the high-order uint8_t appears to be unused
    */
    uint16_t PollutionEffectLevel;

    uint16_t GlobalWarmingCount;

    /*
    this is a uint8_t bitflag controlling the enabled/disabled status of CIV settings:
        bit | meaning of bit value = 1
        0 | Instant advice
        1 | Auto-save
        2 | End of turn
        3 | Animations
        4 | Sound
        5 | Enemy moves
        6 | Civilopedia text
        7 | Palace

        the high-order uint8_t is unused
    */
    uint16_t GameSettings;

    // This data is described in full details in this series of posts: http://forums.civfanatics.com/showthread.php?p=12554133&post12554133
    // Investigation revealed that this data is actually wrongly generated by CIV (a patch to fix this is proposed at the link above)
    // Eact usage of this map is still unclear
    uint8_t LandPathfinding[260];

    //  The maximum value (2-uint8_t word) of Civ tech count among all Civs
    uint16_t MaxTechCount;

    uint16_t PlayerFutureTech;


    /*
    A 2-uint8_t word value whose first 4 bits only are used as function switches, controlling whether certain game features are enabled/disabled:

        bit 0: controls an AI/player diplomacy function, which is not yet fully understood; seems to be related to assessment of diplomatic relationships with others Civs...
        bit 1: may be related to possibility of civil disorder/unhappy citizens, and also the possibility of improving terrains, but still unclear...
        bit 2: controls the possibility of building City improvements
        bit 3: seems to control scientific research function; if 0, no research progress occurs at all
    */
    uint16_t DebugSwitches;

    /*
    Determines the level of science for a Civ; 0 means 0% while 10 means 100%
    combined with Tax rate (see above), this also determines the Luxury rate for a Civ
    To be noted that it is possible to set both 10 for Science and Tax, in which case Luxury rate becomes... -100%
    */

    uint16_t ScienceRates[8];

    uint16_t NextAnthologyTurn;

    uint16_t ComulativeEpicRankings[8];

    uint8_t SpaceShips[1462];


    Palace PlayerPalace;

    uint8_t CitiesXCoords[256]; // List of X coordinates for all cities, ordered by City Name ID (256 possible cities), 1 uint8_t per value
                            // If value is 0xFF, this means the city does not exist

    uint8_t CitiesYCoords[256]; // List of Y coordinates for all cities, ordered by City Name ID (256 possible cities), 1 uint8_t per value



    uint16_t PalaceLevel; // Number of total palace upgrades for the player

    uint16_t PeaceTurnCount; // Number of consecutive turns without any battle (incl. between AI players); CIV ignores this before 0 AD


    uint16_t AiOpponents; // Total number of Civs in this game, minus 1; possibly used by Civ to determine whether a Civ should be ressucitated when its counterpart is destroyed

    uint16_t SpaceshipPopulation[8]; // Population aboard the spaceship (x10,000)

    uint16_t SpaceshipLaunchYear[8];

    /*

    Similar to 'Civ identity/leader graphics' but represented as a bitflag
    The position of each bit determines which Civ 'flavour' it codes for: bit 0 is for Barbarians, bit 1 is for Romans/Russians, bit 2 is for Babylonians/Zulu, etc.
    The value of each bit determines which of the 2 Civ is active: bit1=0 -> Romans, bit1=1 -> Russians, etc.

    */

    uint16_t CivIdentifyFlag;


};


#endif
