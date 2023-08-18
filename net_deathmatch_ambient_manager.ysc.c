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
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();
	while (!func_2())
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	func_4(&Global_1220301, 4);
	func_4(&Global_1220301, 8);
	func_4(&Global_1220301, 16);
	func_5(0);
	if (func_6() != 0)
	{
		func_7(0);
	}
	if (func_8() != 0)
	{
		func_9(0);
	}
}

void func_1()
{
	func_10(32, -1);
	func_11();
	if (func_12())
	{
		func_13();
	}
	func_14();
	func_15(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	func_16(&Global_1220301, 1);
}

bool func_2()
{
	if (func_17(0, 0))
	{
		return true;
	}
	if (Global_1048577)
	{
		return true;
	}
	return false;
}

void func_3()
{
	if (func_18() != 0)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(0.0001293149f))
	{
		return;
	}
	func_19();
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_8() != 0)
		{
			func_9(0);
		}
		return;
	}
	switch (func_20())
	{
		case -1:
		default:
			break;
			func_21();
			break;
		case 0:
			func_22();
			break;
		case 1:
			func_23();
			break;
		case 2:
			func_24();
			break;
		case 3:
			func_25();
			break;
	}
}

void func_4(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_5(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Global_1220514 = iParam0;
}

int func_6()
{
	return Global_1220301.f_211;
}

void func_7(int iParam0)
{
	Global_1220301.f_211 = iParam0;
}

int func_8()
{
	return Global_1220301.f_1;
}

void func_9(int iParam0)
{
	Global_1220301.f_1 = iParam0;
}

void func_10(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_13();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_11()
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
			func_13();
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
				case 1:
					func_13();
					break;
				case 2:
					func_13();
					break;
				case 4:
					func_13();
					break;
				case 3:
					func_13();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_13();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_13();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_13();
		}
		if (func_18() == 0)
		{
			if (func_26())
			{
				func_13();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_13();
	}
	return 1;
}

bool func_12()
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

void func_13()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_14()
{
	func_27(&Global_1220514);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1220514, 86, 39);
	func_28(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1220514), 86, "g_mpDMAmbientManagerHostData");
}

void func_15(bool bParam0)
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
					func_13();
					break;
				case 2:
					func_13();
					break;
				case 4:
					func_13();
					break;
				case 3:
					func_13();
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
			func_13();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_16(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_17(bool bParam0, bool bParam1)
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

int func_18()
{
	return Global_1572887.f_14;
}

void func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 != -4.311247E+20f)
		{
		}
		else
		{
			SCRIPTS::GET_EVENT_DATA(1, iVar0, &iVar2, 4);
			if (iVar2 != 187)
			{
			}
			else
			{
				func_29(iVar0);
			}
		}
		iVar0++;
	}
}

int func_20()
{
	return Global_1220514;
}

void func_21()
{
}

void func_22()
{
	if (func_30(Global_1220301, 1))
	{
		func_5(1);
	}
}

void func_23()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_1220514.f_5[iVar0 /*5*/].f_1 == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 != Global_1220514.f_3)
	{
		Global_1220514.f_3 = iVar1;
	}
	if (Global_1220301.f_1 == 5)
	{
		Global_1220514.f_1++;
		func_9(0);
	}
	if (Global_1220514.f_1 >= 3)
	{
		func_5(2);
		return;
	}
	if (iVar1 >= 3)
	{
		func_5(2);
		return;
	}
	func_31(Global_1220514.f_1);
}

void func_24()
{
	int iVar0;
	int iVar1;

	if (func_30(Global_1220301, 2))
	{
		func_5(3);
		return;
	}
	if (Global_1220514.f_2 < 0)
	{
		Global_1220514.f_2 = 0;
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_1220514.f_5[iVar0 /*5*/].f_1 == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 != Global_1220514.f_3)
	{
		Global_1220514.f_3 = iVar1;
	}
	func_32();
	if (Global_1220514.f_1 == -1)
	{
		if (!func_33())
		{
			return;
		}
	}
	if (Global_1220514.f_2 > 0)
	{
		if (func_31(Global_1220514.f_1))
		{
			func_9(0);
			Global_1220514.f_1++;
			Global_1220514.f_2 = (Global_1220514.f_2 - 1);
			if (Global_1220514.f_1 >= 16)
			{
				Global_1220514.f_1 = -1;
			}
		}
	}
	else if (iVar1 < 3)
	{
		Global_1220514.f_2++;
	}
}

void func_25()
{
	Global_1220301 = 0;
	func_34();
	func_27(&Global_1220514);
	func_5(0);
}

bool func_26()
{
	return Global_1051645.f_8;
}

void func_27(var uParam0)
{
	struct<5> Var0;
	int iVar5;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Var0 = -1;
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 < 16)
	{
		uParam0->f_5[iVar5 /*5*/] = { Var0 };
		iVar5++;
	}
	uParam0->f_2 = 0;
	uParam0->f_1 = 0;
	uParam0->f_4 = 0;
}

