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
	int iLocal_19 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(512))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
		{
		}
		func_1();
		return;
	}
	func_2();
	Global_1878407.f_1822 = 0;
	Global_1878407 = 0;
	Global_1878407.f_1822 = 0;
	while (!func_3(0, 0))
	{
		if (!Global_1878407.f_7185)
		{
			BUILTIN::WAIT(0);
		}
		else if (func_4(68))
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			func_5();
			func_6();
			BUILTIN::WAIT(0);
		}
	}
	func_1();
}

void func_1()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2()
{
	func_7(32, -1);
	func_8();
	if (func_9())
	{
		func_10();
	}
	func_11(&Global_1220625);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1220625, 80, 45);
	func_12(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1220625), 80, "g_mpFlowData");
	func_13(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_14(&Global_1220301, 1);
}

bool func_3(bool bParam0, bool bParam1)
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

bool func_4(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

void func_5()
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = Global_1220625 + 1;
	if (iVar0 > 25)
	{
		iVar0 = 0;
	}
	Global_1220625 = iVar0;
	func_15();
}

void func_6()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar0 = -1;
	iVar1 = 0;
	iVar2 = 3;
	func_16(&iVar2);
	Global_1900460.f_68 = func_17(0, 1, 0);
	while (iVar1 < iVar2 && !bVar3)
	{
		if (!MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[iLocal_19 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[iLocal_19 /*4*/], 1))
			{
				iVar0 = iLocal_19;
				func_18(iVar0, 0);
				if (Global_1878407.f_9[iVar0])
				{
					func_18(iVar0, 1);
					if (Global_1878407.f_9[iVar0])
					{
						Global_1878407.f_9[iVar0] = 0;
					}
				}
			}
			iVar1++;
		}
		iLocal_19++;
		if (iLocal_19 >= Global_1878407.f_7184)
		{
			if (!Global_1878407.f_1822)
			{
				Global_1878407 = 0;
			}
			Global_1878407.f_1822 = 0;
			iLocal_19 = 0;
		}
		if (MISC::_GET_MAX_NUM_INSTRUCTIONS() - MISC::_GET_NUMBER_OF_INSTRUCTIONS()) <= BUILTIN::FLOOR((BUILTIN::TO_FLOAT(MISC::_GET_MAX_NUM_INSTRUCTIONS()) * 1045220557))
		{
			bVar3 = true;
		}
	}
}

void func_7(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_10();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	iVar1 = MISC::GET_GAME_TIMER();
	iVar2 = NETWORK::NETWORK_GET_TIMEOUT_TIME();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (MISC::GET_GAME_TIMER() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			func_10();
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
				case 1:
					func_10();
					break;
				case 2:
					func_10();
					break;
				case 4:
					func_10();
					break;
				case 3:
					func_10();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_10();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_10();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_10();
		}
		if (func_19() == 0)
		{
			if (func_20())
			{
				func_10();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_10();
	}
	return 1;
}

bool func_9()
{
	if (Global_1572887.f_10)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	return false;
}

void func_10()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_11(var uParam0)
{
	vector3 vVar0;
	int iVar3;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	*uParam0 = 0;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 26)
	{
		uParam0->f_1[iVar3 /*3*/] = { vVar0 };
		iVar3++;
	}
}

int func_12(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_13(bool bParam0)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	iVar0 = (MISC::GET_SYSTEM_TIME() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
				case 1:
					func_10();
					break;
				case 2:
					func_10();
					break;
				case 4:
					func_10();
					break;
				case 3:
					func_10();
					break;
				default:
					break;
			}
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return;
		}
		if (MISC::GET_SYSTEM_TIME() >= iVar0)
		{
			func_10();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_14(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_15()
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (Global_1220625 < 13 || Global_1220625 > 25)
	{
		return;
	}
	if (func_21(Global_1220625) && !func_22())
	{
		func_23(Global_1220625);
	}
	else
	{
		func_24(Global_1220625);
	}
}

void func_16(int iParam0)
{
	int iVar0;

	if (GANG::NETWORK_IS_GANG_ID_VALID(Global_1295619.f_10) || GANG::NETWORK_IS_GANG_ACTIVE(Global_1295619.f_10))
	{
		if (((Global_1295619.f_11 != Global_1295619 && Global_1295619.f_11 >= 0) && Global_1295619.f_11 < 32) && NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295619.f_149[Global_1295619.f_11]))
		{
			func_25();
			Global_1878407.f_5++;
			*iParam0 = 0;
		}
		else if (Global_1878407.f_5 > 0)
		{
			if (func_26() > 0)
			{
				iVar0 = MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - func_26()));
				if (iVar0 < 120)
				{
					Global_1878407.f_5++;
					*iParam0 = 0;
					return;
				}
				func_27(0);
			}
			func_28();
			Global_1878407.f_5 = 0;
		}
	}
	else if (Global_1878407.f_5 > 0)
	{
		Global_1878407.f_5 = 0;
	}
}

bool func_17(int iParam0, bool bParam1, bool bParam2)
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
		if (func_29())
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
	if (iParam0 == 0 && func_31(func_30(0)))
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
	switch (func_32(func_30(0)))
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

void func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_1878407.f_7185.f_1[iParam0 /*4*/].f_1;
	iVar1 = iVar0;
	iVar2 = Global_1878407.f_7134[iParam0 /*2*/];
	iVar3 = Global_1878407.f_7134[iParam0 /*2*/].f_1;
	if (iVar0 < iVar2)
	{
		return;
	}
	if (iVar0 > iVar3)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[iParam0 /*4*/], 1))
	{
		return;
	}
	if (MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[iParam0 /*4*/], 2))
	{
		return;
	}
	func_33(iParam0, iVar0);
	iVar0 = Global_1878407.f_7185.f_1[iParam0 /*4*/].f_1;
	if (Global_1878407.f_1823[iVar0 /*3*/] == 7.327733E-20f)
	{
		func_33(iParam0, iVar0);
	}
	if (bParam1)
	{
		while (iVar1 != Global_1878407.f_7185.f_1[iParam0 /*4*/].f_1)
		{
			iVar1 = Global_1878407.f_7185.f_1[iParam0 /*4*/].f_1;
			func_33(iParam0, Global_1878407.f_7185.f_1[iParam0 /*4*/].f_1);
		}
	}
}

int func_19()
{
	return Global_1572887.f_14;
}

bool func_20()
{
	return Global_1051645.f_8;
}

bool func_21(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_34(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if ((!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar1)) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else if (MISC::_IS_BIT_FLAG_SET(&(Global_1056554[iVar0 /*491*/].f_15.f_21), iParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_22()
{
	int iVar0;

	if (!func_35())
	{
		return false;
	}
	iVar0 = 0;
	switch (Global_1051268)
	{
		case 4:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_23(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	var uVar4;
	int iVar13;
	int iVar14;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!func_36(iParam0))
	{
		return 0;
	}
	if (!func_37(iParam0))
	{
		return 1;
	}
	vVar0 = { func_38(iParam0) };
	fVar3 = func_39(iParam0);
	switch (func_40(iParam0))
	{
		case 0:
			if (VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(vVar0, fVar3, false, 0, 0))
			{
				if (func_41(&uVar4, iParam0))
				{
					iVar13 = VOLUME::_FIND_VOLUME_LOCK_REQUEST_ID_WITH_ARGS(&uVar4);
					if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iVar13))
					{
						return 1;
					}
				}
			}
			else if (!func_42())
			{
			}
			else
			{
				func_43(iParam0, 1);
				Jump @377; //curOff = 168
				if (!func_41(&uVar4, iParam0))
				{
					func_43(iParam0, 0);
				}
				else
				{
					func_44(iParam0, VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&uVar4));
					func_43(iParam0, 2);
					Jump @377; //curOff = 212
					if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(func_45(iParam0)))
					{
						func_43(iParam0, 0);
					}
					else
					{
						iVar14 = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(func_45(iParam0));
						switch (iVar14)
						{
							case 4:
								func_43(iParam0, 0);
								break;
							case 1:
							case 2:
								break;
							case 3:
								func_46(iParam0, VOLUME::_0x351D71B8B72B858B(func_45(iParam0)));
								if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(func_47(iParam0)))
								{
									func_43(iParam0, 0);
									return 0;
								}
								func_43(iParam0, 3);
								break;
						}
						Jump @377; //curOff = 347
						if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(func_47(iParam0)))
						{
							return 1;
						}
						func_43(iParam0, 0);
					}
				}
			}
			return 0;
			default:
				break;
	}
}

int func_24(int iParam0)
{
	var uVar0;
	int iVar9;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!func_36(iParam0))
	{
		return 0;
	}
	switch (func_40(iParam0))
	{
		case 0:
			if (func_41(&uVar0, iParam0))
			{
				iVar9 = VOLUME::_FIND_VOLUME_LOCK_REQUEST_ID_WITH_ARGS(&uVar0);
				if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iVar9))
				{
					func_46(iParam0, iVar9);
					func_43(iParam0, 3);
				}
			}
			break;
		case 1:
		case 2:
			func_43(iParam0, 0);
			break;
		case 3:
			if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(func_47(iParam0)))
			{
				VOLUME::_RELEASE_LOCK_VOLUME(func_47(iParam0));
			}
			func_43(iParam0, 0);
			break;
	}
	return 1;
}

void func_25()
{
	int iVar0;
	int iVar1;

	if (Global_1878407.f_5 == 0)
	{
		iVar0 = 13;
		while (iVar0 <= 25)
		{
			func_48(iVar0, 1);
			func_49(iVar0, -1, 0, 1, 1, 0, 0);
			func_50(iVar0);
			func_51(iVar0);
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (!func_52(iVar1))
			{
			}
			else if (func_53(iVar1))
			{
				func_54(iVar1, 1, 1, 1);
			}
			else if (func_55(iVar1) && Global_1295619.f_11 != Global_1295619)
			{
				func_54(iVar1, 1, 1, 1);
			}
			iVar1++;
		}
	}
}

int func_26()
{
	return Global_1878407.f_6;
}

void func_27(int iParam0)
{
	Global_1878407.f_6 = iParam0;
}

void func_28()
{
	int iVar0;
	int iVar1;

	iVar0 = 6;
	while (iVar0 <= 10)
	{
		MISC::CLEAR_BIT(&(Global_1878407.f_7185.f_1[iVar0 /*4*/]), 1);
		MISC::SET_BIT(&(Global_1878407.f_7185.f_1[iVar0 /*4*/]), 2);
		Global_1878407.f_7185.f_1[iVar0 /*4*/].f_1 = Global_1878407.f_7134[iVar0 /*2*/];
		iVar0++;
	}
	iVar1 = 1;
	while (iVar1 <= 6)
	{
		if (!Global_1878407.f_7185.f_74[iVar1])
		{
		}
		else
		{
			Global_1878407.f_7185.f_74[iVar1] = 0;
		}
		iVar1++;
	}
	func_56();
	MISC::CLEAR_BIT(&(Global_1878407.f_7185.f_1[5 /*4*/]), 2);
	MISC::SET_BIT(&(Global_1878407.f_7185.f_1[5 /*4*/]), 1);
	MISC::CLEAR_BIT(&(Global_1878407.f_7185.f_1[6 /*4*/]), 2);
	MISC::SET_BIT(&(Global_1878407.f_7185.f_1[6 /*4*/]), 1);
}

bool func_29()
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
	if (!func_31(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_30(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

bool func_31(struct<2> Param0)
{
	if (!func_57(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_58(Param0))
	{
		return false;
	}
	return true;
}

int func_32(var uParam0, var uParam1)
{
	return uParam0;
}

int func_33(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	iVar1 = Global_1878407.f_1823[iParam1 /*3*/];
	iVar2 = Global_1878407.f_1823[iParam1 /*3*/].f_2;
	switch (iVar1)
	{
		case 485486536:
			iVar0 = -2;
			break;
		case 1677774865:
			iVar0 = func_59(iVar2);
			break;
		case -1750917831:
			iVar0 = -2;
			break;
		case 2058194871:
			iVar0 = func_60(iVar2);
			break;
		case 1909997983:
			MISC::SET_BIT(&(Global_1878407.f_7185.f_1[iParam0 /*4*/]), 2);
			iVar0 = -1;
			break;
		case -1878191811:
			iVar0 = func_61(iVar2);
			break;
		case -217347738:
			iVar0 = func_62(iVar2);
			break;
		case 531432813:
			iVar0 = -2;
			break;
		case 1144707570:
			iVar0 = func_63(iVar2);
			break;
		case 1984622930:
			iVar0 = func_64(iVar2);
			break;
		case -661286798:
			iVar0 = func_65(iVar2);
			break;
		case -1532130030:
			iVar0 = func_66(iVar2);
			break;
		case 1174602905:
			iVar0 = func_67(iVar2);
			break;
		case 1111033820:
			iVar0 = func_68(iVar2);
			break;
		case 1986927063:
			iVar0 = func_69(iVar2);
			break;
		case -1982716178:
			iVar0 = func_70(iVar2);
			break;
		case -964850613:
			iVar0 = func_71(iVar2);
			break;
		case -1913176419:
			iVar0 = func_72(iVar2);
			break;
		case 1210875743:
			iVar0 = func_73(iParam0, iVar2);
			break;
		case 427205337:
			iVar0 = func_74(iParam0, iVar2);
			break;
		case 712880499:
			iVar0 = func_75(iParam0, iVar2);
			break;
		case -1664179412:
			iVar0 = func_76(iParam0, iVar2);
			break;
		case 770100737:
			iVar0 = func_77(iVar2);
			break;
		case -2093459088:
			iVar0 = func_78(iParam0, iVar2);
			break;
		case -868169264:
			iVar0 = func_79(iParam0, iVar2);
			break;
		case 1281917784:
			iVar0 = func_80(iParam0, iVar2);
			break;
		case 1098008903:
			iVar0 = func_81(iVar2);
			break;
		case 2088295092:
			iVar0 = func_82(iVar2);
			break;
		case -644074888:
			iVar0 = func_83();
			break;
		case 442701271:
			iVar0 = func_84();
			break;
		case -612537234:
			iVar0 = func_85(iVar2);
			break;
		case 1873982265:
			iVar0 = func_86(iVar2);
			break;
		case -157982035:
			iVar0 = func_87(iVar2);
			break;
		case -1406703909:
			iVar0 = func_88(iVar2);
			break;
		case -2024549018:
			iVar0 = func_89(iVar2);
			break;
		case 535702079:
			iVar0 = func_56();
			break;
		case -1228560642:
			iVar0 = func_90(iVar2);
			break;
		case -2037170240:
			iVar0 = func_91(iVar2);
			break;
		case -1592972575:
			iVar0 = func_92(iVar2);
			break;
		case -1178941194:
			iVar0 = func_93(iVar2);
			break;
		case -157595539:
			iVar0 = func_94();
			break;
		case -1397432621:
			iVar0 = func_95(iVar2);
			break;
		case 645932728:
			iVar0 = func_96(iVar2);
			break;
		case 1232552289:
			iVar0 = func_97();
			break;
		case -673493118:
			iVar0 = func_98();
			break;
		case -1676509288:
			iVar0 = func_99(iVar2);
			break;
		default:
			iVar0 = -2;
			break;
	}
	if (!MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[iParam0 /*4*/], 2))
	{
		if (iVar0 != -1)
		{
			Global_1878407 = 1;
			Global_1878407.f_1822 = 1;
		}
		func_100(iParam0, iVar0);
	}
	return iVar0;
}

bool func_34(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return (iVar0 >= 0 && iVar0 < 64);
}

bool func_35()
{
	return func_31(Global_1051268);
}

bool func_36(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_37(int iParam0)
{
	switch (iParam0)
	{
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return true;
		default:
			break;
	}
	return false;
}

Vector3 func_38(int iParam0)
{
	switch (iParam0)
	{
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return Global_1835011[iParam0 /*72*/].f_19;
		default:
			break;
	}
	return func_101();
}

float func_39(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return 1099956224 /* Float: 18f */;
		case 14:
			return 1109393408 /* Float: 40f */;
		case 15:
			return 1108082688 /* Float: 35f */;
		case 16:
			return 1113325568 /* Float: 55f */;
		case 17:
			return 1112014848 /* Float: 50f */;
		case 21:
			return 1113325568 /* Float: 55f */;
		case 22:
			return 1106247680 /* Float: 30f */;
		case 18:
			return 1112014848 /* Float: 50f */;
		case 19:
			return 1110704128 /* Float: 45f */;
		case 23:
			return 1113325568 /* Float: 55f */;
		case 24:
			return 1113325568 /* Float: 55f */;
		case 20:
			return 1114636288 /* Float: 60f */;
		case 25:
			return 1115815936 /* Float: 65f */;
		default:
			break;
	}
	return 0f;
}

int func_40(int iParam0)
{
	if (!func_36(iParam0))
	{
		return 4;
	}
	return Global_1220625.f_1[iParam0 /*3*/].f_2;
}

bool func_41(bool bParam0, int iParam1)
{
	var uVar0;

	if (!func_36(iParam1))
	{
		return false;
	}
	MISC::COPY_SCRIPT_STRUCT(bParam0, &uVar0, 9);
	*bParam0 = { func_38(iParam1) };
	if (func_102(*bParam0))
	{
		return false;
	}
	bParam0->f_4 = func_39(iParam1);
	bParam0->f_5 = func_103(iParam1);
	bParam0->f_6 = func_104();
	bParam0->f_7 = Global_1835011[iParam1 /*72*/].f_51;
	return true;
}

bool func_42()
{
	if (func_29())
	{
		return false;
	}
	if (func_105() != -1)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_31(func_106()))
	{
		return false;
	}
	return true;
}

void func_43(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!func_36(iParam0))
	{
		return;
	}
	if (Global_1220625.f_1[iParam0 /*3*/].f_2 == iParam1)
	{
		return;
	}
	Global_1220625.f_1[iParam0 /*3*/].f_2 = iParam1;
}

void func_44(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!func_36(iParam0))
	{
		return;
	}
	if (Global_1220625.f_1[iParam0 /*3*/].f_1 == iParam1)
	{
		return;
	}
	Global_1220625.f_1[iParam0 /*3*/].f_1 = iParam1;
}

int func_45(int iParam0)
{
	if (!func_36(iParam0))
	{
		return -1;
	}
	return Global_1220625.f_1[iParam0 /*3*/].f_1;
}

void func_46(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!func_36(iParam0))
	{
		return;
	}
	if (Global_1220625.f_1[iParam0 /*3*/] == iParam1)
	{
		return;
	}
	Global_1220625.f_1[iParam0 /*3*/] = iParam1;
}

int func_47(int iParam0)
{
	if (!func_36(iParam0))
	{
		return -1;
	}
	return Global_1220625.f_1[iParam0 /*3*/];
}

void func_48(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_107(Global_1835011[iParam0 /*72*/].f_1);
	if (!func_108(iVar0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900562[iVar0 /*2*/]))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1900562[iVar0 /*2*/]));
	}
	if (func_109(iVar0, 48))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1835011[iParam0 /*72*/].f_13));
	}
	if (bParam1)
	{
		func_111(func_110(4, iParam0), 0);
		func_112(Global_1835011[iParam0 /*72*/].f_1, 0, 2, 0, 0);
	}
	if (Global_1835011[iParam0 /*72*/].f_32 != -1)
	{
		Global_1835011[iParam0 /*72*/].f_32 = -1;
	}
	func_113(iParam0);
}

void func_49(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_108(iParam1))
	{
		iParam1 = func_107(func_114(iParam0));
		if (!func_108(iParam1))
		{
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*72*/].f_28))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1835011[iParam0 /*72*/].f_28));
		Global_1835011[iParam0 /*72*/].f_66 = 0;
	}
	else if (bParam2 && !Global_26688)
	{
		func_115(iParam0, iParam5, iParam1);
	}
	if (func_109(iParam1, 48))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1835011[iParam0 /*72*/].f_13));
	}
	Var0 = { Global_1835011[iParam0 /*72*/].f_13 };
	if ((bParam3 && !MISC::IS_STRING_NULL_OR_EMPTY(&Var0)) && SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*72*/].f_17, false))
	{
		SCRIPTS::_REQUEST_THREAD_EXIT(Global_1835011[iParam0 /*72*/].f_17);
	}
	if (bParam4)
	{
		func_116(Global_1835011[iParam0 /*72*/].f_1);
	}
	else
	{
		func_117(iParam1, 3831);
	}
	Global_1835011[iParam0 /*72*/].f_71 = 0;
}

void func_50(int iParam0)
{
	var uVar0;

	MemCopy(&uVar0, {Global_1835011[iParam0 /*72*/].f_4}, 3);
	if ((func_19() != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&uVar0)) && SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*72*/].f_8, false))
	{
		SCRIPTS::_REQUEST_THREAD_EXIT(Global_1835011[iParam0 /*72*/].f_8);
	}
}

void func_51(int iParam0)
{
	int iVar0;

	if (!func_34(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
	{
		return;
	}
	if (!func_118(iParam0, iVar0))
	{
		return;
	}
	MISC::_CLEAR_BIT_FLAG(&(Global_1056554[iVar0 /*491*/].f_15.f_21), iParam0);
}

bool func_52(int iParam0)
{
	if (iParam0 <= 0 || iParam0 >= 10)
	{
		return false;
	}
	return true;
}

bool func_53(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return false;
		case 4:
			return false;
		case 5:
			return false;
		case 6:
			return false;
		case 7:
			return false;
		case 8:
			return false;
		case 9:
			return false;
		default:
			break;
	}
	return false;
}

void func_54(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 >= 10 || iParam0 <= 0)
	{
		return;
	}
	if (Global_1291896.f_133[iParam0 /*5*/].f_3 == iParam1)
	{
		return;
	}
	Global_1291896.f_133[iParam0 /*5*/].f_3 = iParam1;
	Global_1291896.f_133[iParam0 /*5*/].f_2 = iParam3;
	Global_1291896.f_133[iParam0 /*5*/].f_1 = iParam2;
}

bool func_55(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return false;
		case 4:
			return true;
		case 5:
			return false;
		case 6:
			return false;
		case 7:
			return false;
		case 8:
			return false;
		case 9:
			return false;
		default:
			break;
	}
	return false;
}

int func_56()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar0 = 13;
	while (iVar0 <= 25)
	{
		bVar2 = func_110(4, iVar0);
		if (bVar2 == 0)
		{
		}
		else
		{
			func_113(iVar0);
			if (Global_1149417.f_4920[iVar0 /*3*/].f_2)
			{
				func_111(bVar2, 0);
			}
		}
		iVar0++;
	}
	iVar1 = 1;
	while (iVar1 <= 9)
	{
		switch (func_119(iVar1, PLAYER::PLAYER_ID()))
		{
			case 3:
			case 4:
			case 6:
				Jump @200; //curOff = 117
				if (!func_53(iVar1) && !func_55(iVar1))
				{
				}
				else
				{
					bVar2 = func_120(3, iVar1);
					if (bVar2 == 0)
					{
					}
					else
					{
						iVar3 = func_121(iVar1);
						if (iVar3 == 0)
						{
						}
						else if (UNLOCK::UNLOCK_IS_VISIBLE(iVar3))
						{
							func_111(bVar2, 0);
						}
					}
				}
				iVar1++;
			}
			return -2;
		}

bool func_57(int iParam0)
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

int func_58(int iParam0)
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

int func_59(int iParam0)
{
	int iVar0;

	if (iParam0 < -1 || iParam0 > Global_1878407.f_7184)
	{
		return -2;
	}
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return -2;
	}
	if (MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[iVar0 /*4*/], 1))
	{
		return -2;
	}
	MISC::SET_BIT(&(Global_1878407.f_7185.f_1[iVar0 /*4*/]), 1);
	if (MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[iVar0 /*4*/], 2))
	{
		MISC::CLEAR_BIT(&(Global_1878407.f_7185.f_1[iVar0 /*4*/]), 2);
	}
	return -2;
}

int func_60(int iParam0)
{
	int iVar0;

	if (iParam0 < -1 || iParam0 > Global_1878407.f_7184)
	{
		return -2;
	}
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return -2;
	}
	if (MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[iVar0 /*4*/], 2))
	{
		return -2;
	}
	MISC::SET_BIT(&(Global_1878407.f_7185.f_1[iVar0 /*4*/]), 2);
	if (!MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[iVar0 /*4*/], 1))
	{
		MISC::SET_BIT(&(Global_1878407.f_7185.f_1[iVar0 /*4*/]), 1);
	}
	return -2;
}

int func_61(int iParam0)
{
	int iVar0;

	iVar0 = (iParam0 % 1000000);
	if (iVar0 < -2 || iVar0 > 15)
	{
		return -2;
	}
	return iVar0;
}

