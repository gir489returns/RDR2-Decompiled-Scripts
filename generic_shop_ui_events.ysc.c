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
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	bool bVar7;
	bool bVar8;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_1();
	}
	bVar7 = func_2() == -1;
	while (bVar7 || !func_3(0, 0))
	{
		bVar8 = (!func_4(1024) && (!func_4(32) || !func_4(64)));
		while (UIEVENTS::EVENTS_UI_IS_PENDING(iScriptParam_0) && bVar8)
		{
			if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(iScriptParam_0, &Var3))
			{
				if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Var3.f_3))
				{
				}
				switch (Var3)
				{
					case -722926211:
					case 703281244:
						func_5(64);
						func_5(1024);
						break;
					case -1151569080:
						if (Var3.f_2 == -1.881953E-37f)
						{
							func_6(Var3.f_1);
							func_5(4);
							func_5(32768);
							func_5(2);
							func_5(1024);
						}
						else
						{
							func_7(Var3.f_1);
							func_8(Var3.f_2);
							if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Var3.f_3))
							{
								func_9(&(Var3.f_3));
							}
							func_5(16384);
							func_5(1024);
						}
						break;
					case -1740156697:
						func_9(&(Var3.f_3));
						func_10(Var3.f_1);
						iVar2 = func_11();
						if (((iVar2 == -2.243929E+16f || iVar2 == 4.35956E+24f) || iVar2 == -6.234217E+23f) || iVar2 == -4.383663E+08f)
						{
							iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var3.f_3, func_12());
							iVar1 = iVar0;
							func_13(iVar1);
						}
						else if (iVar2 != 6.8389E-27f || iVar2 != 0)
						{
							iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var3.f_3, func_14());
							iVar1 = iVar0;
							func_13(iVar1);
						}
						if (Var3.f_2 != -2.674928E+24f)
						{
							func_5(2);
						}
						else
						{
							func_5(32);
						}
						func_5(1024);
						break;
					case -632467210:
						func_15(&(Var3.f_3));
						func_16(Var3.f_1);
						iVar2 = func_17();
						if (iVar2 != 6.8389E-27f || iVar2 != 0)
						{
							iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var3.f_3, func_14());
							iVar1 = iVar0;
							func_18(iVar1);
						}
						func_5(32768);
						func_5(1024);
						break;
					case -1203660660:
						if (Var3.f_2 == -4.348965E+12f)
						{
						}
						else
						{
							func_19(Var3.f_1);
							iVar2 = func_20();
							func_21(&(Var3.f_3));
							if (iVar2 != 6.8389E-27f || iVar2 != 0)
							{
								iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var3.f_3, func_14());
								iVar1 = iVar0;
								func_22(iVar1);
							}
						}
						func_23(Var3.f_2);
						if (Var3.f_2 == 8.053284E+07f)
						{
							func_5(512);
						}
						func_5(8);
						func_5(1024);
						break;
					case -2075827635:
						if (Var3.f_2 != 233.5715f)
						{
							if (Var3.f_2 != -5.818666E-33f)
							{
								if (Var3.f_2 == -2.674928E+24f)
								{
									func_5(128);
								}
								else if (Var3.f_2 == 2.102396E-20f)
								{
									func_5(256);
								}
							}
							else
							{
								func_5(256);
							}
						}
						else
						{
							func_5(128);
						}
						func_4(16);
						func_5(1024);
						break;
					case 922460030:
						if (Var3.f_2 == 5.276377E-24f)
						{
							Global_1915643.f_20241.f_3.f_3 = 1;
						}
						else if (Var3.f_2 != -5.626573E-13f)
						{
						}
						else if (Global_1915643.f_20241.f_3.f_3)
						{
							Global_1915643.f_20241.f_3.f_3 = 0;
							Global_1915643.f_20241.f_3.f_2 = 0;
						}
						else
						{
							Global_1915643.f_20241.f_3.f_2 = 1;
						}
						break;
					case -114265581:
						func_24(Var3.f_2);
						func_5(4096);
						func_5(1024);
						break;
					case -120002582:
						func_24(Var3.f_2);
						func_5(4096);
						func_5(1024);
						break;
					case 368072021:
						func_25(Var3.f_2);
						func_26(Var3.f_1);
						func_5(8192);
						func_5(1024);
						break;
					default:
						break;
				}
				UIEVENTS::EVENTS_UI_POP_MESSAGE(iScriptParam_0);
			}
		}
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	func_27();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2()
{
	return Global_1572887.f_14;
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
	return func_28(Global_1915643.f_20241.f_3, iParam0);
}

void func_5(int iParam0)
{
	func_29(&(Global_1915643.f_20241.f_3), iParam0);
}

void func_6(var uParam0)
{
	Global_1915643.f_20241.f_3.f_19 = uParam0;
}

void func_7(var uParam0)
{
	Global_1915643.f_20241.f_3.f_17 = uParam0;
}

void func_8(var uParam0)
{
	Global_1915643.f_20241.f_3.f_18 = uParam0;
}

void func_9(var uParam0)
{
	Global_1915643.f_20241.f_3.f_13 = *uParam0;
}

void func_10(var uParam0)
{
	Global_1915643.f_20241.f_3.f_11 = uParam0;
}

int func_11()
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(func_30(), func_31());
	return iVar0;
}

char* func_12()
{
	return "uiItemID";
}

void func_13(int iParam0)
{
	Global_1915643.f_20241.f_3.f_12 = iParam0;
}

char* func_14()
{
	return "uiItemEnum";
}

void func_15(var uParam0)
{
	Global_1915643.f_20241.f_3.f_16 = *uParam0;
}

void func_16(var uParam0)
{
	Global_1915643.f_20241.f_3.f_14 = uParam0;
}

int func_17()
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(func_32(), func_31());
	return iVar0;
}

void func_18(int iParam0)
{
	Global_1915643.f_20241.f_3.f_15 = iParam0;
}

void func_19(var uParam0)
{
	Global_1915643.f_20241.f_3.f_8 = uParam0;
}

int func_20()
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(func_33(), func_31());
	return iVar0;
}

void func_21(var uParam0)
{
	Global_1915643.f_20241.f_3.f_10 = *uParam0;
}

void func_22(int iParam0)
{
	Global_1915643.f_20241.f_3.f_9 = iParam0;
}

void func_23(var uParam0)
{
	Global_1915643.f_20241.f_3.f_1 = uParam0;
}

void func_24(var uParam0)
{
	Global_1915643.f_20241.f_3.f_36 = uParam0;
}

bool func_25(int iParam0)
{
	bool bVar0;

	bVar0 = Global_1915643.f_20241.f_3.f_39 != iParam0;
	Global_1915643.f_20241.f_3.f_39 = iParam0;
	return bVar0;
}

bool func_26(int iParam0)
{
	bool bVar0;

	bVar0 = Global_1915643.f_20241.f_3.f_38 != iParam0;
	Global_1915643.f_20241.f_3.f_38 = iParam0;
	return bVar0;
}

void func_27()
{
	Global_1915643.f_20241.f_3 = 0;
}

bool func_28(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_29(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

var func_30()
{
	return Global_1915643.f_20241.f_3.f_13;
}

char* func_31()
{
	return "uiItemType";
}

var func_32()
{
	return Global_1915643.f_20241.f_3.f_16;
}

var func_33()
{
	return Global_1915643.f_20241.f_3.f_10;
}