int func_28(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_29(int iParam0)
{
	struct<12> Var0;
	int iVar12;
	int iVar13;
	struct<6> Var14;
	struct<6> Var26;
	struct<5> Var38;

	Var0.f_5 = -1;
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 12))
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 5:
			if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1219580, false))
			{
			}
			else
			{
				iVar12 = NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1219580);
				if (PLAYER::PLAYER_ID() != iVar12)
				{
				}
				else
				{
					if (GANG::NETWORK_IS_GANG_ID_VALID(Var0.f_10))
					{
						if (Var0.f_5 != -1)
						{
							func_35(Var0.f_5, Var0.f_10);
						}
					}
					Jump @886; //curOff = 185
					if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1219580, false))
					{
					}
					else
					{
						iVar12 = NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1219580);
						if (PLAYER::PLAYER_ID() != iVar12)
						{
						}
						else
						{
							if (Var0.f_5 != -1)
							{
								if (func_36(Var0.f_5))
								{
									Var14.f_5 = -1;
									Var14.f_4 = 4;
									Var14.f_5 = { Var0.f_5 };
									func_38(&Var14, func_37(0, 8));
								}
							}
							Jump @886; //curOff = 286
							if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								return;
							}
							func_39(Var0);
							Jump @886; //curOff = 309
							switch (Global_1220301.f_211)
							{
								case 0:
									return;
								case 2:
									return;
								case 3:
									return;
								case 1:
									Global_1220301.f_206 = { Var0.f_5 };
									func_7(2);
									return;
								default:
									break;
							}
							Jump @886; //curOff = 379
							switch (Global_1220301.f_211)
							{
								case 0:
									return;
								case 2:
									return;
								case 3:
									return;
								case 1:
									func_7(3);
									return;
								default:
									break;
							}
							Jump @886; //curOff = 435
							if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								return;
							}
							if (Var0.f_5 == -1)
							{
								return;
							}
							iVar13 = 0;
							while (iVar13 < 16)
							{
								if (Global_1220514.f_5[iVar13 /*5*/] != Var0.f_5)
								{
								}
								else
								{
									func_40(iVar13);
								}
								else
								{
									iVar13++;
								}
							}
							Jump @886; //curOff = 508
							if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								return;
							}
							if (Var0.f_5 == -1)
							{
								return;
							}
							Var26.f_5 = -1;
							iVar13 = 0;
							while (iVar13 < 16)
							{
								if (Global_1220514.f_5[iVar13 /*5*/] != Var0.f_5)
								{
								}
								else
								{
									Var26.f_4 = 8;
									Var26.f_5 = { Global_1220514.f_5[iVar13 /*5*/] };
									func_38(&Var26, func_37(0, 8));
									func_41(iVar13);
								}
								else
								{
									iVar13++;
								}
							}
							Jump @886; //curOff = 629
							if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								return;
							}
							if (Var0.f_5 == -1)
							{
								return;
							}
							iVar13 = 0;
							while (iVar13 < 16)
							{
								if (Global_1220514.f_5[iVar13 /*5*/] != Var0.f_5)
								{
								}
								else
								{
									func_42(iVar13, Var0.f_11);
								}
								else
								{
									iVar13++;
								}
							}
							Jump @886; //curOff = 706
							if (Var0.f_5 == Global_1220301.f_206)
							{
								Var38 = -1;
								Global_1220301.f_206 = { Var38 };
								func_7(0);
							}
							Jump @886; //curOff = 746
							if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								return;
							}
							if (Var0.f_5 == -1)
							{
								return;
							}
							iVar13 = 0;
							while (iVar13 < 16)
							{
								if (Global_1220514.f_5[iVar13 /*5*/] != Var0.f_5)
								{
								}
								else
								{
									func_43(iVar13);
								}
								else
								{
									iVar13++;
								}
							}
							Jump @886; //curOff = 819
							if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								return;
							}
							if (func_30(Global_1220301, 1))
							{
								return;
							}
							else
							{
								func_16(&Global_1220301, 1);
							}
							Jump @886; //curOff = 860
							if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								return;
							}
							func_16(&Global_1220301, 2);
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_30(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_31(int iParam0)
{
	struct<24> Var0;
	int iVar40;
	struct<5> Var41;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return false;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_23.f_13 = -1;
	switch (func_8())
	{
		case 0:
			func_9(1);
			break;
		case 1:
			func_9(2);
			break;
		case 2:
			func_44(&Var0, iParam0);
			func_45(&Var0);
			if (func_46(&(Global_1210470[Global_1295619 /*204*/]), &Var0, 0, 0, 0, 0, 0))
			{
				func_9(3);
			}
			else
			{
				iVar40 = func_47(&(Global_1210470[Global_1295619 /*204*/]), &Var0);
				if (iVar40 >= 0)
				{
					func_48(&(Global_1210470[Global_1295619 /*204*/]), iVar40);
				}
				func_9(4);
			}
			break;
		case 3:
			func_44(&Var0, iParam0);
			if (func_47(&(Global_1210470[Global_1295619 /*204*/]), &Var0) != -1)
			{
			}
			else
			{
				Var41 = -1;
				Var41 = func_49(&(Var0.f_8.f_5));
				if (Var41 == -1)
				{
					func_9(4);
				}
				else
				{
					Var41.f_1 = 1;
					Global_1220514.f_5[iParam0 /*5*/] = { Var41 };
					func_9(5);
					Jump @647; //curOff = 553
					if (Global_1220514.f_4 <= 0)
					{
						Global_1220514.f_4 = MISC::ABSI(NETWORK::GET_CLOUD_TIME_AS_INT());
					}
					else if (MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1220514.f_4)) < 30)
					{
					}
					else
					{
						Global_1220514.f_4 = 0;
						func_9(1);
						Jump @647; //curOff = 618
						if (Global_1220514.f_5[iParam0 /*5*/] == -1)
						{
							func_9(0);
						}
						else
						{
							return true;
						}
					}
				}
			}
			return false;
			default:
				break;
	}
}