int func_62(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1878407.f_1084[iParam0 /*2*/];
	if (iVar0 <= -1 || iVar0 >= Global_1878407.f_7184)
	{
		return -2;
	}
	if (!MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[iVar0 /*4*/], 1))
	{
		return -2;
	}
	if (MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[iVar0 /*4*/], 2))
	{
		return -2;
	}
	iVar1 = Global_1878407.f_1084[iParam0 /*2*/].f_1;
	iVar2 = Global_1878407.f_7185.f_1[iVar0 /*4*/].f_1;
	iVar3 = Global_1878407.f_7134[iVar0 /*2*/];
	iVar4 = Global_1878407.f_7134[iVar0 /*2*/].f_1;
	if (iVar2 < iVar3)
	{
		return -2;
	}
	if (iVar2 > iVar4)
	{
		return -2;
	}
	iVar5 = iVar3;
	iVar6 = -1;
	while (iVar5 <= iVar4)
	{
		if (Global_1878407.f_1823[iVar5 /*3*/] == 7.327733E-20f)
		{
			iVar6 = Global_1878407.f_1823[iVar5 /*3*/].f_2;
			iVar7 = Global_1878407.f_123[iVar6 /*4*/];
			if (iVar7 == iVar1)
			{
				Global_1878407.f_7185.f_1[iVar0 /*4*/].f_1 = iVar5;
				return -2;
			}
		}
		iVar5++;
	}
	return -2;
}

int func_63(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1878407.f_123[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = 0;
	if (Global_1878407.f_123[iParam0 /*4*/].f_1 == 1)
	{
		iVar1 = 1;
	}
	func_122(iVar0, iVar1);
	return -2;
}

int func_64(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1878407.f_123[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = Global_1878407.f_123[iParam0 /*4*/].f_1;
	func_123(iVar0, iVar1);
	return -2;
}

int func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1878407.f_123[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = Global_1878407.f_123[iParam0 /*4*/].f_1;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return -2;
	}
	bVar2 = false;
	if (Global_1878407.f_123[iParam0 /*4*/].f_2 == 1)
	{
		bVar2 = true;
	}
	func_124(iVar0, iVar1, bVar2);
	return -2;
}

int func_66(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = (Global_1878407.f_123[iParam0 /*4*/] % 1000000);
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	uVar1 = Global_1878407.f_123[iParam0 /*4*/].f_1;
	uVar2 = Global_1878407.f_123[iParam0 /*4*/].f_2;
	if (func_125(iVar0))
	{
		return uVar1;
	}
	return uVar2;
}

int func_67(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1878407.f_123[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = Global_1878407.f_123[iParam0 /*4*/].f_1;
	uVar2 = Global_1878407.f_123[iParam0 /*4*/].f_2;
	uVar3 = Global_1878407.f_123[iParam0 /*4*/].f_3;
	if (func_126(iVar0) == iVar1)
	{
		return uVar2;
	}
	return uVar3;
}

int func_68(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1878407.f_123[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = Global_1878407.f_123[iParam0 /*4*/].f_1;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return -2;
	}
	uVar2 = Global_1878407.f_123[iParam0 /*4*/].f_2;
	uVar3 = Global_1878407.f_123[iParam0 /*4*/].f_3;
	if (func_127(iVar0, iVar1))
	{
		return uVar2;
	}
	return uVar3;
}

int func_69(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1878407.f_123[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == Global_1878407.f_7184)
	{
		return -2;
	}
	uVar1 = Global_1878407.f_123[iParam0 /*4*/].f_1;
	uVar2 = Global_1878407.f_123[iParam0 /*4*/].f_2;
	if (MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[iVar0 /*4*/], 2))
	{
		return uVar1;
	}
	return uVar2;
}

int func_70(int iParam0)
{
	int iVar0;

	iVar0 = (iParam0 % 1000000);
	if (iVar0 == -1 || iVar0 == 7)
	{
		return -2;
	}
	if (!Global_1878407.f_7185.f_74[iVar0])
	{
		return -1;
	}
	return -2;
}

int func_71(int iParam0)
{
	int iVar0;

	iVar0 = (iParam0 % 1000000);
	if (iVar0 == -1 || iVar0 == 7)
	{
		return -2;
	}
	Global_1878407.f_7185.f_74[iVar0] = 1;
	return -2;
}

int func_72(int iParam0)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return -2;
	}
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1878407.f_123[iParam0 /*4*/].f_1;
	iVar1 = Global_1878407.f_123[iParam0 /*4*/];
	if (MISC::IS_BIT_SET(iVar0, 0))
	{
		CLOCK::SET_CLOCK_TIME(func_128(iVar1), CLOCK::GET_CLOCK_MINUTES(), CLOCK::GET_CLOCK_SECONDS());
	}
	if (MISC::IS_BIT_SET(iVar0, 1))
	{
		CLOCK::SET_CLOCK_TIME(CLOCK::GET_CLOCK_HOURS(), func_129(iVar1), CLOCK::GET_CLOCK_SECONDS());
	}
	if (MISC::IS_BIT_SET(iVar0, 2))
	{
		CLOCK::SET_CLOCK_TIME(CLOCK::GET_CLOCK_HOURS(), CLOCK::GET_CLOCK_MINUTES(), func_130(iVar1));
	}
	if (MISC::IS_BIT_SET(iVar0, 3))
	{
		CLOCK::SET_CLOCK_DATE(func_131(iVar1), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
	}
	if (MISC::IS_BIT_SET(iVar0, 4))
	{
		CLOCK::SET_CLOCK_DATE(CLOCK::GET_CLOCK_DAY_OF_MONTH(), func_132(iVar1), CLOCK::GET_CLOCK_YEAR());
	}
	if (MISC::IS_BIT_SET(iVar0, 5))
	{
		CLOCK::SET_CLOCK_DATE(CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), func_133(iVar1));
	}
	return -2;
}

int func_73(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam1 == -1)
	{
		return -2;
	}
	if (!func_134())
	{
		return -2;
	}
	iVar0 = Global_1878407.f_123[iParam1 /*4*/].f_2;
	iVar1 = Global_1878407.f_123[iParam1 /*4*/].f_1;
	iVar2 = Global_1878407.f_123[iParam1 /*4*/];
	if (!Global_1878407.f_28[iParam0])
	{
		if (func_135(Global_1878407.f_7185.f_1[iParam0 /*4*/].f_3))
		{
			Global_1878407.f_66[iParam0] = Global_1878407.f_7185.f_1[iParam0 /*4*/].f_3;
		}
		else
		{
			Global_1878407.f_66[iParam0] = func_136();
			func_137(&(Global_1878407.f_66[iParam0]), iVar0, iVar1, iVar2, 0, 0, 0, 0);
			Global_1878407.f_7185.f_1[iParam0 /*4*/].f_3 = Global_1878407.f_66[iParam0];
		}
		Global_1878407.f_28[iParam0] = 1;
	}
	else
	{
		iVar3 = -1;
		if (func_138(func_136(), Global_1878407.f_66[iParam0], 1) || iVar3 == 0)
		{
			Global_1878407.f_28[iParam0] = 0;
			Global_1878407.f_7185.f_1[iParam0 /*4*/].f_3 = -15;
			if (iVar3 == 0)
			{
				Global_1900595 = MISC::GET_GAME_TIMER();
			}
			return -2;
		}
	}
	return -1;
}

int func_74(int iParam0, int iParam1)
{
	if (!func_134())
	{
		return -2;
	}
	if (!Global_1878407.f_28[iParam0])
	{
		if (iParam1 < 0)
		{
			return -2;
		}
		Global_1878407.f_47[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
		Global_1878407.f_28[iParam0] = 1;
	}
	else if (MISC::GET_GAME_TIMER() > Global_1878407.f_47[iParam0])
	{
		Global_1878407.f_28[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_75(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_134())
	{
		return -2;
	}
	if (!Global_1878407.f_28[iParam0])
	{
		if (iParam1 < 0 || iParam1 > 23)
		{
			return -2;
		}
		iVar0 = iParam1;
		iVar1 = func_136();
		if (func_128(iVar1) > iVar0)
		{
			func_137(&iVar1, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_128(iVar1) != iVar0)
		{
			func_139(&iVar1, 0);
			func_140(&iVar1, 0);
			func_141(&iVar1, iVar0);
		}
		Global_1878407.f_66[iParam0] = iVar1;
		Global_1878407.f_28[iParam0] = 1;
	}
	else if (func_142(Global_1878407.f_66[iParam0], 1))
	{
		Global_1878407.f_28[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_76(int iParam0, int iParam1)
{
	int iVar0;

	if (!Global_1878407.f_28[iParam0])
	{
		iVar0 = iParam1;
		Global_1878407.f_66[iParam0] = iVar0;
		Global_1878407.f_28[iParam0] = 1;
	}
	else if (func_142(Global_1878407.f_66[iParam0], 1))
	{
		Global_1878407.f_28[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_77(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1878407.f_123[iParam0 /*4*/];
	if (iVar0 < 0 || iVar0 >= 24)
	{
		return -2;
	}
	uVar1 = Global_1878407.f_123[iParam0 /*4*/].f_1;
	uVar2 = Global_1878407.f_123[iParam0 /*4*/].f_2;
	if (CLOCK::GET_CLOCK_HOURS() >= iVar0)
	{
		return uVar1;
	}
	return uVar2;
}

int func_78(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	iVar1 = func_143(iVar0);
	if (!func_144(iVar0))
	{
		func_145(iVar1, Global_1835011[iVar0 /*72*/].f_19);
		if (!Global_1940186 & 4096 != 0 && !func_17(0, 1, 1))
		{
			if (!func_146())
			{
				return -1;
			}
			if (func_147(iVar0, 0))
			{
			}
		}
	}
	else
	{
		return -2;
	}
	return -1;
}

int func_79(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	if (func_4(32768))
	{
		return -1;
	}
	if (!func_144(iVar0))
	{
		if (func_148(Global_1940186, 2097152))
		{
			return -1;
		}
		if (!func_148(Global_1940186, 4096) && !func_17(0, 1, 1))
		{
			if ((func_19() == -1 && func_134()) && func_149(&Global_0, 3))
			{
				return -1;
			}
			if (func_147(iVar0, 0))
			{
			}
		}
	}
	else
	{
		return -2;
	}
	return -1;
}

int func_80(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	int iVar3;

	if (iParam1 == -1)
	{
		return -2;
	}
	iVar0 = Global_1878407.f_123[iParam1 /*4*/].f_3;
	if (func_36(iVar0))
	{
		if (func_144(iVar0))
		{
			return -2;
		}
	}
	Var1 = Global_1878407.f_123[iParam1 /*4*/];
	Var1.f_1 = Global_1878407.f_123[iParam1 /*4*/].f_1;
	iVar3 = Global_1878407.f_123[iParam1 /*4*/].f_2;
	if (!Global_1878407.f_85[iParam0])
	{
		Global_1878407.f_104[iParam0] = (func_150(Var1) + iVar3);
		Global_1878407.f_85[iParam0] = 1;
	}
	else if (func_150(Var1) >= Global_1878407.f_104[iParam0])
	{
		return -2;
	}
	return -1;
}

int func_81(int iParam0)
{
	func_151(iParam0);
	return -2;
}

int func_82(int iParam0)
{
	bool bVar0;

	bVar0 = iParam0;
	if (!func_152(bVar0))
	{
		return -1;
	}
	if (func_153(bVar0))
	{
		return -2;
	}
	if (func_154(bVar0, 0, PLAYER::PLAYER_ID(), 0, 0))
	{
		return -2;
	}
	return -1;
}

int func_83()
{
	if (func_155(255))
	{
		return -1;
	}
	return -2;
}

int func_84()
{
	NETWORK::NETWORK_SET_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT(true);
	return -2;
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (!func_146())
	{
		return -1;
	}
	iVar0 = Global_1878407.f_123[iParam0 /*4*/];
	iVar1 = Global_1878407.f_123[iParam0 /*4*/].f_1;
	iVar2 = Global_1878407.f_123[iParam0 /*4*/].f_2;
	if (!func_17(0, 1, 1))
	{
		func_147(iVar0, 0);
		func_147(iVar1, 0);
		func_147(iVar2, 0);
	}
	bVar3 = func_144(iVar0);
	bVar4 = func_144(iVar1);
	bVar5 = func_144(iVar2);
	if (!bVar3)
	{
		func_145(1, Global_1835011[iVar0 /*72*/].f_19);
	}
	else if (!bVar4)
	{
		func_145(1, Global_1835011[iVar1 /*72*/].f_19);
	}
	else if (!bVar5)
	{
		func_145(1, Global_1835011[iVar2 /*72*/].f_19);
	}
	if ((bVar3 && bVar4) && bVar5)
	{
		return -2;
	}
	return -1;
}

int func_86(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = Global_1878407.f_1084[iParam0 /*2*/];
	iVar1 = Global_1878407.f_1084[iParam0 /*2*/].f_1;
	if (!func_152(bVar0))
	{
		return -1;
	}
	if (!NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bVar0))
	{
		UNLOCK::_UNLOCK_SET_NEW(iVar1, true);
	}
	return -2;
}

int func_87(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1878407.f_1084[iParam0 /*2*/];
	if (iVar0 == 0)
	{
		return -2;
	}
	if (func_156(iVar0))
	{
		return -2;
	}
	iVar1 = func_157(iVar0);
	func_145(iVar1, func_158(iVar0));
	func_159(iVar0, 1);
	return -1;
}

int func_88(int iParam0)
{
	int iVar0;

	iVar0 = Global_1878407.f_1084[iParam0 /*2*/];
	if (iVar0 == 0)
	{
		return -2;
	}
	if (func_156(iVar0))
	{
		return -2;
	}
	return -1;
}

int func_89(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (func_160(PLAYER::PLAYER_ID()))
	{
		bVar0 = Global_1878407.f_1084[iParam0 /*2*/];
	}
	else
	{
		bVar0 = Global_1878407.f_1084[iParam0 /*2*/].f_1;
	}
	if (bVar0 == 0 || !func_152(bVar0))
	{
		return -2;
	}
	if (func_154(bVar0, 0, PLAYER::PLAYER_ID(), 0, 0))
	{
		return -2;
	}
	return -2;
}

int func_90(int iParam0)
{
	int iVar0;

	iVar0 = Global_1878407.f_1084[iParam0 /*2*/];
	if (iVar0 == -1)
	{
		return -2;
	}
	if (func_161(iVar0))
	{
		return -1;
	}
	return -2;
}

int func_91(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_1878407.f_1084[iParam0 /*2*/];
	bVar1 = Global_1878407.f_1084[iParam0 /*2*/].f_1 == true;
	if (iVar0 <= -1 || iVar0 >= Global_1878407.f_7184)
	{
		return -2;
	}
	if (func_160(Global_1295619.f_5))
	{
		if (bVar1)
		{
			if (!MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[iVar0 /*4*/], 1))
			{
				MISC::SET_BIT(&(Global_1878407.f_7185.f_1[iVar0 /*4*/]), 1);
				MISC::CLEAR_BIT(&(Global_1878407.f_7185.f_1[iVar0 /*4*/]), 2);
			}
		}
		else if (MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[iVar0 /*4*/], 1))
		{
			iVar2 = 13;
			while (iVar2 <= 25)
			{
				if (func_162(iVar2) != iVar0)
				{
				}
				else if (!func_163(iVar2))
				{
				}
				else
				{
					func_48(iVar2, 1);
					func_49(iVar2, -1, 0, 1, 1, 0, 0);
					func_50(iVar2);
					func_51(iVar2);
				}
				iVar2++;
			}
			Global_1878407.f_7185.f_1[iVar0 /*4*/].f_1 = Global_1878407.f_7134[iVar0 /*2*/];
			MISC::CLEAR_BIT(&(Global_1878407.f_7185.f_1[iVar0 /*4*/]), 1);
			MISC::SET_BIT(&(Global_1878407.f_7185.f_1[iVar0 /*4*/]), 2);
		}
	}
	else if (bVar1)
	{
		if (MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[iVar0 /*4*/], 1))
		{
			iVar3 = 13;
			while (iVar3 <= 25)
			{
				if (func_162(iVar3) != iVar0)
				{
				}
				else if (!func_163(iVar3))
				{
				}
				else
				{
					func_48(iVar3, 1);
					func_49(iVar3, -1, 0, 1, 1, 0, 0);
					func_50(iVar3);
					func_51(iVar3);
				}
				iVar3++;
			}
			Global_1878407.f_7185.f_1[iVar0 /*4*/].f_1 = Global_1878407.f_7134[iVar0 /*2*/];
			MISC::CLEAR_BIT(&(Global_1878407.f_7185.f_1[iVar0 /*4*/]), 1);
			MISC::SET_BIT(&(Global_1878407.f_7185.f_1[iVar0 /*4*/]), 2);
		}
	}
	else if (!MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[iVar0 /*4*/], 1))
	{
		MISC::SET_BIT(&(Global_1878407.f_7185.f_1[iVar0 /*4*/]), 1);
		MISC::CLEAR_BIT(&(Global_1878407.f_7185.f_1[iVar0 /*4*/]), 2);
	}
	return -2;
}

int func_92(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = Global_1878407.f_1084[iParam0 /*2*/];
	bVar1 = Global_1878407.f_1084[iParam0 /*2*/].f_1;
	bVar2 = func_152(bVar1);
	if (!func_152(bVar0))
	{
		if (!bVar2)
		{
			return -1;
		}
		else
		{
			bVar0 = bVar1;
			bVar2 = false;
		}
	}
	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bVar0))
	{
		return -2;
	}
	if (bVar2)
	{
		if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bVar1))
		{
			return -2;
		}
	}
	return -1;
}

int func_93(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar0))
	{
		return -1;
	}
	return -2;
}

int func_94()
{
	int iVar0;
	vector3 vVar1;

	if (Global_13)
	{
		return -1;
	}
	if (func_164(-2.919324E+23f, 1, 1, 0) == 0)
	{
		return -2;
	}
	if (!func_165(4))
	{
		return -2;
	}
	if (!func_166())
	{
		if (Global_1292081.f_12)
		{
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
			Global_1292081.f_12 = 0;
		}
		return -2;
	}
	iVar0 = 0;
	vVar1 = { func_167(Global_1295619) };
	switch (vVar1.y)
	{
		case joaat("CUMBERLAND_FOREST_CAMP"):
		case joaat("GRIZZLIES_CAMP"):
		case joaat("HEARTLAND_CAMP"):
		case joaat("BIG_VALLEY_CAMP"):
		default:
			return -2;
			iVar0 = 2.028573E+07f;
		case joaat("HENNIGANS_STEAD_CAMP"):
		case joaat("RIO_BRAVO_CAMP"):
		case joaat("GREAT_PLAINS_CAMP"):
		case joaat("TALL_TREES_CAMP"):
		case joaat("CHOLLA_SPRINGS_CAMP"):
		case joaat("GAPTOOTH_RIDGE_CAMP"):
			iVar0 = 3.405954E+36f;
			break;
		case joaat("ROANOKE_RIDGE_CAMP"):
		case joaat("BAYOU_NAWAS_CAMP"):
		case joaat("SCARLETT_MEADOWS_CAMP"):
			iVar0 = -1.373345E-15f;
			break;
	}
	if (!func_168(iVar0))
	{
		return -1;
	}
	func_169(0);
	return -2;
}

int func_95(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	iVar0 = func_170(iVar1);
	if (iVar0 == -1)
	{
		return -2;
	}
	if (!NETWORK::NETWORK_SET_MP_MISSION_FLAG_ON_CURRENT_SLOT(true, iVar0))
	{
		return -1;
	}
	return -2;
}

int func_96(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	iVar0 = func_170(iVar1);
	if (iVar0 == -1)
	{
		return -2;
	}
	if (!NETWORK::NETWORK_SET_MP_MISSION_FLAG_ON_CURRENT_SLOT(false, iVar0))
	{
		return -1;
	}
	return -2;
}

int func_97()
{
	int iVar0;

	iVar0 = func_171(-8.839952E-30f, -9.02163E+14f);
	iVar0 = (iVar0 + func_171(-8.839952E-30f, -8.176301E+22f));
	if (iVar0 > 0)
	{
		return -2;
	}
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(-2.942762E-10f))
	{
		return -1;
	}
	return -2;
}

int func_98()
{
	if (UNLOCK::UNLOCK_IS_UNLOCKED(197278.6f) && UNLOCK::UNLOCK_IS_UNLOCKED(-3.066262E+24f))
	{
		return -2;
	}
	return -1;
}

int func_99(int iParam0)
{
	bool bVar0;

	bVar0 = Global_1878407.f_1084[iParam0 /*2*/];
	if (func_172(bVar0, 1))
	{
		return -2;
	}
	return -1;
}

void func_100(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	switch (iParam0)
	{
		case -1:
		case 18:
			return;
		default:
			break;
	}
	if (!MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[iParam0 /*4*/], 1))
	{
		return;
	}
	if (MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[iParam0 /*4*/], 2))
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 == -2)
	{
		Global_1878407.f_66[iParam0] = -15;
		Global_1878407.f_28[iParam0] = 0;
		Global_1878407.f_7185.f_1[iParam0 /*4*/].f_3 = -15;
		Global_1878407.f_7185.f_1[iParam0 /*4*/].f_1++;
		return;
	}
	iVar0 = Global_1878407.f_7185.f_1[iParam0 /*4*/].f_1;
	iVar1 = Global_1878407.f_7134[iParam0 /*2*/];
	iVar2 = Global_1878407.f_7134[iParam0 /*2*/].f_1;
	if (iVar0 < iVar1)
	{
		return;
	}
	if (iVar0 > iVar2)
	{
		return;
	}
	iVar3 = iVar1;
	iVar4 = -1;
	while (iVar3 <= iVar2)
	{
		if (Global_1878407.f_1823[iVar3 /*3*/] == 7.327733E-20f)
		{
			iVar4 = Global_1878407.f_1823[iVar3 /*3*/].f_2;
			iVar5 = Global_1878407.f_123[iVar4 /*4*/];
			if (iVar5 == iParam1)
			{
				Global_1878407.f_7185.f_1[iParam0 /*4*/].f_1 = iVar3;
				return;
			}
		}
		iVar3++;
	}
}

Vector3 func_101()
{
	return 0f, 0f, 0f;
}

bool func_102(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 160;
		default:
			break;
	}
	return 0;
}

float func_104()
{
	return -1.062016E-10f;
}

int func_105()
{
	return Global_1110244.f_21.f_13.f_1;
}

struct<2> func_106()
{
	if (Global_1205789.f_129 <= 0)
	{
		return func_30(0);
	}
	if (Global_1205789.f_130 < 0 || Global_1205789.f_131 == 0)
	{
		return func_30(0);
	}
	return Global_1205789[Global_1205789.f_130 /*4*/].f_1;
}

