CONST
// const: values
MAX_AMMO = 99999
AMMO_MAX = 99999

// const: scr stuff
player1 = $PLAYER_CHAR
scplayer = $PLAYER_ACTOR
flag_player_on_mission = $ONMISSION
ON = 1
OFF = 0

// const: cleo stuff
SEEK_SET = 0
SEEK_CUR = 1
SEEK_END = 2

// const: keyboard keys
KKEY_Esc = 0x3E8
KKEY_F1 = 0x3E9
KKEY_F2 = 0x3EA
KKEY_F3 = 0x3EB
KKEY_F4 = 0x3EC
KKEY_F5 = 0x3ED
KKEY_F6 = 0x3EE
KKEY_F7 = 0x3EF
KKEY_F8 = 0x3F0
KKEY_F9 = 0x3F1
KKEY_F10 = 0x3F2
KKEY_F11 = 0x3F3
KKEY_F12 = 0x3F4
KKEY_Ins = 0x3F5
KKEY_Del = 0x3F6
KKEY_Home = 0x3F7
KKEY_End = 0x3F8
KKEY_PgUp = 0x3F9
KKEY_PgDn = 0x3FA
KKEY_Up = 0x3FB
KKEY_Down = 0x3FC
KKEY_Left = 0x3FD
KKEY_Right = 0x3FE
KKEY_Div = 0x3FF
KKEY_Mul = 0x400
KKEY_Add = 0x401
KKEY_Sub = 0x402
KKEY_ExtDel = 0x403
KKEY_ExtEnd = 0x404
KKEY_ExtDown = 0x405
KKEY_ExtPgDn = 0x406
KKEY_ExtLeft = 0x407
KKEY_Num5 = 0x408
KKEY_NumLock = 0x409
KKEY_ExtRight = 0x40A
KKEY_ExtHome = 0x40B
KKEY_ExtUp = 0x40C
KKEY_ExtPgUp = 0x40D
KKEY_ExtInsert = 0x40E
KKEY_Enter = 0x40F
KKEY_Scroll = 0x410
KKEY_Pause = 0x411
KKEY_Back = 0x412
KKEY_Tab = 0x413
KKEY_CapsLock = 0x414
KKEY_ExtEnter = 0x415
KKEY_LShift = 0x416
KKEY_RShift = 0x417
KKEY_Shift = 0x418
KKEY_LCtrl = 0x419
KKEY_RCtrl = 0x41A
KKEY_LMenu = 0x41B
KKEY_RMenu = 0x41C
KKEY_LWin = 0x41D
KKEY_RWin = 0x41E
KKEY_Apps = 0x41F
KKEY_NULL = 0x420

// const: pads
PAD1 = 0
PAD2 = 1

// const: keys
LEFTSTICKX = 0
LEFTSTICKY = 1
RIGHTSTICKX = 2
RIGHTSTICKY = 3
LEFTSHOULDER1 = 4
LEFTSHOULDER2 = 5
RIGHTSHOULDER1 = 6
RIGHTSHOULDER2 = 7
DPADUP = 8
DPADDOWN = 9
DPADLEFT = 10
DPADRIGHT = 11
START = 12
SELECT = 13
SQUARE = 14
TRIANGLE = 15
CROSS = 16
CIRCLE = 17
LEFTSHOCK = 18
RIGHTSHOCK = 19

// const: eRelationship
// god knows which format is legit...
PED_RELATIONSHIP_RESPECT = 1
PED_RELATIONSHIP_LIKE = 2
PED_RELATIONSHIP_DISLIKE = 3
PED_RELATIONSHIP_HATE = 4
PED_RESPECT = 1
PED_LIKE = 2
PED_DISLIKE = 3
PED_HATE = 4
// (iv)
RELATIONSHIP_RESPECT = 1
RELATIONSHIP_LIKE = 2
RELATIONSHIP_DISLIKE = 3
RELATIONSHIP_HATE = 4

// const: scripts
SCRIPT_PLAYER_PARACHUTE = 0
SCRIPT_PARACHUTE = 1
SCRIPT_SLOT_MACHINE = 4
SCRIPT_ROULETTE = 5
SCRIPT_OTB_SCRIPT = 6
SCRIPT_ARCADE = 7
SCRIPT_VENDING_MACHINE = 8
SCRIPT_FOOD_VENDOR = 9
SCRIPT_GATES_SCRIPT = 10
SCRIPT_GYMBIKE = 11
SCRIPT_GYMBENCH = 12
SCRIPT_GYMTREAD = 13
SCRIPT_GYMDUMB = 14
SCRIPT_BASKETB = 15
SCRIPT_VIDPOK = 16
SCRIPT_BLACKJ = 17
SCRIPT_WHEELO = 18
SCRIPT_DEALER = 19
SCRIPT_HOME_BRAINS = 20
SCRIPT_POOL_SCRIPT = 21
SCRIPT_LOWR_CONT = 22
SCRIPT_BURG_BRAINS = 23
SCRIPT_GF_MEETING = 24
SCRIPT_GF_DATE = 25
SCRIPT_GF_SEX = 26
SCRIPT_CASINO_AMBIENCE = 27
SCRIPT_BAR_AMBIENCE = 28
SCRIPT_FOODBRAINS = 29
SCRIPT_OTB_AMBIENCE = 30
SCRIPT_STRIP_AMBIENCE = 31
SCRIPT_PLANES = 32
SCRIPT_TRAINS = 33
SCRIPT_ZERO_AMBIENCE = 34
SCRIPT_DANCE = 35
SCRIPT_SHOPKEEPER = 36
SCRIPT_CUSTOMER_PANIC = 37
SCRIPT_BAR_STAFF = 38
SCRIPT_BOUNCER = 39
SCRIPT_OTB_STAFF = 40
SCRIPT_PCHAIR = 41
SCRIPT_PCUSTOM = 42
SCRIPT_OTBWTCH = 43
SCRIPT_OTBSLP = 44
SCRIPT_OTBTILL = 45
SCRIPT_FBOOTHR = 46
SCRIPT_FBOOTHL = 47
SCRIPT_BARGUY = 48
SCRIPT_PEDROUL = 49
SCRIPT_PEDCARD = 50
SCRIPT_PEDSLOT = 51
SCRIPT_DANCER = 52
SCRIPT_STRIPW = 53
SCRIPT_STRIPM = 54
SCRIPT_BROWSE = 55
SCRIPT_COPSIT = 56
SCRIPT_COPLOOK = 57
SCRIPT_TICKET = 58
SCRIPT_SHOPPER = 59
SCRIPT_AMMU = 60
SCRIPT_TATTOO = 61
SCRIPT_BARBER = 62
SCRIPT_WARDROBE = 63
SCRIPT_CLOTHES = 64
SCRIPT_JUNKFUD = 65
SCRIPT_CARMOD1 = 66
SCRIPT_CRANE1 = 67
SCRIPT_CRANE2 = 68
SCRIPT_CRANE3 = 69
SCRIPT_CARPARK1 = 70
SCRIPT_IMPOUND = 71
SCRIPT_VALET = 72
SCRIPT_PHOTO = 73
SCRIPT_PRISONR = 74
SCRIPT_CAMERA = 75
SCRIPT_DEBT = 76
SCRIPT_HOTDOG = 77

// const: icon
ICON_YellowDot = 0
ICON_Airport = 5
ICON_Ammunation = 6
ICON_Barber = 7
ICON_B = 8
ICON_Dock = 9
ICON_BurgerShot = 10
ICON_Quarry = 11
ICON_PinkC = 12
ICON_Cv = 13
ICON_CluckinBell = 14
ICON_CJ = 15
ICON_CR = 15
ICON_CRASH = 16
ICON_Diner = 17
ICON_Emmets = 18
ICON_RedFlag = 19
ICON_Fire = 20
ICON_Girlfriend = 21
ICON_Hospital = 22
ICON_LocoSyndicate = 23
ICON_Maddogg = 24
ICON_MafiaCasino = 25
ICON_MC = 26
ICON_ModGarage = 27
ICON_OG = 28
ICON_Pizza = 29
ICON_Police = 30
ICON_Race = 33
ICON_R = 34
ICON_Save = 35
ICON_School = 36
ICON_Mystery = 37
ICON_S = 38
ICON_Tattoo = 39
ICON_TT = 40
ICON_Target = 41
ICON_Toreno = 42
ICON_Triad = 43
ICON_TriadCasino = 44
ICON_Clothes = 45
ICON_Woozie = 46
ICON_Z = 47
ICON_Club = 48
ICON_Bar = 49
ICON_Restaurant = 50
ICON_Truck = 51
ICON_Cash = 52

