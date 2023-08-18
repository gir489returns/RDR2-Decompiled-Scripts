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
	var uLocal_27 = 0;
	var uLocal_28 = 1;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = -1;
	var uLocal_36 = -1;
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
	var uLocal_57 = 8;
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
	var uLocal_68 = 8;
	var uLocal_69 = 0;
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
	var uScriptParam_0 = -1;
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (func_1(&uLocal_19))
	{
		func_2(&uLocal_19, &uScriptParam_0);
		BUILTIN::WAIT(0);
	}
	func_3(&uLocal_19, &uScriptParam_0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_1(var uParam0)
{
	struct<2> Var0;

	if (func_4(0, 0))
	{
		return false;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	if (func_5(Var0, 0, 0))
	{
		return false;
	}
	if (uParam0->f_2.f_5 & 1 != 0)
	{
		return false;
	}
	return true;
}

void func_2(var uParam0, var uParam1)
{
	func_6(uParam0);
	switch (*uParam0)
	{
		case 0:
			func_7(uParam0, uParam1);
			break;
		case 1:
			func_8(uParam0, uParam1);
			break;
		case 2:
			func_9(uParam0, uParam1);
			break;
		case 3:
			func_10(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3(var uParam0, var uParam1)
{
	func_11(uParam0, uParam1);
	func_12(&(uParam0->f_37));
	func_13(&(uParam0->f_37));
	func_14(&(uParam0->f_38));
	func_15(*uParam1, &(uParam0->f_49));
	func_16();
}

bool func_4(bool bParam0, bool bParam1)
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

bool func_5(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}
	if (func_17(Global_1051268) && !func_18(Global_1051268, Param0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}
	if (iParam2 != 0 && func_19(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_20(iParam3, 255))
	{
		Global_1072759.f_28307 = 4;
		return true;
	}
	if (Global_263042[Global_1295619 /*65*/] > 2)
	{
		Global_1072759.f_28307 = 5;
		return true;
	}
	if (Global_262155 >= 1)
	{
		Global_1072759.f_28307 = 6;
		return true;
	}
	if (func_21())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}
	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_17(Global_1051268))
		{
			Global_1072759.f_28307 = 8;
			return true;
		}
	}
	if (Global_265213.f_122646 != 0 && SCRIPTS::DOES_THREAD_EXIST(Global_265213.f_122646))
	{
		Global_1072759.f_28307 = 9;
		return true;
	}
	Global_1072759.f_28307 = 0;
	return false;
}

void func_6(var uParam0)
{
	int iVar0;
	float fVar1;

	if ((uParam0->f_2.f_5 && 2f) == 0)
	{
		return;
	}
	if (uParam0->f_2.f_5 & 1 != 0)
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	fVar1 = func_22(Global_34, uParam0->f_2);
	if (uParam0->f_2.f_5 & 2 != 0)
	{
		if (fVar1 <= (uParam0->f_2.f_3 + 1097859072))
		{
			uParam0->f_2.f_5 = (uParam0->f_2.f_5 - uParam0->f_2.f_5 & 2);
		}
		else if ((iVar0 - uParam0->f_2.f_4) >= 5000)
		{
			uParam0->f_2.f_5 |= 1;
		}
	}
	else if (fVar1 > (uParam0->f_2.f_3 + 1097859072))
	{
		uParam0->f_2.f_4 = iVar0;
		uParam0->f_2.f_5 |= 2;
	}
}

void func_7(var uParam0, var uParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (!func_24(func_23(*uParam1), &(uParam0->f_2)))
			{
				return;
			}
			func_25(uParam0, uParam1, 1);
			break;
		case 1:
			if (!func_26(*uParam1, &(uParam0->f_49)))
			{
				return;
			}
			func_25(uParam0, uParam1, 2);
			break;
		case 2:
			if (!func_28(func_27(*uParam1), &(uParam0->f_14)))
			{
				return;
			}
			func_25(uParam0, uParam1, 3);
			break;
		case 3:
			uParam0->f_38.f_10 = func_29(*uParam1);
			func_25(uParam0, uParam1, 4);
			break;
		case 4:
			func_30(uParam0, uParam1, 1);
			break;
		default:
			break;
	}
}

void func_8(var uParam0, var uParam1)
{
	func_30(uParam0, uParam1, 2);
}

void func_9(var uParam0, var uParam1)
{
	if (!func_31(*uParam1, &(uParam0->f_49)))
	{
		return;
	}
	func_30(uParam0, uParam1, 3);
}

void func_10(var uParam0, var uParam1)
{
	int iVar0;

	func_32(&(uParam0->f_33));
	func_33(*uParam1, &(uParam0->f_38));
	func_34(uParam0, uParam1);
	if (func_35(&(uParam0->f_16), &iVar0))
	{
		if (iVar0 == -2.143063E-13f)
		{
			func_36(MISC::GET_GAME_TIMER());
		}
	}
}

int func_11(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 0)
	{
		iVar1 = func_37(iVar0, 1);
		if (func_38(uParam0, uParam1, iVar1))
		{
		}
		iVar0++;
	}
	uParam0->f_8.f_3 = (uParam0->f_8.f_3 - uParam0->f_8.f_3 & 1);
	return 1;
}

void func_12(var uParam0)
{
	if (!func_39(uParam0, 1))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
	func_40(uParam0, 1);
}

void func_13(var uParam0)
{
	if (!func_39(uParam0, 2))
	{
		return;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	func_40(uParam0, 2);
}

void func_14(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_10 - 1))
	{
		func_41(uParam0, iVar0);
		iVar0++;
	}
}

void func_15(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam1->f_17 - 1))
	{
		func_42(iParam0, uParam1, iVar0);
		iVar0++;
	}
}

void func_16()
{
	AUDIO::_RELEASE_SOUNDSET("Animal_Control_Screen_Overlay_Sounds");
}

bool func_17(struct<2> Param0)
{
	if (!func_43(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_44(Param0))
	{
		return false;
	}
	return true;
}

bool func_18(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_19(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_20(int iParam0, int iParam1)
{
	if (!Global_1072759.f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (Global_1206939[iParam1 /*12*/] && iParam0) != 0;
}

bool func_21()
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
	if (!func_17(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

float func_22(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_23(int iParam0)
{
	return Global_1300340.f_1[iParam0 /*10*/].f_4;
}

bool func_24(int iParam0, var uParam1)
{
	struct<5> Var0;

	if (!func_45(&Var0))
	{
		return false;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 14, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 16, iParam0, 0, 1))
	{
		return false;
	}
	*uParam1 = { func_47(Var0) };
	uParam1->f_3 = func_48(Var0);
	uParam1->f_5 = (uParam1->f_5 || 2f);
	return true;
}

void func_25(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_1 = iParam2;
}

bool func_26(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	uParam1->f_17 = func_49(iParam0);
	iVar0 = 0;
	while (iVar0 <= (uParam1->f_17 - 1))
	{
		iVar1 = func_50(iParam0, iVar0);
		STREAMING::REQUEST_MODEL(iVar1, false);
		if (iVar1 != 0)
		{
			func_51(uParam1, iVar0, 1);
		}
		iVar0++;
	}
	return true;
}

int func_27(int iParam0)
{
	return Global_1300340.f_1[iParam0 /*10*/].f_7;
}

bool func_28(int iParam0, var uParam1)
{
	struct<5> Var0;

	if (!func_45(&Var0))
	{
		return false;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 37, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 38, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 45, 0, 0, 1))
	{
		return false;
	}
	*uParam1 = func_52(Var0);
	uParam1->f_1 = func_53(Var0);
	return true;
}

int func_29(int iParam0)
{
	var uVar0;

	if (!func_45(&uVar0))
	{
		return 0;
	}
	if (!func_46(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 14, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 15, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 48, 0, 0, 0))
	{
		return 0;
	}
	return func_54(&uVar0, 9);
}

void func_30(var uParam0, var uParam1, int iParam2)
{
	*uParam0 = iParam2;
}

bool func_31(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (uParam1->f_17 <= 0)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= (uParam1->f_17 - 1))
	{
		iVar1 = func_55(iParam0, iVar0, uParam1);
		if (iVar1 == 2)
		{
		}
		else
		{
			iVar0++;
		}
	}
	return uParam1->f_17 == uParam1->f_18;
}

void func_32(var uParam0)
{
	if (uParam0->f_3 == 0)
	{
		func_56(uParam0);
	}
	else
	{
		func_57(uParam0);
	}
}

void func_33(int iParam0, var uParam1)
{
	int iVar0;

	if (uParam1->f_10 == uParam1->f_9)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (uParam1->f_10 - 1))
	{
		func_58(iParam0, uParam1, iVar0);
		iVar0++;
	}
}

void func_34(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	switch (uParam0->f_8)
	{
		case 0:
			if (func_59(uParam0, uParam1))
			{
				func_60(uParam0, uParam1, 1);
			}
			break;
		case 1:
			iVar1 = func_61(uParam0);
			iVar0 = func_62(uParam0, uParam1, iVar1);
			if (func_63(iVar0))
			{
				func_64(uParam0, 3.241887E-29f);
			}
			else
			{
				func_65(uParam0, 3.241887E-29f);
			}
			if (func_66(iVar0))
			{
				func_67(uParam0, 3.241887E-29f);
			}
			else
			{
				if (iVar0 == 16)
				{
					if (uParam0->f_8.f_3 & 4 != 0)
					{
					}
					else
					{
						func_68(&(uParam0->f_33), 64);
					}
				}
				func_69(uParam0, 3.241887E-29f);
			}
			if (func_70(uParam0, 3.241887E-29f))
			{
				func_60(uParam0, uParam1, 2);
				func_71();
				func_72(&(uParam0->f_37));
				func_73(&(uParam0->f_37));
				func_74(1);
				uParam0->f_8.f_3 |= 2;
				uParam0->f_8.f_4 = MISC::GET_GAME_TIMER();
				func_75(&(uParam0->f_33), 64);
				func_76(&(uParam0->f_33), 64);
			}
			break;
		case 2:
			func_65(uParam0, 3.241887E-29f);
			func_69(uParam0, 3.241887E-29f);
			func_77(uParam0, 3.241887E-29f);
			if (func_78(uParam0->f_14, 1, uParam0->f_14.f_1, 0))
			{
				func_79();
				func_80(uParam0->f_14, uParam0->f_14.f_1, 1, 0);
				func_74(2);
				uParam0->f_8.f_5 = MISC::GET_GAME_TIMER();
				func_60(uParam0, uParam1, 3);
			}
			else
			{
				func_82(&(uParam0->f_16), -5.94117E-27f, func_23(*uParam1), func_81(*uParam1));
				func_83(1);
				func_60(uParam0, uParam1, 7);
			}
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_8.f_5) < 200)
			{
			}
			else if (!func_84())
			{
			}
			else
			{
				func_60(uParam0, uParam1, 4);
				Jump @951; //curOff = 509
				func_82(&(uParam0->f_16), -2.143063E-13f, func_23(*uParam1), func_81(*uParam1));
				func_60(uParam0, uParam1, 5);
				Jump @951; //curOff = 549
				func_65(uParam0, 3.241887E-29f);
				func_69(uParam0, 3.241887E-29f);
				uParam0->f_8.f_3 = (uParam0->f_8.f_3 - uParam0->f_8.f_3 & 4);
				if (uParam0->f_16 != -1)
				{
					func_60(uParam0, uParam1, 6);
				}
				Jump @951; //curOff = 612
				func_65(uParam0, 3.241887E-29f);
				func_69(uParam0, 3.241887E-29f);
				if (uParam0->f_16 == -1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID())))
					{
						func_85();
					}
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID())))
					{
						func_86();
					}
					func_60(uParam0, uParam1, 9);
				}
				Jump @951; //curOff = 693
				func_65(uParam0, 3.241887E-29f);
				func_69(uParam0, 3.241887E-29f);
				uParam0->f_8.f_3 |= 4;
				if (uParam0->f_16 != -1)
				{
					func_68(&(uParam0->f_33), 1);
					func_60(uParam0, uParam1, 8);
				}
				Jump @951; //curOff = 759
				func_65(uParam0, 3.241887E-29f);
				func_69(uParam0, 3.241887E-29f);
				if (uParam0->f_16 == -1)
				{
					func_76(&(uParam0->f_33), 1);
					func_60(uParam0, uParam1, 11);
				}
				Jump @951; //curOff = 811
				func_65(uParam0, 3.241887E-29f);
				func_69(uParam0, 3.241887E-29f);
				func_87(*uParam1);
				func_60(uParam0, uParam1, 10);
				Jump @951; //curOff = 853
				func_65(uParam0, 3.241887E-29f);
				func_69(uParam0, 3.241887E-29f);
				if (func_88())
				{
					func_60(uParam0, uParam1, 11);
				}
				Jump @951; //curOff = 895
				func_65(uParam0, 3.241887E-29f);
				func_69(uParam0, 3.241887E-29f);
				func_12(&(uParam0->f_37));
				func_13(&(uParam0->f_37));
				func_60(uParam0, uParam1, 1);
			}
			default:
				break;
	}
}

bool func_35(bool bParam0, var uParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	*uParam1 = bParam0->f_5;
	while (bVar0)
	{
		bVar0 = false;
		switch (func_89(bParam0))
		{
			case -1:
				break;
			case 0:
				func_90(bParam0, 1);
				break;
			case 1:
				func_91(bParam0);
				break;
			case 2:
				func_92(bParam0);
				break;
			case 3:
				func_93(bParam0);
				break;
			case 4:
				func_94(bParam0);
				break;
			case 5:
				func_95(bParam0);
				break;
			case 6:
				func_96(bParam0);
				break;
			case 7:
				func_97(bParam0);
				break;
			case 8:
				func_98(bParam0);
				break;
			case 9:
				func_99(bParam0);
				break;
			case 10:
				func_100(bParam0);
				iVar1 = 1;
				func_100(bParam0);
				break;
			default:
				break;
		}
		bVar0 = func_101(bParam0);
	}
	return iVar1;
}

void func_36(int iParam0)
{
	Global_1300340.f_295 = iParam0;
}

int func_37(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 3.241887E-29f;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_38(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_102(iParam2, 1);
	if (!func_103(uParam0->f_8.f_1[iVar0]))
	{
		return false;
	}
	func_104(&(uParam0->f_8.f_1[iVar0]), 1, 1);
	return true;
}

bool func_39(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_40(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_41(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iParam1]))
	{
		return;
	}
	PLAYER::_UNREGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), (*uParam0)[iParam1]);
	PLAYER::_0xDC5E09D012D759C4((*uParam0)[iParam1], (*uParam0)[iParam1], 0);
	uParam0->f_9 = (uParam0->f_9 - 1);
	(*uParam0)[iParam1] = 0;
}

void func_42(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	switch ((uParam1[iParam2 /*2*/])->f_1)
	{
		case 0:
			break;
		case 1:
		case 2:
			iVar0 = func_50(iParam0, iParam2);
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iParam2 /*2*/]))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL((*uParam1)[iParam2 /*2*/]);
				OBJECT::DELETE_OBJECT(uParam1[iParam2 /*2*/]);
				(*uParam1)[iParam2 /*2*/] = 0;
				uParam1->f_18 = (uParam1->f_18 - 1);
			}
			else
			{
				iVar0 = func_50(iParam0, iParam2);
			}
			break;
		default:
			break;
	}
	if (iVar0 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	}
	func_51(uParam1, iParam2, 0);
}

