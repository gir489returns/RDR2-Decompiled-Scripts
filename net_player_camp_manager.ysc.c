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
#endregion

void __EntryFunction__()
{
	struct<8> Var0;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();
	Var0.f_7 = -1;
	while (!func_2(0, 0))
	{
		func_3(&Global_1147972, &Var0, &Global_1148170, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT());
		func_4(&Var0);
		BUILTIN::WAIT(0);
	}
	func_5();
	func_6();
}

void func_1()
{
	int iVar0;

	if (func_7())
	{
		func_6();
	}
	iVar0 = MISC::GET_GAME_TIMER();
	func_8(32, -1);
	func_9();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1147972, 198, 29);
	func_10(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1147972), 198, "g_mpNetPlayerCampHost");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1148170, 321, 30);
	func_11(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1148170), 321, "g_mpNetPlayerCampPlayer");
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
}

bool func_2(bool bParam0, bool bParam1)
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

void func_3(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_13(uParam0, uParam1, uParam2, iVar0, bParam3);
				break;
		}
		iVar0++;
	}
}

void func_4(var uParam0)
{
	func_14(uParam0);
}

void func_5()
{
}

void func_6()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_7()
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

void func_8(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_9()
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
			func_6();
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_6();
		}
		if (func_15() == 0)
		{
			if (func_16())
			{
				func_6();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	return 1;
}

int func_10(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_11(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_12(bool bParam0)
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
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
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
			func_6();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_13(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam3, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 201:
			func_17(uParam0, uParam1, uParam2, iParam3, bParam4);
			break;
	}
}

void func_14(var uParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (func_18(16))
	{
		return;
	}
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(-1.73924E+12f))
	{
		return;
	}
	if (func_19(1, iVar0))
	{
		func_20(uParam0, 1);
	}
	if (func_19(2, iVar0))
	{
		func_20(uParam0, 0);
	}
	if (func_19(32, iVar0))
	{
		func_21(uParam0);
	}
	if (func_19(4, iVar0))
	{
		func_22(uParam0, 1);
	}
	if (func_19(8, iVar0))
	{
		func_22(uParam0, 0);
	}
	if (func_19(16, iVar0))
	{
		func_23(uParam0);
	}
	if (func_24())
	{
		if (!func_19(2, iVar0) && !func_19(8, iVar0))
		{
			uParam0->f_4++;
			func_25(uParam0);
		}
	}
	if (func_19(64, iVar0))
	{
		func_26(5, iVar0, *uParam0, 1, 0);
		func_27(64, iVar0);
	}
}

int func_15()
{
	return Global_1572887.f_14;
}

bool func_16()
{
	return Global_1051645.f_8;
}

void func_17(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<7> Var0;
	int iVar9;
	int iVar10;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam3, &Var0, 9))
	{
		return;
	}
	iVar9 = Var0.f_5;
	switch (Var0.f_4)
	{
		case 0:
			if (!bParam4)
			{
				return;
			}
			if (func_28(uParam0, Var0.f_6))
			{
				uParam0->f_67[iVar9 /*3*/] = { Var0.f_6 };
				uParam0->f_164[iVar9] = 1;
				func_26(1, Var0.f_5, Var0.f_6, 0, 0);
			}
			else
			{
				uParam0->f_67[iVar9 /*3*/] = { func_29() };
				uParam0->f_164[iVar9] = 0;
				func_26(2, Var0.f_5, Var0.f_6, 0, 0);
			}
			break;
		case 1:
			func_30(32, Var0.f_5);
			break;
		case 2:
			func_27(1, Var0.f_5);
			func_31("NET_WCAMP_OWNER_NO_CLOSE_CAMP", 10000, 0, 0, 0, 1);
			func_32(uParam1);
			break;
		case 5:
			if (!bParam4)
			{
				return;
			}
			uParam0->f_67[iVar9 /*3*/] = { func_29() };
			uParam0->f_164[iVar9] = 0;
			break;
		case 6:
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Var0.f_1))
			{
				return;
			}
			iVar10 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::IS_ENTITY_DEAD(iVar10))
			{
				return;
			}
			TASK::_0xFDECCA06E8B81346(iVar10);
			break;
	}
}