// const: blip sprites
BLIP_DESTINATION = 0
BLIP_BORDER = 1
BLIP_PLAYER = 2
BLIP_ARROW = 3
BLIP_NORTH = 4
BLIP_AIRYARD = 5
BLIP_GUN = 6
BLIP_BARBERS = 7
BLIP_BIG_SMOKE = 8
BLIP_BOATYARD = 9
BLIP_BURGER_SHOT = 10
BLIP_BULLDOZER = 11
BLIP_CATALINA = 12
BLIP_CESAR = 13
BLIP_CLUCKIN_BELL = 14
BLIP_CJ = 15
BLIP_CRASH1 = 16
BLIP_DINER = 17
BLIP_EMMET = 18
BLIP_ENEMYATTACK = 19
BLIP_FIRE = 20
BLIP_GIRLFRIEND = 21
BLIP_HOSPITAL = 22
BLIP_LOCO = 23
BLIP_MADDOG = 24
BLIP_MAFIA = 25
BLIP_MCSTRAP = 26
BLIP_MOD_GARAGE = 27
BLIP_OG_LOC = 28
BLIP_PIZZA_STACK = 29
BLIP_POLICE = 30
BLIP_PROPERTY_GREEN = 31
BLIP_PROPERTY_RED = 32
BLIP_RACE = 33
BLIP_RYDER = 34
BLIP_SAVEHOUSE = 35
BLIP_SCHOOL = 36
BLIP_UNKNOWN_CONTACT = 37
BLIP_SWEET = 38
BLIP_TATTOO = 39
BLIP_THE_TRUTH = 40
BLIP_WAYPOINT = 41
BLIP_TORENO_RANCH = 42
BLIP_TRIADS = 43
BLIP_TRIADS_CASINO = 44
BLIP_TSHIRT = 45
BLIP_WOOZIE = 46
BLIP_ZERO = 47
BLIP_DISCO = 48
BLIP_BAR = 49
BLIP_RESTAURANT = 50
BLIP_TRUCK = 51
BLIP_CASH = 52
BLIP_FLAG = 53
BLIP_GYM = 54
BLIP_IMPOUND = 55
BLIP_RUNWAY_LIGHT = 56
BLIP_RUNWAY = 57
BLIP_GANG_B = 58
BLIP_GANG_P = 59
BLIP_GANG_Y = 60
BLIP_GANG_N = 61
BLIP_GANG_G = 62
BLIP_SPRAY = 63

// const: eBlipType
BLIP_TYPE_CAR = 1
BLIP_TYPE_CHAR = 2
BLIP_TYPE_OBJECT = 3
BLIP_TYPE_COORD = 4
BLIP_TYPE_CONTACT = 5
BLIP_TYPE_PICKUP = 6

// const: eBlipDisplay
BLIP_DISPLAY_HIDDEN = 0
BLIP_DISPLAY_ARROW_ONLY = 1
BLIP_DISPLAY_MAP_ONLY = 2
BLIP_DISPLAY_ARROW_AND_MAP = 4

// const: eWeather
WEATHER_EXTRA_SUNNY = 0
WEATHER_SUNNY = 1
WEATHER_SUNNY_WINDY = 2
WEATHER_CLOUDY = 3
WEATHER_RAINING = 4
WEATHER_DRIZZLE = 5
WEATHER_FOGGY = 6
WEATHER_LIGHTNING = 7
WEATHER_EXTRA_SUNNY_2 = 8
WEATHER_SUNNY_WINDY_2 = 9

// const: fade
FADE_OUT = 0
FADE_IN = 1

// const: forcelights
NO_CAR_LIGHT_OVERRIDE = 0
FORCE_CAR_LIGHTS_OFF = 1
FORCE_CAR_LIGHTS_ON = 2

// const: eDoorLock
DOOR_LOCK_NONE = 0
DOOR_LOCK_IMPOSSIBLE_TO_OPEN = 4
CARLOCK_Unlocked = 1
CARLOCK_Locked = 2
CARLOCK_UnlockedForNPC = 3

// const: garage
GARAGE_Mission = 1

// const: walk speed
WALKSPEED_STAND = 1
WALKSPEED_TURNRIGHT = 2
WALKSPEED_TURNRIGHT = 3
WALKSPEED_WALK = 4
WALKSPEED_ROTATE = 5
WALKSPEED_RUN = 6
WALKSPEED_SPRINT = 7

// const: town
TOWN_LS = 1
TOWN_SF = 2
TOWN_LV = 3

// const: pedtype
PEDTYPE_PLAYER1 = 0
PEDTYPE_PLAYER2 = 1
PEDTYPE_PLAYERNETWORK = 2
PEDTYPE_PLAYERUNUSED = 3
PEDTYPE_CIVMALE = 4
PEDTYPE_CIVFEMALE = 5
PEDTYPE_COP = 6
PEDTYPE_GANG1 = 7
PEDTYPE_GANG2 = 8
PEDTYPE_GANG3 = 9
PEDTYPE_GANG4 = 10
PEDTYPE_GANG5 = 11
PEDTYPE_GANG6 = 12
PEDTYPE_GANG7 = 13
PEDTYPE_GANG8 = 14
PEDTYPE_GANG9 = 15
PEDTYPE_GANG10 = 17
PEDTYPE_DEALER = 17
PEDTYPE_MEDIC = 18
PEDTYPE_FIREMAN = 19
PEDTYPE_CRIMINAL = 20
PEDTYPE_BUM = 21
PEDTYPE_PROSTITUTE = 22
PEDTYPE_SPECIAL = 23
PEDTYPE_MISSION1 = 24
PEDTYPE_MISSION2 = 25
PEDTYPE_MISSION3 = 26
PEDTYPE_MISSION4 = 27
PEDTYPE_MISSION5 = 28
PEDTYPE_MISSION6 = 29
PEDTYPE_MISSION7 = 30
PEDTYPE_MISSION8 = 31
//-with R* gang names-
PEDTYPE_BALLAS = 7
PEDTYPE_GROVE = 8
PEDTYPE_VAGOS = 9
PEDTYPE_RIFA = 10
PEDTYPE_DANANG = 11
PEDTYPE_MAFIA = 12
PEDTYPE_TRIAD = 13
PEDTYPE_AZTECAS = 14

// const: gang
GANG_Ballas = 0
GANG_GroveStreet = 1
GANG_LosSantosVagos = 2
GANG_SanFierroRifa = 3
GANG_DaNangBoys = 4
GANG_Mafia = 5
GANG_MountainCloudBoys = 6
GANG_VarrioLosAztecas = 7
GANG_GSF = 1
GANG_LSV = 2
GANG_SFR = 3
GANG_DNB = 4
GANG_MCB = 6
GANG_VLA = 7

//const: weapontype
WEAPONTYPE_UNARMED = 0
WEAPONTYPE_BRASSKNUCKLE = 1 
WEAPONTYPE_GOLFCLUB = 2
WEAPONTYPE_NIGHTSTICK = 3
WEAPONTYPE_KNIFE = 4
WEAPONTYPE_BASEBALLBAT = 5
WEAPONTYPE_SHOVEL = 6
WEAPONTYPE_POOL_CUE = 7
WEAPONTYPE_KATANA = 8
WEAPONTYPE_CHAINSAW = 9

