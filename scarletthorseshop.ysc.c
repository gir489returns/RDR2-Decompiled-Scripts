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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = false;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	bool bLocal_38 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	iLocal_31 = 1;
	iLocal_33 = 20000;
	iLocal_36 = vScriptParam_0.x;
	iLocal_34 = vScriptParam_0.z;
	bLocal_38 = false;
	if (Global_1901671.f_2.f_26 > 0)
	{
		func_1();
	}
	func_2();
	func_3();
	iLocal_35 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (func_4())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_35)
		{
			iLocal_35 = 0;
			func_5(iLocal_36, &iLocal_34);
			switch (iLocal_34)
			{
				case 0:
					if (Global_1901671.f_2.f_26 > 0)
					{
						iLocal_37 = (MISC::GET_GAME_TIMER() + Global_1901671.f_2.f_26);
						iLocal_34 = 1;
					}
					else
					{
						iLocal_34 = 2;
					}
					break;
				case 1:
					if (!func_1() || iLocal_37 < MISC::GET_GAME_TIMER())
					{
						bLocal_38 = false;
						iLocal_34 = 2;
					}
					break;
				case 2:
					func_6(iLocal_36);
					func_7();
					func_8();
					if (func_10(func_9(iLocal_36)))
					{
						func_11(func_9(iLocal_36), 4);
					}
					LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), func_12(iLocal_36));
					Global_1896644 = -1;
					iLocal_37 = (iLocal_33 + MISC::GET_GAME_TIMER());
					iLocal_34 = 3;
					break;
				case 3:
					if (func_13() || iLocal_37 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_36);
						iLocal_37 = (MISC::GET_GAME_TIMER() + iLocal_33);
						iLocal_34 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_36) || iLocal_37 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_36);
						iLocal_37 = (MISC::GET_GAME_TIMER() + iLocal_33);
						iLocal_34 = 5;
					}
					break;
				case 5:
					if (func_17(iLocal_36) || iLocal_37 < MISC::GET_GAME_TIMER())
					{
						func_18(iLocal_36);
						iLocal_37 = (iLocal_33 + MISC::GET_GAME_TIMER());
						iLocal_34 = 7;
					}
					break;
				case 7:
					if (func_10(func_9(iLocal_36)))
					{
						if (func_19(func_9(iLocal_36), 4) && !iLocal_37 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (func_20(iLocal_36) || iLocal_37 < MISC::GET_GAME_TIMER())
							{
								func_21(iLocal_36, 4);
								iLocal_37 = (MISC::GET_GAME_TIMER() + iLocal_33);
								iLocal_34 = 8;
							}
							Jump @816; //curOff = 532
							func_22(iLocal_36);
							func_23();
							if (!func_24(4105, 0))
							{
								func_25();
							}
							func_26();
							func_27();
							func_28();
							func_29(iLocal_36);
							func_30(iLocal_36);
							func_31();
							func_32();
							iLocal_34 = 9;
							Jump @816; //curOff = 600
							func_33(iLocal_36);
							func_34();
							iLocal_34 = 10;
							Jump @816; //curOff = 617
							func_35(&Global_1896698);
							func_36(iLocal_36, &Global_1896698);
							iLocal_34 = 11;
							Jump @816; //curOff = 642
							func_37(iLocal_36);
							func_21(iLocal_36, 8);
							if (func_38(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								func_39(32);
							}
							iLocal_34 = 12;
							Jump @816; //curOff = 692
							if (func_40(iLocal_36))
							{
								iLocal_35 = MISC::GET_GAME_TIMER() + 1000;
							}
							func_41(&Global_1896698, iLocal_36);
							func_42(iLocal_36);
							func_21(iLocal_36, 8);
							if (func_43())
							{
								PED::_SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1887363[iLocal_36 /*36*/].f_11);
							if (Global_1887363[iLocal_36 /*36*/].f_12 > 0f)
							{
								PED::_SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1887363[iLocal_36 /*36*/].f_12);
							}
							Jump @816; //curOff = 793
							func_8();
							func_44(iVar0);
							iVar0++;
						}
						if (Global_1887363[iLocal_36 /*36*/].f_13 == 0)
						{
						}
						else
						{
							PED::_SET_SCENARIO_PED_DENSITY_THIS_FRAME(Global_1887363[iLocal_36 /*36*/].f_13);
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
	if (!bLocal_38)
	{
		if (Global_1051194)
		{
			bLocal_38 = true;
			return true;
		}
		if (func_47() && func_48())
		{
			bLocal_38 = true;
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
	bLocal_38 = false;
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
	if (func_45() == -1)
	{
		iLocal_27 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1209.053f, -193.1814f, 101.852f, 0f, 0f, 19.83985f, 6.216366f, 11.62523f, 3.695f, "ScarlettMeadows Horse Shop - m_volHorseShop");
		iLocal_28 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1207.376f, -186.3412f, 100.5991f, 0f, 0f, 17f, 4f, 4.18f, 7f, "ScarlettMeadows Horse Shop - m_volHorseShopOutsideDoor");
		func_53(9, iLocal_28);
		iLocal_29 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SCH_HORSESHOP_GUARD");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1193.417f, -220.1935f, 101.9785f, 0f, 0f, 14.80028f, 34.68813f, 24.66934f, 23.864f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1214.513f, -212.8789f, 101.9785f, 0f, 0f, 15.60754f, 23.67516f, 28.10355f, 23.864f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1187.173f, -208.151f, 105.1929f, 0f, 0f, 43.4823f, 32.91484f, 13.00947f, 30.26328f);
		iLocal_30 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1209.053f, -193.1814f, 101.9785f, 0f, 0f, 19.83985f, 100.2164f, 100.6252f, 30.88881f, "ScarlettMeadows Horse Shop - GUARDS REGISTER");
	}
	else
	{
		iLocal_27 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1209.053f, -193.1814f, 101.9785f, 0f, 0f, 19.83985f, 6.216366f, 11.62523f, 2.888809f, "ScarlettMeadows Horse Shop - m_volHorseShop");
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
	iParam0 = iParam0;
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
	if (func_45() == -1)
	{
		func_59(9, 798, iLocal_27, iParam0, 0, 0, 2, -1f, 0, 0);
		func_60(9, 1);
		func_60(9, 16384);
		func_61(9, 0.03587261f, 0, 0);
		func_61(9, -7.023107E-37f, 0, 0);
		func_61(9, 4.006891E+29f, -1f, 1);
		func_61(9, -158740.9f, 1f, 1);
		func_62(41, 9, 1, 0);
	}
	else
	{
		func_63(9, iLocal_27, iParam0, 0, 0, 2, 1, 0, -1f, 0);
		func_64(9, 1.084202E-19f);
		func_64(9, 16384);
		func_64(9, 32768);
		func_64(9, 1);
		func_64(9, 8388608);
		func_64(9, 8192);
		func_64(9, 4);
		func_64(9, 2.350989E-38f);
		func_64(9, 1.504633E-36f);
		if (!func_65() && func_66())
		{
			func_67(9, 4.006891E+29f, 0, 0, 0);
			func_67(9, -158740.9f, 0, 0, 0);
		}
		else
		{
			func_67(9, 4.006891E+29f, -1f, 1, 1);
			func_67(9, -158740.9f, 1f, 1, 1);
		}
	}
}

void func_30(int iParam0)
{
	func_68(798, iLocal_27, 1);
	LAW::_CREATE_GUARD_ZONE("SCARLET_HORSE_SHOP_OUTSIDE_PENS");
	LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_START("SCARLET_HORSE_SHOP_OUTSIDE_PENS", iLocal_30);
	LAW::_SET_GUARD_ZONE_VOLUME_RESTRICTED("SCARLET_HORSE_SHOP_OUTSIDE_PENS", iLocal_29);
	LAW::_SET_GUARD_ZONE_VOLUME_WARNING("SCARLET_HORSE_SHOP_OUTSIDE_PENS", iLocal_29);
	LAW::_SET_GUARD_ZONE_VOLUME_THREAT("SCARLET_HORSE_SHOP_OUTSIDE_PENS", iLocal_29);
	func_68(798, iLocal_29, 1);
	func_68(800, iLocal_29, 0);
}

void func_31()
{
}

void func_32()
{
}

void func_33(int iParam0)
{
	iParam0 = iParam0;
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
	uParam1->f_61 = uParam1->f_61;
}

void func_37(int iParam0)
{
	if (!func_69(iParam0))
	{
		return;
	}
	func_70();
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
	func_71(41, 799, iLocal_29, 9, &iLocal_31);
	if (func_72(&bLocal_32))
	{
		if (bLocal_32)
		{
			func_73(0.03587261f, 1);
			func_73(-7.023107E-37f, 1);
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

	if ((BUILTIN::VDIST(Global_34, 0f, 0f, 0f) <= 5f || func_74(Global_1940186, 32768)) || func_74(Global_1940186, 2.350989E-38f))
	{
		return;
	}
	if (func_75(uParam0, 1))
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
	bVar2 = func_76();
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
							if ((!func_77(uParam0[iVar3 /*3*/], 1) && func_78(iParam1)) && !func_79(iParam1, 16))
							{
								func_81(iParam1, func_80(), -1, 0, -1, 0);
								func_82(uParam0[iVar3 /*3*/], 1);
							}
							func_83(iParam1, 0);
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
	func_84(bVar0);
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
	if (func_85(iVar3))
	{
		return true;
	}
	return false;
}

bool func_44(int iParam0)
{
	if (iParam0 == 0)
	{
		func_86();
		LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), 0);
		func_21(iLocal_36, 2048);
		if (STATS::CHAL_IS_GOAL_ACTIVE(-1.042271E+15f, 0.4424044f))
		{
			switch (iLocal_36)
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
					STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(func_87(iLocal_36, 0), 1);
					break;
			}
		}
		if (func_10(func_80()))
		{
			func_11(func_80(), 8);
		}
		func_88(iLocal_36, 4);
		func_88(iLocal_36, 8);
		func_84(0);
		if (func_45() == -1)
		{
			func_89(0);
		}
		func_90(iLocal_36);
		func_34();
		return false;
	}
	else if (func_45() == -1)
	{
		func_91(iLocal_36);
		func_92(iLocal_36);
		if (!func_93(iLocal_36, 0))
		{
			return false;
		}
	}
	else if (!func_94(iLocal_36))
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
	if (!func_69(iParam0))
	{
		return false;
	}
	return func_95(iParam0, 8);
}