void func_32()
{
	int iVar0;
	bool bVar1;
	struct<15> Var2;
	struct<11> Var17;
	var uVar29;
	int iVar30;

	iVar0 = 0;
	bVar1 = false;
	Var2 = 2;
	Var2.f_1 = -1;
	Var2.f_5 = -1;
	Var2.f_5.f_1 = -1;
	Var2.f_5.f_3 = -1;
	Var2.f_5.f_4 = -1;
	Var2.f_5.f_5 = -1;
	Var2.f_5.f_6 = -1;
	Var2.f_5.f_6.f_1 = -1;
	Var2.f_5.f_9 = 2;
	Var17.f_5 = -1;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_1220514.f_5[iVar0 /*5*/].f_1 != 2)
		{
		}
		else
		{
			if (!func_50(Global_1220514.f_5[iVar0 /*5*/]))
			{
				func_41(iVar0);
				return;
			}
			Var2 = { func_51(Global_1220514.f_5[iVar0 /*5*/]) };
			if (Var2.f_5.f_2 == Global_1295619.f_10)
			{
			}
			else
			{
				if (!GANG::NETWORK_IS_GANG_ID_VALID(Var2.f_5.f_2))
				{
					bVar1 = true;
				}
				if (!GANG::NETWORK_IS_GANG_IN_SESSION(Var2.f_5.f_2))
				{
					bVar1 = true;
				}
				if (!GANG::NETWORK_IS_GANG_ACTIVE(Var2.f_5.f_2))
				{
					bVar1 = true;
				}
				if ((GANG::NETWORK_GET_GANG_LEADER(Var2.f_5.f_2) <= -1 || GANG::NETWORK_GET_GANG_LEADER(Var2.f_5.f_2) == 255) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(GANG::NETWORK_GET_GANG_LEADER(Var2.f_5.f_2)))
				{
					bVar1 = true;
				}
				if (bVar1)
				{
					SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&uVar29);
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1219580, false))
					{
						iVar30 = NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1219580);
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar30))
						{
							SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar29, iVar30);
						}
					}
					if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uVar29))
					{
					}
					else if (MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1220600.f_8[iVar0])) < 2)
					{
					}
					else
					{
						Global_1220600.f_8[iVar0] = NETWORK::GET_CLOUD_TIME_AS_INT();
						Var17.f_4 = 5;
						Var17.f_5 = { Global_1220514.f_5[iVar0 /*5*/] };
						Var17.f_10 = Global_1295619.f_10;
						func_38(&Var17, uVar29);
						return;
					}
				}
			}
		}
		iVar0++;
	}
	func_52();
}

bool func_33()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_1220514.f_5[iVar0 /*5*/].f_1 != 1)
		{
		}
		else
		{
			Global_1220514.f_1 = iVar0;
			return true;
		}
		iVar0++;
	}
	Global_1220514.f_1 = -1;
	return false;
}

void func_34()
{
	struct<213> Var0;

	Var0.f_2.f_2 = 5;
	Var0.f_2.f_3 = 5;
	Var0.f_2.f_3.f_1 = -1;
	Var0.f_2.f_3.f_1.f_1 = -1;
	Var0.f_2.f_3.f_1.f_2 = -1;
	Var0.f_2.f_3.f_1.f_3 = 255;
	Var0.f_2.f_3.f_1.f_4 = -1;
	Var0.f_2.f_3.f_1.f_5 = -1;
	Var0.f_2.f_3.f_1.f_6 = -1;
	Var0.f_2.f_3.f_1.f_8 = 2;
	Var0.f_2.f_3.f_1.f_8.f_1 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5.f_1 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5.f_3 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5.f_4 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5.f_5 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5.f_6 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5.f_6.f_1 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5.f_9 = 2;
	Var0.f_2.f_3.f_1.f_23.f_1 = 1024;
	Var0.f_2.f_3.f_1.f_23.f_4 = -15;
	Var0.f_2.f_3.f_1.f_23.f_5 = 255;
	Var0.f_2.f_3.f_1.f_23.f_8 = 1;
	Var0.f_2.f_3.f_1.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_2.f_3.f_1.f_23.f_13 = -1;
	Var0.f_2.f_3.f_1.f_40 = -1;
	Var0.f_2.f_3.f_1.f_40.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_2 = -1;
	Var0.f_2.f_3.f_1.f_40.f_3 = 255;
	Var0.f_2.f_3.f_1.f_40.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8 = 2;
	Var0.f_2.f_3.f_1.f_40.f_8.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5.f_3 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5.f_9 = 2;
	Var0.f_2.f_3.f_1.f_40.f_23.f_1 = 1024;
	Var0.f_2.f_3.f_1.f_40.f_23.f_4 = -15;
	Var0.f_2.f_3.f_1.f_40.f_23.f_5 = 255;
	Var0.f_2.f_3.f_1.f_40.f_23.f_8 = 1;
	Var0.f_2.f_3.f_1.f_40.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_2.f_3.f_1.f_40.f_23.f_13 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_2 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_3 = 255;
	Var0.f_2.f_3.f_1.f_40.f_40.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8 = 2;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_2.f_3.f_1.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_2.f_3.f_1.f_40.f_40.f_23.f_4 = -15;
	Var0.f_2.f_3.f_1.f_40.f_40.f_23.f_5 = 255;
	Var0.f_2.f_3.f_1.f_40.f_40.f_23.f_8 = 1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_2.f_3.f_1.f_40.f_40.f_23.f_13 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_2 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_3 = 255;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8 = 2;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_4 = -15;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_5 = 255;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_8 = 1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_13 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_2 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_3 = 255;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8 = 2;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_4 = -15;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_5 = 255;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8 = 1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_13 = -1;
	Var0.f_206 = -1;
	Global_1220301 = { Var0 };
}

