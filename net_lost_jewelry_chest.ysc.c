#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	struct<12> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 39;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 39;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = -1;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = -1082130432;
	var uLocal_119 = -1082130432;
	var uLocal_120 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	func_1(&Local_14, vScriptParam_0);
	if (func_2() != -1)
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		if (func_4(func_3(0)) == 7)
		{
			func_5(&Local_14);
		}
	}
	if (func_2() == -1)
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		{
			func_5(&Local_14);
		}
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(Local_14.f_11))
	{
		func_5(&Local_14);
	}
	while (func_6(&Local_14))
	{
		if (func_7())
		{
			func_5(&Local_14);
		}
		if (func_8(&Local_14))
		{
			func_5(&Local_14);
		}
		BUILTIN::WAIT(0);
	}
	func_5(&Local_14);
}

void func_1(var uParam0, vector3 vParam1)
{
	*uParam0 = func_9(vParam1);
	uParam0->f_1 = func_10(vParam1);
	uParam0->f_2 = func_11(vParam1);
	uParam0->f_3 = 0;
	uParam0->f_12 = vParam1.x;
	uParam0->f_11 = vParam1.y;
	uParam0->f_5 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_11, true) };
	uParam0->f_55[0] = 6.942519E+30f;
	uParam0->f_55[1] = 4.101449E+20f;
	uParam0->f_55[2] = -2.381802E-32f;
	uParam0->f_55[3] = NaNf;
	uParam0->f_55[4] = -8668.869f;
	uParam0->f_55[5] = -7.554164E+23f;
	uParam0->f_55[6] = 3.641126E-22f;
	uParam0->f_55[7] = -1.436519E-35f;
	uParam0->f_55[8] = -2.006553E-38f;
	uParam0->f_55[9] = -9.796718E-24f;
	uParam0->f_55[10] = 3.316242E-21f;
	uParam0->f_55[11] = 1.37782E-10f;
	uParam0->f_55[12] = 1.18921E+11f;
	uParam0->f_55[13] = -1.127251E-17f;
	uParam0->f_55[14] = 6.494859E+29f;
	uParam0->f_55[15] = 7.990191f;
	uParam0->f_55[16] = -2.553995E+22f;
	uParam0->f_55[17] = 3.238783E+21f;
	uParam0->f_55[18] = -1.193487E+19f;
	uParam0->f_55[19] = 3.717422E-25f;
	uParam0->f_55[20] = 3.885903E-27f;
	uParam0->f_55[21] = 251.4137f;
	uParam0->f_55[22] = -1.082291E-17f;
	uParam0->f_55[23] = 3.657709E-25f;
	uParam0->f_55[24] = 3.211177E-10f;
	uParam0->f_55[25] = -0.4070606f;
	uParam0->f_55[26] = 0.4650363f;
	uParam0->f_55[27] = -6.396347E+17f;
	uParam0->f_55[28] = -7.402465E-31f;
	uParam0->f_55[29] = -3.278272E-21f;
	uParam0->f_55[30] = 9.158277E-35f;
	uParam0->f_55[31] = 1.822689E+09f;
	uParam0->f_55[32] = 1.32238E+18f;
	uParam0->f_55[33] = 1798.606f;
	uParam0->f_55[34] = -6.55106E-37f;
	uParam0->f_55[35] = -1.654433E-34f;
	uParam0->f_55[36] = -9.738446E+28f;
	uParam0->f_55[37] = 2.979835E-05f;
	uParam0->f_55[38] = 3.444352E-36f;
	uParam0->f_13 = func_12(uParam0);
}

int func_2()
{
	return Global_1572887.f_14;
}

struct<2> func_3(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_4(var uParam0, var uParam1)
{
	return uParam0;
}

void func_5(var uParam0)
{
	func_13(&(uParam0->f_95));
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_54))
	{
		if (PLAYER::_IS_EAGLE_EYE_REGISTERED_FOR_ENTITY(PLAYER::PLAYER_ID(), uParam0->f_54))
		{
			func_14(uParam0->f_54, uParam0->f_54, 0);
		}
	}
	SCRIPTS::_0xE7282390542F570D(uParam0->f_12);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_6(var uParam0)
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_5(uParam0);
		return false;
	}
	return true;
}