bool func_51(int iParam0)
{
	return (Global_1893611.f_7 && iParam0) != 0;
}

void func_52(int iParam0)
{
	Global_1893611.f_7 = (Global_1893611.f_7 - (Global_1893611.f_7 && iParam0));
}

void func_53(int iParam0, int iParam1)
{
	Global_1915643.f_3[iParam0 /*447*/].f_32 = iParam1;
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
	if (!func_69(iParam0))
	{
		return 1;
	}
	if (func_95(iParam0, 16))
	{
		return 1;
	}
	if (func_96(iParam0) && !func_97(iParam0))
	{
	}
	if (func_98(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_99(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_99(iParam2))
		{
			iVar1 = iParam2;
		}
		if (Global_1896644 < iVar0 || Global_1896644 > iVar1)
		{
			Global_1896644 = iVar0;
		}
		while (true)
		{
			if ((!func_96(iParam0) || func_97(iParam0)) || func_100(Global_1896644))
			{
				func_101(Global_1896644, 0);
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

void func_59(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	if (iParam0 == 11)
	{
		return;
	}
	iVar0 = func_102(iParam3, iParam0);
	vVar1 = { func_103(iVar0) };
	vVar4 = { func_104(iVar0) };
	if (func_105(vVar1))
	{
		return;
	}
	if (!func_106(16, 16384))
	{
		if (!func_99(iParam1))
		{
			return;
		}
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam2))
	{
		return;
	}
	VOLUME::_0x748C5F51A18CB8F0(false);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_107(iParam0);
	Global_1915643.f_3[iParam0 /*447*/].f_22 = -1;
	Global_1915643.f_3[iParam0 /*447*/].f_10 = { vVar1 };
	if (func_105(vVar4))
	{
		Global_1915643.f_3[iParam0 /*447*/].f_10 = { vVar1 };
	}
	else
	{
		Global_1915643.f_18260[iVar0 /*11*/].f_2 = { vVar4 };
	}
	Global_1915643.f_3[iParam0 /*447*/].f_9 = iVar0;
	Global_1915643.f_3[iParam0 /*447*/].f_25 = iParam2;
	Global_1915643.f_3[iParam0 /*447*/].f_26 = iParam4;
	Global_1915643.f_3[iParam0 /*447*/].f_28 = iParam5;
	Global_1915643.f_3[iParam0 /*447*/].f_29 = iParam9;
	Global_1915643.f_3[iParam0 /*447*/].f_8 = iParam3;
	Global_1915643.f_3[iParam0 /*447*/].f_410 = iParam8;
	Global_1960037.f_129[iParam0 /*3*/] = { 0f, 0f, 0f };
	Global_1960037.f_250[iParam0] = 0f;
	Global_1960037.f_648[iParam0] = 0;
	StringCopy(&(Global_1960037.f_327[iParam0 /*8*/]), "", 64);
	if (fParam7 <= 0f)
	{
		fParam7 = func_108(iParam0);
	}
	Global_1915643.f_3[iParam0 /*447*/].f_18 = fParam7;
	Global_1915643.f_3[iParam0 /*447*/].f_7 = iParam6;
	if (!func_109(iParam0, iParam1))
	{
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			func_110(iParam3);
			break;
		case 10:
			func_111(iParam3);
			break;
		case 15:
			func_112();
			break;
		case 9:
			func_113();
			break;
	}
	func_114(Global_1915643.f_3[iParam0 /*447*/].f_9);
	func_115(iParam0, 16);
	func_116(iParam0, 4);
	VOLUME::_0x748C5F51A18CB8F0(true);
}

void func_60(int iParam0, int iParam1)
{
	func_117(&(Global_1915643.f_3[iParam0 /*447*/].f_5), iParam1);
}

void func_61(int iParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_118(iParam0);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return;
	}
	Global_1915643.f_3[iParam0 /*447*/].f_318[iVar0 /*6*/] = fParam1;
	Global_1915643.f_3[iParam0 /*447*/].f_318[iVar0 /*6*/].f_4 = iParam2;
	Global_1915643.f_3[iParam0 /*447*/].f_318[iVar0 /*6*/].f_5 = iParam3;
	Global_1915643.f_3[iParam0 /*447*/].f_318[iVar0 /*6*/].f_1 = { 0f, 0f, 0f };
	Global_1915643.f_3[iParam0 /*447*/].f_409++;
}

void func_62(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (func_119(iParam0))
		{
			return;
		}
	}
	if (bParam2)
	{
		if (!func_120(iParam0, 4))
		{
			func_121(iParam0, 4);
		}
	}
	else
	{
		func_122(iParam0, 4);
	}
	func_123(iParam0);
}

void func_63(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, float fParam8, int iParam9)
{
	if (iParam0 == 9 && !(!func_65() && func_124()))
	{
		if (func_125(255))
		{
			if (VOLUME::IS_POINT_IN_VOLUME(iParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
			{
				func_126(1, 1);
			}
		}
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_127(iParam0, 1);
	Global_1051832.f_92[iParam0 /*75*/] = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_18 = func_102(iParam2, iParam0);
	Global_1051832.f_92[iParam0 /*75*/].f_24 = iParam1;
	Global_1051832.f_92[iParam0 /*75*/].f_3 = { VOLUME::GET_VOLUME_COORDS(iParam1) };
	Global_1051832.f_92[iParam0 /*75*/].f_25 = iParam3;
	Global_1051832.f_92[iParam0 /*75*/].f_27 = iParam4;
	Global_1051832.f_92[iParam0 /*75*/].f_2 = iParam2;
	Global_1051832.f_92[iParam0 /*75*/].f_63 = func_128(Global_1051832.f_92[iParam0 /*75*/].f_18);
	Global_1051832.f_92[iParam0 /*75*/].f_72 = iParam9;
	Global_1051832.f_92[iParam0 /*75*/].f_73 = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_48 = 0;
	if (fParam8 <= 0f)
	{
		fParam8 = func_108(iParam0);
	}
	Global_1051832.f_92[iParam0 /*75*/].f_10 = fParam8;
	Global_1051832.f_92[iParam0 /*75*/].f_14 = iParam5;
	if (bParam6)
	{
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24, 0, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24, 0, 0, 0, -1, -1, 0);
	}
	if (bParam7)
	{
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25, 0, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25, 0, 0, 0, -1, -1, 0);
	}
	NETWORK::_NETWORK_SPAWN_CONFIG_ADD_EXCLUSION_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	func_129(iParam0, 4);
	func_130(iParam0);
}

void func_64(int iParam0, float fParam1)
{
	func_117(&(Global_1051832.f_92[iParam0 /*75*/].f_49), fParam1);
}

bool func_65()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_66()
{
	return func_131(func_57(0));
}

void func_67(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_132(iParam0);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return;
	}
	Global_1051832.f_92[iParam0 /*75*/].f_31[iVar0] = func_133(iParam1, 0, 0);
	if (func_134(Global_1051832.f_92[iParam0 /*75*/].f_31[iVar0]))
	{
		if (!func_135(Global_1051832.f_92[iParam0 /*75*/].f_31[iVar0]))
		{
			func_136(Global_1051832.f_92[iParam0 /*75*/].f_31[iVar0], 0, fParam2, bParam3, 1, 0, bParam4, 0);
		}
	}
	Global_1051832.f_92[iParam0 /*75*/].f_47++;
}

int func_68(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_45() != -1)
	{
		return 0;
	}
	if (!func_137(iParam0, 0))
	{
		return 0;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = func_138(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	VOLUME::SET_VOLUME_OWNER_PERSISTENT_CHARACTER(iParam1, iVar0, bParam2);
	return 1;
}

bool func_69(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_70()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_139(iVar0))
		{
			Global_1900426[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if ((MISC::GET_FRAME_COUNT() % 10) != 0)
	{
		return;
	}
	if (func_45() != -1)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam2))
	{
		return;
	}
	if (!func_99(iParam1))
	{
		return;
	}
	iVar0 = func_140(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (*iParam4)
		{
			iVar3 = ITEMSET::CREATE_ITEMSET(true);
			iVar1 = ENTITY::GET_MATCHING_ENTITIES(iParam2, iVar3, 1, 1, 0, 0);
			iVar4 = 0;
			while (iVar4 < iVar1)
			{
				iVar5 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar3);
				iVar6 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar5);
				if (!func_141(iVar6))
				{
				}
				else if (func_142(iVar6))
				{
				}
				else if (func_143(iVar6))
				{
				}
				else
				{
					func_144(iVar6, iParam0);
					iVar2++;
				}
				iVar4++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar3);
			if (iVar2 < iParam3)
			{
				*iParam4 = 1;
			}
			else
			{
				*iParam4 = 0;
			}
		}
	}
	else
	{
		*iParam4 = 1;
	}
}