void func_35(int iParam0, var uParam1)
{
	Global_1207465.f_231[iParam0 /*15*/].f_5.f_2 = uParam1;
}

bool func_36(int iParam0)
{
	struct<15> Var0;
	struct<15> Var15;
	int iVar30;
	int iVar31;

	if (!func_50(iParam0))
	{
		return false;
	}
	Var0 = 2;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	Var15 = { Global_1207465.f_231[iParam0 /*15*/] };
	Var0.f_1 = 0;
	Global_1207465.f_231[iParam0 /*15*/] = { Var0 };
	iVar30 = Var15;
	iVar31 = Var15.f_5.f_9;
	Global_1207465.f_13[iVar31] = (Global_1207465.f_13[iVar31] - 1);
	Global_1207465.f_8[iVar30] = (Global_1207465.f_8[iVar30] - 1);
	if (iVar30 != iVar31)
	{
		Global_1207465.f_18[iVar30] = (Global_1207465.f_18[iVar30] - 1);
	}
	if (func_53(iParam0))
	{
		Global_1207465.f_23[iVar30] = (Global_1207465.f_23[iVar30] - 1);
	}
	return true;
}

var func_37(int iParam0, int iParam1)
{
	return func_54(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

void func_38(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 187;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 12, 25, &uParam1);
}

void func_39(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	struct<11> Var0;
	int iVar12;
	bool bVar13;
	var uVar14;
	int iVar15;
	int iVar16;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Var0.f_5 = -1;
	if (Global_1220514.f_3 <= 0)
	{
		Var0.f_4 = 2;
		func_38(&Var0, func_55(Param0.f_1));
		return;
	}
	iVar12 = 0;
	bVar13 = false;
	iVar12 = 0;
	while (iVar12 < 16)
	{
		if (Global_1220514.f_5[iVar12 /*5*/].f_1 != 1)
		{
		}
		else
		{
			Var0.f_5 = { Global_1220514.f_5[iVar12 /*5*/] };
			bVar13 = true;
		}
		else
		{
			iVar12++;
		}
	}
	if (!bVar13)
	{
		Var0.f_4 = 2;
		func_38(&Var0, func_55(Param0.f_1));
		return;
	}
	Global_1220514.f_5[iVar12 /*5*/].f_1 = 2;
	Global_1220514.f_5[iVar12 /*5*/].f_4 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Var0.f_4 = 1;
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar14, Param0.f_1);
	func_38(&Var0, uVar14);
	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&uVar14);
	iVar15 = GANG::NETWORK_GET_GANG_ID(Param0.f_1);
	if (GANG::NETWORK_IS_GANG_ID_VALID(iVar15) && GANG::NETWORK_IS_GANG_ACTIVE(iVar15))
	{
		Var0.f_10 = iVar15;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1219580, false))
	{
		iVar16 = NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1219580);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar16))
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar14, iVar16);
		}
	}
	Var0.f_4 = 5;
	func_38(&Var0, uVar14);
}

void func_40(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (iParam0 <= -1 || iParam0 >= 16)
	{
		return;
	}
	Global_1220514.f_5[iParam0 /*5*/].f_2 = 0;
	Global_1220514.f_5[iParam0 /*5*/].f_1 = 1;
}

void func_41(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (iParam0 <= -1 || iParam0 >= 16)
	{
		return;
	}
	Global_1220514.f_5[iParam0 /*5*/].f_2 = 0;
	Global_1220514.f_5[iParam0 /*5*/].f_1 = 0;
	Global_1220514.f_5[iParam0 /*5*/] = -1;
}

void func_42(int iParam0, bool bParam1)
{
	if (iParam0 <= -1 || iParam0 >= 16)
	{
		return;
	}
	Global_1220514.f_5[iParam0 /*5*/].f_2 = bParam1;
	if (!bParam1)
	{
		Global_1220514.f_5[iParam0 /*5*/].f_4 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
}

void func_43(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 16)
	{
		return;
	}
	if (Global_1220514.f_5[iParam0 /*5*/].f_2)
	{
		return;
	}
	Global_1220514.f_5[iParam0 /*5*/].f_4 = NETWORK::GET_CLOUD_TIME_AS_INT();
}

struct<40> func_44(var uParam0, var uParam1)
{
	struct<40> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_23.f_13 = -1;
	*uParam0 = { Var0 };
	*uParam0 = 1;
	uParam0->f_2 = 6;
	uParam0->f_5 = 0;
	uParam0->f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	uParam0->f_8 = 3;
	uParam0->f_8.f_1 = 2;
	uParam0->f_8.f_5.f_2 = Global_1295619.f_10;
	uParam0->f_8.f_5.f_5 = uParam1;
	uParam0->f_8.f_5.f_9 = 3;
	return *uParam0;
}

void func_45(var uParam0)
{
	struct<6> Var0;

	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_2 = -1;
	Var0.f_5.f_3 = 255;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_8 = 2;
	Var0.f_5.f_8.f_1 = -1;
	Var0.f_5.f_8.f_5 = -1;
	Var0.f_5.f_8.f_5.f_1 = -1;
	Var0.f_5.f_8.f_5.f_3 = -1;
	Var0.f_5.f_8.f_5.f_4 = -1;
	Var0.f_5.f_8.f_5.f_5 = -1;
	Var0.f_5.f_8.f_5.f_6 = -1;
	Var0.f_5.f_8.f_5.f_6.f_1 = -1;
	Var0.f_5.f_8.f_5.f_9 = 2;
	Var0.f_5.f_23.f_1 = 1024;
	Var0.f_5.f_23.f_4 = -15;
	Var0.f_5.f_23.f_5 = 255;
	Var0.f_5.f_23.f_8 = 1;
	Var0.f_5.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_5.f_23.f_13 = -1;
	Var0.f_5 = { *uParam0 };
	Var0.f_4 = 0;
	func_56(&Var0, func_37(0, 8));
}

