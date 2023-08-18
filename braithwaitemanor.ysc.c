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
	float fLocal_14 = 0f;
	float fLocal_15 = 0f;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	bool bLocal_18 = false;
	int iLocal_19[34] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	bool bLocal_62 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	iLocal_17 = -1;
	iLocal_57 = 20000;
	iLocal_60 = vScriptParam_0.x;
	iLocal_58 = vScriptParam_0.z;
	bLocal_62 = false;
	if (Global_1901671.f_2.f_26 > 0)
	{
		func_1();
	}
	func_2();
	func_3();
	iLocal_59 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (func_4())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_59)
		{
			iLocal_59 = 0;
			func_5(iLocal_60, &iLocal_58);
			switch (iLocal_58)
			{
				case 0:
					if (Global_1901671.f_2.f_26 > 0)
					{
						iLocal_61 = (MISC::GET_GAME_TIMER() + Global_1901671.f_2.f_26);
						iLocal_58 = 1;
					}
					else
					{
						iLocal_58 = 2;
					}
					break;
				case 1:
					if (!func_1() || iLocal_61 < MISC::GET_GAME_TIMER())
					{
						bLocal_62 = false;
						iLocal_58 = 2;
					}
					break;
				case 2:
					func_6(iLocal_60);
					func_7();
					func_8();
					if (func_10(func_9(iLocal_60)))
					{
						func_11(func_9(iLocal_60), 4);
					}
					LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), func_12(iLocal_60));
					Global_1896644 = -1;
					iLocal_61 = (iLocal_57 + MISC::GET_GAME_TIMER());
					iLocal_58 = 3;
					break;
				case 3:
					if (func_13() || iLocal_61 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_60);
						iLocal_61 = (MISC::GET_GAME_TIMER() + iLocal_57);
						iLocal_58 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_60) || iLocal_61 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_60);
						iLocal_61 = (MISC::GET_GAME_TIMER() + iLocal_57);
						iLocal_58 = 5;
					}
					break;
				case 5:
					if (func_17(iLocal_60) || iLocal_61 < MISC::GET_GAME_TIMER())
					{
						func_18(iLocal_60);
						iLocal_61 = (iLocal_57 + MISC::GET_GAME_TIMER());
						iLocal_58 = 7;
					}
					break;
				case 7:
					if (func_10(func_9(iLocal_60)))
					{
						if (func_19(func_9(iLocal_60), 4) && !iLocal_61 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (func_20(iLocal_60) || iLocal_61 < MISC::GET_GAME_TIMER())
							{
								func_21(iLocal_60, 4);
								iLocal_61 = (MISC::GET_GAME_TIMER() + iLocal_57);
								iLocal_58 = 8;
							}
							Jump @816; //curOff = 532
							func_22(iLocal_60);
							func_23();
							if (!func_24(4105, 0))
							{
								func_25();
							}
							func_26();
							func_27();
							func_28();
							func_29(iLocal_60);
							func_30(iLocal_60);
							func_31();
							func_32();
							iLocal_58 = 9;
							Jump @816; //curOff = 600
							func_33(iLocal_60);
							func_34();
							iLocal_58 = 10;
							Jump @816; //curOff = 617
							func_35(&Global_1896698);
							func_36(iLocal_60, &Global_1896698);
							iLocal_58 = 11;
							Jump @816; //curOff = 642
							func_37(iLocal_60);
							func_21(iLocal_60, 8);
							if (func_38(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								func_39(32);
							}
							iLocal_58 = 12;
							Jump @816; //curOff = 692
							if (func_40(iLocal_60))
							{
								iLocal_59 = MISC::GET_GAME_TIMER() + 1000;
							}
							func_41(&Global_1896698, iLocal_60);
							func_42(iLocal_60);
							func_21(iLocal_60, 8);
							if (func_43())
							{
								PED::_SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1887363[iLocal_60 /*36*/].f_11);
							if (Global_1887363[iLocal_60 /*36*/].f_12 > 0f)
							{
								PED::_SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1887363[iLocal_60 /*36*/].f_12);
							}
							Jump @816; //curOff = 793
							func_8();
							func_44(iVar0);
							iVar0++;
						}
						if (Global_1887363[iLocal_60 /*36*/].f_13 == 0)
						{
						}
						else
						{
							PED::_SET_SCENARIO_PED_DENSITY_THIS_FRAME(Global_1887363[iLocal_60 /*36*/].f_13);
						}
						BUILTIN::WAIT(0);
						iVar0 = 0;
						while (!func_44(iVar0))
						{
							iVar0++;
							BUILTIN::WAIT(0);
						}
						if (func_45() == -1)
						{
						}
						else
						{
							func_46();
						}
						SCRIPTS::TERMINATE_THIS_THREAD();
					}
					default:
						break;
			}
		}
	}
}

bool func_1()
{
	if (!bLocal_62)
	{
		if (Global_1051194)
		{
			bLocal_62 = true;
			return true;
		}
		if (func_47() && func_48())
		{
			bLocal_62 = true;
			return true;
		}
		return false;
	}
	if (Global_1051194)
	{
		return true;
	}
	if (func_48())
	{
		return true;
	}
	bLocal_62 = false;
	return false;
}

void func_2()
{
	int iVar0;

	if (func_45() != -1)
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		iVar0 = 0;
		while (!func_44(iVar0))
		{
			iVar0++;
			BUILTIN::WAIT(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_3()
{
}

bool func_4()
{
	if (func_45() != -1)
	{
		return !func_49(1, 1);
	}
	return true;
}

void func_5(int iParam0, int iParam1)
{
	if (!func_38(16))
	{
		return;
	}
	if (Global_1893611.f_7 == 0)
	{
		func_39(16);
		return;
	}
	if (!func_50(iParam0))
	{
		Global_1893611.f_7 = 0;
		func_39(16);
		return;
	}
	if (func_51(8))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 8;
			return;
		}
		else if (*iParam1 != 8)
		{
			func_52(8);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(2))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 4;
			return;
		}
		else if (*iParam1 != 4)
		{
			func_52(2);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(16))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 9;
			return;
		}
		else if (*iParam1 != 9)
		{
			func_52(16);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(4))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 7;
			return;
		}
		else if (*iParam1 != 7)
		{
			func_52(4);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(1))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 3;
			return;
		}
		else if (*iParam1 != 3)
		{
			func_52(1);
			*iParam1 = 12;
			return;
		}
	}
}

void func_6(int iParam0)
{
}

void func_7()
{
	if (!Global_1102813.f_3967)
	{
		Global_1102813.f_3967 = 1;
	}
}

void func_8()
{
	if (!Global_1072759.f_23824)
	{
		Global_1072759.f_23824 = 1;
	}
}

int func_9(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 122)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 134)
	{
		return 15;
	}
	else if (iParam0 <= 138)
	{
		return 16;
	}
	return -1;
}

bool func_10(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_11(int iParam0, int iParam1)
{
	Global_1896646[iParam0 /*2*/] = (Global_1896646[iParam0 /*2*/] || iParam1);
}

float func_12(int iParam0)
{
	float fVar0;

	switch (iParam0)
	{
		case 40:
			fVar0 = -3.898718E+37f;
			break;
		case 87:
			fVar0 = -0.0002522367f;
			break;
		case 74:
			fVar0 = -2.417579E+32f;
			break;
		case 66:
			fVar0 = -1.531462E+25f;
			break;
		case 116:
			fVar0 = 0.0001848368f;
			break;
		case 5:
			fVar0 = -4526542f;
			break;
		case 37:
			fVar0 = 6.821675E-21f;
			break;
		case 111:
			fVar0 = 0.006809331f;
			break;
		case 26:
			fVar0 = -2.420808E-17f;
			break;
		case 81:
			fVar0 = -1.686717E+25f;
			break;
		case 98:
			fVar0 = 1.381067E-28f;
			break;
		case 60:
			fVar0 = 6.533019E+26f;
			break;
		case 83:
			fVar0 = 2.288139E+27f;
			break;
		default:
			fVar0 = 0;
			break;
	}
	return fVar0;
}

bool func_13()
{
	iLocal_16 = Global_1887363[99 /*36*/].f_5;
	if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-2.845731E+14f))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2.845731E+14f, true);
	}
	if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(5.720917E-22f))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(5.720917E-22f, true);
	}
	return true;
}

void func_14(int iParam0)
{
	iParam0 = iParam0;
}

bool func_15(int iParam0)
{
	iParam0 = iParam0;
	return true;
}

void func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iLocal_19[0] = 1.058809E+19f;
	iLocal_19[1] = 2.760692E+13f;
	iLocal_19[2] = -2.208999f;
	iLocal_19[3] = 8.766405E+19f;
	iLocal_19[4] = 2.739501E+19f;
	iLocal_19[5] = 2.79743E+30f;
	iLocal_19[6] = -1.310324E-21f;
	iLocal_19[7] = -3.016006E-11f;
	iLocal_19[8] = 3.140016E+32f;
	iLocal_19[9] = -2.736116E-34f;
	iLocal_19[10] = 7.003139E-20f;
	iLocal_19[11] = 2.503104E+08f;
	iLocal_19[12] = 4.189914E-38f;
	iLocal_19[13] = 9.503104E-11f;
	iLocal_19[14] = -1.869724E+22f;
	iLocal_19[15] = -2.579705E+11f;
	iLocal_19[16] = -4.289823E+25f;
	iLocal_19[17] = -1.898231E+15f;
	iLocal_19[18] = 4.946293E-30f;
	iLocal_19[19] = 3.638852E-17f;
	iLocal_19[20] = 2.523508E-09f;
	iLocal_19[21] = -16970.36f;
	iLocal_19[22] = -2.424165E+33f;
	iLocal_19[23] = 6.330666E-22f;
	iLocal_19[24] = -0.2483253f;
	iLocal_19[25] = 2.413439E+26f;
	iLocal_19[26] = 1.942237E+16f;
	iLocal_19[27] = 1.243332E-23f;
	iLocal_19[28] = -1794939f;
	iLocal_19[29] = 2.029438E+30f;
	iLocal_19[30] = -8.576213E+23f;
	iLocal_19[31] = 3.043673E-24f;
	iLocal_19[32] = -4.485868E-21f;
	iLocal_19[33] = -3.7839E-29f;
	if (func_53(99, 255))
	{
		return;
	}
	iLocal_17 = AUDIO::GET_SOUND_ID();
	if (iLocal_17 == -1)
	{
	}
	iVar0 = VOLUME::CREATE_VOLUME_BOX(1010.465f, -1772.747f, 54.474f, 0f, 0f, 0f, 46.182f, 45.55f, 29.43f);
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	iVar2 = ENTITY::GET_MATCHING_ENTITIES(iVar0, iVar1, 3, 1, 8.540308E+28f, 0);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar4 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1);
		PHYSICS::SET_DISABLE_FRAG_DAMAGE(iVar4, true);
		PHYSICS::SET_DISABLE_BREAKING(iVar4, true);
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
}

bool func_17(int iParam0)
{
	iParam0 = iParam0;
	return true;
}

void func_18(int iParam0)
{
	iParam0 = iParam0;
}

bool func_19(int iParam0, int iParam1)
{
	return (Global_1896646[iParam0 /*2*/] && iParam1) != 0;
}

bool func_20(int iParam0)
{
	return func_54(iParam0, -1, -1, 0);
}

void func_21(int iParam0, int iParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/] = (Global_8130[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1072759.f_19611[iParam0 /*11*/] = (Global_1072759.f_19611[iParam0 /*11*/] || iParam1);
	}
}

void func_22(int iParam0)
{
	iParam0 = iParam0;
}

void func_23()
{
}