// gifts
WEAPONTYPE_DILDO1 = 10
WEAPONTYPE_DILDO2 = 11
WEAPONTYPE_VIBE1 = 12
WEAPONTYPE_VIBE2 = 13
WEAPONTYPE_FLOWERS = 14
WEAPONTYPE_CANE = 15

WEAPONTYPE_GRENADE = 16
WEAPONTYPE_TEARGAS = 17
WEAPONTYPE_MOLOTOV = 18
WEAPONTYPE_ROCKET = 19
WEAPONTYPE_ROCKET_HS = 20
WEAPONTYPE_FREEFALL_BOMB = 21

// FIRST SKILL WEAPON
WEAPONTYPE_PISTOL = 22 // handguns
WEAPONTYPE_PISTOL_SILENCED = 23
WEAPONTYPE_DESERT_EAGLE = 24
WEAPONTYPE_SHOTGUN = 25 // shotguns
WEAPONTYPE_SAWNOFF_SHOTGUN = 26 // one handed
WEAPONTYPE_SPAS12_SHOTGUN = 27
WEAPONTYPE_MICRO_UZI = 28 // submachine guns
WEAPONTYPE_MP5 = 29
WEAPONTYPE_AK47 = 30 // machine guns 
WEAPONTYPE_M4 = 31 
WEAPONTYPE_TEC9 = 32 // this uses stat from the micro_uzi
// END SKILL WEAPONS

WEAPONTYPE_COUNTRYRIFLE = 33 // rifles
WEAPONTYPE_SNIPERRIFLE = 34 
WEAPONTYPE_ROCKETLAUNCHER = 35 // specials
WEAPONTYPE_ROCKETLAUNCHER_HS = 36
WEAPONTYPE_FLAMETHROWER = 37
WEAPONTYPE_MINIGUN = 38
WEAPONTYPE_REMOTE_SATCHEL_CHARGE= 39
WEAPONTYPE_DETONATOR = 40 // plastic explosive
WEAPONTYPE_SPRAYCAN = 41
WEAPONTYPE_EXTINGUISHER = 42
WEAPONTYPE_CAMERA = 43
WEAPONTYPE_NIGHTVISION = 44
WEAPONTYPE_INFRARED = 45
WEAPONTYPE_PARACHUTE = 46
WEAPONTYPE_LAST_WEAPONTYPE = 47

WEAPONTYPE_ARMOUR = 48

// these are possible ways to die
WEAPONTYPE_RAMMEDBYCAR = 49
WEAPONTYPE_RUNOVERBYCAR = 50
WEAPONTYPE_EXPLOSION = 51
WEAPONTYPE_UZI_DRIVEBY = 52
WEAPONTYPE_DROWNING = 53
WEAPONTYPE_FALL = 54
WEAPONTYPE_UNIDENTIFIED = 55 // Used for damage being done
WEAPONTYPE_ANYMELEE = 56
WEAPONTYPE_ANYWEAPON = 57
WEAPONTYPE_FLARE = 58

// const: weaponskill
WEAPONSKILL_POOR = 0
WEAPONSKILL_STD = 1
WEAPONSKILL_PRO = 2
WEAPONSKILL_SPECIAL = 3 // for cops using pistols differently for example
WEAPONSKILL_MAX_NUMBER = 4

// const: camera jump modes
INTERPOLATION = 1
JUMP_CUT = 2

// const: cam zoom


// const: cammode
NONE = 0
TOPDOWN = 1
GTACLASSIC = 2
BEHINDCAR = 3
FOLLOWPED = 4
AIMING = 5
DEBUG = 6
SNIPER = 7
ROCKETLAUNCHER = 8
MODELVIEW = 9
BILL = 10
SYPHON = 11
CIRCLE = 12
CHEESYZOOM = 13
WHEELCAM = 14
FIXED = 15
1STPERSON = 16
FLYBY = 17
CAM_ON_A_STRING = 18
REACTION 19
FOLLOW_PED_WITH_BIND = 20
CHRIS = 21
BEHINDBOAT = 22
PLAYER_FALLEN_WATER = 23
CAM_ON_TRAIN_ROOF = 24
CAM_RUNNING_SIDE_TRAIN = 25
BLOOD_ON_THE_TRACKS = 26
IM_THE_PASSENGER_WOOWOO = 27
SYPHON_CRIM_IN_FRONT = 28
PED_DEAD_BABY = 29
PILLOWS_PAPS = 30
LOOK_AT_CARS = 31
ARRESTCAM_ONE = 32
ARRESTCAM_TWO = 33
M16_1STPERSON = 34
SPECIAL_FIXED_FOR_SYPHON = 35
FIGHT_CAM = 36
TOP_DOWN_PED = 37
SNIPER_RUNABOUT = 39
ROCKETLAUNCHER_RUNABOUT = 40
1STPERSON_RUNABOUT = 41
M16_FIRSTPERSON_RUNABOUT = 42
FIGHT_CAM_RUNABOUT = 43
EDITOR = 44
HELICANNON_1STPERSON = 45
CAMERA = 46
ATTACHCAM = 47
TWOPLAYER = 48
TWOPLAYER_IN_CAR_AND_SHOOTING = 49
TWOPLAYER_SEPARATE_CARS = 50
ROCKETLAUNCHER_HS = 51
ROCKETLAUNCHER_RUNABOUT_HS = 52
AIMWEAPON = 53
TWOPLAYER_SEPARATE_CARS_TOPDOWN = 54
AIMWEAPON_FROMCAR = 55
DW_HELI_CHASE = 56
DW_CAM_MAN = 57
DW_PLANE_SPOTTER = 59
DW_DOG_FIGHT = 60
DW_FISH = 61
DW_PLANECAM1 = 62
DW_PLANECAM2 = 63
DW_PLANECAM3 = 64
AIMWEAPON_ATTACHED = 65

// const: upgrade
UPGRADE_HOOD = 0
UPGRADE_VENT = 1
UPGRADE_SPOIL = 2
UPGRADE_SIDESKIRT = 3
UPGRADE_BULLFRNT = 4
UPGRADE_BULLREAR = 5
UPGRADE_LIGHTS = 6
UPGRADE_ROOF = 7
UPGRADE_NITRO = 8
UPGRADE_HYDRAULICS = 9
UPGRADE_STEREO = 10
UPGRADE_WHEELS = 12
UPGRADE_EXHAUST = 13
UPGRADE_BUMPFRNT = 14
UPGRADE_BUMPREAR = 15
UPGRADE_MISC = 16
UPGRADE_HEADLIGHT = 102
UPGRADE_STINGERSYSTEM = 103
UPGRADE_STINGER = 104