bool func_7()
{
	return false;
}

bool func_8(var uParam0)
{
	bool bVar0;

	bVar0 = func_15(uParam0) < 4;
	if (func_15(uParam0) > 2 && func_15(uParam0) < 4)
	{
		func_16(&(uParam0->f_95), uParam0->f_5, bVar0, bVar0, 1, 0);
	}
	if (func_17(Global_1295619.f_3, uParam0->f_5, 1) < 2f)
	{
		func_18(&(uParam0->f_95.f_5));
	}
	switch (func_15(uParam0))
	{
		case 0:
			func_19(uParam0, 1);
			break;
		case 1:
			if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
			{
				if (!STREAMING::IS_IPL_ACTIVE_BY_HASH(uParam0->f_1))
				{
					STREAMING::REQUEST_IPL_BY_HASH(uParam0->f_1);
				}
				func_19(uParam0, 2);
			}
			break;
		case 2:
			if (func_20(uParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_21(uParam0)))
				{
					uParam0->f_8 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_54, true, false) };
					MAP::_0x7563CBCA99253D1A(uParam0->f_54, 3.474616E-32f);
					MAP::_0x1726963E6049DB53(uParam0->f_54);
					func_22(uParam0->f_54, uParam0->f_54, 0);
					MISC::_0x553D67295DDD2309(uParam0->f_54);
					func_19(uParam0, 3);
				}
			}
			break;
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_54))
			{
				if (func_20(uParam0) && ENTITY::DOES_ENTITY_EXIST(func_21(uParam0)))
				{
					MISC::_0x553D67295DDD2309(uParam0->f_54);
				}
				else
				{
					return false;
				}
			}
			if (PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_AT_COORDS_WITH_MODEL(uParam0->f_8, ENTITY::GET_ENTITY_MODEL(uParam0->f_54)))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_54))
				{
					if (PLAYER::_IS_EAGLE_EYE_REGISTERED_FOR_ENTITY(PLAYER::PLAYER_ID(), uParam0->f_54))
					{
						func_14(uParam0->f_54, uParam0->f_54, 0);
					}
					func_13(&(uParam0->f_95));
					func_19(uParam0, 4);
				}
			}
			break;
		case 4:
			break;
	}
	return false;
}

int func_9(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = Param0.f_1;
	if (TASK::DOES_SCENARIO_POINT_EXIST(iVar1))
	{
		iVar0 = BUILTIN::ROUND(TASK::_GET_SCENARIO_POINT_RADIUS(iVar1));
	}
	switch (iVar0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 11;
		case 12:
			return 12;
		case 13:
			return 13;
		case 14:
			return 14;
		case 15:
			return 15;
		case 16:
			return 16;
		case 17:
			return 17;
		case 18:
			return 18;
		case 19:
			return 19;
		case 20:
			return 20;
		case 21:
			return 21;
		case 22:
			return 22;
		case 23:
			return 23;
		case 24:
			return 24;
		case 25:
			return 25;
		case 26:
			return 26;
	}
	return 1;
}

float func_10(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = Param0.f_1;
	if (TASK::DOES_SCENARIO_POINT_EXIST(iVar1))
	{
		iVar0 = BUILTIN::ROUND(TASK::_GET_SCENARIO_POINT_RADIUS(iVar1));
	}
	switch (iVar0)
	{
		case 1:
			return -4.05312E+34f;
		case 2:
			return -7.28483E+07f;
		case 3:
			return 15038.73f;
		case 4:
			return 3.689307E-32f;
		case 5:
			return 1.296088f;
		case 6:
			return -1.471584E+38f;
		case 7:
			return 7.518609E+12f;
		case 8:
			return 3.702474E+15f;
		case 9:
			return -6.538078E-31f;
		case 10:
			return -7.085062E+29f;
		case 11:
			return -6.412657E+24f;
		case 12:
			return 0.0004084241f;
		case 13:
			return -9.480761E-14f;
		case 14:
			return -3.497487E-07f;
		case 15:
			return -3.327796E-11f;
		case 16:
			return 5.442974E-36f;
		case 17:
			return -1.179691E-21f;
		case 18:
			return 3.761165E+37f;
		case 19:
			return 107222.9f;
		case 20:
			return 654.7427f;
		case 21:
			return -2.278716E-17f;
		case 22:
			return -0.9765229f;
		case 23:
			return -8.673124E+08f;
		case 24:
			return -5.58436E+10f;
		case 25:
			return 6.288405E+22f;
		case 26:
			return 2.470262E-16f;
	}
	return -4.05312E+34f;
}