bool func_24(int iParam0, bool bParam1)
{
	if (func_55(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_56(5000))
		{
			return true;
		}
	}
	switch (func_58(func_57(0)))
	{
		case -1:
			return false;
		case 2:
			if (iParam0 & 1 != 0)
			{
				return true;
			}
			break;
		case 5:
			if (iParam0 & 2 != 0)
			{
				return true;
			}
			break;
		case 3:
			if (iParam0 & 16 != 0)
			{
				return true;
			}
			break;
		case 4:
			if (iParam0 & 32 != 0)
			{
				return true;
			}
			break;
		case 7:
			if (iParam0 & 1024 != 0)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_25()
{
}

void func_26()
{
}

void func_27()
{
}

void func_28()
{
}

void func_29(int iParam0)
{
	iParam0 = iParam0;
}

void func_30(int iParam0)
{
	iParam0 = iParam0;
}

void func_31()
{
}

void func_32()
{
}

void func_33(int iParam0)
{
	func_59(1061578342 /* Float: 0.775f */, 1045220557 /* Float: 0.2f */, 1020054733 /* Float: 0.025f */, 0f);
}

void func_34()
{
	if (!Global_1893611.f_186)
	{
		VEHICLE::_SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION(Global_1893611.f_182, Global_1893611.f_183, Global_1893611.f_184, Global_1893611.f_185);
	}
}

void func_35(var uParam0)
{
	int iVar0;

	if (uParam0->f_61 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		(*uParam0)[iVar0 /*3*/] = 0;
		(uParam0[iVar0 /*3*/])->f_1 = 0;
		(uParam0[uParam0->f_61 /*3*/])->f_2 = 0;
		iVar0++;
	}
	uParam0->f_61 = 0;
}

void func_36(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	func_60(uParam1, iLocal_16, 1);
}

void func_37(int iParam0)
{
	if (!func_61(iParam0))
	{
		return;
	}
	func_62();
}

bool func_38(int iParam0)
{
	return (Global_1893611 && iParam0) != 0;
}

void func_39(int iParam0)
{
	Global_1893611 = (Global_1893611 - (Global_1893611 && iParam0));
}

bool func_40(int iParam0)
{
	int iVar0;

	if (func_63(&bLocal_18) && !func_53(99, 255))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_19)
		{
			if (bLocal_18)
			{
				func_64(iLocal_19[iVar0], 0, 0f, 0, 0, 0, 1, 0);
			}
			iVar0++;
		}
	}
	if (iLocal_17 != -1)
	{
		if (func_65(6.018873E-22f) && !func_66(44))
		{
			if (func_67(Global_33, iLocal_16, 0, 0))
			{
				if (AUDIO::_HAS_SOUND_ID_FINISHED(iLocal_17))
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION_WITH_ID(iLocal_17, "MAIN_LOOP", 1011.224f, -1766.506f, 46.5833f, "FIRE_SMOLDER_LARGE_SOUNDSET", false, 0, false);
				}
			}
			else if (!AUDIO::_HAS_SOUND_ID_FINISHED(iLocal_17))
			{
				AUDIO::_STOP_SOUND_WITH_ID(iLocal_17);
			}
		}
	}
	return false;
}

void func_41(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if ((BUILTIN::VDIST(Global_34, 0f, 0f, 0f) <= 5f || func_68(Global_1940186, 32768)) || func_68(Global_1940186, 2.350989E-38f))
	{
		return;
	}
	if (func_69(uParam0, 1))
	{
		return;
	}
	uParam0->f_63++;
	if (uParam0->f_63 < 10)
	{
		return;
	}
	uParam0->f_63 = 0;
	bVar0 = false;
	bVar1 = ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT());
	bVar2 = func_70();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch ((uParam0[iVar3 /*3*/])->f_1)
		{
			case 1:
				if (VOLUME::DOES_VOLUME_EXIST((*uParam0)[iVar3 /*3*/]))
				{
					if (VOLUME::IS_POINT_IN_VOLUME((*uParam0)[iVar3 /*3*/], Global_34))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!func_71(uParam0[iVar3 /*3*/], 1) && func_72(iParam1)) && !func_73(iParam1, 16))
							{
								func_75(iParam1, func_74(), -1, 0, -1, 0);
								func_76(uParam0[iVar3 /*3*/], 1);
							}
							func_77(iParam1, 0);
						}
						bVar0 = true;
					}
				}
				break;
			default:
				break;
		}
		iVar3++;
	}
	func_78(bVar0);
}

int func_42(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

bool func_43()
{
	var uVar0;
	var uVar1;
	float fVar2;
	int iVar3;

	MISC::GET_CURR_WEATHER_STATE(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 1061158912)
	{
		iVar3 = uVar0;
	}
	else
	{
		iVar3 = uVar1;
	}
	if (func_79(iVar3))
	{
		return true;
	}
	return false;
}

bool func_44(int iParam0)
{
	if (iParam0 == 0)
	{
		func_80();
		LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), 0);
		func_21(iLocal_60, 2048);
		if (STATS::CHAL_IS_GOAL_ACTIVE(-1.042271E+15f, 0.4424044f))
		{
			switch (iLocal_60)
			{
				case 3:
				case 5:
				case 26:
				case 40:
				case 45:
				case 81:
				case 83:
				case 98:
				case 111:
				case 121:
				case 127:
				case 136:
					STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(func_81(iLocal_60, 0), 1);
					break;
			}
		}
		if (func_10(func_74()))
		{
			func_11(func_74(), 8);
		}
		func_82(iLocal_60, 4);
		func_82(iLocal_60, 8);
		func_78(0);
		if (func_45() == -1)
		{
			func_83(0);
		}
		func_84(iLocal_60);
		func_34();
		return false;
	}
	else if (func_45() == -1)
	{
		func_85(iLocal_60);
		func_86(iLocal_60);
		if (!func_87(iLocal_60, 0))
		{
			return false;
		}
	}
	else if (!func_88(iLocal_60))
	{
		return false;
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

int func_45()
{
	return Global_1572887.f_14;
}

void func_46()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_47()
{
	if (Global_1572887.f_260.f_3 > 0)
	{
		return true;
	}
	if (Global_1572887.f_260.f_4 != 0)
	{
		return true;
	}
	return false;
}

bool func_48()
{
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(8.360127E+26f, -1, false, 0))
	{
		return true;
	}
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(-4.947796E+13f, -1, false, 0))
	{
		return true;
	}
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(-4.200036E+09f, -1, false, 0))
	{
		return true;
	}
	return false;
}

bool func_49(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887.f_13)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::NETWORK_SESSION_IS_TRANSITIONING())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				if (!bParam0)
				{
					return true;
				}
				break;
			case 4:
				return true;
			case 3:
				return true;
			default:
				return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 5.152806E+32f)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_50(int iParam0)
{
	if (!func_61(iParam0))
	{
		return false;
	}
	return func_89(iParam0, 8);
}

bool func_51(int iParam0)
{
	return (Global_1893611.f_7 && iParam0) != 0;
}

void func_52(int iParam0)
{
	Global_1893611.f_7 = (Global_1893611.f_7 - (Global_1893611.f_7 && iParam0));
}

bool func_53(int iParam0, int iParam1)
{
	int iVar0;

	if (func_45() == -1)
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_90(&(Global_1206939[iParam1 /*12*/].f_4), iParam0, 30, 1, 7);
	if (iVar0 == 1)
	{
		return true;
	}
	return false;
}

