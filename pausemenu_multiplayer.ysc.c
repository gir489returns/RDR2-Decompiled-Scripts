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
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	switch (ScriptParam_0)
	{
		case 2:
			if (ScriptParam_0.f_1 == -2.312664E+09f || ScriptParam_0.f_1 == -12646.3f)
			{
				if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
				{
					return;
				}
				CAM::DO_SCREEN_FADE_OUT(0);
				func_1();
				HUD::SET_FRONTEND_ACTIVE(false);
			}
			else if (ScriptParam_0.f_1 == 3.303178E-12f)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				func_2();
				HUD::SET_FRONTEND_ACTIVE(false);
			}
			else if (ScriptParam_0.f_1 == 1.005389E-32f)
			{
				if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
				{
					return;
				}
				if (func_3())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					HUD::SET_FRONTEND_ACTIVE(false);
				}
			}
			break;
		default:
			break;
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	func_4(68);
	func_5();
	func_6(-14.49531f, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	func_7(3);
}

void func_2()
{
	func_4(4);
	func_5();
	func_7(2);
	func_6(7.01894E+25f, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

bool func_3()
{
	if (MISC::IS_ORBIS_VERSION())
	{
		if (!NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1))
		{
			NETWORK::NETWORK_SHOW_PSN_UGC_RESTRICTION();
			return false;
		}
	}
	func_4(68);
	func_5();
	func_6(1.37238E+11f, 1.139197E+21f, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	func_7(3);
	return true;
}

void func_4(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 || iParam0);
}

void func_5()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1572887.f_300.f_1[iVar0] = 0;
		iVar0++;
	}
}

void func_6(float fParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Global_1572887.f_300 = fParam0;
	if (iParam1 != 0)
	{
		func_8(iParam1);
	}
	if (iParam2 != 0)
	{
		func_8(iParam2);
	}
	if (iParam3 != 0)
	{
		func_8(iParam3);
	}
	if (iParam4 != 0)
	{
		func_8(iParam4);
	}
	if (iParam5 != 0)
	{
		func_8(iParam5);
	}
	if (iParam6 != 0)
	{
		func_8(iParam6);
	}
	if (iParam7 != 0)
	{
		func_8(iParam7);
	}
	if (iParam8 != 0)
	{
		func_8(iParam8);
	}
	if (iParam9 != 0)
	{
		func_8(iParam9);
	}
	if (iParam10 != 0)
	{
		func_8(iParam10);
	}
	func_9();
}

void func_7(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864.f_1 = iParam0;
}

void func_8(int iParam0)
{
	func_11(&(Global_1572887.f_300.f_1), func_10(iParam0), 3);
}

void func_9()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 32)
	{
		if (func_12(iVar0))
		{
		}
		iVar0++;
	}
	if (Global_1572887.f_300.f_5 != -1)
	{
	}
	if (Global_1572887.f_300.f_10 != 0)
	{
	}
	if (Global_1572887.f_300.f_6 != -1)
	{
	}
	if (Global_1572887.f_300.f_7 != -1)
	{
	}
	if (Global_1572887.f_300.f_8 != -1)
	{
	}
	if (Global_1572887.f_300.f_16 != -1)
	{
	}
	if (Global_1572887.f_300.f_9 != 0)
	{
	}
	if (Global_1572887.f_300.f_15 != 0)
	{
	}
}

int func_10(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case joaat("NEW_GAME"):
			iVar0 = 1;
			break;
		case joaat("INTRO_NOT_DONE"):
			iVar0 = 2;
			break;
		case joaat("FOLLOW_INVITE"):
			iVar0 = 3;
			break;
		case -1480790826:
			iVar0 = 4;
			break;
		case joaat("SHIFT_F"):
			iVar0 = 5;
			break;
		case joaat("BG_CUSTOM_1"):
			iVar0 = 6;
			break;
		case joaat("BG_CUSTOM_2"):
			iVar0 = 7;
			break;
		case joaat("BG_CUSTOM_3"):
			iVar0 = 8;
			break;
		case joaat("OPEN_POSSE"):
			iVar0 = 9;
			break;
		case joaat("NEAR_POSSE"):
			iVar0 = 10;
			break;
		case joaat("RANDOM_REGION"):
			iVar0 = 11;
			break;
		case joaat("LAST_REGION"):
			iVar0 = 12;
			break;
		case joaat("LAST_LOCATION"):
			iVar0 = 13;
			break;
		case joaat("LAST_MISSION"):
			iVar0 = 14;
			break;
		case joaat("RANDOM_POKER"):
			iVar0 = 15;
			break;
		case joaat("CCHAR"):
			iVar0 = 16;
			break;
		case joaat("CAMP"):
			iVar0 = 17;
			break;
		case 1735278055:
			iVar0 = 18;
			break;
		case -283069378:
			iVar0 = 19;
			break;
		case joaat("TRADE_1"):
			iVar0 = 20;
			break;
		case joaat("TRADE_2"):
			iVar0 = 21;
			break;
		case joaat("TRADE_3"):
			iVar0 = 22;
			break;
		case joaat("TRADE_4"):
			iVar0 = 23;
			break;
		case joaat("TRADE_5"):
			iVar0 = 24;
			break;
		case joaat("TRADE_6"):
			iVar0 = 25;
			break;
		case joaat("TRADE_7"):
			iVar0 = 26;
			break;
		case 1449824096:
			iVar0 = 27;
			break;
		case -1369260209:
			iVar0 = 28;
			break;
		case joaat("COUPON"):
			iVar0 = 29;
			break;
		case joaat("HUB"):
			iVar0 = 30;
			break;
		case 413241879:
			iVar0 = 31;
			break;
		case 928971890:
			iVar0 = 32;
			break;
	}
	return iVar0;
}

bool func_11(var uParam0, int iParam1, int iParam2)
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

bool func_12(int iParam0)
{
	return func_13(&(Global_1572887.f_300.f_1), iParam0, 3);
}

bool func_13(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