// const: stat
STAT_ProgressMade = 0
STAT_TotalProgress = 1
STAT_FurthestBBallHoop = 2
STAT_DistanceOnFoot = 3
STAT_DistanceByCar = 4
STAT_DistanceByMotorbike = 5
STAT_DistanceByBoat = 6
STAT_DistanceByGolfCart = 7
STAT_DistanceByHelicopter = 8
STAT_DistanceByPlane = 9
STAT_LongestWheelie = 10
STAT_LongestStoppie = 11
STAT_Longest2Wheeler = 12
STAT_WeaponBudget = 13
STAT_FashionBudget = 14
STAT_PropertyBudget = 15
STAT_PnSBudget = 16
STAT_LongestWheelie2 = 17
STAT_LongestStoppie2 = 18
STAT_Longest2Wheeler2 = 19
STAT_FoodBudget = 20
STAT_Fat = 21
STAT_Stanima = 22
STAT_Muscle = 23
STAT_MaxHealth = 24
STAT_SexAppeal = 25
STAT_DistanceBySwimming = 26
STAT_DistanceByBicycle = 27
STAT_DistanceOnTreadmill = 28
STAT_DistanceOnExerciseBike = 29
STAT_TattooBudget = 30
STAT_HairBudget = 31
STAT_GirlfriendBudget = 32
STAT_ProstituteBudget = 33
STAT_FurnitureBudget = 34
STAT_CashSpentGambling = 35
STAT_CashEarnedPimping = 36
STAT_CashWonGambling = 37
STAT_BestGamblingWin = 38
STAT_BestGamblingLoss = 39
STAT_BestBurglarySwag = 40
STAT_CashEarnedFromBurglaries = 41
STAT_CashSpentBuildingProperty = 42
STAT_Unused_43 = 43
STAT_LongestTreadmillTime = 44
STAT_LongestExerciseBikeTime = 45
STAT_HeaviestBenchPressWeight = 46
STAT_HeaviestDumbellWeight = 47
STAT_BestTimeIn8Track = 48
STAT_BestTimeInBMXChallenge = 49
STAT_LightestWeight = 50
STAT_LongestTimeWith5Stars = 51
STAT_LastChaseTimeWith5Stars = 52
STAT_WageBill = 53
STAT_StripClubBudget = 54
STAT_CarModBudget = 55
STAT_TimeSpentShopping = 56
STAT_TimeSpentGambling = 57
STAT_LongestMissionTime = 58
STAT_ShortestMissionTime = 59
STAT_AverageMissionTime = 60
STAT_DrugsBudget = 61
STAT_TotalShoppingBudget = 62
STAT_TimeSpentUnderwater = 63
STAT_TotalRespect = 64
STAT_GirlfriendRespect = 65
STAT_ClothingRespect = 66
STAT_FitnessRespect = 67
STAT_Respect = 68
STAT_PistolSkill = 69
STAT_SilencedPistolSkill = 70
STAT_DesertEagleSkill = 71
STAT_ShotgunSkill = 72
STAT_SawnoffShotgunSkill = 73
STAT_CombatShotgunSkill = 74
STAT_MachinePistolSkill = 75
STAT_SMBSkill = 76
STAT_AK47Skill = 77
STAT_M4Skill = 78
STAT_RifleSkill = 79
STAT_Appearance = 80
STAT_Gambling = 81
STAT_Unused_82 = 82
STAT_Unused_83 = 83
STAT_Unused_84 = 84
STAT_Unused_85 = 85
STAT_Unused_86 = 86
STAT_Unused_87 = 87
STAT_Unused_88 = 88
STAT_Unused_89 = 89
STAT_Unused_90 = 90
STAT_Unused_91 = 91
STAT_Unused_92 = 92
STAT_Unused_93 = 93
STAT_Unused_94 = 94
STAT_Unused_95 = 95
STAT_Unused_96 = 96
STAT_Unused_97 = 97
STAT_Unused_98 = 98
STAT_Unused_99 = 99
STAT_Unused_100 = 100
STAT_Unused_101 = 101
STAT_Unused_102 = 102
STAT_Unused_103 = 103
STAT_Unused_104 = 104
STAT_Unused_105 = 105
STAT_Unused_106 = 106
STAT_Unused_107 = 107
STAT_Unused_108 = 108
STAT_Unused_109 = 109
STAT_Unused_110 = 110
STAT_Unused_111 = 111
STAT_Unused_112 = 112
STAT_Unused_113 = 113
STAT_Unused_114 = 114
STAT_Unused_115 = 115
STAT_Unused_116 = 116
STAT_Unused_117 = 117
STAT_Unused_118 = 118
STAT_Unused_119 = 119
STAT_PeopleWastedByOthers = 120
STAT_PeopleWasted = 121
STAT_RoadVehiclesDestroyed = 122
STAT_BoatsDestroyed = 123
STAT_AircraftDestroyed = 124
STAT_CostOfPropertyDamaged = 125
STAT_BulletsFired = 126
STAT_KgsOfExplosivesUsed = 127
STAT_BulletsThatHit = 128
STAT_TiresPoppedWithGunfire = 129
STAT_TiresPopped = 129
STAT_NumberOfHeadshots = 130
STAT_TotalWantedStarsAttained = 131
STAT_TotalWantedStarsEvaded = 132
STAT_TimesBusted = 133
STAT_DaysPassedInGame = 134
STAT_HospitalVisits = 135
STAT_SafehouseVisits = 136
STAT_TimesCheated = 137
STAT_VehicleResprays = 138
STAT_MaxInsaneJumpDistance = 139
STAT_MaxInsaneJumpHeight = 140
STAT_MaxInsaneJumpFlips = 141
STAT_MaxInsaneJumpRotation = 142
STAT_BestInsaneStuntAwarded = 143
STAT_UniqueJumpsFound = 144
STAT_UniqueJumpsDone = 145
STAT_MissionAttempts = 146
STAT_MissionsPassed = 147
STAT_TotalMissionsInGame = 148
STAT_CashMadeInTaxi = 149
STAT_PassengersDroppedOff = 150
STAT_PeopleSavedInAmbulance = 151
STAT_CriminalsKilledInVigilante = 152
STAT_TotalFiresExtinguished = 153
STAT_PackagesDelivered = 154
STAT_Assassinations = 155
STAT_LastDanceScore = 156
STAT_BestVigilanteMissionLevel = 157
STAT_BestParamedicMissionLevel = 158
STAT_BestFirefighterMissionLevel = 159
STAT_DrivingSkill = 160
STAT_TruckMissionsPassed = 161
STAT_MoneyMadeFromTrucking = 162
STAT_RecruitedGangMemberDeaths = 163
STAT_Armour = 164
STAT_Energy = 165
STAT_PhotosTaken = 166
STAT_RampageAttempts = 167
STAT_RampagesSucceeded = 168
STAT_FlightTime = 169
STAT_TimesDrowned = 170
STAT_NumberOfGirlsPimped = 171
STAT_BestPositionIn8Track = 172
STAT_TimeOnJetpack = 173
STAT_ShootingRangeLevelsPassed = 174
STAT_MostCarsParkedAsValet = 175
STAT_KillsSinceLastCheckpoint = 176
STAT_TotalLegitimateKills = 177
STAT_NumberOfBloodringKills = 178
STAT_TotalTimeInBloodring = 179
STAT_HurricaneWarningOver = 180
STAT_CurrentCityUnlocked = 181
STAT_TotalPoliceBribes = 182
STAT_TotalCarsStolen = 183
STAT_TotalGirlfriends = 184
STAT_TotalBadDates = 185
STAT_TotalGirlsDated = 186
STAT_TotalGirlScores = 187
STAT_TotalGoodDates = 188
STAT_TotalGirlsDumped = 189
STAT_TotalProstituteVisits = 190
STAT_TotalHousesBurgled = 191
STAT_TotalSafesCracked = 192
STAT_BurgularStatus = 193
STAT_TotalStolenItemsSold = 194
STAT_Total8BallsInPool = 195
STAT_TotalWinsInPool = 196
STAT_TotalLossesInPool = 197
STAT_TotalGymVisits = 198
STAT_BodyType = 199
STAT_TotalMealsEaten = 200
STAT_CashMadeInQuarry = 201
STAT_TimeTakenToCompleteQuarry = 202
STAT_TotalFurnitureItems = 203
STAT_FavouriteConsoleGame = 204
STAT_Total8BallsInPool = 205
STAT_TotalWinsInPool = 206
STAT_TotalLossesInPool = 207
STAT_TotalGymVisits = 208
STAT_BodyType = 209
STAT_PimpingLevel = 210
STAT_BestKickstartScore = 211
STAT_BestLapTimeIn8Track = 212
STAT_TotalVehiclesExported = 213
STAT_TotalVehiclesImported = 214
STAT_BestBasketballScore = 215
STAT_FiresStarted = 216
STAT_DrugsSold = 217
STAT_DrugsBought = 218
STAT_BestLapTimeInDirtTrack = 219
STAT_BestTimeInDirtTrack = 220
STAT_BestPositionInDirtTrack = 221
STAT_BestTimeInNRG500Challenge = 222
STAT_FlyingSkill = 223
STAT_RespectMission = 224
STAT_LungCapacity = 225
STAT_GameGoreRating = 226
STAT_GameSexRating = 227
STAT_RespectMissionTotal = 228
STAT_BikeSkill = 229
STAT_CyclingSkill = 230
STAT_SnapshotsTaken = 231
STAT_TotalSnapshots = 232
STAT_Luck = 233
STAT_TerritoriesTaken = 234
STAT_TerritoriesLost = 235
STAT_TerritoriesHeld = 236
STAT_MostTerritoriesHeld = 237
STAT_GangMembersRecruited = 238
STAT_EnemyGangMembersKilled = 239
STAT_FriendlyGangMembersKilled = 240
STAT_HorseshoesCollected = 241
STAT_TotalHorseshoes = 242
STAT_OystersCollected = 243
STAT_TotalOysters = 244
STAT_Calories = 245
STAT_2Player_BestRampageTime = 246
STAT_2Player_BestCarRampageTime = 247
STAT_2Player_BestFootRampageTime = 248
STAT_2Player_BestHeliRampageTime = 249
STAT_2Player_BestBikeRampageTime = 250
STAT_BestKeepieUppyTime = 251
STAT_DeniseProgress = 252
STAT_MichelleProgress = 253
STAT_HelenaProgress = 254
STAT_BarbaraProgress = 255
STAT_KatieProgress = 256
STAT_MillieProgress = 257
STAT_BestPositionInLowriderRace = 258
STAT_BestTimeInLowriderRace = 259
STAT_BestPositionInLittleLoop = 260
STAT_BestTimeInLittleLoop = 261
STAT_BestPositionInBackroadWanderer = 262
STAT_BestTimeInBackroadWanderer = 263
STAT_BestPositionInCityCircuit = 264
STAT_BestTimeInCityCircuit = 265
STAT_BestPositionInVinewood = 266
STAT_BestTimeInVinewood = 267
STAT_BestPositionInFreeway = 268
STAT_BestTimeInFreeway = 269