bool func_18(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_19(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	return (Global_1148170[iVar0 /*10*/].f_7 && iParam0) != 0;
}

void func_20(var uParam0, bool bParam1)
{
	var uVar0;

	if (bParam1)
	{
		func_33(uParam0, &(uParam0->f_3), &uVar0, &(uParam0->f_6), &(uParam0->f_5), 0);
		if (func_34(uParam0))
		{
			func_27(1, PLAYER::PLAYER_ID());
			func_26(0, PLAYER::PLAYER_ID(), *uParam0, 1, 0);
		}
		else
		{
			func_32(uParam0);
			func_27(1, PLAYER::PLAYER_ID());
		}
	}
	else
	{
		func_27(2, PLAYER::PLAYER_ID());
		func_30(8, PLAYER::PLAYER_ID());
	}
}

void func_21(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	func_35(&(Global_1148170[iVar1 /*10*/]), *uParam0, uParam0->f_6);
	func_27(32, iVar0);
	func_30(16, iVar0);
}

void func_22(var uParam0, bool bParam1)
{
	struct<8> Var0;
	int iVar8;
	int iVar9;
	int iVar10;

	if (!func_36(uParam0))
	{
		if (bParam1)
		{
			func_27(4, PLAYER::PLAYER_ID());
		}
		else
		{
			func_27(8, PLAYER::PLAYER_ID());
		}
		func_32(uParam0);
		return;
	}
	if (!func_37())
	{
		return;
	}
	if (bParam1)
	{
		iVar8 = PLAYER::PLAYER_ID();
		iVar9 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar8);
		Var0 = iVar9;
		Var0.f_1 = iVar8;
		Var0.f_2 = uParam0->f_5;
		iVar10 = iVar8;
		Global_1148170[iVar10 /*10*/].f_4 = 1;
		func_38(&(Global_1958662.f_2));
		func_27(4, iVar8);
	}
	else
	{
		iVar8 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_4);
		iVar9 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar8);
		Var0 = iVar9;
		Var0.f_1 = uParam0->f_4;
		func_27(8, PLAYER::PLAYER_ID());
	}
	Var0.f_7 = iVar8;
	Var0.f_3 = { *uParam0 };
	Var0.f_6 = uParam0->f_3;
	func_32(uParam0);
	uParam0->f_8 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_39(), &Var0, 8, 1024);
	uParam0->f_7 = Var0;
}

void func_23(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	if (!func_40(&(Global_1148170[iVar1 /*10*/]), uParam0))
	{
		return;
	}
	else
	{
		func_27(16, iVar0);
		func_30(4, iVar0);
	}
}

bool func_24()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1148170)
	{
		if (Global_1148170[iVar0 /*10*/].f_4)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_25(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_4 < 0 || uParam0->f_4 == 32)
	{
		uParam0->f_4 = 0;
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	if (iVar1 == uParam0->f_4)
	{
		return;
	}
	iVar2 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_4);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
	{
		return;
	}
	if (func_41(Global_1148170[uParam0->f_4 /*10*/]))
	{
		return;
	}
	if (!Global_1148170[uParam0->f_4 /*10*/].f_4)
	{
		return;
	}
	if (func_42(Global_33, Global_1148170[uParam0->f_4 /*10*/], 1) < 1185925120)
	{
		if (!SCRIPTS::DOES_THREAD_EXIST(uParam0->f_8) && !SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_8, false))
		{
			*uParam0 = { Global_1148170[uParam0->f_4 /*10*/] };
			uParam0->f_3 = Global_1148170[uParam0->f_4 /*10*/].f_3;
			func_30(2, iVar0);
		}
	}
}

void func_26(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6)
{
	struct<7> Var0;
	var uVar9;
	int iVar10;

	Var0 = 201;
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	Var0.f_6 = { vParam2 };
	if (bParam5)
	{
		iVar10 = NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT();
		uVar9 = func_43(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar10));
	}
	else if (bParam6)
	{
		uVar9 = func_44(0, 8);
	}
	else
	{
		uVar9 = func_43(iParam1);
	}
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 9, 28, &uVar9);
}

void func_27(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	Global_1148170[iVar0 /*10*/].f_7 = (Global_1148170[iVar0 /*10*/].f_7 - (Global_1148170[iVar0 /*10*/].f_7 && iParam0));
}