bool func_46(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	if (func_57(uParam0))
	{
		return false;
	}
	if (!func_58(&(uParam1->f_8)))
	{
		return false;
	}
	if (uParam1->f_2 == -1)
	{
		return false;
	}
	if (uParam1->f_2 == 5)
	{
		uParam1->f_3 = PLAYER::PLAYER_ID();
	}
	if (uParam1->f_5 == -1)
	{
		return false;
	}
	if (uParam1->f_8 != uParam1->f_8.f_5.f_9)
	{
		return false;
	}
	iVar0 = func_47(uParam0, uParam1);
	if (iVar0 >= 0)
	{
		return false;
	}
	switch (uParam1->f_5)
	{
		case 0:
		case 1:
		case 3:
		default:
			break;
			if (!func_59(uParam1, bParam2, iParam3, iParam4, iParam5, iParam6))
			{
				return false;
			}
			break;
	}
	uParam1->f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	iVar1 = ((uParam0->f_1 + *uParam0) % uParam0->f_2);
	uParam1->f_4 = iVar1;
	uParam0->f_3[iVar1 /*40*/] = { *uParam1 };
	func_60(&(uParam0->f_3[iVar1 /*40*/]), 0);
	*uParam0++;
	return true;
}

int func_47(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = ((uParam0->f_1 + iVar0) % uParam0->f_2);
		if (func_61(uParam1, &(uParam0->f_3[iVar1 /*40*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<40> func_48(var uParam0, int iParam1)
{
	struct<40> Var0;

	Var0 = { func_62(uParam0, iParam1) };
	func_63(uParam0, iParam1);
	return Var0;
}

int func_49(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_64(uParam0))
	{
		return -1;
	}
	iVar0 = func_65(uParam0, uParam0->f_9);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar1 == uParam0->f_9)
		{
		}
		else
		{
			iVar0 = func_65(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_50(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

struct<15> func_51(int iParam0)
{
	struct<15> Var0;

	Var0 = 2;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	if (!func_50(iParam0))
	{
		return Var0;
	}
	return Global_1207465.f_231[iParam0 /*15*/];
}

void func_52()
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	struct<6> Var7;

	Var0 = -1;
	iVar5 = 0;
	Var7.f_5 = -1;
	iVar5 = 0;
	while (iVar5 < 16)
	{
		Var0 = { Global_1220514.f_5[iVar5 /*5*/] };
		if (Var0 == -1)
		{
		}
		else if (Var0.f_1 != 2)
		{
		}
		else if (func_66(iVar5))
		{
		}
		else
		{
			iVar6 = MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - Var0.f_4));
			if (iVar6 >= 60)
			{
				func_67(&Var0, 0);
				Var7.f_4 = 6;
				Var7.f_5 = { Var0 };
				func_38(&Var7, func_37(0, 8));
			}
			Global_1220514.f_5[iVar5 /*5*/] = { Var0 };
		}
		iVar5++;
	}
}

bool func_53(int iParam0)
{
	if (iParam0 < 3)
	{
		return false;
	}
	if (iParam0 < (3 + Global_1207465.f_3[1]))
	{
		return false;
	}
	if (iParam0 < 35)
	{
		return true;
	}
	if (iParam0 < (35 + Global_1207465.f_3[2]))
	{
		return false;
	}
	if (iParam0 < (35 + Global_1207465.f_3[2]) + 16)
	{
		return false;
	}
	return true;
}

var func_54(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_68() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_69());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_69());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_69());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_70(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_71(iVar2))
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
				if (iVar9 & 8192 != 0 && func_72(iVar2) != 1)
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
					if (!func_73(iVar10))
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

var func_55(int iParam0)
{
	var uVar0;

	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iParam0);
	return uVar0;
}

void func_56(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 4;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 45, 37, &uParam1);
}

bool func_57(var uParam0)
{
	return *uParam0 == uParam0->f_2;
}

bool func_58(var uParam0)
{
	if (uParam0->f_1 == -1)
	{
		return false;
	}
	if (!func_64(&(uParam0->f_5)))
	{
		return false;
	}
	return true;
}