char* func_11(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = Param0.f_1;
	if (TASK::DOES_SCENARIO_POINT_EXIST(iVar1))
	{
		iVar0 = BUILTIN::ROUND(TASK::_GET_SCENARIO_POINT_RADIUS(iVar1));
	}
	switch (iVar0)
	{
		case 1:
			return "MP005_A1_ARBracelet02_IPL";
		case 2:
			return "MP007_A2_BMecklace03_IPL";
		case 3:
			return "mp005_a1_BPRing02_IPL";
		case 4:
			return "MP007_a2_BANecklace01_IPL";
		case 5:
			return "MP007_a2_BANecklace02_IPL";
		case 6:
			return "MP007_A2_BANecklace03_IPL";
		case 7:
			return "MP005_A1_DPBBracelet02_IPL";
		case 8:
			return "MP007_A2_DPBracelet03_IPL";
		case 9:
			return "MP005_A1_FPNecklace02_IPL";
		case 10:
			return "MP005_a1_GWGNecklace01_IPL";
		case 11:
			return "MP007_A2_HGBracelet02_IPL";
		case 12:
			return "MP005_A1_HGBBracelet03_IPL";
		case 13:
			return "mp007_a2_HGEarring02_IPL";
		case 14:
			return "mp007_a2_HCRing02_IPL";
		case 15:
			return "MP007_A2_HSBRACELET01_IPL";
		case 16:
			return "MP005_A1_HSBracelet02_IPL";
		case 17:
			return "MP005_A4_HSBracelet03_IPL";
		case 18:
			return "MP005_A4_ITBracelet03_IPL";
		case 19:
			return "mp005_a1_MTRing02_IPL";
		case 20:
			return "MP005_A4_ORGBBracelet03_IPL";
		case 21:
			return "MP005_A3_ODEarring1_IPL";
		case 22:
			return "MP005_A3_RANecklace02_IPL";
		case 23:
			return "MP005_A4_RANecklace03_IPL";
		case 24:
			return "mp005_a1_SDRing01_IPL";
		case 25:
			return "mp005_a1_WDRing1_IPL";
		case 26:
			return "mp007_a2_DEEarring02_IPL";
	}
	return "mp005_a1_arbracelet02_ipl";
}

int func_12(var uParam0)
{
	int iVar0;

	iVar0 = -1;
	switch (*uParam0)
	{
		case 1:
			iVar0 = 3.475457E+25f;
			break;
		case 2:
			iVar0 = 3.475457E+25f;
			break;
		case 3:
			iVar0 = 3.475457E+25f;
			break;
		case 4:
			iVar0 = 3.475457E+25f;
			break;
		case 5:
			iVar0 = 3.475457E+25f;
			break;
		case 6:
			iVar0 = 3.475457E+25f;
			break;
		case 7:
			iVar0 = 3.475457E+25f;
			break;
		case 8:
			iVar0 = 3.475457E+25f;
			break;
		case 9:
			iVar0 = 3.475457E+25f;
			break;
		case 10:
			iVar0 = 3.475457E+25f;
			break;
		case 11:
			iVar0 = 3.475457E+25f;
			break;
		case 12:
			iVar0 = 3.475457E+25f;
			break;
		case 13:
			iVar0 = 3.475457E+25f;
			break;
		case 14:
			iVar0 = 3.475457E+25f;
			break;
		case 15:
			iVar0 = 3.475457E+25f;
			break;
		case 16:
			iVar0 = 3.475457E+25f;
			break;
		case 17:
			iVar0 = 3.475457E+25f;
			break;
		case 18:
			iVar0 = 3.475457E+25f;
			break;
		case 19:
			iVar0 = 3.475457E+25f;
			break;
		case 20:
			iVar0 = 3.475457E+25f;
			break;
		case 21:
			iVar0 = 3.475457E+25f;
			break;
		case 22:
			iVar0 = 3.475457E+25f;
			break;
		case 23:
			iVar0 = 3.475457E+25f;
			break;
		case 24:
			iVar0 = 3.475457E+25f;
			break;
		case 25:
			iVar0 = 3.475457E+25f;
			break;
		case 26:
			iVar0 = 3.475457E+25f;
			break;
	}
	return iVar0;
}