bool func_28(var uParam0, vector3 vParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_67)
	{
		if (func_45(vParam1, uParam0->f_67[iVar0 /*3*/]) || BUILTIN::VDIST2(vParam1, uParam0->f_67[iVar0 /*3*/]) < 1200862336)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

Vector3 func_29()
{
	return 0f, 0f, 0f;
}

void func_30(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	Global_1148170[iVar0 /*10*/].f_7 = (Global_1148170[iVar0 /*10*/].f_7 || iParam0);
}

int func_31(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

void func_32(var uParam0)
{
	*uParam0 = { func_29() };
	uParam0->f_3 = 0f;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
}

void func_33(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	struct<4> Var0;
	int iVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	vector3 vVar16;
	vector3 vVar19;
	var uVar22;
	var uVar23;
	float fVar24;
	float fVar25;
	bool bVar26;
	int iVar27;
	vector3 vVar28[32];

	fVar25 = 1232348158;
	bVar26 = false;
	Var0 = Global_1072759.f_28418[46 /*4*/].f_3;
	iVar5 = func_46();
	fVar6 = func_47(iVar5);
	Var0.f_2 = 1.656408E+21f;
	Var0.f_3 = fVar6;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 0.58473f;
		iVar7 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&Var0);
		uVar15 = Var0.f_1;
		iVar10 = 0;
		while (iVar10 < vVar28.x)
		{
			iVar27 = iVar10;
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar27) || iVar27 == PLAYER::PLAYER_ID())
			{
				vVar28[iVar10 /*3*/] = { func_29() };
			}
			else
			{
				vVar28[iVar10 /*3*/] = { func_48(iVar27) };
			}
			iVar10++;
		}
		iVar8 = 0;
		while (iVar8 < iVar7)
		{
			Var0.f_1 = uVar15;
			bVar26 = false;
			Var0.f_2 = -2.174852E+12f;
			Var0.f_3 = iVar8;
			if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
			{
			}
			else if (!(iVar9 == iParam5 || iParam5 == 0))
			{
			}
			else
			{
				Var0.f_2 = 8.042115E-33f;
				DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar9, &Var0);
				Var0.f_2 = 2.693494E-20f;
				if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
				{
				}
				else
				{
					Var0.f_2 = -1.795177E+20f;
					DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&vVar16, &Var0);
					Var0.f_2 = -8.540753E-11f;
					DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(vVar16.f_1), &Var0);
					Var0.f_2 = 5.002347E-08f;
					DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(vVar16.f_2), &Var0);
					fVar24 = BUILTIN::VDIST2(vVar16, Global_34);
					if (fVar24 >= fVar25)
					{
					}
					else
					{
						iVar10 = 0;
						while (iVar10 < 32)
						{
							if (func_41(vVar28[iVar10 /*3*/]))
							{
							}
							else if ((func_45(vVar16, Global_1148170[iVar10 /*10*/]) || (!func_41(Global_1148170[iVar10 /*10*/]) && BUILTIN::VDIST2(vVar16, Global_1148170[iVar10 /*10*/]) < 1200862336)) || BUILTIN::VDIST2(vVar28[iVar10 /*3*/], vVar16) < 1120403456)
							{
								bVar26 = true;
							}
							else
							{
								iVar10++;
							}
						}
						if (((!bVar26 && !func_49(vVar16, 1, 0, 0)) && !func_50(vVar16, 1125515264 /* Float: 150f */)) && !VOLUME::_0xAA9EE2AAFC717623(vVar16, 0, 0, 0))
						{
							Var0.f_2 = -4.907848E-13f;
							DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&uVar22, &Var0);
							Var0.f_2 = 5.031197E+26f;
							DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar11, &Var0);
							Var0.f_2 = -3.472505f;
							DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar13, &Var0);
							vVar19 = { vVar16 };
							uVar23 = uVar22;
							fVar25 = fVar24;
							uVar12 = uVar11;
							uVar14 = uVar13;
							if (fVar24 > 1125515264)
							{
								*uParam2 = 1;
							}
							else
							{
								*uParam2 = 0;
							}
						}
					}
				}
			}
			iVar8++;
		}
	}
	if (func_41(*uParam0))
	{
		*uParam0 = { vVar19 };
		*uParam1 = uVar23;
		*uParam3 = uVar12;
		*uParam4 = uVar14;
	}
}

bool func_34(var uParam0)
{
	if (func_41(*uParam0) || BUILTIN::VDIST(*uParam0, func_48(PLAYER::PLAYER_ID())) > 1125515264)
	{
		func_31("NET_WCAMP_OWNER_NO_CLOSE_CAMP", 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

void func_35(var uParam0, vector3 vParam1, var uParam4)
{
	struct<8> Var0;

	Var0 = { vParam1 };
	Var0.f_4 = 7f;
	Var0.f_5 = 544;
	Var0.f_6 = -9.063817E-33f;
	Var0.f_7 = uParam4;
	uParam0->f_5 = VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&Var0);
}

bool func_36(var uParam0)
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(-1.73924E+12f))
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_39(), uParam0->f_7, false, 0))
	{
		return false;
	}
	if (SCRIPTS::DOES_THREAD_EXIST(uParam0->f_8) || SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_8, false))
	{
		return false;
	}
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(1024) < 1)
	{
		return false;
	}
	return true;
}

bool func_37()
{
	if (!SCRIPTS::HAS_SCRIPT_LOADED(func_39()))
	{
		SCRIPTS::REQUEST_SCRIPT(func_39());
		return false;
	}
	return true;
}