// const: event
EVENT_NONE = 0
//EVENT_GROUP // default event for grouped peds
EVENT_VEHICLE_COLLISION = 1 // *
EVENT_PED_COLLISION = 2 // *
EVENT_PLAYER_COLLISION_WITH_PED = 4
//EVENT_OBJECT_COLLSION = 5 // ??
EVENT_BUILDING_COLLISION = 6 // *
EVENT_DRAGGED_OUT_CAR = 7
EVENT_KNOCK_OFF_BIKE = 8
EVENT_DAMAGE = 9
EVENT_DEATH = 10
EVENT_DEAD_PED = 11
EVENT_POTENTIAL_GET_RUN_OVER = 12
EVENT_POTENTIAL_WALK_INTO_PED = 13
EVENT_SHOT_FIRED = 15
EVENT_COP_CAR_BEING_STOLEN = 16
EVENT_PED_ENTERED_MY_VEHICLE = 17
EVENT_SEXY_PED = 20
EVENT_ATTRACTOR = 27
EVENT_VEHICLE_THREAT = 30
EVENT_GUN_AIMED_AT = 31
EVENT_SCRIPT_COMMAND = 32
EVENT_IN_AIR = 33
EVENT_ACQUAINTANCE_PED_HATE = 36
EVENT_ACQUAINTANCE_PED_DISLIKE = 37
EVENT_ACQUAINTANCE_PED_LIKE = 38
EVENT_ACQUAINTANCE_PED_RESPECT = 39
EVENT_VEHICLE_DAMAGE_WEAPON = 41
EVENT_SPECIAL = 42
EVENT_GOT_KNOCKED_OVER_BY_CAR = 43
EVENT_POTENTIAL_WALK_INTO_OBJECT = 44
EVENT_POTENTIAL_WALK_INTO = 46
EVENT_SCRIPTED_ATTRACTOR = 48
EVENT_SHOT_FIRED_WHIZZED_BY = 49
EVENT_LOW_ANGER_AT_PLAYER = 50
EVENT_HIGH_ANGER_AT_PLAYER = 51
EVENT_HEALTH_REALLY_LOW = 52
EVENT_HEALTH_LOW = 53
EVENT_LEADER_ENTERED_CAR_AS_DRIVER = 54
EVENT_LEADER_EXITED_CAR_AS_DRIVER = 55
EVENT_POTENTIAL_WALK_INTO_VEHICLE = 56
EVENT_ON_FIRE = 58
EVENT_FIRE_NEARBY = 59
EVENT_SOUND_LOUD = 61
EVENT_SOUND_QUIET = 62
EVENT_ACQUAINTANCE_PED_HATE_BADLY_LIT = 63
EVENT_WATERHOSED = 64
EVENT_SEEN_PANICKED_PED = 65
//began swimming = 66
EVENT_PLAYER_COMMAND_TO_GROUP = 71
EVENT_SEEN_COP = 72
EVENT_VEHICLE_DAMAGE_COLLISION = 73
EVENT_DANGER = 75
EVENT_PLAYER_COMMAND_TO_GROUP_GATHER = 76
EVENT_VEHICLE_ON_FIRE = 79
EVENT_STUCK_IN_AIR = 93

// const: task status
//TASK_STATUS_INITIATING = 0 // 7 in scripts
//TASK_STATUS_ACTIVE = 1
//TASK_STATUS_QUEUED = 2
//TASK_STATUS_UNUSED = 3
// something to do with peds group? = 4
// something to do with script brains? = 5
//TASK_STATUS_SECONDARY = 6
//TASK_STATUS_INACTIVE = 7