bool func_72(bool bParam0)
{
	if (func_145())
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

void func_73(int iParam0, int iParam1)
{
	func_136(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

bool func_74(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_75(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_76()
{
	return func_74(Global_1940186, 8192);
}

bool func_77(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_78(int iParam0)
{
	if (!func_69(iParam0))
	{
		return false;
	}
	return ((Global_1887363[iParam0 /*36*/].f_21 == 1 || Global_1887363[iParam0 /*36*/].f_21 == 2) && !func_146(iParam0));
}

bool func_79(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (Global_1887363[iParam0 /*36*/].f_22 && iParam1) != 0;
}

int func_80()
{
	return Global_1896646.f_41;
}

void func_81(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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

	if (!func_147())
	{
		return;
	}
	sVar1 = func_148(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_149(iParam4))
	{
		if (func_69(iParam0))
		{
			iParam4 = func_150(func_9(iParam0));
		}
		else
		{
			iParam4 = func_150(iParam1);
		}
	}
	if (func_149(iParam4))
	{
		iVar3 = func_151(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_153(func_152(iParam2));
	}
	else if ((func_154(iParam1, 2) || func_155(iParam4, 2)) && !Global_1893611.f_9)
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
	else if ((func_69(iParam0) && func_95(iParam0, 2.350989E-38f)) && !Global_1893611.f_9)
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
		iVar4 = func_157(func_156());
		iVar5 = func_158(func_156());
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
				fVar7 = func_159(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::VAR_STRING(674, sVar8, iVar4, func_160(&cVar6, 4.808429E-35f), sVar9, func_160(&cVar10, 4.808429E-35f));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_159(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::VAR_STRING(162, sVar8, iVar4, func_160(&cVar6, 4.808429E-35f), func_160(&cVar10, 4.808429E-35f));
		}
		Global_1893611.f_9 = 0;
	}
	Global_1939089.f_145 = func_161(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_82(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_83(int iParam0, bool bParam1)
{
	if (Global_1572887.f_12 && func_45() == 0)
	{
		return;
	}
	if (!func_162(iParam0))
	{
		return;
	}
	if (func_95(iParam0, 32))
	{
		return;
	}
	func_21(iParam0, 32);
	func_163(&Global_1940186, 16384);
	func_165(func_164(-7.103403E-17f, -3.542793E+37f), 1);
	switch (func_9(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_165(func_164(-7.103403E-17f, 2.866541E-31f), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_165(func_164(-7.103403E-17f, 3.024173E-30f), 1);
			break;
		case 3:
		case 10:
			func_165(func_164(-7.103403E-17f, 1.603649E+10f), 1);
			break;
		case 4:
		case 9:
			func_165(func_164(-7.103403E-17f, 497.0886f), 1);
			break;
		case 8:
			func_165(func_164(-7.103403E-17f, -4.726794E+32f), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_165(func_164(-7.103403E-17f, -1566073f), 1);
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

void func_84(bool bParam0)
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

bool func_85(int iParam0)
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

void func_86()
{
}

int func_87(int iParam0, bool bParam1)
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

void func_88(int iParam0, int iParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/] = (Global_8130[iParam0 /*11*/] - (Global_8130[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1072759.f_19611[iParam0 /*11*/] = (Global_1072759.f_19611[iParam0 /*11*/] - (Global_1072759.f_19611[iParam0 /*11*/] && iParam1));
}

void func_89(bool bParam0)
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

void func_90(int iParam0)
{
	if (func_45() == -1)
	{
		if (HUD::_DOES_TEXT_BLOCK_EXIST("RHRGNAU"))
		{
			if (HUD::TEXT_BLOCK_IS_LOADED("RHRGNAU"))
			{
				HUD::_TEXT_BLOCK_DELETE("RHRGNAU");
			}
		}
	}
}

void func_91(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1939946.f_5[iVar0 /*11*/].f_5 == iParam0)
		{
			func_166(iVar0);
		}
		iVar0++;
	}
}

void func_92(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1915643.f_3[iVar0 /*447*/].f_8 == iParam0)
		{
			func_107(iVar0);
		}
		iVar0++;
	}
}

bool func_93(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_45() != -1)
	{
		return true;
	}
	if (!func_69(iParam0))
	{
		return true;
	}
	if (func_98(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1896644.f_1 < iVar0 || Global_1896644.f_1 > iVar1)
		{
			Global_1896644.f_1 = iVar0;
		}
		while (true)
		{
			if (!func_167(Global_1896644.f_1, 16))
			{
				func_168(Global_1896644.f_1, 0);
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

bool func_94(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (func_169(iVar0) || func_170(iVar0))
		{
		}
		else
		{
			switch (iVar0)
			{
				case 34:
					break;
				case 30:
					func_171();
					break;
				case 32:
					func_172();
					break;
				default:
					if (Global_1051832.f_92[iVar0 /*75*/].f_2 == iParam0)
					{
						func_127(iVar0, 0);
					}
					break;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_95(int iParam0, int iParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		return (Global_8130[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1072759.f_19611[iParam0 /*11*/] && iParam1) != 0;
}

bool func_96(int iParam0)
{
	if (!func_69(iParam0))
	{
		return false;
	}
	return func_95(iParam0, 9.403955E-38f);
}

bool func_97(int iParam0)
{
	if (!func_69(iParam0))
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

bool func_98(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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

bool func_99(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 948);
}

bool func_100(int iParam0)
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

int func_101(int iParam0, bool bParam1)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	if (!func_167(iParam0, 2))
	{
		return 0;
	}
	if (func_167(iParam0, 32) && !bParam1)
	{
		func_174(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_173(iParam0)));
		if (func_45() == -1)
		{
			if (func_167(iParam0, 2048))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_138(iParam0));
				func_175(iParam0, 2048);
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_138(iParam0));
		}
		return 0;
	}
	if (!func_176(iParam0) && func_45() == -1)
	{
		return 0;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_138(iParam0)))
	{
		func_175(iParam0, 128);
		return 1;
	}
	func_174(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_173(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_138(iParam0));
	if (func_167(iParam0, 2048))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_138(iParam0));
		func_175(iParam0, 2048);
	}
	return 1;
}

int func_102(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 119;
	}
	else if (iParam1 == 27)
	{
		return 133;
	}
	else if (iParam1 == 34)
	{
		return 152;
	}
	else if (iParam1 == 28)
	{
		return 153;
	}
	else if (iParam1 == 29)
	{
		return 154;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	switch (iParam0)
	{
		case 84:
			switch (iParam1)
			{
				case 0:
					return 155;
				case 6:
					return 157;
				case 23:
					return 158;
				case 22:
					return 156;
				case 16:
					return 67;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 12:
					return 5;
				case 30:
					return 10;
				case 25:
					return 122;
				case 26:
					return 123;
				case 3:
					return 6;
				case 8:
					return 8;
				case 10:
					return 9;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 7:
					return 19;
				case 18:
					return 12;
				default:
					break;
			}
			break;
		case 104:
			switch (iParam1)
			{
				case 0:
					return 159;
				case 6:
					return 161;
				case 23:
					return 162;
				case 22:
					return 160;
				case 16:
					return 65;
				default:
					break;
			}
			break;
		case 74:
			switch (iParam1)
			{
				case 4:
					return 22;
				case 33:
					return 21;
				case 3:
					return 23;
				case 2:
					return 24;
				case 1:
					return 25;
				case 38:
					return 140;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					return 164;
				case 6:
					return 166;
				case 23:
					return 167;
				case 22:
					return 165;
				case 16:
					return 64;
				case 38:
					return 141;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 168;
				case 6:
					return 170;
				case 23:
					return 171;
				case 22:
					return 169;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 14:
					return 26;
				case 39:
					return 151;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 12:
					return 42;
				case 8:
					return 43;
				case 30:
					return 54;
				case 25:
					return 124;
				case 10:
					return 44;
				case 26:
					return 125;
				case 0:
					return 45;
				case 4:
					return 46;
				case 33:
					return 20;
				case 3:
					return 48;
				case 6:
					return 49;
				case 9:
					return 50;
				case 2:
					return 51;
				case 1:
					return 52;
				case 7:
					return 53;
				case 15:
					return 63;
				case 18:
					return 60;
				case 36:
					return 61;
				default:
					break;
			}
			break;
		case 111:
			switch (iParam1)
			{
				case 12:
					return 29;
				case 30:
					return 36;
				case 25:
					return 126;
				case 10:
					return 30;
				case 4:
					return 31;
				case 33:
					return 32;
				case 3:
					return 33;
				case 6:
					return 34;
				case 2:
					return 35;
				case 1:
					return 39;
				default:
					break;
			}
			break;
		case 107:
			switch (iParam1)
			{
				case 9:
					return 41;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 15:
					return 3;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 27;
				case 1:
					return 28;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 172;
				case 22:
					return 173;
				case 6:
					return 174;
				case 23:
					return 175;
				case 16:
					return 66;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 25:
					return 127;
				case 30:
					return 75;
				case 10:
					return 68;
				case 3:
					return 69;
				case 17:
					return 70;
				case 9:
					return 71;
				case 2:
					return 74;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 15:
					return 4;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 12:
					return 77;
				case 8:
					return 78;
				case 30:
					return 79;
				case 25:
					return 120;
				case 10:
					return 82;
				case 26:
					return 121;
				case 0:
					return 83;
				case 3:
					return 84;
				case 6:
					return 85;
				case 9:
					return 86;
				case 2:
					return 87;
				case 1:
					return 88;
				case 17:
					return 90;
				case 36:
					return 89;
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 26:
					return 128;
				case 4:
					return 93;
				case 33:
					return 92;
				case 2:
					return 98;
				case 1:
					return 97;
				case 9:
					return 96;
				default:
					break;
			}
			break;
		case 83:
			switch (iParam1)
			{
				case 25:
					return 129;
				case 6:
					return 0;
				case 2:
					return 1;
				case 1:
					return 2;
				default:
					break;
			}
			break;
		case 95:
		case 139:
			switch (iParam1)
			{
				case 15:
					return 40;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 101;
				case 1:
					return 100;
				case 3:
					return 99;
				default:
					break;
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 30:
					return 105;
				case 3:
					return 102;
				case 6:
					return 103;
				case 9:
					return 107;
				case 10:
					return 104;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 3:
					return 108;
				case 2:
					return 111;
				case 1:
					return 112;
				case 35:
					return 109;
				default:
					break;
			}
			break;
		case 130:
			switch (iParam1)
			{
				case 4:
					return 116;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 2:
					return 117;
				case 1:
					return 118;
				default:
					break;
			}
			break;
		case 119:
			switch (iParam1)
			{
				case 15:
					return 76;
				default:
					break;
			}
			break;
		case 136:
			switch (iParam1)
			{
				case 4:
					return 130;
				default:
					break;
			}
			break;
		case 96:
			switch (iParam1)
			{
				case 35:
					return 113;
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 35:
					return 114;
				default:
					break;
			}
			break;
		case 126:
			switch (iParam1)
			{
				case 38:
					return 135;
				default:
					break;
			}
			break;
		case 133:
			switch (iParam1)
			{
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 137:
			switch (iParam1)
			{
				case 38:
					return 137;
				default:
					break;
			}
			break;
		case 39:
			switch (iParam1)
			{
				case 38:
					return 138;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 38:
					return 139;
				default:
					break;
			}
			break;
		case 61:
			switch (iParam1)
			{
				case 38:
					return 142;
				default:
					break;
			}
			break;
		case 100:
			switch (iParam1)
			{
				case 38:
					return 143;
				default:
					break;
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 38:
					return 144;
				default:
					break;
			}
			break;
		case 43:
			switch (iParam1)
			{
				case 38:
					return 145;
				default:
					break;
			}
			break;
		case 85:
			switch (iParam1)
			{
				case 38:
					return 146;
				default:
					break;
			}
			break;
		case 138:
			switch (iParam1)
			{
				case 39:
					return 149;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 39:
					return 150;
				default:
					break;
			}
			break;
		case 134:
			switch (iParam1)
			{
				case 15:
					return 148;
				default:
					break;
			}
			break;
	}
	if (iParam1 == 38)
	{
		return 147;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	if (iParam1 == 37)
	{
		return 134;
	}
	return -1;
}

Vector3 func_103(int iParam0)
{
	if (!func_177(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 1161310432, 1151665354, 1110394877;
		case 1:
			return 1161277697, 1151394742, 1110350994;
		case 2:
			return 1161252741, 1151357420, 1110355476 /* Float: 43.67f */;
		case 117:
			return -979150116, -984030956, -1046220411;
		case 118:
			return -979147264, -984038277, -1045655716;
		case 6:
			return -1002168484, -995803546, 1110148383 /* Float: 42.88f */;
		case 9:
			return -1002677503, -996112467, 1110232398;
		case 8:
			return -1001678248, -995432508, 1110376684;
		case 13:
			return -1000794757, -995440989, 1110639406;
		case 14:
			return -1000685076, -995761439, 1110171976 /* Float: 42.97f */;
		case 15:
			return -1000685240, -995764552, 1110171976 /* Float: 42.97f */;
		case 19:
			return -1002535787, -996036209, 1110136717;
		case 12:
			return -1001691546, -995378790, 1110494413 /* Float: 44.2f */;
		case 22:
			return 1152461111, 1133037771, 1118894568;
		case 24:
			return 1153318175, 1138529075, 1119050793 /* Float: 89.68f */;
		case 25:
			return 1153332265, 1138578227, 1119050793 /* Float: 89.68f */;
		case 26:
			return 1158092800, -1004888064, 1110179840 /* Float: 43f */;
		case 27:
			return -997680087, -1005589463, 1117966828 /* Float: 81.41f */;
		case 28:
			return -997668045, -1005560136, 1117966828 /* Float: 81.41f */;
		case 29:
			return 1151451827, -995957947, 1117263207;
		case 30:
			return 1151479176, -996160207, 1117212838;
		case 31:
			return 1151659459, -997277041, 1117966828 /* Float: 81.41f */;
		case 33:
			return 1151744038, -996030730, 1117258934;
		case 34:
			return 1151694720, -995804983, 1117505769;
		case 35:
			return 1150899896, -996023665, 1117244621 /* Float: 75.9f */;
		case 39:
			return 1150929633, -995995005, 1117244975;
		case 41:
			return 1150755251, -1019138448, 1120662785;
		case 42:
			return 1160069891, -996044745, 1112342423;
		case 43:
			return 1160124276, -996958535, 1112874287;
		case 44:
			return 1160787948, -995727032, 1110838870;
		case 45:
			return 1160385495, -996543201, 1111849697 /* Float: 49.37f */;
		case 46:
			return 1160951849, -996784865, 1111645225 /* Float: 48.59f */;
		case 48:
			return 1160812981, -995834212, 1110902230;
		case 49:
			return 1160372224 /* Float: 2718f */, -996089856 /* Float: -1287f */, 1111909990 /* Float: 49.6f */;
		case 50:
			return 1159512932, -994757395, 1111599411;
		case 51:
			return 1160498427, -995178278, 1110752124;
		case 52:
			return 1160494385, -995193780, 1110752124;
		case 53:
			return 1159704945, -997073060, 1112717394 /* Float: 52.68f */;
		case 63:
			return 1160839249, -996593150, 1111134621;
		case 60:
			return 1160438472, -997459926, 1112043139;
		case 68:
			return -992269074, -1010546868, 1125859826;
		case 69:
			return -991969280 /* Float: -1790f */, -1010687345, 1126126715;
		case 70:
			return -991731794, -1011255214, 1126321357 /* Float: 162.3f */;
		case 71:
			return -991724506, -1005816719, 1125989241;
		case 74:
			return -992184071, -1010790833, 1125956983;
		case 77:
			return -1013318801, 1145136821, 1122723839;
		case 78:
			return -1013373338, 1145816351, 1122760131;
		case 79:
			return 0f, 0f, 0f;
		case 82:
			return -1012306258, 1145035709, 1122443299;
		case 83:
			return -1013974506, 1145635707, 1122813333;
		case 84:
			return -1012793344 /* Float: -324f */, 1145630228, 1122615951;
		case 85:
			return -1014175498, 1145224724, 1122828288 /* Float: 118.5f */;
		case 86:
			return -1011304178, 1145351267, 1122499350;
		case 87:
			return -1020131305, 1142752250, 1122119137;
		case 88:
			return -1020327514, 1142813489, 1122119137;
		case 90:
			return -1012743145, 1145137209, 1122697718;
		case 93:
			return 1161632917, 1141681771, 1110367719;
		case 98:
			return 1161470868, 1141800089, 1110343114;
		case 97:
			return 1161473802, 1141881242 /* Float: 574.9f */, 1110347612 /* Float: 43.64f */;
		case 96:
			return 1161393245, 1145515894, 1112695059;
		case 99:
			return -995959183, 1137005717, 1119667054;
		case 101:
			return -995976564, 1137172803, 1119667156;
		case 100:
			return -995984256, 1137225287, 1119667156;
		case 105:
			return -978554734, -986340486, -1070590643;
		case 102:
			return -978617964, -986206051, -1078882363;
		case 103:
			return -978575375, -986100350, -1076916912;
		case 104:
			return -978573274, -986171657, -1069994633;
		case 107:
			return -978549348, -985774381, -1078739841;
		case 108:
			return -983141171, -987498947, -1050211779;
		case 3:
			return -986602654, 1124685565, 1127732137;
		case 4:
			return -998540340, -1006160672, 1120134785;
		case 40:
			return 1157746014, 1148859669, 1121910430;
		case 76:
			return -989024115, -990929626, 1122493897;
		case 148:
			return -980168206, -986205846, -1046424899;
		case 64:
			return -1022487953, -1044631152, 1119759670;
		case 65:
			return 1143526344, -996382858, 1110183825;
		case 66:
			return 1156212329, -991402540, 1109865267 /* Float: 41.8f */;
		case 67:
			return 1158930777, 1151886315, 1121075921;
		case 130:
			return -995147776 /* Float: -1402f */, -988753920 /* Float: -2317f */, 1110337126 /* Float: 43.6f */;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_104(int iParam0)
{
	if (!func_177(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 1161289437, 1151671724, 1111029213;
		case 1:
			return 1161277440 /* Float: 2939f */, 1151393792 /* Float: 1287f */, 0f;
		case 2:
			return 1161247113, 1151359703, 1110619796;
		case 117:
			return -979149926, -984038646, -1046220411;
		case 118:
			return -979147264, -984038277, -1045655716;
		case 9:
			return -1002677503, -996106159, 1110232398;
		case 6:
			return -1002157372, -995785285, 1111058153;
		case 8:
			return -1001678248, -995432508, 1110376684;
		case 13:
			return -1000794757, -995440989, 1110639406;
		case 14:
			return -1000685264, -995753510, 1110444202;
		case 19:
			return -1002499698, -996044179, 1110532214;
		case 12:
			return -1001689907, -995376333, 1110494413 /* Float: 44.2f */;
		case 22:
			return 1152461111, 1133037771, 1118894568;
		case 24:
			return 1153321409, 1138585102, 1119050596;
		case 25:
			return 1153346821, 1138582228, 1119177500;
		case 26:
			return 1158092800, -1004888064, 1110179840 /* Float: 43f */;
		case 27:
			return -997680087, -1005589463, 1117966828 /* Float: 81.41f */;
		case 28:
			return -997667553, -1005559644, 1117966828 /* Float: 81.41f */;
		case 29:
			return 1151451827, -995957947, 1117263207;
		case 30:
			return 1151479176, -996160207, 1117212838;
		case 31:
			return 1151659459, -997277041, 1117966828 /* Float: 81.41f */;
		case 33:
			return 1151721763, -996045732, 1117421411;
		case 34:
			return 1151715478, -995793886, 1117545156;
		case 35:
			return 1150914625, -996009610, 1117471991;
		case 39:
			return 1150944921, -995981748, 1117500159;
		case 41:
			return 1150755251, -1019138448, 1120662785;
		case 43:
			return 1160124276, -996958535, 1112874287;
		case 44:
			return 1160787948, -995727032, 1110838870;
		case 45:
			return 1160385495, -996543201, 1111849697 /* Float: 49.37f */;
		case 46:
			return 1160946510, -996804062, 1111764763;
		case 48:
			return 1160823142, -995859013, 1111338412;
		case 49:
			return 1160358241, -996090734, 1112099022;
		case 50:
			return 1159512932, -994757395, 1111599411;
		case 51:
			return 1160494718, -995188005, 1111257435;
		case 52:
			return 1160489364, -995211037, 1111206920;
		case 53:
			return 1159701070, -997080884, 1113154493;
		case 63:
			return 1160839249, -996593150, 1111134621;
		case 60:
			return 1160438472, -997459926, 1112043139;
		case 68:
			return -992269074, -1010546868, 1125859826;
		case 69:
			return -991949258, -1010780996, 1126216001;
		case 70:
			return -991786248, -1011265765, 1126293923;
		case 71:
			return -991724506, -1005816719, 1125989241;
		case 74:
			return -992184071, -1010790833, 1125956983;
		case 77:
			return -1013318801, 1145136821, 1122723839;
		case 78:
			return -1013360230, 1145792102 /* Float: 813.6f */, 1122854502 /* Float: 118.7f */;
		case 82:
			return -1012306258, 1145035709, 1122443299;
		case 83:
			return -1014008031, 1145727736, 1123110945;
		case 84:
			return -1012809512, 1145564240, 1122890285;
		case 85:
			return -1014258958, 1145270187, 1122867007;
		case 86:
			return -1011304178, 1145351267, 1122499350;
		case 87:
			return -1020244787, 1142785638 /* Float: 630.1f */, 1122412921;
		case 88:
			return -1020391182, 1142848237, 1122383823;
		case 90:
			return -1012723771, 1145109240, 1122557755;
		case 93:
			return 1161625021, 1141656879, 1111159000;
		case 98:
			return 1161469966, 1141766644, 1110792471;
		case 96:
			return 1161393245, 1145515894, 1112695059;
		case 99:
			return -995959183, 1137005717, 1119667054;
		case 101:
			return -995981040, 1137194589, 1119667054;
		case 100:
			return -995986572, 1137231473, 1119744516;
		case 105:
			return -978554734, -986340486, -1070590643;
		case 102:
			return -978615720, -986211687, 1059143968;
		case 103:
			return -978578040, -986086019, -1079961138;
		case 104:
			return -978573274, -986171657, -1069994633;
		case 107:
			return -978549348, -985774381, -1078739841;
		case 108:
			return -983153286, -987484663, -1052193902;
		case 3:
			return -986602654, 1124685565, 1127732137;
		case 4:
			return -998540340, -1006160672, 1120134785;
		case 40:
			return 1157746014, 1148859669, 1121910430;
		case 76:
			return -989024115, -990929626, 1122493897;
		case 148:
			return -980168206, -986205846, -1046424899;
		case 64:
			return -1022487953, -1044631152, 1119759670;
		case 65:
			return 1143526344, -996382858, 1110183825;
		case 66:
			return 1156212329, -991402540, 1109865267 /* Float: 41.8f */;
		case 67:
			return 1158930777, 1151886315, 1121075921;
		case 130:
			return -995147776 /* Float: -1402f */, -988753920 /* Float: -2317f */, 1110337126 /* Float: 43.6f */;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_105(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_106(int iParam0, int iParam1)
{
	return func_178(Global_1915643.f_3[iParam0 /*447*/].f_5, iParam1);
}

void func_107(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_99(Global_1915643.f_3[iParam0 /*447*/].f_21) && func_179(Global_1915643.f_3[iParam0 /*447*/].f_21))
	{
		func_180(Global_1915643.f_3[iParam0 /*447*/].f_21, 0, 1, 0, 0);
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
	func_181(Global_1915643.f_3[iParam0 /*447*/].f_9, 0);
	func_115(iParam0, 1.084202E-19f);
	iVar1 = func_118(iParam0);
	if (iVar1 >= 15)
	{
		Global_1915643.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_182(Global_1915643.f_3[iParam0 /*447*/].f_318[iVar0 /*6*/]);
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
	func_183(iParam0);
	Global_1915643.f_3[iParam0 /*447*/].f_9 = -1;
	Global_1915643.f_3[iParam0 /*447*/].f_8 = -1;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1112014848 /* Float: 50f */;
		case 9:
			return 1103626240 /* Float: 25f */;
		case 10:
			return 1103626240 /* Float: 25f */;
		case 29:
			return 1103626240 /* Float: 25f */;
		case 38:
			return 1116471296 /* Float: 70f */;
		case 37:
			return 1106247680 /* Float: 30f */;
		case 15:
			return 1103626240 /* Float: 25f */;
		case 39:
			return 1120403456 /* Float: 100f */;
	}
	return 1095237632 /* Float: 12.5f */;
}

bool func_109(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_106(iParam0, 16384))
	{
		return true;
	}
	if (!func_99(iParam1))
	{
		return false;
	}
	iVar0 = func_140(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1915643.f_3[iParam0 /*447*/].f_25))
	{
		iVar1 = VOLUME::_0x7FD78DFD0C5D7B9B(Global_1915643.f_3[iParam0 /*447*/].f_25);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (iVar1 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783(Global_1915643.f_3[iParam0 /*447*/].f_25);
			}
		}
		func_68(iParam1, Global_1915643.f_3[iParam0 /*447*/].f_25, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B(Global_1915643.f_3[iParam0 /*447*/].f_25, 1, 1);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1915643.f_3[iParam0 /*447*/].f_28))
	{
		iVar2 = VOLUME::_0x7FD78DFD0C5D7B9B(Global_1915643.f_3[iParam0 /*447*/].f_28);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (iVar2 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783(Global_1915643.f_3[iParam0 /*447*/].f_28);
			}
		}
		func_68(iParam1, Global_1915643.f_3[iParam0 /*447*/].f_28, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B(Global_1915643.f_3[iParam0 /*447*/].f_28, 0, 1);
	}
	Global_1915643.f_3[iParam0 /*447*/].f_21 = iParam1;
	Global_1915643.f_3[iParam0 /*447*/].f_23 = iVar0;
	return true;
}

void func_110(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 98:
			StringCopy(&(Global_1960037.f_327[2 /*8*/]), "0507_U_M_M_VhtStationClerk_01", 64);
			StringCopy(&(Global_1960037.f_327[1 /*8*/]), "0507_U_M_M_VhtStationClerk_01", 64);
			return;
		case 40:
			StringCopy(&(Global_1960037.f_327[2 /*8*/]), "0078_U_M_M_BlWTrainStationWorker_01", 64);
			StringCopy(&(Global_1960037.f_327[1 /*8*/]), "0078_U_M_M_BlWTrainStationWorker_01", 64);
			return;
		case 26:
			StringCopy(&(Global_1960037.f_327[2 /*8*/]), "0442_U_M_M_StrFreightStationOwner_01", 64);
			StringCopy(&(Global_1960037.f_327[1 /*8*/]), "0442_U_M_M_StrFreightStationOwner_01", 64);
			return;
		default:
			break;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	if (iVar1 > 80)
	{
		StringCopy(&(Global_1960037.f_327[2 /*8*/]), "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
		StringCopy(&(Global_1960037.f_327[1 /*8*/]), "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
	}
	else if (iVar1 < 40)
	{
		StringCopy(&(Global_1960037.f_327[2 /*8*/]), "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
		StringCopy(&(Global_1960037.f_327[1 /*8*/]), "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
	}
	else
	{
		StringCopy(&(Global_1960037.f_327[2 /*8*/]), "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
		StringCopy(&(Global_1960037.f_327[1 /*8*/]), "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
	}
}

void func_111(int iParam0)
{
	if (iParam0 == 81)
	{
		StringCopy(&(Global_1960037.f_327[10 /*8*/]), "1025_U_M_M_ValButcher_01", 64);
	}
	else if (iParam0 == 121)
	{
		StringCopy(&(Global_1960037.f_327[10 /*8*/]), "1086_U_M_M_TumButcher_01", 64);
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
		{
			case 0:
			case 3:
				StringCopy(&(Global_1960037.f_327[10 /*8*/]), "0842_S_M_M_UniButchers_01_WHITE_01", 64);
				break;
			case 1:
			case 4:
				StringCopy(&(Global_1960037.f_327[10 /*8*/]), "0843_S_M_M_UniButchers_01_WHITE_02", 64);
				break;
			case 2:
			case 5:
				StringCopy(&(Global_1960037.f_327[10 /*8*/]), "0844_S_M_M_UniButchers_01_WHITE_03", 64);
				break;
		}
	}
}

void func_112()
{
	StringCopy(&(Global_1960037.f_327[15 /*8*/]), "GUS", 64);
}

void func_113()
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	if (iVar1 > 80)
	{
		StringCopy(&(Global_1960037.f_327[9 /*8*/]), "0825_S_M_M_LiveryWorker_01_WHITE_01", 64);
	}
	else if (iVar1 < 40)
	{
		StringCopy(&(Global_1960037.f_327[9 /*8*/]), "0826_S_M_M_LiveryWorker_01_WHITE_02", 64);
	}
	else
	{
		StringCopy(&(Global_1960037.f_327[9 /*8*/]), "0827_S_M_M_LiveryWorker_01_WHITE_03", 64);
	}
}

void func_114(int iParam0)
{
	if (!func_177(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 3:
		case 4:
		case 22:
		case 26:
		case 31:
		case 40:
		case 44:
		case 63:
		case 68:
		case 76:
		case 82:
		case 104:
			if (!func_184(iParam0, 2))
			{
				func_185(iParam0, 2);
			}
			break;
	}
}

void func_115(int iParam0, float fParam1)
{
	if (!func_186(iParam0))
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

void func_116(int iParam0, int iParam1)
{
	if (!func_186(iParam0))
	{
		return;
	}
	if (func_45() == -1)
	{
		Global_1915643.f_3[iParam0 /*447*/].f_6 = (Global_1915643.f_3[iParam0 /*447*/].f_6 || iParam1);
	}
	else
	{
		Global_1051832.f_92[iParam0 /*75*/].f_1 = (Global_1051832.f_92[iParam0 /*75*/].f_1 || iParam1);
	}
}

void func_117(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_118(int iParam0)
{
	return Global_1915643.f_3[iParam0 /*447*/].f_409;
}

bool func_119(int iParam0)
{
	int iVar0;

	if (!func_177(iParam0))
	{
		return false;
	}
	if (iParam0 == 46 || iParam0 == 93)
	{
		return false;
	}
	iVar0 = func_187(iParam0);
	if (((((((((((((iVar0 == 10 || iVar0 == 29) || iVar0 == 4) || iVar0 == 14) || iVar0 == 15) || iVar0 == 16) || iVar0 == 27) || iVar0 == 28) || iVar0 == 35) || iVar0 == 35) || iVar0 == 38) || iVar0 == 29) || iVar0 == 39) || iVar0 == 33)
	{
		return true;
	}
	return false;
}

bool func_120(int iParam0, int iParam1)
{
	if (!func_177(iParam0))
	{
		return false;
	}
	return (Global_5867.f_2074[iParam0] && iParam1) != 0;
}

void func_121(int iParam0, int iParam1)
{
	if (!func_177(iParam0))
	{
	}
	else
	{
		Global_5867.f_2074[iParam0] = (Global_5867.f_2074[iParam0] || iParam1);
	}
}

void func_122(int iParam0, int iParam1)
{
	if (!func_177(iParam0))
	{
	}
	else
	{
		Global_5867.f_2074[iParam0] = (Global_5867.f_2074[iParam0] - (Global_5867.f_2074[iParam0] && iParam1));
	}
}

void func_123(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_1915643.f_18246 = iParam0;
	}
}

bool func_124()
{
	return func_188(func_57(0));
}

bool func_125(int iParam0)
{
	return !func_189(iParam0);
}

void func_126(bool bParam0, bool bParam1)
{
	if (func_190(255) == 4)
	{
		return;
	}
	if (func_105(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_191(0);
	}
	else
	{
		if (bParam1)
		{
			func_192(0, 0, 0, 1);
		}
		func_193(0);
		func_194(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = -2.19652E+23f;
		func_195(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}
	func_196(Global_1102813.f_3839, 36);
	func_197(Global_1102813.f_3878, 36);
}

void func_127(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	bVar0 = (func_198(iParam0) && !bParam1);
	if (!bVar0 && !func_199(iParam0, 65536))
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
	else if (func_200(iParam0, 1.504633E-36f) && ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_21))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(Global_1051832.f_92[iParam0 /*75*/].f_21);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24))
	{
		NETWORK::_NETWORK_SPAWN_CONFIG_REMOVE_EXCLUSION_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
		if (func_199(iParam0, 524288))
		{
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_25))
	{
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
		if (func_199(iParam0, 524288))
		{
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_25);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_27))
	{
		if (func_199(iParam0, 524288))
		{
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_27);
		}
	}
	if (func_200(iParam0, 16384) && !bVar0)
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
		func_201(iParam0, 16384);
	}
	Global_1051832.f_92[iParam0 /*75*/] = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_3 = { 0f, 0f, 0f };
	Global_1051832.f_92[iParam0 /*75*/].f_48 = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_73 = 1;
	Global_1915643.f_3[iParam0 /*447*/].f_16 = 0;
	iVar3 = func_132(iParam0);
	if (iVar3 >= 15)
	{
		Global_1915643.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			func_182(Global_1051832.f_92[iParam0 /*75*/].f_31[iVar2]);
			Global_1051832.f_92[iParam0 /*75*/].f_31[iVar2] = 0;
			iVar2++;
		}
		Global_1051832.f_92[iParam0 /*75*/].f_47 = 0;
	}
	func_202(iParam0);
	if (func_199(iParam0, 262144))
	{
		Global_1051832.f_92[iParam0 /*75*/].f_49 = 262144;
	}
	else
	{
		func_203(iParam0);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24) && func_204(iParam0, 2))
	{
		VOLUME::_SET_VOLUME_RELATIONSHIP(Global_1051832.f_92[iParam0 /*75*/].f_24, 1.526336E-16f);
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	}
	Global_1051832.f_92[iParam0 /*75*/].f_50 &= 8;
	Global_1051832.f_92[iParam0 /*75*/].f_1 &= 2113536;
	func_205(iParam0);
	Global_1051832.f_92[iParam0 /*75*/].f_18 = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_2 = -1;
}

int func_128(int iParam0)
{
	if (!func_177(iParam0))
	{
		return 0;
	}
	if (Global_1051832.f_4492[iParam0] == 0)
	{
		Global_1051832.f_4492[iParam0] = func_206(iParam0);
	}
	return Global_1051832.f_4492[iParam0];
}

void func_129(int iParam0, float fParam1)
{
	if (!func_200(iParam0, fParam1))
	{
	}
	Global_1051832.f_92[iParam0 /*75*/].f_1 = (Global_1051832.f_92[iParam0 /*75*/].f_1 || fParam1);
}

void func_130(int iParam0)
{
	Global_1051832[Global_1051832.f_41] = iParam0;
	Global_1051832.f_41++;
	if (Global_1051832.f_41 >= 40)
	{
		Global_1051832.f_41 = (40 - 1);
	}
}

bool func_131(struct<2> Param0)
{
	return func_207(Param0, 9, 12);
}

int func_132(int iParam0)
{
	return Global_1051832.f_92[iParam0 /*75*/].f_47;
}

int func_133(int iParam0, bool bParam1, bool bParam2)
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

bool func_134(int iParam0)
{
	if (func_208(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

bool func_135(int iParam0)
{
	func_133(iParam0, 0, 0);
	if (func_134(iParam0))
	{
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 0;
	}
	return false;
}

void func_136(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_133(iParam0, 0, 0);
	if (func_134(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_209(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_210(iParam0, 1);
			}
			else
			{
				func_211(iParam0, 1);
			}
		}
		else
		{
			func_212(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(iParam0, true);
		}
	}
	else if (func_213())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

bool func_137(int iParam0, bool bParam1)
{
	if (func_45() != -1)
	{
		return false;
	}
	if (!func_99(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_138(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_140(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_138(iParam0));
}

int func_138(int iParam0)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	return Global_1893799[iParam0 /*3*/].f_1;
}

bool func_139(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

int func_140(int iParam0)
{
	int iVar0;

	iVar0 = func_138(iParam0);
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

bool func_141(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

bool func_142(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_214(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

bool func_143(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "StableOwnedHorse"))
	{
		return true;
	}
	return false;
}

void func_144(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	DECORATOR::DECOR_SET_INT(iParam0, "StableOwnedHorse", iParam1);
}

bool func_145()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_4;
}

bool func_146(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 39) && !func_215())
	{
		return true;
	}
	if (iParam0 == 66)
	{
		return true;
	}
	return false;
}

bool func_147()
{
	if (Global_13)
	{
		return false;
	}
	if (!func_216())
	{
		return false;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939089.f_75.f_55))
	{
		return false;
	}
	if (func_217(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_148(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, var uParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1893611.f_162)))
	{
		sVar0 = func_218(Global_1893611.f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = func_220(func_219(Global_34));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_221(iParam0) || func_222(44))
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

bool func_149(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_150(int iParam0)
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

int func_151(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	var uVar3;

	if (!func_149(iParam0))
	{
		return -1;
	}
	if (Global_1572887.f_14 == -1)
	{
		return Global_38.f_198[iParam0 /*12*/];
	}
	iVar0 = 0;
	Var1 = { func_223(PLAYER::PLAYER_ID()) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&Var1, &uVar3);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1072759.f_21262[iVar0 /*12*/] = uVar3;
		iVar0++;
	}
	return Global_1072759.f_21262[iParam0 /*12*/];
}

int func_152(int iParam0)
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

char* func_153(int iParam0)
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

bool func_154(int iParam0, int iParam1)
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

bool func_155(int iParam0, int iParam1)
{
	if (!func_149(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_14 == -1)
	{
		return (Global_38.f_198[iParam0 /*12*/].f_5 && iParam1) != 0;
	}
	return (Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1) != 0;
}

int func_156()
{
	return Global_1902565;
}

int func_157(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_158(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

float func_159(float fParam0)
{
	return ((fParam0 * 1072064102) + 1107296256);
}

char* func_160(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_224(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_161(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
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

bool func_162(int iParam0)
{
	if (func_221(iParam0))
	{
		if (!func_222(44))
		{
			return false;
		}
	}
	return true;
}

void func_163(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_164(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

void func_165(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_166(int iParam0)
{
	func_225(Global_1939946.f_5[iParam0 /*11*/].f_6, 1);
	func_226(Global_1939946.f_5[iParam0 /*11*/].f_6, 0);
	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1939946.f_5[iParam0 /*11*/].f_8))
	{
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1939946.f_5[iParam0 /*11*/].f_8);
	}
	func_227(iParam0, 8192);
	func_227(iParam0, 32768);
	func_227(iParam0, 524288);
	func_227(iParam0, 1048576);
	Global_1939946.f_5[iParam0 /*11*/].f_10 = 0;
	Global_1939946.f_5[Global_1939946 /*11*/].f_9 = 0;
	Global_1939946.f_5[iParam0 /*11*/] = 0;
	Global_1939946.f_5[iParam0 /*11*/].f_1 = { 0f, 0f, 0f };
	Global_1939946.f_5[iParam0 /*11*/].f_4 = 0;
	Global_1939946.f_5[iParam0 /*11*/].f_5 = -1;
	Global_1939946.f_5[iParam0 /*11*/].f_6 = -1;
	Global_1939946.f_5[iParam0 /*11*/].f_7 = 0;
}

bool func_167(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return false;
	}
	if (!func_99(iParam0))
	{
		return false;
	}
	return (Global_9899[iParam0 /*2*/] && iParam1) != 0;
}

int func_168(int iParam0, bool bParam1)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	if (!func_167(iParam0, 2))
	{
		return 0;
	}
	if (func_173(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_138(iParam0)))
	{
		return 1;
	}
	if (func_167(iParam0, 1) && !bParam1)
	{
		func_228(iParam0, 128);
		return 1;
	}
	func_175(iParam0, 129);
	func_229(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_138(iParam0));
	func_174(iParam0, 0);
	return 1;
}

int func_169(int iParam0)
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

int func_170(int iParam0)
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

void func_171()
{
	int iVar0;
	var uVar1;

	func_203(30);
	func_230(30);
	func_231(30);
	func_205(30);
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

void func_172()
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
	func_205(32);
}

int func_173(int iParam0)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	return Global_1893799[iParam0 /*3*/];
}

void func_174(int iParam0, int iParam1)
{
	if (!func_99(iParam0))
	{
		return;
	}
	Global_1893799[iParam0 /*3*/].f_1 = iParam1;
}

void func_175(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return;
	}
	if (!func_99(iParam0))
	{
		return;
	}
	Global_9899[iParam0 /*2*/] = (Global_9899[iParam0 /*2*/] - (Global_9899[iParam0 /*2*/] && iParam1));
}

bool func_176(int iParam0)
{
	if (!func_99(iParam0))
	{
		return false;
	}
	if (!func_167(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_177(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

bool func_178(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_179(int iParam0)
{
	if (!func_99(iParam0))
	{
		return false;
	}
	return Global_1893799[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_180(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_99(iParam0))
	{
		return;
	}
	if (!func_167(iParam0, 1))
	{
		return;
	}
	if (!func_167(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_179(iParam0)) && func_232(iParam0))
	{
		return;
	}
	func_175(iParam0, 1);
	func_229(iParam0);
	if (func_233(func_173(iParam0)))
	{
		iVar0 = func_138(iParam0);
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
		func_175(iParam0, 16);
	}
	if (func_167(iParam0, 128) && !bParam3)
	{
		func_168(iParam0, 0);
	}
}

void func_181(int iParam0, bool bParam1)
{
	if (!func_177(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_184(iParam0, 1024))
		{
			func_185(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_184(iParam0, 1024))
	{
		func_234(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_235(iParam0);
}

void func_182(int iParam0)
{
	if (func_134(iParam0) && func_236())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_183(int iParam0)
{
	Global_1915643.f_3[iParam0 /*447*/].f_6 = 0;
}

bool func_184(int iParam0, int iParam1)
{
	if (!func_177(iParam0))
	{
		return false;
	}
	return (Global_1915643.f_17884[iParam0] && iParam1) != 0;
}

void func_185(int iParam0, int iParam1)
{
	if (!func_177(iParam0))
	{
		return;
	}
	Global_1915643.f_17884[iParam0] = (Global_1915643.f_17884[iParam0] || iParam1);
}

bool func_186(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

int func_187(int iParam0)
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

bool func_188(struct<2> Param0)
{
	return func_207(Param0, 5, 8);
}

bool func_189(int iParam0)
{
	return func_237(1, iParam0);
}

int func_190(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102813.f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (Global_1295619.f_17[iParam0])
	{
		return Global_1101558[iParam0 /*38*/].f_1;
	}
	return 26;
}

int func_191(int iParam0)
{
	if (func_238(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_192(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_239(iParam0);
	if (!func_240(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_241(128) && !func_242(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_243() == 4)
	{
		func_191(18);
	}
	func_244(1024);
}

int func_193(int iParam0)
{
	if (func_245(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_194(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_195(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_196(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (VOLUME::DOES_VOLUME_EXIST(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_197(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

bool func_198(int iParam0)
{
	if (((((iParam0 == 28 || iParam0 == 29) || iParam0 == 38) || iParam0 == 27) || iParam0 == 15) || iParam0 == 39)
	{
		return true;
	}
	if (func_199(iParam0, 65536))
	{
		return true;
	}
	return false;
}

bool func_199(int iParam0, int iParam1)
{
	return (Global_1051832.f_92[iParam0 /*75*/].f_49 && iParam1) != 0;
}

bool func_200(int iParam0, float fParam1)
{
	return (Global_1051832.f_92[iParam0 /*75*/].f_1 && fParam1) != 0;
}

void func_201(int iParam0, float fParam1)
{
	if (func_200(iParam0, fParam1))
	{
	}
	Global_1051832.f_92[iParam0 /*75*/].f_1 = (Global_1051832.f_92[iParam0 /*75*/].f_1 - (Global_1051832.f_92[iParam0 /*75*/].f_1 && fParam1));
}

void func_202(int iParam0)
{
}

void func_203(int iParam0)
{
	Global_1051832.f_92[iParam0 /*75*/].f_49 = 0;
}

bool func_204(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return func_178(Global_1051832.f_92[iParam0 /*75*/].f_50, iParam1);
}

void func_205(int iParam0)
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

int func_206(int iParam0)
{
	vector3 vVar0;

	if (DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1149417.f_7) && !func_247(12, func_246(iParam0), &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_207(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_248(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_249(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_208(int iParam0)
{
	return iParam0 != 0;
}

void func_209(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_134(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_210(int iParam0, bool bParam1)
{
	if (func_134(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_211(int iParam0, bool bParam1)
{
	if (func_134(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_212(int iParam0, bool bParam1)
{
	if (func_134(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_213()
{
	return true;
}

int func_214(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1902883[iVar0 /*43*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_215()
{
	return false;
}

bool func_216()
{
	struct<2> Var0;
	struct<2> Var2;

	if (func_45() != 0)
	{
		return true;
	}
	if (func_250())
	{
		return false;
	}
	if (HUD::_0x7EC0D68233E391AC(6) == 1)
	{
		return true;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_251() };
	if (func_248(Var0))
	{
		return false;
	}
	Var2 = { func_252() };
	if (func_248(Var2))
	{
		return false;
	}
	return true;
}

bool func_217(int iParam0, bool bParam1, bool bParam2)
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
		if (func_250())
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
	if (iParam0 == 0 && func_248(func_57(0)))
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

char* func_218(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_219(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_253(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_220(int iParam0)
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

bool func_221(int iParam0)
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

bool func_222(int iParam0)
{
	if (!func_254(iParam0))
	{
		return false;
	}
	return func_255(iParam0);
}

struct<2> func_223(int iParam0)
{
	struct<2> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

char* func_224(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_225(int iParam0, bool bParam1)
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

void func_226(int iParam0, bool bParam1)
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

void func_227(int iParam0, int iParam1)
{
	func_256(&(Global_1939946.f_5[iParam0 /*11*/].f_7), iParam1);
}

void func_228(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return;
	}
	if (!func_99(iParam0))
	{
		return;
	}
	Global_9899[iParam0 /*2*/] = (Global_9899[iParam0 /*2*/] || iParam1);
}

void func_229(int iParam0)
{
	int iVar0;

	if (!func_99(iParam0))
	{
		return;
	}
	iVar0 = func_140(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1893799[iParam0 /*3*/].f_2 = 0;
}

void func_230(int iParam0)
{
	Global_1051832.f_92[iParam0 /*75*/].f_50 = 0;
}

void func_231(int iParam0)
{
	Global_1051832.f_92[iParam0 /*75*/].f_1 = 0;
}

bool func_232(int iParam0)
{
	if (!func_99(iParam0))
	{
		return false;
	}
	return SCRIPTS::DOES_THREAD_EXIST(Global_1893799[iParam0 /*3*/].f_2);
}

bool func_233(int iParam0)
{
	return iParam0 != 0;
}

void func_234(int iParam0, int iParam1)
{
	if (!func_177(iParam0))
	{
		return;
	}
	Global_1915643.f_17884[iParam0] = (Global_1915643.f_17884[iParam0] - (Global_1915643.f_17884[iParam0] && iParam1));
}

void func_235(int iParam0)
{
	func_257(func_187(iParam0));
}

bool func_236()
{
	return true;
}

bool func_237(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_258(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_259())
	{
		return func_258(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_258(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_238(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::CLEAR_BIT(uParam0[iVar0], iVar1);
	return bVar2;
}

void func_239(int iParam0)
{
	Global_1102813.f_26.f_12 = iParam0;
}

bool func_240(int iParam0)
{
	return (Global_1102813.f_26.f_7 && iParam0) != 0;
}

bool func_241(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) != 0;
}

bool func_242(int iParam0)
{
	return (Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1) == Global_1106895[iParam0 /*2*/].f_1;
}

int func_243()
{
	if (Global_1102813 <= 5)
	{
		return Global_1102813;
	}
	if (Global_1102813 <= 22)
	{
		return 4;
	}
	if (Global_1102813 <= 25)
	{
		return 3;
	}
	return 26;
}

void func_244(int iParam0)
{
	if (func_260(iParam0))
	{
		return;
	}
	Global_1102813.f_26.f_9 = (Global_1102813.f_26.f_9 || iParam0);
}

bool func_245(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
	return !bVar2;
}

int func_246(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return -6.678279E+09f;
		case 6:
			return 5.092616E-23f;
		case 7:
			return 0.08901188f;
		case 8:
			return -1958.136f;
		case 19:
			return 1.757544E+13f;
		case 13:
			return 3.930592E-06f;
		case 14:
			return 5.223587E-29f;
		case 15:
			return -1.052651E+23f;
		case 12:
			return -5.816004E-34f;
		case 122:
			return 6.001663E+28f;
		case 123:
			return -5.778385E+09f;
		case 5:
			return 7.941624E+18f;
		case 9:
			return -5.145404E-15f;
		case 10:
			return -4.620579E+31f;
		case 11:
			return -2023770f;
		case 16:
			return 2.931569E-07f;
		case 17:
			return 1.092197E+32f;
		case 18:
			return 2.132098E+27f;
		case 23:
			return 2.946846E-31f;
		case 24:
			return 3.221863E-32f;
		case 25:
			return -1.071896E-20f;
		case 22:
			return 2836841f;
		case 26:
			return -1.583762E+32f;
		case 45:
			return -559756.6f;
		case 48:
			return 1.891847E-07f;
		case 46:
			return 3.209415E-27f;
		case 49:
			return -0.001697428f;
		case 42:
			return 3.415819E-32f;
		case 43:
			return 2.619793E-33f;
		case 44:
			return 0.0001756163f;
		case 50:
			return -1.314186E+17f;
		case 51:
			return -13861.96f;
		case 52:
			return 7.656175E-30f;
		case 53:
			return -8.745837E+37f;
		case 63:
			return -1.646639E+21f;
		case 56:
			return 1.11115E+13f;
		case 57:
			return -2.158932E+24f;
		case 60:
			return -2.074173E-38f;
		case 124:
			return 7.61699E+14f;
		case 125:
			return -1.392405E-19f;
		case 54:
			return 6.589171E+22f;
		case 55:
			return 1.156345E-20f;
		case 59:
			return -1.659592E-06f;
		case 58:
			return 3.946506E-35f;
		case 61:
			return -5.605502E-10f;
		case 62:
			return -3.081603E-38f;
		case 27:
			return -1.891411E+11f;
		case 28:
			return -4.238571E-26f;
		case 33:
			return 0.001610436f;
		case 31:
			return 1.055256E-27f;
		case 34:
			return 2.704235E-11f;
		case 35:
			return 1.446313E-28f;
		case 30:
			return 1.328889E-24f;
		case 39:
			return -1.990651E-06f;
		case 126:
			return 2.271166E+18f;
		case 29:
			return -4.124625E-13f;
		case 36:
			return 5.755767E-28f;
		case 37:
			return -6.40899E+13f;
		case 38:
			return -1430.345f;
		case 68:
			return 2.766683E+36f;
		case 69:
			return 7.8227E-06f;
		case 70:
			return 5.290563E+31f;
		case 71:
			return 1.985556E-17f;
		case 74:
			return -6.774944E+25f;
		case 127:
			return -3.091904E+32f;
		case 75:
			return -2.34763E-33f;
		case 72:
			return -9.884961E+18f;
		case 73:
			return 2.526965E+12f;
		case 83:
			return 9.748861E-16f;
		case 84:
			return -1.269082E+11f;
		case 85:
			return 4.319876E+13f;
		case 78:
			return 1.85519E-13f;
		case 87:
			return 1.119544E-12f;
		case 86:
			return 2.286067E-24f;
		case 82:
			return -1.186129E-24f;
		case 88:
			return 3.414019E+18f;
		case 81:
			return 139.4352f;
		case 91:
			return 7.167645E+19f;
		case 90:
			return -9.661501E+22f;
		case 120:
			return 3.526101E+21f;
		case 121:
			return 7.501371E-10f;
		case 77:
			return 2980.293f;
		case 79:
			return -1.801417E+24f;
		case 80:
			return -2.879967E-28f;
		case 89:
			return 1.105674E-10f;
		case 41:
			return 2.930603E+16f;
		case 98:
			return -3.188065E+25f;
		case 97:
			return 7.757542E-31f;
		case 93:
			return 2.462378E+13f;
		case 96:
			return -6.893608E-07f;
		case 94:
			return 3.550023E+16f;
		case 95:
			return 4.790249E-22f;
		case 128:
			return 8.133306E-16f;
		case 129:
			return -3.93835E-33f;
		case 0:
			return 80.73424f;
		case 1:
			return 1.347958E-16f;
		case 2:
			return -2.773782E-31f;
		case 101:
			return 1.558923E-35f;
		case 99:
			return 2.294131E-19f;
		case 100:
			return 1.213295E+29f;
		case 119:
			return -1.091912E-28f;
		case 133:
			return -1.264382f;
		case 152:
			return -3.515305E-20f;
		case 176:
			return 1.64784E+23f;
		case 177:
			return 5.003018f;
		case 178:
			return -2.562252E-20f;
		case 153:
			return 41.27814f;
		case 154:
			return 1.567787E-33f;
		case 147:
			return 4.415405E-32f;
		case 135:
			return 2.550329E+22f;
		case 136:
			return 2.77422E-16f;
		case 137:
			return 5.798392E+08f;
		case 138:
			return -1.004019E-28f;
		case 139:
			return -2.627055E+13f;
		case 140:
			return -4.514173E+36f;
		case 141:
			return -5.76357E-22f;
		case 142:
			return joaat("SHOP_GRZ_TRAVELLING_SALESMAN");
		case 143:
			return -4.480066E+07f;
		case 144:
			return 3.128354E+36f;
		case 145:
			return 4.82799E-20f;
		case 146:
			return 6.391131E+21f;
		case 47:
			return 0.03729688f;
		case 32:
			return 0.03729688f;
		case 21:
			return 0.03729688f;
		case 115:
			return 0.03729688f;
		case 92:
			return 0.03729688f;
		case 131:
			return 0.03729688f;
		case 20:
			return 0.03729688f;
		case 134:
			return -2.455795E+11f;
		case 179:
			return 2766996f;
		case 155:
			return -1.587301E+29f;
		case 156:
			return -4.606836E+28f;
		case 157:
			return 3.452008E-36f;
		case 158:
			return NaNf;
		case 67:
			return 4.921621E+16f;
		case 159:
			return 99.39199f;
		case 160:
			return -6.702547E-32f;
		case 161:
			return 6.240672E+34f;
		case 162:
			return 6.10996E-29f;
		case 65:
			return 4.325683E+11f;
		case 164:
			return 2.713322E+14f;
		case 165:
			return -14.89222f;
		case 166:
			return 9475.513f;
		case 167:
			return 5.074196E+37f;
		case 64:
			return 2.039205E-07f;
		case 168:
			return -3.945631E+20f;
		case 169:
			return -2.244019E+15f;
		case 170:
			return 1.756121E+18f;
		case 171:
			return 4.81626E+24f;
		case 172:
			return -9.719926E-38f;
		case 173:
			return 6.080284E+09f;
		case 174:
			return -2.116756E+30f;
		case 175:
			return 9.219983E-29f;
		case 66:
			return -2.27383E-36f;
		case 163:
			return -2.288724E+21f;
		case 108:
			return -2.075817E-25f;
		case 110:
			return -1.942438E-14f;
		case 109:
			return -4.915344E+09f;
		case 111:
			return 9.586019E+08f;
		case 112:
			return 9.236639E-23f;
		case 113:
			return -6.715591E-15f;
		case 114:
			return -0.01589598f;
		case 102:
			return -1.566179E-15f;
		case 105:
			return -1.044305E-38f;
		case 106:
			return NaNf;
		case 103:
			return -1.510513E-27f;
		case 104:
			return 3.068801E-32f;
		case 107:
			return -1.991238E-18f;
		case 116:
			return 6.552451f;
		case 130:
			return -1.047896E+19f;
		case 117:
			return 4.402083E-23f;
		case 118:
			return 1.206669E+09f;
		case 3:
			return 3.046649E-19f;
		case 4:
			return 3.120933E-30f;
		case 40:
			return -8.109014E+27f;
		case 76:
			return 0.009586659f;
		case 148:
			return 1852492f;
		case 149:
			return 2.747603E+32f;
		case 150:
			return 1.447315E-27f;
		case 151:
			return 6.372948E+12f;
		default:
			break;
	}
	return 0;
}

bool func_247(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (func_261(iParam0, iParam1, &uVar0))
	{
		func_262(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_248(struct<2> Param0)
{
	if (!func_263(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_264(Param0))
	{
		return false;
	}
	return true;
}

int func_249(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_265(Param0);
	}
	return -1;
}

bool func_250()
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
	if (!func_248(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_251()
{
	return Global_1051268;
}

struct<2> func_252()
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

bool func_253(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	var uVar6;

	func_266(iParam3, &vVar0, &Var3, &uVar6);
	if (func_267(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

bool func_254(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_255(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_38.f_3651[iVar1], iVar2);
}

void func_256(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_257(int iParam0)
{
	Global_1915643.f_18247 = iParam0;
}

bool func_258(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_259()
{
	return Global_1102813.f_3672;
}

bool func_260(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) == iParam0;
}

bool func_261(int iParam0, int iParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = 1.841357E+10f;
	bParam2->f_3 = func_268(iParam0);
	bParam2->f_4 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_262(bool bParam0, int iParam1, var uParam2)
{
	var uVar0;

	*uParam2 = iParam1;
	bParam0->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam0);
	bParam0->f_2 = -9.223824E-39f;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, bParam0))
	{
		uParam2->f_2 = uVar0;
	}
	bParam0->f_2 = -9.223824E-39f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_11), bParam0);
	bParam0->f_2 = 1.375422E+08f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_19), bParam0);
	bParam0->f_2 = 1165207f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_3), bParam0);
}

bool func_263(int iParam0)
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

int func_264(int iParam0)
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

int func_265(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_269(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

void func_266(int iParam0, var uParam1, var uParam2, var uParam3)
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

bool func_267(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
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

int func_268(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -4.585506E-21f;
			break;
		case -3:
			iVar0 = 2.741749E+08f;
			break;
		case 1:
			iVar0 = -6.049365E-28f;
			break;
		case -2:
			iVar0 = 1.540051E+08f;
			break;
		case 2:
			iVar0 = -2.882769E-19f;
			break;
		case 3:
			iVar0 = 3.67675E+19f;
			break;
		case 4:
			iVar0 = 2.694446E+36f;
			break;
		case 5:
			iVar0 = 32.15498f;
			break;
		case 6:
			iVar0 = -8.391956E-09f;
			break;
		case 7:
			iVar0 = 61686.1f;
			break;
		case 8:
			iVar0 = 5.182694E+24f;
			break;
		case 9:
			iVar0 = -5.243371E-15f;
			break;
		case 10:
			iVar0 = 5.863398E+29f;
			break;
		case 11:
			iVar0 = 6.767836E+30f;
			break;
		case 12:
			iVar0 = -1.287736E+17f;
			break;
		case 13:
			iVar0 = 5713673f;
			break;
		case 14:
			iVar0 = -3.715131E-31f;
			break;
		case 15:
			iVar0 = 3.998251E+09f;
			break;
		case 16:
			iVar0 = 2.816196E+24f;
			break;
		case 17:
			iVar0 = 3.266747E+28f;
			break;
		case 18:
			iVar0 = 1347.951f;
			break;
		case 19:
			iVar0 = -4.200322E+27f;
			break;
	}
	return iVar0;
}

bool func_269(struct<2> Param0, bool bParam2)
{
	if (!func_248(Param0))
	{
		return false;
	}
	func_270(bParam2);
	switch (Param0)
	{
		case 2:
			MISC::COPY_SCRIPT_STRUCT(bParam2, &(Global_1072759.f_573[Param0.f_1 /*3*/]), 3);
			return true;
		case 3:
			MISC::COPY_SCRIPT_STRUCT(bParam2, &(Global_1072759.f_573.f_602[Param0.f_1 /*3*/]), 3);
			return true;
		case 4:
			MISC::COPY_SCRIPT_STRUCT(bParam2, &(Global_1072759.f_573.f_2104[Param0.f_1 /*3*/]), 3);
			return true;
		case 5:
			MISC::COPY_SCRIPT_STRUCT(bParam2, &(Global_1072759.f_573.f_12606[Param0.f_1 /*3*/]), 3);
			return true;
		case 6:
			MISC::COPY_SCRIPT_STRUCT(bParam2, &(Global_1072759.f_573.f_12908[Param0.f_1 /*3*/]), 3);
			return true;
		case 7:
			MISC::COPY_SCRIPT_STRUCT(bParam2, &(Global_1072759.f_573.f_15910[Param0.f_1 /*3*/]), 3);
			return true;
		case 8:
			MISC::COPY_SCRIPT_STRUCT(bParam2, &(Global_1072759.f_573.f_16512[Param0.f_1 /*3*/]), 3);
			return true;
		default:
			break;
	}
	return false;
}

void func_270(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