bool func_43(int iParam0)
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

int func_44(int iParam0)
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

bool func_45(bool bParam0)
{
	var uVar0;

	MISC::COPY_SCRIPT_STRUCT(bParam0, &uVar0, 5);
	if (!func_105(1))
	{
		return false;
	}
	*bParam0 = Global_1072759.f_28418[51 /*4*/].f_3;
	return true;
}

bool func_46(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;

	bParam0->f_2 = iParam1;
	bParam0->f_3 = iParam2;
	bParam0->f_4 = iParam3;
	uVar0 = bParam0->f_1;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0))
	{
		bParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

Vector3 func_47(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_106(&uParam0, 62, 1);
}

var func_48(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_107(&uParam0, 63, 1);
}

int func_49(int iParam0)
{
	var uVar0;

	if (!func_45(&uVar0))
	{
		return 0;
	}
	if (!func_46(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 14, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 15, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 49, 0, 0, 0))
	{
		return 0;
	}
	return func_54(&uVar0, 9);
}

int func_50(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (!func_45(&Var0))
	{
		return 0;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 14, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 15, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 49, 0, 0, 0))
	{
		return 0;
	}
	if (!func_46(&Var0, 50, iParam1, 0, 1))
	{
		return 0;
	}
	return func_108(Var0);
}

void func_51(var uParam0, int iParam1, int iParam2)
{
	(uParam0[iParam1 /*2*/])->f_1 = iParam2;
}

var func_52(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_109(&uParam0, 80, 1);
}

var func_53(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_109(&uParam0, 81, 1);
}

int func_54(bool bParam0, int iParam1)
{
	bParam0->f_2 = iParam1;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(bParam0);
}

int func_55(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;

	switch ((uParam2[iParam1 /*2*/])->f_1)
	{
		case 0:
			Var0 = func_50(iParam0, iParam1);
			if (Var0 == 0)
			{
				return 5;
			}
			STREAMING::REQUEST_MODEL(Var0, false);
			func_51(uParam2, iParam1, 1);
			return 4;
		case 1:
			Var0 = func_50(iParam0, iParam1);
			if (Var0 == 0)
			{
				return 5;
			}
			if (!STREAMING::HAS_MODEL_LOADED(Var0))
			{
				return 3;
			}
			func_51(uParam2, iParam1, 2);
			return 4;
		case 2:
			if (!func_110(iParam0, iParam1, &Var0))
			{
				return 5;
			}
			(*uParam2)[iParam1 /*2*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Var0, Var0.f_1, false, false, false, true);
			if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iParam1 /*2*/]))
			{
				return 5;
			}
			ENTITY::SET_ENTITY_ROTATION((*uParam2)[iParam1 /*2*/], Var0.f_4, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION((*uParam2)[iParam1 /*2*/], true);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED((*uParam2)[iParam1 /*2*/], false);
			ENTITY::SET_ENTITY_PROOFS((*uParam2)[iParam1 /*2*/], 4, false);
			uParam2->f_18++;
			func_51(uParam2, iParam1, 3);
			return 2;
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_56(var uParam0)
{
	int iVar0;
	int iVar1;

	if (*uParam0 == 0)
	{
		return;
	}
	if (!func_111())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!MISC::IS_BIT_SET(*uParam0, iVar0))
		{
		}
		else
		{
			iVar1 = BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iVar0)));
			if (!func_112(uParam0, iVar1))
			{
			}
			else
			{
				func_75(uParam0, iVar1);
				func_113(uParam0, iVar1);
			}
		}
		iVar0++;
	}
}

void func_57(var uParam0)
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar0 == 0 || iVar0 != uParam0->f_3)
	{
		if (func_114(uParam0->f_1))
		{
			func_115(uParam0, uParam0->f_1);
		}
		func_116(uParam0, 0);
		func_117(uParam0, 0);
	}
}

void func_58(int iParam0, var uParam1, int iParam2)
{
	struct<8> Var0;
	int iVar8;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iParam2]))
	{
		return;
	}
	if (!func_118(iParam0, iParam2, &Var0))
	{
		return;
	}
	iVar8 = func_119(Var0.f_4, Var0.f_7, Var0.f_3);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar8))
	{
		return;
	}
	(*uParam1)[iParam2] = iVar8;
	PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), (*uParam1)[iParam2], false);
	PLAYER::_0x6ECFC621A168424C((*uParam1)[iParam2], (*uParam1)[iParam2], 0, 0f);
	uParam1->f_9++;
	if ((Var0 != -1 && Var0.f_1 != -1) && Var0.f_2 != -1)
	{
		PLAYER::_0xBC02B3D151D3859F((*uParam1)[iParam2], 1);
		PLAYER::EAGLE_EYE_SET_CUSTOM_ENTITY_TINT((*uParam1)[iParam2], Var0, Var0.f_1, Var0.f_2);
	}
}

bool func_59(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = func_120(func_23(*uParam1));
	func_121();
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = func_122(func_23(*uParam1), iVar0);
		if (func_123(uParam0, uParam1, iVar2))
		{
		}
		iVar0++;
	}
	uParam0->f_8.f_3 |= 1;
	return true;
}

void func_60(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_8 = iParam2;
}

var func_61(var uParam0)
{
	var uVar0;

	return uVar0;
}

int func_62(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	if (func_88())
	{
		return 12;
	}
	if (uParam0->f_8.f_3 & 2 != 0)
	{
		if (uParam0->f_8.f_4 + 20000 > MISC::GET_GAME_TIMER())
		{
			return 16;
		}
	}
	if (iParam2 & 1 == 0 && uParam0->f_8 != 1)
	{
		return 1;
	}
	if (func_17(func_124()))
	{
		return 2;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(iVar0) || TASK::PED_HAS_USE_SCENARIO_TASK(iVar0))
	{
		return 6;
	}
	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(PLAYER::PLAYER_PED_ID()))
	{
		return 15;
	}
	if (((((func_125(iVar0, 0) || FIRE::IS_ENTITY_ON_FIRE(iVar0)) || PED::IS_PED_LASSOED(iVar0)) || PED::IS_PED_HOGTIED(iVar0)) || PED::_GET_LASSOER_OF_PED(iVar0)) || PED::IS_PED_HOGTYING(iVar0))
	{
		return 13;
	}
	if (func_126(Global_33))
	{
		return 14;
	}
	if (func_127())
	{
		return 7;
	}
	if (func_128())
	{
		return 8;
	}
	if (func_129())
	{
		return 9;
	}
	if (func_130())
	{
		return 10;
	}
	if (func_131(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 4;
	}
	if (PED::IS_PED_CARRYING_SOMETHING(iVar0) || func_132(iVar0))
	{
		return 11;
	}
	if (func_133(Global_33, -2.793181E-34f))
	{
		return 17;
	}
	if (TASK::IS_PED_GETTING_UP(Global_33))
	{
		return 18;
	}
	return 0;
}

bool func_63(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 12:
		case 13:
		case 14:
		case 15:
		case 17:
		case 18:
			return false;
		default:
			break;
	}
	return true;
}

void func_64(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_102(iParam1, 1);
	if (!func_103(uParam0->f_8.f_1[iVar0]))
	{
		return;
	}
	if (func_134(uParam0->f_8.f_1[iVar0], 1))
	{
		return;
	}
	func_135(uParam0->f_8.f_1[iVar0], 1, 1);
}

void func_65(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_102(iParam1, 1);
	if (!func_103(uParam0->f_8.f_1[iVar0]))
	{
		return;
	}
	if (!func_134(uParam0->f_8.f_1[iVar0], 1))
	{
		return;
	}
	func_135(uParam0->f_8.f_1[iVar0], 0, 1);
}

bool func_66(int iParam0)
{
	return iParam0 == 0;
}

void func_67(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_102(iParam1, 1);
	if (!func_103(uParam0->f_8.f_1[iVar0]))
	{
		return;
	}
	if (func_136(uParam0->f_8.f_1[iVar0], 0))
	{
		return;
	}
	func_137(uParam0->f_8.f_1[iVar0], 1, 1, 1);
}

void func_68(var uParam0, int iParam1)
{
	if (func_138(uParam0, iParam1))
	{
		return;
	}
	*uParam0 = (*uParam0 || iParam1);
}

void func_69(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_102(iParam1, 1);
	if (!func_103(uParam0->f_8.f_1[iVar0]))
	{
		return;
	}
	if (!func_136(uParam0->f_8.f_1[iVar0], 0))
	{
		return;
	}
	func_137(uParam0->f_8.f_1[iVar0], 0, 1, 1);
}

bool func_70(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_102(iParam1, 1);
	return func_139(uParam0->f_8.f_1[iVar0], 1);
}

void func_71()
{
	NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(false);
}

void func_72(var uParam0)
{
	if (func_39(uParam0, 1))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(true, false, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
	func_140(uParam0, 1);
}

void func_73(var uParam0)
{
	if (func_39(uParam0, 2))
	{
		return;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
	func_140(uParam0, 2);
}

void func_74(int iParam0)
{
	Global_1300340.f_288.f_2 = (Global_1300340.f_288.f_2 || iParam0);
}

void func_75(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_76(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_77(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_102(iParam1, 1);
	func_141(uParam0->f_8.f_1[iVar0], 1);
}

bool func_78(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	var uVar2;

	return func_142(bParam0, iParam1, iParam2, &uVar0, &uVar2, 0, bParam3, 0);
}

void func_79()
{
	Global_1913431 = 1;
}

int func_80(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	struct<5> Var2;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<12> Var19;
	struct<12> Var37;
	struct<17> Var54;

	if (!func_143(bParam0, 0))
	{
		return -1;
	}
	if (func_144(bParam0))
	{
		if (!func_146(func_145(bParam0), bParam1, &uVar0, 0, 0))
		{
			return -1;
		}
	}
	else if (func_147(bParam0, bParam1, 0, 0) < iParam2)
	{
		return -1;
	}
	Var2 = { func_148(bParam0, 1, 0) };
	if (func_149(bParam0, &Var2, iParam2, 0, 1, -1, 0))
	{
		return -1;
	}
	iVar7 = -1;
	iVar8 = func_150(bParam0);
	if (iVar8 == 4.158586E+11f)
	{
		iVar7 = func_151(bParam0, "SPEND STEW FEE", 1, 1, 0, bParam1);
	}
	else
	{
		Var9 = -1;
		Var9.f_1 = -1;
		if (func_144(bParam0))
		{
			Var19.f_9 = 1;
			Var19.f_11 = -5.45926E-19f;
			if (!func_152(&Var9, func_145(bParam0), &Var19, 1, bParam1, -1, 0, 0))
			{
				return -1;
			}
		}
		else
		{
			Var37.f_9 = 1;
			Var37.f_11 = -5.45926E-19f;
			if (!func_153(&Var9, bParam0, Var2, Var2.f_4, iParam2, &Var37, 1, bParam1, -1, 1))
			{
				return -1;
			}
		}
		iVar7 = Var9.f_1;
	}
	if (iVar7 == -1)
	{
		return -1;
	}
	Var54.f_7 = -5.149929E+33f;
	Var54.f_16 = -1;
	Var54.f_1 = 1;
	if (bParam0 == -5.792441E-08f)
	{
		Var54.f_1 = 0;
	}
	if (func_144(bParam0))
	{
		if (func_154(func_145(bParam0), bParam1) == 1.094754E+12f)
		{
			Var54.f_1 = 0;
		}
	}
	else if (func_155(bParam0, bParam1) == 1.094754E+12f)
	{
		Var54.f_1 = 0;
	}
	func_156(iVar7, Var54);
	TELEMETRY::_TELEMETRY_CRAFT_ITEM(bParam0, bParam1, iParam3, iParam2);
	return iVar7;
}

int func_81(int iParam0)
{
	return Global_1300340.f_1[iParam0 /*10*/].f_5;
}

int func_82(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	struct<8> Var1;
	int iVar9;

	if (func_89(uParam0) != -1)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (iParam1 == -1.959613E+30f)
	{
		if (iParam3 == 0)
		{
			return 0;
		}
	}
	Var1 = { func_157(iParam2, iParam1, &uVar0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(&Var1))
	{
		return 0;
	}
	iVar9 = func_158(iParam2, iParam1);
	if (iVar9 == 0)
	{
		return 0;
	}
	func_159(uParam0, iParam1);
	func_160(uParam0, iVar9);
	func_161(uParam0, iParam2);
	func_162(uParam0, iParam3);
	func_163(uParam0, uVar0);
	func_164(uParam0, Var1);
	func_90(uParam0, 0);
	return 1;
}

void func_83(int iParam0)
{
	Global_1300340.f_288.f_2 = (Global_1300340.f_288.f_2 - (Global_1300340.f_288.f_2 && iParam0));
}

bool func_84()
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (PED::GET_PED_IS_GRAPPLING(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_RAGDOLL(iVar0))
	{
		return false;
	}
	return true;
}

void func_85()
{
	if (func_165(2, 255))
	{
		return;
	}
	func_166(2);
}

void func_86()
{
	if (func_167(8, 255))
	{
		return;
	}
	func_168(3);
}

void func_87(int iParam0)
{
	if (func_169() != 0)
	{
		return;
	}
	func_170(iParam0);
	func_171(func_23(iParam0));
	func_172(func_81(iParam0));
}

bool func_88()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

int func_89(bool bParam0)
{
	return *bParam0;
}

void func_90(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_91(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	struct<8> Var9;
	int iVar17;
	int iVar18;

	iVar18 = func_173(uParam0);
	Var9 = { func_174(iVar18) };
	iVar17 = func_175(iVar18);
	Var1 = { func_176(uParam0) };
	iVar0 = ANIMSCENE::_CREATE_ANIM_SCENE(&Var9, iVar17, &Var1, false, true);
	if (iVar0 == -1)
	{
		return;
	}
	ANIMSCENE::LOAD_ANIM_SCENE(iVar0);
	GRAPHICS::_0xB958D97A0DFAA0C2(func_178(func_177(uParam0->f_6, uParam0->f_7)));
	func_179(uParam0, iVar0);
	func_90(uParam0, 2);
}

void func_92(var uParam0)
{
	if (func_180(Global_33, 0) || func_180(Global_33, 1))
	{
		if (!func_181(Global_33, 3.269911E-13f))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, false, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, false, 1, false, false);
			WEAPON::_HOLSTER_PED_WEAPONS(Global_33, false, false, false, false);
			TASK::TASK_SWAP_WEAPON(Global_33, 0, 0, 0, 0);
		}
		return;
	}
	func_90(uParam0, 3);
}

void func_93(var uParam0)
{
	int iVar0;

	iVar0 = func_182(uParam0);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iVar0, true, false))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(iVar0, false))
	{
		return;
	}
	func_90(uParam0, 4);
}

void func_94(var uParam0)
{
	switch (func_183(uParam0))
	{
		case joaat("TRANSFORMATION"):
			break;
		case -956768978:
		case -238690612:
			if (func_184(255))
			{
				return;
			}
			break;
	}
	switch (uParam0->f_5)
	{
		case -956768978:
		case -238690612:
			func_90(uParam0, 5);
			break;
		default:
			func_90(uParam0, 6);
			break;
	}
}

void func_95(var uParam0)
{
	if ((MISC::GET_GAME_TIMER() - func_185()) < 3000)
	{
		return;
	}
	func_90(uParam0, 6);
}

void func_96(var uParam0)
{
	struct<9> Var0;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	var uVar21;
	int iVar22;
	int iVar23;

	if (!func_187(func_186(uParam0), func_183(uParam0), &Var0))
	{
		return;
	}
	switch (Var0)
	{
		case joaat("PLAYER"):
			MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), &uVar21, false);
			vVar9 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false) };
			vVar9.f_2 = uVar21;
			vVar12 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) };
			break;
		case joaat("OBJECT"):
			iVar22 = func_188(Var0.f_1, Var0.f_7, Var0.f_8);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar22))
			{
				return;
			}
			vVar9 = { ENTITY::GET_ENTITY_COORDS(iVar22, true, false) };
			vVar12.f_2 = ENTITY::GET_ENTITY_HEADING(iVar22);
			break;
		case joaat("POSITION"):
			vVar9 = { Var0.f_1 };
			vVar12 = { Var0.f_4 };
			break;
		case -2135825642:
			vVar9 = { Var0.f_1 };
			vVar15 = { vVar9 - ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false) };
			vVar18 = { func_189(vVar15) };
			vVar12 = { 0f, 0f, MISC::GET_HEADING_FROM_VECTOR_2D(vVar18.x, vVar18.y) };
			break;
		default:
			break;
	}
	if (func_190(vVar9))
	{
		return;
	}
	iVar23 = func_182(uParam0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iVar23, vVar9, vVar12, 2);
	func_90(uParam0, 7);
}