// const: task
TASK_SIMPLE_PLAYER_ON_FOOT = 0
TASK_SIMPLE_PLAYER_IN_CAR = 1
TASK_COMPLEX_MEDIC_TREAT_INJURED_PED = 100
TASK_COMPLEX_TREAT_ACCIDENT = 101
TASK_SIMPLE_GIVE_CPR = 102
TASK_COMPLEX_COP_ARREST_PED = 103
TASK_COMPLEX_COP_HASSLE_PED = 104
TASK_COMPLEX_HASSLED_BY_COP = 105
TASK_COMPLEX_PRESENT_ID_TO_COP = 106
TASK_COMPLEX_DRIVE_FIRE_TRUCK = 107
TASK_COMPLEX_USE_SWAT_ROPE = 108
TASK_COMPLEX_USE_WATER_CANNON = 109
TASK_COMPLEX_EXTINGUISH_FIRE_ON_FOOT = 110
TASK_NONE = 200
TASK_SIMPLE_UNINTERRUPTABLE = 201
TASK_SIMPLE_PAUSE = 202
TASK_SIMPLE_STAND_STILL = 203
TASK_SIMPLE_SET_STAY_IN_SAME_PLACE = 204
TASK_SIMPLE_GET_UP = 205
TASK_COMPLEX_GET_UP_AND_STAND_STILL = 206
TASK_SIMPLE_FALL = 207
TASK_COMPLEX_FALL_AND_GET_UP = 208
TASK_COMPLEX_FALL_AND_STAY_DOWN = 209
TASK_SIMPLE_JUMP = 210
TASK_COMPLEX_JUMP = 211
TASK_SIMPLE_DIE = 212
TASK_SIMPLE_DROWN = 213
TASK_SIMPLE_DIE_IN_CAR = 214
TASK_COMPLEX_DIE_IN_CAR = 215
TASK_SIMPLE_DROWN_IN_CAR = 216
TASK_COMPLEX_DIE = 217
TASK_SIMPLE_DEAD = 218
TASK_SIMPLE_TIRED = 219
TASK_SIMPLE_SIT_DOWN = 220
TASK_SIMPLE_SIT_IDLE = 221
TASK_SIMPLE_STAND_UP = 222
TASK_COMPLEX_SIT_DOWN_THEN_IDLE_THEN_STAND_UP = 223
TASK_COMPLEX_OBSERVE_TRAFFIC_LIGHTS = 224
TASK_COMPLEX_OBSERVE_TRAFFIC_LIGHTS_AND_ACHIEVE_HEADING = 225
TASK_NOT_USED = 226
TASK_COMPLEX_CROSS_ROAD_LOOK_AND_ACHIEVE_HEADING = 227
TASK_SIMPLE_TURN_180 = 228
TASK_SIMPLE_HAIL_TAXI = 229
TASK_COMPLEX_HIT_RESPONSE = 230
TASK_COMPLEX_HIT_BY_GUN_RESPONSE = 231
TASK_UNUSED_SLOT = 232
TASK_COMPLEX_USE_EFFECT = 233
TASK_COMPLEX_WAIT_AT_ATTRACTOR = 234
TASK_COMPLEX_USE_ATTRACTOR = 235
TASK_COMPLEX_WAIT_FOR_DRY_WEATHER = 236
TASK_COMPLEX_WAIT_FOR_BUS = 237
TASK_SIMPLE_WAIT_FOR_BUS = 238
TASK_SIMPLE_WAIT_FOR_PIZZA = 239
TASK_COMPLEX_IN_AIR_AND_LAND = 240
TASK_SIMPLE_IN_AIR = 241
TASK_SIMPLE_LAND = 242
TASK_COMPLEX_BE_IN_GROUP = 243
TASK_COMPLEX_SEQUENCE = 244
TASK_SIMPLE_CALL_FOR_BACKUP = 245
TASK_COMPLEX_USE_PAIRED_ATTRACTOR = 246
TASK_COMPLEX_USE_ATTRACTOR_PARTNER = 247
TASK_COMPLEX_ATTRACTOR_PARTNER_WAIT = 248
TASK_COMPLEX_USE_SCRIPTED_ATTRACTOR = 249
TASK_COMPLEX_ON_FIRE = 250
TASK_SIMPLE_BE_DAMAGED = 251
TASK_SIMPLE_TRIGGER_EVENT = 252
TASK_SIMPLE_RAGDOLL = 253
TASK_SIMPLE_CLIMB = 254
TASK_SIMPLE_PLAYER_ON_FIRE = 255
TASK_COMPLEX_PARTNER = 256
TASK_COMPLEX_STARE_AT_PED = 257
TASK_COMPLEX_USE_CLOSEST_FREE_SCRIPTED_ATTRACTOR = 258
TASK_COMPLEX_USE_EFFECT_RUNNING = 259
TASK_COMPLEX_USE_EFFECT_SPRINTING = 260
TASK_COMPLEX_USE_CLOSEST_FREE_SCRIPTED_ATTRACTOR_RUN = 261
TASK_COMPLEX_USE_CLOSEST_FREE_SCRIPTED_ATTRACTOR_SPRINT = 262
TASK_SIMPLE_CHOKING = 263
TASK_SIMPLE_IK_CHAIN = 264
TASK_SIMPLE_IK_MANAGER = 265
TASK_SIMPLE_IK_LOOK_AT = 266
TASK_COMPLEX_CLIMB = 267
TASK_COMPLEX_IN_WATER = 268
TASK_SIMPLE_TRIGGER_LOOK_AT = 269
TASK_SIMPLE_CLEAR_LOOK_AT = 270
TASK_SIMPLE_SET_CHAR_DECISION_MAKER = 271
TASK_SIMPLE_IK_POINT_R_ARM = 272
TASK_SIMPLE_IK_POINT_L_ARM = 273
TASK_COMPLEX_BE_STILL = 274
TASK_COMPLEX_USE_SEQUENCE = 275
TASK_SIMPLE_SET_KINDA_STAY_IN_SAME_PLACE = 276
TASK_COMPLEX_FALL_TO_DEATH = 277
TASK_WAIT_FOR_MATCHING_LEADER_AREA_CODES = 278
TASK_SIMPLE_LOOK_AT_ENTITY_OR_COORD = 300
TASK_SIMPLE_SAY = 301
TASK_SIMPLE_SHAKE_FIST = 302
TASK_SIMPLE_FACIAL = 303
TASK_COMPLEX_CHAINED_FACIAL = 304
TASK_COMPLEX_FACIAL = 305
TASK_SIMPLE_AFFECT_SECONDARY_BEHAVIOUR = 306
TASK_SIMPLE_HOLD_ENTITY = 307
TASK_SIMPLE_PICKUP_ENTITY = 308
TASK_SIMPLE_PUTDOWN_ENTITY = 309
TASK_COMPLEX_GO_PICKUP_ENTITY = 310
TASK_SIMPLE_DUCK_WHILE_SHOTS_WHIZZING = 311
TASK_SIMPLE_ANIM = 400
TASK_SIMPLE_NAMED_ANIM = 401
TASK_SIMPLE_TIMED_ANIM = 402
TASK_SIMPLE_HIT_BACK = 403
TASK_SIMPLE_HIT_FRONT = 404
TASK_SIMPLE_HIT_LEFT = 405
TASK_SIMPLE_HIT_RIGHT = 406
TASK_SIMPLE_HIT_BY_GUN_BACK = 407
TASK_SIMPLE_HIT_BY_GUN_FRONT = 408
TASK_SIMPLE_HIT_BY_GUN_LEFT = 409
TASK_SIMPLE_HIT_BY_GUN_RIGHT = 410
TASK_SIMPLE_HIT_WALL = 411
TASK_SIMPLE_COWER = 412
TASK_SIMPLE_HANDS_UP = 413
TASK_SIMPLE_HIT_BEHIND = 414
TASK_SIMPLE_DUCK = 415
TASK_SIMPLE_CHAT = 416
TASK_COMPLEX_SUNBATHE = 417
TASK_SIMPLE_SUNBATHE = 418
TASK_SIMPLE_DETONATE = 419
TASK_SIMPLE_USE_ATM = 420
TASK_SIMPLE_SCRATCH_HEAD = 421
TASK_SIMPLE_LOOK_ABOUT = 422
TASK_SIMPLE_ABSEIL = 423
TASK_SIMPLE_ANIM_LOOPED_MIDDLE = 424
TASK_SIMPLE_HANDSIGNAL_ANIM = 425
TASK_COMPLEX_HANDSIGNAL_ANIM = 426
TASK_SIMPLE_DUCK_FOREVER = 427
TASK_SIMPLE_START_SUNBATHING = 428
TASK_SIMPLE_IDLE_SUNBATHING = 429
TASK_SIMPLE_STOP_SUNBATHING = 430
TASK_SIMPLE_HIT_HEAD = 500
TASK_SIMPLE_EVASIVE_STEP = 501
TASK_COMPLEX_EVASIVE_STEP = 502
TASK_SIMPLE_EVASIVE_DIVE = 503
TASK_COMPLEX_EVASIVE_DIVE_AND_GET_UP = 504
TASK_COMPLEX_HIT_PED_WITH_CAR = 505
TASK_SIMPLE_KILL_PED_WITH_CAR = 506
TASK_SIMPLE_HURT_PED_WITH_CAR = 507
TASK_COMPLEX_WALK_ROUND_CAR = 508
TASK_COMPLEX_WALK_ROUND_BUILDING_ATTEMPT = 509
TASK_COMPLEX_WALK_ROUND_OBJECT = 510
TASK_COMPLEX_MOVE_BACK_AND_JUMP = 511
TASK_COMPLEX_EVASIVE_COWER = 512
TASK_COMPLEX_DIVE_FROM_ATTACHED_ENTITY_AND_GET_UP = 513
TASK_COMPLEX_WALK_ROUND_FIRE = 514
TASK_COMPLEX_STUCK_IN_AIR = 515
TASK_COMPLEX_INVESTIGATE_DEAD_PED = 600
TASK_COMPLEX_REACT_TO_GUN_AIMED_AT = 601
TASK_COMPLEX_WAIT_FOR_BACKUP = 602
TASK_COMPLEX_GET_OUT_OF_WAY_OF_CAR = 603
TASK_COMPLEX_EXTINGUISH_FIRES = 604
TASK_COMPLEX_ENTER_CAR_AS_PASSENGER = 700
TASK_COMPLEX_ENTER_CAR_AS_DRIVER = 701
TASK_COMPLEX_STEAL_CAR = 702
TASK_COMPLEX_DRAG_PED_FROM_CAR = 703
TASK_COMPLEX_LEAVE_CAR = 704
TASK_COMPLEX_LEAVE_CAR_AND_DIE = 705
TASK_COMPLEX_LEAVE_CAR_AND_FLEE = 706
TASK_COMPLEX_LEAVE_CAR_AND_WANDER = 707
TASK_COMPLEX_SCREAM_IN_CAR_THEN_LEAVE = 708
TASK_SIMPLE_CAR_DRIVE = 709
TASK_COMPLEX_CAR_DRIVE_TO_POINT = 710
TASK_COMPLEX_CAR_DRIVE_WANDER = 711
TASK_COMPLEX_ENTER_CAR_AS_PASSENGER_TIMED = 712
TASK_COMPLEX_ENTER_CAR_AS_DRIVER_TIMED = 713
TASK_COMPLEX_LEAVE_ANY_CAR = 714
TASK_COMPLEX_ENTER_BOAT_AS_DRIVER = 715
TASK_COMPLEX_LEAVE_BOAT = 716
TASK_COMPLEX_ENTER_ANY_CAR_AS_DRIVER = 717
TASK_COMPLEX_ENTER_CAR_AS_PASSENGER_WAIT = 718
TASK_SIMPLE_CAR_DRIVE_TIMED = 719
TASK_COMPLEX_SHUFFLE_SEATS = 720
TASK_COMPLEX_CAR_DRIVE_POINT_ROUTE = 721
TASK_COMPLEX_CAR_OPEN_DRIVER_DOOR = 722
TASK_SIMPLE_CAR_SET_TEMP_ACTION = 723
TASK_COMPLEX_CAR_DRIVE_MISSION = 724
TASK_COMPLEX_CAR_DRIVE = 725
TASK_COMPLEX_CAR_DRIVE_MISSION_FLEE_SCENE = 726
TASK_COMPLEX_ENTER_LEADER_CAR_AS_PASSENGER = 727
TASK_COMPLEX_CAR_OPEN_PASSENGER_DOOR = 728
TASK_COMPLEX_CAR_DRIVE_MISSION_KILL_PED = 729
TASK_COMPLEX_LEAVE_CAR_AS_PASSENGER_WAIT = 730
TASK_COMPLEX_GO_TO_CAR_DOOR_AND_STAND_STILL = 800
TASK_SIMPLE_CAR_ALIGN = 801
TASK_SIMPLE_CAR_OPEN_DOOR_FROM_OUTSIDE = 802
TASK_SIMPLE_CAR_OPEN_LOCKED_DOOR_FROM_OUTSIDE = 803
TASK_SIMPLE_BIKE_PICK_UP = 804
TASK_SIMPLE_CAR_CLOSE_DOOR_FROM_INSIDE = 805
TASK_SIMPLE_CAR_CLOSE_DOOR_FROM_OUTSIDE = 806
TASK_SIMPLE_CAR_GET_IN = 807
TASK_SIMPLE_CAR_SHUFFLE = 808
TASK_SIMPLE_CAR_WAIT_TO_SLOW_DOWN = 809
TASK_SIMPLE_CAR_WAIT_FOR_DOOR_NOT_TO_BE_IN_USE = 810
TASK_SIMPLE_CAR_SET_PED_IN_AS_PASSENGER = 811
TASK_SIMPLE_CAR_SET_PED_IN_AS_DRIVER = 812
TASK_SIMPLE_CAR_GET_OUT = 813
TASK_SIMPLE_CAR_JUMP_OUT = 814
TASK_SIMPLE_CAR_FORCE_PED_OUT = 815
TASK_SIMPLE_CAR_SET_PED_OUT = 816
TASK_SIMPLE_CAR_QUICK_DRAG_PED_OUT = 817
TASK_SIMPLE_CAR_QUICK_BE_DRAGGED_OUT = 818
TASK_SIMPLE_CAR_SET_PED_QUICK_DRAGGED_OUT = 819
TASK_SIMPLE_CAR_SLOW_DRAG_PED_OUT = 820
TASK_SIMPLE_CAR_SLOW_BE_DRAGGED_OUT = 821
TASK_SIMPLE_CAR_SET_PED_SLOW_DRAGGED_OUT = 822
TASK_COMPLEX_CAR_SLOW_BE_DRAGGED_OUT = 823
TASK_COMPLEX_CAR_SLOW_BE_DRAGGED_OUT_AND_STAND_UP = 824
TASK_COMPLEX_CAR_QUICK_BE_DRAGGED_OUT = 825
TASK_SIMPLE_BIKE_JACKED = 826
TASK_SIMPLE_SET_PED_AS_AUTO_DRIVER = 827
TASK_SIMPLE_GO_TO_POINT_NEAR_CAR_DOOR_UNTIL_DOOR_NOT_IN_USE = 828
TASK_SIMPLE_WAIT_UNTIL_PED_OUT_CAR = 829
TASK_COMPLEX_GO_TO_BOAT_STEERING_WHEEL = 830
TASK_COMPLEX_GET_ON_BOAT_SEAT = 831
TASK_SIMPLE_CREATE_CAR_AND_GET_IN = 832
TASK_SIMPLE_WAIT_UNTIL_PED_IN_CAR = 833
TASK_SIMPLE_CAR_FALL_OUT = 834
TASK_SIMPLE_GO_TO_POINT = 900
TASK_COMPLEX_GO_TO_POINT_SHOOTING = 901
TASK_SIMPLE_ACHIEVE_HEADING = 902
TASK_COMPLEX_GO_TO_POINT_AND_STAND_STILL = 903
TASK_COMPLEX_GO_TO_POINT_AND_STAND_STILL_AND_ACHIEVE_HEADING = 904
TASK_COMPLEX_FOLLOW_POINT_ROUTE = 905
TASK_COMPLEX_FOLLOW_NODE_ROUTE = 906
TASK_COMPLEX_SEEK_ENTITY = 907
TASK_COMPLEX_FLEE_POINT = 908
TASK_COMPLEX_FLEE_ENTITY = 909
TASK_COMPLEX_SMART_FLEE_POINT = 910
TASK_COMPLEX_SMART_FLEE_ENTITY = 911
TASK_COMPLEX_WANDER = 912
TASK_COMPLEX_FOLLOW_LEADER_IN_FORMATION = 913
TASK_COMPLEX_FOLLOW_SEXY_PED = 914
TASK_COMPLEX_GO_TO_ATTRACTOR = 915
TASK_COMPLEX_LEAVE_ATTRACTOR = 916
TASK_COMPLEX_AVOID_OTHER_PED_WHILE_WANDERING = 917
TASK_COMPLEX_GO_TO_POINT_ANY_MEANS = 918
TASK_COMPLEX_WALK_ROUND_SHOP = 919
TASK_COMPLEX_TURN_TO_FACE_ENTITY = 920
TASK_COMPLEX_AVOID_BUILDING = 921
TASK_COMPLEX_SEEK_ENTITY_ANY_MEANS = 922
TASK_COMPLEX_FOLLOW_LEADER_ANY_MEANS = 923
TASK_COMPLEX_GO_TO_POINT_AIMING = 924
TASK_COMPLEX_TRACK_ENTITY = 925
TASK_SIMPLE_GO_TO_POINT_FINE = 926
TASK_COMPLEX_FLEE_ANY_MEANS = 927
TASK_COMPLEX_FLEE_SHOOTING = 928
TASK_COMPLEX_SEEK_ENTITY_SHOOTING = 929
TASK_UNUSED1 = 930
TASK_COMPLEX_FOLLOW_PATROL_ROUTE = 931
TASK_COMPLEX_GOTO_DOOR_AND_OPEN = 932
TASK_COMPLEX_SEEK_ENTITY_AIMING = 933
TASK_SIMPLE_SLIDE_TO_COORD = 934
TASK_COMPLEX_INVESTIGATE_DISTURBANCE = 935
TASK_COMPLEX_FOLLOW_PED_FOOTSTEPS = 936
TASK_COMPLEX_FOLLOW_NODE_ROUTE_SHOOTING = 937
TASK_COMPLEX_USE_ENTRYEXIT = 938
TASK_COMPLEX_AVOID_ENTITY = 939
TASK_SMART_FLEE_ENTITY_WALKING = 940
TASK_COMPLEX_KILL_PED_ON_FOOT = 1000
TASK_COMPLEX_KILL_PED_ON_FOOT_MELEE = 1001
TASK_COMPLEX_KILL_PED_ON_FOOT_ARMED = 1002
TASK_COMPLEX_DESTROY_CAR = 1003
TASK_COMPLEX_DESTROY_CAR_MELEE = 1004
TASK_COMPLEX_DESTROY_CAR_ARMED = 1005
TASK_COMPLEX_REACT_TO_ATTACK = 1006
TASK_SIMPLE_BE_KICKED_ON_GROUND = 1007
TASK_SIMPLE_BE_HIT = 1008
TASK_SIMPLE_BE_HIT_WHILE_MOVING = 1009
TASK_COMPLEX_SIDE_STEP_AND_SHOOT = 1010
TASK_SIMPLE_DRIVEBY_SHOOT = 1011
TASK_SIMPLE_DRIVEBY_WATCH_FOR_TARGET = 1012
TASK_COMPLEX_DO_DRIVEBY = 1013
TASK_KILL_ALL_THREATS = 1014
TASK_KILL_PED_GROUP_ON_FOOT = 1015
TASK_SIMPLE_FIGHT = 1016
TASK_SIMPLE_USE_GUN = 1017
TASK_SIMPLE_THROW = 1018
TASK_SIMPLE_FIGHT_CTRL = 1019
TASK_SIMPLE_GUN_CTRL = 1020
TASK_SIMPLE_THROW_CTRL = 1021
TASK_SIMPLE_GANG_DRIVEBY = 1022
TASK_COMPLEX_KILL_PED_ON_FOOT_TIMED = 1023
TASK_COMPLEX_KILL_PED_ON_FOOT_STAND_STILL = 1024
TASK_UNUSED2 = 1025
TASK_KILL_PED_ON_FOOT_WHILE_DUCKING = 1026
TASK_SIMPLE_STEALTH_KILL = 1027
TASK_COMPLEX_KILL_PED_ON_FOOT_STEALTH = 1028
TASK_COMPLEX_KILL_PED_ON_FOOT_KINDA_STAND_STILL = 1029
TASK_COMPLEX_KILL_PED_AND_REENTER_CAR = 1030
TASK_COMPLEX_ROAD_RAGE = 1031
TASK_KILL_PED_FROM_BOAT = 1032
TASK_SIMPLE_SET_CHAR_IGNORE_WEAPON_RANGE_FLAG = 1033
TASK_SEEK_COVER_UNTIL_TARGET_DEAD = 1034
TASK_SIMPLE_ARREST_PED = 1100
TASK_COMPLEX_ARREST_PED = 1101
TASK_SIMPLE_BE_ARRESTED = 1102
TASK_COMPLEX_POLICE_PURSUIT = 1103
TASK_COMPLEX_BE_COP = 1104
TASK_COMPLEX_KILL_CRIMINAL = 1105
TASK_COMPLEX_COP_IN_CAR = 1106
TASK_SIMPLE_INFORM_GROUP = 1200
TASK_COMPLEX_GANG_LEADER = 1201
TASK_COMPLEX_PARTNER_DEAL = 1202
TASK_COMPLEX_PARTNER_GREET = 1203
TASK_COMPLEX_PARTNER_CHAT = 1204
TASK_COMPLEX_GANG_HASSLE_VEHICLE = 1205
TASK_COMPLEX_WALK_WITH_PED = 1206
TASK_COMPLEX_GANG_FOLLOWER = 1207
TASK_COMPLEX_WALK_ALONGSIDE_PED = 1208
TASK_COMPLEX_PARTNER_SHOVE = 1209
TASK_COMPLEX_SIGNAL_AT_PED = 1210
TASK_COMPLEX_PASS_OBJECT = 1211
TASK_COMPLEX_GANG_HASSLE_PED = 1212
TASK_COMPLEX_WAIT_FOR_PED = 1213
TASK_SIMPLE_DO_HAND_SIGNAL = 1214
TASK_COMPLEX_BE_IN_COUPLE = 1215
TASK_COMPLEX_GOTO_VEHICLE_AND_LEAN = 1216
TASK_COMPLEX_LEAN_ON_VEHICLE = 1217
TASK_COMPLEX_CHAT = 1218
TASK_COMPLEX_GANG_JOIN_RESPOND = 1219
TASK_ZONE_RESPONSE = 1300
TASK_SIMPLE_TOGGLE_PED_THREAT_SCANNER = 1301
TASK_FINISHED = 1302
TASK_SIMPLE_JETPACK = 1303
TASK_SIMPLE_SWIM = 1304
TASK_COMPLEX_SWIM_AND_CLIMB_OUT = 1305
TASK_SIMPLE_DUCK_TOGGLE = 1306
TASK_WAIT_FOR_MATCHING_AREA_CODES = 1307
TASK_SIMPLE_ON_ESCALATOR = 1308
TASK_COMPLEX_PROSTITUTE_SOLICIT = 1309
TASK_INTERIOR_USE_INFO = 1400
TASK_INTERIOR_GOTO_INFO = 1401
TASK_INTERIOR_BE_IN_HOUSE = 1402
TASK_INTERIOR_BE_IN_OFFICE = 1403
TASK_INTERIOR_BE_IN_SHOP = 1404
TASK_INTERIOR_SHOPKEEPER = 1405
TASK_INTERIOR_LIE_IN_BED = 1406
TASK_INTERIOR_SIT_ON_CHAIR = 1407
TASK_INTERIOR_SIT_AT_DESK = 1408
TASK_INTERIOR_LEAVE = 1409
TASK_INTERIOR_SIT_IN_RESTAURANT = 1410
TASK_INTERIOR_RESERVED2 = 1411
TASK_INTERIOR_RESERVED3 = 1412
TASK_INTERIOR_RESERVED4 = 1413
TASK_INTERIOR_RESERVED5 = 1414
TASK_INTERIOR_RESERVED6 = 1415
TASK_INTERIOR_RESERVED7 = 1416
TASK_INTERIOR_RESERVED8 = 1417
TASK_GROUP_FOLLOW_LEADER_ANY_MEANS = 1500
TASK_GROUP_FOLLOW_LEADER_WITH_LIMITS = 1501
TASK_GROUP_KILL_THREATS_BASIC = 1502
TASK_GROUP_KILL_PLAYER_BASIC = 1503
TASK_GROUP_STARE_AT_PED = 1504
TASK_GROUP_FLEE_THREAT = 1505
TASK_GROUP_PARTNER_DEAL = 1506
TASK_GROUP_PARTNER_GREET = 1507
TASK_GROUP_HASSLE_SEXY_PED = 1508
TASK_GROUP_HASSLE_THREAT = 1509
TASK_GROUP_USE_MEMBER_DECISION = 1510
TASK_GROUP_EXIT_CAR = 1511
TASK_GROUP_ENTER_CAR = 1512
TASK_GROUP_ENTER_CAR_AND_PERFORM_SEQUENCE = 1513
TASK_GROUP_RESPOND_TO_LEADER_COMMAND = 1514
TASK_GROUP_HAND_SIGNAL = 1515
TASK_GROUP_DRIVEBY = 1516
TASK_GROUP_HASSLE_THREAT_PASSIVE = 1517
TASK_SIMPLE_PLAY_ANIM = 1541
TASK_COMPLEX_USE_MOBILE_PHONE = 1600
TASK_SIMPLE_PHONE_TALK = 1601
TASK_SIMPLE_PHONE_IN = 1602
TASK_SIMPLE_PHONE_OUT = 1603
TASK_COMPLEX_USE_GOGGLES = 1604
TASK_SIMPLE_GOGGLES_ON = 1605
TASK_SIMPLE_GOGGLES_OFF = 1606
TASK_SIMPLE_INFORM_RESPECTED_FRIENDS = 1700
TASK_COMPLEX_USE_SCRIPTED_BRAIN = 1800
TASK_SIMPLE_FINISH_BRAIN = 1801
TASK_SIMPLE_PLAYER_IN_CAR = 1802
END