void func_13(var uParam0)
{
	func_23(uParam0);
	func_24(&(uParam0->f_6), 1);
}

int func_14(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ITEMSET::IS_ITEMSET_VALID(Global_1296492.f_32) && ITEMSET::IS_IN_ITEMSET(iParam0, Global_1296492.f_32))
	{
		ITEMSET::REMOVE_FROM_ITEMSET(iParam0, Global_1296492.f_32);
	}
	PLAYER::_UNREGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), iParam0);
	PLAYER::_0xDC5E09D012D759C4(iParam0, iParam1, iParam2);
	Var1.f_1 = -1f;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1296492[iVar0 /*2*/]) && Global_1296492[iVar0 /*2*/] == iParam0)
		{
			MISC::COPY_SCRIPT_STRUCT(&(Global_1296492[iVar0 /*2*/]), &Var1, 2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_15(var uParam0)
{
	return uParam0->f_3;
}

void func_16(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (!func_25(Global_1222308))
	{
		if ((MISC::GET_FRAME_COUNT() % 30) == 0 || uParam0->f_10 == -1f)
		{
			uParam0->f_10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_1222308, vParam1, true);
		}
		if (uParam0->f_10 <= 5f)
		{
			bVar0 = true;
		}
	}
	bVar1 = func_26(uParam0, bParam4, bVar0);
	if (!bVar1)
	{
		if (uParam0->f_8)
		{
			uParam0->f_8 = 0;
		}
	}
	if (uParam0->f_11 < 8)
	{
		uParam0->f_11++;
	}
	else
	{
		uParam0->f_11 = 0;
	}
	if (!uParam0->f_8)
	{
		if (uParam0->f_11 == 0)
		{
			uParam0->f_8 = 1;
		}
		return;
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0 || uParam0->f_9 == -1f)
	{
		uParam0->f_9 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vParam1, true);
	}
	fVar2 = 1092616192; /* Float: 10f */
	fVar2 = (fVar2 * (1f + func_27()));
	switch (*uParam0)
	{
		case 0:
			if (uParam0->f_9 < fVar2)
			{
				if (bParam5)
				{
					if (AUDIO::PREPARE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman", false))
					{
						uParam0->f_4 = AUDIO::GET_SOUND_ID();
						if (Global_1940186.f_38 != -8.284301E+07f)
						{
							AUDIO::_PLAY_SOUND_FROM_POSITION_WITH_ID(uParam0->f_4, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", false, 0, bParam6);
						}
						func_28(uParam0, 1);
					}
				}
				else
				{
					func_28(uParam0, 1);
				}
			}
			break;
		case 1:
			iVar3 = BUILTIN::FLOOR((1140457472 * ((fVar2 - uParam0->f_9) / fVar2)));
			iVar4 = BUILTIN::FLOOR((1132462080 * ((fVar2 - uParam0->f_9) / fVar2)));
			if (iVar3 < 0)
			{
				iVar3 = MISC::ABSI(iVar3);
			}
			if (iVar3 > 9999)
			{
				iVar3 = 9999;
			}
			if (uParam0->f_9 < 3f && bParam7)
			{
				func_29(250);
			}
			PAD::SET_CONTROL_SHAKE(0, iVar3, iVar4);
			func_30(&(uParam0->f_1));
			func_28(uParam0, 2);
			break;
		case 2:
			if ((uParam0->f_9 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_23(uParam0);
				}
				func_28(uParam0, 0);
			}
			else if (func_31(&(uParam0->f_1)) >= 2f)
			{
				func_28(uParam0, 1);
			}
			else if (uParam0->f_9 < 3f && bParam7)
			{
				func_29(250);
			}
			break;
	}
}

float func_17(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_18(var uParam0)
{
	if (AUDIO::PREPARE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman", false))
	{
		if (HUD::UI_PROMPT_IS_CONTROL_ACTION_ACTIVE(5.822005E-15f))
		{
			if (!*uParam0)
			{
				AUDIO::PLAY_SOUND_FRONTEND("collectible_found", "RDRO_Collectible_Sounds_Travelling_Saleswoman", true, 0);
				*uParam0 = 1;
			}
		}
		else if (*uParam0)
		{
			*uParam0 = 0;
		}
	}
}

void func_19(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

bool func_20(var uParam0)
{
	if (func_32(&(uParam0->f_14), &(uParam0->f_55), 1, uParam0->f_5, 5f) > 0)
	{
		return true;
	}
	return false;
}

var func_21(var uParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_14[iVar0]))
		{
			uParam0->f_54 = uParam0->f_14[iVar0];
			return uParam0->f_14[iVar0];
		}
		iVar0++;
	}
	return uVar1;
}

int func_22(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1296492.f_32))
	{
		Global_1296492.f_32 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam0, Global_1296492.f_32))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_1296492.f_32);
	}
	if (!func_33(iParam0))
	{
		PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), iParam0, false);
		PLAYER::_0x6ECFC621A168424C(iParam0, iParam1, iParam2, 0f);
		PLAYER::_EAGLE_EYE_SET_CUSTOM_DISTANCE(iParam0, 500f);
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1296492[iVar0 /*2*/]))
		{
			Global_1296492[iVar0 /*2*/] = iParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_23(var uParam0)
{
	if (uParam0->f_4 != -1)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
		AUDIO::RELEASE_SOUND_ID(uParam0->f_4);
		PAD::STOP_CONTROL_SHAKE(0);
		uParam0->f_4 = -1;
	}
	AUDIO::_RELEASE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman");
}