int func_54(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_45() != -1)
	{
		return 1;
	}
	if (!func_61(iParam0))
	{
		return 1;
	}
	if (func_89(iParam0, 16))
	{
		return 1;
	}
	if (func_91(iParam0) && !func_92(iParam0))
	{
	}
	if (func_93(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_94(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_94(iParam2))
		{
			iVar1 = iParam2;
		}
		if (Global_1896644 < iVar0 || Global_1896644 > iVar1)
		{
			Global_1896644 = iVar0;
		}
		while (true)
		{
			if ((!func_91(iParam0) || func_92(iParam0)) || func_95(Global_1896644))
			{
				func_96(Global_1896644, 0);
			}
			Global_1896644++;
			iVar2++;
			if (Global_1896644 > iVar1)
			{
				Global_1896644 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_55(var uParam0)
{
	return (Global_1940186 && uParam0) != 0;
}

bool func_56(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < Global_1900595;
}

struct<2> func_57(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_58(var uParam0, var uParam1)
{
	return uParam0;
}

void func_59(int iParam0, int iParam1, int iParam2, float fParam3)
{
	Global_1893611.f_182 = iParam0;
	Global_1893611.f_183 = iParam1;
	Global_1893611.f_184 = iParam2;
	Global_1893611.f_185 = fParam3;
}

void func_60(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	if (!func_97(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61 /*3*/] = iParam1;
	(uParam0[uParam0->f_61 /*3*/])->f_1 = iParam2;
	(uParam0[uParam0->f_61 /*3*/])->f_2 = 0;
	uParam0->f_61++;
}

bool func_61(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_62()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_98(iVar0))
		{
			Global_1900426[iVar0] = -1;
		}
		iVar0++;
	}
}

bool func_63(bool bParam0)
{
	if (func_99())
	{
		if (!*bParam0)
		{
			*bParam0 = 1;
			return true;
		}
	}
	else if (*bParam0)
	{
		*bParam0 = 0;
		return true;
	}
	return false;
}

void func_64(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_100(iParam0, 0, 0);
	if (func_101(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_102(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_103(iParam0, 1);
			}
			else
			{
				func_104(iParam0, 1);
			}
		}
		else
		{
			func_105(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(iParam0, true);
		}
	}
	else if (func_106())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

bool func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_107(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_108(iVar1))
	{
		if (Global_1072759.f_19585.f_24 && !func_109(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(Global_1072759.f_19585[iVar1], iVar2) || MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2));
	}
	return MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2);
}

bool func_66(int iParam0)
{
	if (!func_110(iParam0))
	{
		return false;
	}
	return func_111(iParam0);
}

bool func_67(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

bool func_68(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_69(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_70()
{
	return func_68(Global_1940186, 8192);
}

bool func_71(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_72(int iParam0)
{
	if (!func_61(iParam0))
	{
		return false;
	}
	return ((Global_1887363[iParam0 /*36*/].f_21 == 1 || Global_1887363[iParam0 /*36*/].f_21 == 2) && !func_112(iParam0));
}

bool func_73(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (Global_1887363[iParam0 /*36*/].f_22 && iParam1) != 0;
}

int func_74()
{
	return Global_1896646.f_41;
}

void func_75(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	float fVar7;
	char* sVar8;
	char* sVar9;
	char[] cVar10[8];

	if (!func_113())
	{
		return;
	}
	sVar1 = func_114(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_115(iParam4))
	{
		if (func_61(iParam0))
		{
			iParam4 = func_116(func_9(iParam0));
		}
		else
		{
			iParam4 = func_116(iParam1);
		}
	}
	if (func_115(iParam4))
	{
		iVar3 = func_117(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_119(func_118(iParam2));
	}
	else if ((func_120(iParam1, 2) || func_121(iParam4, 2)) && !Global_1893611.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1893611.f_9 = 1;
	}
	else if ((func_61(iParam0) && func_89(iParam0, 2.350989E-38f)) && !Global_1893611.f_9)
	{
		sVar2 = MISC::VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1893611.f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1893611.f_9)
	{
		sVar2 = MISC::VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1893611.f_9 = 1;
	}
	else
	{
		iVar4 = func_123(func_122());
		iVar5 = func_124(func_122());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_34);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_125(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::VAR_STRING(674, sVar8, iVar4, func_126(&cVar6, 4.808429E-35f), sVar9, func_126(&cVar10, 4.808429E-35f));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_125(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::VAR_STRING(162, sVar8, iVar4, func_126(&cVar6, 4.808429E-35f), func_126(&cVar10, 4.808429E-35f));
		}
		Global_1893611.f_9 = 0;
	}
	Global_1939089.f_145 = func_127(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_76(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_77(int iParam0, bool bParam1)
{
	if (Global_1572887.f_12 && func_45() == 0)
	{
		return;
	}
	if (!func_128(iParam0))
	{
		return;
	}
	if (func_89(iParam0, 32))
	{
		return;
	}
	func_21(iParam0, 32);
	func_129(&Global_1940186, 16384);
	func_131(func_130(-7.103403E-17f, -3.542793E+37f), 1);
	switch (func_9(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_131(func_130(-7.103403E-17f, 2.866541E-31f), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_131(func_130(-7.103403E-17f, 3.024173E-30f), 1);
			break;
		case 3:
		case 10:
			func_131(func_130(-7.103403E-17f, 1.603649E+10f), 1);
			break;
		case 4:
		case 9:
			func_131(func_130(-7.103403E-17f, 497.0886f), 1);
			break;
		case 8:
			func_131(func_130(-7.103403E-17f, -4.726794E+32f), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_131(func_130(-7.103403E-17f, -1566073f), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			MAP::_MAP_DISCOVER_REGION(1.613995E+27f);
			break;
		case 1:
			MAP::_MAP_DISCOVER_REGION(9.619563f);
			break;
		case 2:
			MAP::_MAP_DISCOVER_REGION(2.374228E+28f);
			MAP::_MAP_DISCOVER_REGION(1.333148E+17f);
			break;
		case 6:
			MAP::_MAP_DISCOVER_REGION(-2.183831E+30f);
			break;
		case 7:
			MAP::_MAP_DISCOVER_REGION(5.088825E-29f);
			break;
		case 9:
			MAP::_MAP_DISCOVER_REGION(-1.39551E+26f);
			break;
		case 10:
			MAP::_MAP_DISCOVER_REGION(-1.726599E-10f);
			MAP::_MAP_DISCOVER_REGION(-1.726599E-10f);
			break;
		case 11:
			MAP::_MAP_DISCOVER_REGION(-1.087969E+21f);
			break;
		case 12:
			MAP::_MAP_DISCOVER_REGION(-3.083407E+14f);
			break;
		case 15:
			MAP::_MAP_DISCOVER_REGION(-3.751822E+12f);
			break;
		case 16:
			MAP::_MAP_DISCOVER_REGION(-2.626526E+38f);
			break;
		case 17:
			MAP::_MAP_DISCOVER_REGION(-3.820025E-14f);
			break;
		case 21:
			MAP::_MAP_DISCOVER_REGION(-9.495817E-37f);
			break;
		case 22:
			MAP::_MAP_DISCOVER_REGION(5.617157E-31f);
			break;
		case 24:
			MAP::_MAP_DISCOVER_REGION(5.901232E-31f);
			break;
		case 25:
			MAP::_MAP_DISCOVER_REGION(-3.521766E-15f);
			break;
		case 26:
			MAP::_MAP_DISCOVER_REGION(27.57284f);
			break;
		case 27:
			MAP::_MAP_DISCOVER_REGION(1.68892E-30f);
			break;
		case 28:
			MAP::_MAP_DISCOVER_REGION(-7.041817E-10f);
			break;
		case 30:
			MAP::_MAP_DISCOVER_REGION(-5.950899E-27f);
			break;
		case 31:
			MAP::_MAP_DISCOVER_REGION(-1.524998E-31f);
			break;
		case 32:
			MAP::_MAP_DISCOVER_REGION(0.007551658f);
			break;
		case 128:
			MAP::_MAP_DISCOVER_REGION(1.389935E-05f);
			break;
		case 129:
			MAP::_MAP_DISCOVER_REGION(2.142827E+19f);
			break;
		case 131:
			MAP::_MAP_DISCOVER_REGION(-1.055526E-09f);
			break;
		case 130:
			MAP::_MAP_DISCOVER_REGION(-1.010413E-26f);
			break;
		case 36:
			MAP::_MAP_DISCOVER_REGION(-3.10736E-10f);
			break;
		case 38:
			MAP::_MAP_DISCOVER_REGION(-814929.9f);
			break;
		case 120:
			MAP::_MAP_DISCOVER_REGION(6.327552E+23f);
			break;
		case 39:
			MAP::_MAP_DISCOVER_REGION(-4.580508E+20f);
			break;
		case 42:
			MAP::_MAP_DISCOVER_REGION(2.37012E-22f);
			break;
		case 44:
			MAP::_MAP_DISCOVER_REGION(-6.741661E-24f);
			break;
		case 45:
			MAP::_MAP_DISCOVER_REGION(2.149383E+27f);
			break;
		case 46:
			MAP::_MAP_DISCOVER_REGION(2.101791E+23f);
			break;
		case 47:
			MAP::_MAP_DISCOVER_REGION(-3.817698E+35f);
			break;
		case 58:
			MAP::_MAP_DISCOVER_REGION(7.418907E-07f);
			break;
		case 59:
			MAP::_MAP_DISCOVER_REGION(3.145188E-27f);
			break;
		case 52:
			MAP::_MAP_DISCOVER_REGION(1.722176E-15f);
			break;
		case 67:
			MAP::_MAP_DISCOVER_REGION(5.211075E-24f);
			break;
		case 69:
			MAP::_MAP_DISCOVER_REGION(-8.823569E-28f);
			break;
		case 70:
			MAP::_MAP_DISCOVER_REGION(1.115845E-15f);
			break;
		case 71:
			MAP::_MAP_DISCOVER_REGION(2.619473E-11f);
			break;
		case 73:
			MAP::_MAP_DISCOVER_REGION(-1.080593E-07f);
			break;
		case 76:
			MAP::_MAP_DISCOVER_REGION(-2.361315E+23f);
			break;
		case 77:
			MAP::_MAP_DISCOVER_REGION(-0.2067486f);
			break;
		case 79:
			MAP::_MAP_DISCOVER_REGION(-3.937803E-10f);
			break;
		case 82:
			MAP::_MAP_DISCOVER_REGION(4.232901E+14f);
			break;
		case 84:
			MAP::_MAP_DISCOVER_REGION(-5.358283E-11f);
			break;
		case 68:
			MAP::_MAP_DISCOVER_REGION(-4.222318E+37f);
			break;
		case 85:
			MAP::_MAP_DISCOVER_REGION(1.837754E+19f);
			MAP::_MAP_DISCOVER_REGION(-8.806617E+22f);
			MAP::_MAP_DISCOVER_REGION(-2.216376E+14f);
			break;
		case 87:
			MAP::_MAP_DISCOVER_REGION(1.197407E-33f);
			MAP::_MAP_DISCOVER_REGION(-1.002169E+34f);
			MAP::_MAP_DISCOVER_REGION(3.571017E+34f);
			break;
		case 88:
			MAP::_MAP_DISCOVER_REGION(-1.162533E+33f);
			break;
		case 90:
			MAP::_MAP_DISCOVER_REGION(1.266234E+20f);
			break;
		case 91:
			MAP::_MAP_DISCOVER_REGION(1.380158E-34f);
			break;
		case 92:
			MAP::_MAP_DISCOVER_REGION(1.314074E+29f);
			break;
		case 94:
			MAP::_MAP_DISCOVER_REGION(1.752256E-22f);
			break;
		case 97:
			MAP::_MAP_DISCOVER_REGION(7.032591E-36f);
			break;
		case 102:
			MAP::_MAP_DISCOVER_REGION(-0.003672305f);
			break;
		case 104:
			MAP::_MAP_DISCOVER_REGION(1.103986E-11f);
			break;
		case 105:
			MAP::_MAP_DISCOVER_REGION(6.590472E+35f);
			break;
		case 106:
			MAP::_MAP_DISCOVER_REGION(1.464423E+29f);
			break;
		case 108:
			MAP::_MAP_DISCOVER_REGION(NaNf);
			break;
		case 110:
			MAP::_MAP_DISCOVER_REGION(-4.053854E-20f);
			MAP::_MAP_DISCOVER_REGION(-7.022341E-12f);
			break;
		case 112:
			MAP::_MAP_DISCOVER_REGION(2.479537E+10f);
			break;
		case 113:
			MAP::_MAP_DISCOVER_REGION(-3.241092E-13f);
			break;
		case 115:
			MAP::_MAP_DISCOVER_REGION(1.646843E-09f);
			break;
		case 118:
			MAP::_MAP_DISCOVER_REGION(6.263714E+17f);
			MAP::_MAP_DISCOVER_REGION(-24712.09f);
			break;
	}
	if (bParam1)
	{
		func_21(iParam0, 64);
	}
}

void func_78(bool bParam0)
{
	if (bParam0)
	{
		Global_1893611 |= 1;
	}
	else
	{
		Global_1893611 = (Global_1893611 - Global_1893611 & 1);
	}
}

bool func_79(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("SHOWER"):
		case joaat("SLEET"):
		case joaat("HURRICANE"):
		case joaat("RAIN"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
			return true;
		default:
			break;
	}
	return false;
}

void func_80()
{
}

int func_81(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return NaNf;
		case 1:
			return 1.049338E+18f;
		case 2:
			return 1.498895E-22f;
		case 3:
			return -1.702218E-25f;
		case 4:
			return 2.047014E+29f;
		case 5:
			return 2.102611E-13f;
		case 6:
			return -1.094444E+23f;
		case 7:
			return -8.246098E-11f;
		case 8:
			return 0.0003337624f;
		case 9:
			return -1.945498E-13f;
		case 10:
			return -8.558729E-19f;
		case 11:
			return 2.354955E-38f;
		case 12:
			return 8.457601E+13f;
		case 13:
			return 3.274443E-19f;
		case 14:
			return 0.0005826025f;
		case 15:
			return 6.104771E-23f;
		case 16:
			return -3.247849E-35f;
		case 17:
			return 6.796195E-24f;
		case 18:
			return -4.880347E-24f;
		case 19:
			return 1.469572E+26f;
		case 20:
			return 6.687569E+34f;
		case 21:
			return 2.750939E-11f;
		case 22:
			return -0.1062356f;
		case 24:
			return -1.784405f;
		case 23:
			return -1.21609f;
		case 25:
			return 3.29758E+38f;
		case 26:
			return 14587.68f;
		case 27:
			return 8.223601E-11f;
		case 28:
			return 3197.742f;
		case 30:
			return -5.451207E+32f;
		case 29:
			return 2.46961E+34f;
		case 31:
			return 8.012324E+07f;
		case 32:
			return -6.24719E-28f;
		case 33:
			return 8.781186E-12f;
		case 34:
			return 2.666268E+20f;
		case 35:
			return 5.365568E-25f;
		case 36:
			return 9.694758f;
		case 37:
			return 3.661959E-22f;
		case 38:
			return -8.077674E-12f;
		case 39:
			return -2.423394E+33f;
		case 40:
			return 5.494265E+13f;
		case 41:
			return 1.934011E-33f;
		case 42:
			return 4.019232E+08f;
		case 43:
			return 2.296171f;
		case 53:
			return 6.549141f;
		case 54:
			return -2.545939E-25f;
		case 44:
			return 341095f;
		case 55:
			return -1.732738E-13f;
		case 45:
			return -6.015189E-35f;
		case 56:
			return -2.592482E+17f;
		case 46:
			return 4.27727E-10f;
		case 57:
			return -1.441672E+16f;
		case 47:
			return -15159.68f;
		case 48:
			return 9.085946E-29f;
		case 49:
			return -1.725231E+22f;
		case 50:
			return -2.348099E+36f;
		case 51:
			return -8.518072E-29f;
		case 58:
			return -3.843981E-31f;
		case 59:
			return -6.084368E+13f;
		case 60:
			return -0.003789695f;
		case 52:
			return 2.81243E-25f;
		case 61:
			return -2.810075E+07f;
		case 62:
			return 2.66865E-24f;
		case 63:
			return -2.399166E+33f;
		case 64:
			return -5.385402E-22f;
		case 65:
			return 2.6504E+31f;
		case 66:
			return 1.120495E+28f;
		case 67:
			return 2.302714E-06f;
		case 69:
			return 2.022597E+27f;
		case 70:
			return 8.50011E+35f;
		case 71:
			return -1.834545E+31f;
		case 72:
			return 2.681125E+26f;
		case 73:
			return NaNf;
		case 74:
			return 1.94863E+28f;
		case 75:
			return -2.233904E-18f;
		case 76:
			return 2.177862E+38f;
		case 77:
			return -1.372755E-12f;
		case 78:
			return 3.486547E-10f;
		case 79:
			return 1.805301E+38f;
		case 80:
			return 1.290267E+23f;
		case 81:
			return joaat("REGION_HRT_VALENTINE");
		case 82:
			return 3.541437E+37f;
		case 83:
			return 1.340204E-32f;
		case 84:
			return 12823.88f;
		case 68:
			return 2.498765E-17f;
		case 85:
			return 2.724825E-19f;
		case 86:
			return -4.018006E-17f;
		case 87:
			return -1.794133E-19f;
		case 88:
			return -1.311699E+07f;
		case 89:
			return -7.308199E-13f;
		case 90:
			return 0.01935584f;
		case 91:
			return -4.311316E-05f;
		case 92:
			return -4.75276E-20f;
		case 93:
			return -2.51251E+22f;
		case 94:
			return -504140.1f;
		case 95:
			return -1.291509E+14f;
		case 97:
			return 2.353091E-37f;
		case 98:
			return 1.686618E+10f;
		case 96:
			return 1.087588E-16f;
		case 99:
			return -4.384771E+36f;
		case 100:
			return -6.742055E+12f;
		case 101:
			return -1.641191E+11f;
		case 102:
			return 1.774577E+09f;
		case 103:
			return -1.986649E+22f;
		case 104:
			return -5.46941E-14f;
		case 105:
			return 1.061583E-32f;
		case 106:
			return -3.406536E-22f;
		case 107:
			return 2.459217E-13f;
		case 108:
			return -5.444849E+37f;
		case 109:
			return -1.291923E-23f;
		case 110:
			return -5.755611E+19f;
		case 111:
			return -2.08496E+12f;
		case 112:
			return -4.807343E-05f;
		case 113:
			return -9.123408E-32f;
		case 115:
			return -1.759319E-08f;
		case 116:
			return -3.056887E+17f;
		case 117:
			return 3.529603E-07f;
		case 118:
			return NaNf;
		case 114:
			return -14.87718f;
		case 119:
			return -1.840224E-13f;
		case 135:
			return 8.661269E-15f;
		case 136:
			return 1.384722E-08f;
		case 137:
			return 1.920854E+23f;
		case 138:
			return -2.45758E-18f;
		case 127:
			return 8.848738E+10f;
		case 128:
			return -2.729886E+12f;
		case 129:
			return 1.278004E+19f;
		case 131:
			return -1.288943E+33f;
		case 130:
			return -1.683166E-13f;
		case 132:
			return -1.461573E+35f;
		case 133:
			return 1.183602E-14f;
		case 134:
			return 7.453607E+28f;
		case 120:
			return -8.878077E+35f;
		case 121:
			return 8.947486E-31f;
		case 122:
			return 2.254247E+37f;
		case 123:
			return -2.125533E-11f;
		case 124:
			return -6.859215E-38f;
		case 125:
			return -6.28234E+18f;
		case 126:
			return 7.715836E+17f;
		case 139:
			return 2.629307E-15f;
		default:
			break;
	}
	if (bParam1)
	{
		return 7.087189E+24f;
	}
	return 0;
}

void func_82(int iParam0, int iParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/] = (Global_8130[iParam0 /*11*/] - (Global_8130[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1072759.f_19611[iParam0 /*11*/] = (Global_1072759.f_19611[iParam0 /*11*/] - (Global_1072759.f_19611[iParam0 /*11*/] && iParam1));
}

void func_83(bool bParam0)
{
	if (bParam0)
	{
		Global_1893611 |= 2;
	}
	else
	{
		Global_1893611 = (Global_1893611 - Global_1893611 & 2);
	}
}

void func_84(int iParam0)
{
	func_59(1061578342 /* Float: 0.775f */, 1045220557 /* Float: 0.2f */, 1020054733 /* Float: 0.025f */, 0f);
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_16))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_16);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iLocal_16);
	}
	if (iLocal_17 != -1)
	{
		if (!AUDIO::_HAS_SOUND_ID_FINISHED(iLocal_17))
		{
			AUDIO::_STOP_SOUND_WITH_ID(iLocal_17);
		}
		AUDIO::RELEASE_SOUND_ID(iLocal_17);
	}
	if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-2.845731E+14f))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2.845731E+14f, false);
	}
	iParam0 = iParam0;
}

void func_85(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1939946.f_5[iVar0 /*11*/].f_5 == iParam0)
		{
			func_132(iVar0);
		}
		iVar0++;
	}
}

void func_86(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1915643.f_3[iVar0 /*447*/].f_8 == iParam0)
		{
			func_133(iVar0);
		}
		iVar0++;
	}
}

bool func_87(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_45() != -1)
	{
		return true;
	}
	if (!func_61(iParam0))
	{
		return true;
	}
	if (func_93(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1896644.f_1 < iVar0 || Global_1896644.f_1 > iVar1)
		{
			Global_1896644.f_1 = iVar0;
		}
		while (true)
		{
			if (!func_134(Global_1896644.f_1, 16))
			{
				func_135(Global_1896644.f_1, 0);
			}
			Global_1896644.f_1++;
			iVar2++;
			if (Global_1896644.f_1 > iVar1)
			{
				Global_1896644.f_1 = -1;
				return true;
			}
			if (iVar2 >= 10 && !bParam1)
			{
				return false;
			}
		}
	}
	return true;
}

bool func_88(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (func_136(iVar0) || func_137(iVar0))
		{
		}
		else
		{
			switch (iVar0)
			{
				case 34:
					break;
				case 30:
					func_138();
					break;
				case 32:
					func_139();
					break;
				default:
					if (Global_1051832.f_92[iVar0 /*75*/].f_2 == iParam0)
					{
						func_140(iVar0, 0);
					}
					break;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_89(int iParam0, int iParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		return (Global_8130[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1072759.f_19611[iParam0 /*11*/] && iParam1) != 0;
}

int func_90(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = (iParam1 / iParam2);
	iVar1 = (iParam1 % iParam2);
	iVar2 = (BUILTIN::SHIFT_LEFT(1, iParam3) - 1);
	iVar3 = 0;
	iVar4 = (iParam3 * iVar1);
	iVar3 = ((*uParam0)[iVar0] && BUILTIN::SHIFT_LEFT(iVar2, iVar4));
	iVar3 = BUILTIN::SHIFT_RIGHT(iVar3, iVar4);
	return iVar3;
}

bool func_91(int iParam0)
{
	if (!func_61(iParam0))
	{
		return false;
	}
	return func_89(iParam0, 9.403955E-38f);
}

bool func_92(int iParam0)
{
	if (!func_61(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 33:
			return true;
		case 37:
			return true;
		case 70:
			return true;
		case 101:
			return true;
	}
	return false;
}

bool func_93(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_45() != -1;
	switch (iParam0)
	{
		case 81:
			*iParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 111:
			*iParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*iParam1 = 137;
			*iParam2 = 318;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 66:
			*iParam1 = 374;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 374;
			}
			break;
		case 83:
			*iParam1 = 376;
			*iParam2 = 425;
			if (bVar0)
			{
				*iParam2 = 378;
			}
			break;
		case 98:
			*iParam1 = 437;
			*iParam2 = 465;
			if (bVar0)
			{
				*iParam2 = 437;
			}
			break;
		case 26:
			*iParam1 = 466;
			if (bParam3)
			{
				*iParam2 = 494;
			}
			else
			{
				*iParam2 = 496;
			}
			if (bVar0)
			{
				*iParam2 = 466;
			}
			break;
		case 40:
			*iParam1 = 502;
			*iParam2 = 547;
			if (bVar0)
			{
				*iParam2 = 503;
			}
			break;
		case 73:
			*iParam1 = 548;
			*iParam2 = 559;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 560;
			*iParam2 = 582;
			if (bVar0)
			{
				*iParam2 = 560;
			}
			break;
		case 74:
			*iParam1 = 583;
			if (bParam3)
			{
				*iParam2 = 592;
			}
			else
			{
				*iParam2 = 606;
			}
			if (bVar0)
			{
				*iParam2 = 584;
			}
			break;
		case 80:
			*iParam1 = 497;
			*iParam2 = 500;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 99:
			*iParam1 = 607;
			*iParam2 = 619;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 620;
			*iParam2 = 635;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 103:
			*iParam1 = 636;
			*iParam2 = 637;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 638;
			*iParam2 = 650;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 651;
			*iParam2 = 652;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 33:
			*iParam1 = 319;
			*iParam2 = 338;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 87:
			*iParam1 = 653;
			if (bParam3)
			{
				*iParam2 = 667;
			}
			else
			{
				*iParam2 = 684;
			}
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 37:
			*iParam1 = 685;
			*iParam2 = 694;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 60:
			*iParam1 = 695;
			*iParam2 = 702;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 709;
			}
			else
			{
				*iParam1 = 703;
			}
			*iParam2 = 717;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 718;
			*iParam2 = 724;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 69:
			*iParam1 = 730;
			*iParam2 = 734;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 71:
			*iParam1 = 739;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 75:
			*iParam1 = 745;
			*iParam2 = 748;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 725;
			*iParam2 = 726;
			break;
		case 102:
			*iParam1 = 735;
			*iParam2 = 737;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 30:
			*iParam1 = 738;
			*iParam2 = 738;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 106:
			*iParam1 = 749;
			*iParam2 = 757;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 108:
			*iParam1 = 758;
			*iParam2 = 761;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 727;
			*iParam2 = 729;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 131:
			*iParam1 = 785;
			*iParam2 = 787;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 91:
			*iParam1 = 762;
			*iParam2 = 766;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 135:
			*iParam1 = 767;
			*iParam2 = 773;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 127:
			*iParam1 = 426;
			*iParam2 = 436;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 121:
			*iParam1 = 339;
			*iParam2 = 369;
			if (bVar0)
			{
				*iParam2 = 369;
			}
			break;
		case 132:
			*iParam1 = 370;
			*iParam2 = 373;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 122:
			*iParam1 = 777;
			*iParam2 = 784;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 774;
			*iParam2 = 776;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 44:
			*iParam1 = 788;
			*iParam2 = 792;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 94:
			*iParam1 = 793;
			*iParam2 = 794;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 795;
			*iParam2 = 795;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 796;
			*iParam2 = 797;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 107:
			*iParam1 = 798;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 123:
			*iParam1 = 501;
			*iParam2 = 501;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 801;
			*iParam2 = 827;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 139:
			*iParam1 = 828;
			*iParam2 = 851;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

bool func_94(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 948);
}

bool func_95(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return true;
		case 65:
			return true;
		case 66:
			return true;
		case 67:
			return true;
		case 68:
			return true;
		default:
			break;
	}
	return false;
}

int func_96(int iParam0, bool bParam1)
{
	if (!func_94(iParam0))
	{
		return 0;
	}
	if (!func_134(iParam0, 2))
	{
		return 0;
	}
	if (func_134(iParam0, 32) && !bParam1)
	{
		func_142(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_141(iParam0)));
		if (func_45() == -1)
		{
			if (func_134(iParam0, 2048))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_143(iParam0));
				func_144(iParam0, 2048);
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_143(iParam0));
		}
		return 0;
	}
	if (!func_145(iParam0) && func_45() == -1)
	{
		return 0;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_143(iParam0)))
	{
		func_144(iParam0, 128);
		return 1;
	}
	func_142(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_141(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_143(iParam0));
	if (func_134(iParam0, 2048))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_143(iParam0));
		func_144(iParam0, 2048);
	}
	return 1;
}

bool func_97(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

bool func_98(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

bool func_99()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_4;
}

int func_100(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[0])) && bParam1)
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051645.f_16[0], 0, false);
		}
		else
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, false, false, 0, 0, false);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[0])) && bParam1)
	{
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(iParam0))
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051645.f_16[0], 0, false);
		}
	}
	if (bParam2)
	{
		OBJECT::_DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(iParam0, true);
	}
	return iParam0;
}