int func_107(struct<2> Param0)
{
	int iVar0;

	if (Global_1900530 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1900530 - 1))
	{
		if (func_173(Global_1900531[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_108(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

bool func_109(int iParam0, int iParam1)
{
	return (func_108(iParam0) && (Global_1900562[iParam0 /*2*/].f_1 && iParam1) != 0);
}

bool func_110(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -2.16929E+26f;
				case 2:
					return 2.430904E-30f;
				case 3:
					return 2.430904E-30f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 5.113725E+08f;
				case 2:
					return -5.072388E+36f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1.826001E+30f;
				case 2:
					return -5.072388E+36f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -8398490f;
				case 2:
					return -5.072388E+36f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -6.817581E+21f;
				case 2:
					return -5.072388E+36f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 16540788;
				case 2:
					return 1.604061E+11f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -3.728345E+21f;
				case 2:
					return 1.604061E+11f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -2.576421E-33f;
				case 2:
					return 1.604061E+11f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -2.694665E-07f;
				case 2:
					return 1.604061E+11f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return 6.486689f;
				case 2:
					return 1.837849E-27f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return -4.20591E-27f;
				case 2:
					return 1.837849E-27f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					return -0.006915503f;
				case 2:
					return 1.837849E-27f;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
					return 6.307637E+37f;
				case 2:
					return 1.837849E-27f;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1.047846E+13f;
				case 2:
					return -0.03134722f;
				case 3:
					return -4.487723E+27f;
				case 4:
					return -2.921234E-29f;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 9.8756E+23f;
				case 2:
					return -3.045896E-08f;
				case 3:
					return 5.236242E-37f;
				case 4:
					return -13891.08f;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 4.309298E+24f;
				case 2:
					return -737.8187f;
				case 3:
					return 3.751746E-28f;
				case 4:
					return -1.126888E-09f;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1.483273E-16f;
				case 2:
					return -5.794918E-10f;
				case 3:
					return -0.000399424f;
				case 4:
					return 3.240962E+12f;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1.58951E-27f;
				case 2:
					return -9.430125E-20f;
				case 3:
					return -3.236058E-29f;
				case 4:
					return 5212530f;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1.154921E+24f;
				case 2:
					return 2.302753E+28f;
				case 3:
					return 1.472263E-11f;
				case 4:
					return -3.328013E+35f;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -5.17054E+15f;
				case 2:
					return 3.954843E+36f;
				case 3:
					return 6.352565E+19f;
				case 4:
					return -5.603323E-25f;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -8.595918E-19f;
				case 2:
					return 3.666845E-05f;
				case 3:
					return 1.718141E-36f;
				case 4:
					return 6.211594E+22f;
				default:
					break;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1161577f;
				case 2:
					return 1.533561E+07f;
				case 3:
					return -1.126016E-20f;
				case 4:
					return 2.575075E+17f;
				default:
					break;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -2.304346E-06f;
				case 2:
					return -0.2376967f;
				case 3:
					return -6.614576E+13f;
				case 4:
					return 5.256889E+28f;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -6.249073E-06f;
				case 2:
					return 1.948295E+28f;
				case 3:
					return 1.057993E+16f;
				case 4:
					return -9.170274E-35f;
				default:
					break;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -3.430687E-19f;
				case 2:
					return 3.834453E-07f;
				case 3:
					return -4.372376E+14f;
				case 4:
					return 8.202017E-08f;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -2.418275E-27f;
				case 2:
					return -4.52328E+15f;
				case 3:
					return 2.554089E-09f;
				case 4:
					return 4.720443E+11f;
				default:
					break;
			}
			break;
	}
	return false;
}

int func_111(bool bParam0, int iParam1)
{
	struct<30> Var0;

	if (bParam0 == 0)
	{
		return -1;
	}
	if (Global_1292096.f_459.f_1546 >= 40)
	{
		func_174();
		return -1;
	}
	Var0 = -1;
	Var0.f_5.f_1 = 11;
	Var0.f_18.f_1 = 10;
	Var0.f_4 = bParam0;
	Var0 = func_175();
	Var0.f_3 = iParam1;
	func_176(Var0, 0);
	return Var0;
}

void func_112(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;

	if (!func_31(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_177(Param0) && !func_178(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_179(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_180(Param0) == 3)
		{
			func_181(1, -4.059512E-23f);
		}
		else if (func_180(Param0) == 4)
		{
			func_181(0, -4.059512E-23f);
		}
	}
	if ((func_180(Param0) == 3 || func_180(Param0) == 1) || ((bParam5 && func_180(Param0) == 4) && STATS::STATSTRACKER_IS_INITIALIZED(func_179(Param0))))
	{
		if (iParam3 != -1)
		{
			func_182(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_182(Param0, 2, iParam4, 255, 0);
		}
	}
	func_183(Param0, 0);
	if (func_173(func_30(0), Param0))
	{
		func_184(1);
		func_185(0);
		func_186(0);
		func_187(1);
	}
	func_188(Param0);
	Global_1051645.f_45.f_1 = 1;
	iVar0 = func_32(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

void func_113(int iParam0)
{
	Global_1149417.f_4920[iParam0 /*3*/] = UNLOCK::_UNLOCK_IS_NEW(Global_1835011[iParam0 /*72*/].f_3);
	Global_1149417.f_4920[iParam0 /*3*/].f_2 = UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*72*/].f_3);
	Global_1149417.f_4920[iParam0 /*3*/].f_1 = UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*72*/].f_3);
}

struct<2> func_114(int iParam0)
{
	if (!func_36(iParam0))
	{
		return func_189();
	}
	return Global_1835011[iParam0 /*72*/].f_1;
}

int func_115(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_4(32768))
	{
		return 0;
	}
	iVar0 = func_19();
	if (func_190(&(Global_1835011[iParam0 /*72*/].f_30), 512) && !func_190(&(Global_1835011[iParam0 /*72*/].f_30), 1024))
	{
		if (func_191())
		{
			return 0;
		}
	}
	if (Global_1835011[iParam0 /*72*/].f_67)
	{
		return 0;
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*72*/].f_28))
	{
		bVar3 = Global_1835011[iParam0 /*72*/].f_66;
		if (func_192(iParam0, iVar0))
		{
			vVar4 = { func_193(iParam0) };
			Global_1835011[iParam0 /*72*/].f_65 = VOLUME::CREATE_VOLUME_SPHERE(vVar4, 0f, 0f, 0f, 19f, 19f, 19f);
			if (VOLUME::DOES_VOLUME_EXIST(Global_1835011[iParam0 /*72*/].f_65))
			{
				Global_1835011[iParam0 /*72*/].f_28 = MAP::_BLIP_ADD_FOR_VOLUME(6.79561E+21f, Global_1835011[iParam0 /*72*/].f_65);
			}
		}
		else if (bVar3)
		{
			Global_1835011[iParam0 /*72*/].f_28 = MAP::BLIP_ADD_FOR_COORDS(6.79561E+21f, func_194(iParam0));
		}
		else
		{
			Global_1835011[iParam0 /*72*/].f_28 = MAP::BLIP_ADD_FOR_COORDS(6.79561E+21f, func_195(iParam0));
		}
		Global_1835011[iParam0 /*72*/].f_29 = 6.79561E+21f;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2)
			{
				func_196(iParam2, 4194304);
			}
			else
			{
				func_117(iParam2, 4194304);
			}
		}
		MAP::SET_BLIP_FLASH_TIMER(Global_1835011[iParam0 /*72*/].f_28, 72, Global_1835011[iParam0 /*72*/].f_3);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*72*/].f_28))
	{
		return 0;
	}
	func_197(iParam0);
	if (bVar1)
	{
		MAP::SET_BLIP_SPRITE(Global_1835011[iParam0 /*72*/].f_28, Global_1835011[iParam0 /*72*/].f_27, true);
		if (iVar0 != -1)
		{
			MAP::_SET_BLIP_NAME(Global_1835011[iParam0 /*72*/].f_28, &(Global_1835011[iParam0 /*72*/].f_42));
		}
		if (!func_190(&(Global_1835011[iParam0 /*72*/].f_30), 1024))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, 4.185971E-18f);
			func_198(&(Global_1835011[iParam0 /*72*/].f_30), 1024);
		}
		if (func_190(&(Global_1835011[iParam0 /*72*/].f_30), 524288))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, -2.616704E+24f);
		}
		if (func_190(&(Global_1835011[iParam0 /*72*/].f_30), 1048576))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, -2.727505E-29f);
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, 1.231009E-30f);
		}
	}
	return 1;
}

void func_116(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1900530 <= 0)
	{
		return;
	}
	if (!func_31(Param0))
	{
		return;
	}
	if (func_178(Param0))
	{
		func_112(Param0, 0, -1, 0, 0);
	}
	iVar0 = func_107(Param0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (Global_1900530 > 1)
	{
		Global_1900531[iVar1 /*2*/] = { Global_1900531[(Global_1900530 - 1) /*2*/] };
		Global_1900562[iVar1 /*2*/] = { Global_1900562[(Global_1900530 - 1) /*2*/] };
		func_199(&(Global_1900531[(Global_1900530 - 1) /*2*/]));
		Global_1900562[(Global_1900530 - 1) /*2*/] = { Var2 };
	}
	else
	{
		func_199(&(Global_1900531[iVar1 /*2*/]));
		Global_1900562[iVar1 /*2*/] = { Var2 };
	}
	Global_1900530 = (Global_1900530 - 1);
	if (Global_1900530 < 0)
	{
		Global_1900530 = 0;
	}
}

void func_117(int iParam0, int iParam1)
{
	if (!func_108(iParam0))
	{
		return;
	}
	Global_1900562[iParam0 /*2*/].f_1 = (Global_1900562[iParam0 /*2*/].f_1 - (Global_1900562[iParam0 /*2*/].f_1 && iParam1));
}

bool func_118(int iParam0, int iParam1)
{
	if (!func_34(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam1))
	{
		return false;
	}
	return MISC::_IS_BIT_FLAG_SET(&(Global_1056554[iParam1 /*491*/].f_15.f_21), iParam0);
}

int func_119(int iParam0, int iParam1)
{
	if (iParam0 <= 0 || iParam0 >= 10)
	{
		return -1;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return -1;
	}
	return Global_1056554[iParam1 /*491*/].f_42.f_1[iParam0 /*16*/];
}

int func_120(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -4.386831E+18f;
				case 1:
					return -7.890581E+31f;
				case 2:
					return -1.082204E-20f;
				case 3:
					return -1.844202E+19f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -9.193918E+26f;
				case 1:
					return 1.652573E+07f;
				case 2:
					return -4.584958E-10f;
				case 3:
					return -1.308009E+30f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 1.522398E-23f;
				case 1:
					return 6.000514E+18f;
				case 2:
					return 6.5686E+09f;
				case 3:
					return -1.29502E+29f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 2.903373E-11f;
				case 1:
					return -1.255973E+22f;
				case 2:
					return -3.492436E+24f;
				case 3:
					return -4.323653E-06f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -1.590671E-35f;
				case 1:
					return -0.005893386f;
				case 2:
					return 8.095878E-36f;
				case 3:
					return 5.308375E-24f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -6.491092E+22f;
				case 1:
					return -3.39337E-34f;
				case 2:
					return -2.827399E+13f;
				case 3:
					return 2.786047E+38f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -0.003760975f;
				case 1:
					return 2.548126E-24f;
				case 2:
					return -1.797413E+11f;
				case 3:
					return -1.161223E+24f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1.154749E-17f;
				case 1:
					return 3.23344E-24f;
				case 2:
					return -5.209391E+29f;
				case 3:
					return 3.148779E+16f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return -1.741973E+17f;
				case 1:
					return 1.418071E+25f;
				case 2:
					return -2.259112E-30f;
				case 3:
					return 8.278385E-06f;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -2.097883E-16f;
		case 2:
			return -2.718455E-10f;
		case 3:
			return -3.637621E+12f;
		case 4:
			return 3.077226E+22f;
		case 5:
			return -11903.19f;
		case 6:
			return 1.334234E-15f;
		case 7:
			return 1.464907E-27f;
		case 8:
			return 3.545345E+37f;
		case 9:
			return 4.410467E+27f;
		default:
			break;
	}
	return 0;
}

void func_122(int iParam0, int iParam1)
{
	if (iParam0 == 1 || iParam0 == -1)
	{
		return;
	}
	if (Global_1878407.f_7185.f_74.f_8[iParam0] == iParam1)
	{
		return;
	}
	Global_1878407.f_7185.f_74.f_8[iParam0] = iParam1;
}

void func_123(int iParam0, int iParam1)
{
	if (iParam0 == 1 || iParam0 == -1)
	{
		return;
	}
	if (Global_1878407.f_7185.f_74.f_10[iParam0] == iParam1)
	{
		return;
	}
	Global_1878407.f_7185.f_74.f_10[iParam0] = iParam1;
}

void func_124(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	if (iParam0 == 1 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	bVar0 = MISC::IS_BIT_SET(Global_1878407.f_7185.f_74.f_12[iParam0], iParam1);
	if (bVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_1878407.f_7185.f_74.f_12[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1878407.f_7185.f_74.f_12[iParam0]), iParam1);
	}
}

bool func_125(int iParam0)
{
	if (iParam0 == 1 || iParam0 == -1)
	{
		return false;
	}
	return Global_1878407.f_7185.f_74.f_8[iParam0];
}

int func_126(int iParam0)
{
	if (iParam0 == 1 || iParam0 == -1)
	{
		return 0;
	}
	return Global_1878407.f_7185.f_74.f_10[iParam0];
}

bool func_127(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam0 == 1 || iParam0 == -1)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	bVar0 = MISC::IS_BIT_SET(Global_1878407.f_7185.f_74.f_12[iParam0], iParam1);
	return bVar0;
}