void func_24(int iParam0, int iParam1)
{
	if (func_34(iParam0))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);
	}
}

bool func_25(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_26(var uParam0, bool bParam1, bool bParam2)
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_35(-4.629755E-24f, 0, 0, 0) <= 0)
			{
				return 0;
			}
			break;
		case 1:
			if (func_36(0))
			{
				return 0;
			}
			break;
		case 2:
			if (func_37())
			{
				return 0;
			}
			break;
		case 3:
			if (Global_1048576)
			{
				return 0;
			}
			break;
		case 4:
			if (func_38())
			{
				return 0;
			}
			break;
		case 5:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				return 0;
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Global_33) && TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
			{
				return 0;
			}
			break;
		case 7:
			if (!bParam1 && *uParam0 == 0)
			{
				return 0;
			}
			break;
		case 8:
			if (bParam2 && *uParam0 == 0)
			{
				return 0;
			}
			break;
		default:
			uParam0->f_11 = 0;
			break;
	}
	return 1;
}

float func_27()
{
	return Global_1156096.f_2169[89 /*205*/].f_201;
}

void func_28(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_29(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
}

void func_30(var uParam0)
{
	func_39(uParam0, 0f);
}

float func_31(var uParam0)
{
	if (!func_40(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_41(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_42() - uParam0->f_1);
}

int func_32(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	iVar1 = func_43(uParam0, uParam1, iVar0, iParam2);
	func_44(iVar0);
	return iVar1;
}

bool func_33(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar13;
	int iVar14;
	int iVar15;

	if (func_45() == 0)
	{
		return false;
	}
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(func_45()))
	{
		return false;
	}
	Var0 = func_45();
	Var0.f_2 = 0;
	Var0.f_3 = 0;
	Var0.f_4 = 0;
	Var0.f_1 = 0;
	iVar13 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar14 = 0;
	while (iVar14 < 30)
	{
		Var0.f_1 = 0;
		Var0.f_3 = iVar14;
		Var0.f_2 = 0;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 1;
			if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&uVar5, &Var0))
			{
				iVar15 = MISC::GET_HASH_KEY(&uVar5);
				if (iVar13 == iVar15)
				{
					return true;
				}
			}
		}
		iVar14++;
	}
	return false;
}