void func_38(var uParam0)
{
	func_51(uParam0, 0f);
}

char* func_39()
{
	return "player_camp";
}

bool func_40(var uParam0, var uParam1)
{
	int iVar0;

	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(uParam0->f_5))
	{
		func_31("NET_WCAMP_OWNER_NO_CLOSE_CAMP", 10000, 0, 0, 0, 1);
		func_32(uParam1);
		func_27(16, PLAYER::PLAYER_ID());
		return false;
	}
	iVar0 = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(uParam0->f_5);
	switch (iVar0)
	{
		case 4:
			func_31("NET_WCAMP_OWNER_NO_CLOSE_CAMP", 10000, 0, 0, 0, 1);
			func_32(uParam1);
			func_27(16, PLAYER::PLAYER_ID());
			return false;
		case 1:
		case 2:
			return false;
		case 3:
			uParam0->f_6 = VOLUME::_0x351D71B8B72B858B(uParam0->f_5);
			func_30(4, PLAYER::PLAYER_ID());
			func_27(16, PLAYER::PLAYER_ID());
			return true;
		default:
			break;
	}
	return false;
}

bool func_41(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_42(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_52(vVar0, vParam1);
}

var func_43(int iParam0)
{
	var uVar0;

	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iParam0);
	return uVar0;
}

var func_44(int iParam0, int iParam1)
{
	return func_53(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

bool func_45(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

var func_46()
{
	return Global_1896646.f_41;
}

float func_47(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.087393E-14f;
		case 1:
			return -1.259349E-30f;
		case 2:
			return 1.498807E-37f;
		case 3:
			return 1.264142E+30f;
		case 4:
			return 3.69772E-30f;
		case 5:
			return -1.30807E-28f;
		case 6:
			return -8.966356E-27f;
		case 7:
			return -2.697481E+12f;
		case 8:
			return -1663469f;
		case 9:
			return 4.089406E+30f;
		case 10:
			return 1.82543E-09f;
		case 11:
			return 7.133003E-32f;
		case 12:
			return 9.458759E+32f;
		case 15:
			return -1.888375E-23f;
		case 13:
			return 0.001473694f;
		case 16:
			return 1.008257E-07f;
		case 14:
			return -2.892827E+12f;
		default:
			break;
	}
	return 3.540176E+25f;
}

Vector3 func_48(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

bool func_49(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_41(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 8192;
	iVar5[1] = iParam5;
	if (VOLUME::_0x870E9981ED27C815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return true;
	}
	return false;
}

bool func_50(vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 26)
	{
		if (func_54(iVar0))
		{
			if (BUILTIN::VDIST(func_55(iVar0), vParam0) < fParam3)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_51(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_56() - fParam1);
	func_57(uParam0, 1);
	func_58(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_52(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

var func_53(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_59() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_60());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_60());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_60());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_61(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_62(iVar2))
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
				if (iVar9 & 8192 != 0 && func_63(iVar2) != 1)
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
					if (!func_64(iVar10))
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

bool func_54(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_65(Global_1835011[iParam0 /*72*/].f_1);
}

Vector3 func_55(int iParam0)
{
	return func_66(iParam0);
}

float func_56()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

void func_57(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_58(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_59()
{
	return Global_1051645.f_12;
}

char* func_60()
{
	return "unnamed";
}

int func_61(int iParam0)
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

bool func_62(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_67(36, iParam0);
}

int func_63(int iParam0)
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

bool func_64(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_68(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_69(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

bool func_65(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_70(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

Vector3 func_66(int iParam0)
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

bool func_67(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_71(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_72())
	{
		return func_71(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_71(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_68(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_69(int iParam0)
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
		func_73(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_74(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

int func_70(struct<2> Param0)
{
	int iVar0;

	if (!func_75(Param0))
	{
		return -1;
	}
	iVar0 = func_76(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1072759.f_19487.f_1[iVar0 /*3*/].f_2;
}

bool func_71(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_72()
{
	return Global_1102813.f_3672;
}

void func_73(int iParam0)
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
	func_74(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_74(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_75(struct<2> Param0)
{
	if (!func_77(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_78(Param0))
	{
		return false;
	}
	return true;
}

int func_76(struct<2> Param0)
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
	if (!func_79(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1072759.f_19487 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_79(Global_1072759.f_19487.f_1[iVar8 /*3*/], &vVar3);
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

bool func_77(int iParam0)
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

int func_78(int iParam0)
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

bool func_79(struct<2> Param0, bool bParam2)
{
	if (!func_75(Param0))
	{
		return false;
	}
	func_80(bParam2);
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

void func_80(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