bool func_101(int iParam0)
{
	if (func_146(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

void func_102(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_101(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_103(int iParam0, bool bParam1)
{
	if (func_101(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_104(int iParam0, bool bParam1)
{
	if (func_101(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_105(int iParam0, bool bParam1)
{
	if (func_101(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_106()
{
	return true;
}

int func_107(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
			return 521;
		case -2141419899:
			return 404;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
			return 470;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 394;
		case -2058120606:
			return 194;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
			return 464;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
			return 338;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case joaat("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE"):
			return 387;
		case -1939389836:
			return 416;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
			return 428;
		case -1925798111:
			return 41;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
			return 439;
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
			return 403;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
			return 463;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 380;
		case -1852605133:
			return 10;
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
			return 409;
		case -1847672446:
			return 312;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
			return 504;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_02"):
			return 446;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 411;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 398;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_03"):
			return 479;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_04"):
			return 524;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_03"):
			return 519;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_01"):
			return 421;
		case -1700452710:
			return 317;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_02"):
			return 466;
		case -1674179981:
			return 53;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_03"):
			return 527;
		case -1666278201:
			return 33;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_02"):
			return 486;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_02"):
			return 438;
		case -1612662716:
			return 198;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 354;
		case -1608141409:
			return 538;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK"):
			return 336;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_02"):
			return 434;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_03"):
			return 503;
		case -1558439474:
			return 286;
		case -1556041029:
			return 410;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_02"):
			return 518;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_03"):
			return 523;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_02"):
			return 462;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 370;
		case -1447311849:
			return 321;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_04"):
			return 528;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_01"):
			return 465;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_04"):
			return 472;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_02"):
			return 478;
		case -1387772214:
			return 407;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_03"):
			return 475;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_03"):
			return 487;
		case -1344601768:
			return 347;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_04"):
			return 476;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 362;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_04"):
			return 532;
		case -1329135070:
			return 138;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_01"):
			return 437;
		case -1311865656:
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 352;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_01"):
			return 461;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_02"):
			return 426;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 353;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_03"):
			return 423;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 365;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 400;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case joaat("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH"):
			return 391;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_LOCK"):
			return 339;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_03"):
			return 443;
		case -1095341658:
			return 408;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE"):
			return 382;
		case -1029225159:
			return 104;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_03"):
			return 431;
		case -1014145132:
			return 273;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_04"):
			return 460;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 399;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_03"):
			return 511;
		case -939420910:
			return 44;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_04"):
			return 424;
		case -925071604:
			return 541;
		case -919512195:
			return 40;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 368;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 366;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_04"):
			return 500;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 393;
		case joaat("WS_MP_CAMP_DEFEND_TALL_TREES"):
			return 389;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_01"):
			return 505;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_04"):
			return 432;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 371;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_03"):
			return 419;
		case -828139293:
			return 246;
		case -812641169:
			return 534;
		case -811637947:
			return 232;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_01"):
			return 493;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_02"):
			return 514;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 372;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_02"):
			return 530;
		case -699277634:
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 355;
		case -683458244:
			return 78;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_02"):
			return 458;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_04"):
			return 512;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK"):
			return 342;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_02"):
			return 494;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_03"):
			return 471;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH"):
			return 383;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_02"):
			return 506;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_04"):
			return 492;
		case -554519756:
			return 535;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 379;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			return 337;
		case -503955743:
			return 235;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 326;
		case -502324015:
			return 8;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_03"):
			return 515;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_02"):
			return 418;
		case -491981251:
			return 184;
		case -489737721:
			return 401;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 349;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_03"):
			return 531;
		case -441204543:
			return 533;
		case -434590080:
			return 212;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_03"):
			return 459;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 373;
		case -389056691:
			return 257;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_03"):
			return 507;
		case joaat("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD"):
			return 388;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_01"):
			return 429;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return 369;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_03"):
			return 491;
		case -311373772:
			return 539;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_01"):
			return 433;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_LOCK"):
			return 345;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_01"):
			return 417;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_02"):
			return 522;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_04"):
			return 516;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_UNLOCK"):
			return 344;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_02"):
			return 482;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_02"):
			return 430;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return 350;
		case -108307814:
			return 28;
		case -102827640:
			return 402;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_02"):
			return 498;
		case -99303535:
			return 165;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_02"):
			return 490;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_02"):
			return 422;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_04"):
			return 508;
		case -75024673:
			return 244;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_04"):
			return 440;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_04"):
			return 452;
		case -63926460:
			return 87;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return 357;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_03"):
			return 467;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 405;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 540;
		case joaat("WS_MP_CAMP_DEFEND_NEW_HANOVER"):
			return 390;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 331;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_01"):
			return 453;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return 395;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_01"):
			return 529;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_01"):
			return 489;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 327;
		case 235928616:
			return 271;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_01"):
			return 517;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_01"):
			return 509;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_04"):
			return 484;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 544;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK"):
			return 341;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 377;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 392;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_03"):
			return 455;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_03"):
			return 447;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 358;
		case 588987611:
			return 177;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK"):
			return 340;
		case 618699440:
			return 75;
		case joaat("WS_MP_HIDEOUT_GAPTOOTH"):
			return 375;
		case 630808005:
			return 126;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_01"):
			return 469;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_01"):
			return 481;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_03"):
			return 499;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_03"):
			return 483;
		case 723021499:
			return 250;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_02"):
			return 474;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 381;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 361;
		case 791041526:
			return 18;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_02"):
			return 454;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_04"):
			return 468;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_02"):
			return 502;
		case 817925178:
			return 227;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_01"):
			return 473;
		case 831940854:
			return 406;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_02"):
			return 450;
		case 865557632:
			return 536;
		case 868326136:
			return 270;
		case joaat("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS"):
			return 384;
		case 885203519:
			return 315;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 378;
		case joaat("WS_MP_HIDEOUT_CAMP_PIKES"):
			return 374;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_02"):
			return 510;
		case 929582877:
			return 367;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 415;
		case 945612176:
			return 234;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_LOCK"):
			return 343;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_02"):
			return 442;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_01"):
			return 445;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_01"):
			return 501;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 537;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_01"):
			return 485;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_03"):
			return 451;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_01"):
			return 513;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return 360;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 542;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_04"):
			return 480;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return 346;
		case 1248935549:
			return 414;
		case 1250636944:
			return 245;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_04"):
			return 448;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_01"):
			return 441;
		case joaat("WS_MP_CAMP_DEFEND_LITTLE_CREEK"):
			return 386;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 348;
		case 1306158345:
			return 199;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 356;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_04"):
			return 420;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_01"):
			return 525;
		case 1350371763:
			return 20;
		case 1350391819:
			return 73;
		case 1352699670:
			return 256;
		case 1358491857:
			return 249;
		case 1360745816:
			return 80;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_04"):
			return 496;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 413;
		case 1433244935:
			return 164;
		case 1441416901:
			return 208;
		case 1453909576:
			return 123;
		case 1466547629:
			return 118;
		case 1478132521:
			return 303;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_01"):
			return 449;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_01"):
			return 425;
		case 1497516462:
			return 5;
		case 1500064347:
			return 70;
		case 1509509592:
			return 35;
		case 1512816328:
			return 166;
		case 1517904467:
			return 203;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_03"):
			return 435;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_01"):
			return 457;
		case 1522511407:
			return 265;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return 325;
		case 1557082963:
			return 161;
		case joaat("WS_MP_CAMP_DEFEND_RIO_BRAVO"):
			return 385;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_04"):
			return 520;
		case 1607768502:
			return 9;
		case 1609506757:
			return 105;
		case 1626481264:
			return 116;
		case 1643531967:
			return 125;
		case 1649996811:
			return 179;
		case 1660024373:
			return 148;
		case 1665756137:
			return 91;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_02"):
			return 526;
		case 1691618738:
			return 66;
		case 1698972798:
			return 351;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 364;
		case 1703426636:
			return 43;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return 376;
		case 1766284049:
			return 92;
		case 1774060092:
			return 543;
		case 1776302352:
			return 299;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_04"):
			return 444;
		case joaat("WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_01"):
			return 397;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case joaat("WS_MP_TREASURE_MAP_INTRO_BLACKWATER_01"):
			return 412;
		case 1867912207:
			return 68;
		case 1881028477:
			return 363;
		case 1884271742:
			return 51;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_04"):
			return 436;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			return 359;
		case 1944170089:
			return 159;
		case 1947931439:
			return 216;
		case 1952610440:
			return 200;
		case 1954026328:
			return 307;
		case 1982676972:
			return 89;
		case 2008888900:
			return 178;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_04"):
			return 488;
		case 2016141805:
			return 6;
		case 2019386373:
			return 187;
		case 2024121624:
			return 190;
		case 2024383613:
			return 305;
		case 2024769126:
			return 293;
		case 2037589949:
			return 61;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_01"):
			return 497;
		case 2051822093:
			return 284;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_03"):
			return 427;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_01"):
			return 477;
		case 2077022393:
			return 291;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_04"):
			return 456;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case joaat("WS_MP_ASSASSINATION_TRK_GRZ_CAMP"):
			return 396;
		case 2109952320:
			return 189;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			return 324;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_03"):
			return 495;
		case 2127577956:
			return 241;
		case 2136753624:
			return 85;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_108(int iParam0)
{
	int iVar0;

	iVar0 = func_147(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_109(int iParam0)
{
	if (iParam0 == 1.351745E+31f)
	{
		return true;
	}
	return false;
}

bool func_110(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_111(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_38.f_3651[iVar1], iVar2);
}

bool func_112(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 39) && !func_148())
	{
		return true;
	}
	if (iParam0 == 66)
	{
		return true;
	}
	return false;
}

bool func_113()
{
	if (Global_13)
	{
		return false;
	}
	if (!func_149())
	{
		return false;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939089.f_75.f_55))
	{
		return false;
	}
	if (func_150(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_114(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, var uParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1893611.f_162)))
	{
		sVar0 = func_151(Global_1893611.f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = func_153(func_152(Global_34));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_154(iParam0) || func_66(44))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 30:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 31:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 32:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 33:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 127:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 128:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 131:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 130:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 132:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 35:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 36:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 37:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 38:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 120:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 122:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 121:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 39:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 40:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 41:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 53:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 44:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 45:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 43:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 47:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 51:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 58:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 60:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 52:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 62:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 64:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 65:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 66:
					sVar0 = "TOWN_MANICATO";
					break;
				case 135:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 136:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 67:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 69:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 70:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 71:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 72:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 73:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 74:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 75:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 77:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 79:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 80:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 81:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 82:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 83:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 84:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 87:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 85:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 86:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 88:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 91:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 92:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 93:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 94:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 98:
					sVar0 = "TOWN_VANHORN";
					break;
				case 123:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 124:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 125:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 99:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 100:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 101:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 102:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 104:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 105:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 106:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 108:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 110:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 111:
					sVar0 = "TOWN_RHODES";
					break;
				case 114:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 116:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 117:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 118:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 139:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case joaat("WATER_ARROYO_DE_LA_VIBORA"):
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
			case joaat("WATER_AURORA_BASIN"):
				sVar0 = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
			case joaat("WATER_BAHIA_DE_LA_PAZ"):
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
			case joaat("WATER_BARROW_LAGOON"):
				sVar0 = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
			case joaat("WATER_BAYOU_NWA"):
				sVar0 = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
			case joaat("WATER_CAIRN_LAKE"):
				sVar0 = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
			case joaat("WATER_CATTIAL_POND"):
				sVar0 = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_DAKOTA_RIVER"):
				sVar0 = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_DEADBOOT_CREEK"):
				sVar0 = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_ELYSIAN_POOL"):
				sVar0 = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
			case joaat("WATER_FLAT_IRON_LAKE"):
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
			case joaat("WATER_HAWKS_EYE_CREEK"):
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_HEARTLANDS_OVERFLOW"):
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
			case joaat("WATER_HOT_SPRINGS"):
				sVar0 = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
			case joaat("WATER_LAKE_DON_JULIO"):
				sVar0 = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
			case joaat("WATER_LAKE_ISABELLA"):
				sVar0 = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
			case joaat("WATER_LANNAHECHEE_RIVER"):
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_LITTLE_CREEK_RIVER"):
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_LOWER_MONTANA_RIVER"):
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_MATTLOCK_POND"):
				sVar0 = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_MOONSTONE_POND"):
				sVar0 = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_O_CREAGHS_RUN"):
				sVar0 = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
			case joaat("WATER_OWANJILA"):
				sVar0 = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
			case joaat("WATER_RINGNECK_CREEK"):
				sVar0 = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_SEA_OF_CORONADO"):
				sVar0 = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
			case joaat("WATER_SOUTHFIELD_FLATS"):
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
			case joaat("WATER_SPIDER_GORGE"):
				sVar0 = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
			case joaat("WATER_STILLWATER_CREEK"):
				sVar0 = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_UPPER_MONTANA_RIVER"):
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_WHINYARD_STRAIT"):
				sVar0 = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
			case joaat("WATER_KAMASSA_RIVER"):
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*uParam6 = 1;
				break;
			case joaat("WATER_SAN_LUIS_RIVER"):
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*uParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

bool func_115(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_117(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	var uVar3;

	if (!func_115(iParam0))
	{
		return -1;
	}
	if (Global_1572887.f_14 == -1)
	{
		return Global_38.f_198[iParam0 /*12*/];
	}
	iVar0 = 0;
	Var1 = { func_155(PLAYER::PLAYER_ID()) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&Var1, &uVar3);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1072759.f_21262[iVar0 /*12*/] = uVar3;
		iVar0++;
	}
	return Global_1072759.f_21262[iParam0 /*12*/];
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WATER_AURORA_BASIN"):
			return 0;
		case joaat("WATER_BARROW_LAGOON"):
			return 0;
		case joaat("WATER_BAYOU_NWA"):
			return 2;
		case joaat("WATER_BEARTOOTH_BECK"):
			return 1;
		case joaat("WATER_CAIRN_LAKE"):
			return 0;
		case joaat("WATER_CALMUT_RAVINE"):
			return 0;
		case joaat("WATER_CATTIAL_POND"):
			return 0;
		case joaat("WATER_DAKOTA_RIVER"):
			return 1;
		case joaat("WATER_DEADBOOT_CREEK"):
			return 1;
		case joaat("WATER_DEWBERRY_CREEK"):
			return 1;
		case joaat("WATER_ELYSIAN_POOL"):
			return 0;
		case joaat("WATER_FLAT_IRON_LAKE"):
			return 0;
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return 1;
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return 0;
		case joaat("WATER_HOT_SPRINGS"):
			return 0;
		case joaat("WATER_KAMASSA_RIVER"):
			return 1;
		case joaat("WATER_LAKE_DON_JULIO"):
			return 0;
		case joaat("WATER_LAKE_ISABELLA"):
			return 0;
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return 1;
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return 1;
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_MATTLOCK_POND"):
			return 0;
		case joaat("WATER_MOONSTONE_POND"):
			return 0;
		case joaat("WATER_O_CREAGHS_RUN"):
			return 0;
		case joaat("WATER_OWANJILA"):
			return 0;
		case joaat("WATER_RINGNECK_CREEK"):
			return 1;
		case joaat("WATER_SAN_LUIS_RIVER"):
			return 1;
		case joaat("WATER_SEA_OF_CORONADO"):
			return 1;
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return 0;
		case joaat("WATER_SPIDER_GORGE"):
			return 1;
		case joaat("WATER_STILLWATER_CREEK"):
			return 1;
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_WHINYARD_STRAIT"):
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_119(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

bool func_120(int iParam0, int iParam1)
{
	if (!func_10(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_14 == -1)
	{
		return (Global_38.f_271[iParam0] && iParam1) != 0;
	}
	return (Global_1072759.f_21335[iParam0] && iParam1) != 0;
}

bool func_121(int iParam0, int iParam1)
{
	if (!func_115(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_14 == -1)
	{
		return (Global_38.f_198[iParam0 /*12*/].f_5 && iParam1) != 0;
	}
	return (Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1) != 0;
}

int func_122()
{
	return Global_1902565;
}

int func_123(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_124(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

float func_125(float fParam0)
{
	return ((fParam0 * 1072064102) + 1107296256);
}

char* func_126(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_156(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_127(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	int iVar16;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	iVar16 = UIFEED::_UI_FEED_POST_LOCATION_SHARD(&Var0, &vVar13, bParam6, bParam7);
	return iVar16;
}

bool func_128(int iParam0)
{
	if (func_154(iParam0))
	{
		if (!func_66(44))
		{
			return false;
		}
	}
	return true;
}

void func_129(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_130(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

void func_131(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_132(int iParam0)
{
	func_157(Global_1939946.f_5[iParam0 /*11*/].f_6, 1);
	func_158(Global_1939946.f_5[iParam0 /*11*/].f_6, 0);
	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1939946.f_5[iParam0 /*11*/].f_8))
	{
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1939946.f_5[iParam0 /*11*/].f_8);
	}
	func_159(iParam0, 8192);
	func_159(iParam0, 32768);
	func_159(iParam0, 524288);
	func_159(iParam0, 1048576);
	Global_1939946.f_5[iParam0 /*11*/].f_10 = 0;
	Global_1939946.f_5[Global_1939946 /*11*/].f_9 = 0;
	Global_1939946.f_5[iParam0 /*11*/] = 0;
	Global_1939946.f_5[iParam0 /*11*/].f_1 = { 0f, 0f, 0f };
	Global_1939946.f_5[iParam0 /*11*/].f_4 = 0;
	Global_1939946.f_5[iParam0 /*11*/].f_5 = -1;
	Global_1939946.f_5[iParam0 /*11*/].f_6 = -1;
	Global_1939946.f_5[iParam0 /*11*/].f_7 = 0;
}

void func_133(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_94(Global_1915643.f_3[iParam0 /*447*/].f_21) && func_160(Global_1915643.f_3[iParam0 /*447*/].f_21))
	{
		func_161(Global_1915643.f_3[iParam0 /*447*/].f_21, 0, 1, 0, 0);
	}
	Global_1915643.f_3[iParam0 /*447*/].f_10 = { 0f, 0f, 0f };
	Global_1915643.f_3[iParam0 /*447*/].f_21 = -1;
	Global_1915643.f_3[iParam0 /*447*/].f_22 = -1;
	Global_1915643.f_3[iParam0 /*447*/].f_16 = 0;
	Global_1915643.f_3[iParam0 /*447*/].f_1 = 0;
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1915643.f_3[iParam0 /*447*/].f_35))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1915643.f_3[iParam0 /*447*/].f_35, false);
	}
	func_162(Global_1915643.f_3[iParam0 /*447*/].f_9, 0);
	func_163(iParam0, 1.084202E-19f);
	iVar1 = func_164(iParam0);
	if (iVar1 >= 15)
	{
		Global_1915643.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_165(Global_1915643.f_3[iParam0 /*447*/].f_318[iVar0 /*6*/]);
			Global_1915643.f_3[iParam0 /*447*/].f_318[iVar0 /*6*/] = 0;
			Global_1915643.f_3[iParam0 /*447*/].f_318[iVar0 /*6*/].f_1 = { 0f, 0f, 0f };
			Global_1915643.f_3[iParam0 /*447*/].f_318[iVar0 /*6*/].f_4 = 0f;
			Global_1915643.f_3[iParam0 /*447*/].f_318[iVar0 /*6*/].f_5 = 0;
			iVar0++;
		}
		Global_1915643.f_3[iParam0 /*447*/].f_409 = 0;
	}
	if (Global_1915643.f_3[iParam0 /*447*/].f_441 != 0)
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Global_1915643.f_3[iParam0 /*447*/].f_441, false);
	}
	Global_1915643.f_3[iParam0 /*447*/].f_23 = 0;
	func_166(iParam0);
	Global_1915643.f_3[iParam0 /*447*/].f_9 = -1;
	Global_1915643.f_3[iParam0 /*447*/].f_8 = -1;
}

bool func_134(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return false;
	}
	if (!func_94(iParam0))
	{
		return false;
	}
	return (Global_9899[iParam0 /*2*/] && iParam1) != 0;
}

int func_135(int iParam0, bool bParam1)
{
	if (!func_94(iParam0))
	{
		return 0;
	}
	if (!func_134(iParam0, 2))
	{
		return 0;
	}
	if (func_141(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_143(iParam0)))
	{
		return 1;
	}
	if (func_134(iParam0, 1) && !bParam1)
	{
		func_167(iParam0, 128);
		return 1;
	}
	func_144(iParam0, 129);
	func_168(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_143(iParam0));
	func_142(iParam0, 0);
	return 1;
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 27:
		case 28:
		case 29:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 37:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_138()
{
	int iVar0;
	var uVar1;

	func_169(30);
	func_170(30);
	func_171(30);
	func_172(30);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_3654[iVar0 /*19*/].f_6))
		{
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_3654[iVar0 /*19*/].f_6);
		}
		Global_1051832.f_3654[iVar0 /*19*/].f_6 = uVar1;
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_3654[iVar0 /*19*/].f_13))
		{
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_3654[iVar0 /*19*/].f_13);
		}
		Global_1051832.f_3654[iVar0 /*19*/].f_13 = uVar1;
		if (MAP::DOES_BLIP_EXIST(Global_1051832.f_3654[iVar0 /*19*/].f_17))
		{
			MAP::REMOVE_BLIP(&(Global_1051832.f_3654[iVar0 /*19*/].f_17));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_3654[iVar0 /*19*/].f_8))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1051832.f_3654[iVar0 /*19*/].f_8))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1051832.f_3654[iVar0 /*19*/].f_8, true, true);
			}
			PED::DELETE_PED(&(Global_1051832.f_3654[iVar0 /*19*/].f_8));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_3654[iVar0 /*19*/].f_15))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1051832.f_3654[iVar0 /*19*/].f_15))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1051832.f_3654[iVar0 /*19*/].f_15, true, true);
			}
			PED::DELETE_PED(&(Global_1051832.f_3654[iVar0 /*19*/].f_15));
		}
		Global_1051832.f_3654[iVar0 /*19*/].f_1 = 0;
		Global_1051832.f_3654[iVar0 /*19*/].f_5 = 0;
		Global_1051832.f_3654[iVar0 /*19*/].f_8 = 0;
		Global_1051832.f_3654[iVar0 /*19*/].f_15 = 0;
		Global_1051832.f_3654[iVar0 /*19*/].f_7 = 0;
		Global_1051832.f_3654[iVar0 /*19*/].f_14 = 0;
		Global_1051832.f_3654[iVar0 /*19*/].f_9 = -1;
		Global_1051832.f_3654[iVar0 /*19*/] = -1;
		iVar0++;
	}
}