void func_97(var uParam0)
{
	func_191(uParam0);
	func_90(uParam0, 8);
}

void func_98(var uParam0)
{
	int iVar0;

	iVar0 = func_182(uParam0);
	ANIMSCENE::START_ANIM_SCENE(iVar0);
	func_90(uParam0, 9);
}

void func_99(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	var uVar7;

	iVar0 = func_182(uParam0);
	fVar5 = ANIMSCENE::_GET_ANIM_SCENE_TIME(iVar0);
	fVar4 = ANIMSCENE::_GET_ANIM_SCENE_DURATION(iVar0);
	fVar6 = (fVar4 - fVar5);
	switch (uParam0->f_5)
	{
		case -956768978:
		case -238690612:
			if (!func_192(uParam0, 4))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("MP_NaturalistAnimalTransformEnd");
				func_193(uParam0, 4);
			}
			if ((func_192(uParam0, 4) && !func_192(uParam0, 1)) && fVar5 > 1f)
			{
				CAM::DO_SCREEN_FADE_IN(1);
				func_193(uParam0, 1);
			}
			if (func_192(uParam0, 1))
			{
				GRAPHICS::ANIMPOSTFX_STOP("MP_NaturalistAnimalTransformStart");
				AUDIO::_STOP_SOUND_WITH_NAME("Animal_Control_Enter_Pre", "Animal_Control_Screen_Overlay_Sounds");
				AUDIO::_START_AUDIO_SCENESET("NATAC_Screen_Overlay_Fade_From_Black", "MP007_NATAC_Sceneset");
				AUDIO::PLAY_SOUND_FRONTEND("Animal_Control_Exit", "Animal_Control_Screen_Overlay_Sounds", true, 0);
			}
			if (!func_192(uParam0, 1))
			{
				if (fVar6 < (fVar4 / 2f))
				{
					CAM::DO_SCREEN_FADE_IN(1);
					func_193(uParam0, 1);
				}
			}
			break;
		case joaat("TRANSFORMATION"):
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1.952086E-15f))
			{
				if (!func_192(uParam0, 4) && !func_192(uParam0, 8))
				{
					AUDIO::_START_AUDIO_SCENESET("NATAC_Screen_Overlay_Fade_To_Black", "MP007_NATAC_Sceneset");
					AUDIO::PLAY_SOUND_FRONTEND("Animal_Control_Enter_Pre", "Animal_Control_Screen_Overlay_Sounds", true, 0);
					uParam0->f_2 = fVar5;
					func_193(uParam0, 4);
				}
			}
			break;
	}
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(-3.83483E-22f);
	HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	func_194();
	func_195(0, 0, 1);
	if (!func_192(uParam0, 16))
	{
		if (GRAPHICS::_0xFBF161FCFEC8589E(func_178(func_177(uParam0->f_6, uParam0->f_7)), 2, false, &uVar7))
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Animal_Control_Enter_Pre", "Animal_Control_Screen_Overlay_Sounds");
			AUDIO::PLAY_SOUND_FRONTEND("Animal_Control_Enter_Whoosh", "Animal_Control_Screen_Overlay_Sounds", true, 0);
			func_193(uParam0, 16);
		}
	}
	bVar1 = ANIMSCENE::IS_ANIM_SCENE_FINISHED(iVar0, false);
	bVar2 = ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(iVar0);
	bVar3 = ANIMSCENE::IS_ANIM_SCENE_RUNNING(iVar0, false);
	if ((bVar1 || bVar2) || !bVar3)
	{
		switch (uParam0->f_5)
		{
			case -956768978:
			case -238690612:
				if (func_192(uParam0, 4))
				{
					AUDIO::_STOP_AUDIO_SCENESET("MP007_NATAC_Sceneset");
					func_193(uParam0, 8);
					func_196(uParam0, 4);
				}
				break;
			case joaat("TRANSFORMATION"):
				CAM::DO_SCREEN_FADE_OUT(1);
				AUDIO::_STOP_AUDIO_SCENESET("MP007_NATAC_Sceneset");
				func_193(uParam0, 2);
				func_193(uParam0, 8);
				func_196(uParam0, 4);
				break;
		}
		if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 0))
		{
			func_197(0, 0);
		}
		func_90(uParam0, 10);
	}
}

void func_100(bool bParam0)
{
	int iVar0;
	struct<2> Var1;

	Var1 = -1;
	Var1.f_1 = -1;
	func_90(bParam0, -1);
	iVar0 = func_182(bParam0);
	GRAPHICS::_0xA201A3D0AC087C37(func_178(func_177(bParam0->f_6, bParam0->f_7)));
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iVar0);
	}
	MISC::COPY_SCRIPT_STRUCT(bParam0, &Var1, 17);
}

int func_101(bool bParam0)
{
	switch (func_89(bParam0))
	{
		case 0:
		case 6:
		case 7:
		case 8:
		case 10:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_102(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("INSPECT"):
			return 0;
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

bool func_103(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (Global_1951897[iParam0 /*23*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3);
}

void func_104(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_103(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_198(*uParam0);
	if (Global_1951897[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_199(iVar0);
	*uParam0 = 0;
}

bool func_105(int iParam0)
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1072759.f_28418[51 /*4*/].f_3))
	{
		return false;
	}
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1072759.f_28418[51 /*4*/].f_3))
	{
		return false;
	}
	return true;
}

Vector3 func_106(bool bParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	bParam0->f_2 = iParam1;
	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vVar0, bParam0))
	{
	}
	return vVar0;
}

var func_107(bool bParam0, int iParam1, int iParam2)
{
	var uVar0;

	bParam0->f_2 = iParam1;
	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&uVar0, bParam0))
	{
	}
	return uVar0;
}

var func_108(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_109(&uParam0, 67, 1);
}

var func_109(bool bParam0, int iParam1, int iParam2)
{
	var uVar0;

	bParam0->f_2 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, bParam0))
	{
	}
	return uVar0;
}

bool func_110(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;

	if (!func_45(&Var0))
	{
		return false;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 14, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 15, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 49, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 50, iParam1, 0, 1))
	{
		return false;
	}
	*iParam2 = func_108(Var0);
	iParam2->f_1 = { func_47(Var0) };
	iParam2->f_4 = { func_200(Var0) };
	return true;
}

bool func_111()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar0 != 0)
	{
		return false;
	}
	return true;
}

bool func_112(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 8:
			if (!func_201(uParam0->f_2, 4))
			{
				return false;
			}
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(func_202(iParam1)))
	{
		return false;
	}
	return true;
}

void func_113(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_203(func_202(iParam1), 10000, 0, 0, 0, 1);
	func_116(uParam0, iParam1);
	func_117(uParam0, iVar0);
}

bool func_114(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return false;
		default:
			break;
	}
	return true;
}

void func_115(var uParam0, var uParam1)
{
	uParam0->f_2 = (uParam0->f_2 || uParam1);
}

void func_116(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_117(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

bool func_118(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;

	if (!func_45(&Var0))
	{
		return false;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 14, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 15, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 48, 0, 0, 0))
	{
		return false;
	}
	if (!func_46(&Var0, 50, iParam1, 0, 1))
	{
		return false;
	}
	uParam2->f_3 = func_108(Var0);
	uParam2->f_7 = func_48(Var0);
	uParam2->f_4 = { func_47(Var0) };
	*uParam2 = func_204(Var0);
	uParam2->f_1 = func_205(Var0);
	uParam2->f_2 = func_206(Var0);
	return true;
}

int func_119(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	iVar1 = ENTITY::_GET_ENTITIES_NEAR_POINT(vParam0, fParam3, iVar2, 3);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar2);
		iVar5 = MISC::_GET_ENTITY_FROM_ITEM(iVar3);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
		{
		}
		else
		{
			iVar6 = ENTITY::GET_ENTITY_MODEL(iVar5);
			if (iVar6 != iParam4)
			{
			}
			else
			{
				iVar4 = iVar5;
			}
			else
			{
				iVar0++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar2);
			return iVar4;
		}
	}
}

int func_120(int iParam0)
{
	var uVar0;

	if (!func_45(&uVar0))
	{
		return 0;
	}
	if (!func_46(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 14, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 16, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 34, 0, 0, 1))
	{
		return 0;
	}
	return func_54(&uVar0, 5);
}

void func_121()
{
	AUDIO::PREPARE_SOUNDSET("Animal_Control_Screen_Overlay_Sounds", false);
}

var func_122(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (!func_45(&Var0))
	{
		return 0;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 14, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 16, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 34, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 36, iParam1, 0, 1))
	{
		return 0;
	}
	return func_207(Var0);
}

bool func_123(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<13> Var1;

	iVar0 = func_102(iParam2, 1);
	if (iVar0 == -1)
	{
		return false;
	}
	if (func_103(uParam0->f_8.f_1[iVar0]))
	{
		return false;
	}
	if (!func_208(func_23(*uParam1), iParam2, &Var1))
	{
		return false;
	}
	uParam0->f_8.f_1[iVar0] = func_209(&Var1, Var1.f_12, Var1.f_8, Var1.f_11, 0, 1, 0, 5, 570, 4000, 10, 2f, 0, 8.750548E+22f, 0);
	func_69(uParam0, iParam2);
	func_65(uParam0, iParam2);
	return true;
}

struct<2> func_124()
{
	if (Global_1205789.f_129 <= 0)
	{
		return func_210(0);
	}
	if (Global_1205789.f_130 < 0 || Global_1205789.f_131 == 0)
	{
		return func_210(0);
	}
	return Global_1205789[Global_1205789.f_130 /*4*/].f_1;
}

bool func_125(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_126(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::_REFRESH_LOOT_STATE_FOR_PED(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_REFRESH_LOOT_STATE_FOR_PED(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_REFRESH_LOOT_STATE_FOR_PED(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x758F081DB204DDDE(iParam0))
	{
		return true;
	}
	return false;
}

bool func_127()
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
	{
		return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "player_crafting_active");
	}
	return false;
}

bool func_128()
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-3.294948E+35f) > 0)
	{
		return true;
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1.201345E-07f) > 0)
	{
		return true;
	}
	return false;
}

bool func_129()
{
	if (Global_1072759.f_28644.f_66.f_42 >= 9)
	{
		return true;
	}
	return false;
}

bool func_130()
{
	return Global_1072759.f_28644.f_66.f_42 != 0;
}

bool func_131(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_211(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_14 != -1)
	{
		if (iParam0 == Global_1295619.f_5)
		{
			if (!Global_1295619.f_6)
			{
				return false;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return false;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return false;
	}
	if (LAW::IS_LAW_INCIDENT_ACTIVE(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return true;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 9.534398E+10f)
	{
		return false;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return true;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::ARE_WITNESSES_ACTIVE(iParam0) || LAW::_ARE_INVESTIGATORS_ACTIVE(iParam0, false, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_132(int iParam0)
{
	return (func_212(iParam0, 4) || func_212(iParam0, 5));
}

bool func_133(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_134(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_103(iParam0))
	{
		return false;
	}
	iVar0 = func_198(iParam0);
	return HUD::_UI_PROMPT_IS_ACTIVE(Global_1951897[iVar0 /*23*/].f_3);
}

void func_135(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_103(iParam0))
	{
		return;
	}
	iVar0 = func_198(iParam0);
	func_213(iVar0, bParam1);
}

bool func_136(int iParam0, bool bParam1)
{
	if (bParam1 && !func_103(iParam0))
	{
		return false;
	}
	return !func_214(iParam0, 4);
}

void func_137(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_103(iParam0))
	{
		return;
	}
	iVar0 = func_198(iParam0);
	if (bParam1)
	{
		func_215(iParam0, 4);
		if (bParam3)
		{
			func_213(iVar0, 1);
		}
		func_216(iVar0, 1);
	}
	else
	{
		func_217(iParam0, 4);
		func_216(iVar0, 0);
	}
}

bool func_138(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_139(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_103(iParam0))
	{
		return false;
	}
	iVar0 = func_198(iParam0);
	if (HUD::_UI_PROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1951897[iVar0 /*23*/].f_3))
	{
		if (Global_1951897[iVar0 /*23*/].f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::GET_SYSTEM_TIME();
		}
		fVar2 = HUD::_UI_PROMPT_GET_PROGRESS(Global_1951897[iVar0 /*23*/].f_3);
		if (!HUD::_UI_PROMPT_IS_ACTIVE(Global_1951897[iVar0 /*23*/].f_3))
		{
			iVar3 = (iVar1 - Global_1951897[iVar0 /*23*/].f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(Global_1951897[iVar0 /*23*/].f_18) * (1f - Global_1951897[iVar0 /*23*/].f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			Global_1951897[iVar0 /*23*/].f_21 = iVar1;
			Global_1951897[iVar0 /*23*/].f_22 = fVar2;
		}
	}
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951897[iVar0 /*23*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1951897[iVar0 /*23*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1951897[iVar0 /*23*/].f_3);
}

void func_140(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_141(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_103(iParam0))
	{
		return;
	}
	iVar0 = func_198(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_142(bool bParam0, int iParam1, bool bParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;

	if (func_218(bParam0) || func_219(bParam0, 2.791187f))
	{
		return func_146(func_220(bParam0, 1), bParam2, uParam3, 1, 0);
	}
	if (!func_221(bParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_222(0)) && !func_223());
	iVar37 = -1;
	if (Global_1915643.f_20638)
	{
		iVar37 = Global_1915643.f_20241;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (Var0[iVar34 /*2*/] == 0 || Var0[iVar34 /*2*/] == 3.078375E+12f)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34 /*2*/].f_1 * iParam1);
			if (Var0[iVar34 /*2*/] == 3.996812E+36f && (bParam7 || func_224(iVar32)))
			{
				Jump @499; //curOff = 215
			}
			else if (Var0[iVar34 /*2*/] == 3.414007E-11f && (bParam7 || func_225(iVar32)))
			{
			}
			else
			{
				iVar36 = func_226(iVar37, Var0[iVar34 /*2*/]);
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_227(Var0[iVar34 /*2*/], iVar36);
				}
				else
				{
					iVar33 = func_228(Var0[iVar34 /*2*/], 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_229(Var0[iVar34 /*2*/]) || func_230(Var0[iVar34 /*2*/]))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_231(7, Var0[iVar34 /*2*/], &iVar38);
						}
						iVar40 = func_232(Var0[iVar34 /*2*/], iVar36);
						if (((iVar33 + iVar39) + iVar40) >= iVar32)
						{
							if ((iVar33 + iVar40) < iVar32 && ENTITY::DOES_ENTITY_EXIST(iVar38))
							{
								*uParam4 = iVar38;
							}
						}
						else
						{
							Jump @483; //curOff = 439
							if (bParam5 && ((iVar33 + func_233(7, Var0[iVar34 /*2*/])) + func_234(Var0[iVar34 /*2*/])) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { Var0[iVar34 /*2*/] };
								return false;
							}
						}
						iVar34++;
						return true;
					}
				}
			}
		}
	}
}