bool func_59(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<29> Var0;
	struct<2> Var33;
	bool bVar35;
	int iVar36[4];
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;

	Var33 = -1;
	Var33.f_1 = -1;
	if (func_74(uParam0->f_8.f_5))
	{
		Var33 = { uParam0->f_8.f_5 };
	}
	else if (func_74(uParam0->f_8.f_5.f_6))
	{
		Var33 = { uParam0->f_8.f_5.f_6 };
	}
	else
	{
		return true;
	}
	bVar35 = false;
	if (func_75(uParam0->f_8.f_2))
	{
		bVar35 = true;
	}
	else
	{
		bVar35 = false;
	}
	if (bParam1)
	{
		Var0.f_25 = iParam2;
		Var0.f_26 = iParam3;
		Var0.f_27 = iParam4;
		Var0.f_28 = iParam5;
	}
	else if (!func_77(func_76(Var33), &Var0))
	{
		return false;
	}
	if (Var0.f_25 <= 0 || Var0.f_25 > 50)
	{
		if (Var0.f_25 != 0)
		{
		}
		iVar36[0] = 0;
	}
	else
	{
		iVar36[0] = 1;
	}
	if (Var0.f_26 <= 0 || Var0.f_26 > 10)
	{
		if (Var0.f_26 != 0)
		{
		}
		iVar36[1] = 0;
	}
	else
	{
		iVar36[1] = 1;
	}
	if (Var0.f_27 <= 0 || Var0.f_27 > 25)
	{
		if (Var0.f_27 != 0)
		{
		}
		iVar36[2] = 0;
	}
	else
	{
		iVar36[2] = 1;
	}
	if (Var0.f_28 <= 0 || Var0.f_28 > 10)
	{
		if (Var0.f_28 != 0)
		{
		}
		iVar36[3] = 0;
	}
	else
	{
		iVar36[3] = 1;
	}
	if (bVar35)
	{
		iVar43 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(true);
		iVar44 = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(true);
		iVar45 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(true);
		iVar46 = NETWORK::_GET_NUM_RESERVED_MISSION_PICKUPS(true);
	}
	else
	{
		NETWORK::GET_RESERVED_MISSION_ENTITIES_IN_AREA(uParam0->f_8.f_2, false, &iVar43, &iVar44, &iVar45, &iVar46);
	}
	iVar41 = 0;
	while (iVar41 < 4)
	{
		iVar47 = iVar41;
		if (iVar47 == -1)
		{
		}
		else if (!iVar36[iVar41])
		{
		}
		else
		{
			switch (iVar47)
			{
				case 0:
					iVar42 = (NETWORK::GET_MAX_NUM_NETWORK_PEDS() - iVar43);
					if (iVar42 < Var0.f_25)
					{
						return false;
					}
					break;
					break;
				case 1:
					iVar42 = (NETWORK::GET_MAX_NUM_NETWORK_VEHICLES() - iVar44);
					if (iVar42 < Var0.f_26)
					{
						return false;
					}
					break;
					break;
				case 2:
					iVar42 = (NETWORK::GET_MAX_NUM_NETWORK_OBJECTS() - iVar45);
					if (iVar42 < Var0.f_27)
					{
						return false;
					}
					break;
					break;
				case 3:
					iVar42 = (NETWORK::GET_MAX_NUM_NETWORK_PICKUPS() - iVar46);
					if (iVar42 < Var0.f_28)
					{
						return false;
					}
					break;
					break;
			}
		}
		iVar41++;
	}
	return true;
}

void func_60(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_61(var uParam0, var uParam1)
{
	if (uParam1->f_2 == -1)
	{
		return false;
	}
	if (uParam0->f_2 == -1)
	{
		return false;
	}
	if (uParam1->f_2 != uParam0->f_2)
	{
		return false;
	}
	if (uParam1->f_5 == -1)
	{
		return false;
	}
	if (uParam0->f_5 == -1)
	{
		return false;
	}
	if (uParam1->f_5 != uParam0->f_5)
	{
		return false;
	}
	if (uParam1->f_8 != uParam0->f_8)
	{
		return false;
	}
	if (uParam1->f_8.f_1 != uParam0->f_8.f_1)
	{
		return false;
	}
	if (!func_78(uParam1->f_8.f_5, uParam0->f_8.f_5))
	{
		return false;
	}
	if (uParam1->f_8.f_5.f_4 != uParam0->f_8.f_5.f_4)
	{
		return false;
	}
	if (uParam1->f_8.f_5.f_2 != uParam0->f_8.f_5.f_2)
	{
		return false;
	}
	return true;
}

struct<40> func_62(var uParam0, int iParam1)
{
	struct<40> Var0;
	struct<40> Var40;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_23.f_13 = -1;
	if (!func_79(uParam0, iParam1))
	{
		return Var0;
	}
	Var40 = { uParam0->f_3[iParam1 /*40*/] };
	uParam0->f_3[iParam1 /*40*/] = { Var0 };
	return Var40;
}

void func_63(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = (((uParam0->f_1 + *uParam0) - 1) % uParam0->f_2);
	if (uParam0->f_1 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar3 = ((uParam0->f_1 + iVar1) % uParam0->f_2);
			if (uParam0->f_3[iVar3 /*40*/] != -1)
			{
			}
			else
			{
				if (uParam0->f_3[iVar3 /*40*/].f_4 != -1)
				{
					func_62(uParam0, iVar3);
				}
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		uParam0->f_1 = iVar3;
		*uParam0 = iVar2;
	}
	else if (iVar0 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar4 = ((iVar0 - iVar1) + 5 % uParam0->f_2);
			if (uParam0->f_3[iVar4 /*40*/] != -1)
			{
			}
			else
			{
				func_62(uParam0, iVar4);
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		*uParam0 = iVar2;
	}
}

bool func_64(var uParam0)
{
	if (func_74(*uParam0))
	{
		return true;
	}
	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
		{
			return true;
		}
		if (uParam0->f_4 != -1)
		{
			return true;
		}
		if (uParam0->f_5 != -1)
		{
			return true;
		}
	}
	return false;
}

int func_65(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_80(iParam1);
	iVar1 = ((iVar0 + Global_1207465.f_3[iParam1]) - 1);
	if (Global_1207465.f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_81(iParam1)) - 1);
	}
	bVar2 = func_74(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_78(Global_1207465.f_231[iVar6 /*15*/].f_5, *uParam0))
			{
				return iVar6;
			}
		}
		if (bVar3)
		{
			if (Global_1207465.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1207465.f_231[iVar6 /*15*/].f_5.f_3 == uParam0->f_3)
			{
				return iVar6;
			}
		}
		if (bVar4)
		{
			if (Global_1207465.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1207465.f_231[iVar6 /*15*/].f_5.f_4 == uParam0->f_4)
			{
				return iVar6;
			}
		}
		if (bVar5)
		{
			if (Global_1207465.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1207465.f_231[iVar6 /*15*/].f_5.f_5 == uParam0->f_5)
			{
				return iVar6;
			}
		}
		iVar6++;
	}
	return -1;
}