void func_139()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1051832.f_4447[iVar0 /*8*/] = -1;
		Global_1051832.f_4447[iVar0 /*8*/].f_3 = 0;
		Global_1051832.f_4447[iVar0 /*8*/].f_4 = 0;
		Global_1051832.f_4447[iVar0 /*8*/].f_7 = 0;
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_4447[iVar0 /*8*/].f_6))
		{
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_4447[iVar0 /*8*/].f_6);
		}
		iVar0++;
	}
	func_172(32);
}

void func_140(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	bVar0 = (func_173(iParam0) && !bParam1);
	if (!bVar0 && !func_174(iParam0, 65536))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_21))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1051832.f_92[iParam0 /*75*/].f_21))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1051832.f_92[iParam0 /*75*/].f_21, true, true);
			}
			ENTITY::DELETE_ENTITY(&(Global_1051832.f_92[iParam0 /*75*/].f_21));
			Global_1051832.f_92[iParam0 /*75*/].f_21 = 0;
		}
		if (STREAMING::IS_MODEL_VALID(Global_1051832.f_92[iParam0 /*75*/].f_19))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_1051832.f_92[iParam0 /*75*/].f_19);
		}
		Global_1051832.f_92[iParam0 /*75*/].f_19 = 0;
	}
	else if (func_175(iParam0, 1.504633E-36f) && ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_21))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(Global_1051832.f_92[iParam0 /*75*/].f_21);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24))
	{
		NETWORK::_NETWORK_SPAWN_CONFIG_REMOVE_EXCLUSION_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
		if (func_174(iParam0, 524288))
		{
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_25))
	{
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
		if (func_174(iParam0, 524288))
		{
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_25);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_27))
	{
		if (func_174(iParam0, 524288))
		{
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_27);
		}
	}
	if (func_175(iParam0, 16384) && !bVar0)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_6))
		{
			iVar1 = TASK::GET_PROP_FOR_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
			}
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6);
		}
		Global_1051832.f_92[iParam0 /*75*/].f_6 = 0;
		func_176(iParam0, 16384);
	}
	Global_1051832.f_92[iParam0 /*75*/] = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_3 = { 0f, 0f, 0f };
	Global_1051832.f_92[iParam0 /*75*/].f_48 = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_73 = 1;
	Global_1915643.f_3[iParam0 /*447*/].f_16 = 0;
	iVar3 = func_177(iParam0);
	if (iVar3 >= 15)
	{
		Global_1915643.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			func_165(Global_1051832.f_92[iParam0 /*75*/].f_31[iVar2]);
			Global_1051832.f_92[iParam0 /*75*/].f_31[iVar2] = 0;
			iVar2++;
		}
		Global_1051832.f_92[iParam0 /*75*/].f_47 = 0;
	}
	func_178(iParam0);
	if (func_174(iParam0, 262144))
	{
		Global_1051832.f_92[iParam0 /*75*/].f_49 = 262144;
	}
	else
	{
		func_169(iParam0);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24) && func_179(iParam0, 2))
	{
		VOLUME::_SET_VOLUME_RELATIONSHIP(Global_1051832.f_92[iParam0 /*75*/].f_24, 1.526336E-16f);
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	}
	Global_1051832.f_92[iParam0 /*75*/].f_50 &= 8;
	Global_1051832.f_92[iParam0 /*75*/].f_1 &= 2113536;
	func_172(iParam0);
	Global_1051832.f_92[iParam0 /*75*/].f_18 = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_2 = -1;
}