int func_128(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_129(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_130(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_131(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_132(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_133(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_200(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

bool func_134()
{
	return true;
	if (Global_1572887.f_14 == 0)
	{
		return true;
	}
	return Global_38.f_1;
}

bool func_135(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_130(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_129(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_128(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_133(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_132(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_131(iParam0);
	if (iVar5 < 1 || iVar5 > func_201(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_136()
{
	return Global_1902565;
}

void func_137(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_133(*iParam0);
	iVar1 = func_132(*iParam0);
	iVar2 = func_131(*iParam0);
	iVar3 = func_128(*iParam0);
	iVar4 = func_129(*iParam0);
	iVar5 = func_130(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_201(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_201(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_202(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_138(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_135(iParam1) || !func_135(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_139(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_140(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_141(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

bool func_142(int iParam0, bool bParam1)
{
	return func_138(func_136(), iParam0, bParam1);
}

int func_143(int iParam0)
{
	switch (iParam0)
	{
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_144(int iParam0)
{
	bool bVar0;

	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	bVar0 = func_110(2, iParam0);
	if (bVar0 == 0)
	{
		return false;
	}
	return NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bVar0);
}

void func_145(int iParam0, vector3 vParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 9)
	{
		return;
	}
	if (func_203(Global_17418.f_2964[iParam0 /*3*/], vParam1))
	{
		return;
	}
	Global_17418.f_2964[iParam0 /*3*/] = { vParam1 };
}

bool func_146()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (NETWORK::NETWORK_SESSION_IS_ANY_REQUEST_IN_PROGRESS())
	{
		return false;
	}
	if (!func_204())
	{
		return false;
	}
	if (!func_205())
	{
		return false;
	}
	if (!func_206())
	{
		return false;
	}
	if (func_207())
	{
		return false;
	}
	return true;
}

bool func_147(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 13 && iParam0 <= 25)
	{
		if (Global_1835011[iParam0 /*72*/].f_51 == 0)
		{
			return false;
		}
	}
	if (!bParam1)
	{
		if (func_144(iParam0))
		{
			return true;
		}
	}
	if (func_208(iParam0) > 0)
	{
		iVar0 = MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - func_208(iParam0)));
		if (iVar0 < 60)
		{
			return false;
		}
		else
		{
			func_209(iParam0, 0);
		}
	}
	if (Global_1149417.f_4920[iParam0 /*3*/].f_1 && Global_1149417.f_4920[iParam0 /*3*/].f_2)
	{
		if (func_210(Global_1835011[iParam0 /*72*/].f_32))
		{
			Global_1835011[iParam0 /*72*/].f_32 = -1;
		}
		if (func_37(iParam0))
		{
			if (!func_211(iParam0))
			{
				if (func_212(iParam0) == 0)
				{
					func_213(iParam0, NETWORK::GET_CLOUD_TIME_AS_INT());
					return false;
				}
				if (MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - func_212(iParam0))) > 30)
				{
					func_48(iParam0, 1);
					func_49(iParam0, -1, 0, 1, 1, 0, 0);
					func_213(iParam0, 0);
					func_209(iParam0, NETWORK::GET_CLOUD_TIME_AS_INT());
				}
				return false;
			}
		}
		func_213(iParam0, 0);
		func_209(iParam0, 0);
		return true;
	}
	func_113(iParam0);
	bVar1 = func_110(0, iParam0);
	if (bVar1 == 0)
	{
		return false;
	}
	if (!Global_1149417.f_4920[iParam0 /*3*/].f_1 || !Global_1149417.f_4920[iParam0 /*3*/].f_2)
	{
		if (Global_1835011[iParam0 /*72*/].f_32 == -1)
		{
			Global_1835011[iParam0 /*72*/].f_32 = func_111(bVar1, 0);
		}
		switch (func_214(Global_1835011[iParam0 /*72*/].f_32, 0))
		{
			case 1:
				return false;
			case 2:
				if (!Global_1149417.f_4920[iParam0 /*3*/].f_2)
				{
					Global_1835011[iParam0 /*72*/].f_32 = -1;
				}
				break;
			case 3:
				Global_1835011[iParam0 /*72*/].f_32 = -1;
				break;
		}
	}
	return false;
}

bool func_148(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_149(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

int func_150(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

void func_151(int iParam0)
{
	bool bVar0;

	bVar0 = func_215(iParam0);
	if (!func_152(bVar0))
	{
		return;
	}
	else if (func_153(bVar0))
	{
		return;
	}
	if (-3.526979E-35f == bVar0)
	{
		return;
	}
	if (!func_154(bVar0, 0, 255, 0, 0))
	{
		return;
	}
	if (bVar0 == 1.015811E-32f)
	{
		func_216(27, 1);
	}
}

bool func_152(bool bParam0)
{
	return bParam0 != 0;
}

bool func_153(bool bParam0)
{
	int iVar0;

	if (!func_152(bParam0))
	{
		return false;
	}
	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bParam0))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Global_1292096.f_2012)
	{
		if (Global_1292096.f_2012.f_1[iVar0 /*24*/].f_4 == bParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_154(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_217(bParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_155(int iParam0)
{
	if (Global_1295252.f_1 >= 3)
	{
		return true;
	}
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (iParam0 == 255)
	{
		return true;
	}
	if (func_218(29, iParam0))
	{
		return true;
	}
	if (func_219(iParam0))
	{
		return true;
	}
	return false;
}

bool func_156(int iParam0)
{
	int iVar0;
	bool bVar1;

	if (iParam0 == 0)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	iVar0 = func_121(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar0))
	{
		bVar1 = func_120(1, iParam0);
		if (bVar1 == 0)
		{
			return false;
		}
		if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bVar1))
		{
			return true;
		}
	}
	return false;
}

int func_157(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 7:
		case 8:
			return 6;
		case 9:
			return 8;
		default:
			break;
	}
	return 0;
}

Vector3 func_158(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return func_101();
			return -1000764464, -996174887, 1109979745;
		case 2:
			return -1000764464, -996174887, 1109979745;
		case 3:
			return 1151934055, -995931268, 1117246102;
		case 4:
			return 0f, 0f, 0f;
		case 5:
			return 0f, 0f, 0f;
		case 6:
			return 1152648299, 1136175694, 1118832689;
		case 7:
			return -991803802, -1011269632, 1126360678 /* Float: 162.9f */;
		case 8:
			return 0f, 0f, 0f;
		case 9:
			return 1159565722, -996466688 /* Float: -1241f */, 1112276992 /* Float: 51f */;
	}
}

void func_159(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (func_220(iParam0))
	{
		return;
	}
	if (func_221(iParam0))
	{
		return;
	}
	iVar0 = func_121(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = func_120(3, iParam0);
	if (iVar1 != 0)
	{
		if (func_222(iVar1) || func_223(iVar1))
		{
			return;
		}
	}
	bVar2 = UNLOCK::UNLOCK_IS_VISIBLE(iVar0);
	bVar3 = UNLOCK::UNLOCK_IS_UNLOCKED(iVar0);
	if (func_210(func_224(iParam0)))
	{
		switch (func_214(func_224(iParam0), 0))
		{
			case 1:
			default:
				return;
				return;
			case 2:
				if (!bVar2)
				{
					func_225(iParam0, -1);
					return;
				}
			}
			if (!bVar3 || !bVar2)
			{
				bVar4 = func_120(0, iParam0);
				if (bVar4 == 0)
				{
					return;
				}
				if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bVar4))
				{
					return;
				}
				if (!func_210(func_224(iParam0)))
				{
					func_225(iParam0, func_111(bVar4, 0));
				}
				return;
			}
			func_225(iParam0, -1);
			func_226(iParam0, 1);
		}

bool func_160(int iParam0)
{
	int iVar0;

	iVar0 = func_227(iParam0);
	if (iVar0 < 0)
	{
		return true;
	}
	return func_228(&(Global_1149417.f_11.f_3222.f_320[iVar0 /*4*/]), 1);
}

bool func_161(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 13 && iParam0 <= 15)
	{
		return false;
	}
	if (func_144(iParam0))
	{
		if (!func_229(iParam0, &iVar0))
		{
			return false;
		}
	}
	else if (!func_230(iParam0, &iVar0))
	{
		return false;
	}
	iVar1 = GANG::NETWORK_GET_GANG_ID(PLAYER::GET_PLAYER_INDEX());
	if (GANG::NETWORK_IS_GANG_ID_VALID(iVar1))
	{
		if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(iVar1) > 1)
		{
			iVar2 = GANG::NETWORK_GET_GANG_LEADER(iVar1);
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
			{
				return true;
			}
			iVar0 = Global_1056554[iVar2 /*491*/].f_15.f_24;
		}
	}
	if (iVar0 <= 0)
	{
		return false;
	}
	iVar3 = MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - iVar0));
	iVar4 = func_231(iParam0);
	if (func_144(iParam0))
	{
		iVar4 = func_232(iParam0);
	}
	return iVar3 < iVar4;
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 1;
		case 6:
			return 2;
		case 7:
			return 3;
		case 8:
			return 4;
		case 9:
			return 1;
		case 10:
			return 2;
		case 11:
			return 3;
		case 12:
			return 4;
		case 13:
			return 6;
		case 14:
			return 6;
		case 15:
			return 6;
		case 16:
			return 7;
		case 17:
			return 7;
		case 18:
			return 8;
		case 19:
			return 8;
		case 20:
			return 9;
		case 21:
			return 7;
		case 22:
			return 7;
		case 23:
			return 8;
		case 24:
			return 8;
		case 25:
			return 9;
		default:
			break;
	}
	return -1;
}

bool func_163(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_178(Global_1835011[iParam0 /*72*/].f_1);
}

int func_164(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_233(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_234(bParam1), iParam0, bParam3);
}

bool func_165(int iParam0)
{
	if (!func_52(iParam0))
	{
		return false;
	}
	return Global_1291896.f_133[iParam0 /*5*/].f_4;
}

bool func_166()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(2.084373E+09f))
	{
		return true;
	}
	if (!UNLOCK::UNLOCK_IS_VISIBLE(2.084373E+09f))
	{
		return true;
	}
	return false;
}

Vector3 func_167(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1144511[func_235() /*83*/].f_38;
	}
	return Global_1144511[iParam0 /*83*/].f_38;
}

bool func_168(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<4> Var35;
	var uVar39;

	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_4 = 10;
	Var2.f_15 = 4;
	Var2.f_15.f_5 = 4;
	Var2.f_25 = 1;
	Var2.f_28 = 2;
	Var2.f_28.f_1 = -1;
	Var2.f_28.f_1.f_1 = -1;
	Var2.f_31 = 3.006576E-21f;
	Var2.f_31.f_1 = 3.006576E-21f;
	Var35.f_1 = -1;
	if (!func_236())
	{
		return false;
	}
	if (!func_237(&Var2, iParam0))
	{
		return false;
	}
	if (!func_238(Var2.f_2))
	{
		return false;
	}
	if (Var2.f_2.f_1 == 0)
	{
		return false;
	}
	iVar0 = func_239(2.156488E+38f);
	iVar1 = func_240(iParam0);
	if (func_241(&(Var2.f_25), 3.394192E+28f))
	{
		func_242(&uVar39, 2);
	}
	if (func_241(&(Var2.f_25), 3.489803E-20f))
	{
		func_242(&uVar39, 4);
	}
	func_243();
	func_244(iVar1, iVar0, uVar39, Var2.f_2, Var2, Var35, 0);
	return true;
}

void func_169(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1885680.f_1682)
		{
			Global_1885680.f_1682 = 1;
		}
	}
	else if (Global_1885680.f_1682)
	{
		Global_1885680.f_1682 = 0;
	}
}

int func_170(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 0;
		case 2:
			return 1;
		case 4:
			return 2;
		case 5:
			return 3;
		case 6:
			return 4;
		case 7:
			return 6;
		case 8:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_171(float fParam0, float fParam1)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_245(fParam0, fParam1) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

bool func_172(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_246(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_247(bParam0);
	switch (iVar0)
	{
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("AMMO"):
			if (!func_248(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_249(bParam0))
			{
				return true;
			}
			break;
	}
	return func_250(bParam0, 0, 0, 0) >= iParam1;
}

bool func_173(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_174()
{
}

var func_175()
{
	Global_1292096.f_459.f_1552++;
	if (Global_1292096.f_459.f_1552 >= NaNf)
	{
		Global_1292096.f_459.f_1552 = 0;
	}
	return Global_1292096.f_459.f_1552;
}

void func_176(struct<30> Param0, int iParam30)
{
	switch (iParam30)
	{
		case 0:
			Global_1292096.f_459.f_44[func_251() /*30*/] = { Param0 };
			func_252((func_251() + 1 % 40));
			Global_1292096.f_459.f_1546++;
			break;
		case 1:
			Global_1292096.f_459.f_1245[func_253() /*30*/] = { Param0 };
			func_254((func_253() + 1 % 10));
			Global_1292096.f_459.f_1547++;
			break;
	}
}

bool func_177(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_180(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_178(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_180(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

int func_179(struct<2> Param0)
{
	return func_255(Param0);
}

int func_180(struct<2> Param0)
{
	int iVar0;

	if (!func_31(Param0))
	{
		return -1;
	}
	iVar0 = func_256(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1072759.f_19487.f_1[iVar0 /*3*/].f_2;
}

int func_181(bool bParam0, float fParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102813.f_16)
	{
		return 0;
	}
	if (!func_204())
	{
		return 0;
	}
	if (!func_257())
	{
		return 0;
	}
	Global_0 = fParam1;
	if (bParam0)
	{
		func_258(&Global_0, 8);
	}
	func_258(&Global_0, 1);
	return 1;
}

void func_182(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;

	iVar0 = func_259(func_32(Param0));
	iVar1 = func_179(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_19() == 0)
	{
		Var2 = Global_265213.f_122484.f_80.f_12;
		func_260(Param0, &Var2, iParam2);
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam4))
	{
		Var2.f_4 = iParam4;
		Var2.f_3 = iParam5;
	}
	else
	{
		Var2.f_4 = 255;
		Var2.f_3 = 0;
	}
	if (Global_1072759.f_16.f_1)
	{
		Var2.f_6 = 1;
	}
	Var2.f_5 = Global_1072759.f_16.f_2;
	STATS::_STATSTRACKER_DEED_STATUS(iVar0, iVar1, iParam2, &Var2);
}

void func_183(struct<2> Param0, int iParam2)
{
	if (!func_31(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_261(Param0);
	}
	else
	{
		func_262(Param0, iParam2);
	}
	func_263();
}

void func_184(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_264(&Global_1940186, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_265(&Global_1940186, 8388608);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

void func_185(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_266(iVar0, 1);
		if ((iVar1 == -4.356636E+32f || iVar1 == -1.514687E+13f) || iVar1 == 3.829501E+32f)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_267(cVar2);
			}
			else
			{
				func_268();
			}
			LAW::_0xF611DE44AEB36A1D(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_186(bool bParam0)
{
	if (!bParam0 && func_269(1.600127E-25f))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(6.069634E-12f, bParam0, 0);
	return 1;
}

void func_187(int iParam0)
{
	Global_1900460 = (Global_1900460 || iParam0);
}

int func_188(struct<2> Param0)
{
	return func_271(func_270(Param0));
}

struct<2> func_189()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_190(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_191()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

bool func_192(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (iParam0 >= 9 && iParam0 <= 25)
			{
				return true;
			}
			break;
	}
	return false;
}

Vector3 func_193(int iParam0)
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

Vector3 func_194(int iParam0)
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

Vector3 func_195(int iParam0)
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

void func_196(int iParam0, int iParam1)
{
	if (!func_108(iParam0))
	{
		return;
	}
	Global_1900562[iParam0 /*2*/].f_1 = (Global_1900562[iParam0 /*2*/].f_1 || iParam1);
}

void func_197(int iParam0)
{
	if (func_19() == -1)
	{
		return;
	}
	if (Global_1835011[iParam0 /*72*/].f_3 != 0 && UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*72*/].f_3))
	{
		UNLOCK::_UNLOCK_SET_NEW(Global_1835011[iParam0 /*72*/].f_3, false);
	}
	func_113(iParam0);
}

void func_198(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_199(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

int func_200(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_201(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_202(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_272(iParam0, iParam6);
	func_273(iParam0, iParam5);
	func_274(iParam0, iParam4);
	func_141(iParam0, iParam3);
	func_140(iParam0, iParam2);
	func_139(iParam0, iParam1);
}

bool func_203(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_204()
{
	return !Global_1572887.f_10;
}

bool func_205()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_4;
}

bool func_206()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_5;
}

bool func_207()
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

int func_208(int iParam0)
{
	if (!func_36(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*72*/].f_70;
}

void func_209(int iParam0, int iParam1)
{
	if (!func_36(iParam0))
	{
		return;
	}
	if (Global_1835011[iParam0 /*72*/].f_70 == iParam1)
	{
		return;
	}
	Global_1835011[iParam0 /*72*/].f_70 = iParam1;
}

bool func_210(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= NaNf)
	{
		return false;
	}
	return true;
}

bool func_211(int iParam0)
{
	return VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(func_47(iParam0));
}

int func_212(int iParam0)
{
	if (!func_36(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*72*/].f_69;
}

void func_213(int iParam0, int iParam1)
{
	if (!func_36(iParam0))
	{
		return;
	}
	if (Global_1835011[iParam0 /*72*/].f_69 == iParam1)
	{
		return;
	}
	Global_1835011[iParam0 /*72*/].f_69 = iParam1;
}

int func_214(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1292096.f_459.f_44[iVar0 /*30*/] == -1)
		{
		}
		else if (Global_1292096.f_459.f_44[iVar0 /*30*/] != iParam0)
		{
		}
		else
		{
			return Global_1292096.f_459.f_44[iVar0 /*30*/].f_1;
		}
		iVar0++;
	}
	if (bParam1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1292096.f_459.f_1245[iVar0 /*30*/] == -1)
		{
		}
		else if (Global_1292096.f_459.f_1245[iVar0 /*30*/] != iParam0)
		{
		}
		else
		{
			return Global_1292096.f_459.f_1245[iVar0 /*30*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

float func_215(int iParam0)
{
	int iVar0;

	iVar0 = func_275(iParam0);
	switch (iVar0)
	{
		case joaat("MISSION_COOP_CHAR_CREATOR"):
		default:
			return 0;
			return -1.072798E+21f;
		case -765810527:
			return -12.03053f;
		case -736232052:
			return -3.526979E-35f;
		case 34802860:
			return 1.015811E-32f;
	}
}

int func_216(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_276(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

int func_217(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<17> Var3;

	if (bParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bParam0))
	{
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (GANG::NETWORK_IS_GANG_ID_VALID(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) && GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_277(iParam2, -3.005759E+25f);
	}
	if (!bParam7)
	{
		if (!NETWORK::_0x64A36BA85CE01A81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return 0;
		}
	}
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_278(uParam1, bParam0, Var3);
	return 1;
}

bool func_218(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1295185[iParam1 /*2*/] && iParam0) != 0;
}

bool func_219(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1295158.f_2), iParam0))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1295158.f_23[iVar0 /*3*/]), iParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_220(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return Global_1291896[iParam0] == iParam0;
}

bool func_221(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return Global_1291896.f_11[iParam0] == iParam0;
}

bool func_222(bool bParam0)
{
	int iVar0;

	if (!func_152(bParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_1292096.f_2012)
	{
		if (Global_1292096.f_2012.f_1[iVar0 /*24*/].f_4 == bParam0 && Global_1292096.f_2012.f_1[iVar0 /*24*/].f_5 == 0)
		{
			return NETWORK::_0xE10F2D7715ABABEC(&(Global_1292096.f_2012.f_1[iVar0 /*24*/]));
		}
		iVar0++;
	}
	return false;
}

bool func_223(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1292096.f_459.f_44[iVar0 /*30*/] == -1)
		{
		}
		else if (Global_1292096.f_459.f_44[iVar0 /*30*/].f_4 != iParam0)
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_224(int iParam0)
{
	if (iParam0 <= 0 || iParam0 >= 10)
	{
		return -1;
	}
	return Global_1292081[iParam0];
}

void func_225(int iParam0, int iParam1)
{
	if (!func_52(iParam0))
	{
		return;
	}
	Global_1292081[iParam0] = iParam1;
}

void func_226(int iParam0, bool bParam1)
{
	if (!func_52(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Global_1291896.f_11[iParam0] == 0)
		{
			Global_1291896.f_11[iParam0] = iParam0;
		}
	}
	else if (Global_1291896.f_11[iParam0] != 0)
	{
		Global_1291896.f_11[iParam0] = 0;
	}
}

int func_227(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return Global_1155135[iParam0 /*30*/].f_3.f_1;
}

bool func_228(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

bool func_229(int iParam0, int* iParam1)
{
	struct<2> Var0;

	*iParam1 = -1;
	switch (iParam0)
	{
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			Var0 = { func_279(-6.42522E+13f) };
			STATS::STAT_ID_GET_INT(&Var0, iParam1);
			return true;
		default:
			break;
	}
	return false;
}

bool func_230(int iParam0, int* iParam1)
{
	struct<2> Var0;

	*iParam1 = -1;
	switch (iParam0)
	{
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			Var0 = { func_279(2.352613E+07f) };
			STATS::STAT_ID_GET_INT(&Var0, iParam1);
			return true;
		default:
			break;
	}
	return false;
}

int func_231(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 == 25)
	{
		return Global_1901671.f_51.f_26 * 2;
	}
	return Global_1901671.f_51.f_26;
}

int func_232(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1901671.f_51.f_27;
}

bool func_233(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_234(bool bParam0)
{
	if (func_19() == -1)
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

int func_235()
{
	return Global_1102813.f_3672;
}

bool func_236()
{
	switch (func_280())
	{
		case 0:
			Global_1120482.f_18173.f_1 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(-1348409f);
			Global_1120482.f_18173.f_2 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(-1.12688E+30f);
			func_281(1);
			return false;
		case 1:
			if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(func_282()))
			{
				return false;
			}
			if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(func_283()))
			{
				return false;
			}
			func_284(func_282());
			func_285(func_283());
			func_281(2);
			return true;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

bool func_237(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	var uVar14[205];
	var uVar220;
	var uVar221;
	int iVar222;
	var uVar223;
	float fVar224;
	struct<32> Var225;
	struct<32> Var258;
	struct<33> Var291;
	var uVar391;
	struct<5> Var395;
	struct<2> Var400;
	struct<2> Var405;
	var uVar407;
	struct<2> Var409;

	Var225 = -1;
	Var225.f_1 = -1;
	Var225.f_2 = -1;
	Var225.f_4 = 10;
	Var225.f_15 = 4;
	Var225.f_15.f_5 = 4;
	Var225.f_25 = 1;
	Var225.f_28 = 2;
	Var225.f_28.f_1 = -1;
	Var225.f_28.f_1.f_1 = -1;
	Var225.f_31 = 3.006576E-21f;
	Var225.f_31.f_1 = 3.006576E-21f;
	Var258 = -1;
	Var258.f_1 = -1;
	Var258.f_2 = -1;
	Var258.f_4 = 10;
	Var258.f_15 = 4;
	Var258.f_15.f_5 = 4;
	Var258.f_25 = 1;
	Var258.f_28 = 2;
	Var258.f_28.f_1 = -1;
	Var258.f_28.f_1.f_1 = -1;
	Var258.f_31 = 3.006576E-21f;
	Var258.f_31.f_1 = 3.006576E-21f;
	Var291 = 3;
	Var291.f_1 = -1;
	Var291.f_1.f_1 = -1;
	Var291.f_1.f_2 = -1;
	Var291.f_1.f_4 = 10;
	Var291.f_1.f_15 = 4;
	Var291.f_1.f_15.f_5 = 4;
	Var291.f_1.f_25 = 1;
	Var291.f_1.f_28 = 2;
	Var291.f_1.f_28.f_1 = -1;
	Var291.f_1.f_28.f_1.f_1 = -1;
	Var291.f_1.f_31 = 3.006576E-21f;
	Var291.f_1.f_31.f_1 = 3.006576E-21f;
	Var291.f_1.f_33 = -1;
	Var291.f_1.f_33.f_1 = -1;
	Var291.f_1.f_33.f_2 = -1;
	Var291.f_1.f_33.f_4 = 10;
	Var291.f_1.f_33.f_15 = 4;
	Var291.f_1.f_33.f_15.f_5 = 4;
	Var291.f_1.f_33.f_25 = 1;
	Var291.f_1.f_33.f_28 = 2;
	Var291.f_1.f_33.f_28.f_1 = -1;
	Var291.f_1.f_33.f_28.f_1.f_1 = -1;
	Var291.f_1.f_33.f_31 = 3.006576E-21f;
	Var291.f_1.f_33.f_31.f_1 = 3.006576E-21f;
	Var291.f_1.f_33.f_33 = -1;
	Var291.f_1.f_33.f_33.f_1 = -1;
	Var291.f_1.f_33.f_33.f_2 = -1;
	Var291.f_1.f_33.f_33.f_4 = 10;
	Var291.f_1.f_33.f_33.f_15 = 4;
	Var291.f_1.f_33.f_33.f_15.f_5 = 4;
	Var291.f_1.f_33.f_33.f_25 = 1;
	Var291.f_1.f_33.f_33.f_28 = 2;
	Var291.f_1.f_33.f_33.f_28.f_1 = -1;
	Var291.f_1.f_33.f_33.f_28.f_1.f_1 = -1;
	Var291.f_1.f_33.f_33.f_31 = 3.006576E-21f;
	Var291.f_1.f_33.f_33.f_31.f_1 = 3.006576E-21f;
	uVar391 = 3;
	Var405 = -1;
	uVar407 = -1;
	Var409 = -1;
	Var409.f_1 = -1;
	iVar8 = PLAYER::PLAYER_ID();
	iVar7 = GANG::NETWORK_GET_GANG_ID(iVar8);
	iVar2 = func_286(iVar8);
	iVar4 = func_240(-1.020666E-21f);
	vVar9 = { Global_34 };
	bVar12 = false;
	fVar224 = 1.085011E-19f;
	iVar6 = 0;
	func_287(&uVar14, 205, 1);
	if (!func_288(&Var395, func_282()))
	{
		return false;
	}
	if (!func_289(Var395, &(Var395.f_1), -7.983403E-26f, 0, 0, 1))
	{
		return false;
	}
	if (!func_289(Var395, &(Var395.f_1), 3.468158E-22f, 0, 0, 1))
	{
		return false;
	}
	if (!func_289(Var395, &(Var395.f_1), 2.879718E+20f, iParam1, 0, 1))
	{
		return false;
	}
	if (!func_289(Var395, &(Var395.f_1), 6.638011E-37f, 0, 0, 1))
	{
		return false;
	}
	if (!func_289(Var395, &(Var395.f_1), 3.421343E+30f, iVar6, 0, 1))
	{
		return false;
	}
	uVar220 = Var395.f_1;
	if (!func_290(&Var400, func_283()))
	{
		return false;
	}
	uVar221 = Var400.f_1;
	iVar5 = func_291(Var395, 571.9587f);
	iVar0 = 0;
	while (iVar0 <= 204)
	{
		MISC::COPY_SCRIPT_STRUCT(&Var405, &uVar407, 2);
		MISC::COPY_SCRIPT_STRUCT(&Var225, &Var258, 33);
		Var395.f_1 = uVar220;
		Var400.f_1 = uVar221;
		Var409 = { func_189() };
		bVar12 = false;
		bVar13 = false;
		iVar3 = uVar14[iVar0];
		if (iVar3 >= iVar5)
		{
		}
		else if (!func_292(&Var395, iVar3, &Var405))
		{
		}
		else
		{
			Var409 = { func_293(Var405.f_1) };
			if (!func_294(Var405, 1))
			{
			}
			else
			{
				iVar1 = 0;
				while (iVar1 <= (3 - 1))
				{
					iVar222 = iVar1;
					if (func_296(Var409, vVar9, func_295(iVar222)))
					{
						bVar12 = true;
					}
					else
					{
						iVar1++;
					}
				}
				if (!bVar12)
				{
				}
				else if (Var291[iVar222 /*33*/].f_2.f_1 != 0)
				{
				}
				else
				{
					bVar13 = iVar222 == false;
					if (!func_297(&Var400, &Var405, &Var225, 0))
					{
					}
					else if (func_298(&Var225, iVar3, &uVar391, iVar7, iVar2, iVar4, &uVar223, fVar224, -1))
					{
					}
					else
					{
						if (bVar13)
						{
							MISC::COPY_SCRIPT_STRUCT(bParam0, &Var225, 33);
							return true;
						}
						MISC::COPY_SCRIPT_STRUCT(&(Var291[iVar222 /*33*/]), &Var225, 33);
					}
				}
			}
		}
		iVar0++;
	}
	MISC::COPY_SCRIPT_STRUCT(&Var225, &Var258, 33);
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (Var291[iVar0 /*33*/].f_2.f_1 == 0)
		{
		}
		else
		{
			MISC::COPY_SCRIPT_STRUCT(&Var225, &(Var291[iVar0 /*33*/]), 33);
		}
		else
		{
			iVar0++;
		}
	}
	if (Var225.f_2.f_1 == 0)
	{
		return false;
	}
	MISC::COPY_SCRIPT_STRUCT(bParam0, &Var225, 33);
	return true;
}

bool func_238(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 104);
}

int func_239(float fParam0)
{
	return func_299(13, fParam0);
}

int func_240(float fParam0)
{
	return func_299(14, fParam0);
}

bool func_241(var uParam0, int iParam1)
{
	return func_301(uParam0, func_300(iParam1, 1), 1);
}

void func_242(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_243()
{
	DATAFILE::_PARSEDDATA_UNLOAD_FILE(func_282());
	DATAFILE::_PARSEDDATA_UNLOAD_FILE(func_283());
	func_281(0);
	func_302(0);
	func_303(0);
}

void func_244(int iParam0, int iParam1, var uParam2, var uParam3, struct<2> Param4, int iParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	struct<28> Var0;
	var uVar31;
	vector3 vVar32;
	var uVar35;

	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	uVar31 = func_304(0, 8);
	Var0.f_6 = iParam0;
	Var0.f_5 = iParam1;
	Var0.f_11 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	Var0.f_4 = 3;
	Var0.f_9 = uParam3;
	Var0.f_14 = uParam2;
	Var0.f_7 = { Param4 };
	Var0.f_13 = iParam10;
	MISC::COPY_SCRIPT_STRUCT(&(Var0.f_27), &iParam6, 4);
	vVar32 = { func_305(iParam0) };
	uVar35 = func_306(iParam0);
	func_307(&(Var0.f_19), Var0.f_11, vVar32, uVar35);
	func_308(&Var0, uVar31);
}

struct<2> func_245(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

bool func_246(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_247(bool bParam0)
{
	vector3 vVar0;

	if (!func_246(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_248(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_246(bParam0, 0))
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		return false;
	}
	bVar0 = func_309(bParam0, iParam1);
	Var4.f_9 = -5.45926E-19f;
	if (func_310("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_311(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_312(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
			{
				func_313(iVar1);
				return true;
			}
			iVar3++;
		}
		func_313(iVar1);
	}
	return false;
}

bool func_249(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_246(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_314(bParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1115104855:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_315(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_316(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_317(bParam0);
	iVar2 = func_316(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == Global_17418.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_250(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_246(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_247(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_309(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_318(bParam0, 0);
	}
	if (func_319(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_234(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_320(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_234(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

int func_251()
{
	if (Global_1292096.f_459.f_1548 >= 40 || Global_1292096.f_459.f_1548 < 0)
	{
		Global_1292096.f_459.f_1548 = 0;
	}
	return Global_1292096.f_459.f_1548;
}

void func_252(int iParam0)
{
	if (iParam0 >= 40 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1292096.f_459.f_1548 = iParam0;
}

int func_253()
{
	if (Global_1292096.f_459.f_1549 >= 10 || Global_1292096.f_459.f_1549 < 0)
	{
		Global_1292096.f_459.f_1549 = 0;
	}
	return Global_1292096.f_459.f_1549;
}

void func_254(int iParam0)
{
	if (iParam0 >= 10 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1292096.f_459.f_1549 = iParam0;
}

int func_255(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_321(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_256(struct<2> Param0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;

	if (Global_1072759.f_19487 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_321(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1072759.f_19487 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_321(Global_1072759.f_19487.f_1[iVar8 /*3*/], &vVar3);
		if (vVar3.x > vVar0.x)
		{
			iVar7 = (iVar8 - 1);
		}
		else if (vVar3.x < vVar0.x)
		{
			iVar6 = iVar8 + 1;
		}
		else
		{
			return iVar8;
		}
	}
	return -1;
}

bool func_257()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

void func_258(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1.517571E-22f;
		case 3:
			return 8.881306E+07f;
		case 4:
			return -3.626336E+26f;
		case 5:
			return 488.7555f;
		case 8:
			return 3.590393E-16f;
		case 7:
			return -1.702224E-36f;
		case 6:
			return -3.570683E+33f;
		default:
			break;
	}
	return 0;
}

void func_260(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_32(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_323(func_322(Param0));
			if ((iVar4 == -1 && iParam3 == 2) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2.332405E-23f) == 0)
			{
				iVar5 = 0;
				while (iVar5 <= 112)
				{
					if (func_324(iVar5) == func_322(Param0))
					{
						iVar4 = iVar5;
					}
					else
					{
						iVar5++;
					}
				}
			}
			iVar6 = func_325(iVar4);
			if (!func_326(iVar6, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (Global_1107816.f_33[iVar1 /*16*/] == iVar3)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = Global_1107816.f_33[iVar2 /*16*/].f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	iParam2->f_2 = Global_1114878[iVar0 /*70*/];
}

int func_261(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_256(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_327(iVar0);
}

int func_262(struct<2> Param0, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	if (Global_1072759.f_19487 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_321(Param0, &vVar0))
	{
		return -1;
	}
	vVar6 = -1;
	vVar6.f_1 = -1;
	vVar6 = { Param0 };
	vVar6.f_2 = iParam2;
	if (Global_1072759.f_19487 == 0)
	{
		Global_1072759.f_19487.f_1[Global_1072759.f_19487 /*3*/] = { vVar6 };
		Global_1072759.f_19487++;
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < Global_1072759.f_19487)
	{
		func_321(Global_1072759.f_19487.f_1[iVar9 /*3*/], &vVar3);
		if (vVar0.x == vVar3.x)
		{
			Global_1072759.f_19487.f_1[iVar9 /*3*/] = { vVar6 };
			return iVar9;
		}
		else if (vVar0.x > vVar3.x)
		{
			iVar9++;
		}
		else if (vVar0.x < vVar3.x)
		{
			func_328(iVar9);
			Global_1072759.f_19487.f_1[iVar9 /*3*/] = { vVar6 };
			return iVar9;
		}
	}
	if (Global_1072759.f_19487 < 31)
	{
		iVar9 = Global_1072759.f_19487;
		Global_1072759.f_19487.f_1[iVar9 /*3*/] = { vVar6 };
		Global_1072759.f_19487++;
		if (Global_1072759.f_19487 > 32)
		{
			Global_1072759.f_19487 = 32;
		}
		return iVar9;
	}
	return -1;
}

void func_263()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1072759.f_19487)
	{
		if (func_321(Global_1072759.f_19487.f_1[iVar0 /*3*/], &vVar1))
		{
		}
		iVar0++;
	}
}

void func_264(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_265(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_266(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 2.78249E+24f;
		case 1:
			return 6.693887E-32f;
		case 2:
			return 5.643845E-24f;
		case 3:
			return 9.359187E+08f;
		case 4:
			return -973.5235f;
		case 5:
			return -2.181735E+14f;
		case 6:
			return -1.183841E+08f;
		case 7:
			return 4.680602E+25f;
		case 8:
			return -1.773479E-16f;
		case 9:
			return -6.913617E-18f;
		case 10:
			return 9.795292E+09f;
		case 11:
			return 0.3642137f;
		case 12:
			return -5.126168E-25f;
		case 13:
			return 8.819365E+14f;
		case 14:
			return -1.83749E+38f;
		case 15:
			return 3.763102E-35f;
		case 16:
			return -4.525156E-37f;
		case 17:
			return -3.642462E-37f;
		case 18:
			return 3.67809E+26f;
		case 19:
			return 1.223265E-27f;
		case 20:
			return -6.437393E-24f;
		case 21:
			return -2.015906E+37f;
		case 22:
			return 1.310424E+14f;
		case 23:
			return 1.225001E-21f;
		case 24:
			return 2.004928E+23f;
		case 25:
			return 2.380052E+13f;
		case 26:
			return -1.317158E+21f;
		case 27:
			return 502995.2f;
		case 28:
			return -42525.47f;
		case 29:
			return 6.165362E+33f;
		case 30:
			return -4.72096E-26f;
		case 31:
			return 8.031629E+11f;
		case 32:
			return -1.552719E+19f;
		case 33:
			return -2.069399E-17f;
		case 34:
			return -5.058464E+36f;
		case 35:
			return -6.146416E-23f;
		case 36:
			return 6.888527E+30f;
		case 37:
			return -0.1819772f;
		case 38:
			return -1.749466E-35f;
		case 39:
			return 339.8487f;
		case 40:
			return -7.906033E-27f;
		case 41:
			return NaNf;
		case 42:
			return 1.868031E+22f;
		case 43:
			return 7015.23f;
		case 44:
			return -1.772112E+29f;
		case 45:
			return -1.012065E-10f;
		case 46:
			return 2.050823E+10f;
		case 47:
			return -2.330589E-38f;
		case 48:
			return -1.505282E+35f;
		case 49:
			return 5.785034E+12f;
		case 50:
			return -2.038869E-23f;
		case 51:
			return -1.280143E+15f;
		case 52:
			return -1.23064E-10f;
		case 53:
			return -3.291576E-28f;
		case 54:
			return -4.356636E+32f;
		case 55:
			return -1.514687E+13f;
		case 56:
			return -0.05713905f;
		case 57:
			return 3.829501E+32f;
		case 58:
			return 0;
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

void func_267(char[12] cParam0)
{
	Global_1939089.f_75.f_67 = { cParam0 };
}

void func_268()
{
	StringCopy(&(Global_1939089.f_75.f_67), "", 24);
}

bool func_269(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_329(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_330(iVar1))
	{
		if (Global_1072759.f_19585.f_24 && !func_331(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(Global_1072759.f_19585[iVar1], iVar2) || MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2));
	}
	return MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2);
}

int func_270(struct<2> Param0)
{
	int iVar0;

	if (!func_31(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_173(Global_1900460.f_1[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_271(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1900460.f_66 == 0)
	{
		return 0;
	}
	if (Global_1900460.f_66 == 1)
	{
		Global_1900460.f_66 = 0;
		func_199(&(Global_1900460.f_1[0 /*2*/]));
		return 1;
	}
	func_199(&(Global_1900460.f_1[iParam0 /*2*/]));
	Global_1900460.f_66 = (Global_1900460.f_66 - 1);
	func_332(iParam0, Global_1900460.f_66);
	return 1;
}

void func_272(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - (*iParam0 && 2.658456E+36f));
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 = (*iParam0 || 0f);
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - (*iParam0 && 0f));
	}
}

void func_273(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - (*iParam0 && 1.128475E-36f));
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_274(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_132(*iParam0);
	iVar1 = func_133(*iParam0);
	if (iParam1 < 1 || iParam1 > func_201(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

int func_275(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return -2.34783E+11f;
		case 5:
		case 6:
		case 7:
		case 8:
			return 1.080349E-37f;
		case 9:
		case 10:
		case 11:
		case 12:
			return -2.714255E+12f;
		case 0:
			return 1.403898E-32f;
		default:
			break;
	}
	return 0;
}

bool func_276(int iParam0, var uParam1, var uParam2)
{
	if (!func_333(iParam0))
	{
		return false;
	}
	if (!func_134())
	{
		return false;
	}
	if (!func_334(iParam0, uParam1, uParam2))
	{
		return false;
	}
	if (*uParam1 == 4.822093E-24f && Global_1572887.f_14 != 0)
	{
		return false;
	}
	else if (*uParam1 == -3.622536E+09f && Global_1572887.f_14 != -1)
	{
		return false;
	}
	return true;
}

void func_277(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_LOCAL_LOAD_S >= 11)
	{
		return;
	}
}

void func_278(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_335(uParam0))
	{
		return;
	}
	if (Global_1292096.f_2012 < 20)
	{
		Global_1292096.f_2012++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1292096.f_2012.f_1[iVar0 /*24*/] = { Global_1292096.f_2012.f_1[iVar0 + 1 /*24*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = bParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	Global_1292096.f_2012.f_1[(Global_1292096.f_2012 - 1) /*24*/] = { Var1 };
}

struct<2> func_279(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

int func_280()
{
	return Global_1120482.f_18173;
}

void func_281(int iParam0)
{
	Global_1120482.f_18173 = iParam0;
}

int func_282()
{
	return Global_1120482.f_18173.f_1;
}

int func_283()
{
	return Global_1120482.f_18173.f_2;
}

void func_284(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 241)
	{
		iVar1 = func_336(iVar0, 1);
		DATAFILE::_PARSEDDATA_REGISTER_QUERY(iParam0, iVar1, func_337(iVar1));
		iVar0++;
	}
}

void func_285(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 55)
	{
		iVar1 = func_338(iVar0, 1);
		DATAFILE::_PARSEDDATA_REGISTER_QUERY(iParam0, iVar1, func_339(iVar1));
		iVar0++;
	}
}

int func_286(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_340(iParam0);
	iVar1 = func_341(iParam0, iVar0);
	if (iVar0 != iVar1)
	{
		if (func_342(iVar1))
		{
			func_343(iVar1);
			iVar0 = iVar1;
		}
	}
	return iVar0;
}

void func_287(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= (iParam1 - 1))
		{
			(*uParam0)[iVar2] = iVar2;
			iVar2++;
		}
	}
	iVar2 = (iParam1 - 1);
	iVar2 = (iParam1 - 1);
	while (iVar2 >= 0)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		uVar0 = (*uParam0)[iVar2];
		(*uParam0)[iVar2] = (*uParam0)[iVar1];
		(*uParam0)[iVar1] = uVar0;
		iVar2 = (iVar2 + -1);
	}
}

bool func_288(bool bParam0, int iParam1)
{
	var uVar0;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(iParam1))
	{
		return false;
	}
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(iParam1))
	{
		return false;
	}
	MISC::COPY_SCRIPT_STRUCT(bParam0, &uVar0, 5);
	*bParam0 = iParam1;
	return true;
}

bool func_289(struct<5> Param0, int* iParam5, float fParam6, int iParam7, int iParam8, int iParam9)
{
	Param0.f_2 = fParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(iParam5, &Param0))
	{
		return false;
	}
	return true;
}

bool func_290(bool bParam0, int iParam1)
{
	var uVar0;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(iParam1))
	{
		return false;
	}
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(iParam1))
	{
		return false;
	}
	MISC::COPY_SCRIPT_STRUCT(bParam0, &uVar0, 5);
	*bParam0 = iParam1;
	return true;
}

int func_291(vector3 vParam0, var uParam3, var uParam4, float fParam5)
{
	vParam0.f_2 = fParam5;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&vParam0);
}

bool func_292(bool bParam0, int iParam1, var uParam2)
{
	if (!func_344(bParam0, iParam1))
	{
		return false;
	}
	if (!func_345(bParam0, uParam2))
	{
		return false;
	}
	return true;
}

struct<2> func_293(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_346(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_346(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_346(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_346(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_346(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_346(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_346(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_189();
}

bool func_294(int iParam0, int iParam1)
{
	return func_347(&(Global_1110244.f_3667[iParam0 /*7*/].f_2), iParam1);
}

float func_295(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901671.f_316.f_62;
		case 1:
			return Global_1901671.f_316.f_63;
		case 2:
			return Global_1901671.f_316.f_64;
		default:
			break;
	}
	return -1f;
}

bool func_296(struct<2> Param0, vector3 vParam2, float fParam5)
{
	int iVar0;
	int iVar1;

	if (fParam5 < 0f)
	{
		return false;
	}
	func_348(Param0, &iVar0, &iVar1);
	return BUILTIN::VDIST(vParam2, func_349(iVar0, iVar1)) <= fParam5;
}

int func_297(var uParam0, bool bParam1, var uParam2, int iParam3)
{
	if (!func_350(*uParam0, &(uParam0->f_1), 9.327008E-38f, 0, 0, 1))
	{
		return 0;
	}
	if (*bParam1 == -1)
	{
		return 0;
	}
	if (bParam1->f_1 == 0)
	{
		return 0;
	}
	if (!func_350(*uParam0, &(uParam0->f_1), 12932893, func_351(*bParam1), 0, 1))
	{
		return 0;
	}
	if (!func_350(*uParam0, &(uParam0->f_1), -2.946195E-34f, bParam1->f_1, 0, 1))
	{
		return 0;
	}
	MISC::COPY_SCRIPT_STRUCT(&(uParam2->f_2), bParam1, 2);
	return func_352(*uParam0, uParam2, iParam3);
}

bool func_298(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, var uParam6, float fParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_353(uParam0->f_2);
	iVar1 = func_354(iVar0);
	if (iParam8 == -1)
	{
		iVar2 = func_355(iParam5);
	}
	else
	{
		iVar2 = iParam8;
	}
	*uParam6 = 0;
	*uParam6 = func_356(uParam0);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_357(iVar2, fParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_358(uParam0, fParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_359(uParam0, iParam1, uParam2, fParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_360(uParam0, fParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_361(iVar2, fParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_362(uParam0, iVar2, iParam3, fParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_363(uParam0, iParam3, fParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_364(iParam3, iParam4, fParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_365(iParam3);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_366(iParam3, uParam0, fParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_367(uParam0, iParam3, fParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_368(uParam0, fParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_369(uParam0, fParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	*uParam6 = func_370(iParam3, fParam7);
	if (*uParam6 != 0)
	{
		return true;
	}
	switch (iVar1)
	{
		case 2:
			*uParam6 = func_371(uParam0, fParam7, iParam3, iVar2, iParam5);
			break;
		case 1:
			*uParam6 = func_372(uParam0, fParam7);
			break;
		case 0:
			*uParam6 = func_373(uParam0, fParam7, iParam3);
			break;
		default:
			*uParam6 = 45;
			break;
	}
	return *uParam6 != 0;
}

int func_299(int iParam0, float fParam1)
{
	struct<2> Var0;

	if (func_374(iParam0, fParam1, &Var0))
	{
		return Var0.f_1;
	}
	return -1;
}

int func_300(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("MULTIPLE_OBJECTIVES_2"):
			return 10;
		case -2001405328:
			return 6;
		case joaat("MULTIPLE_OBJECTIVES_3"):
			return 11;
		case joaat("MULTIPLE_OBJECTIVES_4"):
			return 12;
		case -1348549877:
			return 13;
		case joaat("REQUIRES_POSSE_TARGET"):
			return 17;
		case -1086220725:
			return 4;
		case joaat("SETUP_MISSION_1"):
			return 19;
		case -1040947274:
			return 14;
		case joaat("NO_PVP"):
			return 8;
		case -775927147:
			return 5;
		case joaat("SETUP_MISSION_0"):
			return 18;
		case -399531147:
			return 20;
		case joaat("INSTANCED"):
			return 1;
		case joaat("HAS_FLOW_FADE"):
			return 3;
		case 1042373141:
			return 7;
		case 1803795142:
			return 15;
		case joaat("MULTI_GANG"):
			return 0;
		case joaat("HAS_INTRO_CUTSCENE"):
			return 2;
		case joaat("MULTIPLE_OBJECTIVES_1"):
			return 9;
		case joaat("REQUIRES_PLAYER_TARGET"):
			return 16;
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

bool func_301(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

void func_302(int iParam0)
{
	Global_1120482.f_18173.f_1 = iParam0;
}

void func_303(int iParam0)
{
	Global_1120482.f_18173.f_2 = iParam0;
}

var func_304(int iParam0, int iParam1)
{
	return func_375(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

Vector3 func_305(int iParam0)
{
	return Global_1114878[iParam0 /*70*/].f_7.f_1;
}

var func_306(int iParam0)
{
	return Global_1114878[iParam0 /*70*/].f_7;
}

void func_307(var uParam0, int iParam1, vector3 vParam2, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[7];
	int iVar12;

	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar12 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar12))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar12))
		{
		}
		else if (!GANG::_NETWORK_IS_GANG_MEMBER(iParam1, iVar12))
		{
		}
		else if (GANG::NETWORK_IS_GANG_LEADER(iVar12))
		{
			(*uParam0)[0] = iVar12;
			Jump @159; //curOff = 85
		}
		else if (func_376(iVar12, vParam2, uParam5))
		{
			if (iVar0 + 1 < 7)
			{
				(*uParam0)[(1 + iVar0)] = iVar12;
				iVar0++;
			}
		}
		else if (iVar1 < 7)
		{
			iVar4[iVar1] = iVar2;
			iVar1++;
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= (iVar1 - 1))
	{
		iVar3 = iVar4[iVar2];
		iVar12 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
		if (iVar0 + 1 < 7)
		{
			(*uParam0)[(1 + iVar0)] = iVar12;
			iVar0++;
		}
		iVar2++;
	}
}

void func_308(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 31, 32, &uParam1);
}

bool func_309(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_246(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_247(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_377(bParam0, 9.811189E+11f))
	{
		func_378(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

bool func_310(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_234(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_311(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, iParam0))
	{
		return false;
	}
	return true;
}

bool func_312(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != -3.273909E-18f);
}

int func_313(int iParam0)
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

int func_314(bool bParam0)
{
	struct<2> Var0;

	if (!func_246(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_315(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CLOTHING_BLEND_FRECKLES_NONE"):
			return 2.772874E-30f;
		case joaat("CLOTHING_BLEND_MOLES_NONE"):
			return 2.355696E+27f;
		case joaat("CLOTHING_BLEND_SPOTS_NONE"):
			return 3.107044E+08f;
		case joaat("CLOTHING_BLEND_FOUNDATION_NONE"):
			return -1.10511E-35f;
		case joaat("CLOTHING_BLEND_BLUSHER_NONE"):
			return 0.01603136f;
		case joaat("CLOTHING_BLEND_EYELINER_NONE"):
			return -4.314404E+26f;
		case joaat("CLOTHING_BLEND_EYESHADOW_NONE"):
			return -2.677414E+07f;
		case joaat("CLOTHING_BLEND_LIPSTICK_NONE"):
			return -1.864473E+11f;
		case -28107610:
			return -7.008358E-38f;
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 8.452614E+07f;
		case -643819742:
			return -6.237061E+18f;
		case joaat("CLOTHING_BLEND_COMPLEXION_NONE"):
			return -0.0003051266f;
		case joaat("CLOTHING_BLEND_COMPLEXION_2_NONE"):
			return -2.292356E+21f;
		case 1687431937:
			return -6.600012E-27f;
		case joaat("CLOTHING_BLEND_SCAR_NONE"):
			return 3.05881E+28f;
		default:
			break;
	}
	return 0;
}

int func_316(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((uParam0[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if ((uParam0[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_317(bool bParam0)
{
	int iVar0;

	iVar0 = func_314(bParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -1.10511E-35f;
		case 1216664798:
			return 0.01603136f;
		case 829857647:
			return -4.314404E+26f;
		case -636562458:
			return -2.677414E+07f;
		case 252325943:
			return -1.864473E+11f;
		case 1115104855:
			return -7.008358E-38f;
		default:
			break;
	}
	return 0;
}

int func_318(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_379(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_381(&Var0, func_380(0));
	}
	if (!func_382(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_313(iVar18);
	return iVar19;
}

int func_319(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_384(func_383(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

struct<4> func_320(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_385(bParam0, bParam1, 0) };
	return func_386(bParam0, Var0, Var0.f_4, bParam1);
}

bool func_321(struct<2> Param0, bool bParam2)
{
	if (!func_31(Param0))
	{
		return false;
	}
	func_387(bParam2);
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

int func_322(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_321(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_323(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_388(&Var1, iParam0))
	{
		iVar0 = ((func_389() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_324(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/];
}

int func_325(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/].f_2;
}

bool func_326(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("BOUNTY_BOARD"):
		case joaat("GUN_FOR_HIRE"):
		case -697789102:
		case joaat("CAMP_RESUPPLY"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case 195932838:
		case joaat("OUTLAW"):
		case joaat("CAMP_SETUP"):
		case joaat("MOONSHINE_SELL"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("CAMP_SELL"):
			return true;
		case joaat("DYNAMIC"):
			return iParam1;
		default:
			break;
	}
	return false;
}

int func_327(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = iParam0;
	while (iVar0 < Global_1072759.f_19487)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1072759.f_19487.f_1[iVar0 /*3*/] = { Global_1072759.f_19487.f_1[iVar0 + 1 /*3*/] };
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	if (Global_1072759.f_19487 < 32)
	{
		Global_1072759.f_19487.f_1[Global_1072759.f_19487 /*3*/] = { vVar1 };
	}
	Global_1072759.f_19487 = (Global_1072759.f_19487 - 1);
	if (Global_1072759.f_19487 < 0)
	{
		Global_1072759.f_19487 = 0;
	}
	return 1;
}

int func_328(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = (Global_1072759.f_19487 - 1);
	vVar1 = -1;
	vVar1.f_1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1072759.f_19487.f_1[iVar0 + 1 /*3*/] = { Global_1072759.f_19487.f_1[iVar0 /*3*/] };
		}
		iVar0 = (iVar0 - 1);
	}
	Global_1072759.f_19487.f_1[iParam0 /*3*/] = { vVar1 };
	Global_1072759.f_19487++;
	if (Global_1072759.f_19487 > 32)
	{
		Global_1072759.f_19487 = 32;
	}
	return 1;
}

int func_329(int iParam0, int iParam1)
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

bool func_330(int iParam0)
{
	int iVar0;

	iVar0 = func_390(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_331(int iParam0)
{
	if (iParam0 == 1.351745E+31f)
	{
		return true;
	}
	return false;
}

void func_332(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_391((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_391(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_31(Global_1900460.f_1[0 /*2*/]))
	{
		func_183(Global_1900460.f_1[0 /*2*/], 3);
	}
}

bool func_333(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 33)
	{
		return false;
	}
	return true;
}

bool func_334(int iParam0, var uParam1, var uParam2)
{
	if (!func_333(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = -3.622536E+09f;
			*uParam2 = -2738.842f;
			break;
		case 1:
			*uParam1 = -3.622536E+09f;
			*uParam2 = -2.793054E-27f;
			break;
		case 2:
			*uParam1 = -3.622536E+09f;
			*uParam2 = -2.154776E-19f;
			break;
		case 3:
			*uParam1 = -3.622536E+09f;
			*uParam2 = 2.123235E+29f;
			break;
		case 4:
			*uParam1 = -3.622536E+09f;
			*uParam2 = -2.782579E-30f;
			break;
		case 5:
			*uParam1 = -3.622536E+09f;
			*uParam2 = -4.318452E+14f;
			break;
		case 6:
			*uParam1 = -3.622536E+09f;
			*uParam2 = -3.258318E+12f;
			break;
		case 7:
			*uParam1 = -3.622536E+09f;
			*uParam2 = 1.519707E-29f;
			break;
		case 8:
			*uParam1 = -3.622536E+09f;
			*uParam2 = 1.798881E+17f;
			break;
		case 9:
			*uParam1 = -3.622536E+09f;
			*uParam2 = -1.9972E+21f;
			break;
		case 10:
			*uParam1 = -3.622536E+09f;
			*uParam2 = 31176.88f;
			break;
		case 11:
			*uParam1 = -3.622536E+09f;
			*uParam2 = -0.0003438628f;
			break;
		case 12:
			*uParam1 = -3.622536E+09f;
			*uParam2 = 1667.794f;
			break;
		case 13:
			if (Global_1572887.f_14 != 0)
			{
				*uParam1 = -3.622536E+09f;
			}
			else
			{
				*uParam1 = 4.822093E-24f;
			}
			*uParam2 = -2.208067E-27f;
			break;
		case 14:
			*uParam1 = -3.622536E+09f;
			*uParam2 = 160283f;
			break;
		case 15:
			*uParam1 = -3.622536E+09f;
			*uParam2 = -2.338619E-23f;
			break;
		case 16:
			*uParam1 = -3.622536E+09f;
			*uParam2 = 7.564774E+36f;
			break;
		case 17:
			*uParam1 = 4.822093E-24f;
			*uParam2 = -5.511189E+35f;
			break;
		case 18:
			*uParam1 = 4.822093E-24f;
			*uParam2 = -2.554187E+28f;
			break;
		case 19:
			*uParam1 = 4.822093E-24f;
			*uParam2 = -2.109337E-26f;
			break;
		case 20:
			*uParam1 = 4.822093E-24f;
			*uParam2 = 2.89106E+25f;
			break;
		case 21:
			*uParam1 = 4.822093E-24f;
			*uParam2 = -2.772947E-21f;
			break;
		case 22:
			*uParam1 = 4.822093E-24f;
			*uParam2 = 61630.95f;
			break;
		case 23:
			*uParam1 = 4.822093E-24f;
			*uParam2 = -535961f;
			break;
		case 24:
			*uParam1 = 4.822093E-24f;
			*uParam2 = -1.741735E-25f;
			break;
		case 25:
			*uParam1 = 4.822093E-24f;
			*uParam2 = -1.00219E+28f;
			break;
		case 26:
			*uParam1 = 4.822093E-24f;
			*uParam2 = -2.260616E+31f;
			break;
		case 27:
			*uParam1 = 4.822093E-24f;
			*uParam2 = -2.214684E-34f;
			break;
		case 29:
			*uParam1 = 4.822093E-24f;
			*uParam2 = 12.06309f;
			break;
		case 28:
			*uParam1 = 4.822093E-24f;
			*uParam2 = 5.369121E-27f;
			break;
		case 30:
			*uParam1 = 4.822093E-24f;
			*uParam2 = 7.506294E+24f;
			break;
		case 31:
			*uParam1 = 4.822093E-24f;
			*uParam2 = -6.374461E+33f;
			break;
		case 32:
			if (Global_1572887.f_14 != 0)
			{
				*uParam1 = -3.622536E+09f;
			}
			else
			{
				*uParam1 = 4.822093E-24f;
			}
			*uParam2 = 2.641236E-05f;
			break;
		default:
			return false;
	}
	return true;
}

bool func_335(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_336(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0.009572975f;
		case 1:
			return 571.9587f;
		case 2:
			return 3.820291E-09f;
		case 3:
			return 1.053679E+11f;
		case 4:
			return -6.876431E+28f;
		case 5:
			return -2.461891E+26f;
		case 6:
			return -5.618421E-19f;
		case 7:
			return -5.092595E-15f;
		case 8:
			return 1.726202f;
		case 9:
			return 6.320396E+11f;
		case 10:
			return 5.501144E-24f;
		case 11:
			return 2.930077E+25f;
		case 12:
			return 1.207456E+20f;
		case 13:
			return -4.43741E+13f;
		case 14:
			return -8.72341E-23f;
		case 15:
			return 2.331758E-05f;
		case 16:
			return 4.920441E-33f;
		case 17:
			return NaNf;
		case 18:
			return 1.585203E-18f;
		case 19:
			return -1.678904E+12f;
		case 20:
			return 2191028f;
		case 21:
			return -5.860287E-14f;
		case 22:
			return 4.258557E-34f;
		case 23:
			return -6.036169E-18f;
		case 24:
			return -2.579969E+18f;
		case 25:
			return 0.08624676f;
		case 26:
			return 6.333738E+07f;
		case 27:
			return 7.915607E-14f;
		case 28:
			return -0.000167284f;
		case 29:
			return -6.435233E+27f;
		case 30:
			return -4.38639E+26f;
		case 31:
			return 5.796113E-07f;
		case 32:
			return -5.698761E-26f;
		case 33:
			return 1.682321E-35f;
		case 34:
			return -3.634326E+32f;
		case 35:
			return -7.220547E+10f;
		case 36:
			return 0.0003032543f;
		case 37:
			return 2.701188E+25f;
		case 38:
			return 0.0002821238f;
		case 39:
			return -1.723641E-37f;
		case 40:
			return 2.591396E+25f;
		case 41:
			return -7.983403E-26f;
		case 42:
			return 3.468158E-22f;
		case 43:
			return -1.851454E+33f;
		case 44:
			return 1.093401E-25f;
		case 45:
			return 4.29786E+28f;
		case 46:
			return -2.413199E-14f;
		case 47:
			return 14.69528f;
		case 48:
			return -5.846873E-15f;
		case 49:
			return 5.43252E+14f;
		case 50:
			return 7.565142E-21f;
		case 51:
			return -3.06566E+14f;
		case 52:
			return 2.879718E+20f;
		case 53:
			return 2.539163E-12f;
		case 54:
			return -159.7345f;
		case 55:
			return -1.873648E+07f;
		case 56:
			return 6.638011E-37f;
		case 57:
			return 3.421343E+30f;
		case 58:
			return 7.595256f;
		case 59:
			return 13526.12f;
		case 60:
			return -1.110992E+27f;
		case 61:
			return 2.396044E-09f;
		case 62:
			return -3.972855E+33f;
		case 63:
			return -3.382021E+12f;
		case 64:
			return 2.774046E+36f;
		case 65:
			return 4335027f;
		case 66:
			return 611.2897f;
		case 67:
			return -8.468743E+11f;
		case 68:
			return -1.151387E+22f;
		case 69:
			return 0.08390651f;
		case 70:
			return -1.133287E-13f;
		case 71:
			return 0.0001402013f;
		case 72:
			return 5.223228E+25f;
		case 73:
			return 355356.8f;
		case 74:
			return -1.367433E-37f;
		case 75:
			return 1.75329E-13f;
		case 76:
			return 8.115863E+34f;
		case 77:
			return 0.8051607f;
		case 78:
			return -1.192862E+14f;
		case 79:
			return 1.163431E-31f;
		case 80:
			return -2.0001E+28f;
		case 81:
			return 1.10782E-17f;
		case 82:
			return -3.519088E+09f;
		case 83:
			return -4.872802E+29f;
		case 84:
			return -1.655131E+11f;
		case 85:
			return -1.606157E-31f;
		case 86:
			return -0.2430016f;
		case 87:
			return -1.783839E-08f;
		case 88:
			return -7.279041E-28f;
		case 89:
			return 9.078644E+16f;
		case 90:
			return -7.687441E+37f;
		case 91:
			return 2.471613E+14f;
		case 92:
			return -2.860524E+33f;
		case 93:
			return 9.813761E-06f;
		case 94:
			return -6.456066E+17f;
		case 95:
			return -2189.21f;
		case 96:
			return -21.73038f;
		case 97:
			return -86.98714f;
		case 98:
			return -93706.13f;
		case 99:
			return -1.897442E-26f;
		case 100:
			return -1.326841E-12f;
		case 101:
			return -0.9024037f;
		case 102:
			return 5.360804E+11f;
		case 103:
			return 2.22123E+07f;
		case 104:
			return -8.820704E-27f;
		case 105:
			return 5.901189E-14f;
		case 106:
			return 5.721635E+07f;
		case 107:
			return -7.328826E+21f;
		case 108:
			return -0.006934949f;
		case 109:
			return -1.211886E+15f;
		case 110:
			return 52855.35f;
		case 111:
			return 5.385188E+25f;
		case 112:
			return 8.806833f;
		case 113:
			return -2.602335E+26f;
		case 114:
			return -6.150368E+15f;
		case 115:
			return -2.549033E-08f;
		case 116:
			return -0.0002726863f;
		case 117:
			return 1.433742E+34f;
		case 118:
			return 9.502112E-32f;
		case 119:
			return -4.210537E-28f;
		case 120:
			return 1.064492E-10f;
		case 121:
			return 4.566908E-07f;
		case 122:
			return 6.607691E+35f;
		case 123:
			return -3.167447E-18f;
		case 124:
			return 1.676111E-29f;
		case 125:
			return 9.758912E+33f;
		case 126:
			return 3.985954E+15f;
		case 127:
			return -2.233177E+30f;
		case 128:
			return 185683.9f;
		case 129:
			return -2.436232E+16f;
		case 130:
			return -1.726518E-13f;
		case 131:
			return -4.331983E+21f;
		case 132:
			return -2.116107E-14f;
		case 133:
			return 99068.63f;
		case 134:
			return -1.646279E+26f;
		case 135:
			return -5192421f;
		case 136:
			return -1.052846E-23f;
		case 137:
			return 3.419562E+30f;
		case 138:
			return -2.505174E-07f;
		case 139:
			return -8.332406E-20f;
		case 140:
			return -2.321819E-15f;
		case 141:
			return -17.27563f;
		case 142:
			return -5.102551E-05f;
		case 143:
			return 2.706233E-33f;
		case 144:
			return 7.193412E+35f;
		case 145:
			return -7.823606E-38f;
		case 146:
			return 2.310143E-33f;
		case 147:
			return 2.657523E-09f;
		case 148:
			return 0.0007146671f;
		case 149:
			return 9.863699E-18f;
		case 150:
			return 1.296856E+23f;
		case 151:
			return 6.675209E+34f;
		case 152:
			return 6.133756E-27f;
		case 153:
			return -7.282727E+08f;
		case 154:
			return -2.241926E-07f;
		case 155:
			return 1535.98f;
		case 156:
			return 1.748746E+15f;
		case 157:
			return -2458859f;
		case 158:
			return 4.241207E+19f;
		case 159:
			return -0.04647425f;
		case 160:
			return -114689.6f;
		case 161:
			return 2.581578E-35f;
		case 162:
			return -2.835832E+07f;
		case 163:
			return -3.366057E-17f;
		case 164:
			return 1.031474E-08f;
		case 165:
			return 3.120482E+29f;
		case 166:
			return 3.062552E+14f;
		case 167:
			return -1.076321E-06f;
		case 168:
			return 1670.759f;
		case 169:
			return -1.560277E-06f;
		case 170:
			return -6.267144E-07f;
		case 171:
			return -1.370217E-38f;
		case 172:
			return -6.354712E-31f;
		case 173:
			return 1.67376E+33f;
		case 174:
			return -2.370919E-32f;
		case 175:
			return -1.688802E-35f;
		case 176:
			return 2.093741E+26f;
		case 177:
			return 3.811227E-21f;
		case 178:
			return -9.575326E+14f;
		case 179:
			return -6.611574E-37f;
		case 180:
			return 9.586579E+20f;
		case 181:
			return -2.381129E-37f;
		case 182:
			return 3.804156E+18f;
		case 183:
			return -1.138935E-14f;
		case 184:
			return -3.336176E-05f;
		case 185:
			return 2.24269E+07f;
		case 186:
			return 2.108802E+16f;
		case 187:
			return 8.074563E-16f;
		case 188:
			return 4.401887E-35f;
		case 189:
			return 1.346657E-35f;
		case 190:
			return -6.597703E-38f;
		case 191:
			return -3.977991E+19f;
		case 192:
			return 2.59628E+25f;
		case 193:
			return 1.947977E-11f;
		case 194:
			return 1.103605E-18f;
		case 195:
			return -1.90048E+23f;
		case 196:
			return 8.400549E-13f;
		case 197:
			return -6.496443E-31f;
		case 198:
			return -8.838318E+11f;
		case 199:
			return 2.899078E+28f;
		case 200:
			return 4.06181E-29f;
		case 201:
			return 1.370158f;
		case 202:
			return 2.265162E-17f;
		case 203:
			return -2.193455E-14f;
		case 204:
			return -0.001513784f;
		case 205:
			return 3.615374E+29f;
		case 206:
			return 566945.3f;
		case 207:
			return 182.2132f;
		case 208:
			return -2.39026E-05f;
		case 209:
			return 6.081805E+26f;
		case 210:
			return 1.111835E+21f;
		case 211:
			return 2.440431E+11f;
		case 212:
			return -3.209044E-37f;
		case 213:
			return 5.632769E-05f;
		case 214:
			return -8.249554E+07f;
		case 215:
			return -1.199279E+18f;
		case 216:
			return 5.80385E-27f;
		case 217:
			return -8.323878E-17f;
		case 218:
			return -6.338862E+09f;
		case 219:
			return -1.735036E+29f;
		case 220:
			return 1.918907E+09f;
		case 221:
			return -4.942541E-37f;
		case 222:
			return -2.052551E+31f;
		case 223:
			return -4.450783E-34f;
		case 224:
			return 1.787745E+21f;
		case 225:
			return -11325.19f;
		case 226:
			return 1.338447E+09f;
		case 227:
			return -1.78541E-22f;
		case 228:
			return -4.633674E-17f;
		case 229:
			return 4.237831E+12f;
		case 230:
			return 0.002679238f;
		case 231:
			return -2.090704E-23f;
		case 232:
			return -9.954428E+33f;
		case 233:
			return 1.834682E-37f;
		case 234:
			return -0.0004509753f;
		case 235:
			return -1.022252E-27f;
		case 236:
			return 6.564834E+21f;
		case 237:
			return 4.428446f;
		case 238:
			return 5.534022E-07f;
		case 239:
			return -1.997379E-19f;
		case 240:
			return -9.954492E+11f;
		case 241:
			return 5.603096E+31f;
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

char* func_337(int iParam0)
{
	switch (iParam0)
	{
		case 1008523256:
			return "time_block";
		case 1141833051:
			return "mission";
		case 830686115:
			return "mission_type(type=%x)/mission";
		case 1371816784:
			return "volume";
		case -279039872:
			return "volume_component";
		case -347364204:
			return "nav_block_volume";
		case -1591356522:
			return "blocking_object_flag";
		case -1481147674:
			return "location_flag";
		case 1071445036:
			return "setting";
		case 1393764479:
			return "scenario";
		case 416600242:
			return "door";
		case 1774314862:
			return "force_volume";
		case 1624339917:
			return "ped";
		case -702452069:
			return "prop";
		case -1697453237:
			return "ipl";
		case 935565856:
			return "lantern";
		case 164389658:
			return "prop_set";
		case -3633128:
			return "veg_mod";
		case 568979268:
			return "invalid_scenario";
		case -742165699:
			return "scenario_flag";
		case 1241889488:
			return "veg_flag";
		case -1450969535:
			return "anim";
		case 135103436:
			return "name";
		case -1562463744:
			return "turn_in_type";
		case -569428078:
			return "item";
		case 1034986020:
			return "interior";
		case 1282514153:
			return "transition";
		case 699547230:
			return "Location";
		case -1188075274:
			return "Mission_Giver";
		case -307865396:
			return "location";
		case -340432202:
			return "required_volume";
		case 891000470:
			return "mission_type";
		case -1785915344:
			return "unlock";
		case 95610146:
			return "state";
		case -175154863:
			return "string";
		case -779715008:
			return "flag";
		case 966721050:
			return "attribute";
		case 1773322216:
			return "weapon";
		case 965995012:
			return "warp_location";
		case -2106942431:
			return "flags";
		case 1772846069:
			return "giver";
		case -1782208300:
			return "Gun_for_Hire";
		case 466723622:
			return "Locations";
		case -155807419:
			return "Mission_Givers";
		case 369580868:
			return "Player_Bounties";
		case 1862983441:
			return "Use_Contexts";
		case -1462149998:
			return "location_flags";
		case 1097539553:
			return "location_flag(%i)";
		case -1479366685:
			return "settings";
		case 1475807964:
			return "setting(%i)";
		case 504293064:
			return "Dialogue";
		case -678729477:
			return "Missions";
		case 1635370648:
			return "Location(location=%x)";
		case 741518720:
			return "Mission_Giver(giver=%x)";
		case -1021330426:
			return "interaction_lockon";
		case -879824208:
			return "mission_giver_creation_data";
		case 56746299:
			return "schedule";
		case 1915534289:
			return "time_block(%i)";
		case 1089670230:
			return "mission(%i)";
		case 1179867258:
			return "volumes";
		case -328876172:
			return "volume(%i)";
		case 824485797:
			return "volume_component(%i)";
		case -146546566:
			return "volume_locks";
		case -733684727:
			return "volume_lock(%i)";
		case -750441052:
			return "scenarios";
		case 2080739522:
			return "nav_block_volume(%i)";
		case 1250184037:
			return "blocking_object_flags";
		case 1142477451:
			return "volume";
		case -1202322374:
			return "anti_grief_volumes";
		case -467924289:
			return "prop_sets";
		case 1034671917:
			return "props";
		case -1442893430:
			return "peds";
		case 957547265:
			return "script_created_scenarios";
		case 1781322358:
			return "veg_mods";
		case 1219330971:
			return "conditional_anims";
		case -2110119917:
			return "transitions";
		case 709191463:
			return "transition(%i)";
		case 2038044382:
			return "anim(%i)";
		case 1062084355:
			return "force_volumes";
		case -690423049:
			return "doors";
		case 202835363:
			return "scenario(%i)";
		case -293519133:
			return "prop_set(%i)";
		case 592206679:
			return "prop(%i)";
		case -816725755:
			return "ipl(%i)";
		case -255537257:
			return "lantern(%i)";
		case -770038426:
			return "ped(%i)";
		case -1940881994:
			return "unreachable_scearios";
		case -1099377300:
			return "invalid_scenario(%i)";
		case -1298580726:
			return "scenario_flags";
		case -1838764391:
			return "scenario_flag(%i)";
		case 1537295589:
			return "veg_flag(%i)";
		case -26782235:
			return "force_volume(%i)";
		case 1465961145:
			return "door(%i)";
		case -150140702:
			return "mission_giver_data";
		case 925148616:
			return "mission_giver_names";
		case -586196356:
			return "name(%i)";
		case -989277348:
			return "blip_data";
		case -1045571630:
			return "dialogue_type(type=%x)";
		case -1028785813:
			return "conversation(script_dialogue_handle=%x)";
		case -944306928:
			return "mission(unlock=%x)";
		case -1799624227:
			return "mission(type=%x)";
		case -1413825410:
			return "mission_data";
		case -1083767826:
			return "interiors";
		case 1392091586:
			return "interior(%i)";
		case 1269397350:
			return "name(name_type=%x)";
		case -1808878008:
			return "required_volume(%i)";
		case 696574474:
			return "required_volume_type(type=%x)";
		case 1280983896:
			return "required_volumes_types";
		case -473520653:
			return "mission_giver_type(type=%x)";
		case -1142735215:
			return "attachment";
		case -662059387:
			return "Location(%i)";
		case 1196324698:
			return "Location(id=%x)";
		case 1781673553:
			return "Mission_Giver(%i)";
		case 1091365066:
			return "mission_giver_name(type=%x)";
		case -346602855:
			return "locations";
		case -642855470:
			return "location(%i)";
		case -1294273068:
			return "Location(%i)";
		case -1181812906:
			return "veg_mod(%i)";
		case 2016458991:
			return "veg_mod_data(type=%x)";
		case 200716381:
			return "mission_flags";
		case -1845137425:
			return "mission_flag(%i)";
		case 787092883:
			return "door_config(config=%x)";
		case 888483612:
			return "mission_type(type=%x)";
		case 2063500509:
			return "mission_type(%i)";
		case -1570130076:
			return "mission_types";
		case 262797908:
			return "unlock(%i)";
		case 2012255077:
			return "state(%i)";
		case 1499632451:
			return "strings";
		case -236880317:
			return "string(%i)";
		case 1211454712:
			return "scenario";
		case -626189620:
			return "time_block(%i)/mission(unlock=%x)";
		case -1438489730:
			return "town(id=%x)";
		case -479537578:
			return "volume(script_volume_type=%x)";
		case -1463903719:
			return "town_volumes";
		case 1203863120:
			return "map_props";
		case -351785645:
			return "ipls";
		case -895584822:
			return "lanterns";
		case -1723095449:
			return "flags(type=%x)";
		case 157340468:
			return "nav_block_volumes";
		case 2064288322:
			return "volume";
		case -2116748653:
			return "blocking_object_flags";
		case 155183949:
			return "blocking_object_flag(%i)";
		case 825663396:
			return "ped(role=%x)";
		case 1915528396:
			return "flag(%i)";
		case -1266254117:
			return "attributes";
		case -1614496179:
			return "attribute(%i)";
		case -1490596352:
			return "weapons";
		case -1047907201:
			return "weapon(%i)";
		case 976967808:
			return "warp_locations";
		case 590738432:
			return "warp_location(%i)";
		case 1708896805:
			return "scene";
		case 2035135006:
			return "giver_schedule";
		case 334691246:
			return "hour(%i)";
		case -835870147:
			return "flags(%i)";
		case -1267680873:
			return "giver(%i)";
		case 1153433438:
			return "dialogue";
		case 1489424180:
			return ":dialogue_star_handle";
		case -904522836:
			return ":name";
		case 1611867516:
			return ":volume_name";
		case -1119986744:
			return ":conditional";
		case -941621037:
			return ":attach_bone";
		case 101270175:
			return ":anim_scene_name";
		case -875013288:
			return ":playlist_name";
		case -1541719198:
			return ":prop_name";
		case 842085562:
			return ":unlock";
		case 1887179278:
			return ":unlock_group";
		case 1468744908:
			return "mission(%i):unlock";
		case -1248823782:
			return ":mission_type";
		case 1154537543:
			return ":mission_name";
		case -1244566857:
			return ":dialogue_id";
		case -1255654531:
			return ":model";
		case -2137705453:
			return ":name";
		case -1924253471:
			return ":name_type";
		case 1990527907:
			return ":blip_style_close";
		case -1963575852:
			return ":blip_modifier_close";
		case -2051828336:
			return ":blip_sprite_close";
		case 1798123698:
			return ":flag";
		case 495975404:
			return ":script_volume_type";
		case -665208900:
			return ":type";
		case -2090796305:
			return ":required_volume_config";
		case 1649401908:
			return ":type";
		case -2103309026:
			return ":attach_to_model";
		case 1582509135:
			return ":scenario_author_type";
		case -1471337442:
			return ":blip_sprite";
		case -1207177750:
			return ":blip_style";
		case 1269504651:
			return ":blip_region";
		case 1519769314:
			return ":valid_location";
		case 644398018:
			return ":location";
		case 107613027:
			return ":giver";
		case 93270913:
			return ":blip";
		case -2118935736:
			return ":blip_modifier";
		case -536214615:
			return ":prop_set_name";
		case 564321544:
			return ":prop_set_placement_type";
		case -434046439:
			return ":door_id";
		case 728527958:
			return ":outfit";
		case -1923952042:
			return ":command_hash";
		case -749877125:
			return ":honor_requirement";
		case 1857771831:
			return ":loadout";
		case 273544526:
			return ":ipl_group";
		case 1068458324:
			return ":ipl_veg_mod";
		case 600894625:
			return ":ipl_nav_mesh";
		case -1463447134:
			return ":id";
		case -1161401818:
			return ":location_type";
		case 1888618008:
			return ":inventory_item";
		case 1225419284:
			return ":weapon";
		case 1127626385:
			return ":attach_point";
		case -1211596176:
			return ":use";
		case 1772867250:
			return ":scenario_prop";
		case 766204040:
			return ":scenario_mapping";
		case 1811646877:
			return ":texture";
		case 1651578691:
			return ":document";
		case 1382238315:
			return ":gender";
		case -2099616401:
			return ":handle";
		case 946618725:
			return ":value";
		case -862103290:
			return ":use_veg_mod";
		case -578476660:
			return ":force_to_be_object";
		case 333834761:
			return ":disable_scenario";
		case -1530925183:
			return ":clear_space";
		case -809702995:
			return ":should_be_locked";
		case -267638862:
			return ":is_breakable";
		case 1323614307:
			return ":snap_to";
		case -2094518374:
			return ":radius";
		case -209614658:
			return ":model_search_radius";
		case -2011961582:
			return ":heading";
		case 1656869860:
			return ":float";
		case -969870146:
			return ":launch_radius_offline";
		case 1319079466:
			return ":launch_radius_online";
		case -1688741952:
			return ":z_probe";
		case -1537888061:
			return ":open_ratio";
		case 1417063580:
			return ":auto_close_rate";
		case 992974374:
			return ":spawn_heading";
		case -1714801835:
			return ":interior_coords";
		case -134912699:
			return ":position";
		case 41531735:
			return ":orientation";
		case -1175686941:
			return ":scale";
		case -1834878085:
			return ":model_search_position";
		case 1672605872:
			return ":launch_coords";
		case 1083028949:
			return ":rotation";
		case 890539395:
			return ":spawn_position";
		case -1603547373:
			return ":destination_position";
		case -748173978:
			return ":destination_orientation";
		case 1949355378:
			return ":origin";
		default:
			break;
	}
	return "";
}

int func_338(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2.531009E+10f;
		case 1:
			return -4.036941E-13f;
		case 2:
			return 2.781336E-24f;
		case 3:
			return -4.361371E-20f;
		case 4:
			return 6.603842E+11f;
		case 5:
			return 1.409847E+34f;
		case 6:
			return 4.235969E-34f;
		case 7:
			return -7.852405E+28f;
		case 8:
			return 4.263583E-31f;
		case 9:
			return 6.130278E+26f;
		case 10:
			return -0.0002447889f;
		case 11:
			return 9.327008E-38f;
		case 12:
			return 12932893;
		case 13:
			return 2.123089E-11f;
		case 14:
			return -2.946195E-34f;
		case 15:
			return 4.457137E-18f;
		case 16:
			return 6.376546E+35f;
		case 17:
			return -3.907765E+16f;
		case 18:
			return -8.984925E-07f;
		case 19:
			return 2.257368E-33f;
		case 20:
			return -3.366555E+25f;
		case 21:
			return 0.007273997f;
		case 22:
			return 1.104055E+32f;
		case 23:
			return 1.155065E+38f;
		case 24:
			return -1.31628E-18f;
		case 25:
			return -7.907993E+14f;
		case 26:
			return -1.566286E-16f;
		case 27:
			return 1.959672E+31f;
		case 28:
			return 4.550037E+33f;
		case 29:
			return 2.901151E-05f;
		case 30:
			return 9.489396E-06f;
		case 31:
			return -84.35052f;
		case 32:
			return -3.858537E+34f;
		case 33:
			return -53384.11f;
		case 34:
			return 1.516133E+18f;
			return 303570.6f;
			return 5.268552E-21f;
			return 2.448742E+27f;
			return 5.841068E-37f;
			return -1.556656E-32f;
			return -5.516764E-11f;
			return -2.531133E+33f;
			return 1.371865E+18f;
			return -5.906875E+23f;
			return 311.8673f;
			return -1.200052E+15f;
			return -9.587642E-14f;
			return 3.426144E-27f;
			return 1.177794E-27f;
			return 1.719441E-24f;
			return -4.698763E-08f;
			return 2.015068E-22f;
			return -1.924014E+25f;
			return -8.696991E-13f;
			return -4.91507E-19f;
			return -0.1187015f;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

char* func_339(int iParam0)
{
	switch (iParam0)
	{
		case -792947925:
			return "mission_type";
		case -1427946892:
			return "mission";
		case 408367626:
			return "mission_flag";
		case -1622280771:
			return "string";
		case 1394196983:
			return "mission_flags";
		case 135054243:
			return "map";
		case -276973166:
			return "mission_type_flags";
		case 218782838:
			return "mission_type_flag";
		case 1811778263:
			return "stat";
		case -1182771454:
			return "hour";
		case 2016265965:
			return "prerequisite";
		case 33417155:
			return "Net_Gun_For_Hire_Missions";
		case 12932893:
			return "mission_type(type=%x)";
		case 767213493:
			return "mission_type(%i)";
		case -2017210649:
			return "mission(unlock=%x)";
		case 581202040:
			return "mission(%i)";
		case 2062917018:
			return "mission_data";
		case -620047125:
			return "strings";
		case -1250873360:
			return "string(%i)";
		case 154896618:
			return "mission_flags(type=%x)";
		case -371275865:
			return "mission_flags(%i)";
		case 1005476533:
			return "mission_flag(%i)";
		case 1957572717:
			return "string(type=%x)";
		case 2125319032:
			return "mappings";
		case -1581105240:
			return "map(%i)";
		case -667693420:
			return "map(type=%x)";
		case -1523280739:
			return "mission_type_flags(type=%x)";
		case 1937201256:
			return "mission_type_flags(%i)";
		case 2002802057:
			return "mission_type_flag(%i)";
		case 938696127:
			return "stats";
		case 924791973:
			return "stat(%i)";
		case -1029131400:
			return "unavailable_hours";
		case -118633223:
			return "hour(%i)";
		case -951023588:
			return "prerequisites";
		case 1571312404:
			return "prerequisite(%i)";
		case 1217673812:
			return ":unlock_group";
		case 499583568:
			return ":unlock";
		case 1828532652:
			return ":unlock_flow";
		case 54969057:
			return ":award";
		case -1969117434:
			return ":mission_name";
		case -1368219331:
			return ":mission_description";
		case -151415096:
			return ":dialogue_id";
		case 1570262717:
			return ":flag";
		case -419812745:
			return ":type";
		case 1134292740:
			return ":name";
		case -662147553:
			return ":description";
		case -1445468930:
			return ":honor_requirement";
		case 327661882:
			return ":anim_scene_id";
		case 314220799:
			return ":hash";
		case 402983180:
			return ":id";
		case -1287008399:
			return ":base_id";
		case 460561235:
			return ":item";
		case -377576419:
			return ":region_id";
		case -1418408851:
			return ":region_name";
		case -1592717000:
			return ":min_posse_members";
		case -1108141625:
			return ":hour";
		default:
			break;
	}
	return "";
}

var func_340(int iParam0)
{
	return Global_1138658[iParam0 /*56*/];
}

int func_341(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = GANG::NETWORK_GET_GANG_ID(iParam0);
	if (func_342(iParam1))
	{
		if (iVar0 == func_392(iParam1))
		{
			return iParam1;
		}
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (iVar0 == func_392(iVar1))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

bool func_342(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 32);
}

void func_343(int iParam0)
{
	if (!func_342(iParam0))
	{
		return;
	}
	Global_1138658[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/] = iParam0;
}

bool func_344(bool bParam0, int iParam1)
{
	bParam0->f_2 = 7.595256f;
	bParam0->f_3 = iParam1;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0))
	{
		return false;
	}
	bParam0->f_2 = 0;
	bParam0->f_3 = 0;
	return true;
}

bool func_345(bool bParam0, var uParam1)
{
	int iVar0;

	bParam0->f_2 = -1.076321E-06f;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	*uParam1 = func_393(iVar0);
	bParam0->f_2 = 1.031474E-08f;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	uParam1->f_1 = iVar0;
	return true;
}

struct<2> func_346(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_394(iParam0, &(Global_1072759.f_573), func_58(iParam1));
			break;
		case 3:
			Var0.f_1 = func_394(iParam0, &(Global_1072759.f_573.f_602), func_58(iParam1));
			break;
		case 4:
			Var0.f_1 = func_394(iParam0, &(Global_1072759.f_573.f_2104), func_58(iParam1));
			break;
		case 5:
			Var0.f_1 = func_394(iParam0, &(Global_1072759.f_573.f_12606), func_58(iParam1));
			break;
		case 6:
			Var0.f_1 = func_394(iParam0, &(Global_1072759.f_573.f_12908), func_58(iParam1));
			break;
		case 7:
			Var0.f_1 = func_394(iParam0, &(Global_1072759.f_573.f_15910), func_58(iParam1));
			break;
		case 8:
			Var0.f_1 = func_394(iParam0, &(Global_1072759.f_573.f_16512), func_58(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_189();
	}
	return Var0;
}

bool func_347(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_348(struct<2> Param0, int iParam2, int iParam3)
{
	*iParam2 = func_323(func_322(Param0));
	*iParam3 = func_395(func_324(*iParam2), func_179(Param0));
}

Vector3 func_349(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_396(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/].f_3;
}

bool func_350(struct<5> Param0, int* iParam5, float fParam6, int iParam7, int iParam8, int iParam9)
{
	Param0.f_2 = fParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(iParam5, &Param0))
	{
		return false;
	}
	return true;
}

int func_351(int iParam0)
{
	return Global_1110244.f_3667[iParam0 /*7*/].f_1;
}

int func_352(struct<5> Param0, var uParam5, bool bParam6)
{
	var uVar0;
	int iVar1;
	struct<4> Var2;

	uVar0 = Param0.f_1;
	iVar1 = func_353(uParam5->f_2);
	if (!func_350(Param0, &(Param0.f_1), 6.376546E+35f, 0, 0, 1))
	{
		return 0;
	}
	uParam5->f_4[0] = func_397(Param0, -4.91507E-19f, 0, 0, -1);
	uParam5->f_4[7] = func_399(Param0, 3.426144E-27f, (bParam6 && func_398(iVar1) != 7));
	uParam5->f_4[6] = func_399(Param0, -2.531133E+33f, (bParam6 && func_398(iVar1) != 7));
	uParam5->f_4[5] = func_399(Param0, -1.556656E-32f, bParam6);
	uParam5->f_4[8] = func_399(Param0, -1.924014E+25f, 0);
	uParam5->f_4[9] = func_399(Param0, -8.696991E-13f, 0);
	Param0.f_1 = uVar0;
	func_400(Param0, uParam5);
	Param0.f_1 = uVar0;
	func_401(Param0, uParam5);
	*uParam5 = { func_346(uParam5->f_2.f_1, func_402(iVar1)) };
	uParam5->f_31.f_1 = func_403(iVar1, uParam5->f_2.f_1);
	uParam5->f_31 = func_404(iVar1, uParam5->f_2.f_1);
	func_405(func_402(iVar1), uParam5->f_2.f_1, &Var2);
	uParam5->f_4[1] = Var2;
	uParam5->f_4[2] = Var2.f_2;
	uParam5->f_4[3] = Var2.f_1;
	uParam5->f_4[4] = Var2.f_3;
	return 1;
}

int func_353(int iParam0)
{
	return Global_1110244.f_3667[iParam0 /*7*/];
}

int func_354(int iParam0)
{
	return func_406(iParam0);
}

int func_355(int iParam0)
{
	return Global_1114878[iParam0 /*70*/].f_1;
}

int func_356(var uParam0)
{
	if (func_31(*uParam0))
	{
		return 0;
	}
	return 1;
}

int func_357(int iParam0, float fParam1)
{
	int iVar0;

	if (!func_257())
	{
		return 0;
	}
	if (!func_407(iParam0))
	{
		return 15;
	}
	iVar0 = func_408(iParam0);
	if (iVar0 == 0)
	{
		return 19;
	}
	if (!func_409(fParam1, 2))
	{
		if (!UNLOCK::UNLOCK_IS_VISIBLE(iVar0))
		{
			return 18;
		}
	}
	if (!func_409(fParam1, 1))
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar0))
		{
			return 17;
		}
	}
	return 0;
}

int func_358(var uParam0, float fParam1)
{
	if (uParam0->f_2.f_1 == 0)
	{
		return 2;
	}
	if (!func_409(fParam1, 4))
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(uParam0->f_2.f_1))
		{
			return 4;
		}
	}
	if (!func_409(fParam1, 8))
	{
		if (!UNLOCK::UNLOCK_IS_VISIBLE(uParam0->f_2.f_1))
		{
			return 3;
		}
	}
	return 0;
}

int func_359(var uParam0, int iParam1, var uParam2, float fParam3)
{
	if (func_409(fParam3, 16))
	{
		return 0;
	}
	if (!func_257())
	{
		return 0;
	}
	if (func_294(uParam0->f_2, 1))
	{
		return 0;
	}
	if (func_410(uParam2, iParam1))
	{
		return 0;
	}
	return 5;
}

int func_360(var uParam0, float fParam1)
{
	int iVar0;

	if (func_409(fParam1, 16384))
	{
		return 0;
	}
	iVar0 = func_128(func_136());
	if (MISC::IS_BIT_SET(uParam0->f_25.f_2, iVar0))
	{
		return 14;
	}
	return 0;
}

int func_361(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (func_409(fParam1, 1024))
	{
		return 0;
	}
	if (!func_407(iParam0))
	{
		return 15;
	}
	if (!func_412(func_411(iParam0)))
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	iVar0 = GANG::NETWORK_GET_GANG_ID(iVar1);
	if (GANG::NETWORK_GET_GANG_LEADER(iVar0) != iVar1)
	{
		return 28;
	}
	return 0;
}

int func_362(var uParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	if (!func_407(iParam1))
	{
		return 15;
	}
	if (!func_257())
	{
		return 0;
	}
	if (func_409(fParam3, 32))
	{
		return 0;
	}
	if (func_294(uParam0->f_2, 1))
	{
		return 0;
	}
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam2))
	{
		return 23;
	}
	if (!GANG::NETWORK_IS_GANG_IN_SESSION(iParam2))
	{
		return 24;
	}
	iVar0 = GANG::NETWORK_GET_GANG_LEADER(iParam2);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return 29;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 30;
	}
	if (func_413(iVar0, iParam1))
	{
		return 16;
	}
	return 0;
}

int func_363(var uParam0, int iParam1, float fParam2)
{
	int iVar0;

	if (!func_238(uParam0->f_2))
	{
		return 21;
	}
	if (!func_257())
	{
		return 0;
	}
	if (func_409(fParam2, 64))
	{
		return 0;
	}
	if (func_294(uParam0->f_2, 1))
	{
		return 0;
	}
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam1))
	{
		return 23;
	}
	if (!GANG::NETWORK_IS_GANG_IN_SESSION(iParam1))
	{
		return 24;
	}
	iVar0 = GANG::NETWORK_GET_GANG_LEADER(iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return 29;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 30;
	}
	if (func_414(iVar0, uParam0->f_2))
	{
		return 22;
	}
	return 0;
}

int func_364(int iParam0, int iParam1, float fParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_415(iParam0);
		if (iParam1 == -1)
		{
			return 26;
		}
	}
	if (func_416(iParam1) != 0)
	{
		if (func_409(fParam2, 2048))
		{
			return 0;
		}
		return 25;
	}
	return 0;
}

int func_365(int iParam0)
{
	int iVar0;

	if (!func_257())
	{
		return 0;
	}
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return 23;
	}
	if (!GANG::NETWORK_IS_GANG_IN_SESSION(iParam0))
	{
		return 24;
	}
	iVar0 = GANG::NETWORK_GET_GANG_LEADER(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return 29;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 30;
	}
	if (func_31(Global_1056554[iVar0 /*491*/].f_2))
	{
		return 6;
	}
	return 0;
}

int func_366(int iParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;

	if (func_409(fParam2, 256))
	{
		return 0;
	}
	if (uParam1->f_31.f_1 == 3.006576E-21f)
	{
		return 0;
	}
	iVar0 = GANG::NETWORK_GET_GANG_LEADER(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			iVar1 = func_417(iVar0);
		}
		else
		{
			return 30;
		}
	}
	else
	{
		return 29;
	}
	if (iVar1 == 0)
	{
		return 31;
	}
	switch (uParam1->f_31.f_1)
	{
		case joaat("POSITIVE"):
			if (iVar1 != 1)
			{
				return 7;
			}
			break;
		case joaat("NEGATIVE"):
			if (iVar1 != 2)
			{
				return 8;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_367(var uParam0, int iParam1, float fParam2)
{
	if (func_409(fParam2, 512))
	{
		return 0;
	}
	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(iParam1) < uParam0->f_4[0])
	{
		return 27;
	}
	return 0;
}

int func_368(var uParam0, float fParam1)
{
	struct<16> Var0;
	int iVar33;
	int iVar34;
	int iVar35;

	if (func_409(fParam1, 128))
	{
		return 0;
	}
	if (func_294(uParam0->f_2, 1))
	{
		return 0;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_4 = 10;
	Var0.f_15 = 4;
	Var0.f_15.f_5 = 4;
	Var0.f_25 = 1;
	Var0.f_28 = 2;
	Var0.f_28.f_1 = -1;
	Var0.f_28.f_1.f_1 = -1;
	Var0.f_31 = 3.006576E-21f;
	Var0.f_31.f_1 = 3.006576E-21f;
	func_418(&Var0);
	if (!func_31(Var0))
	{
		return 0;
	}
	iVar33 = 0;
	while (iVar33 <= 3)
	{
		iVar34 = (Var0.f_15[iVar33] || Var0.f_15.f_5[iVar33]);
		if (iVar34 == 0)
		{
		}
		else
		{
			iVar35 = (uParam0->f_15.f_5[iVar33] && iVar34);
			if (iVar35 != 0)
			{
				return 9;
			}
		}
		iVar33++;
	}
	return 0;
}

int func_369(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (func_409(fParam1, 4096))
	{
		return 0;
	}
	if (uParam0->f_4[1] > 0)
	{
		iVar1 = NETWORK::GET_MAX_NUM_NETWORK_PEDS();
		iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(true);
		if ((iVar1 - iVar0) < uParam0->f_4[1])
		{
			return 10;
		}
	}
	if (uParam0->f_4[2] > 0)
	{
		iVar1 = NETWORK::GET_MAX_NUM_NETWORK_OBJECTS();
		iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(true);
		if ((iVar1 - iVar0) < uParam0->f_4[2])
		{
			return 11;
		}
	}
	if (uParam0->f_4[3] > 0)
	{
		iVar1 = NETWORK::GET_MAX_NUM_NETWORK_VEHICLES();
		iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(true);
		if ((iVar1 - iVar0) < uParam0->f_4[3])
		{
			return 12;
		}
	}
	if (uParam0->f_4[4] > 0)
	{
		iVar1 = NETWORK::GET_MAX_NUM_NETWORK_PICKUPS();
		iVar0 = NETWORK::_GET_NUM_RESERVED_MISSION_PICKUPS(true);
		if ((iVar1 - iVar0) < uParam0->f_4[4])
		{
			return 13;
		}
	}
	return 0;
}

int func_370(int iParam0, float fParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 23;
	}
	iVar0 = GANG::NETWORK_GET_GANG_LEADER(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return 29;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 30;
	}
	if (func_419(iVar0))
	{
		return 44;
	}
	return 0;
}

int func_371(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	vector3 vVar8;

	if (!func_407(iParam3))
	{
		return 15;
	}
	if (!func_420(iParam4))
	{
		return 20;
	}
	vVar0 = { func_305(iParam4) };
	bVar4 = func_421(fParam1, 1.084202E-19f);
	if (func_241(&(uParam0->f_25), 1.343361E+34f) || func_241(&(uParam0->f_25), -2.430807E-05f))
	{
		if (!func_422(iParam2, vVar0, uVar3))
		{
			return 33;
		}
	}
	iVar5 = func_179(*uParam0);
	iVar6 = func_423(uParam0->f_2, iVar5);
	if (!bVar4)
	{
		iVar7 = 0;
		while (iVar7 < iVar6)
		{
			vVar8 = { func_424(uParam0->f_2, iVar5, iVar7) };
			if (func_102(vVar8))
			{
			}
			else if (VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(vVar8, 20f, false, 0, 2.706126E-18f))
			{
				return 34;
			}
			iVar7++;
		}
	}
	return 0;
}

int func_372(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;

	iVar0 = func_179(*uParam0);
	iVar1 = func_423(uParam0->f_2, iVar0);
	bVar2 = func_421(fParam1, 1.084202E-19f);
	if (!bVar2)
	{
		iVar3 = 0;
		while (iVar3 < iVar1)
		{
			vVar4 = { func_424(uParam0->f_2, iVar0, iVar3) };
			if (func_102(vVar4))
			{
			}
			else if (VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(vVar4, 20f, false, 0, 2.706126E-18f))
			{
				return 34;
			}
			iVar3++;
		}
	}
	return 0;
}

int func_373(var uParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	int iVar8;

	bVar3 = func_409(fParam1, 2f);
	bVar4 = func_409(fParam1, 1.084202E-19f);
	if (func_409(fParam1, 8192))
	{
		vVar5 = { 0f, 0f, 0f };
	}
	else
	{
		vVar5 = { func_425(GANG::NETWORK_GET_GANG_LEADER(iParam2)) };
	}
	func_426(*uParam0, &iVar1, &iVar2);
	iVar8 = func_427(iVar1, iVar2, func_325(iVar1), vVar5, !bVar3, bVar4, 1, -1f);
	if (iVar8 != 0)
	{
		switch (iVar8)
		{
			case 7:
				iVar0 = 39;
				break;
			case 8:
				iVar0 = 40;
				break;
			case 3:
				iVar0 = 43;
				break;
			case 6:
				iVar0 = 42;
				break;
			case 5:
				iVar0 = 38;
				break;
			case 4:
				iVar0 = 34;
				break;
			case 1:
				iVar0 = 35;
				break;
			case 11:
				iVar0 = 32;
				break;
			case 2:
				iVar0 = 37;
				break;
			case 12:
				iVar0 = 36;
				break;
			case 15:
				iVar0 = 44;
				break;
			default:
				iVar0 = 41;
				break;
		}
		return iVar0;
	}
	return 0;
}

bool func_374(int iParam0, float fParam1, var uParam2)
{
	var uVar0;

	if (func_428(iParam0, fParam1, &uVar0))
	{
		func_429(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

var func_375(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return uVar0;
	}
	if (func_430() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1295619.f_5;
	iVar6 = Global_1295619.f_10;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case joaat("VOLCYLINDER"):
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_431());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_431());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_431());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_432(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295619.f_149[iVar2]))
		{
			iVar10 = Global_1295619.f_149[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_433(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (Global_1295619.f_83[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_434(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::IS_PED_INCAPACITATED(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (GANG::NETWORK_GET_GANG_ID(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_435(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::IS_POINT_IN_VOLUME(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::DELETE_VOLUME(iVar8);
	}
	return uVar0;
}

bool func_376(int iParam0, vector3 vParam1, float fParam4)
{
	return BUILTIN::VDIST(func_425(iParam0), vParam1) <= fParam4;
}

int func_377(bool bParam0, int iParam1)
{
	if (!func_246(bParam0, 0))
	{
		return func_436(func_383(bParam0), iParam1);
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

void func_378(bool bParam0, var uParam1, var uParam2)
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

struct<18> func_379(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_380(bool bParam0)
{
	int iVar0;

	iVar0 = func_234(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_386(8.681942E-06f, func_437(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_386(8.681942E-06f, func_437(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_386(8.681942E-06f, func_437(bParam0), -1.942248E+12f, 0);
}

void func_381(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_382(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_234(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_383(bool bParam0)
{
	return bParam0;
}

bool func_384(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

struct<5> func_385(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_437(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_247(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_386(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_380(bParam1) };
			if (iParam2 && func_438(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_439(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_439(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_440(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_441(bParam1) };
			switch (func_314(bParam0))
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
			if (func_442(bParam0, -2.580501E-27f))
			{
				Var0 = { func_386(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_442(bParam0, -4.220332E-15f))
			{
				Var0 = { func_386(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_386(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_442(bParam0, -3.171238E-21f))
			{
				Var0 = { func_386(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_443(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_442(bParam0, -3.171238E-21f))
			{
				Var0 = { func_386(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

struct<4> func_386(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_246(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_234(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

void func_387(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

bool func_388(bool bParam0, int iParam1)
{
	*bParam0 = Global_1245159.f_9818;
	bParam0->f_2 = 1.013984E-23f;
	bParam0->f_3 = iParam1;
	return (DATAFILE::PARSEDDATA_IS_FILE_LOADED(*bParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0));
}

int func_389()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.x = Global_1245159.f_9818;
	vVar1.f_2 = -28.97993f;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(vVar1.f_1), &vVar1))
	{
		iVar0 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
	}
	return iVar0;
}

int func_390(int iParam0)
{
	return func_444(iParam0) + 30;
}

void func_391(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { Global_1900460.f_1[iParam0 /*2*/] };
	Global_1900460.f_1[iParam0 /*2*/] = { Global_1900460.f_1[iParam1 /*2*/] };
	Global_1900460.f_1[iParam1 /*2*/] = { Var0 };
}

int func_392(int iParam0)
{
	return Global_1107816.f_33[iParam0 /*16*/];
}

var func_393(int iParam0)
{
	int iVar0;

	iVar0 = func_446(0, (func_445() - 1), &iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_447(iVar0);
}

int func_394(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if ((*uParam1)[iVar2 /*3*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if ((*uParam1)[iVar2 /*3*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

int func_395(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_388(&Var1, iParam0) && func_448(&Var1, iParam1))
	{
		iVar0 = ((func_449(iParam0) - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_396(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (Global_1245159[iParam0 /*5*/].f_4 + iParam1);
}

int func_397(vector3 vParam0, int iParam3, int iParam4, float fParam5, int iParam6, bool bParam7, int iParam8)
{
	var uVar0;

	vParam0.f_2 = fParam5;
	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar0, &vParam0))
	{
		if (bParam7)
		{
			return iParam8;
		}
	}
	return uVar0;
}

int func_398(int iParam0)
{
	return Global_1296597[iParam0 /*5*/].f_3;
}

int func_399(vector3 vParam0, var uParam3, var uParam4, float fParam5, bool bParam6)
{
	var uVar0;

	vParam0.f_2 = fParam5;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

void func_400(struct<5> Param0, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;

	iVar1 = func_450(6.603842E+11f, Param0);
	uVar6 = Param0.f_1;
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar6;
		if (!func_350(Param0, &(Param0.f_1), -3.366555E+25f, iVar0, 0, 1))
		{
		}
		else
		{
			uVar7 = Param0.f_1;
			iVar8 = func_451(Param0);
			iVar3 = func_450(2.781336E-24f, Param0);
			iVar2 = 0;
			while (iVar2 <= (iVar3 - 1))
			{
				Param0.f_1 = uVar7;
				if (!func_350(Param0, &(Param0.f_1), 0.007273997f, iVar2, 0, 1))
				{
				}
				else
				{
					iVar4 = func_399(Param0, 1.371865E+18f, 1);
					switch (iVar8)
					{
						case joaat("FLAGS"):
							iVar5 = func_300(iVar4, 1);
							break;
						case joaat("ORIGINS"):
							iVar5 = func_452(iVar4);
							break;
						case joaat("DESTINATIONS"):
							iVar5 = func_452(iVar4);
							break;
						default:
							break;
					}
					if (iVar5 == -1)
					{
					}
					else
					{
						switch (iVar8)
						{
							case joaat("FLAGS"):
								func_454(&(uParam5->f_25), func_453(iVar5, 1));
								break;
							case joaat("ORIGINS"):
								func_455(&(uParam5->f_15), iVar5);
								break;
							case joaat("DESTINATIONS"):
								func_455(&(uParam5->f_15.f_5), iVar5);
								break;
							default:
								break;
						}
					}
				}
				iVar2++;
			}
		}
		iVar0++;
	}
}

void func_401(struct<5> Param0, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (!func_350(Param0, &(Param0.f_1), -84.35052f, 0, 0, 0))
	{
		return;
	}
	uVar3 = Param0.f_1;
	iVar1 = func_450(-0.0002447889f, Param0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar3;
		iVar2 = -1;
		if (!func_350(Param0, &(Param0.f_1), -3.858537E+34f, iVar0, 0, 1))
		{
		}
		else
		{
			iVar2 = func_397(Param0, -0.1187015f, 1, 1, -1);
			if (iVar2 < 0 || iVar2 > 23)
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam5->f_25.f_2), iVar2);
			}
		}
		iVar0++;
	}
}

int func_402(int iParam0)
{
	return func_457(func_456(iParam0, 8.377519E+23f, 1));
}

float func_403(int iParam0, int iParam1)
{
	return func_458(iParam0, iParam1);
}

var func_404(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;

	func_459(iParam0, iParam1, -0.1579002f, &uVar0, &uVar1);
	return uVar1;
}

void func_405(int iParam0, float fParam1, int* iParam2)
{
	vector3 vVar0;

	if (!func_460(iParam0))
	{
		return;
	}
	if (func_428(iParam0, fParam1, &vVar0))
	{
		vVar0.f_2 = -3.435564E+12f;
		if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(iParam2, &vVar0))
		{
		}
		vVar0.f_2 = 2.963616E-21f;
		if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(iParam2->f_1), &vVar0))
		{
		}
		vVar0.f_2 = -5.234699E+08f;
		if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(iParam2->f_2), &vVar0))
		{
		}
		vVar0.f_2 = -7.178136E+15f;
		if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(iParam2->f_3), &vVar0))
		{
		}
	}
}

var func_406(int iParam0)
{
	return Global_1296597[iParam0 /*5*/].f_2;
}

bool func_407(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 36);
}

int func_408(int iParam0)
{
	return Global_1119220[iParam0 /*35*/];
}

bool func_409(float fParam0, int iParam1)
{
	return (fParam0 && iParam1) != 0;
}

bool func_410(var uParam0, int iParam1)
{
	return func_301(uParam0, iParam1, 3);
}

var func_411(int iParam0)
{
	return Global_1119220[iParam0 /*35*/].f_1;
}

bool func_412(var uParam0)
{
	return true;
}

bool func_413(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 36)
	{
		return false;
	}
	return func_461(iParam0, iParam1);
}

bool func_414(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!func_238(iParam1))
	{
		return false;
	}
	return func_462(iParam0, iParam1);
}

int func_415(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam0 == func_392(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_416(int iParam0)
{
	return Global_1107816.f_33[iParam0 /*16*/].f_2;
}

int func_417(int iParam0)
{
	return Global_1138658[iParam0 /*56*/].f_47;
}

void func_418(bool bParam0)
{
	MISC::COPY_SCRIPT_STRUCT(bParam0, &(Global_1110244.f_21.f_43.f_1), 33);
}

bool func_419(int iParam0)
{
	struct<2> Var0[7];
	int iVar15;
	int iVar16;
	int iVar17;

	if (!GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(iParam0)))
	{
		return false;
	}
	if (!GANG::NETWORK_IS_GANG_LEADER(iParam0))
	{
		return false;
	}
	iVar16 = GANG::_NETWORK_GET_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(iParam0), &Var0);
	iVar15 = 0;
	while (iVar15 <= (iVar16 - 1))
	{
		iVar17 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar15 /*2*/]));
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar17) || PLAYER::IS_PLAYER_DEAD(iVar17))
		{
		}
		else if (func_463(1048576, iVar17))
		{
			return true;
		}
		iVar15++;
	}
	return false;
}

bool func_420(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 62);
}

bool func_421(float fParam0, float fParam1)
{
	return (fParam0 && fParam1) != 0;
}

bool func_422(int iParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else if (GANG::NETWORK_GET_GANG_ID(iVar1) == iParam0)
		{
		}
		else if (func_464(iVar1))
		{
		}
		else if (!bParam4 && !func_465(iVar1, vParam1))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_423(int iParam0, int iParam1)
{
	vector3 vVar0;

	if (func_102(func_466(iParam0, iParam1)))
	{
		return 0;
	}
	if (!func_467(iParam0, &vVar0, iParam1))
	{
		return 1;
	}
	vVar0.f_2 = -3.972855E+33f;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(vVar0.f_1), &vVar0))
	{
		return 1;
	}
	return DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(vVar0.x, vVar0.y) + 1;
}

Vector3 func_424(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	struct<4> Var3;

	if (iParam2 == 0)
	{
		return func_466(iParam0, iParam1);
	}
	iParam2 = (iParam2 - 1);
	if (!func_467(iParam0, &Var3, iParam1))
	{
		return vVar0;
	}
	Var3.f_2 = -3.972855E+33f;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var3.f_1), &Var3))
	{
		return vVar0;
	}
	Var3.f_2 = -3.382021E+12f;
	Var3.f_3 = iParam2;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var3.f_1), &Var3))
	{
		return vVar0;
	}
	Var3.f_2 = -9.954428E+33f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vVar0, &Var3);
	return vVar0;
}

Vector3 func_425(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_426(struct<2> Param0, int iParam2, int iParam3)
{
	*iParam2 = func_323(func_322(Param0));
	*iParam3 = func_179(Param0);
}

int func_427(int iParam0, int iParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, float fParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	int iVar7;
	vector3 vVar8;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 112)
	{
		return 11;
	}
	if (!func_468())
	{
		return 2;
	}
	iVar1 = func_324(iParam0);
	iVar2 = func_395(iVar1, iParam1);
	if (iVar2 < 0 || iVar2 >= 55)
	{
		return 11;
	}
	if (!bParam7 && func_469(iParam0, iVar2, bParam8, &bVar3))
	{
		if (bVar3)
		{
			return 1;
		}
		else
		{
			return 4;
		}
	}
	if (func_470(iVar1, iParam1) && !bParam7)
	{
		vVar4 = { func_471(iVar1, iParam1) };
		iVar7 = func_472(iVar1, iVar2);
		if (!func_473(iVar7, vVar4))
		{
			return 5;
		}
	}
	if (func_474(iParam2) == -1)
	{
		return 6;
	}
	if (fParam9 >= 0f && !func_102(vParam3))
	{
		vVar8 = { func_349(iParam0, iVar2) };
		if (BUILTIN::VDIST(vParam3, vVar8) > fParam9)
		{
			return 12;
		}
	}
	if (func_475(iParam2))
	{
		iVar11 = func_476(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
		if (!func_477(iVar11))
		{
			return 13;
		}
		if (func_478(iVar11))
		{
			return 14;
		}
	}
	if (func_419(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))))
	{
		return 15;
	}
	if (bParam6)
	{
		if (iParam2 != 2.684408E+23f && func_479(func_189(), func_189(), 0, bParam7))
		{
			return 3;
		}
		bVar12 = false;
		if (!bVar12)
		{
			iVar13 = func_480(iParam0, iVar2);
			if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar13))
			{
				return 8;
			}
			if (!UNLOCK::UNLOCK_IS_VISIBLE(iVar13))
			{
				return 7;
			}
			iVar14 = func_481(iParam0, iVar2);
			if (iVar14 != 0)
			{
				if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar14))
				{
					return 10;
				}
				if (!UNLOCK::UNLOCK_IS_VISIBLE(iVar14))
				{
					return 9;
				}
			}
		}
	}
	return 0;
}

bool func_428(int iParam0, float fParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = 1.841357E+10f;
	bParam2->f_3 = func_482(iParam0);
	bParam2->f_4 = fParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_429(bool bParam0, int iParam1, var uParam2)
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

int func_430()
{
	return Global_1051645.f_12;
}

char* func_431()
{
	return "unnamed";
}

int func_432(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

bool func_433(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_483(36, iParam0);
}

int func_434(int iParam0)
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

bool func_435(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_484(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_485(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

int func_436(bool bParam0, int iParam1)
{
	if (!func_384(bParam0, 2))
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

struct<4> func_437(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_234(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_386(2.982335E+09f, func_486(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_386(2.982335E+09f, func_486(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_386(2.982335E+09f, func_486(), -5.45926E-19f, bParam0);
}

int func_438(bool bParam0, bool bParam1)
{
	if (func_314(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_487();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_439(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_488(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_440(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_489(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_441(bool bParam0)
{
	int iVar0;

	iVar0 = func_234(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_386(3.507197E-29f, func_437(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_386(3.507197E-29f, func_437(bParam0), 12999093, 0);
}

bool func_442(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_314(bParam0);
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
			if (func_490(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_443(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_491(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_444(int iParam0)
{
	return iParam0 * 31;
}

int func_445()
{
	return Global_1110244.f_3667.f_938;
}

int func_446(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*iParam2 < Global_1110244.f_3667.f_729[iVar0 /*2*/])
	{
		return func_446(iParam0, (iVar0 - 1), iParam2);
	}
	if (*iParam2 > Global_1110244.f_3667.f_729[iVar0 /*2*/])
	{
		return func_446(iVar0 + 1, iParam1, iParam2);
	}
	return iVar0;
}

var func_447(int iParam0)
{
	return Global_1110244.f_3667.f_729[iParam0 /*2*/].f_1;
}

bool func_448(bool bParam0, int iParam1)
{
	bParam0->f_2 = 4.206815E-11f;
	bParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_449(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	if (func_388(&vVar1, iParam0))
	{
		vVar1.f_2 = 8.002737E-08f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(vVar1.f_1), &vVar1))
		{
			iVar0 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
		}
	}
	return iVar0;
}

int func_450(float fParam0, vector3 vParam1, var uParam4, var uParam5)
{
	vParam1.f_2 = fParam0;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&vParam1);
}

int func_451(struct<5> Param0)
{
	return func_399(Param0, -5.906875E+23f, 1);
}

int func_452(int iParam0)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;

	Var0 = Global_1072759.f_28418[30 /*4*/].f_3;
	Var0.f_2 = 0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0);
	iVar5 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&Var0);
	Var0.f_2 = 2;
	Var0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0);
	iVar6 = DATAFILE::_0xE13634BB6BAF0734(Var0, Var0.f_1);
	return ((iVar5 - iVar6) - 1);
}

int func_453(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 4.231174E+26f;
		case 1:
			return 2.501192E-20f;
		case 2:
			return 3.394192E+28f;
		case 3:
			return 3.489803E-20f;
		case 4:
			return -0.7561995f;
		case 5:
			return -1.032356E+11f;
		case 6:
			return -1.089223E-33f;
		case 7:
			return 0.1575702f;
		case 8:
			return -7626446f;
		case 9:
			return 2.021323E+33f;
		case 10:
			return -5.084263E-34f;
		case 11:
			return -2.461755E-27f;
		case 12:
			return -2.200347E-16f;
		case 13:
			return -2.887862E-10f;
		case 14:
			return -30.55064f;
		case 15:
			return 3.185026E+26f;
		case 16:
			return 1.343361E+34f;
		case 17:
			return -2.430807E-05f;
		case 18:
			return -3.320927E+11f;
		case 19:
			return -3.375001f;
		case 20:
			return -3.317718E+24f;
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

void func_454(var uParam0, int iParam1)
{
	if (func_492(uParam0, func_300(iParam1, 1), 1))
	{
	}
}

void func_455(var uParam0, int iParam1)
{
	if (func_492(uParam0, iParam1, 4))
	{
	}
}

var func_456(int iParam0, int iParam1, int* iParam2)
{
	struct<5> Var0;

	if (!func_493(iParam0))
	{
		return 0;
	}
	if (!func_494(&Var0))
	{
		return 0;
	}
	if (!func_495(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_495(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_495(Var0, &(Var0.f_1), 22, 0, 0, 1))
	{
		return 0;
	}
	if (!func_495(Var0, &(Var0.f_1), 23, iParam1, 0, iParam2))
	{
		return 0;
	}
	return func_496(Var0, 53, 1);
}

int func_457(int iParam0)
{
	switch (iParam0)
	{
		case joaat("UNLOCK_GROUP__MISSION_STORY"):
			return 2;
		case joaat("UNLOCK_GROUP__MISSION_PROCEDURAL"):
			return 3;
		case joaat("UNLOCK_GROUP__MISSION_FETCH"):
			return 4;
		case joaat("UNLOCK_GROUP__MISSION_MINIGAME"):
			return 5;
		case 634321112:
			return 8;
		case joaat("UNLOCK_GROUP__MISSION_UGC"):
			return 7;
		case joaat("UNLOCK_GROUP__MISSION_FREE_MODE_EVENT"):
			return 6;
		default:
			break;
	}
	return -1;
}

float func_458(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_493(iParam0))
	{
		return 3.006576E-21f;
	}
	if (!func_494(&Var1))
	{
		return 3.006576E-21f;
	}
	if (!func_495(Var1, &(Var1.f_1), 13, 0, 0, 1))
	{
		return 3.006576E-21f;
	}
	if (!func_495(Var1, &(Var1.f_1), 14, iParam0, 0, 1))
	{
		return 3.006576E-21f;
	}
	if (!func_495(Var1, &(Var1.f_1), 33, 0, 0, 0))
	{
		return 3.006576E-21f;
	}
	if (!func_495(Var1, &(Var1.f_1), 34, -6.16351E-12f, 0, 0))
	{
		return 3.006576E-21f;
	}
	iVar0 = func_497(Var1, 4);
	if (iVar0 != 1)
	{
		return 3.006576E-21f;
	}
	if (!func_495(Var1, &(Var1.f_1), 35, 0, 0, 1))
	{
		return 3.006576E-21f;
	}
	uVar6 = func_498(Var1);
	if (iParam1 == 0)
	{
	}
	else if (func_495(Var1, &(Var1.f_1), 30, 0, 0, 0))
	{
		if (func_495(Var1, &(Var1.f_1), 31, iParam1, 0, 0))
		{
			uVar6 = func_498(Var1);
		}
	}
	return uVar6;
}

int func_459(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	struct<5> Var0;

	if (!func_493(iParam0))
	{
		*uParam3 = -1;
		*uParam4 = 3.006576E-21f;
		return 0;
	}
	if (!func_494(&Var0))
	{
		*uParam3 = -1;
		*uParam4 = 3.006576E-21f;
		return 0;
	}
	if (!func_495(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		*uParam3 = -1;
		*uParam4 = 3.006576E-21f;
		return 0;
	}
	if (!func_495(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		*uParam3 = -1;
		*uParam4 = 3.006576E-21f;
		return 0;
	}
	if (!func_495(Var0, &(Var0.f_1), 28, 0, 0, 0))
	{
		*uParam3 = -1;
		*uParam4 = 3.006576E-21f;
		return 0;
	}
	if (!func_495(Var0, &(Var0.f_1), 29, iParam2, 0, 0))
	{
		*uParam3 = -1;
		*uParam4 = 3.006576E-21f;
		return 0;
	}
	*uParam3 = func_499(Var0);
	*uParam4 = func_498(Var0);
	if (iParam1 != 0)
	{
		if (func_495(Var0, &(Var0.f_1), 30, 0, 0, 0))
		{
			if (func_495(Var0, &(Var0.f_1), 31, iParam1, 0, 0))
			{
				*uParam3 = func_499(Var0);
				*uParam4 = func_498(Var0);
			}
		}
	}
	if (*uParam3 == 0)
	{
		*uParam3 = -1;
		*uParam4 = 3.006576E-21f;
		return 0;
	}
	return 1;
}

bool func_460(int iParam0)
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

bool func_461(int iParam0, int iParam1)
{
	return func_301(&(Global_1140451[iParam0 /*8*/]), iParam1, 2);
}

bool func_462(int iParam0, int iParam1)
{
	return func_301(&(Global_1140451[iParam0 /*8*/].f_3), iParam1, 4);
}

bool func_463(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102813.f_3 && iParam0) != 0;
	}
	return (Global_1101558[iParam1 /*38*/].f_3 && iParam0) != 0;
}

bool func_464(int iParam0)
{
	int iVar0;

	if (Global_1056554[iParam0 /*491*/].f_2 != -1)
	{
		return true;
	}
	iVar0 = func_500(iParam0);
	if (iVar0 == 2 || iVar0 == 1)
	{
		return true;
	}
	if (func_501(iParam0, 1))
	{
		return true;
	}
	if (func_502(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_465(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;

	vVar0 = { func_425(iParam0) };
	if (!func_102(vParam1))
	{
		if (func_102(vVar0))
		{
			return false;
		}
		fVar3 = BUILTIN::VDIST(vVar0, vParam1);
		fVar4 = 1153138688; /* Float: 1500f */
		fVar5 = 1123680256; /* Float: 125f */
		if (fVar3 < fVar5)
		{
			return false;
		}
		if (fVar3 > fVar4)
		{
			return false;
		}
	}
	return true;
}

Vector3 func_466(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!func_467(iParam0, &vVar3, iParam1))
	{
		return vVar0;
	}
	vVar3.f_2 = -9.954428E+33f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vVar0, &vVar3);
	return vVar0;
}

bool func_467(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	if (!func_503(iParam0, bParam1))
	{
		return false;
	}
	iVar0 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(*bParam1, bParam1->f_1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		Var2 = { *bParam1 };
		Var2.f_2 = 7.595256f;
		Var2.f_3 = iVar1;
		if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var2.f_1), &Var2))
		{
		}
		else
		{
			Var2.f_2 = 52855.35f;
			Var2.f_3 = iParam2;
			if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var2.f_1), &Var2))
			{
			}
			else
			{
				*bParam1 = { Var2 };
				return true;
			}
		}
		iVar1++;
	}
	return false;
}

bool func_468()
{
	if (func_29())
	{
		return false;
	}
	return true;
}

bool func_469(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;

	bVar0 = func_504(iParam0, iParam1, 2);
	if (func_505(iParam0, iParam1, bVar0))
	{
		return true;
	}
	vVar1 = { func_349(iParam0, iParam1) };
	if (func_102(vVar1))
	{
		return false;
	}
	fVar4 = func_506(func_324(iParam0), iParam1);
	if ((bParam2 && func_504(iParam0, iParam1, 1)) && func_507(vVar1, fVar4))
	{
		*bParam3 = 1;
		return true;
	}
	return func_508(vVar1, fVar4, bVar0);
}

bool func_470(int iParam0, int iParam1)
{
	bool bVar0;
	struct<5> Var1;

	bVar0 = false;
	if (func_388(&Var1, iParam0) && func_448(&Var1, iParam1))
	{
		func_509(Var1, -7.526388E+19f, &bVar0, 0);
	}
	return bVar0;
}

Vector3 func_471(int iParam0, int iParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if (func_388(&Var3, iParam0) && func_448(&Var3, iParam1))
	{
		func_510(Var3, -3.659237E+25f, &vVar0, 1);
	}
	return vVar0;
}

int func_472(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;

	iVar0 = 0;
	if (func_388(&Var1, iParam0))
	{
		if (func_511(&Var1, iParam1))
		{
			func_512(Var1, 8.85758E+09f, &iVar0, 0);
		}
	}
	iVar6 = 0;
	if (iVar0 != 0)
	{
		iVar6 = func_513(iVar0);
	}
	return iVar6;
}

bool func_473(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;

	if (func_102(vParam1))
	{
		return false;
	}
	if (func_514(iParam0))
	{
		return false;
	}
	if (func_515(iParam0))
	{
		return false;
	}
	fVar0 = 5f;
	fVar1 = func_516(iParam0);
	if (fVar1 > 1133903872)
	{
		fVar1 = 1133903872; /* Float: 300f */
	}
	if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::PLAYER_ID(), vParam1, fVar0, fVar1))
	{
		return false;
	}
	if (NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(vParam1, fVar0, fVar1))
	{
		return false;
	}
	fVar1 = (fVar1 * 1061158912);
	if (fVar1 < 1125515264)
	{
		fVar1 = 1125515264; /* Float: 150f */
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar5);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vParam1);
				if (fVar4 < fVar1 && !func_517(iParam0))
				{
					return false;
				}
			}
		}
		iVar5++;
	}
	return true;
}

int func_474(int iParam0)
{
	int iVar0;

	if (!func_518(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (func_519(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_475(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CAMP_RESUPPLY"):
		case joaat("CAMP_SETUP"):
		case joaat("CAMP_RAID"):
		case joaat("CAMP_SELL"):
			return true;
		default:
			break;
	}
	return false;
}

int func_476(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1144511[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

bool func_477(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

bool func_478(int iParam0)
{
	if (!func_477(iParam0))
	{
		return false;
	}
	return (func_520(iParam0) && Global_1141317[iParam0 /*27*/].f_18.f_1 != 0);
}

bool func_479(struct<2> Param0, struct<2> Param2, bool bParam4, bool bParam5)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!bParam4)
	{
		if (func_29())
		{
			return true;
		}
	}
	Var0 = -1;
	Var0.f_1 = -1;
	if (!func_31(Param2))
	{
		Var0 = { func_521() };
	}
	else
	{
		Var0 = { Param2 };
	}
	if ((!bParam5 && func_31(Var0)) && !func_173(Var0, Param0))
	{
		return true;
	}
	Var2 = { func_106() };
	if (func_31(Var2) && (!func_31(Var2) || !func_173(Param0, Var2)))
	{
		return true;
	}
	return false;
}

int func_480(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_396(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/];
}

int func_481(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_396(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/].f_1;
}

int func_482(int iParam0)
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

bool func_483(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_301(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_235())
	{
		return func_301(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_301(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_484(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_485(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!Global_1295619.f_17[iVar0])
	{
		func_522(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_523(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

struct<4> func_486()
{
	struct<4> Var0;

	return Var0;
}

int func_487()
{
	if (func_164(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_488(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_246(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_319(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_386(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_234(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_234(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_489(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_234(0);
	*iParam1 = { func_386(bParam0, func_380(0), fParam3, 0) };
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

bool func_490(bool bParam0, int iParam1, int iParam2)
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

int func_491(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_234(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

bool func_492(var uParam0, int iParam1, int iParam2)
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

bool func_493(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 83);
}

bool func_494(bool bParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = func_524();
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(iVar0))
	{
		return false;
	}
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(iVar0))
	{
		return false;
	}
	MISC::COPY_SCRIPT_STRUCT(bParam0, &uVar1, 5);
	*bParam0 = iVar0;
	return true;
}

bool func_495(struct<5> Param0, int* iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	Param0.f_2 = iParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(iParam5, &Param0))
	{
		return false;
	}
	return true;
}

var func_496(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

int func_497(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = iParam5;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&vParam0);
}

var func_498(struct<5> Param0)
{
	return func_496(Param0, 56, 1);
}

var func_499(struct<5> Param0)
{
	return func_496(Param0, 54, 1);
}

int func_500(int iParam0)
{
	int iVar0;

	if (!Global_1149417.f_5568)
	{
		return 0;
	}
	if (iParam0 == Global_1295619.f_149[Global_1295619])
	{
		return Global_17418.f_2641.f_2;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	return Global_1101558[iVar0 /*38*/].f_33;
}

bool func_501(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_525(Global_1297553[iVar0 /*87*/].f_86, iParam1);
	}
	return false;
}

bool func_502(int iParam0, int iParam1)
{
	if (iParam1 != 255)
	{
		return (Global_1155135[iParam1 /*30*/].f_18.f_10 && iParam0) != 0;
	}
	return (Global_1149417.f_4787.f_10 && iParam0) != 0;
}

bool func_503(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return false;
	}
	if (!func_526(iParam0))
	{
		return false;
	}
	iVar0 = func_527(iParam0);
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(iVar0))
	{
		return false;
	}
	*bParam1 = iVar0;
	bParam1->f_2 = -3.06566E+14f;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam1->f_1), bParam1))
	{
		return false;
	}
	return true;
}

bool func_504(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_396(iParam0, iParam1);
	return func_525(Global_1245159.f_566[iVar0 /*7*/].f_2, iParam2);
}

bool func_505(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	iVar0 = 0;
	while (iVar0 <= (func_528(iParam0, iParam1) - 1))
	{
		vVar1 = { func_529(func_324(iParam0), iParam1, iVar0) };
		fVar4 = func_530(func_324(iParam0), iParam1, iVar0);
		if (func_102(vVar1))
		{
		}
		else
		{
			if (func_508(vVar1, fVar4, bParam2))
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

float func_506(int iParam0, int iParam1)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = Global_1901671.f_170.f_34;
	if (func_388(&Var1, iParam0) && func_511(&Var1, iParam1))
	{
		func_531(Var1, -6.034118E+25f, &fVar0, 0);
	}
	return fVar0;
}

bool func_507(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), false, false), vParam0) < fParam3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_508(vector3 vParam0, float fParam3, bool bParam4)
{
	float fVar0;

	if (!bParam4)
	{
		fVar0 = 2.706126E-18f;
	}
	return VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(vParam0, fParam3, false, 0, fVar0);
}

int func_509(vector3 vParam0, int iParam3, var uParam4, float fParam5, bool bParam6, bool bParam7)
{
	vParam0.f_2 = fParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(bParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_510(vector3 vParam0, int iParam3, var uParam4, float fParam5, Vector3* vParam6, bool bParam7)
{
	vParam0.f_2 = fParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_511(bool bParam0, int iParam1)
{
	bParam0->f_2 = 5.658121E-27f;
	bParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_512(vector3 vParam0, int iParam3, var uParam4, float fParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = fParam5;
	uVar0 = *iParam6;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_513(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PRIMARY"):
			return 0;
		case joaat("SECONDARY"):
			return 1;
		case joaat("TROLLEY"):
			return 2;
	}
	return 0;
}

int func_514(int iParam0)
{
	return func_532(iParam0, 4);
}

bool func_515(int iParam0)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (Global_1149020.f_2[iParam0 /*43*/].f_11 == iVar0 || Global_1149020.f_2[iParam0 /*43*/].f_11 == (iVar0 - 1))
	{
		return true;
	}
	return false;
}

int func_516(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1138819072 /* Float: 450f */;
		case 1:
			return 1138819072 /* Float: 450f */;
		case 2:
			return 1132068864 /* Float: 250f */;
		default:
			break;
	}
	return 1138819072 /* Float: 450f */;
}

bool func_517(int iParam0)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (Global_1149020.f_2[iParam0 /*43*/].f_9 == iVar0 || Global_1149020.f_2[iParam0 /*43*/].f_9 == (iVar0 - 1))
	{
		return true;
	}
	return false;
}

bool func_518(int iParam0)
{
	int iVar0;

	iVar0 = func_533(iParam0);
	if (iVar0 != 0 && func_534(iVar0))
	{
		return false;
	}
	if (iParam0 == 2.684408E+23f)
	{
		return func_535();
	}
	return true;
}

bool func_519(int iParam0)
{
	return Global_1225084[iParam0 /*28*/] == -1;
}

bool func_520(int iParam0)
{
	int iVar0;

	if (!func_477(iParam0))
	{
		return false;
	}
	iVar0 = func_536(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

struct<2> func_521()
{
	return Global_1051268;
}

void func_522(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_523(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_523(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

int func_524()
{
	return Global_1072759.f_28418[32 /*4*/].f_3;
}

bool func_525(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_526(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_353(iParam0);
	if (iVar0 == -1)
	{
	}
	iVar1 = func_354(iVar0);
	switch (iVar1)
	{
		case 2:
			return true;
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

var func_527(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_526(iParam0))
	{
		return uVar0;
	}
	iVar1 = func_353(iParam0);
	iVar2 = func_354(iVar1);
	switch (iVar2)
	{
		case 2:
			return func_537(2);
		case 1:
			return func_537(3);
		default:
			break;
	}
	return uVar0;
}

int func_528(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return -1;
	}
	iVar0 = func_396(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/].f_6;
}

Vector3 func_529(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_388(&Var3, iParam0) && func_511(&Var3, iParam1)) && func_538(&Var3, iParam2))
	{
		func_510(Var3, 7.506326E+22f, &vVar0, 0);
	}
	return vVar0;
}

float func_530(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = Global_1901671.f_170.f_35;
	if ((func_388(&Var1, iParam0) && func_511(&Var1, iParam1)) && func_538(&Var1, iParam2))
	{
		func_531(Var1, -6.034118E+25f, &fVar0, 0);
	}
	return fVar0;
}

int func_531(vector3 vParam0, int iParam3, var uParam4, float fParam5, float* fParam6, bool bParam7)
{
	vParam0.f_2 = fParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(fParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_532(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_525(Global_1148603[iVar0 /*13*/][iParam0 /*4*/], iParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_533(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BOUNTY_BOARD"):
		case joaat("GUN_FOR_HIRE"):
		case -697789102:
		case joaat("CAMP_RESUPPLY"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case 195932838:
		case joaat("OUTLAW"):
		case joaat("CAMP_SETUP"):
		case joaat("MOONSHINE_SELL"):
		case joaat("BOUNTY_PLAYER"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("DYNAMIC"):
		case joaat("CAMP_RAID"):
		case joaat("CAMP_SELL"):
			return 1;
		case -2096602762:
		case -1812122325:
		case joaat("AMBUSH"):
		case -1086711901:
		case joaat("MOONSHINE_DYNAMIC"):
		case joaat("HIDEOUT"):
		case 918897273:
			return 8;
		default:
			break;
	}
	return 0;
}

bool func_534(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_535()
{
	return func_539(func_30(0));
}

int func_536(int iParam0)
{
	if (!func_477(iParam0))
	{
		return 0;
	}
	return Global_1142409.f_1[iParam0 /*63*/].f_3;
}

var func_537(int iParam0)
{
	return Global_1110244.f_21.f_3.f_1[iParam0];
}

bool func_538(bool bParam0, int iParam1)
{
	bParam0->f_2 = 6.31371E+22f;
	bParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_539(struct<2> Param0)
{
	return func_540(Param0, 1, 4);
}

bool func_540(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_31(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_541(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

int func_541(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_322(Param0);
	}
	return -1;
}

