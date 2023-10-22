#pragma once

#include "CSDefines.h"
#include "CSBaseObject.h"

namespace se::cs {
	namespace GMST {
		enum GMST {
			sMonthMorningstar,
			sMonthSunsdawn,
			sMonthFirstseed,
			sMonthRainshand,
			sMonthSecondseed,
			sMonthMidyear,
			sMonthSunsheight,
			sMonthLastseed,
			sMonthHeartfire,
			sMonthFrostfall,
			sMonthSunsdusk,
			sMonthEveningstar,
			sSpecialization,
			sSpecializationCombat,
			sSpecializationMagic,
			sSpecializationStealth,
			sSkillClassMajor,
			sSkillClassMinor,
			sSkillClassMisc,
			sRacialTraits,
			sHealthPerHourOfRest,
			sHealthPerLevel,
			sGoverningAttribute,
			sClass,
			sTraits,
			sJournal,
			sOK,
			sClose,
			sPrev,
			sNext,
			sTake,
			sWeaponTab,
			sApparelTab,
			sMagicTab,
			sMiscTab,
			sWornTab,
			sAllTab,
			sAttack,
			sUses,
			sQuality,
			sCharges,
			sArmorRating,
			sSlash,
			sThrust,
			sChop,
			sEncumbrance,
			sCondition,
			sWeight,
			sValue,
			sLight,
			sMedium,
			sHeavy,
			sCancel,
			sTakeAll,
			sUntilHealed,
			sRest,
			sWait,
			sRestIllegal,
			sGold,
			sMove,
			sTo,
			sActorInCombat,
			sArmor,
			sTopics,
			sService,
			sPersuasion,
			sBye,
			sGoodbye,
			sYes,
			sNo,
			sOn,
			sOff,
			sFull,
			sWorld,
			sExpelled,
			sExpelledMessage,
			sFavoriteSkills,
			sGame,
			sVideo,
			sAudio,
			sControls,
			sPrefs,
			sPreferences,
			sNewGame,
			sExitGame,
			sOptions,
			sSaveGame,
			sLoadGame,
			sDeleteGame,
			sSaveGameDenied,
			sSaveGameFailed,
			sSaveGameTooBig,
			sSaveGameNoMemory,
			sMaximumSaveGameMessage,
			sRender_Distance,
			sNear,
			sFar,
			sGamma_Correction,
			sLight_Gamma,
			sDark_Gamma,
			sSeldom,
			sAlways,
			sWaterTerrainReflect,
			sWaterReflectUpdate,
			fWaterReflectUpdateAlways,
			fWaterReflectUpdateSeldom,
			sMaster,
			sVoice,
			sEffects,
			sFootsteps,
			sMusic,
			sTransparency_Menu,
			sMenu_Help_Delay,
			sAIDistance,
			sHigh,
			sLow,
			sDetail_Level,
			sMenus,
			sStrip,
			sReturnToGame,
			sForward,
			sBack,
			sLeft,
			sRight,
			sUse,
			sActivate,
			sReady_Weapon,
			sReady_Magic,
			sCrouch_Sneak,
			sRun,
			sAlways_Run,
			sAuto_Run,
			sJump,
			sNextWeapon,
			sPrevWeapon,
			sNextSpell,
			sPrevSpell,
			sTogglePOVCmd,
			sMenu_Mode,
			sJournalCmd,
			sRestKey,
			sQuickMenu,
			sQuick1Cmd,
			sQuick2Cmd,
			sQuick3Cmd,
			sQuick4Cmd,
			sQuick5Cmd,
			sQuick6Cmd,
			sQuick7Cmd,
			sQuick8Cmd,
			sQuick9Cmd,
			sQuick10Cmd,
			sQuickSaveCmd,
			sQuickLoadCmd,
			sKeyName_00,
			sKeyName_01,
			sKeyName_02,
			sKeyName_03,
			sKeyName_04,
			sKeyName_05,
			sKeyName_06,
			sKeyName_07,
			sKeyName_08,
			sKeyName_09,
			sKeyName_0A,
			sKeyName_0B,
			sKeyName_0C,
			sKeyName_0D,
			sKeyName_0E,
			sKeyName_0F,
			sKeyName_10,
			sKeyName_11,
			sKeyName_12,
			sKeyName_13,
			sKeyName_14,
			sKeyName_15,
			sKeyName_16,
			sKeyName_17,
			sKeyName_18,
			sKeyName_19,
			sKeyName_1A,
			sKeyName_1B,
			sKeyName_1C,
			sKeyName_1D,
			sKeyName_1E,
			sKeyName_1F,
			sKeyName_20,
			sKeyName_21,
			sKeyName_22,
			sKeyName_23,
			sKeyName_24,
			sKeyName_25,
			sKeyName_26,
			sKeyName_27,
			sKeyName_28,
			sKeyName_29,
			sKeyName_2A,
			sKeyName_2B,
			sKeyName_2C,
			sKeyName_2D,
			sKeyName_2E,
			sKeyName_2F,
			sKeyName_30,
			sKeyName_31,
			sKeyName_32,
			sKeyName_33,
			sKeyName_34,
			sKeyName_35,
			sKeyName_36,
			sKeyName_37,
			sKeyName_38,
			sKeyName_39,
			sKeyName_3A,
			sKeyName_3B,
			sKeyName_3C,
			sKeyName_3D,
			sKeyName_3E,
			sKeyName_3F,
			sKeyName_40,
			sKeyName_41,
			sKeyName_42,
			sKeyName_43,
			sKeyName_44,
			sKeyName_45,
			sKeyName_46,
			sKeyName_47,
			sKeyName_48,
			sKeyName_49,
			sKeyName_4A,
			sKeyName_4B,
			sKeyName_4C,
			sKeyName_4D,
			sKeyName_4E,
			sKeyName_4F,
			sKeyName_50,
			sKeyName_51,
			sKeyName_52,
			sKeyName_53,
			sKeyName_54,
			sKeyName_55,
			sKeyName_56,
			sKeyName_57,
			sKeyName_58,
			sKeyName_59,
			sKeyName_5A,
			sKeyName_5B,
			sKeyName_5C,
			sKeyName_5D,
			sKeyName_5E,
			sKeyName_5F,
			sKeyName_60,
			sKeyName_61,
			sKeyName_62,
			sKeyName_63,
			sKeyName_64,
			sKeyName_65,
			sKeyName_66,
			sKeyName_67,
			sKeyName_68,
			sKeyName_69,
			sKeyName_6A,
			sKeyName_6B,
			sKeyName_6C,
			sKeyName_6D,
			sKeyName_6E,
			sKeyName_6F,
			sKeyName_70,
			sKeyName_71,
			sKeyName_72,
			sKeyName_73,
			sKeyName_74,
			sKeyName_75,
			sKeyName_76,
			sKeyName_77,
			sKeyName_78,
			sKeyName_79,
			sKeyName_7A,
			sKeyName_7B,
			sKeyName_7C,
			sKeyName_7D,
			sKeyName_7E,
			sKeyName_7F,
			sKeyName_80,
			sKeyName_81,
			sKeyName_82,
			sKeyName_83,
			sKeyName_84,
			sKeyName_85,
			sKeyName_86,
			sKeyName_87,
			sKeyName_88,
			sKeyName_89,
			sKeyName_8A,
			sKeyName_8B,
			sKeyName_8C,
			sKeyName_8D,
			sKeyName_8E,
			sKeyName_8F,
			sKeyName_90,
			sKeyName_91,
			sKeyName_92,
			sKeyName_93,
			sKeyName_94,
			sKeyName_95,
			sKeyName_96,
			sKeyName_97,
			sKeyName_98,
			sKeyName_99,
			sKeyName_9A,
			sKeyName_9B,
			sKeyName_9C,
			sKeyName_9D,
			sKeyName_9E,
			sKeyName_9F,
			sKeyName_A0,
			sKeyName_A1,
			sKeyName_A2,
			sKeyName_A3,
			sKeyName_A4,
			sKeyName_A5,
			sKeyName_A6,
			sKeyName_A7,
			sKeyName_A8,
			sKeyName_A9,
			sKeyName_AA,
			sKeyName_AB,
			sKeyName_AC,
			sKeyName_AD,
			sKeyName_AE,
			sKeyName_AF,
			sKeyName_B0,
			sKeyName_B1,
			sKeyName_B2,
			sKeyName_B3,
			sKeyName_B4,
			sKeyName_B5,
			sKeyName_B6,
			sKeyName_B7,
			sKeyName_B8,
			sKeyName_B9,
			sKeyName_BA,
			sKeyName_BB,
			sKeyName_BC,
			sKeyName_BD,
			sKeyName_BE,
			sKeyName_BF,
			sKeyName_C0,
			sKeyName_C1,
			sKeyName_C2,
			sKeyName_C3,
			sKeyName_C4,
			sKeyName_C5,
			sKeyName_C6,
			sKeyName_C7,
			sKeyName_C8,
			sKeyName_C9,
			sKeyName_CA,
			sKeyName_CB,
			sKeyName_CC,
			sKeyName_CD,
			sKeyName_CE,
			sKeyName_CF,
			sKeyName_D0,
			sKeyName_D1,
			sKeyName_D2,
			sKeyName_D3,
			sKeyName_D4,
			sKeyName_D5,
			sKeyName_D6,
			sKeyName_D7,
			sKeyName_D8,
			sKeyName_D9,
			sKeyName_DA,
			sKeyName_DB,
			sKeyName_DC,
			sKeyName_DD,
			sKeyName_DE,
			sKeyName_DF,
			sKeyName_E0,
			sKeyName_E1,
			sKeyName_E2,
			sKeyName_E3,
			sKeyName_E4,
			sKeyName_E5,
			sKeyName_E6,
			sKeyName_E7,
			sKeyName_E8,
			sKeyName_E9,
			sKeyName_EA,
			sKeyName_EB,
			sKeyName_EC,
			sKeyName_ED,
			sKeyName_EE,
			sKeyName_EF,
			sKeyName_F0,
			sKeyName_F1,
			sKeyName_F2,
			sKeyName_F3,
			sKeyName_F4,
			sKeyName_F5,
			sKeyName_F6,
			sKeyName_F7,
			sKeyName_F8,
			sKeyName_F9,
			sKeyName_FA,
			sKeyName_FB,
			sKeyName_FC,
			sKeyName_FD,
			sKeyName_FE,
			sKeyName_FF,
			sForwardXbox,
			sBackXbox,
			sSlideLeftXbox,
			sSlideRightXbox,
			sMenuModeXbox,
			sActivateXbox,
			sUseXbox,
			sReadyItemXbox,
			sReadyMagicXbox,
			sCrouchXbox,
			sRunXbox,
			sToggleRunXbox,
			sJumpXbox,
			sTogglePOVXbox,
			sMenuNextXbox,
			sMenuPrevXbox,
			sJournalXbox,
			sQuick4Xbox,
			sQuick5Xbox,
			sQuick6Xbox,
			sQuick7Xbox,
			sQuick8Xbox,
			sQuick9Xbox,
			sQuick0Xbox,
			sOptionsMenuXbox,
			sSystemMenuXbox,
			sRestMenuXbox,
			sQuickSaveXbox,
			sQuickLoadXbox,
			sMoveUpXbox,
			sMoveDownXbox,
			sLookUpXbox,
			sLookDownXbox,
			sTurnLeftXbox,
			sTurnRightXbox,
			sNextWeaponXbox,
			sPrevWeaponXbox,
			sNextSpellXbox,
			sPrevSpellXbox,
			sDialogText1Xbox,
			sDialogText2Xbox,
			sDialogText3Xbox,
			sQuick_Save,
			sShadowText,
			sLockSuccess,
			sLockFail,
			sLockImpossible,
			sTrapSuccess,
			sTrapFail,
			sTrapImpossible,
			sTrapped,
			sLockLevel,
			sKeyUsed,
			sUnlocked,
			fRepairMult,
			fRepairAmountMult,
			fSpellValueMult,
			fSpellMakingValueMult,
			fEnchantmentValueMult,
			fTravelMult,
			fTravelTimeMult,
			fMagesGuildTravel,
			sBarter,
			sRepair,
			sSpells,
			sTraining,
			sTravel,
			sSpellmaking,
			sEnchanting,
			sJoystickNotFound,
			sJournalEntry,
			sDay,
			sCreate,
			sIngredients,
			sApparatus,
			sCreatedEffects,
			sOnetypeEffectMessage,
			sName,
			sNameTitle,
			sSelect,
			sBuy,
			sInfo,
			sMagicEffects,
			sOnce,
			sCostCharge,
			sCostChance,
			sAttributesMenu1,
			sBirthsignmenu1,
			sBirthsignmenu2,
			sChooseClassMenu1,
			sChooseClassMenu2,
			sChooseClassMenu3,
			sChooseClassMenu4,
			sCreateClassMenuWarning,
			sClassChoiceMenu1,
			sClassChoiceMenu2,
			sClassChoiceMenu3,
			sNotifyMessage1,
			sNotifyMessage2,
			sNotifyMessage3,
			sNotifyMessage4,
			sNotifyMessage4XBOX,
			sNotifyMessage5,
			sNotifyMessage6,
			sNotifyMessage6a,
			sNotifyMessage7,
			sNotifyMessage8,
			sNotifyMessage9,
			sNotifyMessage10,
			sNotifyMessage11,
			sNotifyMessage12,
			sNotifyMessage13,
			sNotifyMessage14,
			sNotifyMessage15,
			sNotifyMessage16,
			sNotifyMessage16_a,
			sNotifyMessage17,
			sNotifyMessage18,
			sNotifyMessage19,
			sNotifyMessage20,
			sNotifyMessage21,
			sNotifyMessage22,
			sNotifyMessage23,
			sNotifyMessage24,
			sNotifyMessage25,
			sNotifyMessage26,
			sNotifyMessage27,
			sNotifyMessage28,
			sNotifyMessage29,
			sNotifyMessage30,
			sNotifyMessage31,
			sNotifyMessage32,
			sNotifyMessage33,
			sNotifyMessage34,
			sNotifyMessage35,
			sNotifyMessage36,
			sNotifyMessage37,
			sNotifyMessage38,
			sNotifyMessage39,
			sNotifyMessage40,
			sNotifyMessage41,
			sNotifyMessage42,
			sNotifyMessage43,
			sNotifyMessage44,
			sNotifyMessage45,
			sNotifyMessage46,
			sNotifyMessage47,
			sNotifyMessage48,
			sNotifyMessage49,
			sNotifyMessage50,
			sNotifyMessage51,
			sNotifyMessage52,
			sNotifyMessage53,
			sNotifyMessage54,
			sNotifyMessage55,
			sNotifyMessage56,
			sNotifyMessage57,
			sNotifyMessage58,
			sNotifyMessage59,
			sNotifyMessage60,
			sNotifyMessage61,
			sNotifyMessage62,
			sNotifyMessage63,
			sNotifyMessage64,
			sNotifyMessage65,
			sNotifyMessage66,
			sNotifyMessage67,
			sTeleportDisabled,
			sLevitateDisabled,
			sInPrisonTitle,
			sInfoRefusal,
			sAdmireSuccess,
			sAdmireFail,
			sIntimidateSuccess,
			sIntimidateFail,
			sTauntSuccess,
			sTauntFail,
			sServiceRefusal,
			sBribeSuccess,
			sBribeFail,
			sWerewolfRefusal,
			sWerewolfPopup,
			sWerewolfRestMessage,
			sWerewolfAlarmMessage,
			sBookSkillMessage,
			sLoadingMessage1,
			sLoadingMessage2,
			sLoadingMessage3,
			sLoadingMessage4,
			sLoadingMessage5,
			sLoadingMessage9,
			sLoadingMessage14,
			sLoadingMessage15,
			sInvalidSaveGameMsg,
			sInvalidSaveGameMsgXBOX,
			sLoadingErrorsMsg,
			sMissingMastersMsg,
			sChangedMastersMsg,
			sMastPlugMismatchMsg,
			sGeneralMastPlugMismatchMsg,
			sLoadLastSaveMsg,
			sMessage1,
			sMessage2,
			sMessage3,
			sMessage4,
			sMessage5,
			sMessageQuestionAnswer1,
			sMessageQuestionAnswer2,
			sMessageQuestionAnswer3,
			sBarterDialog1,
			sBarterDialog2,
			sBarterDialog3,
			sBarterDialog4,
			sBarterDialog5,
			sBarterDialog6,
			sBarterDialog7,
			sBarterDialog8,
			sBarterDialog9,
			sBarterDialog10,
			sBarterDialog11,
			sBarterDialog12,
			sInventoryMessage1,
			sInventoryMessage2,
			sInventoryMessage3,
			sInventoryMessage4,
			sInventoryMessage5,
			sContentsMessage1,
			sContentsMessage2,
			sContentsMessage3,
			sAttributeListTitle,
			sConsoleTitle,
			sCreateClassMenu1,
			sCreateClassMenu2,
			sCreateClassMenu3,
			sCreateClassMenuHelp1,
			sCreateClassMenuHelp2,
			sControlsMenu1,
			sControlsMenu2,
			sControlsMenu3,
			sControlsMenu4,
			sControlsMenu5,
			sControlsMenu6,
			sGameWithoutLauncherXbox,
			sDialogMenu1,
			sEnchantmentMenu1,
			sEnchantmentMenu2,
			sEnchantmentMenu3,
			sEnchantmentMenu4,
			sEnchantmentMenu5,
			sEnchantmentMenu6,
			sEnchantmentMenu7,
			sEnchantmentMenu8,
			sEnchantmentMenu9,
			sEnchantmentMenu10,
			sEnchantmentMenu11,
			sEnchantmentMenu12,
			sEnchantmentHelp1,
			sEnchantmentHelp2,
			sEnchantmentHelp3,
			sEnchantmentHelp4,
			sEnchantmentHelp5,
			sEnchantmentHelp6,
			sEnchantmentHelp7,
			sEnchantmentHelp8,
			sEnchantmentHelp9,
			sEnchantmentHelp10,
			sInputMenu1,
			sInventoryMenu1,
			sLevelUpMenu1,
			sLevelUpMenu2,
			sLevelUpMenu3,
			sLevelUpMenu4,
			sLevelUpMsg,
			sLevelUp,
			sRange,
			sArea,
			sMagnitude,
			sDuration,
			sDrain,
			sAbsorb,
			sFortify,
			sRestore,
			sDamage,
			spoint,
			spoints,
			spercent,
			sfor,
			ssecond,
			sseconds,
			sin,
			sfootarea,
			sfeet,
			sXTimes,
			sXTimesINT,
			sonword,
			sNone,
			sDone,
			sStartCell,
			sStartError,
			sStartCellError,
			sAdmire,
			sIntimidate,
			sTaunt,
			sBribe10Gold,
			sBribe100Gold,
			sBribe1000Gold,
			sPersuasionMenuTitle,
			sFast,
			sSlow,
			sBestAttack,
			sSubtitles,
			sMouseFlip,
			sCursorOff,
			sEnableJoystick,
			sXStrafe,
			sStrafe,
			sTurn,
			sMouseWheelUpShort,
			sMouseWheelDownShort,
			sMouse,
			sJoystickShort,
			sJoystickHatShort,
			sPickUp,
			sItemName,
			sNoName,
			sItem,
			sRaceMenu1,
			sRaceMenu2,
			sRaceMenu3,
			sRaceMenu4,
			sRaceMenu5,
			sRaceMenu6,
			sRaceMenu7,
			sRestMenu1,
			sRestMenu2,
			sRestMenu3,
			sRestMenu4,
			fRestMagicMult,
			sSaveMenu1,
			sServiceRepairTitle,
			sServiceTravelTitle,
			sServiceTrainingTitle,
			sServiceTrainingWords,
			sServiceSpellsTitle,
			sSkillsMenu1,
			sBonusSkillTitle,
			sSpecializationMenu1,
			sSpellmakingMenuTitle,
			sSpellmakingMenu1,
			sSpellmakingHelp1,
			sSpellmakingHelp2,
			sSpellmakingHelp3,
			sSpellmakingHelp4,
			sSpellmakingHelp5,
			sSpellmakingHelp6,
			sKilledEssential,
			sCrimeMessage,
			sPotionSuccess,
			sMagicItem,
			sMagnitudeDes,
			sAreaDes,
			sDurationDes,
			sRangeDes,
			sCrimeHelp,
			sSoulGem,
			sCastCost,
			sTravelServiceTitle,
			sSpellServiceTitle,
			sRepairServiceTitle,
			sTrainingServiceTitle,
			sMortar,
			sCalcinator,
			sAlembic,
			sRetort,
			sQuestionMark,
			s3dAudio,
			s3dHardware,
			s3dSoftware,
			sYourGold,
			sSellerGold,
			sMaxSale,
			sTotalCost,
			sTotalSold,
			sOffer,
			sLess,
			sMore,
			sInventory,
			sBookPageOne,
			sBookPageTwo,
			sDisposeofCorpse,
			sCaughtStealingMessage,
			sUserDefinedClass,
			sAsk,
			sEnchantItems,
			sSoulGemsWithSouls,
			sDoYouWantTo,
			sRechargeEnchantment,
			sMakeEnchantment,
			sSell,
			sEquip,
			sDrop,
			sContainer,
			sStats,
			sMap,
			sCenter,
			sSaveMenuHelp01,
			sSaveMenuHelp02,
			sSaveMenuHelp03,
			sSaveMenuHelp04,
			sSaveMenuHelp05,
			sSaveMenuHelp06,
			sDeleteNote,
			sEditNote,
			sBlocks,
			sFileSize,
			sSave,
			sDeleteSpell,
			sQuestionDeleteSpell,
			sDeleteSpellError,
			sLocal,
			sLoadFailedMessage,
			sShadows,
			sControlerVibration,
			sQuanityMenuMessage01,
			sQuanityMenuMessage02,
			sSex,
			sHair,
			sFace,
			sRepairFailed,
			sRepairSuccess,
			sHeal,
			sgp,
			sSetValueMessage01,
			sDelete,
			sVideoWarning,
			sResChangeWarning,
			sShift,
			sBackspace,
			sCustomClassName,
			sSpace,
			sInventorySelectNoItems,
			sInventorySelectNoSoul,
			sInventorySelectNoIngredients,
			sDisposeCorpseFail,
			sQuickMenuTitle,
			sQuickMenuInstruc,
			sQuickMenu1,
			sQuickMenu2,
			sQuickMenu3,
			sQuickMenu4,
			sQuickMenu5,
			sQuickMenu6,
			sMagicSelectTitle,
			sNextRank,
			sNeedOneSkill,
			sNeedTwoSkills,
			sand,
			sOneHanded,
			sTwoHanded,
			sType,
			sAt,
			sUnequip,
			sScrolldown,
			sScrollup,
			sSleepInterrupt,
			sSoultrapSuccess,
			sCantEquipWeapWarning,
			sOfferMenuTitle,
			sPowers,
			sBreath,
			sDifficulty,
			sEasy,
			sHard,
			sProfitValue,
			sCompanionShare,
			sCompanionWarningMessage,
			sCompanionWarningButtonOne,
			sCompanionWarningButtonTwo,
			sAttributeStrength,
			sAttributeIntelligence,
			sAttributeWillpower,
			sAttributeAgility,
			sAttributeSpeed,
			sAttributeEndurance,
			sAttributePersonality,
			sAttributeLuck,
			sSkillBlock,
			sSkillArmorer,
			sSkillMediumarmor,
			sSkillHeavyarmor,
			sSkillBluntweapon,
			sSkillLongblade,
			sSkillAxe,
			sSkillSpear,
			sSkillAthletics,
			sSkillEnchant,
			sSkillDestruction,
			sSkillAlteration,
			sSkillIllusion,
			sSkillConjuration,
			sSkillMysticism,
			sSkillRestoration,
			sSkillAlchemy,
			sSkillUnarmored,
			sSkillSecurity,
			sSkillSneak,
			sSkillAcrobatics,
			sSkillLightarmor,
			sSkillShortblade,
			sSkillMarksman,
			sSkillMercantile,
			sSkillSpeechcraft,
			sSkillHandtohand,
			sHealth,
			sRace,
			sLevel,
			sLevels,
			sFaction,
			sBirthSign,
			sBounty,
			sReputation,
			sSchool,
			sSkill,
			sSkillProgress,
			sSkillMaxReached,
			sLevelProgress,
			sMagic,
			sMagicMenu,
			sFatigue,
			sSkillsMenuReputationHelp,
			sStrDesc,
			sIntDesc,
			sWilDesc,
			sAgiDesc,
			sSpdDesc,
			sEndDesc,
			sPerDesc,
			sLucDesc,
			sFatDesc,
			sHealthDesc,
			sMagDesc,
			fWortChanceValue,
			sDefaultCellname,
			fMinWalkSpeed,
			fMaxWalkSpeed,
			fMinWalkSpeedCreature,
			fMaxWalkSpeedCreature,
			fEncumberedMoveEffect,
			fBaseRunMultiplier,
			fAthleticsRunBonus,
			fJumpAcrobaticsBase,
			fJumpAcroMultiplier,
			fJumpEncumbranceBase,
			fJumpEncumbranceMultiplier,
			fJumpRunMultiplier,
			fJumpMoveBase,
			fJumpMoveMult,
			fSwimWalkBase,
			fSwimRunBase,
			fSwimWalkAthleticsMult,
			fSwimRunAthleticsMult,
			fSwimHeightScale,
			fHoldBreathTime,
			fHoldBreathEndMult,
			fSuffocationDamage,
			fMinFlySpeed,
			fMaxFlySpeed,
			fStromWindSpeed,
			fStromWalkMult,
			fFallDamageDistanceMin,
			fFallDistanceBase,
			fFallDistanceMult,
			fFallAcroBase,
			fFallAcroMult,
			iMaxActivateDist,
			iMaxInfoDist,
			fVanityDelay,
			fMaxHeadTrackDistance,
			fInteriorHeadTrackMult,
			iHelmWeight,
			iPauldronWeight,
			iCuirassWeight,
			iGauntletWeight,
			iGreavesWeight,
			iBootsWeight,
			iShieldWeight,
			fLightMaxMod,
			fMedMaxMod,
			fUnarmoredBase1,
			fUnarmoredBase2,
			iBaseArmorSkill,
			fBlockStillBonus,
			fDamageStrengthBase,
			fDamageStrengthMult,
			fSwingBlockBase,
			fSwingBlockMult,
			fFatigueBase,
			fFatigueMult,
			fFatigueReturnBase,
			fFatigueReturnMult,
			fEndFatigueMult,
			fFatigueAttackBase,
			fFatigueAttackMult,
			fWeaponFatigueMult,
			fFatigueBlockBase,
			fFatigueBlockMult,
			fWeaponFatigueBlockMult,
			fFatigueRunBase,
			fFatigueRunMult,
			fFatigueJumpBase,
			fFatigueJumpMult,
			fFatigueSwimWalkBase,
			fFatigueSwimRunBase,
			fFatigueSwimWalkMult,
			fFatigueSwimRunMult,
			fFatigueSneakBase,
			fFatigueSneakMult,
			fMinHandToHandMult,
			fMaxHandToHandMult,
			fHandtoHandHealthPer,
			fCombatInvisoMult,
			fCombatKODamageMult,
			fCombatCriticalStrikeMult,
			iBlockMinChance,
			iBlockMaxChance,
			fLevelUpHealthEndMult,
			fSoulGemMult,
			fEffectCostMult,
			fSpellPriceMult,
			fFatigueSpellBase,
			fFatigueSpellMult,
			fFatigueSpellCostMult,
			fPotionStrengthMult,
			fPotionT1MagMult,
			fPotionT1DurMult,
			fPotionMinUsefulDuration,
			fPotionT4BaseStrengthMult,
			fPotionT4EquipStrengthMult,
			fIngredientMult,
			fMagicItemCostMult,
			fMagicItemPriceMult,
			fMagicItemOnceMult,
			fMagicItemUsedMult,
			fMagicItemStrikeMult,
			fMagicItemConstantMult,
			fEnchantmentMult,
			fEnchantmentChanceMult,
			fPCbaseMagickaMult,
			fNPCbaseMagickaMult,
			fAutoSpellChance,
			fAutoPCSpellChance,
			iAutoSpellTimesCanCast,
			iAutoSpellAttSkillMin,
			iAutoSpellAlterationMax,
			iAutoSpellConjurationMax,
			iAutoSpellDestructionMax,
			iAutoSpellIllusionMax,
			iAutoSpellMysticismMax,
			iAutoSpellRestorationMax,
			iAutoPCSpellMax,
			iAutoRepFacMod,
			iAutoRepLevMod,
			iMagicItemChargeOnce,
			iMagicItemChargeConst,
			iMagicItemChargeUse,
			iMagicItemChargeStrike,
			iMonthsToRespawn,
			fCorpseClearDelay,
			fCorpseRespawnDelay,
			fBarterGoldResetDelay,
			fEncumbranceStrMult,
			fPickLockMult,
			fTrapCostMult,
			fMessageTimePerChar,
			fMagicItemRechargePerSecond,
			i1stPersonSneakDelta,
			iBarterSuccessDisposition,
			iBarterFailDisposition,
			iLevelupTotal,
			iLevelupMajorMult,
			iLevelupMinorMult,
			iLevelupMajorMultAttribute,
			iLevelupMinorMultAttribute,
			iLevelupMiscMultAttriubte,
			iLevelupSpecialization,
			iLevelUp01Mult,
			iLevelUp02Mult,
			iLevelUp03Mult,
			iLevelUp04Mult,
			iLevelUp05Mult,
			iLevelUp06Mult,
			iLevelUp07Mult,
			iLevelUp08Mult,
			iLevelUp09Mult,
			iLevelUp10Mult,
			iSoulAmountForConstantEffect,
			fConstantEffectMult,
			fEnchantmentConstantDurationMult,
			fEnchantmentConstantChanceMult,
			fWeaponDamageMult,
			fSeriousWoundMult,
			fKnockDownMult,
			iKnockDownOddsBase,
			iKnockDownOddsMult,
			fCombatArmorMinMult,
			fHandToHandReach,
			fVoiceIdleOdds,
			iVoiceAttackOdds,
			iVoiceHitOdds,
			fProjectileMinSpeed,
			fProjectileMaxSpeed,
			fThrownWeaponMinSpeed,
			fThrownWeaponMaxSpeed,
			fTargetSpellMaxSpeed,
			fProjectileThrownStoreChance,
			iPickMinChance,
			iPickMaxChance,
			fDispRaceMod,
			fDispPersonalityMult,
			fDispPersonalityBase,
			fDispFactionMod,
			fDispFactionRankBase,
			fDispFactionRankMult,
			fDispCrimeMod,
			fDispDiseaseMod,
			iDispAttackMod,
			fDispWeaponDrawn,
			fDispBargainSuccessMod,
			fDispBargainFailMod,
			fDispPickPocketMod,
			iDaysinPrisonMod,
			fDispAttacking,
			fDispStealing,
			iDispTresspass,
			iDispKilling,
			iTrainingMod,
			iAlchemyMod,
			fBargainOfferBase,
			fBargainOfferMulti,
			fDispositionMod,
			fPersonalityMod,
			fLuckMod,
			fReputationMod,
			fLevelMod,
			fBribe10Mod,
			fBribe100Mod,
			fBribe1000Mod,
			fPerDieRollMult,
			fPerTempMult,
			iPerMinChance,
			iPerMinChange,
			fSpecialSkillBonus,
			fMajorSkillBonus,
			fMinorSkillBonus,
			fMiscSkillBonus,
			iAlarmKilling,
			iAlarmAttack,
			iAlarmStealing,
			iAlarmPickPocket,
			iAlarmTresspass,
			fAlarmRadius,
			iCrimeKilling,
			iCrimeAttack,
			fCrimeStealing,
			iCrimePickPocket,
			iCrimeTresspass,
			iCrimeThreshold,
			iCrimeThresholdMultiplier,
			fCrimeGoldDiscountMult,
			fCrimeGoldTurnInMult,
			iFightAttack,
			iFightAttacking,
			iFightDistanceBase,
			fFightDistanceMultiplier,
			iFightAlarmMult,
			fFightDispMult,
			fFightStealing,
			iFightPickpocket,
			iFightTrespass,
			iFightKilling,
			iFlee,
			iGreetDistanceMultiplier,
			iGreetDuration,
			fGreetDistanceReset,
			fIdleChanceMultiplier,
			fSneakUseDist,
			fSneakUseDelay,
			fSneakDistanceBase,
			fSneakDistanceMultiplier,
			fSneakSpeedMultiplier,
			fSneakViewMult,
			fSneakNoViewMult,
			fSneakSkillMult,
			fSneakBootMult,
			fCombatDistance,
			fCombatAngleXY,
			fCombatAngleZ,
			fCombatForceSideAngle,
			fCombatTorsoSideAngle,
			fCombatTorsoStartPercent,
			fCombatTorsoStopPercent,
			fCombatBlockLeftAngle,
			fCombatBlockRightAngle,
			fCombatDelayCreature,
			fCombatDelayNPC,
			sTargetCriticalStrike,
			fAIMeleeWeaponMult,
			fAIRangeMeleeWeaponMult,
			fAIMagicSpellMult,
			fAIRangeMagicSpellMult,
			fAIMeleeArmorMult,
			fAIMeleeSummWeaponMult,
			fAIFleeHealthMult,
			fAIFleeFleeMult,
			fPickPocketMod,
			fSleepRandMod,
			fSleepRestMod,
			iNumberCreatures,
			fAudioDefaultMinDistance,
			fAudioDefaultMaxDistance,
			fAudioVoiceDefaultMinDistance,
			fAudioVoiceDefaultMaxDistance,
			fAudioMinDistanceMult,
			fAudioMaxDistanceMult,
			fNPCHealthBarTime,
			fNPCHealthBarFade,
			fDifficultyMult,
			fWereWolfRunMult,
			fWereWolfSilverWeaponDamageMult,
			iWereWolfBounty,
			fWereWolfStrength,
			fWereWolfAgility,
			fWereWolfEndurance,
			fWereWolfSpeed,
			fWereWolfHandtoHand,
			fWereWolfUnarmored,
			iWereWolfLevelToAttack,
			iWereWolfFightMod,
			iWereWolfFleeMod,
			fWereWolfAthletics,
			fWereWolfAcrobatics,
			fWereWolfHealth,
			fWereWolfFatigue,
			fWereWolfMagicka,
			fWereWolfIntellegence,
			fWereWolfWillPower,
			fWereWolfPersonality,
			fWereWolfLuck,
			fWereWolfBlock,
			fWereWolfArmorer,
			fWereWolfMediumArmor,
			fWereWolfHeavyArmor,
			fWereWolfBluntWeapon,
			fWereWolfLongBlade,
			fWereWolfAxe,
			fWereWolfSpear,
			fWereWolfDestruction,
			fWereWolfAlteration,
			fWereWolfIllusion,
			fWereWolfConjuration,
			fWereWolfMysticism,
			fWereWolfRestoration,
			fWereWolfEnchant,
			fWereWolfAlchemy,
			fWereWolfSecurity,
			fWereWolfSneak,
			fWereWolfLightArmor,
			fWereWolfShortBlade,
			fWereWolfMarksman,
			fWereWolfMerchantile,
			fWereWolfSpeechcraft,
			fCombatDistanceWerewolfMod,
			fFleeDistance,
			sEffectWaterBreathing,
			sEffectSwiftSwim,
			sEffectWaterWalking,
			sEffectShield,
			sEffectFireShield,
			sEffectLightningShield,
			sEffectFrostShield,
			sEffectBurden,
			sEffectFeather,
			sEffectJump,
			sEffectLevitate,
			sEffectSlowFall,
			sEffectLock,
			sEffectOpen,
			sEffectFireDamage,
			sEffectShockDamage,
			sEffectFrostDamage,
			sEffectDrainAttribute,
			sEffectDrainHealth,
			sEffectDrainSpellpoints,
			sEffectDrainFatigue,
			sEffectDrainSkill,
			sEffectDamageAttribute,
			sEffectDamageHealth,
			sEffectDamageMagicka,
			sEffectDamageFatigue,
			sEffectDamageSkill,
			sEffectPoison,
			sEffectWeaknessToFire,
			sEffectWeaknessToFrost,
			sEffectWeaknessToShock,
			sEffectWeaknessToMagicka,
			sEffectWeaknessToCommonDisease,
			sEffectWeaknessToBlightDisease,
			sEffectWeaknessToCorprusDisease,
			sEffectWeaknessToPoison,
			sEffectWeaknessToNormalWeapons,
			sEffectDisintegrateWeapon,
			sEffectDisintegrateArmor,
			sEffectInvisibility,
			sEffectChameleon,
			sEffectLight,
			sEffectSanctuary,
			sEffectNightEye,
			sEffectCharm,
			sEffectParalyze,
			sEffectSilence,
			sEffectBlind,
			sEffectSound,
			sEffectCalmHumanoid,
			sEffectCalmCreature,
			sEffectFrenzyHumanoid,
			sEffectFrenzyCreature,
			sEffectDemoralizeHumanoid,
			sEffectDemoralizeCreature,
			sEffectRallyHumanoid,
			sEffectRallyCreature,
			sEffectDispel,
			sEffectSoultrap,
			sEffectTelekinesis,
			sEffectMark,
			sEffectRecall,
			sEffectDivineIntervention,
			sEffectAlmsiviIntervention,
			sEffectDetectAnimal,
			sEffectDetectEnchantment,
			sEffectDetectKey,
			sEffectSpellAbsorption,
			sEffectReflect,
			sEffectCureCommonDisease,
			sEffectCureBlightDisease,
			sEffectCureCorprusDisease,
			sEffectCurePoison,
			sEffectCureParalyzation,
			sEffectRestoreAttribute,
			sEffectRestoreHealth,
			sEffectRestoreSpellPoints,
			sEffectRestoreFatigue,
			sEffectRestoreSkill,
			sEffectFortifyAttribute,
			sEffectFortifyHealth,
			sEffectFortifySpellpoints,
			sEffectFortifyFatigue,
			sEffectFortifySkill,
			sEffectFortifyMagickaMultiplier,
			sEffectAbsorbAttribute,
			sEffectAbsorbHealth,
			sEffectAbsorbSpellPoints,
			sEffectAbsorbFatigue,
			sEffectAbsorbSkill,
			sEffectResistFire,
			sEffectResistFrost,
			sEffectResistShock,
			sEffectResistMagicka,
			sEffectResistCommonDisease,
			sEffectResistBlightDisease,
			sEffectResistCorprusDisease,
			sEffectResistPoison,
			sEffectResistNormalWeapons,
			sEffectResistParalysis,
			sEffectRemoveCurse,
			sEffectTurnUndead,
			sEffectSummonScamp,
			sEffectSummonClannfear,
			sEffectSummonDaedroth,
			sEffectSummonDremora,
			sEffectSummonAncestralGhost,
			sEffectSummonSkeletalMinion,
			sEffectSummonLeastBonewalker,
			sEffectSummonGreaterBonewalker,
			sEffectSummonBonelord,
			sEffectSummonWingedTwilight,
			sEffectSummonHunger,
			sEffectSummonGoldensaint,
			sEffectSummonFlameAtronach,
			sEffectSummonFrostAtronach,
			sEffectSummonStormAtronach,
			sEffectFortifyAttackBonus,
			sEffectCommandCreatures,
			sEffectCommandHumanoids,
			sEffectBoundDagger,
			sEffectBoundLongsword,
			sEffectBoundMace,
			sEffectBoundBattleAxe,
			sEffectBoundSpear,
			sEffectBoundLongbow,
			sEffectExtraSpell,
			sEffectBoundCuirass,
			sEffectBoundHelm,
			sEffectBoundBoots,
			sEffectBoundShield,
			sEffectBoundGloves,
			sEffectCorpus,
			sEffectVampirism,
			sEffectSummonCenturionSphere,
			sEffectSunDamage,
			sEffectStuntedMagicka,
			sEffectSummonFabricant,
			sEffectSummonCreature01,
			sEffectSummonCreature02,
			sEffectSummonCreature03,
			sEffectSummonCreature04,
			sEffectSummonCreature05,
			sSchoolAlteration,
			sSchoolConjuration,
			sSchoolDestruction,
			sSchoolIllusion,
			sSchoolMysticism,
			sSchoolRestoration,
			sTypeSpell,
			sTypeAbility,
			sTypeBlightDisease,
			sTypeDisease,
			sTypeCurse,
			sTypePower,
			sItemCastOnce,
			sItemCastWhenStrikes,
			sItemCastWhenUsed,
			sItemCastConstant,
			sRangeSelf,
			sRangeTouch,
			sRangeTarget,
			sMagicSkillFail,
			sMagicInsufficientSP,
			sMagicInsufficientCharge,
			sPowerAlreadyUsed,
			sMagicInvalidTarget,
			sMagicLockSuccess,
			sMagicOpenSuccess,
			sMagicTargetResistsWeapons,
			sMagicContractDisease,
			fMagicDetectRefreshRate,
			fMagicStartIconBlink,
			fMagicCreatureCastDelay,
			sMagicScampID,
			sMagicClannfearID,
			sMagicDaedrothID,
			sMagicDremoraID,
			sMagicAncestralGhostID,
			sMagicSkeletalMinionID,
			sMagicLeastBonewalkerID,
			sMagicGreaterBonewalkerID,
			sMagicBonelordID,
			sMagicWingedTwilightID,
			sMagicHungerID,
			sMagicGoldenSaintID,
			sMagicFlameAtronachID,
			sMagicFrostAtronachID,
			sMagicStormAtronachID,
			sMagicCenturionSphereID,
			sMagicFabricantID,
			sMagicCreature01ID,
			sMagicCreature02ID,
			sMagicCreature03ID,
			sMagicCreature04ID,
			sMagicCreature05ID,
			sMagicBoundDaggerID,
			sMagicBoundLongswordID,
			sMagicBoundMaceID,
			sMagicBoundBattleAxeID,
			sMagicBoundSpearID,
			sMagicBoundLongbowID,
			sMagicBoundCuirassID,
			sMagicBoundHelmID,
			sMagicBoundBootsID,
			sMagicBoundShieldID,
			sMagicBoundLeftGauntletID,
			sMagicBoundRightGauntletID,
			fDiseaseXferChance,
			fElementalShieldMult,
			sMagicCorprusWorsens,
			sMagicCannotRecast,
			fMagicSunBlockedMult,
			sMagicPCResisted,
			sMagicTargetResisted,
			sMagicInvalidEffect,
			sAcrobat,
			sAgent,
			sArcher,
			sAssassin,
			sBarbarian,
			sBard,
			sBattlemage,
			sCrusader,
			sCustom,
			sHealer,
			sKnight,
			sMage,
			sMonk,
			sNightblade,
			sPilgrim,
			sRogue,
			sScout,
			sSorceror,
			sSpellsword,
			sThief,
			sWarrior,
			sWitchhunter
		};
	}

	struct GameSetting : BaseObject {
		struct Initializer {
			enum class ValueType : unsigned int {
				Integer,
				Float,
				String,
			};
			const char* name; // 0x0
			const char* defaultStringValue; // 0x4
			int defaultIntValue; // 0x8
			float defaultFloatValue; // 0xC
			ValueType valueType;
		};
		union {
			int asInt;
			float asFloat;
			const char* asString;
		} value; // 0x10
		int index; // 0x14

		static constexpr auto initializers = reinterpret_cast<Initializer*>(0x6A8128);
	};
	static_assert(sizeof(GameSetting) == 0x18, "TES3::GameSetting failed size validation");
}