int func_141(int iParam0)
{
	if (!func_94(iParam0))
	{
		return 0;
	}
	return Global_1893799[iParam0 /*3*/];
}

void func_142(int iParam0, int iParam1)
{
	if (!func_94(iParam0))
	{
		return;
	}
	Global_1893799[iParam0 /*3*/].f_1 = iParam1;
}

int func_143(int iParam0)
{
	if (!func_94(iParam0))
	{
		return 0;
	}
	return Global_1893799[iParam0 /*3*/].f_1;
}

void func_144(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return;
	}
	if (!func_94(iParam0))
	{
		return;
	}
	Global_9899[iParam0 /*2*/] = (Global_9899[iParam0 /*2*/] - (Global_9899[iParam0 /*2*/] && iParam1));
}

bool func_145(int iParam0)
{
	if (!func_94(iParam0))
	{
		return false;
	}
	if (!func_134(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_146(int iParam0)
{
	return iParam0 != 0;
}

int func_147(int iParam0)
{
	return func_180(iParam0) + 30;
}

bool func_148()
{
	return false;
}

bool func_149()
{
	struct<2> Var0;
	struct<2> Var2;

	if (func_45() != 0)
	{
		return true;
	}
	if (func_181())
	{
		return false;
	}
	if (HUD::_0x7EC0D68233E391AC(6) == 1)
	{
		return true;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_182() };
	if (func_183(Var0))
	{
		return false;
	}
	Var2 = { func_184() };
	if (func_183(Var2))
	{
		return false;
	}
	return true;
}

bool func_150(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887.f_14 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900460.f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900460.f_68;
		}
		if (func_181())
		{
			return true;
		}
		if (Global_1072759.f_3 && !Global_1572887.f_10)
		{
			if ((Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_481 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900460.f_67;
		}
		else
		{
			return Global_1900460.f_68;
		}
	}
	if (iParam0 == 0 && func_183(func_57(0)))
	{
		return true;
	}
	if ((Global_1940186 && 81919 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < Global_1900595)
		{
			return true;
		}
	}
	switch (func_58(func_57(0)))
	{
		case -1:
			return false;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return false;
}

char* func_151(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_152(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_185(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_153(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

bool func_154(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 68:
			return true;
	}
	return false;
}

struct<2> func_155(int iParam0)
{
	struct<2> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

char* func_156(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_157(int iParam0, bool bParam1)
{
	char* sVar0;

	switch (iParam0)
	{
		case 5:
			sVar0 = "IZ_val_saloon_int_room_main";
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(sVar0, bParam1, true);
}

void func_158(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
			{
				AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR", "VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			else
			{
				AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			break;
	}
}

void func_159(int iParam0, int iParam1)
{
	func_186(&(Global_1939946.f_5[iParam0 /*11*/].f_7), iParam1);
}

bool func_160(int iParam0)
{
	if (!func_94(iParam0))
	{
		return false;
	}
	return Global_1893799[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_161(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_94(iParam0))
	{
		return;
	}
	if (!func_134(iParam0, 1))
	{
		return;
	}
	if (!func_134(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_160(iParam0)) && func_187(iParam0))
	{
		return;
	}
	func_144(iParam0, 1);
	func_168(iParam0);
	if (func_188(func_141(iParam0)))
	{
		iVar0 = func_143(iParam0);
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
		{
			return;
		}
		PERSCHAR::_0xBB68908CD11AEBDC(iVar0);
		PERSCHAR::_0xB65E7F733956CF25(iVar0);
		if (bParam2 && !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar0))
		{
			PERSCHAR::_RETASK_PERSISTENT_CHARACTER(iVar0);
		}
		iVar1 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(iVar0);
		}
		func_144(iParam0, 16);
	}
	if (func_134(iParam0, 128) && !bParam3)
	{
		func_135(iParam0, 0);
	}
}

void func_162(int iParam0, bool bParam1)
{
	if (!func_189(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_190(iParam0, 1024))
		{
			func_191(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_190(iParam0, 1024))
	{
		func_192(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_193(iParam0);
}

void func_163(int iParam0, float fParam1)
{
	if (!func_194(iParam0))
	{
		return;
	}
	if (func_45() == -1)
	{
		Global_1915643.f_3[iParam0 /*447*/].f_6 = (Global_1915643.f_3[iParam0 /*447*/].f_6 - (Global_1915643.f_3[iParam0 /*447*/].f_6 && fParam1));
	}
	else
	{
		Global_1051832.f_92[iParam0 /*75*/].f_1 = (Global_1051832.f_92[iParam0 /*75*/].f_1 - (Global_1051832.f_92[iParam0 /*75*/].f_1 && fParam1));
	}
}

int func_164(int iParam0)
{
	return Global_1915643.f_3[iParam0 /*447*/].f_409;
}

void func_165(int iParam0)
{
	if (func_101(iParam0) && func_195())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_166(int iParam0)
{
	Global_1915643.f_3[iParam0 /*447*/].f_6 = 0;
}

void func_167(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return;
	}
	if (!func_94(iParam0))
	{
		return;
	}
	Global_9899[iParam0 /*2*/] = (Global_9899[iParam0 /*2*/] || iParam1);
}

void func_168(int iParam0)
{
	int iVar0;

	if (!func_94(iParam0))
	{
		return;
	}
	iVar0 = func_196(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1893799[iParam0 /*3*/].f_2 = 0;
}

void func_169(int iParam0)
{
	Global_1051832.f_92[iParam0 /*75*/].f_49 = 0;
}

void func_170(int iParam0)
{
	Global_1051832.f_92[iParam0 /*75*/].f_50 = 0;
}

void func_171(int iParam0)
{
	Global_1051832.f_92[iParam0 /*75*/].f_1 = 0;
}

void func_172(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (Global_1051832.f_41 < 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1051832.f_41)
	{
		if (iParam0 == Global_1051832[iVar0])
		{
			iVar1 = iVar0;
			bVar2 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar2)
	{
		return;
	}
	Global_1051832.f_41 = (Global_1051832.f_41 - 1);
	if (Global_1051832.f_41 < 0)
	{
		Global_1051832.f_41 = 0;
	}
	Global_1051832[iVar1] = Global_1051832[Global_1051832.f_41];
}

bool func_173(int iParam0)
{
	if (((((iParam0 == 28 || iParam0 == 29) || iParam0 == 38) || iParam0 == 27) || iParam0 == 15) || iParam0 == 39)
	{
		return true;
	}
	if (func_174(iParam0, 65536))
	{
		return true;
	}
	return false;
}

bool func_174(int iParam0, int iParam1)
{
	return (Global_1051832.f_92[iParam0 /*75*/].f_49 && iParam1) != 0;
}

bool func_175(int iParam0, float fParam1)
{
	return (Global_1051832.f_92[iParam0 /*75*/].f_1 && fParam1) != 0;
}

void func_176(int iParam0, float fParam1)
{
	if (func_175(iParam0, fParam1))
	{
	}
	Global_1051832.f_92[iParam0 /*75*/].f_1 = (Global_1051832.f_92[iParam0 /*75*/].f_1 - (Global_1051832.f_92[iParam0 /*75*/].f_1 && fParam1));
}

int func_177(int iParam0)
{
	return Global_1051832.f_92[iParam0 /*75*/].f_47;
}

void func_178(int iParam0)
{
}

bool func_179(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return func_197(Global_1051832.f_92[iParam0 /*75*/].f_50, iParam1);
}

int func_180(int iParam0)
{
	return iParam0 * 31;
}

bool func_181()
{
	if (Global_1048576)
	{
		return true;
	}
	if (Global_1572887.f_5)
	{
		return true;
	}
	if (Global_2883584)
	{
		return true;
	}
	if (Global_1048577)
	{
		return true;
	}
	if (!func_183(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_182()
{
	return Global_1051268;
}

bool func_183(struct<2> Param0)
{
	if (!func_198(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_199(Param0))
	{
		return false;
	}
	return true;
}

struct<2> func_184()
{
	if (Global_1205789.f_129 <= 0)
	{
		return func_57(0);
	}
	if (Global_1205789.f_130 < 0 || Global_1205789.f_131 == 0)
	{
		return func_57(0);
	}
	return Global_1205789[Global_1205789.f_130 /*4*/].f_1;
}

bool func_185(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	var uVar6;

	func_200(iParam3, &vVar0, &Var3, &uVar6);
	if (func_201(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

void func_186(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_187(int iParam0)
{
	if (!func_94(iParam0))
	{
		return false;
	}
	return SCRIPTS::DOES_THREAD_EXIST(Global_1893799[iParam0 /*3*/].f_2);
}

bool func_188(int iParam0)
{
	return iParam0 != 0;
}

bool func_189(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

bool func_190(int iParam0, int iParam1)
{
	if (!func_189(iParam0))
	{
		return false;
	}
	return (Global_1915643.f_17884[iParam0] && iParam1) != 0;
}

void func_191(int iParam0, int iParam1)
{
	if (!func_189(iParam0))
	{
		return;
	}
	Global_1915643.f_17884[iParam0] = (Global_1915643.f_17884[iParam0] || iParam1);
}

void func_192(int iParam0, int iParam1)
{
	if (!func_189(iParam0))
	{
		return;
	}
	Global_1915643.f_17884[iParam0] = (Global_1915643.f_17884[iParam0] - (Global_1915643.f_17884[iParam0] && iParam1));
}

void func_193(int iParam0)
{
	func_203(func_202(iParam0));
}

bool func_194(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_195()
{
	return true;
}

int func_196(int iParam0)
{
	int iVar0;

	iVar0 = func_143(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		return 0;
	}
	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar0);
}

bool func_197(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_198(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

int func_199(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1072759.f_573.f_601;
		case 3:
			return Global_1072759.f_573.f_2103;
		case 4:
			return Global_1072759.f_573.f_12605;
		case 5:
			return Global_1072759.f_573.f_12907;
		case 6:
			return Global_1072759.f_573.f_15909;
		case 7:
			return Global_1072759.f_573.f_16511;
		case 8:
			return Global_1072759.f_573.f_18913;
		default:
			break;
	}
	return -1;
}

void func_200(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -993388388, 1151178457, 1129141371 };
			*uParam2 = { 1125515264 /* Float: 150f */, 1125515264 /* Float: 150f */, 1127743488 /* Float: 184f */ };
			*uParam3 = 0f;
			break;
		case 1:
			*uParam1 = { -977899688, -982930096, -1046164275 /* Float: -20.6f */ };
			*uParam2 = { 1109393408 /* Float: 40f */, 1108082688 /* Float: 35f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 1110704128; /* Float: 45f */
			break;
		case 2:
			*uParam1 = { -981334653, -986624348, -1051014988 };
			*uParam2 = { 1110179840 /* Float: 43f */, 1128595456 /* Float: 197f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 1108869120; /* Float: 38f */
			break;
		case 3:
			*uParam1 = { -980926749, -985614848, -1051014988 };
			*uParam2 = { 1106247680 /* Float: 30f */, 1106247680 /* Float: 30f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 4:
			*uParam1 = { -980748745, -987229123, -1051014988 };
			*uParam2 = { 1106247680 /* Float: 30f */, 1106247680 /* Float: 30f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 5:
			*uParam1 = { -980812104, -989234078, 1102240023 };
			*uParam2 = { 1095761920 /* Float: 13f */, 1101529088 /* Float: 21f */, 1111228416 /* Float: 47f */ };
			*uParam3 = 1107820544; /* Float: 34f */
			break;
		case 6:
			*uParam1 = { -978479587, -988430561, 1088782598 /* Float: 7.172f */ };
			*uParam2 = { 1101529088 /* Float: 21f */, 1101529088 /* Float: 21f */, 1111228416 /* Float: 47f */ };
			*uParam3 = 0f;
			break;
		case 7:
			*uParam1 = { -984124346, -988996719, 1088782598 /* Float: 7.172f */ };
			*uParam2 = { 1109393408 /* Float: 40f */, 1102577664 /* Float: 23f */, 1111228416 /* Float: 47f */ };
			*uParam3 = 0f;
			break;
		case 8:
			*uParam1 = { -994952380, -987279983, 1116893872 };
			*uParam2 = { 1109393408 /* Float: 40f */, 1103626240 /* Float: 25f */, 1111228416 /* Float: 47f */ };
			*uParam3 = 1104150528; /* Float: 26f */
			break;
		case 9:
			*uParam1 = { -982558974, -985918423, -1051014988 };
			*uParam2 = { 1109131264 /* Float: 39f */, 1113063424 /* Float: 54f */, 1116471296 /* Float: 70f */ };
			*uParam3 = -1036517376; /* Float: -46f */
			break;
		case 10:
			*uParam1 = { -980237705, -984716046, -1051014988 };
			*uParam2 = { 1120927744 /* Float: 104f */, 1113849856 /* Float: 57f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 11:
			*uParam1 = { -979483224, -985383477, -1051014988 };
			*uParam2 = { 1102577664 /* Float: 23f */, 1104150528 /* Float: 26f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 1110179840; /* Float: 43f */
			break;
		case 12:
			*uParam1 = { -993264640, -986545811, -1076719780 };
			*uParam2 = { 1125449728 /* Float: 149f */, 1115815936 /* Float: 65f */, 1125777408 /* Float: 154f */ };
			*uParam3 = 1109131264; /* Float: 39f */
			break;
		case 13:
			*uParam1 = { -1012010549, -1023166382, -1076719780 };
			*uParam2 = { 1112539136 /* Float: 52f */, 1109393408 /* Float: 40f */, 1125777408 /* Float: 154f */ };
			*uParam3 = 0f;
			break;
		case 14:
			*uParam1 = { -989534208, 1118872142, 1124806099 };
			*uParam2 = { 1135017984 /* Float: 334f */, 1126891520 /* Float: 171f */, 1133150208 /* Float: 277f */ };
			*uParam3 = -1036779520; /* Float: -45f */
			break;
		case 15:
			*uParam1 = { 1153745396, 1150041735, 1128896922 /* Float: 201.6f */ };
			*uParam2 = { 1125318656 /* Float: 147f */, 1128398848 /* Float: 194f */, 1128857600 /* Float: 201f */ };
			*uParam3 = 0f;
			break;
		case 16:
			*uParam1 = { -987014590, -988513235, 1107029918 };
			*uParam2 = { 1118568448 /* Float: 86f */, 1114898432 /* Float: 61f */, 1112014848 /* Float: 50f */ };
			*uParam3 = 1093664768; /* Float: 11f */
			break;
		case 17:
			*uParam1 = { 1155377750, -977616212, 1116689138 };
			*uParam2 = { 1107820544 /* Float: 34f */, 1107820544 /* Float: 34f */, 1120403456 /* Float: 100f */ };
			*uParam3 = -1023934464; /* Float: -124f */
			break;
		case 18:
			*uParam1 = { -990066622, -985792868, 1103626240 /* Float: 25f */ };
			*uParam2 = { 1103626240 /* Float: 25f */, 1103626240 /* Float: 25f */, 1110704128 /* Float: 45f */ };
			*uParam3 = 0f;
			break;
		case 19:
			*uParam1 = { 1152271745, -1004409078, 1116793078 };
			*uParam2 = { 1100480512 /* Float: 19f */, 1099956224 /* Float: 18f */, 1120403456 /* Float: 100f */ };
			*uParam3 = 1109393408; /* Float: 40f */
			break;
		case 20:
			*uParam1 = { -1015917052, 1154157552, 1129637085 };
			*uParam2 = { 1120141312 /* Float: 98f */, 1112539136 /* Float: 52f */, 1123024896 /* Float: 120f */ };
			*uParam3 = 1112276992; /* Float: 51f */
			break;
		case 21:
			*uParam1 = { -983730127, -985825124, -1051014988 };
			*uParam2 = { 1109393408 /* Float: 40f */, 1109393408 /* Float: 40f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 22:
			*uParam1 = { -980949699, -988300976, -1051014988 };
			*uParam2 = { 1109393408 /* Float: 40f */, 1109393408 /* Float: 40f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 23:
			*uParam1 = { -1010578686, 1147573649, 1124702880 };
			*uParam2 = { 1106771968 /* Float: 31f */, 1106247680 /* Float: 30f */, 1109393408 /* Float: 40f */ };
			*uParam3 = 0f;
			break;
		case 24:
			*uParam1 = { -987361284, 1125755585, 1128073986 };
			*uParam2 = { 1127284736 /* Float: 177f */, 1123811328 /* Float: 126f */, 1120665600 /* Float: 102f */ };
			*uParam3 = 1112539136; /* Float: 52f */
			break;
		case 25:
			*uParam1 = { 1125915623, 1138026054, 1123024896 /* Float: 120f */ };
			*uParam2 = { 1132003328 /* Float: 249f */, 1121976320 /* Float: 112f */, 1123024896 /* Float: 120f */ };
			*uParam3 = -1039138816; /* Float: -36f */
			break;
		case 26:
			*uParam1 = { -977837056, -986970354, -1051014988 };
			*uParam2 = { 1109393408 /* Float: 40f */, 1109393408 /* Float: 40f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 27:
			*uParam1 = { 1147183186, -1012424638, 1111596204 };
			*uParam2 = { 1113587712 /* Float: 56f */, 1125646336 /* Float: 152f */, 1116471296 /* Float: 70f */ };
			*uParam3 = -1039138816; /* Float: -36f */
			break;
		case 28:
			*uParam1 = { -1000440676, -1020568797, 1119163122 };
			*uParam2 = { 1127481344 /* Float: 180f */, 1119748096 /* Float: 95f */, 1120403456 /* Float: 100f */ };
			*uParam3 = 1105723392; /* Float: 29f */
			break;
		case 29:
			*uParam1 = { 1141824782, 1156977582, 1123408937 };
			*uParam2 = { 1107296256 /* Float: 32f */, 1111752704 /* Float: 49f */, 1124859904 /* Float: 140f */ };
			*uParam3 = 0f;
			break;
		case 30:
			*uParam1 = { -986899739, -985092137, 1103626240 /* Float: 25f */ };
			*uParam2 = { 1103626240 /* Float: 25f */, 1103626240 /* Float: 25f */, 1110704128 /* Float: 45f */ };
			*uParam3 = 0f;
			break;
		case 31:
			*uParam1 = { -978778042, -983264190, -1050153058 };
			*uParam2 = { 1108344832 /* Float: 36f */, 1106247680 /* Float: 30f */, 1106247680 /* Float: 30f */ };
			*uParam3 = -1044381696; /* Float: -24f */
			break;
		case 32:
			*uParam1 = { 1159287984, 1133598474, 1116420833 };
			*uParam2 = { 1108082688 /* Float: 35f */, 1109917696 /* Float: 42f */, 1100480512 /* Float: 19f */ };
			*uParam3 = -1065353216; /* Float: -4f */
			break;
		case 33:
			*uParam1 = { -1004485968, 1133194740, 1119813632 /* Float: 95.5f */ };
			*uParam2 = { 1116471296 /* Float: 70f */, 1116078080 /* Float: 67f */, 1115815936 /* Float: 65f */ };
			*uParam3 = -1025900544; /* Float: -109f */
			break;
		case 34:
			*uParam1 = { -1024676463, -1043934478, 1119998050 };
			*uParam2 = { 1118306304 /* Float: 84f */, 1116340224 /* Float: 69f */, 1108606976 /* Float: 37f */ };
			*uParam3 = 0f;
			break;
		case 35:
			*uParam1 = { -986515636, -987089883, 1119511511 };
			*uParam2 = { 1128529920 /* Float: 196f */, 1125974016 /* Float: 157f */, 1118437376 /* Float: 85f */ };
			*uParam3 = -1047527424; /* Float: -18f */
			break;
		case 36:
			*uParam1 = { -983970554, -984046047, -1084663792 };
			*uParam2 = { 1094713344 /* Float: 12f */, 1094713344 /* Float: 12f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 37:
			*uParam1 = { -983413248, -983597359, -1084663792 };
			*uParam2 = { 1123811328 /* Float: 126f */, 1118568448 /* Float: 86f */, 1116471296 /* Float: 70f */ };
			*uParam3 = -1061158912; /* Float: -6f */
			break;
		case 38:
			*uParam1 = { -995308995, -995156222, 1113611829 };
			*uParam2 = { 1102053376 /* Float: 22f */, 1107296256 /* Float: 32f */, 1118568448 /* Float: 86f */ };
			*uParam3 = 0f;
			break;
		case 39:
			*uParam1 = { -1003338056, -1006205485, 1114484244 /* Float: 59.42f */ };
			*uParam2 = { 1126170624 /* Float: 160f */, 1102053376 /* Float: 22f */, 1120403456 /* Float: 100f */ };
			*uParam3 = 1104150528; /* Float: 26f */
			break;
		case 40:
			*uParam1 = { 1149727441, -1003659624, 1111596204 };
			*uParam2 = { 1110704128 /* Float: 45f */, 1110966272 /* Float: 46f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 41:
			*uParam1 = { -999350452, 1158149026, 1134146388 };
			*uParam2 = { 1105199104 /* Float: 28f */, 1102577664 /* Float: 23f */, 1120403456 /* Float: 100f */ };
			*uParam3 = 0f;
			break;
		case 42:
			*uParam1 = { 1152789332, -993720230, 1119800656 };
			*uParam2 = { 1105199104 /* Float: 28f */, 1102577664 /* Float: 23f */, 1120403456 /* Float: 100f */ };
			*uParam3 = 0f;
			break;
		case 43:
			*uParam1 = { 1135492727, -1004059066, 1119748096 /* Float: 95f */ };
			*uParam2 = { 1105199104 /* Float: 28f */, 1102577664 /* Float: 23f */, 1120403456 /* Float: 100f */ };
			*uParam3 = 0f;
			break;
		case 44:
			*uParam1 = { 1157300650, 1142573548, 1119748096 /* Float: 95f */ };
			*uParam2 = { 1105199104 /* Float: 28f */, 1102577664 /* Float: 23f */, 1120403456 /* Float: 100f */ };
			*uParam3 = 0f;
			break;
		case 45:
			*uParam1 = { 1157840220, -1014136439, 1109917696 /* Float: 42f */ };
			*uParam2 = { 1101529088 /* Float: 21f */, 1105723392 /* Float: 29f */, 1111752704 /* Float: 49f */ };
			*uParam3 = 1112539136; /* Float: 52f */
			break;
		case 46:
			*uParam1 = { -992220692, -1017094537, 1126694912 /* Float: 168f */ };
			*uParam2 = { 1101529088 /* Float: 21f */, 1105723392 /* Float: 29f */, 1122500608 /* Float: 116f */ };
			*uParam3 = 1113587712; /* Float: 56f */
			break;
		case 47:
			*uParam1 = { 1158014525, -996113875, 1118437376 /* Float: 85f */ };
			*uParam2 = { 1109393408 /* Float: 40f */, 1116602368 /* Float: 71f */, 1122500608 /* Float: 116f */ };
			*uParam3 = 1116471296; /* Float: 70f */
			break;
		case 48:
			*uParam1 = { 1158697447, -1012169736, 1118437376 /* Float: 85f */ };
			*uParam2 = { 1097859072 /* Float: 15f */, 1097859072 /* Float: 15f */, 1122500608 /* Float: 116f */ };
			*uParam3 = 0f;
			break;
		case 49:
			*uParam1 = { -991763276, -988392997, 1116602368 /* Float: 71f */ };
			*uParam2 = { 1103626240 /* Float: 25f */, 1103626240 /* Float: 25f */, 1112014848 /* Float: 50f */ };
			*uParam3 = 0f;
			break;
		case 50:
			*uParam1 = { -988949578, -997246673, 1129709568 /* Float: 214f */ };
			*uParam2 = { 1108606976 /* Float: 37f */, 1107558400 /* Float: 33f */, 1116209152 /* Float: 68f */ };
			*uParam3 = 0f;
			break;
	}
}

bool func_201(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;

	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * BUILTIN::COS(fParam8)) + (vVar0.y * BUILTIN::SIN(fParam8)));
	Var3.f_1 = ((vVar0.x * BUILTIN::SIN(fParam8)) - (vVar0.y * BUILTIN::COS(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

int func_202(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 180))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 133:
			return 27;
		case 153:
			return 28;
		case 154:
			return 29;
		case 26:
			return 14;
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
		case 134:
			return 37;
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
		case 148:
			return 15;
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
		case 45:
		case 83:
		case 155:
		case 159:
		case 164:
		case 168:
		case 172:
			return 0;
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 156:
		case 160:
		case 165:
		case 169:
		case 173:
			return 3;
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 157:
		case 161:
		case 166:
		case 170:
		case 174:
			return 6;
		case 19:
		case 53:
			return 7;
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
		case 20:
			return 33;
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
		case 8:
		case 43:
		case 78:
			return 8;
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
		case 163:
			return 5;
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
		case 70:
		case 90:
			return 17;
		case 119:
			return 11;
		case 176:
			return 19;
		case 177:
			return 20;
		case 178:
			return 21;
		case 12:
		case 60:
			return 18;
		case 152:
			return 34;
		case 158:
		case 162:
		case 167:
		case 171:
		case 175:
			return 23;
		case 179:
			return 20;
		case 109:
		case 113:
		case 114:
			return 35;
		case 61:
		case 62:
		case 89:
			return 36;
		case 149:
		case 150:
		case 151:
			return 39;
		default:
			break;
	}
	return -1;
}

void func_203(int iParam0)
{
	Global_1915643.f_18247 = iParam0;
}