bool func_143(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_144(bool bParam0)
{
	return (func_235(bParam0) && func_219(bParam0, 4.31212E+18f));
}

bool func_145(bool bParam0)
{
	if (!func_144(bParam0))
	{
		return false;
	}
	switch (bParam0)
	{
		case 731907282:
			return 6.665346E-32f;
		case 1561454517:
			return 3.055069E-22f;
		case 1254834984:
			return -4.715896E+27f;
		case 1829957287:
			return 3.799805E-08f;
		case 919634467:
			return -6.229594E-24f;
		case -28339930:
			return -6.558434E-35f;
		case 507515628:
			return -4.259769E+28f;
		case -1975194892:
			return 2.642597E-36f;
		case 2039957913:
			return 4.024488E-27f;
		case 1502511939:
			return 3.184647E+31f;
		case 1809065934:
			return 2.427981E-20f;
		case -997271222:
			return 2.25761E+10f;
		case -878058438:
			return -7.330709E+14f;
		case -1617589234:
			return -2.400042E+23f;
		case -1042952050:
			return -0.09105205f;
		case -2050900874:
			return -1.271532E+08f;
		case -1815586685:
			return -1.122659E+24f;
		case -51500315:
			return -3.14812E+29f;
		case 1348094862:
			return 5.933205E-08f;
		case 1646522145:
			return 3.478544E+22f;
		case 1156363443:
			return 4.785602E-25f;
		case 1952092069:
			return -4.590873E-27f;
		case -2109461640:
			return -6.353205E-17f;
		case -1806184545:
			return 1.139413E+29f;
		case -1053842899:
			return -3.432342E-34f;
		case -755677768:
			return -5.970071E-28f;
		case 767294276:
			return -2.052252E+17f;
		case 1311814185:
			return -4.238399E+30f;
		case -840486512:
			return -9.185677E+19f;
		case -1029170414:
			return 1.087713E+21f;
		case -831411723:
			return -1.509685E+07f;
		case -429434400:
			return 3.947197E+32f;
		case -131203731:
			return -1.438366E-27f;
		case 1800445393:
			return 1.504294E-17f;
		case 2047228732:
			return 1.617986E-28f;
		case -2027203194:
			return 2.88563E+36f;
		case -609641686:
			return 2.066523E-20f;
		case 154924622:
			return 1.768266E-31f;
		case -142781743:
			return -1.965168E+35f;
		case -533360838:
			return 395556.1f;
		case -464283790:
			return -9.180731E+18f;
		case -186533746:
			return -0.03333768f;
		case -1593520704:
			return -1.794599E+11f;
		case 1260724738:
			return -1.102499E-29f;
		case -297375678:
			return 1.503452E+37f;
		case 1701653225:
			return -1.22361E-08f;
		case 1386939749:
			return 2.173322E+37f;
		case 1103717282:
			return 1.644474E+25f;
		case 1332088703:
			return 6.339123E+10f;
		case 1034120186:
			return 7.123357E+36f;
		case 532885562:
			return 6.343059E+23f;
		case -452048774:
			return 0.0005745888f;
		case -1085571851:
			return 1.668324E+31f;
		case -862677113:
			return -1.671941E-20f;
		case 1890828381:
			return -3.907049E-23f;
		case 1864875333:
			return 1.494274E+22f;
		case -320325540:
			return 0.05339542f;
		case -1278925815:
			return 4.578568E+20f;
		case -80071950:
			return -5.311585E-06f;
		case -781656240:
			return -4.257166E-35f;
		case 525029001:
			return 2.536853E-22f;
		case 1717296181:
			return 1.388459E-33f;
		case 1894117705:
			return 876.647f;
		case 1464921218:
			return -4933.637f;
		case 550403966:
			return -1.246122E-05f;
		case 856007660:
			return 0.02454921f;
		case -1617179117:
			return 5.444291E-08f;
		case 1784374159:
			return 19.55518f;
		case 2081818376:
			return 1.09735E+14f;
		case -1615607679:
			return 1.93079E+22f;
		case -1894668475:
			return 1.048737E+32f;
		case 2095710966:
			return 1.713901E+21f;
		case -260985198:
			return -1.313098E+26f;
		case -1179959034:
			return -3.982064E+33f;
		case -873142887:
			return -5.61527E+26f;
		case 245915270:
			return 2.426734E-20f;
		case 844146134:
			return 0.0003002306f;
		case 538640747:
			return 1.239412E-14f;
		case 560856018:
			return 9691481;
		case -1382149068:
			return -1.626788E+30f;
		case -188079477:
			return -1.578931E+19f;
		case 1578729681:
			return 4.646013E-20f;
		case 1879581870:
			return -7.458821E-11f;
		case 948647349:
			return -7.161369f;
		default:
			break;
	}
	return false;
}

bool func_146(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	if (!func_236(bParam0, bParam1, &Var0, &iVar31, 0, 1))
	{
		return false;
	}
	iVar34 = -1;
	if (Global_1915643.f_20638)
	{
		iVar34 = Global_1915643.f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			if (Var0[iVar32 /*2*/] == 3.996812E+36f)
			{
				if (!bParam4 && !func_224(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else if (Var0[iVar32 /*2*/] == 3.414007E-11f)
			{
				if (!bParam4 && !func_225(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_226(iVar34, Var0[iVar32 /*2*/]);
				if (iVar33 != 0)
				{
					iVar35 = func_227(Var0[iVar32 /*2*/], iVar33);
				}
				else
				{
					iVar35 = func_228(Var0[iVar32 /*2*/], 0, bParam3, 1);
				}
				if (iVar35 < Var0[iVar32 /*2*/].f_1)
				{
					*uParam2 = { Var0[iVar32 /*2*/] };
					return false;
				}
			}
			iVar32++;
		}
	}
	return true;
}

int func_147(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;

	if (!func_221(bParam0, iParam1, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar33 = ((!bParam3 && func_222(0)) && !func_223());
	iVar34 = -1;
	iVar35 = -1;
	if (Global_1915643.f_20638)
	{
		iVar35 = Global_1915643.f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == 0)
		{
			Jump @338; //curOff = 103
		}
		else
		{
			iVar36 = func_226(iVar35, Var0[iVar32 /*2*/]);
			if (iVar36 != 0)
			{
				bParam2 = false;
				iVar37 = func_227(Var0[iVar32 /*2*/], iVar36);
			}
			else
			{
				iVar37 = func_228(Var0[iVar32 /*2*/], 0, !bVar33, 1);
			}
			if (bVar33)
			{
				if (func_229(Var0[iVar32 /*2*/]) || func_230(Var0[iVar32 /*2*/]))
				{
					iVar37 = (iVar37 + func_232(Var0[iVar32 /*2*/], 0));
					if (bParam2)
					{
						iVar38 = 0;
						iVar37 = (iVar37 + func_231(7, Var0[iVar32 /*2*/], &iVar38));
					}
				}
				else if (bParam2)
				{
					iVar37 = (iVar37 + (func_233(7, Var0[iVar32 /*2*/]) + func_234(Var0[iVar32 /*2*/])));
				}
			}
			if (iVar37 < Var0[iVar32 /*2*/].f_1)
			{
				return 0;
			}
			iVar37 = (iVar37 / Var0[iVar32 /*2*/].f_1);
			if (iVar34 == -1 || iVar37 < iVar34)
			{
				iVar34 = iVar37;
			}
		}
		iVar32++;
	}
	return iVar34;
}

struct<5> func_148(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_237(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_238(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_239(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_240(bParam1) };
			if (bParam2 && func_241(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_242(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_242(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_243(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_244(bParam1) };
			switch (func_150(bParam0))
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
			if (func_245(bParam0, -2.580501E-27f))
			{
				Var0 = { func_239(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_245(bParam0, -4.220332E-15f))
			{
				Var0 = { func_239(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_239(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_245(bParam0, -3.171238E-21f))
			{
				Var0 = { func_239(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_246(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_245(bParam0, -3.171238E-21f))
			{
				Var0 = { func_239(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

bool func_149(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, float fParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_247(&bParam0);
	if (!func_143(bParam0, 0) && !func_249(func_248(bParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_250(bParam0, -3.294982E+22f) == 0)
	{
		bParam3 = true;
	}
	if (func_251(bParam0) && WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		Var0 = { func_240(0) };
		Var4.f_9 = -5.45926E-19f;
		if (!func_242(bParam0, &Var0, 6.282013E+23f, 0, 0))
		{
			return false;
		}
		else if (func_243(bParam0, &Var4, 6.282013E+23f))
		{
			return false;
		}
		if (func_241(bParam0, 1))
		{
			if (!func_242(bParam0, &Var0, -3.587391E+15f, 0, 0))
			{
				return false;
			}
			else if (func_243(bParam0, &Var4, -3.587391E+15f))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_252(bParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_253(bParam0, *uParam1, uParam1->f_4, bParam4, bParam3, fParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

int func_150(bool bParam0)
{
	struct<2> Var0;

	if (!func_143(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_151(bool bParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;
	int iVar35;
	struct<14> Var36;
	int iVar53;
	struct<17> Var54;

	if (!func_143(bParam0, 0))
	{
		return -1;
	}
	if (func_238(bParam0) != 5.407193E-38f)
	{
		return -1;
	}
	if (func_223())
	{
		bParam3 = true;
	}
	if (iParam5 == -2.401104E+18f || iParam5 == -982726.7f)
	{
		iVar0 = (func_254(bParam0, iParam5, 1, 0, 1, 3.996812E+36f) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_254(bParam0, iParam5, 1, 0, 1, 3.414007E-11f) * iParam2);
			if (iVar1 <= 0)
			{
				return -1;
			}
		}
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar0, iVar1))
		{
			return -1;
		}
	}
	else if (func_221(bParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
			if (!func_228(Var2[iVar35 /*2*/], 0, bParam3, 0) >= iVar34)
			{
				return -1;
			}
			iVar35++;
		}
	}
	else
	{
		return -1;
	}
	if (!bParam3 && func_222(0))
	{
		if (iVar0 > 0)
		{
			func_255(3.996812E+36f, iVar0, -5.149929E+33f, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_255(3.414007E-11f, iVar1, -5.149929E+33f, 0, 0);
		}
		else if (func_256(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
				func_255(Var2[iVar35 /*2*/], iVar34, -5.149929E+33f, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -5.45926E-19f;
	Var36.f_8 = bParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = iParam5;
	Var36.f_12 = -5.149929E+33f;
	iVar53 = func_257(-2.328868E-12f, &Var36, bParam4);
	if (iVar53 == -1)
	{
	}
	else
	{
		Var54.f_7 = -5.149929E+33f;
		Var54.f_16 = -1;
		StringCopy(&(Var54.f_12), sParam1, 32);
		func_156(iVar53, Var54);
	}
	return iVar53;
}

bool func_152(int* iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;

	if (!func_258(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_259(bParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_260(bParam1, iParam4, iParam5))
	{
		return false;
	}
	iParam2->f_17 = bParam1;
	iParam2->f_8 = bParam1;
	iParam2->f_9 = 1;
	iParam2->f_13 = iParam4;
	iParam2->f_12 = 3787186f;
	fVar0 = 1.704487E-19f;
	if (bParam7)
	{
		fVar0 = -1.82867E-29f;
	}
	if (!func_261(iParam0, iParam2, fVar0, iParam4, bParam3))
	{
		return false;
	}
	return true;
}

bool func_153(int* iParam0, bool bParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12)
{
	struct<17> Var0;

	if (!func_258(iParam0, 0))
	{
		return false;
	}
	if (!func_262(iParam0, bParam1, Param2, iParam6, iParam10, iParam7, iParam11, bParam12))
	{
		return false;
	}
	Var0 = { func_263(bParam1, Param2, iParam6, iParam7, bParam12) };
	Var0.f_13 = iParam10;
	Var0.f_12 = 3787186f;
	*iParam8 = { Var0 };
	if (!func_264(iParam0, &Var0, 4.059549E+37f, bParam9, iParam11))
	{
		return false;
	}
	return true;
}

int func_154(bool bParam0, int iParam1)
{
	struct<37> Var0;
	int iVar47;
	int iVar48;

	Var0.f_4 = 15;
	Var0.f_36 = 10;
	iVar47 = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_TYPE(bParam0);
	if (iVar47 == 0)
	{
		return 0;
	}
	iVar48 = 0;
	while (iVar48 < iVar47)
	{
		if (ITEMDATABASE::_0x1FC25AEB5F76B38D(bParam0, iVar48, &Var0) && Var0 == iParam1)
		{
			return Var0.f_2;
		}
		iVar48++;
	}
	return 0;
}

int func_155(bool bParam0, bool bParam1)
{
	struct<37> Var0;

	if (func_218(bParam0) || func_219(bParam0, 2.791187f))
	{
		return func_154(func_220(bParam0, 1), bParam1);
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(bParam0, bParam1, &Var0))
	{
		return 0;
	}
	return Var0.f_2;
}

void func_156(int iParam0, struct<17> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1292096.f_20)
	{
		if (Global_1292096.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1292096.f_20.f_1[iVar0 /*21*/].f_1 == 1 || Global_1292096.f_20.f_1[iVar0 /*21*/].f_1 == 5)
			{
				Global_1292096.f_20.f_1[iVar0 /*21*/].f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

struct<8> func_157(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<8> Var10;
	int iVar18;
	int iVar19;
	int iVar20;

	if (!func_45(&Var0))
	{
		return Var10;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return Var10;
	}
	if (!func_46(&Var0, 14, 0, 0, 1))
	{
		return Var10;
	}
	if (!func_46(&Var0, 16, iParam0, 0, 1))
	{
		return Var10;
	}
	if (!func_46(&Var0, 22, 0, 0, 1))
	{
		return Var10;
	}
	if (!func_46(&Var0, 23, iParam1, 0, 1))
	{
		return Var10;
	}
	if (!func_46(&Var0, 25, 0, 0, 1))
	{
		return Var10;
	}
	iVar6 = func_54(&Var0, 1);
	iVar8 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar6);
	iVar20 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (func_265())
	{
		iVar9 = 1;
	}
	else
	{
		iVar9 = -1;
	}
	if (PED::IS_PED_MALE(iVar20))
	{
		iVar19 |= 1;
	}
	else
	{
		iVar19 |= 2;
	}
	if (PED::GET_PED_CROUCH_MOVEMENT(iVar20))
	{
		iVar19 |= 8;
	}
	else
	{
		iVar19 |= 4;
	}
	iVar5 = 0;
	while (iVar5 <= (iVar6 - 1))
	{
		iVar7 = (((iVar8 + (iVar5 * iVar9)) + iVar6) % iVar6);
		iVar18 = func_266(iParam0, iParam1, iVar7);
		if ((iVar19 && iVar18) != iVar19)
		{
		}
		else if (!func_46(&Var0, 26, iVar7, 0, 1))
		{
		}
		else
		{
			*uParam2 = func_267(Var0);
			return func_268(Var0);
		}
		iVar5++;
	}
	return Var10;
}

var func_158(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (!func_45(&Var0))
	{
		return 0;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 14, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 16, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 22, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	return func_269(Var0);
}

void func_159(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

void func_160(var uParam0, int iParam1)
{
	uParam0->f_6 = iParam1;
}

void func_161(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_162(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_163(var uParam0, var uParam1)
{
	uParam0->f_7 = uParam1;
}

void func_164(var uParam0, struct<8> Param1)
{
	uParam0->f_8 = { Param1 };
}

bool func_165(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1289628[iParam1 /*19*/].f_9 && iParam0) != 0;
}

void func_166(int iParam0)
{
	func_270(0, iParam0);
}

bool func_167(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1289628[iParam1 /*19*/].f_10 && iParam0) != 0;
}

void func_168(int iParam0)
{
	func_270(2, iParam0);
}

int func_169()
{
	return Global_1300340.f_150;
}

void func_170(var uParam0)
{
	Global_1300340.f_150.f_1 = uParam0;
}

void func_171(int iParam0)
{
	Global_1300340.f_150.f_2 = iParam0;
}

void func_172(int iParam0)
{
	Global_1300340.f_150.f_3 = iParam0;
}

var func_173(var uParam0)
{
	return uParam0->f_6;
}

struct<8> func_174(int iParam0)
{
	struct<5> Var0;
	struct<8> Var5;

	if (!func_45(&Var0))
	{
		return Var5;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_46(&Var0, 22, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_46(&Var0, 23, iParam0, 0, 1))
	{
		return Var5;
	}
	return func_271(Var0);
}

int func_175(int iParam0)
{
	struct<5> Var0;

	if (!func_45(&Var0))
	{
		return 0;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 22, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 23, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 27, 0, 0, 1))
	{
		return 0;
	}
	return func_272(Var0, -5.472789E+10f);
}

struct<8> func_176(var uParam0)
{
	return uParam0->f_8;
}

struct<8> func_177(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<8> Var5;

	if (!func_45(&Var0))
	{
		return Var5;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_46(&Var0, 22, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_46(&Var0, 23, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_46(&Var0, 56, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_46(&Var0, 57, iParam1, 0, 1))
	{
		return Var5;
	}
	return func_273(Var0);
}

char* func_178(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_179(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

bool func_180(int iParam0, int iParam1)
{
	int iVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, iParam1, false);
	return func_274(iVar0);
}

bool func_181(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2.003139E+37f && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

var func_182(var uParam0)
{
	return uParam0->f_1;
}

int func_183(var uParam0)
{
	return uParam0->f_5;
}

bool func_184(int iParam0)
{
	return func_275(1, iParam0);
}

int func_185()
{
	return Global_1300340.f_296;
}

int func_186(var uParam0)
{
	return uParam0->f_3;
}

bool func_187(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;

	if (!func_45(&Var0))
	{
		return false;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 14, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 16, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 22, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 23, iParam1, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 24, 0, 0, 1))
	{
		return false;
	}
	*uParam2 = func_276(Var0);
	switch (*uParam2)
	{
		case joaat("PLAYER"):
			break;
		case joaat("OBJECT"):
			uParam2->f_1 = { func_47(Var0) };
			uParam2->f_7 = func_48(Var0);
			uParam2->f_8 = func_108(Var0);
			break;
		case joaat("POSITION"):
			uParam2->f_1 = { func_47(Var0) };
			uParam2->f_4 = { func_200(Var0) };
			break;
		case -2135825642:
			uParam2->f_1 = { func_47(Var0) };
			break;
		default:
			break;
	}
	return true;
}

int func_188(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	iVar1 = ENTITY::_GET_ENTITIES_NEAR_POINT(vParam0, fParam3, iVar2, 3);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar2);
		iVar5 = MISC::_GET_ENTITY_FROM_ITEM(iVar3);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
		{
		}
		else
		{
			iVar6 = ENTITY::GET_ENTITY_MODEL(iVar5);
			if (iVar6 != iParam4)
			{
			}
			else
			{
				iVar4 = iVar5;
			}
			else
			{
				iVar0++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar2);
			return iVar4;
		}
	}
}

Vector3 func_189(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

bool func_190(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_191(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<9> Var3;
	int iVar12;

	iVar2 = func_182(uParam0);
	iVar12 = func_173(uParam0);
	iVar1 = func_277(iVar12, 4.194E+28f);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (!func_278(iVar12, 4.194E+28f, iVar0, &Var3))
		{
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar2, &Var3, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Var3.f_8);
		}
		iVar0++;
	}
}

bool func_192(var uParam0, int iParam1)
{
	return (uParam0->f_16 && iParam1) != 0;
}

void func_193(var uParam0, int iParam1)
{
	uParam0->f_16 = (uParam0->f_16 || iParam1);
}

void func_194()
{
	func_279(0);
}

void func_195(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1072759.f_7 = 1;
	if ((Global_1295619.f_16 - Global_1072759.f_9) > 2)
	{
		if (bParam2)
		{
			func_280(1101004800 /* Float: 20f */);
		}
	}
	Global_1072759.f_9 = Global_1295619.f_16;
	if (bParam0)
	{
		CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else
		{
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				PED::SET_PED_RESET_FLAG(iVar1, 96, true);
			}
		}
		iVar2++;
	}
	if (func_281())
	{
		NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	}
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 25, true);
	CAM::_0x3C8F74E8FE751614();
	CAM::INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE();
	func_282(250);
	if (bParam1)
	{
		HUD::_0x5651516D947ABC53();
	}
}

void func_196(var uParam0, int iParam1)
{
	uParam0->f_16 = (uParam0->f_16 - (uParam0->f_16 && iParam1));
}

void func_197(float fParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

int func_198(int iParam0)
{
	return iParam0;
}

void func_199(int iParam0)
{
	if (!func_283(iParam0))
	{
		return;
	}
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_DELETE(Global_1951897[iParam0 /*23*/].f_3);
	}
	Global_1951897[iParam0 /*23*/].f_4 = 0;
	Global_1951897[iParam0 /*23*/] = 1;
	Global_1951897[iParam0 /*23*/].f_16 = 0;
	Global_1951897[iParam0 /*23*/].f_1 = 0;
	Global_1951897[iParam0 /*23*/].f_6 = { 0f, 0f, 0f };
	Global_1951897[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951897[iParam0 /*23*/].f_9 = 0f;
	Global_1951897[iParam0 /*23*/].f_10 = 0;
	Global_1951897[iParam0 /*23*/].f_11 = 0;
	Global_1951897[iParam0 /*23*/].f_2 = 1;
	Global_1951897[iParam0 /*23*/].f_15 = -1f;
}

Vector3 func_200(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_106(&uParam0, 68, 1);
}

bool func_201(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

char* func_202(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "ANIMAL_TRANSFORMATION_NOT_ENOUGH_HERBS";
		case 2:
			return "ANIMAL_TRANSFORMATION_EXIT_HELP";
		case 4:
			return "ANIMAL_TRANSFORMATION_ENTER_PART_1";
		case 8:
			return "ANIMAL_TRANSFORMATION_ENTER_PART_2";
		case 16:
			return "ANIMAL_TRANSFORMATION_TIME_RUNNING_OUT";
		case 32:
			return "ANIMAL_TRANSFORMATION_ABORT";
		case 64:
			return "ANIMAL_TRANSFORMATION_COOLDOWN";
		default:
			break;
	}
	return "";
}

int func_203(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	int iVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	iVar15 = UIFEED::_UI_FEED_POST_HELP_TEXT(&Var0, &Var13, bParam5);
	return iVar15;
}

var func_204(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_284(&uParam0, 83, 0, -1);
}

var func_205(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_284(&uParam0, 84, 0, -1);
}

var func_206(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_284(&uParam0, 85, 0, -1);
}

var func_207(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_109(&uParam0, 61, 1);
}

bool func_208(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;

	if (!func_45(&Var0))
	{
		return false;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 14, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 16, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 34, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 35, iParam1, 0, 1))
	{
		return false;
	}
	*uParam2 = { func_271(Var0) };
	uParam2->f_8 = { func_47(Var0) };
	uParam2->f_11 = func_48(Var0);
	uParam2->f_12 = func_285(Var0);
	return true;
}

int func_209(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (func_190(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_214(iVar0, 2))
		{
			if (func_286(vParam2, Global_1951897[iVar0 /*23*/].f_6, 1008981770 /* Float: 0.01f */, 1) && iParam1 == Global_1951897[iVar0 /*23*/].f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_287(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1f, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

struct<2> func_210(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_211(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940186.f_12)
	{
		if ((bParam2 || Global_1940186.f_13 > 0) || Global_1940186.f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1940186.f_9 == 9.534398E+10f)
	{
		return 0;
	}
	if (Global_1940186.f_14 > 0 || (bParam2 && Global_1940186.f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940186.f_7)
		{
			if (bParam2 || Global_1940186.f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_212(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

void func_213(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_214(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

bool func_214(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_215(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_216(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_217(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

bool func_218(bool bParam0)
{
	if (func_219(bParam0, 2.944387E-36f))
	{
		return true;
	}
	return false;
}

bool func_219(bool bParam0, int iParam1)
{
	if (!func_143(bParam0, 0))
	{
		return func_288(func_248(bParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 104.1169f))
	{
		return true;
	}
	return false;
}

bool func_220(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_143(bParam0, 0))
	{
		return func_289(func_248(bParam0), bParam1);
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0) || Var0.f_5 == 0)
	{
		return false;
	}
	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(Var0.f_5))
	{
		return false;
	}
	return Var0.f_5;
}

bool func_221(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_143(bParam0, 0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM(bParam0, bParam1, iVar0, uParam2[iVar0 /*2*/]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_290(bParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_222(bool bParam0)
{
	if (func_291() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_292(bParam0));
}

bool func_223()
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

bool func_224(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_291() == 0)
	{
		return func_293(iParam0);
	}
	return iParam0 <= func_294();
}

bool func_225(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

int func_226(int iParam0, bool bParam1)
{
	if (iParam0 == 15 && func_219(bParam1, -1.690907E-35f))
	{
		return 1;
	}
	return 0;
}

int func_227(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_143(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_237(0) };
	Var0.f_4 = func_295(iParam1);
	Var5 = { func_239(bParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_292(0), &Var5, false);
	return iVar9;
}

int func_228(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_143(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_238(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_296(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_297(bParam0, 0);
	}
	if (func_250(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_292(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_298(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_292(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

bool func_229(bool bParam0)
{
	if (!func_143(bParam0, 0))
	{
		return false;
	}
	if (func_219(bParam0, -1.051639E+07f))
	{
		return true;
	}
	return func_230(bParam0);
}

bool func_230(bool bParam0)
{
	if (!func_143(bParam0, 0))
	{
		return false;
	}
	if (func_219(bParam0, -5.092244E+08f))
	{
		return true;
	}
	return false;
}

int func_231(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;

	iParam0 = func_299(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_143(bParam1, 0))
	{
		return 0;
	}
	if (!func_300(iParam0))
	{
		return 0;
	}
	iVar0 = func_301(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar27, iVar1));
		if (!func_302(iVar28))
		{
		}
		else
		{
			MISC::_LOOT_TABLES_GET_INFO(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), true, true, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = Var3.f_1[iVar29];
				if (iVar30 == bParam1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(*iParam2))
					{
						*iParam2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return iVar26;
}

int func_232(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	if (!func_143(bParam0, 0))
	{
		return 0;
	}
	if (!func_229(bParam0) && !func_230(bParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = func_303(bParam0, 5.339713E+22f);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_304(-5.45926E-19f, -5.45926E-19f, 0, 1.659074E-30f, 0, 0, -1, iVar13, 0) };
	if (func_305(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			bVar14 = func_306(iVar15, iVar1);
			if (func_143(bVar14, 0) && bParam0 != bVar14)
			{
				iVar16 = func_307(bVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_227(bVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_309(iVar16, func_308(bVar14), bParam0)));
					}
				}
			}
			iVar15++;
		}
		func_310(iVar1);
	}
	return iVar0;
}

int func_233(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_299(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_143(bParam1, 0))
	{
		return 0;
	}
	if (!func_300(iParam0))
	{
		return 0;
	}
	iVar0 = func_301(iParam0);
	bVar1 = bParam1;
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (PED::_GET_PELT_FROM_HORSE(iVar0, iVar3) != bVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_234(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!func_143(bParam0, 0))
	{
		return 0;
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			if (bParam0 == ENTITY::_GET_CARRIABLE_FROM_ENTITY(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

bool func_235(bool bParam0)
{
	return func_150(bParam0) == 6.698816E+28f;
}

bool func_236(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_311(bParam0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(bParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return false;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(bParam0, bParam1, iVar0, uParam2[iVar0 /*2*/]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_312(bParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

struct<4> func_237(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_292(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_239(2.982335E+09f, func_313(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_239(2.982335E+09f, func_313(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_239(2.982335E+09f, func_313(), -5.45926E-19f, bParam0);
}

int func_238(bool bParam0)
{
	vector3 vVar0;

	if (!func_143(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_239(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_143(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_292(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_240(bool bParam0)
{
	int iVar0;

	iVar0 = func_292(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_239(8.681942E-06f, func_237(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_239(8.681942E-06f, func_237(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_239(8.681942E-06f, func_237(bParam0), -1.942248E+12f, 0);
}

int func_241(bool bParam0, bool bParam1)
{
	if (func_150(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_314();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_242(bool bParam0, var uParam1, float fParam2, bool bParam3, float fParam4)
{
	return func_253(bParam0, *uParam1, fParam2, bParam3, 1, fParam4) > 0;
}

bool func_243(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_315(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_244(bool bParam0)
{
	int iVar0;

	iVar0 = func_292(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_239(3.507197E-29f, func_237(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_239(3.507197E-29f, func_237(bParam0), 12999093, 0);
}

bool func_245(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_150(bParam0);
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
			if (func_316(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_246(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_317(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_247(var uParam0)
{
	if (!func_143(*uParam0, 0))
	{
		return 0;
	}
	if (!func_318(*uParam0))
	{
		return 0;
	}
	switch (*uParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*uParam0 = -7.975852E-25f;
			break;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*uParam0 = -1.072744E-16f;
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*uParam0 = 1.62503E-31f;
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*uParam0 = -1.6957E+27f;
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = -1.177047E+07f;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_248(bool bParam0)
{
	return bParam0;
}

bool func_249(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

int func_250(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_249(func_248(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

bool func_251(bool bParam0)
{
	return func_238(bParam0) == -3.265313E+23f;
}

int func_252(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_143(bParam0, 0))
	{
		if (func_249(func_248(bParam0), 2))
		{
			return -1;
		}
		return 0;
	}
	if (func_238(bParam0) == 5.407193E-38f)
	{
		return -1;
	}
	if (!bParam2 && func_250(bParam0, -3.294982E+22f) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(bParam0, uParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_292(bParam3), bParam0);
}

int func_253(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_143(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_250(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_239(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_292(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_292(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

int func_254(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && bParam1 == -982726.7f) && func_319(bParam0, 8.497754E-37f))
	{
		bParam1 = 8.497754E-37f;
	}
	if (func_218(bParam0) || func_219(bParam0, 2.791187f))
	{
		return func_320(func_220(bParam0, 0), bParam1, bParam3, 1);
	}
	if (!func_221(bParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == 3.996812E+36f || Var0[iVar32 /*2*/] == 3.414007E-11f)
		{
			if (iParam5 != 0 && Var0[iVar32 /*2*/] != iParam5)
			{
			}
			else
			{
				return Var0[iVar32 /*2*/].f_1;
				Jump @221; //curOff = 205
				if (Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}
}

bool func_255(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_143(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_250(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_321(bParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_148(bParam0, bParam4, 0) };
	Var6 = { func_239(bParam0, Var1, Var1.f_4, bParam4) };
	return func_322(bParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

bool func_256(int iParam0)
{
	switch (iParam0)
	{
		case -1551258934:
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
		default:
			break;
	}
	return false;
}

int func_257(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_323(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_325(func_324(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_326(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

bool func_258(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_327(iParam0))
		{
			return false;
		}
	}
	if (func_328(&(iParam0->f_6)))
	{
		if (NETWORK::_0xE10F2D7715ABABEC(&(iParam0->f_6)))
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(4.059549E+37f))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(-3.415538E-09f))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(-4.99669E-06f))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(7.184882E+22f))
	{
		return false;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return false;
	}
	if (NETSHOPPING::CASHINVENTORY_IS_CONNECTION_FAULTED())
	{
		return false;
	}
	if (NETSHOPPING::_CASHINVENTORY_INIT_SESSION_IS_FAULTED())
	{
		return false;
	}
	return true;
}

int func_259(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!func_311(bParam0))
	{
		return 0;
	}
	bVar1 = func_201(iParam3, 2);
	bVar2 = func_329(bParam0, -2.401104E+18f, bVar1);
	bVar3 = func_329(bParam0, -982726.7f, bVar1);
	if (func_329(bParam0, 0.003804697f, bVar1))
	{
		iParam1 = 0.003804697f;
	}
	else if (bParam4 && (func_330(bParam0, &fVar0) || func_331(bParam0, &fVar0)))
	{
		iParam1 = fVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -2.401104E+18f;
	}
	else if (bVar2 && bVar3)
	{
		if (func_332())
		{
			iParam1 = -2.401104E+18f;
		}
		else
		{
			iParam1 = -982726.7f;
		}
	}
	else if (bVar3)
	{
		iParam1 = -982726.7f;
	}
	else if (func_333(15) && func_329(bParam0, 1.109321E-25f, bVar1))
	{
		iParam1 = 1.109321E-25f;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -982726.7f;
	}
	return iParam1;
}

int func_260(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	if (!func_329(bParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_201(iParam2, 2))
	{
		if (func_334(bParam0, iParam1))
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bParam0))
	{
		return 0;
	}
	if (func_201(iParam2, 8))
	{
		return func_335(bParam0, iParam1);
	}
	return 1;
}

bool func_261(int* iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar31;

	uVar0 = 15;
	if (!func_236(iParam1->f_17, bParam3, &uVar0, &iVar31, 0, 1))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_336(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 2:
			return func_337(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 3:
			return func_338(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 4:
			return func_339(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 5:
			return func_340(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 6:
			return func_341(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 7:
			return func_342(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 8:
			return func_343(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 9:
			return func_344(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 10:
			return func_345(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 11:
			return func_346(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 12:
			return func_347(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 13:
			return func_348(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 14:
			return func_349(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 15:
			return func_350(iParam0, iParam1, iParam2, &uVar0, bParam4);
		default:
			break;
	}
	return false;
}

int func_262(int* iParam0, bool bParam1, struct<4> Param2, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	bool bVar0;

	if (func_351(bParam1))
	{
		bVar0 = func_248(bParam1);
		return func_352(iParam0, bVar0, bParam7, iParam8, iParam9);
	}
	if (func_201(iParam9, 32))
	{
		if (!func_353(bParam1, Param2, iParam6))
		{
			return 0;
		}
	}
	if (!func_354(bParam1, bParam7, iParam9))
	{
		return 0;
	}
	if (func_201(iParam9, 4))
	{
		if (!func_355(iParam0, bParam1, Param2, iParam6, bParam7, iParam8, 0, bParam10))
		{
			return 0;
		}
	}
	if (func_201(iParam9, 8))
	{
		return func_356(iParam0, bParam1, bParam7, iParam8);
	}
	return 1;
}

struct<17> func_263(bool bParam0, struct<4> Param1, float fParam5, int iParam6, bool bParam7)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0.f_4 = { Param1 };
	Var0 = { func_239(bParam0, Var0.f_4, fParam5, 1) };
	Var0.f_8 = bParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = fParam5;
	if (bParam7)
	{
		Var0.f_15 = func_250(bParam0, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_313() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_264(int* iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;
	int iVar31;

	uVar0 = 15;
	if (!func_221(iParam1->f_8, iParam1->f_13, &uVar0, &iVar31, 1, 0))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_357(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 2:
			return func_358(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 3:
			return func_359(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 4:
			return func_360(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 5:
			return func_361(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 6:
			return func_362(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 7:
			return func_363(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 8:
			return func_364(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 9:
			return func_365(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 10:
			return func_366(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 11:
			return func_367(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 12:
			return func_368(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 13:
			return func_369(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 14:
			return func_370(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 15:
			return func_371(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		default:
			break;
	}
	return false;
}

bool func_265()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return true;
	}
	return false;
}

int func_266(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;

	if (!func_45(&Var0))
	{
		return 0;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 14, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 16, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 22, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 25, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 26, iParam2, 0, 1))
	{
		return 0;
	}
	if (!func_46(&Var0, 27, 0, 0, 0))
	{
		return -1;
	}
	return func_272(Var0, -905.8901f);
}

var func_267(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_109(&uParam0, 61, 1);
}

struct<8> func_268(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_372(&uParam0, 61, 1);
}

var func_269(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_109(&uParam0, 66, 1);
}

void func_270(int iParam0, int iParam1)
{
	struct<6> Var0;
	var uVar6;
	int iVar7;
	int iVar8;

	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0 = 47;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Var0.f_1))
	{
		return;
	}
	if (((((((((((Var0.f_4 == 2 || Var0.f_4 == 3) || Var0.f_4 == 6) || Var0.f_4 == 7) || Var0.f_4 == 8) || Var0.f_4 == 9) || Var0.f_4 == 10) || Var0.f_4 == 11) || Var0.f_4 == 12) || Var0.f_4 == 13) || Var0.f_4 == 14) || Var0.f_4 == 15)
	{
		iVar8 = 0;
		while (iVar8 < 32)
		{
			iVar7 = PLAYER::INT_TO_PLAYERINDEX(iVar8);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7))
			{
			}
			else
			{
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar6, iVar8);
			}
			iVar8++;
		}
	}
	else
	{
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar6, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, 0, &uVar6);
}

struct<8> func_271(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_372(&uParam0, 69, 1);
}

int func_272(struct<5> Param0, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (!func_46(&Param0, 28, iParam5, 0, 1))
	{
		return 0;
	}
	iVar1 = func_54(&Param0, 3);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		iVar3 = 0;
		iVar2 = func_373(Param0, iVar0);
		switch (iParam5)
		{
			case joaat("ANIM_SCENE"):
				iVar3 = func_375(func_374(iVar2));
				break;
			case -952694274:
				iVar3 = func_375(func_376(iVar2));
				break;
			case joaat("PARTICLE"):
				iVar3 = func_375(func_377(iVar2));
				break;
			case joaat("PLAYLIST"):
				iVar3 = func_375(func_378(iVar2));
				break;
			default:
				break;
		}
		uVar4 = (uVar4 || iVar3);
		iVar0++;
	}
	return uVar4;
}

struct<8> func_273(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_372(&uParam0, 95, 1);
}

bool func_274(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != -3.273909E-18f);
}

bool func_275(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_379(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_380())
	{
		return func_379(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_379(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

var func_276(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_109(&uParam0, 73, 1);
}

int func_277(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_45(&uVar0))
	{
		return 0;
	}
	if (!func_46(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 22, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 23, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 31, 0, 0, 1))
	{
		return 0;
	}
	if (!func_46(&uVar0, 32, iParam1, 0, 1))
	{
		return 0;
	}
	return func_54(&uVar0, 4);
}

bool func_278(int iParam0, int iParam1, int iParam2, var uParam3)
{
	struct<5> Var0;
	int iVar5;

	if (!func_45(&Var0))
	{
		return false;
	}
	if (!func_46(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 22, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 23, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 31, 0, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 32, iParam1, 0, 1))
	{
		return false;
	}
	if (!func_46(&Var0, 33, iParam2, 0, 1))
	{
		return false;
	}
	switch (iParam1)
	{
		case joaat("PLAYER"):
			if (PED::IS_PED_MALE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
			{
				iVar5 = 70;
			}
			else
			{
				iVar5 = 71;
			}
			break;
		default:
			iVar5 = 69;
			break;
	}
	*uParam3 = { func_372(&Var0, iVar5, 1) };
	if (func_46(&Var0, 27, 0, 0, 0))
	{
		uParam3->f_8 = func_272(Var0, -46857.99f);
	}
	return true;
}

void func_279(int iParam0)
{
	Global_1956862.f_1431.f_2 = 0f;
	Global_1956862.f_1431.f_1 = iParam0;
}

void func_280(float fParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	MISC::CLEAR_AREA(vVar1, fParam0, 65536);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(vVar1, fParam0);
}

bool func_281()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

void func_282(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
}

bool func_283(int iParam0)
{
	return func_214(iParam0, 2);
}

int func_284(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	bParam0->f_2 = iParam1;
	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&iVar0, bParam0))
	{
		iVar0 = iParam3;
	}
	return iVar0;
}

var func_285(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_109(&uParam0, 74, 1);
}

bool func_286(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

void func_287(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
{
	int iVar0;

	Global_1951897[iParam0 /*23*/].f_4 = iParam1;
	Global_1951897[iParam0 /*23*/] = iParam4;
	Global_1951897[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951897[iParam0 /*23*/].f_2 = iParam5;
	Global_1951897[iParam0 /*23*/].f_6 = { vParam6 };
	Global_1951897[iParam0 /*23*/].f_9 = fParam9;
	Global_1951897[iParam0 /*23*/].f_10 = iParam10;
	Global_1951897[iParam0 /*23*/].f_11 = iParam11;
	Global_1951897[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951897[iParam0 /*23*/].f_5 = iParam12;
	Global_1951897[iParam0 /*23*/].f_1 = 2;
	Global_1951897[iParam0 /*23*/].f_17 = -1;
	Global_1951897[iParam0 /*23*/].f_18 = iParam16;
	Global_1951897[iParam0 /*23*/].f_19 = iParam15;
	Global_1951897[iParam0 /*23*/].f_20 = bParam25;
	Global_1951897[iParam0 /*23*/].f_22 = 0f;
	if (bParam25)
	{
		Global_1951897[iParam0 /*23*/].f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		Global_1951897[iParam0 /*23*/].f_21 = MISC::GET_SYSTEM_TIME();
	}
	iVar0 = HUD::_UI_PROMPT_REGISTER_BEGIN();
	HUD::_UI_PROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UI_PROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UI_PROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(iVar0, iParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(iVar0, fParam9);
	}
	HUD::_UI_PROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UI_PROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 18, true);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, true);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(iVar0, false);
			break;
		case 2:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(iVar0, true);
			break;
		case 1:
			HUD::_UI_PROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UI_PROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 7:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_WITH_DECAY_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 8:
			HUD::_UI_PROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 9:
			HUD::_UI_PROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 14:
			HUD::_UI_PROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 16:
			HUD::_UI_PROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, fParam18, fParam19);
			break;
		case 4:
		case 5:
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
			break;
		case 11:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, fParam18, fParam19);
			break;
		case 12:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), fParam18, 0f, fParam19);
			break;
		case 13:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), fParam18, 0f, fParam19);
			break;
		case 15:
			HUD::_UI_PROMPT_SET_ROTATE_MODE(iVar0, fParam20, bParam21);
			HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 10, true);
			break;
	}
	HUD::_UI_PROMPT_REGISTER_END(iVar0);
	Global_1951897[iParam0 /*23*/].f_3 = iVar0;
	func_213(iParam0, 1);
	func_216(iParam0, 1);
	func_217(iParam0, 128);
}

int func_288(bool bParam0, int iParam1)
{
	if (!func_249(bParam0, 2))
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

bool func_289(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!func_249(bParam0, 2))
	{
		return false;
	}
	bVar0 = false;
	if ((bVar0 != 0 && bParam1) && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bVar0))
	{
		return false;
	}
	return bVar0;
}

void func_290(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS(bParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if ((*uParam2)[iVar0 /*2*/] == 3.414007E-11f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 1120403456))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 1120403456))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_150((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_291()
{
	return Global_1572887.f_14;
}

int func_292(bool bParam0)
{
	if (func_291() == -1)
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

bool func_293(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_294()
{
	if (func_291() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

float func_295(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4.978612f;
		case 1:
			return -1.082716E-10f;
		default:
			break;
	}
	return 4.978612f;
}

bool func_296(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_143(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_238(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_219(bParam0, 9.811189E+11f))
	{
		func_381(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

int func_297(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_382(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_383(&Var0, func_240(0));
	}
	if (!func_384(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_385(iVar18);
	return iVar19;
}

struct<4> func_298(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_148(bParam0, bParam1, 0) };
	return func_239(bParam0, Var0, Var0.f_4, bParam1);
}

int func_299(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_38.f_289;
	}
	return iParam0;
}

bool func_300(int iParam0)
{
	iParam0 = func_299(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1902883[iParam0 /*43*/]))
	{
		return true;
	}
	return false;
}

int func_301(int iParam0)
{
	iParam0 = func_299(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1902883[iParam0 /*43*/];
}

bool func_302(int iParam0)
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
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::GET_IS_ANIMAL(iVar0))
	{
		return false;
	}
	if (FLOCK::_GET_ANIMAL_RARITY(iVar0) == 2)
	{
		return false;
	}
	if (ENTITY::_IS_ENTITY_FULLY_LOOTED(iParam0))
	{
		return false;
	}
	if (FIRE::_IS_ENTITY_CONSUMED_BY_FIRE(iParam0))
	{
		return false;
	}
	return true;
}

int func_303(bool bParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(bParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42 /*2*/].f_1 == iParam1)
			{
				return Var0[iVar42 /*2*/];
			}
			iVar42++;
		}
	}
	return 0;
}

struct<10> func_304(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -5.45926E-19f)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -5.45926E-19f)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
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
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_305(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int* iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_306(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_ITEMDATABASE_GET_COLLECTION_SIZE(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_307(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (bParam0)
	{
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
		case joaat("PROVISION_FISH_BLUEGILL"):
			iVar0 = -7.823627E-38f;
			break;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR"):
			iVar0 = 2.350962E+15f;
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			iVar0 = 1.880478E-29f;
			break;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			iVar0 = 9.844682E+16f;
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			iVar0 = -1.122826E+28f;
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			iVar0 = 1.572265E-34f;
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			iVar0 = -2.021815E+13f;
			break;
		case joaat("PROVISION_FISH_MUSKIE"):
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			iVar0 = -1.247056E-17f;
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			iVar0 = 6.240494E-14f;
			break;
		case joaat("PROVISION_FISH_PERCH_POOR"):
		case joaat("PROVISION_FISH_PERCH"):
			iVar0 = 1.386534E-13f;
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			iVar0 = 1.60476E-20f;
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
		case joaat("PROVISION_FISH_ROCK_BASS"):
			iVar0 = joaat("A_C_FISHROCKBASS_01_SM");
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			iVar0 = 3.562316E+28f;
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			iVar0 = 1.854381E-37f;
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			iVar0 = 2.425197E-21f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			iVar0 = 9.798023E-15f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			iVar0 = 3.93545E+18f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			iVar0 = -271915.8f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			iVar0 = 6.892114E+25f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			iVar0 = -2.123363E+28f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			iVar0 = -1.573697E-17f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			iVar0 = -5.304321E-35f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			iVar0 = 2.102341E-35f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			iVar0 = -1.260301E-08f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			iVar0 = 2.994223E+24f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			iVar0 = 6.094814E-35f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			iVar0 = 2.117028E+37f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			iVar0 = 0.001931463f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			iVar0 = -2.58118E-05f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			iVar0 = -1.917655E-30f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			iVar0 = -91.68214f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			iVar0 = 2.383896E+14f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			iVar0 = 5.051445E+15f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			iVar0 = 1.242729E-20f;
			break;
	}
	return iVar0;
}

int func_308(bool bParam0)
{
	if (func_219(bParam0, 0.9368603f))
	{
		return 2;
	}
	else if (func_219(bParam0, -1.311326E-05f))
	{
		return 1;
	}
	else if (func_219(bParam0, 3.750005E+29f))
	{
		return 0;
	}
	return 1;
}

int func_309(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_143(uVar0[iVar17], 0) && bParam2 == uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

int func_310(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_311(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(bParam0);
}

void func_312(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_GET_AWARD_COST_MODIFIERS(bParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if ((*uParam2)[iVar0 /*2*/] == 3.414007E-11f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 1120403456))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 1120403456))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_150((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

struct<4> func_313()
{
	struct<4> Var0;

	return Var0;
}

int func_314()
{
	if (func_386(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_315(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_292(0);
	*iParam1 = { func_239(bParam0, func_240(0), fParam3, 0) };
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

bool func_316(bool bParam0, int iParam1, int iParam2)
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

int func_317(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_292(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

bool func_318(bool bParam0)
{
	return func_219(bParam0, 5.168749E+07f);
}

bool func_319(bool bParam0, int iParam1)
{
	if (!func_143(bParam0, 0))
	{
		return false;
	}
	if (func_218(bParam0) || func_219(bParam0, 2.791187f))
	{
		return func_329(func_220(bParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, iParam1) > 0;
}

int func_320(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_236(bParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((Var0[iVar32 /*2*/] == 3.996812E+36f || Var0[iVar32 /*2*/] == 3.414007E-11f) || Var0[iVar32 /*2*/] == -2.399649E-08f)
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

int func_321(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<17> Var65;
	struct<17> Var82;

	if (func_387(bParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_250(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_222(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_388(&Var1, &iVar62, bParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_389(bParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_257(7.184882E+22f, &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var82.f_7 = -5.149929E+33f;
			Var82.f_16 = -1;
			Var82 = iParam3;
			Var82.f_7 = iParam2;
			func_156(iVar64, Var82);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_292(bParam4), bParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_322(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (func_387(bParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_246(*iParam1, &Var0, bParam6, 0, -1))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_222(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_291() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -5.45926E-19f;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_257(7.184882E+22f, &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -5.149929E+33f;
				Var32.f_16 = -1;
				Var32 = iParam5;
				Var32.f_7 = iParam4;
				func_156(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_292(bParam6), iParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_323(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_390(iParam1->f_8, iParam0, iVar0, 2048) || func_390(iParam1->f_8, iParam0, iVar0, 32768)) || func_390(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_390(iParam1->f_8, iParam0, iVar0, 4) || func_390(iParam1->f_8, iParam0, iVar0, 256)) || func_390(iParam1->f_8, iParam0, iVar0, 65536)) || func_390(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_390(iParam1->f_8, iParam0, iVar0, 1) || func_390(iParam1->f_8, iParam0, iVar0, 8)) || func_390(iParam1->f_8, iParam0, iVar0, 65536)) || func_390(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_390(iParam1->f_8, iParam0, iVar0, 1) || func_390(iParam1->f_8, iParam0, iVar0, 16)) || func_390(iParam1->f_8, iParam0, iVar0, 2)) || func_390(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_390(iParam1->f_8, iParam0, iVar0, 8) || func_390(iParam1->f_8, iParam0, iVar0, 4096)) || func_390(iParam1->f_8, iParam0, iVar0, 256)) || func_390(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_324(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_325(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_391(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_391(iParam1, 2, 0, 0);
	return -1;
}

int func_326(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_391(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_327(int* iParam0)
{
	int iVar0;

	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_392(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_328(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_329(bool bParam0, int iParam1, bool bParam2)
{
	if (!func_311(bParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(bParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_334(bParam0, iParam1);
	}
	return true;
}

bool func_330(bool bParam0, float fParam1)
{
	*fParam1 = func_393(bParam0, 1);
	return *fParam1 != 0;
}

bool func_331(bool bParam0, float fParam1)
{
	*fParam1 = func_394(bParam0, 1, 0);
	return *fParam1 != 0;
}

bool func_332()
{
	return Global_1915643.f_22477;
}

bool func_333(int iParam0)
{
	if (iParam0 == 34 && Global_1915643.f_22504.f_1)
	{
		return true;
	}
	if (func_395(1))
	{
		if (Global_1915643.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_334(bool bParam0, bool bParam1)
{
	struct<47> Var0;
	int iVar471;
	int iVar472;
	int iVar473;
	int iVar474;
	int iVar475;

	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(bParam0, &Var0, &iVar471, 10) || iVar471 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (Var0[iVar474 /*47*/] == bParam1)
		{
			iVar473 = Var0[iVar474 /*47*/].f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = Var0[iVar474 /*47*/].f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar472))
				{
					return true;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return false;
}

int func_335(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (bParam1 == -2.401104E+18f)
	{
		iVar0 = func_320(bParam0, -2.401104E+18f, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_225(iVar0))
		{
			if (Global_1915643.f_20644)
			{
				func_397(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_396(iVar0)));
			}
			return 0;
		}
	}
	else if (bParam1 == -982726.7f)
	{
		iVar1 = func_320(bParam0, -982726.7f, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_224(iVar1))
		{
			if (Global_1915643.f_20644)
			{
				func_397("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam1 == 0.003804697f)
	{
		return 1;
	}
	if (!func_146(bParam0, bParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_336(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_398(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_337(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_398(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_338(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_398(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_339(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_398(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_340(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_398(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_341(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_398(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_342(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_398(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_343(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_398(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_344(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_398(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_345(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_398(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_346(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_398(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_347(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_398(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_348(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_398(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_349(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_398(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_350(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_398(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_351(bool bParam0)
{
	bool bVar0;

	bVar0 = func_248(bParam0);
	if (func_249(bVar0, 2))
	{
		return true;
	}
	return false;
}

int func_352(int* iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar4;
	struct<5> Var5[16];
	bool bVar86;
	struct<4> Var87;
	int iVar91;

	if (!func_249(bParam1, 2))
	{
		return 0;
	}
	uVar2 = 1;
	func_399(bParam1, &uVar2, &uVar1, &Var5, &iVar0);
	if (func_201(iParam4, 8) && !func_400(bParam1, bParam2, iParam3))
	{
		return 0;
	}
	iVar4 = 0;
	while (iVar4 < iVar0)
	{
		if (Var5[iVar4 /*5*/].f_1 == -5.45926E-19f)
		{
			bVar86 = Var5[iVar4 /*5*/];
			if (func_201(iParam4, 4))
			{
				if (!func_355(iParam0, bVar86, Var87, iVar91, bParam2, (iParam3 * Var5[iVar4 /*5*/].f_4), 1, 1))
				{
					return 0;
				}
			}
		}
		iVar4++;
	}
	return 1;
}

bool func_353(bool bParam0, struct<4> Param1, int iParam5)
{
	struct<10> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_246(Param1, &Var0, 1, 0, -1))
	{
		return false;
	}
	if (!func_316(bParam0, func_150(Var0.f_4), iParam5))
	{
		return false;
	}
	return true;
}

bool func_354(bool bParam0, bool bParam1, int iParam2)
{
	if (func_201(iParam2, 1))
	{
		if (!func_401(bParam0))
		{
			return false;
		}
	}
	if (func_201(iParam2, 2))
	{
		if (func_402(bParam0, bParam1, 1))
		{
			return false;
		}
	}
	return true;
}

bool func_355(int* iParam0, bool bParam1, struct<4> Param2, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (!bParam10 && !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param2))
	{
		return false;
	}
	Var0.f_4 = iParam6;
	Var0 = { Param2 };
	iVar5 = func_253(bParam1, Param2, iParam6, 1, !bParam10, 0);
	iVar6 = func_252(bParam1, &Var0, !bParam10, 1);
	if (bParam9)
	{
		iVar7 = 1;
	}
	else if (func_403(bParam1, bParam7, &iVar7, 0))
	{
	}
	iVar8 = (func_404(iParam0, bParam1) * iVar7);
	if (iVar8 > 0)
	{
	}
	if (iVar6 >= 0)
	{
		iVar9 = (iVar6 - (iVar5 + iVar8));
		iVar10 = (iParam8 * iVar7);
		if (iVar10 > iVar6)
		{
			iVar10 = iVar6;
		}
		if (iVar9 <= 0)
		{
			return false;
		}
		else if ((iVar10 - iVar9) >= iVar7)
		{
			return false;
		}
	}
	return true;
}

int func_356(int* iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar6;

	if (func_405(bParam1, 1) && !func_406(bParam1, 1))
	{
		if (Global_1915643.f_20644)
		{
			func_397(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (bParam2 == -2.401104E+18f)
	{
		iVar0 = func_254(bParam1, -2.401104E+18f, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * iParam3);
		if (!func_225((iVar1 + func_407(iParam0, bParam2))))
		{
			if (Global_1915643.f_20644)
			{
				func_397(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (bParam2 == -982726.7f)
	{
		iVar2 = func_254(bParam1, -982726.7f, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * iParam3);
		if (!func_224((iVar3 + func_407(iParam0, bParam2))))
		{
			if (Global_1915643.f_20644)
			{
				func_397("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam2 == 0.003804697f)
	{
		return 1;
	}
	if (func_249(func_248(bParam1), 2))
	{
		if (!func_408(func_248(bParam1), iParam3, bParam2, &uVar4, 1))
		{
			return 0;
		}
	}
	else if (func_143(bParam1, 0))
	{
		if (!func_142(bParam1, iParam3, bParam2, &uVar4, &uVar6, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_357(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_409(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_358(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_409(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_359(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_409(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_360(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_409(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_361(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_409(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_362(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_409(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_363(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_409(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_364(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_409(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_365(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_409(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_366(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_409(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_367(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_409(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_368(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_409(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_369(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_409(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_370(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_409(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_371(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_409(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

struct<8> func_372(bool bParam0, int iParam1, int iParam2)
{
	struct<8> Var0;

	bParam0->f_2 = iParam1;
	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&Var0, bParam0))
	{
	}
	return Var0;
}

var func_373(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	if (!func_46(&uParam0, 30, iParam5, 0, 1))
	{
		return 0;
	}
	return func_109(&uParam0, 61, 1);
}

int func_374(int iParam0)
{
	switch (iParam0)
	{
		case -1813649426:
			return 1;
		case -1728078503:
			return 2;
		case 664704845:
			return 4;
		case -656485570:
			return 8;
		case 856889675:
			return 16;
		case -40729341:
			return 32;
		case 513761045:
			return 64;
		case -608370326:
			return 128;
		case joaat("ASF_BLOCK_SKIPPING"):
			return 256;
		case -1138842803:
			return 512;
		case 1959327570:
			return 1024;
		case joaat("ASF_ENABLE_LETTER_BOX"):
			return 2048;
		case -1303182884:
			return 4096;
		case 1317645850:
			return 8192;
		case 2020911072:
			return 16384;
		case 1930555512:
			return 32768;
		default:
			break;
	}
	return 0;
}

int func_375(int iParam0)
{
	return iParam0;
}

int func_376(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ASSE_GIVE_OWNERSHIP"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_377(int iParam0)
{
	switch (iParam0)
	{
		case -1420685820:
			return 1;
		case -445480404:
			return 2;
		case -138533181:
			return 4;
		case 675169979:
			return 16;
		case 1324736666:
			return 8;
		case 74623641:
			return 64;
		default:
			break;
	}
	return 0;
}

int func_378(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MALE"):
			return 1;
		case joaat("FEMALE"):
			return 2;
		case joaat("STANDING"):
			return 4;
		case joaat("CROUCHING"):
			return 8;
		default:
			break;
	}
	return 0;
}

bool func_379(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_380()
{
	return Global_1102813.f_3672;
}

void func_381(bool bParam0, var uParam1, var uParam2)
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

struct<18> func_382(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_383(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_384(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_292(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_385(int iParam0)
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

int func_386(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_410(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_292(bParam1), iParam0, bParam3);
}

bool func_387(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

bool func_388(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_250(bParam2, -3.294982E+22f);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(bParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_411(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<17> func_389(bool bParam0, var uParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0 = { func_239(bParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = bParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_390(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_412(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_391(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1292096.f_20)
	{
		if (Global_1292096.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1292096.f_20.f_1[iVar0 /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1292096.f_20.f_1[iVar0 /*21*/].f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1292096.f_20.f_1[iVar0 /*21*/].f_2 = iParam2;
				Global_1292096.f_20.f_1[iVar0 /*21*/].f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_413(iParam0, iParam1, iParam2, iParam3);
}

int func_392(int* iParam0)
{
	return func_414(iParam0->f_1);
}

bool func_393(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	bool bVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		bVar33 = func_415(iVar0, 1, 0);
		if (!func_236(bParam0, bVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_416(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_228(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
					{
						return bVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (Var2[iVar34 /*2*/] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_394(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	bool bVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		bVar40 = func_415(iVar0, 0, 1);
		if (!func_236(bParam0, bVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			bVar5 = false;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_417(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_228(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (Var9[iVar41 /*2*/] == 3.996812E+36f || Var9[iVar41 /*2*/] == 3.414007E-11f)
				{
					if ((bParam2 && Var9[iVar41 /*2*/] == 3.996812E+36f) || (!bParam2 && Var9[iVar41 /*2*/] == 3.414007E-11f))
					{
						if (bVar4 == 0 || (bVar6 && Var9[iVar41 /*2*/].f_1 < iVar2))
						{
							bVar5 = bVar40;
							iVar3 = Var9[iVar41 /*2*/].f_1;
							iVar7 = 1;
						}
					}
					else if (bVar4 == 0 || Var9[iVar41 /*2*/].f_1 < iVar2)
					{
						bVar5 = bVar40;
						iVar3 = Var9[iVar41 /*2*/].f_1;
						iVar7 = 0;
					}
				}
				else if (Var9[iVar41 /*2*/] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && bVar5 != 0)
			{
				bVar4 = bVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return bVar4;
}

bool func_395(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

int func_396(int iParam0)
{
	return (iParam0 / 100);
}

void func_397(char* sParam0)
{
	Global_1915643.f_22470 = func_203(sParam0, 10000, 0, 0, 0, 1);
}

bool func_398(int* iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;

	if (*iParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if ((*uParam3)[iVar0 /*2*/] == 0 || (uParam3[iVar0 /*2*/])->f_1 == 0)
		{
			Jump @101; //curOff = 54
		}
		else if (!func_418((*uParam3)[iVar0 /*2*/], (uParam3[iVar0 /*2*/])->f_1, iParam5[iVar0 /*42*/]))
		{
			return false;
		}
		iVar0++;
	}
	return func_419(iParam0, iParam1, iParam5, iParam2, bParam6);
}

int func_399(bool bParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	struct<5> Var0;
	bool bVar5;
	int iVar12;
	int iVar13;
	int iVar14;

	if (!func_249(bParam0, 2))
	{
		return 0;
	}
	if (*uParam2 > *uParam1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < *uParam1)
	{
		iVar12++;
	}
	iVar14 = ITEMDATABASE::_0x799FCD53358ED5FA(bParam0, uParam1);
	iVar13 = 0;
	while (iVar13 < iVar14)
	{
		if (ITEMDATABASE::_0xC4146375D8A0B374(bParam0, uParam1, iVar13, &Var0))
		{
			if ((*uParam1)[0] == 0)
			{
				(*uParam1)[0] = Var0;
			}
			else
			{
				*uParam2++;
				(*uParam1)[*uParam2] = Var0;
			}
			if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(Var0, &bVar5))
			{
				if (func_143(bVar5, 0))
				{
					if (*iParam4 >= 0 && *iParam4 < *uParam3)
					{
						*(uParam3[*iParam4 /*5*/]) = { Var0 };
						*iParam4++;
					}
					else
					{
						return 0;
					}
				}
			}
			(*uParam1)[*uParam2] = 0;
			if (*uParam2 > 0)
			{
				*uParam2 = (*uParam2 - 1);
			}
		}
		iVar13++;
	}
	return 1;
}

bool func_400(bool bParam0, bool bParam1, int iParam2)
{
	struct<37> Var0;
	var uVar47;

	Var0.f_4 = 15;
	Var0.f_36 = 10;
	func_420(bParam0, bParam1, &Var0);
	if (bParam1 == -2.401104E+18f)
	{
		if (Var0.f_3 == 0)
		{
		}
		if (!func_225((Var0.f_3 * iParam2)))
		{
			if (Global_1915643.f_20644)
			{
				func_397(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_396((Var0.f_3 * iParam2))));
			}
			return false;
		}
	}
	else if (bParam1 == -982726.7f)
	{
		if (Var0.f_3 == 0)
		{
		}
		if (!func_224((Var0.f_3 * iParam2)))
		{
			if (Global_1915643.f_20644)
			{
				func_397("SHOP_H_TOO_POOR");
			}
			return false;
		}
	}
	else if (bParam1 == 0.003804697f)
	{
		return true;
	}
	if (!func_408(bParam0, iParam2, bParam1, &uVar47, 1))
	{
		return false;
	}
	return true;
}

bool func_401(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (bParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_291() == -1)
	{
		if (func_251(bParam0))
		{
			iVar1 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
			bVar0 = UNLOCK::UNLOCK_IS_VISIBLE(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = UNLOCK::UNLOCK_IS_VISIBLE(bParam0);
	}
	return bVar0;
}

bool func_402(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_143(bParam0, 0))
	{
		return func_421(func_248(bParam0), bParam1, bParam2);
	}
	if (func_218(bParam0) || func_219(bParam0, 2.791187f))
	{
		return func_334(func_220(bParam0, 1), bParam1);
	}
	if ((bParam2 && func_291() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
	{
		return true;
	}
	if (!func_422(bParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

bool func_403(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_143(bParam0, 0) && !func_249(func_248(bParam0), 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(bParam0, bParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return false;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return true;
}

int func_404(int* iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<12> Var3;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		iVar2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -5.45926E-19f;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*iParam0, iVar1, &Var3))
			{
			}
			else if (Var3.f_8 != bParam1)
			{
			}
			else
			{
				iVar0 = (iVar0 + Var3.f_9);
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_405(bool bParam0, bool bParam1)
{
	if (!func_219(bParam0, 5.908991E-05f))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_219(bParam0, -0.4876374f))
		{
			return func_220(bParam0, 1) != 0;
		}
		if ((func_402(bParam0, -982726.7f, 0) || func_402(bParam0, 2.273041E-17f, 0)) || func_402(bParam0, -2.401104E+18f, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_406(bool bParam0, bool bParam1)
{
	bool bVar0;
	var uVar1;

	bVar0 = func_423(bParam0, 1);
	if (bVar0 == 0)
	{
		return false;
	}
	if (func_334(bVar0, -8.816258E-39f))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_146(bVar0, -8.816258E-39f, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

int func_407(int* iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		iVar2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -5.45926E-19f;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*iParam0, iVar1, &Var3))
			{
			}
			else if (bParam1 != Var3.f_13)
			{
			}
			else
			{
				iVar0 = (iVar0 + (func_254(Var3.f_8, bParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_408(bool bParam0, int iParam1, bool bParam2, var uParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;

	if (!func_424(bParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam4 && func_222(0)) && !func_223());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (Var0[iVar34 /*2*/] == 0 || Var0[iVar34 /*2*/] == 3.078375E+12f)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34 /*2*/].f_1 * iParam1);
			if (Var0[iVar34 /*2*/] == 3.996812E+36f && func_224(iVar32))
			{
				Jump @217; //curOff = 139
			}
			else if (Var0[iVar34 /*2*/] == 3.414007E-11f && func_225(iVar32))
			{
			}
			else
			{
				iVar33 = func_228(Var0[iVar34 /*2*/], 0, !bVar35, 0);
				if (iVar33 >= iVar32)
				{
				}
				else
				{
					*uParam3 = { Var0[iVar34 /*2*/] };
					return false;
				}
			}
			iVar34++;
		}
	}
	return true;
}

bool func_409(int* iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (*iParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if ((*uParam3)[iVar0 /*2*/] == 0 || (uParam3[iVar0 /*2*/])->f_1 == 0)
		{
			Jump @106; //curOff = 54
		}
		else if (!func_418((*uParam3)[iVar0 /*2*/], ((uParam3[iVar0 /*2*/])->f_1 * iParam1->f_9), iParam5[iVar0 /*42*/]))
		{
			return false;
		}
		iVar0++;
	}
	return func_425(iParam0, iParam1, iParam5, iParam2, bParam6, iParam7);
}

bool func_410(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_411(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((uParam0[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((uParam0[iVar0 /*6*/])->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_426(uParam0[iVar0 /*6*/]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(uParam0[*iParam1 /*6*/]) = { *(uParam0[iVar0 /*6*/]) };
				(uParam0[*iParam1 /*6*/])->f_4 = (uParam0[iVar0 /*6*/])->f_4;
			}
			if ((uParam0[iVar0 /*6*/])->f_5 > iParam2)
			{
				(uParam0[*iParam1 /*6*/])->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(uParam0[*iParam1 /*6*/])->f_5 = (uParam0[iVar0 /*6*/])->f_5;
				iParam2 = (iParam2 - (uParam0[*iParam1 /*6*/])->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(uParam0[iVar0 /*6*/]) = { func_313() };
				(uParam0[iVar0 /*6*/])->f_4 = 0;
				(uParam0[iVar0 /*6*/])->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

bool func_412(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_413(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1292096.f_20 < 20)
	{
		Global_1292096.f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1292096.f_20.f_1[iVar0 /*21*/] = { Global_1292096.f_20.f_1[iVar0 + 1 /*21*/] };
			iVar0++;
		}
	}
	func_427(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_414(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_428(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_391(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_391(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

int func_415(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 1.50231E-31f;
			case 1:
				return 7.482014E-08f;
			case 2:
				return -0.1784743f;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 3.161818E-36f;
			case 1:
				return 1.559489f;
			case 2:
				return -4.89907E-28f;
			case 3:
				return -2.939334E-18f;
			case 4:
				return -7.965987E-05f;
			default:
				break;
		}
	}
	return 0;
}

bool func_416(bool bParam0)
{
	return func_150(bParam0) == 4.029065E+31f;
}

bool func_417(bool bParam0)
{
	return func_150(bParam0) == -1.955052E+34f;
}

bool func_418(bool bParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	struct<6> Var7[10];
	int iVar68;
	int iVar69;

	*uParam2 = bParam0;
	if (func_395(0))
	{
		iVar5 = func_226(func_429(), bParam0);
		if (iVar5 != 0)
		{
			Var0 = { func_237(1) };
			Var0.f_4 = func_295(iVar5);
			uParam2->f_1[0 /*4*/] = { func_239(bParam0, Var0, Var0.f_4, 1) };
			if (INVENTORY::_INVENTORY_IS_GUID_VALID(&(uParam2->f_1[0 /*4*/])))
			{
				return true;
			}
		}
	}
	iVar6 = func_250(bParam0, -3.294982E+22f);
	if (iVar6 != 0)
	{
		if (!func_388(&Var7, &iVar68, bParam0, iVar6, iParam1, 1) || iVar68 < 1)
		{
			return false;
		}
		iVar69 = 0;
		while (iVar69 < iVar68)
		{
			uParam2->f_1[iVar69 /*4*/] = { func_239(bParam0, Var7[iVar69 /*6*/], Var7[iVar69 /*6*/].f_4, 1) };
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(uParam2->f_1[iVar69 /*4*/])))
			{
				return false;
			}
			iVar69++;
		}
		return true;
	}
	Var0 = { func_148(bParam0, 1, 0) };
	uParam2->f_1[0 /*4*/] = { func_239(bParam0, Var0, Var0.f_4, 1) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(uParam2->f_1[0 /*4*/])))
	{
		return false;
	}
	return true;
}

bool func_419(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam3 != 1.704487E-19f && iParam3 != -1.82867E-29f)
	{
		return false;
	}
	if (!func_430(*iParam1))
	{
		return false;
	}
	if (!func_431(iParam0, iParam3))
	{
		return false;
	}
	if (NETSHOPPING::_0xA3B8D31C13CB4239(*iParam0, 1.704487E-19f, iParam1, 18, iParam2, *iParam2))
	{
	}
	else
	{
		return false;
	}
	return func_432(iParam0, bParam4);
}

bool func_420(bool bParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = ITEMDATABASE::_0x7A35A72A692BE9DB(bParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(bParam0, iVar0, uParam2) && *uParam2 == bParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_421(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_249(bParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_291() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
	{
		return 1;
	}
	if (!func_433(bParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_422(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_143(bParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(bParam0, bParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

bool func_423(bool bParam0, bool bParam1)
{
	if (!func_405(bParam0, bParam1))
	{
		return false;
	}
	if (bParam0 == 5.725531E+31f)
	{
		return func_220(1.90694E+21f, 1);
	}
	else if (bParam0 == 3.260984E-38f)
	{
		return func_220(0.0002301198f, 1);
	}
	else if (bParam0 == 1.541746E-27f)
	{
		return func_220(-1.766809E-31f, 1);
	}
	else if (bParam0 == -1.84846E-25f)
	{
		return func_220(-3.589852E-30f, 1);
	}
	else if (bParam0 == 1.806564E-25f)
	{
		return func_220(-6.181976E+29f, 1);
	}
	else if (bParam0 == -6.888817E-09f)
	{
		return func_220(-7.708751E+16f, 1);
	}
	return func_220(bParam0, 1);
}

bool func_424(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_249(bParam0, 2))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0x388088BFF3681189(bParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUNDLE(bParam0, bParam1, iVar0, uParam2[iVar0 /*2*/]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_434(bParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_425(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if ((iParam3 != 4.059549E+37f && iParam3 != -3.415538E-09f) && iParam3 != 7.184882E+22f)
	{
		return false;
	}
	if (!func_435(iParam3, iParam1, iParam5))
	{
		return false;
	}
	if (!func_431(iParam0, iParam3))
	{
		return false;
	}
	if (func_436(*iParam0, iParam3, iParam1, iParam2))
	{
	}
	else
	{
		return false;
	}
	return func_432(iParam0, bParam4);
}

bool func_426(var uParam0)
{
	if (!func_437(uParam0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(uParam0);
}

void func_427(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_438(&(uParam0->f_4));
}

int func_428(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1292096.f_20)
	{
		if (Global_1292096.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			return Global_1292096.f_20.f_1[iVar0 /*21*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_429()
{
	return Global_1915643.f_20241;
}

bool func_430(struct<18> Param0)
{
	if (!func_311(Param0.f_17))
	{
		return false;
	}
	return true;
}

bool func_431(int* iParam0, int iParam1)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		if (!func_439(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 != iParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) >= 50)
	{
		if (!func_440(iParam0))
		{
			return false;
		}
		if (!func_439(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_432(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_440(iParam0);
	}
	return true;
}

bool func_433(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_249(bParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_420(bParam0, bParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

void func_434(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_0xA97EE5E4589FCF5A(bParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if ((*uParam2)[iVar0 /*2*/] == 3.414007E-11f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 1120403456))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 1120403456))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_150((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_435(int iParam0, int iParam1, int iParam2)
{
	if (iParam1->f_9 < 1)
	{
		return false;
	}
	if (!func_143(iParam1->f_8, 0) && !func_249(func_248(iParam1->f_8), 2))
	{
		return false;
	}
	if (func_201(iParam2, 128))
	{
		if (!func_249(func_248(iParam1->f_8), 2))
		{
			if (func_150(iParam1->f_8) == 0)
			{
				return false;
			}
		}
	}
	if (func_201(iParam2, 16))
	{
		if (!func_323(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_436(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam3, *iParam3);
}

bool func_437(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_438(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -5.149929E+33f;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

bool func_439(int* iParam0, int iParam1)
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(iParam0, 2.249603E-13f, iParam1))
	{
		return false;
	}
	return true;
}

bool func_440(int* iParam0)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		func_391(*iParam0, 0, 0, 0);
		return true;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_391(*iParam0, 4, 0, 0);
		return true;
	}
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*iParam0))
	{
		func_391(*iParam0, 2, 0, 0);
		return false;
	}
	func_391(*iParam0, 1, 0, 0);
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 == 4.059549E+37f || iVar0 == 1.704487E-19f)
	{
		iParam0->f_3 = 1;
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	return true;
}