bool func_34(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_35(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_46(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_47(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_48(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_49(bParam0, 0);
	}
	if (func_50(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_51(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_52(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_51(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

bool func_36(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

bool func_37()
{
	return func_53() != -1;
}

bool func_38()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

void func_39(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_42() - fParam1);
	func_54(uParam0, 1);
	func_55(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_40(var uParam0)
{
	return func_56(*uParam0, 1);
}

bool func_41(var uParam0)
{
	return func_56(*uParam0, 2);
}

float func_42()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

int func_43(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_GET_ENTITIES_IN_VOLUME(iParam2, iVar0, 3);
	if (iVar6 >= iParam3)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *uParam1)
			{
				if ((*uParam1)[iVar5] == 0)
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar2) == (*uParam1)[iVar5])
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

void func_44(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

int func_45()
{
	return Global_1072759.f_28418[47 /*4*/].f_3;
}

bool func_46(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_47(bool bParam0)
{
	vector3 vVar0;

	if (!func_46(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_48(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_46(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_47(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_57(bParam0, 9.811189E+11f))
	{
		func_58(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

int func_49(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_59(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_61(&Var0, func_60(0));
	}
	if (!func_62(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_63(iVar18);
	return iVar19;
}

int func_50(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_65(func_64(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

int func_51(bool bParam0)
{
	if (func_2() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

struct<4> func_52(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_66(bParam0, bParam1, 0) };
	return func_67(bParam0, Var0, Var0.f_4, bParam1);
}

int func_53()
{
	return Global_1149157.f_137;
}

void func_54(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_55(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_56(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_57(bool bParam0, int iParam1)
{
	if (!func_46(bParam0, 0))
	{
		return func_68(func_64(bParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 104.1169f))
	{
		return 1;
	}
	return 0;
}

void func_58(bool bParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = 2.868836E+26f;
			*uParam2 = 1.33835E+22f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = -6.44427E+07f;
			*uParam2 = 1.33835E+22f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = -1.5597E+17f;
			*uParam2 = 984456.8f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = -1.340805E-26f;
			*uParam2 = -1.163197E-36f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = -0.0004557966f;
			*uParam2 = 5.999469E+31f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = -7.543728E-18f;
			*uParam2 = 5.999469E+31f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = -4.09862E-21f;
			*uParam2 = 6.597174E-09f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = -1.78904E-16f;
			*uParam2 = -1.54477E-12f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = -4.051864E-08f;
			*uParam2 = 4.104352E-31f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = 6.371044E+11f;
			*uParam2 = 4.104352E-31f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = -2.04749E+08f;
			*uParam2 = 1.48591E+21f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = 3.971968E-06f;
			*uParam2 = 3.147558E+28f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = -9.057481E+30f;
			*uParam2 = -1.339106E-09f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = 2.184573E-20f;
			*uParam2 = -1.339106E-09f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = -9.738313E+24f;
			*uParam2 = -1.21702E+18f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = 39255.64f;
			*uParam2 = 1.256526E-30f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = 0.0001116685f;
			*uParam2 = -2.686844E-29f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = -1.441753E-05f;
			*uParam2 = -2.686844E-29f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = -8.900574E-37f;
			*uParam2 = 1.249562E-27f;
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = -4.758429E+16f;
			*uParam2 = 4.067655E+37f;
			break;
	}
}

struct<18> func_59(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<18> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	if (bParam0 != 0)
	{
		Var0 = bParam0;
	}
	if (iParam1 != 0 && iParam1 != -5.45926E-19f)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -5.45926E-19f)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -5.45926E-19f)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

struct<4> func_60(bool bParam0)
{
	int iVar0;

	iVar0 = func_51(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_67(8.681942E-06f, func_69(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_67(8.681942E-06f, func_69(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_67(8.681942E-06f, func_69(bParam0), -1.942248E+12f, 0);
}

void func_61(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_62(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_51(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_63(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_64(bool bParam0)
{
	return bParam0;
}

bool func_65(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

struct<5> func_66(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_69(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_47(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_67(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_60(bParam1) };
			if (iParam2 && func_70(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_71(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_71(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_72(bParam0, &Var6, 6.282013E+23f))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else
				{
					Var0.f_4 = -3.587391E+15f;
				}
			}
			else
			{
				Var0.f_4 = 6.282013E+23f;
			}
			break;
		case joaat("COACH"):
		case joaat("HORSE"):
			Var0.f_4 = 5.573986E+25f;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -5.45926E-19f;
			Var0 = { func_73(bParam1) };
			switch (func_74(bParam0))
			{
				case -1070622585:
					Var0.f_4 = NaNf;
					break;
				case -1057349201:
					Var0.f_4 = 4.57813E+14f;
					break;
				case 874188557:
					Var0.f_4 = -1.48142E+30f;
					break;
				case -2101244071:
					Var0.f_4 = -1.644837E+29f;
					break;
			}
			break;
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_75(bParam0, -2.580501E-27f))
			{
				Var0 = { func_67(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_75(bParam0, -4.220332E-15f))
			{
				Var0 = { func_67(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_67(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_75(bParam0, -3.171238E-21f))
			{
				Var0 = { func_67(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 2.884954E+11f);
			}
			break;
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, 4.978612f))
			{
				Var0.f_4 = 4.978612f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, 0.08386164f))
			{
				Var0.f_4 = 0.08386164f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -8.915019E+08f))
			{
				Var28.f_9 = -5.45926E-19f;
				if (!func_76(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -8.915019E+08f;
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.194466E+13f))
			{
				Var0.f_4 = -1.194466E+13f;
			}
			else if (func_75(bParam0, -3.171238E-21f))
			{
				Var0 = { func_67(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 2.884954E+11f);
			}
			else
			{
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 2.982335E+09f);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_67(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_46(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_51(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

int func_68(bool bParam0, int iParam1)
{
	if (!func_65(bParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(bParam0, iParam1, 104.1169f))
	{
		return 1;
	}
	return 0;
}

struct<4> func_69(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_51(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_67(2.982335E+09f, func_77(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_67(2.982335E+09f, func_77(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_67(2.982335E+09f, func_77(), -5.45926E-19f, bParam0);
}

int func_70(bool bParam0, bool bParam1)
{
	if (func_74(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_78();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_71(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_79(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_72(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_80(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_73(bool bParam0)
{
	int iVar0;

	iVar0 = func_51(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_67(3.507197E-29f, func_69(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_67(3.507197E-29f, func_69(bParam0), 12999093, 0);
}

int func_74(bool bParam0)
{
	struct<2> Var0;

	if (!func_46(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_75(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_74(bParam0);
	if (iVar1 == -252.4155f)
	{
		return false;
	}
	iVar3 = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_81(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_76(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_82(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

struct<4> func_77()
{
	struct<4> Var0;

	return Var0;
}

int func_78()
{
	if (func_83(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_79(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_46(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_50(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_67(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_51(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_51(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_80(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_51(0);
	*iParam1 = { func_67(bParam0, func_60(0), fParam3, 0) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(iVar0, iParam1, iParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_81(bool bParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1.821884E-21f)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, -3.294982E+22f) == -5.586199E-31f)
		{
			return false;
		}
	}
	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, iParam2);
}

int func_82(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_51(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_83(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_84(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_51(bParam1), iParam0, bParam3);
}

bool func_84(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