bool func_66(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 16)
	{
		return false;
	}
	return Global_1220514.f_5[iParam0 /*5*/].f_2;
}

void func_67(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_68()
{
	return Global_1051645.f_12;
}

char* func_69()
{
	return "unnamed";
}

int func_70(int iParam0)
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

bool func_71(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_82(36, iParam0);
}

int func_72(int iParam0)
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

bool func_73(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_83(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_84(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

bool func_74(struct<2> Param0)
{
	if (!func_85(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_86(Param0))
	{
		return false;
	}
	return true;
}

bool func_75(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_76(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_87(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_77(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = { func_88(iParam0) };
	if (!func_74(Var0))
	{
		return false;
	}
	func_89(Var0, iParam0, uParam1);
	return true;
}

bool func_78(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_79(var uParam0, int iParam1)
{
	return (iParam1 >= 0 && iParam1 < uParam0->f_2);
}

int func_80(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 3;
		case 2:
			return 35;
		case 3:
			return 55;
		default:
			break;
	}
	return 0;
}

int func_81(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			if (Global_1207465.f_3[iParam0] * 2 <= 32)
			{
				return Global_1207465.f_3[iParam0] * 2;
			}
			return 32;
		case 2:
			if (Global_1207465.f_3[iParam0] * 2 <= 20)
			{
				return Global_1207465.f_3[iParam0] * 2;
			}
			return 20;
		case 3:
			if (Global_1207465.f_3[iParam0] * 2 <= 16)
			{
				return Global_1207465.f_3[iParam0] * 2;
			}
			return 16;
		default:
			break;
	}
	return 0;
}

bool func_82(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_90(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_91())
	{
		return func_90(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_90(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_83(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_84(int iParam0)
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
		func_92(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_93(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

bool func_85(int iParam0)
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

int func_86(int iParam0)
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

bool func_87(struct<2> Param0, bool bParam2)
{
	if (!func_74(Param0))
	{
		return false;
	}
	func_94(bParam2);
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

struct<2> func_88(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_95(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_95(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_95(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_95(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_95(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_95(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_95(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_96();
}

int func_89(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (!func_97(iParam0))
	{
		return 0;
	}
	if (func_98(iParam0, iParam1, &uVar0))
	{
		func_99(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_90(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_91()
{
	return Global_1102813.f_3672;
}

void func_92(int iParam0)
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
	func_93(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_93(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

void func_94(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

struct<2> func_95(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_100(iParam0, &(Global_1072759.f_573), func_86(iParam1));
			break;
		case 3:
			Var0.f_1 = func_100(iParam0, &(Global_1072759.f_573.f_602), func_86(iParam1));
			break;
		case 4:
			Var0.f_1 = func_100(iParam0, &(Global_1072759.f_573.f_2104), func_86(iParam1));
			break;
		case 5:
			Var0.f_1 = func_100(iParam0, &(Global_1072759.f_573.f_12606), func_86(iParam1));
			break;
		case 6:
			Var0.f_1 = func_100(iParam0, &(Global_1072759.f_573.f_12908), func_86(iParam1));
			break;
		case 7:
			Var0.f_1 = func_100(iParam0, &(Global_1072759.f_573.f_15910), func_86(iParam1));
			break;
		case 8:
			Var0.f_1 = func_100(iParam0, &(Global_1072759.f_573.f_16512), func_86(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_96();
	}
	return Var0;
}

struct<2> func_96()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_97(int iParam0)
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

bool func_98(int iParam0, int iParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = 1.841357E+10f;
	bParam2->f_3 = func_101(iParam0);
	bParam2->f_4 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_99(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	bParam1->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam1);
	uParam2->f_3 = func_102(iParam0, uParam2->f_1);
	bParam1->f_2 = -9.223824E-39f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_2 = iVar0;
	bParam1->f_2 = -9.223824E-39f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_9), bParam1);
	bParam1->f_2 = 1.375422E+08f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_17), bParam1);
	if (*uParam2 == 3)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_103(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_104(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_105(iVar0);
		}
		bParam1->f_2 = 4.168656E-33f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	}
	else if (*uParam2 == 7)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_106(iVar0);
		}
	}
	else
	{
		bParam1->f_2 = 3.190274E+20f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), bParam1);
	}
	bParam1->f_2 = 1.006963E+34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_7 = func_107(iVar0);
	bParam1->f_2 = 0.7275926f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_8), bParam1);
	bParam1->f_2 = 4.168656E-33f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	bParam1->f_2 = -3.435564E+12f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_25), bParam1);
	bParam1->f_2 = 2.963616E-21f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_26), bParam1);
	bParam1->f_2 = -5.234699E+08f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_27), bParam1);
	bParam1->f_2 = -7.178136E+15f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_28), bParam1);
	iVar0 = 0;
	bParam1->f_2 = -1.430733E-34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	bParam1->f_2 = -1.513029E-27f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	bParam1->f_2 = -1.293884E-33f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_31 = iVar0;
	iVar0 = 0;
	bParam1->f_2 = -1.998338E+12f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_32 = iVar0;
}

int func_100(int iParam0, var uParam1, int iParam2)
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

int func_101(int iParam0)
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

int func_102(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_108(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case joaat("ROBBERY_TRAIN"):
			return 2;
		case 1443764480:
			return 3;
		case -668110249:
			return 4;
		case -1381389849:
			return 5;
		case 536699577:
			return 6;
		case 541147288:
			return 7;
		case 377122918:
			return 8;
		case 1158195437:
			return 9;
		case joaat("AMBUSH"):
			return 10;
		case -621956193:
			return 11;
		case joaat("GANG_EVENT_SHOWDOWN"):
			return 12;
		case joaat("GANG_EVENT_IMPROMPTU_RACE"):
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case joaat("TRAIN_ESCORT"):
			return 16;
		case joaat("IWD_1V1"):
			return 17;
		case joaat("IWD_PVP"):
			return 18;
		case joaat("IWD_PF"):
			return 20;
		case joaat("IWD_PLF"):
			return 21;
		case joaat("IWD_F"):
			return 28;
		case joaat("IWD_INF"):
			return 19;
		case joaat("ASSASSINATION"):
			return 22;
		case joaat("ASSASSINATION_TRACKING"):
			return 23;
		case joaat("ASSASSINATION_PVP_PLAYER"):
			return 24;
		case joaat("ASSASSINATION_PVP_POSSE"):
			return 25;
		case joaat("COACH_HOLDUP_ROBBERY"):
			return 26;
		case joaat("COACH_HOLDUP_KIDNAPPING"):
			return 27;
		case 1518877519:
			return 30;
		default:
			break;
	}
	return -1;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BLACKJACK"):
			return 0;
		case joaat("DOMINOES"):
			return 1;
		case joaat("POKER"):
			return 2;
		case joaat("FILLET"):
			return 3;
		case joaat("MILKING_COW"):
			return 4;
		case joaat("CLEAN_STALLS"):
			return 5;
		case joaat("FENCE_BUILDING"):
			return 6;
		default:
			break;
	}
	return -1;
}

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ARCHERY"):
			return 0;
		case joaat("CHALLENGES"):
			return 1;
		case joaat("DEAD_DROP"):
			return 2;
		case joaat("GOLDEN_HAT"):
			return 3;
		case joaat("HOT_PROPERTY"):
			return 4;
		case joaat("KING_OF_THE_CASTLE"):
			return 5;
		case joaat("KING_OF_THE_RAILS"):
			return 6;
		case joaat("PV_CHALLENGE_HERBALIST"):
			return 15;
		case joaat("PV_CHALLENGE_BIGGEST_FISH"):
			return 16;
		case joaat("PV_CHALLENGE_FLYING_BIRD"):
			return 17;
		case joaat("HUNT_THE_POSSE_LEADER"):
			return 18;
		case joaat("ESCAPED_CONVICTS"):
			return 8;
		case joaat("SUPPLY_TRAIN"):
			return 10;
		case joaat("ROUND_UP"):
			return 9;
		case joaat("WRECKAGE"):
			return 11;
		case joaat("CONDOR_EGG"):
			return 12;
		case -27117790:
			return 13;
		case 1653867545:
			return 14;
		case -142235487:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case joaat("UGC_MAJOR_ID_DBG_VERSUS"):
			return 0;
		case joaat("UGC_MAJOR_ID_DBG_DEATHMATCH"):
			return 1;
		case joaat("UGC_MAJOR_ID_DBG_RACE"):
			return 2;
		case 2006131499:
			return 3;
		case -1641798436:
			return 4;
		case 352400957:
			return 5;
		case 1211286129:
			return 6;
		case 787592898:
			return 7;
		case joaat("UGC_MAJOR_ID_LBM"):
			return 8;
		case joaat("UGC_MAJOR_ID_MOONSHINE_COOP"):
			return 9;
		case 1039801657:
			return 10;
		case 434282564:
			return 11;
		case 1228993410:
			return 12;
		default:
			break;
	}
	return 0;
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case joaat("NULL"):
			return -1;
		case joaat("NORMAL"):
			return 0;
		case joaat("INTRO_CHAR"):
			return 1;
		case joaat("INTRO_GENERIC"):
			return 2;
		case 1322114923:
			return 3;
		case joaat("INTRO_FREEMODE"):
			return 4;
		case joaat("INTRO_CLAY2"):
			return 5;
		case joaat("TEAMSTER"):
			return 6;
		case joaat("BOUNTYHUNTER"):
			return 7;
		case joaat("GUNSLINGER"):
			return 8;
		case joaat("OUTLAW"):
			return 9;
		case joaat("HUNTER"):
			return 10;
		case joaat("TRADER"):
			return 11;
		case joaat("COLLECTOR"):
			return 12;
		case joaat("SEASON005"):
			return 13;
		case joaat("VIPSEASON005"):
			return 14;
		case joaat("MOONSHINER"):
			return 15;
		case joaat("SEASON006"):
			return 16;
		case joaat("VIPSEASON006"):
			return 17;
		case 1976336482:
			return 18;
		case -713504854:
			return 19;
		case 753957709:
			return 20;
		case 1054483531:
			return 21;
		case 547199896:
			return 22;
		case -862833187:
			return 23;
		case -89188661:
			return 24;
		case 1792833819:
			return 25;
		case 696644969:
			return 26;
		case -1317631038:
			return 27;
		case 1539627774:
			return 28;
		case 591458137:
			return 29;
		case 1837071987:
			return 30;
		case 67219675:
			return 31;
		case 1885832251:
			return 32;
		case -171568028:
			return 33;
		case -1968391995:
			return 34;
		case 2042305612:
			return 35;
		case -1797632736:
			return 36;
		default:
			break;
	}
	return -1;
}

bool func_108(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_109(iParam0, uParam1, &uVar0))
	{
		func_110(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_109(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = -0.3074162f;
	bParam2->f_3 = func_101(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_110(bool bParam0, int iParam1, var uParam2)
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

