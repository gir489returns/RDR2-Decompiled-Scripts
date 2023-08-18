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
	struct<13> Local_13 = { 0, 0, 0, 0, 255, 255, -1082130432, -1, 0, 0, -1, 0, 0 } ;
	struct<4> Local_26[32];
	struct<143> Local_155 = { 15, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	struct<18> Local_301 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_319 = 255;
	var uLocal_320 = 255;
	var uLocal_321 = 255;
	var uLocal_322 = 255;
	var uLocal_323 = 255;
	var uLocal_324 = 255;
	var uLocal_325 = 255;
	var uLocal_326 = 255;
	var uLocal_327 = 255;
	var uLocal_328 = 255;
	var uLocal_329 = 255;
	var uLocal_330 = 255;
	var uLocal_331 = 255;
	var uLocal_332 = 255;
	var uLocal_333 = 255;
	var uLocal_334 = 255;
	var uLocal_335 = 255;
	var uLocal_336 = 255;
	var uLocal_337 = 255;
	var uLocal_338 = 255;
	var uLocal_339 = 255;
	var uLocal_340 = 255;
	var uLocal_341 = 255;
	var uLocal_342 = 255;
	var uLocal_343 = 255;
	var uLocal_344 = 255;
	var uLocal_345 = 255;
	var uLocal_346 = 255;
	var uLocal_347 = 255;
	var uLocal_348 = 255;
	var uLocal_349 = 255;
	var uLocal_350 = 255;
	struct<6> Local_351[32];
	struct<1455> Local_544 = { -1, -1, 0, 0, 0, 255, 0, -1, -1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 404851220, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0 } ;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	float fLocal_2027 = 0f;
	float fLocal_2028 = 0f;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	struct<8> ScriptParam_0 = { -1, -1, 0, 0, 0, 255, 0, -1 } ;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_2027 = 1f;
	fLocal_2028 = 1f;
	iVar0 = ScriptParam_0;
	func_1(iVar0);
	func_2(&ScriptParam_0);
	while (!func_3(ScriptParam_0.f_7))
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_5();
	func_6();
}

void func_1(int iParam0)
{
	func_7(32, iParam0);
	func_8();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_301, 50, 50);
	func_9(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Local_301), 50, "m_baseHostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_351, 193, 51);
	func_10(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Local_351[0 /*6*/])), 193, "m_baseClientData");
	func_11();
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
}

void func_2(int iParam0)
{
	func_13(iParam0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_14();
	}
}

bool func_3(struct<2> Param0)
{
	if (func_15(0, 0))
	{
		return true;
	}
	else if (func_16(Param0, 0, 128))
	{
		return true;
	}
	else if (!func_17())
	{
		return true;
	}
	else if (func_18(Local_544, 64))
	{
		return true;
	}
	else if (Local_544.f_10 == 9)
	{
		return true;
	}
	return false;
}

void func_4()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_19();
	}
	func_20();
}

void func_5()
{
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
	{
		func_21();
	}
	func_22();
}

void func_6()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
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
		if (func_23() == 0)
		{
			if (func_24())
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

int func_9(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_10(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_11()
{
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 13, 39);
	func_9(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Local_13), 13, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_26, 129, 40);
	func_10(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Local_26[0 /*4*/])), 129, "m_clientData");
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
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

void func_13(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	vector3 vVar19;
	vector3 vVar22;

	Local_544 = { *iParam0 };
	Local_544.f_1366 = NETWORK::PARTICIPANT_ID_TO_INT();
	Local_544.f_1370 = MISC::GET_GAME_TIMER();
	Local_544.f_1302 = func_25(iParam0->f_1) + 1000;
	Local_544.f_1303 = func_26(iParam0->f_1, iParam0->f_2, iParam0->f_3) + 1000;
	Local_544.f_1372 = { func_27(iParam0->f_1, iParam0->f_3) };
	Local_544.f_1380 = { func_28(iParam0->f_1, iParam0->f_3) };
	Local_544.f_1327 = func_29(iParam0->f_1, iParam0->f_2);
	Local_544.f_1328 = func_30(iParam0->f_1, iParam0->f_2);
	Local_544.f_1329 = func_31(iParam0->f_1, iParam0->f_2);
	Local_544.f_1433 = { func_32(iParam0->f_1, iParam0->f_2) };
	func_34(func_33(iParam0->f_1, iParam0->f_2));
	func_35(7.396258E+19f);
	if (func_36(&Var0, iParam0->f_1))
	{
		Var5 = { Var0 };
		if (func_37(&Var5) && func_38(&Var5, iParam0->f_3))
		{
			Local_544.f_1307 = 1;
			func_39(Var5, 29615.1f, &(Local_544.f_1307), 0);
			Local_544.f_1309 = 2;
			func_39(Var5, -7.380973E-25f, &(Local_544.f_1309), 0);
			Local_544.f_1308 = 2;
			func_39(Var5, 6.580254E-05f, &(Local_544.f_1308), 0);
			Local_544.f_1310 = 28;
			func_39(Var5, -1.968821E+09f, &(Local_544.f_1310), 1);
			Local_544.f_1421 = -0.02932728f;
			func_40(Var5, -1.247822E+22f, &iVar10, 1);
			func_41(iVar10);
			func_42(Var5, -2.41229E+38f, &bVar11, 0);
			if (bVar11)
			{
				func_43(3.85186E-34f);
			}
		}
		Var5 = { Var0 };
		if (((func_44(&Var5) && func_45(&Var5, Local_544.f_2)) && func_37(&Var5)) && func_38(&Var5, iParam0->f_3))
		{
			if (Local_544.f_9 != -4.537018E+10f)
			{
				func_40(Var5, 1.333002E-20f, &iVar12, 0);
				iVar13 = iVar12;
				if (iVar13 != 0)
				{
					MISC::_SET_OVERRIDE_WEATHER(iVar12);
				}
				iVar14 = -1;
				func_39(Var5, -0.2015639f, &iVar14, 0);
				if (iVar14 >= 0 && iVar14 < 24)
				{
					NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(iVar14, 0, 0, 0, false);
				}
			}
		}
	}
	if (func_46(iParam0->f_1, iParam0->f_3, &fVar15))
	{
		iVar16 = func_48(func_47(-8.839952E-30f, fVar15));
		iVar17 = func_48(func_47(1.255702E+11f, fVar15));
		Local_544.f_1311 = (iVar16 + iVar17);
	}
	iVar18 = func_49(iParam0->f_1);
	if (iVar18 != 0)
	{
		if (func_50(iVar18, &(Local_544.f_1425), 600, -1, 0, 0))
		{
			func_51();
		}
	}
	func_52();
	func_53();
	func_54();
	if (Local_544.f_9 != -4.537018E+10f)
	{
		func_55(1148844442 /* Float: 999.9f */);
		GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX(func_56());
		GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX(func_57());
		GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX(func_58());
		Local_544.f_1451 = GRAPHICS::_ANIMPOSTFX_GET_STACKHASH(func_59());
		GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX_BY_STACKHASH(Local_544.f_1451);
		func_60(&(Local_544.f_1454), 1, 0);
		Local_544.f_1454.f_2 = -6.086055E-27f;
		func_61(&(Local_544.f_1454), 0);
		if (func_62(255))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			func_63(1);
		}
		AUDIO::SET_AUDIO_FLAG("MusicIgnoreDeathArrest", true);
		AUDIO::START_AUDIO_SCENE("rdro_ambient_ped_intensity_zero_scene");
	}
	else if (GANG::_NETWORK_IS_GANG_MEMBER(iParam0->f_6, PLAYER::PLAYER_ID()))
	{
		func_43(131072);
	}
	func_64();
	if (func_65(131072))
	{
		vVar19 = { func_66(iParam0->f_1, iParam0->f_2) };
		vVar22 = { func_67(iParam0->f_1, iParam0->f_2) };
		if (func_68(vVar19))
		{
		}
		else
		{
			func_69(vVar19, vVar22);
		}
		func_70(1);
	}
	if (Local_544.f_9 != -4.537018E+10f)
	{
		func_71();
	}
}

void func_14()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_301.f_17[iVar0] = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		iVar0++;
	}
	func_72();
}

bool func_15(bool bParam0, bool bParam1)
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

bool func_16(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}
	if (func_73(Global_1051268) && !func_74(Global_1051268, Param0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}
	if (iParam2 != 0 && func_75(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_76(iParam3, 255))
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
	if (func_77())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}
	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_73(Global_1051268))
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

bool func_17()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_18(int iParam0, int iParam1)
{
	return func_78(Global_1206482.f_78[iParam0 /*20*/].f_6, iParam1);
}

void func_19()
{
	switch (Local_301)
	{
		case 0:
			func_79();
			break;
		case 1:
			func_80();
			break;
		case 3:
			func_81();
			break;
		case 4:
			func_82();
			break;
		case 5:
			func_83();
			break;
		case 6:
			func_84();
			break;
		case 7:
			func_85();
			break;
		case 8:
			func_86();
			break;
	}
}

void func_20()
{
	func_87();
	func_53();
	func_88();
	func_89();
	func_90();
	func_54();
	func_91();
	func_92();
	func_93();
	func_94();
	switch (Local_544.f_10)
	{
		case 0:
			func_95();
			break;
		case 1:
			func_96();
			break;
		case 2:
			func_97();
			break;
		case 3:
			func_98();
			break;
		case 4:
			func_99();
			break;
		case 5:
			func_100();
			break;
		case 6:
			func_101();
			break;
		case 7:
			func_102();
			break;
		case 8:
			func_103();
			break;
	}
}

void func_21()
{
	if (Local_301 > 5)
	{
		NETWORK::NETWORK_SESSION_REMOVE_SESSION_FLAGS(664);
	}
	func_104();
}

void func_22()
{
	bool bVar0;

	func_105();
	func_106(1);
	func_107();
	func_108();
	func_109();
	func_110();
	func_111();
	func_113(func_112(Local_544.f_1));
	func_114(1);
	func_61(&(Local_544.f_1454), 0);
	if (DATAFILE::PARSEDDATA_IS_FILE_VALID(Local_544.f_1425))
	{
		DATAFILE::_PARSEDDATA_UNLOAD_FILE(Local_544.f_1425);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_544.f_1426))
	{
		VOLUME::DELETE_VOLUME(Local_544.f_1426);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_544.f_1427))
	{
		VOLUME::DELETE_VOLUME(Local_544.f_1427);
	}
	if (func_115())
	{
		STREAMING::REMOVE_PTFX_ASSET();
	}
	GRAPHICS::_ANIMPOSTFX_SET_TO_UNLOAD(func_56());
	GRAPHICS::_ANIMPOSTFX_SET_TO_UNLOAD(func_57());
	GRAPHICS::_ANIMPOSTFX_SET_TO_UNLOAD(func_58());
	if (Local_544.f_9 != -4.537018E+10f)
	{
		func_116(Local_544.f_1371);
		MISC::CLEAR_OVERRIDE_WEATHER();
		NETWORK::_NETWORK_CLEAR_CLOCK_OVERRIDE_OVERTIME(0);
		func_117();
		HUD::_DISABLE_HUD_CONTEXT(3.870794E-14f);
		func_118(&(Local_544.f_1454));
		if (GRAPHICS::_ANIMPOSTFX_IS_STACKHASH_PLAYING(Local_544.f_1451) && !func_119())
		{
			GRAPHICS::_0x71845905BCCDE781(Local_544.f_1451);
			GRAPHICS::_ANIMPOSTFX_STOP_STACKHASH_POSTFX(Local_544.f_1451);
			GRAPHICS::_0x38D9D50F2085E9B3(Local_544.f_1451);
		}
		if (CAM::DOES_CAM_EXIST(Local_544.f_1449))
		{
			CAM::DESTROY_CAM(Local_544.f_1449, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_544.f_1450))
		{
			PED::DELETE_PED(&(Local_544.f_1450));
		}
		AUDIO::_STOP_ALL_SCRIPTED_AUDIO_SOUNDS();
	}
	AUDIO::_RELEASE_SOUNDSET(func_120());
	AUDIO::_RELEASE_SHARD_SOUNDS(func_121(), func_122());
	AUDIO::_RELEASE_SHARD_SOUNDS(func_123(), func_124());
	AUDIO::_RELEASE_SHARD_SOUNDS(func_125(), func_126());
	func_127();
	func_128();
	func_129(1, 1);
	func_130(0);
	if (func_65(131072))
	{
		func_70(0);
		func_131();
	}
	if (Local_544.f_9 == -4.537018E+10f)
	{
		if (func_133(func_132(Local_544.f_1)))
		{
			func_134(Local_544.f_1, Local_544.f_2);
			func_135(func_132(Local_544.f_1));
			func_136();
		}
	}
	else
	{
		AUDIO::SET_AUDIO_FLAG("MusicIgnoreDeathArrest", false);
		AUDIO::STOP_AUDIO_SCENE("rdro_ambient_ped_intensity_zero_scene");
	}
	if (func_137(4096) || func_137(8192))
	{
		bVar0 = func_137(8192);
		func_138(Local_544, Local_544.f_1, Local_544.f_7, bVar0);
	}
	else if (func_137(16384))
	{
		func_139(Local_544, Local_544.f_1, Local_544.f_7);
	}
	else
	{
		func_140(Local_544, Local_544.f_7, 0);
	}
	func_141();
	func_142(Local_544.f_9, Local_544.f_4);
}

int func_23()
{
	return Global_1572887.f_14;
}

bool func_24()
{
	return Global_1051645.f_8;
}

int func_25(int iParam0)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 120000;
	if (func_36(&Var1, iParam0))
	{
		func_39(Var1, -1.650332E+22f, &iVar0, 0);
	}
	return iVar0;
}

int func_26(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 300000;
	if ((((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1)) && func_37(&Var1)) && func_38(&Var1, uParam2))
	{
		func_39(Var1, 2.216889E+18f, &iVar0, 0);
	}
	return iVar0;
}

struct<8> func_27(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_143(&Var8))
	{
		func_144(Var8, 1.348491E-37f, &Var0, 1);
	}
	return Var0;
}

struct<8> func_28(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_143(&Var8))
	{
		func_144(Var8, -1.828277E-25f, &Var0, 0);
	}
	return Var0;
}

float func_29(int iParam0, var uParam1)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = 1128792064; /* Float: 200f */
	if ((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1))
	{
		func_145(Var1, 5266.862f, &fVar0, 0);
	}
	return fVar0;
}

float func_30(int iParam0, var uParam1)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = func_29(iParam0, uParam1);
	if ((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1))
	{
		func_145(Var1, -6.862351E-12f, &fVar0, 0);
	}
	return fVar0;
}

float func_31(int iParam0, var uParam1)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = -1f;
	if ((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1))
	{
		func_145(Var1, 5.669141E+33f, &fVar0, 0);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (func_30(iParam0, uParam1) + 1128792064);
	}
	return fVar0;
}

Vector3 func_32(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_146(Var3, 5.369853E-31f, &vVar0, 0);
	}
	return vVar0;
}

Vector3 func_33(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_146(Var3, 5.3786E+35f, &vVar0, 0);
	}
	return vVar0;
}

void func_34(vector3 vParam0)
{
	if (!func_147(Local_544.f_1430, vParam0))
	{
		Local_544.f_1430 = { vParam0 };
	}
}

int func_35(int iParam0)
{
	if (Local_544.f_1418 != iParam0)
	{
		Local_544.f_1418 = iParam0;
		return 1;
	}
	return 0;
}

bool func_36(bool bParam0, int iParam1)
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1206482.f_455))
	{
		return false;
	}
	*bParam0 = Global_1206482.f_455;
	bParam0->f_2 = -0.4166105f;
	bParam0->f_3 = func_148(iParam1);
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_37(bool bParam0)
{
	bParam0->f_2 = -5.135098E+27f;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_38(bool bParam0, var uParam1)
{
	bParam0->f_2 = -2.751128E-24f;
	bParam0->f_3 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_39(vector3 vParam0, int iParam3, var uParam4, float fParam5, int* iParam6, bool bParam7)
{
	vParam0.f_2 = fParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_40(vector3 vParam0, int iParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = fParam5;
	uVar0 = *fParam6;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, &vParam0))
	{
		*fParam6 = uVar0;
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

void func_41(int iParam0)
{
	if (Local_544.f_1421 != iParam0)
	{
		Local_544.f_1421 = iParam0;
	}
}

int func_42(vector3 vParam0, int iParam3, var uParam4, float fParam5, bool bParam6, bool bParam7)
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

void func_43(float fParam0)
{
	func_149(&(Local_544.f_1368), fParam0);
}

bool func_44(bool bParam0)
{
	*bParam0 = Global_1206482.f_455;
	bParam0->f_2 = -8.04068E-26f;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_45(bool bParam0, var uParam1)
{
	bParam0->f_2 = 1.265881E-22f;
	bParam0->f_3 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_46(int iParam0, var uParam1, var uParam2)
{
	struct<5> Var0;
	var uVar5;

	if ((func_36(&Var0, iParam0) && func_37(&Var0)) && func_38(&Var0, uParam1))
	{
		if (func_40(Var0, 4.423604E-06f, &uVar5, 1))
		{
			*uParam2 = uVar5;
			return true;
		}
	}
	return false;
}

struct<2> func_47(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

int func_48(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

int func_49(int iParam0)
{
	var uVar0;
	struct<5> Var1;

	if (func_36(&Var1, iParam0))
	{
		func_40(Var1, 1.348639E-12f, &uVar0, 0);
	}
	return uVar0;
}

bool func_50(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	if (iParam2 < 1)
	{
		iParam2 = 10;
	}
	bVar1 = false;
	*uParam1 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(iParam0);
	while ((!DATAFILE::PARSEDDATA_IS_FILE_LOADED(*uParam1) && iVar0 < iParam2) && !bVar1)
	{
		if (Global_1572887.f_14 != -1)
		{
			bVar1 = func_15(bParam4, bParam5);
		}
		iVar0++;
		BUILTIN::WAIT(0);
	}
	if (Global_1572887.f_14 != -1)
	{
		bVar1 = func_15(bParam4, bParam5);
	}
	if (bVar1)
	{
		func_6();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	return true;
}

void func_51()
{
}

void func_52()
{
	struct<2> Var0;

	if (func_18(Local_544, 256))
	{
		func_150(0, Local_544.f_1366);
		return;
	}
	else if (func_18(Local_544, 512) && !func_151())
	{
		func_150(0, Local_544.f_1366);
		func_152(&(Local_544.f_1417), 8);
	}
	else if (func_153(&Local_544))
	{
		func_150(0, Local_544.f_1366);
		func_152(&(Local_544.f_1417), 3);
	}
	else
	{
		Var0 = { func_154() };
		if (func_73(Var0))
		{
			if (!func_74(Var0, Local_544.f_7) && !(func_155() || func_18(Local_544, 262144)))
			{
				func_150(0, Local_544.f_1366);
				if (func_152(&(Local_544.f_1417), 1))
				{
				}
			}
			else
			{
				func_150(2, Local_544.f_1366);
				func_152(&(Local_544.f_1417), 0);
			}
		}
		else
		{
			func_150(1, Local_544.f_1366);
			func_152(&(Local_544.f_1417), 0);
		}
	}
}

void func_53()
{
	if (func_156(Local_544.f_1366))
	{
		if (!func_137(256))
		{
			if (Local_544.f_9 != -4.537018E+10f)
			{
				func_157(-5.137986E-38f, 0);
			}
			else
			{
				func_157(-5.953573E-07f, 0);
			}
			func_43(256);
		}
	}
	else
	{
		func_105();
	}
}

void func_54()
{
	struct<35> Var0;
	struct<12> Var58;

	if (!func_156(Local_544.f_1366))
	{
		return;
	}
	if (func_158())
	{
		return;
	}
	Var0.f_13 = -1;
	Var0.f_13.f_1 = -1;
	Var0.f_16.f_3 = 1;
	Var0.f_21 = 1;
	Var0.f_22 = 1;
	Var0.f_22.f_1 = -1f;
	Var0.f_22.f_2 = 1;
	Var0.f_25 = -1;
	Var0.f_25.f_1 = -1;
	Var0.f_25.f_2 = -1;
	Var0.f_25.f_3 = -1;
	Var0.f_25.f_4 = -1;
	Var0.f_25.f_5 = -1;
	Var0.f_25.f_6 = -1;
	Var0.f_25.f_7 = -1;
	Var0.f_25.f_8 = -1;
	Var0.f_34 = 4;
	Var0.f_34.f_1.f_1 = -1;
	Var0.f_34.f_1.f_3.f_1 = -1;
	Var0.f_34.f_1.f_3.f_3.f_1 = -1;
	Var0.f_34.f_1.f_3.f_3.f_3.f_1 = -1;
	if (Local_544.f_9 == -4.537018E+10f)
	{
		func_43(512);
	}
	else if (!func_137(512))
	{
		Var58.f_1 = -1;
		Var58.f_3 = -1f;
		Var58.f_4 = 2;
		Var58.f_5 = -1f;
		Var58.f_7 = -1f;
		Var58.f_9 = -1f;
		Var58.f_11 = -1f;
		if (!func_159(&(Local_544.f_1344)))
		{
			Var58.f_6 = 0;
			Var58.f_4 = 2;
			Var58.f_2 = 2;
			Var58 = 0;
			Var58.f_10 = 2;
			Var58.f_8 = 0;
			func_160(&Var0, Var58, 3);
		}
		func_161(&Var0, -5.137986E-38f, 0, 0);
		func_162(&Var0, 1);
		func_163(&Var0, 1);
		func_164(&Var0, 1);
		func_165(&Var0, Local_544.f_7, 1, 1);
		func_166();
	}
}

void func_55(float fParam0)
{
	if (Global_1072759.f_22933 != fParam0)
	{
		if (fParam0 >= 0f)
		{
			Global_1072759.f_22933 = fParam0;
		}
	}
}

char* func_56()
{
	return "MP_FreeRoamCountdown";
}

char* func_57()
{
	return "MP_MatchEndPulseWinner";
}

char* func_58()
{
	return "MP_MatchEndPulseLoser";
}

char* func_59()
{
	return "MP_Trans_SceneToPhoto";
}

void func_60(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-1.906091E+23f);
	}
	else if (bParam2)
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(5.287648E+25f);
	}
	else
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-1.370211E+30f);
	}
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
}

void func_61(var uParam0, bool bParam1)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_3))
	{
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_11))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, bParam1);
	}
	else
	{
		uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_3, "showTransitionScreen", bParam1);
	}
}

bool func_62(int iParam0)
{
	return func_167(1, iParam0);
}

void func_63(bool bParam0)
{
	if (!bParam0)
	{
		func_168(18);
	}
	else
	{
		func_169(18);
	}
}

void func_64()
{
	int iVar0;

	iVar0 = func_170(Local_544.f_2);
	Local_155.f_127 = { func_171(iVar0) };
	Local_155.f_121 = 2.657573E-12f;
	Local_155.f_121.f_1 = 5;
	Local_155.f_121.f_2 = { 0f, 1f, 1066192077 /* Float: 1.1f */ };
	Local_155.f_121.f_5 = 1128792064; /* Float: 200f */
	func_172(Local_544.f_2);
}

bool func_65(int iParam0)
{
	return func_78(Local_544.f_1369, iParam0);
}

Vector3 func_66(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_146(Var3, -9.86382E+33f, &vVar0, 0);
	}
	return vVar0;
}

Vector3 func_67(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_146(Var3, -7.10546E-31f, &vVar0, 0);
	}
	return vVar0;
}

bool func_68(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_69(vector3 vParam0, vector3 vParam3)
{
	bool bVar0;

	bVar0 = false;
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1102813.f_26.f_3344))
	{
		bVar0 = true;
	}
	else if (!func_147(ENTITY::GET_ENTITY_COORDS(Global_1102813.f_26.f_3344, false, false), vParam0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Global_1102813.f_26.f_3348 = { vParam0 };
		Global_1102813.f_26.f_3354 = { vParam3 };
		Global_1102813.f_26.f_3345 = 1;
		STREAMING::REQUEST_MODEL(-8.696768E+07f, false);
	}
}

void func_70(bool bParam0)
{
	if (bParam0)
	{
		func_173(4096);
	}
	else
	{
		func_174(4096);
	}
}

void func_71()
{
	int iVar0;

	if (Local_544.f_1329 <= 0f)
	{
		return;
	}
	Local_544.f_1428 = VOLUME::CREATE_VOLUME_SPHERE(Local_544.f_1430, 0f, 0f, 0f, Local_544.f_1329, Local_544.f_1329, Local_544.f_1329);
	if (VOLUME::DOES_VOLUME_EXIST(Local_544.f_1428))
	{
		iVar0 = func_175();
		POPULATION::_0x2161278C6322F740(iVar0, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Local_544.f_1428, iVar0, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(Local_544.f_1428, iVar0, 0, 0, -1, -1, 0);
		PATHFIND::_0xB03944057FD735BA(Local_544.f_1428, 4, 0);
	}
}

void func_72()
{
	if (func_176(0) && func_177(0) != func_178())
	{
		func_179(0, 0);
	}
	Local_13.f_10 = MISC::GET_GAME_TIMER();
}

bool func_73(struct<2> Param0)
{
	if (!func_180(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_181(Param0))
	{
		return false;
	}
	return true;
}

bool func_74(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_75(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_76(int iParam0, int iParam1)
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

bool func_77()
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
	if (!func_73(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_78(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_79()
{
	if (func_182(2, Local_544.f_1366))
	{
		if (!func_183(2))
		{
			if (func_184())
			{
				func_185(2);
			}
		}
		else
		{
			func_186();
			func_187(1);
		}
	}
}

void func_80()
{
	if (!func_183(4))
	{
		if (func_188())
		{
			func_185(4);
		}
	}
	else if (func_189(4))
	{
		func_190(&(Local_301.f_1), 0);
		func_187(3);
	}
}

void func_81()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_191();
	if (func_159(&(Local_301.f_1)))
	{
		iVar0 = func_192(&(Local_301.f_1));
		iVar1 = (Local_544.f_1302 - iVar0);
		if (func_68(Local_544.f_1433))
		{
			iVar2 = func_193();
		}
		else
		{
			iVar2 = BUILTIN::CEIL((IntToFloat(func_193()) * 1056964608));
		}
		if (iVar1 <= iVar2)
		{
			func_187(4);
		}
		else if (Local_544.f_9 != -4.537018E+10f && iVar1 >= 16000)
		{
			iVar3 = func_194(2);
			if (iVar3 >= Local_544.f_1310 && func_189(8))
			{
				func_195(&(Local_301.f_1), (Local_544.f_1302 - 16000));
			}
		}
	}
}

void func_82()
{
	int iVar0;
	int iVar1;

	iVar0 = func_192(&(Local_301.f_1));
	iVar1 = (Local_544.f_1302 - iVar0);
	if (!func_183(16))
	{
		if (iVar1 <= func_196())
		{
			if (func_197())
			{
				func_185(16);
			}
		}
	}
	else if (iVar1 <= 1000)
	{
		func_198();
		func_199(1, Local_544.f_1309);
		func_200(1);
		func_201();
		if (Local_301.f_12 != 0)
		{
			func_202();
			func_187(6);
		}
		else
		{
			Local_301.f_16 = func_194(2);
			func_203(0);
			func_185(2048);
			func_187(5);
		}
	}
}

void func_83()
{
	func_204();
	func_203(1);
	func_199(0, -1);
	func_200(0);
	if ((func_205() || func_206() > Local_544.f_1303) || Local_301.f_12 != 0)
	{
		func_202();
	}
}

void func_84()
{
	if (func_189(32))
	{
		if (!func_159(&(Local_301.f_7)))
		{
			func_207(&(Local_301.f_7));
		}
		else if (func_192(&(Local_301.f_7)) > 500)
		{
			func_208();
			func_187(7);
		}
	}
}

void func_85()
{
	func_187(8);
}

void func_86()
{
	if (func_209())
	{
		func_187(9);
	}
}

void func_87()
{
	if (!func_65(262144))
	{
		if (ENTITY::IS_ENTITY_DEAD(Global_33))
		{
			if (func_210())
			{
				HUD::CLEAR_ALL_HELP_MESSAGES();
			}
			func_211(262144);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		func_212(262144);
	}
}

void func_88()
{
	Global_1206482.f_78[Local_544 /*20*/].f_2 = Local_544.f_10 >= 3;
	Global_1206482.f_78[Local_544 /*20*/].f_1 = Local_351[Local_544.f_1366 /*6*/];
	if (Local_351[Local_544.f_1366 /*6*/] != 2)
	{
		return;
	}
	if (func_213())
	{
		func_214();
	}
	else if (func_215())
	{
		func_216(1);
	}
}

void func_89()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_217(iVar0))
		{
			func_218(iVar0);
		}
		iVar0++;
	}
}

void func_90()
{
	int iVar0;
	int iVar1;

	if (Local_544 == -1)
	{
		return;
	}
	if (Local_544.f_1366 == -1)
	{
		return;
	}
	Global_1206482.f_78[Local_544 /*20*/].f_2 = Local_544.f_10 >= 3;
	Global_1206482.f_78[Local_544 /*20*/].f_1 = Local_351[Local_544.f_1366 /*6*/];
	if (Local_351[Local_544.f_1366 /*6*/] != 2)
	{
		return;
	}
	iVar1 = func_219();
	switch (Local_544.f_1)
	{
		case 18:
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				return;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
			{
				return;
			}
			iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
			if (Local_351[iVar0 /*6*/] != 2)
			{
				return;
			}
			func_220(func_219(), Local_544.f_7, 1, 0);
			break;
	}
}

void func_91()
{
	if (func_156(Local_544.f_1366) && func_137(3.85186E-34f))
	{
		func_221(0);
	}
}

void func_92()
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
				func_222(iVar0);
				break;
			case 1741908893:
				func_223(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_93()
{
	int iVar0;

	if (Local_544.f_1453 == -1)
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_301.f_17[iVar0] == PLAYER::PLAYER_ID())
			{
				Local_544.f_1453 = iVar0;
			}
			iVar0++;
		}
	}
}

void func_94()
{
}

void func_95()
{
	bool bVar0;

	if (Local_301 >= 6)
	{
		func_224();
		func_225(6);
		return;
	}
	func_226();
	if (!func_182(2, Local_544.f_1366))
	{
		bVar0 = true;
		if (!func_227(func_112(Local_544.f_1)))
		{
			bVar0 = false;
		}
		if (func_115())
		{
			STREAMING::REQUEST_PTFX_ASSET();
			if (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				bVar0 = false;
			}
		}
		if (!AUDIO::PREPARE_SOUNDSET(func_120(), false) || !AUDIO::PREPARE_SOUND(func_121(), func_122(), -2))
		{
			bVar0 = false;
		}
		if (Local_544.f_9 != -4.537018E+10f)
		{
			if (!func_230(&(Local_544.f_1371), func_228(PED::IS_PED_MALE(Global_33)), func_229()))
			{
				bVar0 = false;
			}
			if (!func_231(&(Local_544.f_1454)))
			{
				bVar0 = false;
			}
		}
		if (!func_232())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_233(2, Local_544.f_1366);
		}
		else if (Local_544.f_1370 == -1 || (MISC::GET_GAME_TIMER() - Local_544.f_1370) > Global_1901671.f_316.f_186)
		{
			if (Local_544.f_1370 == -1)
			{
			}
			func_233(2, Local_544.f_1366);
		}
	}
	else if (Local_301 > 0)
	{
		if (Local_544.f_9 != -4.537018E+10f)
		{
			func_114(0);
		}
		StringCopy(&(Local_544.f_13.f_984), MISC::VAR_STRING(2, &(Local_544.f_1372)), 64);
		func_52();
		func_225(1);
	}
}

void func_96()
{
	if (Local_301 >= 6)
	{
		func_224();
		func_225(6);
		return;
	}
	func_226();
	if (!func_182(4, Local_544.f_1366))
	{
		if (func_234())
		{
			func_233(4, Local_544.f_1366);
		}
	}
	else if (Local_301 > 1)
	{
		func_235();
		if (Local_544.f_9 == -4.537018E+10f)
		{
			func_225(3);
		}
		else
		{
			func_225(2);
		}
	}
}

void func_97()
{
	if (Local_301 >= 6)
	{
		func_224();
		func_225(6);
		return;
	}
	func_236();
	func_237();
	if (!func_137(2097152))
	{
		if (func_137(1))
		{
			if (func_238() || func_239())
			{
				if (func_62(255))
				{
					return;
				}
				func_240();
			}
			else if (func_62(255) || CAM::IS_SCREEN_FADED_OUT())
			{
				if (!func_159(&(Local_544.f_1353)))
				{
					func_207(&(Local_544.f_1353));
				}
				else if (func_192(&(Local_544.f_1353)) > 30000)
				{
					func_240();
				}
			}
		}
	}
	else if (!func_62(255))
	{
		if (!func_241(1.504633E-36f))
		{
			func_242(1.504633E-36f);
		}
		func_243(1);
		AUDIO::_STOP_ALL_SCRIPTED_AUDIO_SOUNDS();
		func_244(0, 1, 0, 0, 0, 0, 0, 0, 0);
		func_233(8, Local_544.f_1366);
		func_225(3);
	}
}

void func_98()
{
	if (Local_301 >= 6)
	{
		func_224();
		func_225(6);
		return;
	}
	func_236();
	func_245();
	func_237();
	func_246();
	func_247();
	func_248();
	if (Local_301 > 3)
	{
		func_249();
		func_250();
		func_225(4);
	}
}

void func_99()
{
	int iVar0;
	int iVar1;

	if (Local_301 >= 6)
	{
		func_224();
		func_251(Local_544, 2);
		func_225(6);
		return;
	}
	func_236();
	func_245();
	func_237();
	func_248();
	if (!func_182(16, Local_544.f_1366))
	{
		iVar0 = func_192(&(Local_301.f_1));
		iVar1 = (Local_544.f_1302 - iVar0);
		if (iVar1 <= func_196())
		{
			if (func_252())
			{
				func_233(16, Local_544.f_1366);
			}
		}
	}
	else if (Local_301 > 4)
	{
		func_253();
		func_254();
		func_255();
		func_52();
		func_256();
		func_257(&(Local_544.f_1039), 1);
		func_258(1);
		func_259();
		func_260();
		func_251(Local_544, 2);
		func_225(5);
	}
}

void func_100()
{
	if (Local_301 >= 8)
	{
		func_225(8);
		return;
	}
	func_261();
	if (Local_301 > 5)
	{
		func_224();
		return;
	}
	else if (func_137(8192))
	{
		func_224();
		func_225(6);
		return;
	}
	func_236();
	func_245();
	func_262();
	func_263();
	func_255();
	func_264();
	func_265();
	if (!func_266())
	{
		func_267();
	}
	func_268();
	func_269();
	func_270();
}

void func_101()
{
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	if (!func_271())
	{
		func_272();
	}
	func_273();
	func_274();
	func_275();
	if (func_276())
	{
		func_277();
	}
	if (!func_156(Local_544.f_1366))
	{
		func_225(8);
		return;
	}
	if (!func_182(32, Local_544.f_1366))
	{
		func_233(32, Local_544.f_1366);
	}
	else if (Local_301 > 6 || func_137(8192))
	{
		if (!func_137(2.524355E-29f))
		{
			func_278(Local_301.f_10);
			if (func_156(Local_544.f_1366))
			{
				if (!MISC::IS_BIT_SET(Local_544.f_13.f_11.f_158, 0))
				{
					func_279(&(Local_544.f_13));
					func_280(&(Local_544.f_13));
					func_283(func_281(), func_282(), Local_544.f_11, Local_544.f_12, 30000);
				}
				func_284();
				func_285();
			}
		}
		else if (!func_137(1.084202E-19f))
		{
			if (Local_544.f_1316 >= Local_544.f_1315)
			{
				func_43(1.084202E-19f);
			}
			else if (!func_159(&(Local_544.f_1347)))
			{
				func_190(&(Local_544.f_1347), 0);
			}
			else if (func_192(&(Local_544.f_1347)) > 1000)
			{
				func_43(1.084202E-19f);
			}
		}
		else
		{
			func_286();
			func_225(7);
		}
	}
}

void func_102()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	char cVar5[64];
	char cVar13[64];
	int iVar21;
	var uVar22;
	bool bVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;

	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	func_275();
	func_287();
	if (!func_156(Local_544.f_1366))
	{
		func_129(1, 1);
		func_225(8);
		return;
	}
	func_273();
	func_288();
	if (func_289())
	{
		if (func_290())
		{
			if (!func_291())
			{
				Local_544.f_1418 = 6.293543E+08f;
			}
		}
		else if (func_65(8192))
		{
			Local_544.f_1418 = 0.03028275f;
		}
		else
		{
			Local_544.f_1418 = 0;
		}
		func_283(func_281(), func_282(), Local_544.f_11, Local_544.f_12, 30000);
	}
	else if (func_290())
	{
		Local_544.f_1418 = 6.293543E+08f;
		func_283(0, func_282(), 0, 0, 30000);
	}
	else
	{
		func_292();
	}
	if (!func_65(32))
	{
		if (func_293())
		{
			func_294(&(Local_544.f_1039));
			iVar0 = func_295();
			if (func_137(4096))
			{
				GRAPHICS::_ANIMPOSTFX_PLAY_TIMED(func_57(), iVar0);
			}
			else
			{
				GRAPHICS::_ANIMPOSTFX_PLAY_TIMED(func_58(), iVar0);
			}
			if (!func_290() || Local_544.f_9 == -4.537018E+10f)
			{
				func_257(&(Local_544.f_1039), 1);
			}
			func_211(32);
		}
	}
	else if (!func_65(64))
	{
		func_296();
		if (Local_544.f_9 == -4.537018E+10f)
		{
			if (!func_297(Local_544.f_1321))
			{
				func_298();
				iVar1 = 6000;
				if (Local_301.f_12 != 0 || !func_299(Local_544.f_1418))
				{
					iVar1 = 1000;
				}
				if (!func_159(&(Local_544.f_1350)))
				{
					func_207(&(Local_544.f_1350));
				}
				else if (func_192(&(Local_544.f_1350)) > iVar1)
				{
					if (func_300())
					{
						return;
					}
					func_292();
					func_211(64);
					func_225(8);
				}
			}
		}
		else if (((!func_297(Local_544.f_1321) && !func_301()) && !func_302()) && !func_303())
		{
			if (UIAPPS::IS_ANY_UIAPP_RUNNING())
			{
				if (!func_159(&(Local_544.f_1356)))
				{
					func_207(&(Local_544.f_1356));
				}
				else if (func_192(&(Local_544.f_1356)) > 10000)
				{
					func_304();
					func_305(&(Local_544.f_1356));
				}
			}
			else
			{
				func_298();
				if (!func_159(&(Local_544.f_1350)))
				{
					func_207(&(Local_544.f_1350));
				}
				else if (func_192(&(Local_544.f_1350)) > 1000 && !func_297(Local_544.f_1323))
				{
					func_130(0);
					func_211(64);
				}
			}
		}
		else
		{
			if (func_159(&(Local_544.f_1350)))
			{
				func_305(&(Local_544.f_1350));
			}
			if (func_159(&(Local_544.f_1356)))
			{
				func_305(&(Local_544.f_1356));
			}
		}
	}
	else if (!func_65(128))
	{
		func_296();
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT() && !func_62(255))
			{
				CAM::DO_SCREEN_FADE_OUT(250);
				AUDIO::SET_AUDIO_ONLINE_TRANSITION_STAGE("winners_pose");
			}
		}
		else if (func_296() && func_306())
		{
			GRAPHICS::ANIMPOSTFX_STOP(func_57());
			GRAPHICS::ANIMPOSTFX_STOP(func_58());
			if (ENTITY::DOES_ENTITY_EXIST(Global_33) && !ENTITY::IS_ENTITY_DEAD(Global_33))
			{
				if (PED::IS_PED_HOGTIED(Global_33))
				{
					TASK::UNHOGTIE_PED(Global_33, 3, 0, 0, 0, 8f);
				}
				if (PED::GET_PED_IS_GRAPPLING(Global_33))
				{
					iVar2 = PED::_GET_PED_GRAPPLER(Global_33);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2)) && PED::IS_PED_A_PLAYER(iVar2))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
						PED::_SET_PED_GRAPPLE_FLAG(Global_33, 32768, true);
						TASK::CLEAR_PED_TASKS(Global_33, true, false);
					}
				}
				if (PED::GET_PED_IS_BEING_GRAPPLED(Global_33))
				{
					PED::_SET_PED_GRAPPLE_FLAG(Global_33, 4096, true);
				}
				if (Local_301.f_10 == PLAYER::PLAYER_ID() && !func_68(Local_544.f_1436))
				{
					func_307(Local_544.f_1436, ENTITY::GET_ENTITY_HEADING(Global_33));
				}
			}
			if (Local_301.f_12 != 0 || !ENTITY::DOES_ENTITY_EXIST(Local_544.f_1450))
			{
				func_225(8);
				return;
			}
			func_308();
			func_309();
			func_211(128);
		}
	}
	else if (!func_65(512))
	{
		func_309();
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			if (!CAM::IS_SCREEN_FADING_IN())
			{
				if (CAM::DOES_CAM_EXIST(Local_544.f_1449) && !CAM::IS_CAM_ACTIVE(Local_544.f_1449))
				{
					CAM::SET_CAM_ACTIVE(Local_544.f_1449, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_544.f_1450) && !ENTITY::IS_ENTITY_DEAD(Local_544.f_1450))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_544.f_1450, true);
				}
				func_310();
				HUD::_ENABLE_HUD_CONTEXT(3.870794E-14f);
				CAM::DO_SCREEN_FADE_IN(250);
			}
		}
		else
		{
			func_305(&(Local_544.f_1350));
			Local_544.f_1452 = 1500;
			if (!func_311())
			{
				if (Local_301.f_10 != 255)
				{
					bVar3 = func_312();
					Local_544.f_1452 = func_313(bVar3);
					iVar4 = func_314(bVar3);
					func_315(Local_544.f_1450, bVar3, 2, 0, 0, iVar4, 0);
				}
			}
			func_211(512);
		}
	}
	else if (!func_65(1024))
	{
		func_309();
		if (!func_159(&(Local_544.f_1350)))
		{
			StringCopy(&cVar5, func_316(), 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar5))
			{
				StringCopy(&cVar5, MISC::VAR_STRING(2, "FME_SHARD_OUTRO_TITLE_WINNER"), 64);
			}
			StringCopy(&cVar13, func_317(), 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar13))
			{
				cVar13 = { Local_544.f_1440 };
			}
			if (func_137(8192) || func_65(524288))
			{
				func_322(&(Local_544.f_1454), &cVar13, func_318(), func_319(), func_321(func_320(&(Local_544.f_13), 0)), "", "", Local_544.f_1448);
			}
			else if (Local_301.f_10 == 255)
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(func_323()))
				{
					func_322(&(Local_544.f_1454), "", "", MISC::VAR_STRING(2, "FME_SHARD_OUTRO_PRIMARY_EXPIRED"), "", "", "", 4.808429E-35f);
				}
				else
				{
					func_322(&(Local_544.f_1454), "", "", func_323(), "", "", "", 4.808429E-35f);
				}
			}
			else if (Local_301.f_10 == PLAYER::PLAYER_ID())
			{
				func_322(&(Local_544.f_1454), &cVar5, &cVar13, func_321(func_320(&(Local_544.f_13), 0)), "", "", "", Local_544.f_1448);
			}
			else
			{
				func_322(&(Local_544.f_1454), &cVar5, &cVar13, func_324(Local_544.f_1440, Local_544.f_1448, func_320(&(Local_544.f_13), 0)), "", "", "", Local_544.f_1448);
			}
			func_207(&(Local_544.f_1350));
		}
		else
		{
			iVar21 = Local_544.f_1452;
			func_325(&iVar21);
			if (func_326() || (iVar21 > 0 && func_192(&(Local_544.f_1350)) > iVar21))
			{
				AUDIO::SET_AUDIO_ONLINE_TRANSITION_STAGE("photograph");
				GRAPHICS::_ANIMPOSTFX_PLAY_TAG(Local_544.f_1451);
				GRAPHICS::_0xE75CDDEBF618C8FF(Local_544.f_1451);
				func_211(1024);
			}
		}
	}
	else if (!func_65(2048))
	{
		func_309();
		if (GRAPHICS::ANIMPOSTFX_HAS_EVENT_TRIGGERED_BY_STACKHASH(Local_544.f_1451, 2, false, &uVar22))
		{
			bVar23 = true;
		}
		if (bVar23 || func_192(&(Local_544.f_1350)) > 4000)
		{
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			AUDIO::PLAY_SOUND_FRONTEND(func_123(), func_124(), true, 0);
			func_61(&(Local_544.f_1454), 1);
			func_207(&(Local_544.f_1350));
			func_211(2048);
		}
	}
	else if (!func_65(4096))
	{
		func_309();
		if (func_327(&(Local_544.f_1454)) || func_192(&(Local_544.f_1350)) > 8000)
		{
			func_207(&(Local_544.f_1350));
			func_211(4096);
		}
	}
	else if (!func_65(8192))
	{
		func_309();
		if (func_192(&(Local_544.f_1350)) > 5000)
		{
			if (!func_328())
			{
				func_118(&(Local_544.f_1454));
			}
			func_35(func_329());
			func_305(&(Local_544.f_1350));
			func_211(8192);
		}
	}
	else if (!func_65(16384))
	{
		func_309();
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Local_544.f_13.f_11))
		{
			if (Local_544.f_1317 > 0)
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(Local_544.f_13.f_11, "info_value_07", func_330(Local_544.f_1317));
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_544.f_13.f_11, "info_value_07", true);
				Local_544.f_1317 = 0;
			}
			if (Local_544.f_1319 > 0)
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(Local_544.f_13.f_11, "info_visible_08", func_330(Local_544.f_1319));
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_544.f_13.f_11, "info_visible_08", true);
				Local_544.f_1319 = 0;
			}
			if (Local_544.f_1318 > 0)
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(Local_544.f_13.f_11, "info_visible_06", func_330(Local_544.f_1318));
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_544.f_13.f_11, "info_visible_06", true);
				Local_544.f_1318 = 0;
			}
			if (Local_544.f_1320 > 0)
			{
				Local_544.f_1320 = 0;
			}
		}
		if (!func_159(&(Local_544.f_1350)))
		{
			func_207(&(Local_544.f_1350));
		}
		else if (func_192(&(Local_544.f_1350)) > 2000)
		{
			iVar24 = 0;
			iVar25 = 0;
			iVar26 = 0;
			iVar27 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
			if ((!GANG::NETWORK_IS_GANG_ID_VALID(iVar27) || GANG::NETWORK_GET_NUM_GANG_MEMBERS(iVar27) <= 1) || !GANG::NETWORK_IS_GANG_IN_SESSION(iVar27))
			{
				iVar24 = 1;
				if (func_182(512, Local_544.f_1366))
				{
					iVar25++;
				}
				if (func_182(1024, Local_544.f_1366))
				{
					iVar26++;
				}
			}
			else
			{
				iVar30 = 0;
				iVar30 = 0;
				while (iVar30 <= 31)
				{
					iVar28 = PLAYER::INT_TO_PLAYERINDEX(iVar30);
					if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar28) && GANG::_NETWORK_IS_GANG_MEMBER(iVar27, iVar28)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar28))
					{
						iVar29 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar28);
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar29))
						{
							iVar24++;
							if (func_182(512, iVar29))
							{
								iVar25++;
							}
							if (func_182(1024, iVar29))
							{
								iVar26++;
							}
							if ((GANG::NETWORK_IS_GANG_LEADER(iVar28) && iVar28 != PLAYER::PLAYER_ID()) && func_182(1024, iVar29))
							{
								iVar25 = 7;
							}
						}
					}
					iVar30++;
				}
			}
			if (iVar25 > iVar24)
			{
				iVar25 = iVar24;
			}
			if (iVar26 > iVar24)
			{
				iVar26 = iVar24;
			}
			if (!func_331(Local_544.f_1331))
			{
				if (iVar24 > 1)
				{
					Local_544.f_1331 = func_332(MISC::VAR_STRING(2, "FME_PROMPT_RETURN_TO_FREE_ROAM_POSSE", iVar25, iVar24), 439.9228f, 0, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
				}
				else
				{
					Local_544.f_1331 = func_332("FME_PROMPT_RETURN_TO_FREE_ROAM", 439.9228f, 0, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
				}
			}
			if (func_331(Local_544.f_1331))
			{
				if (iVar24 > 1)
				{
					func_333(Local_544.f_1331, MISC::VAR_STRING(2, "FME_PROMPT_RETURN_TO_FREE_ROAM_POSSE", iVar25, iVar24), 1);
				}
				else
				{
					func_333(Local_544.f_1331, "FME_PROMPT_RETURN_TO_FREE_ROAM", 1);
				}
				if (!func_182(512, Local_544.f_1366))
				{
					if (func_334(Local_544.f_1331, 1))
					{
						AUDIO::PLAY_SOUND_FRONTEND(func_125(), func_126(), true, 0);
						func_233(512, Local_544.f_1366);
						func_335(Local_544.f_1331, 0, 1, 1);
					}
				}
			}
			if (!func_182(1024, Local_544.f_1366))
			{
				if (iVar25 >= iVar24 || func_192(&(Local_544.f_1350)) > 62000)
				{
					func_233(1024, Local_544.f_1366);
				}
			}
			else if (iVar26 >= iVar24)
			{
				func_336(&(Local_544.f_1331), 1, 1);
				func_305(&(Local_544.f_1350));
				func_211(16384);
			}
		}
	}
	else if (!func_65(32768))
	{
		if (func_328())
		{
			func_118(&(Local_544.f_1454));
		}
		func_309();
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				AUDIO::SET_AUDIO_ONLINE_TRANSITION_STAGE("fade_to_black");
				CAM::DO_SCREEN_FADE_OUT(250);
			}
		}
		else
		{
			func_211(32768);
			func_225(8);
		}
	}
}

void func_103()
{
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	if (func_337())
	{
		func_225(9);
	}
}

void func_104()
{
	if (func_176(0) && func_177(0) == func_178())
	{
		func_179(0, 0);
	}
}

void func_105()
{
	if (func_137(256))
	{
		func_338(0);
		func_339(256);
	}
}

void func_106(bool bParam0)
{
	if (func_137(512))
	{
		if (Local_544.f_9 == -4.537018E+10f)
		{
		}
		func_340(1, bParam0);
		func_339(512);
	}
}

void func_107()
{
	func_341(4);
	func_341(16);
}

void func_108()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_342(iVar0);
		iVar0++;
	}
	if (func_182(16384, Local_544.f_1366))
	{
		if (func_343())
		{
			func_344();
			func_345(16384, Local_544.f_1366);
		}
	}
	if (func_182(8192, Local_544.f_1366))
	{
		if (!func_346(Global_1295619.f_10))
		{
			func_347(1, 0, 0);
			func_345(8192, Local_544.f_1366);
		}
	}
}

void func_109()
{
	if (func_137(1))
	{
		func_348();
		func_349(0);
		func_339(1);
	}
}

void func_110()
{
	if (func_137(1024))
	{
		func_350(1);
		func_339(1024);
	}
}

void func_111()
{
	if (func_137(2048))
	{
		if (Local_544.f_9 == -4.537018E+10f)
		{
			func_351(0);
		}
		else
		{
			func_352(1);
			LAW::_ENABLE_DISPATCH_LAW_2(true);
			LAW::_ENABLE_DISPATCH_LAW(true);
		}
		func_339(2048);
	}
}

struct<8> func_112(int iParam0)
{
	struct<8> Var0;
	struct<5> Var8;

	if (func_36(&Var8, iParam0) && func_143(&Var8))
	{
		func_144(Var8, -2.894266E+07f, &Var0, 1);
	}
	return Var0;
}

void func_113(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (HUD::TEXT_BLOCK_IS_LOADED(func_353()))
	{
		HUD::_TEXT_BLOCK_DELETE(func_353());
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0) && HUD::TEXT_BLOCK_IS_LOADED(&uParam0))
	{
		HUD::_TEXT_BLOCK_DELETE(&uParam0);
	}
}

void func_114(bool bParam0)
{
	Global_1940072.f_15 = !bParam0;
}

bool func_115()
{
	return true;
}

void func_116(int iParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam0, true, false))
	{
		return;
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
}

void func_117()
{
	if (Global_1072759.f_22933 >= 0f)
	{
		Global_1072759.f_22933 = -1f;
	}
}

void func_118(int iParam0)
{
	var uVar0;

	if (UISTATEMACHINE::UI_STATE_MACHINE_EXISTS(*iParam0))
	{
		uVar0 = *iParam0;
		UISTATEMACHINE::UI_STATE_MACHINE_DESTROY_AND_CLEAR(&uVar0);
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(iParam0);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0->f_3))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_3);
	}
}

bool func_119()
{
	return Global_1072759.f_28644.f_66.f_42 != 0;
}

char* func_120()
{
	return "RDRO_Out_Of_Bounds_Sounds";
}

char* func_121()
{
	return "Toast_On";
}

char* func_122()
{
	return "HUD_Toast_Soundset";
}

char* func_123()
{
	return "photograph";
}

char* func_124()
{
	return "rdro_gamemode_transition_sounds";
}

char* func_125()
{
	return "continue";
}

char* func_126()
{
	return "MP_Leaderboard_Sounds";
}

void func_127()
{
	func_354();
}

void func_128()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_155 - 1))
	{
		if (VOLUME::DOES_VOLUME_EXIST(Local_155[iVar0 /*8*/]))
		{
			VOLUME::DELETE_VOLUME(Local_155[iVar0 /*8*/]);
		}
		func_355(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (VOLUME::DOES_VOLUME_EXIST(Local_155.f_142[iVar0]))
		{
			VOLUME::DELETE_VOLUME(Local_155.f_142[iVar0]);
		}
		iVar0++;
	}
	func_357(func_356(), 1, 1);
	AUDIO::_RELEASE_SOUNDSET(func_358());
	AUDIO::_RELEASE_SHARD_SOUNDS(func_359(), func_358());
	if (VOLUME::DOES_VOLUME_EXIST(Local_155.f_131))
	{
		VOLUME::DELETE_VOLUME(Local_155.f_131);
	}
	func_360(1);
	func_361();
	func_362(0);
	if (!func_137(4096) && !func_137(16384))
	{
		func_363(1, 1);
	}
}

void func_129(bool bParam0, bool bParam1)
{
	func_258(1);
	if (bParam0)
	{
		func_292();
	}
	if (bParam1)
	{
		func_364();
		func_365();
	}
	func_366();
	func_367();
	func_368();
	func_369();
	func_370();
	func_259();
	func_371();
}

void func_130(int iParam0)
{
}

void func_131()
{
	Global_1102813.f_26.f_3348 = { 0f, 0f, 0f };
	Global_1102813.f_26.f_3354 = { 0f, 0f, 0f };
	Global_1102813.f_26.f_3347 = 1;
}

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 18:
			return 7;
		case 15:
			return 10;
		case 16:
			return 8;
		case 17:
			return 9;
		default:
			break;
	}
	return -1;
}

bool func_133(int iParam0)
{
	return Global_1108965.f_775.f_28 == iParam0;
}

void func_134(int iParam0, int iParam1)
{
	if (iParam0 != -1 && Global_1206482.f_1[iParam0 /*4*/].f_2 != iParam1)
	{
		Global_1206482.f_1[iParam0 /*4*/].f_2 = iParam1;
	}
}

void func_135(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 11)
	{
		Global_1108965.f_775.f_5[iParam0] = Global_1295619.f_16;
	}
}

void func_136()
{
	if (Global_1108965.f_775.f_28 != -1)
	{
		Global_1108965.f_775.f_28 = -1;
	}
}

bool func_137(int iParam0)
{
	return func_78(Local_544.f_1368, iParam0);
}

int func_138(int iParam0, var uParam1, struct<2> Param2, bool bParam4)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_73(Param2))
	{
		return 0;
	}
	if (!func_372(Param2) && !func_373(Param2))
	{
		return 0;
	}
	if (bParam4)
	{
		func_374(Param2, 0, 4, 0, 0);
	}
	else
	{
		func_374(Param2, 0, 0, 0, 0);
	}
	func_375(iParam0, Param2);
	if (func_18(iParam0, 64))
	{
		return 1;
	}
	func_251(iParam0, 128);
	func_251(iParam0, 64);
	return 1;
}

int func_139(int iParam0, var uParam1, struct<2> Param2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_73(Param2))
	{
		return 0;
	}
	if (!func_372(Param2) && !func_373(Param2))
	{
		return 0;
	}
	func_374(Param2, 0, 1, 0, 0);
	func_375(iParam0, Param2);
	if (func_18(iParam0, 64))
	{
		return 0;
	}
	func_251(iParam0, 256);
	func_251(iParam0, 64);
	return 1;
}

int func_140(int iParam0, struct<2> Param1, bool bParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_73(Param1))
	{
		return 0;
	}
	if (!func_372(Param1) && !func_373(Param1))
	{
		return 0;
	}
	if (bParam3 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
		if (GANG::NETWORK_IS_GANG_ACTIVE(iVar0) && GANG::NETWORK_GET_NUM_GANG_MEMBERS(iVar0) > 1)
		{
			func_376(1);
		}
	}
	if (func_18(iParam0, 32))
	{
		func_374(Param1, 0, 2, 0, 0);
	}
	else
	{
		func_374(Param1, 0, -1, 0, 0);
	}
	func_375(iParam0, Param1);
	if (func_18(iParam0, 64))
	{
		return 0;
	}
	func_251(iParam0, 64);
	return 1;
}

void func_141()
{
	func_377(2048);
}

int func_142(int iParam0, int iParam1)
{
	if (iParam0 == -4.537018E+10f)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return 0;
	}
	DECORATOR::DECOR_SET_INT(Global_33, "iFmeLastEventPlayed", iParam1);
	return 1;
}

bool func_143(bool bParam0)
{
	bParam0->f_2 = 6.889182E+22f;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_144(vector3 vParam0, int iParam3, var uParam4, float fParam5, char* sParam6, bool bParam7)
{
	vParam0.f_2 = fParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(sParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_145(vector3 vParam0, int iParam3, var uParam4, float fParam5, float* fParam6, bool bParam7)
{
	vParam0.f_2 = fParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(fParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_146(vector3 vParam0, int iParam3, var uParam4, float fParam5, Vector3* vParam6, bool bParam7)
{
	vParam0.f_2 = fParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_147(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5.302326E+22f;
		case 1:
			return 8.819231E+30f;
		case 2:
			return -8.423986E-11f;
		case 3:
			return 2.893486E+20f;
		case 4:
			return -1.396906E+17f;
		case 5:
			return -1629.817f;
		case 6:
			return -4.788236E-29f;
		case 15:
			return -2.762819E+17f;
		case 16:
			return 8.72967E-06f;
		case 17:
			return 1.393353E+14f;
		case 18:
			return -3.120739E-36f;
		case 8:
			return -1.066212E+19f;
		case 10:
			return NaNf;
		case 9:
			return 0.003490584f;
		case 11:
			return 2.547941E+33f;
		case 12:
			return -5.747956E-23f;
		case 13:
			return -7.517295E+37f;
		case 14:
			return 1.365207E+21f;
		case 7:
			return -5.421841E+33f;
		default:
			break;
	}
	return 0;
}

void func_149(var uParam0, int iParam1)
{
	func_378(uParam0, iParam1);
}

void func_150(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (Local_351[iParam1 /*6*/] != iParam0)
	{
		if (iParam0 == 0 && Local_351[iParam1 /*6*/] == 2)
		{
			func_140(Local_544, Local_544.f_7, 1);
		}
		Local_351[iParam1 /*6*/] = iParam0;
	}
}

bool func_151()
{
	return Global_1572887.f_72.f_40 != 1;
}

bool func_152(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		return true;
	}
	return false;
}

bool func_153(int iParam0)
{
	return false;
}

struct<2> func_154()
{
	if (Global_1205789.f_129 <= 0)
	{
		return func_379(0);
	}
	if (Global_1205789.f_130 < 0 || Global_1205789.f_131 == 0)
	{
		return func_379(0);
	}
	return Global_1205789[Global_1205789.f_130 /*4*/].f_1;
}

bool func_155()
{
	return (func_380() != 0 || func_381(1));
}

bool func_156(int iParam0)
{
	return Local_351[iParam0 /*6*/] == 2;
}

bool func_157(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar4 = 0;
	if (iParam0 == 0)
	{
		return false;
	}
	if (Global_1149417.f_3876.f_711 == iParam0)
	{
		return true;
	}
	Global_1149417.f_3876.f_706.f_1 = 0;
	Global_1149417.f_3876.f_706.f_2 = 4.7458E+19f;
	Global_1149417.f_3876.f_706.f_3 = iParam0;
	Global_1149417.f_3876.f_706.f_4 = 0;
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1149417.f_3876.f_706))
	{
		Global_1149417.f_3876.f_706 = Global_1149417.f_2;
	}
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&uVar0, &(Global_1149417.f_3876.f_706)))
	{
		return false;
	}
	Global_1149417.f_3876.f_711 = iParam0;
	iVar4 = 0;
	while (iVar4 < 106)
	{
		iVar2 = func_382(iVar4, 1);
		if (iVar2 == -1)
		{
		}
		else
		{
			iVar1 = iVar2;
			if (iVar1 == 0)
			{
			}
			else
			{
				Global_1149417.f_3876.f_706.f_4 = iVar1;
				Global_1149417.f_3876.f_706.f_2 = -1.865024E+30f;
				if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&uVar0, &(Global_1149417.f_3876.f_706)))
				{
					bVar3 = true;
				}
				else
				{
					bVar3 = false;
				}
				func_383(iVar2, bVar3, bParam1);
				if (!bVar3)
				{
				}
				else
				{
					Global_1149417.f_3876.f_706.f_2 = 2348876f;
					if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&bVar3, &(Global_1149417.f_3876.f_706)))
					{
					}
					else
					{
						bVar3 = true;
					}
					Global_1149417.f_3876.f_2[func_384(iVar2, 1) /*4*/].f_1 = bVar3;
				}
			}
		}
		iVar4++;
	}
	return true;
}

bool func_158()
{
	if (func_137(512))
	{
		return false;
	}
	if (((Local_544.f_9 == -4.537018E+10f && Local_544.f_1 == 16) && func_303()) && !func_137(512))
	{
		func_385();
		return true;
	}
	if (Local_544.f_9 == -4.537018E+10f && func_386(Global_33))
	{
		func_387(&(Local_544.f_1304), 1);
		return true;
	}
	if ((Local_544.f_9 == -4.537018E+10f && func_388(&(Local_544.f_1304))) && func_389(&(Local_544.f_1304)) < 2f)
	{
		return true;
	}
	return false;
}

bool func_159(var uParam0)
{
	return func_390(*uParam0, 1);
}

void func_160(var uParam0, struct<12> Param1, int iParam13)
{
	Global_1956862.f_1565.f_117.f_12 = iParam13;
	func_391(&(Global_1956862.f_1565.f_117), Param1, Param1.f_1);
	func_392(&(Global_1956862.f_1565.f_117), Param1.f_2, Param1.f_3);
	func_393(&(Global_1956862.f_1565.f_117), Param1.f_4, Param1.f_5);
	func_394(&(Global_1956862.f_1565.f_117), Param1.f_6, Param1.f_7);
	func_395(&(Global_1956862.f_1565.f_117), Param1.f_8, Param1.f_9);
	func_396(&(Global_1956862.f_1565.f_117), Param1.f_10, Param1.f_11);
	uParam0->f_8 = 1;
	func_397(uParam0);
}

void func_161(var uParam0, float fParam1, int iParam2, int iParam3)
{
	uParam0->f_10 = 1;
	uParam0->f_54 = fParam1;
	uParam0->f_54.f_1 = iParam2;
	uParam0->f_54.f_2 = iParam3;
}

void func_162(var uParam0, bool bParam1)
{
	if (!bParam1 && (uParam0->f_5 || func_398(2)))
	{
		return;
	}
	uParam0->f_7 = bParam1;
	if (!bParam1)
	{
		return;
	}
	func_397(uParam0);
}

void func_163(var uParam0, int iParam1)
{
	uParam0->f_11 = 1;
	uParam0->f_57 = iParam1;
}

void func_164(var uParam0, int iParam1)
{
	uParam0->f_2 = 1;
	uParam0->f_21 = iParam1;
}

void func_165(var uParam0, struct<2> Param1, bool bParam3, int iParam4)
{
	if (bParam3)
	{
		func_399(uParam0, Param1, iParam4);
		func_168(119);
	}
	else
	{
		Global_1149417.f_4862 = { *uParam0 };
		Global_1149417.f_4862.f_13 = { Param1 };
		func_169(119);
	}
}

void func_166()
{
	bool bVar0;

	bVar0 = false;
	if (func_400(-0.0002099206f, 1, 0, 0) > 0)
	{
		bVar0 = true;
	}
	INVENTORY::INVENTORY_COPY_MP_INVENTORY_TO_MISSION_INVENTORY(true, true, true, true, true, true);
	func_401(1);
	func_402(1);
	if (bVar0)
	{
		func_403(-0.0002099206f, 1, 6.028273E-12f);
		WEAPON::_SET_ALLOW_DUAL_WIELD(Global_33, true);
	}
	if (Local_544.f_1 == 15)
	{
		if (!func_403(1.003582E-31f, 1, 6.028273E-12f))
		{
		}
	}
	func_43(512);
	func_404();
}

bool func_167(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_405(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_406())
	{
		return func_405(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_405(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

int func_168(int iParam0)
{
	if (func_407(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_169(int iParam0)
{
	if (func_408(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_170(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ANNESBURG"):
			return 5;
		case joaat("EMERALD"):
			return 7;
		case joaat("RIGGS"):
			return 3;
		case joaat("RHODES"):
			return 1;
		case joaat("SAINT_DENIS"):
			return 6;
		case joaat("FLATNECK"):
			return 2;
		case joaat("VALENTINE"):
			return 8;
		case joaat("MACFARLANES"):
			return 9;
		case joaat("ARMADILLO"):
			return 10;
		case joaat("BENEDICT_POINT"):
			return 11;
		default:
			break;
	}
	return 0;
}

Vector3 func_171(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 1:
			vVar0.x = 0;
			vVar0.f_1 = 0;
			vVar0.f_2 = 0;
			break;
		case 2:
			vVar0.x = 0;
			vVar0.f_1 = 1;
			vVar0.f_2 = 0;
			break;
		case 3:
			vVar0.x = 0;
			vVar0.f_1 = 2;
			vVar0.f_2 = 0;
			break;
		case 4:
			vVar0.x = 0;
			vVar0.f_1 = 3;
			vVar0.f_2 = 0;
			break;
		case 5:
			vVar0.x = 0;
			vVar0.f_1 = 4;
			vVar0.f_2 = 0;
			break;
		case 6:
			vVar0.x = 0;
			vVar0.f_1 = 5;
			vVar0.f_2 = 0;
			break;
		case 7:
			vVar0.x = 1;
			vVar0.f_1 = 0;
			vVar0.f_2 = 1;
			break;
		case 8:
			vVar0.x = 2;
			vVar0.f_1 = 0;
			vVar0.f_2 = 0;
			break;
		case 9:
			vVar0.x = 24;
			vVar0.f_1 = 0;
			vVar0.f_2 = 1;
			break;
		case 10:
			vVar0.x = 24;
			vVar0.f_1 = 1;
			vVar0.f_2 = 1;
			break;
		case 11:
			vVar0.x = 23;
			vVar0.f_1 = 1;
			vVar0.f_2 = 0;
			break;
		case 12:
			vVar0.x = 3;
			vVar0.f_1 = 0;
			vVar0.f_2 = 1;
			break;
		case 13:
			vVar0.x = 3;
			vVar0.f_1 = 1;
			vVar0.f_2 = 1;
			break;
		case 14:
			vVar0.x = 3;
			vVar0.f_1 = 2;
			vVar0.f_2 = 1;
			break;
		case 15:
			vVar0.x = 3;
			vVar0.f_1 = 3;
			vVar0.f_2 = 1;
			break;
		case 16:
			vVar0.x = 3;
			vVar0.f_1 = 4;
			vVar0.f_2 = 1;
			break;
		case 17:
			vVar0.x = 3;
			vVar0.f_1 = 5;
			vVar0.f_2 = 1;
			break;
		case 18:
			vVar0.x = 3;
			vVar0.f_1 = 6;
			vVar0.f_2 = 1;
			break;
		case 19:
			vVar0.x = 3;
			vVar0.f_1 = 7;
			vVar0.f_2 = 1;
			break;
		default:
			break;
	}
	return vVar0;
}

void func_172(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ANNESBURG"):
			Local_155.f_131 = VOLUME::CREATE_VOLUME_AGGREGATE();
			VOLUME::_ADD_SPHERE_VOLUME_TO_VOLUME_AGGREGATE(Local_155.f_131, 3239.2f, 1553.6f, 57.9f, 0f, 0f, 0f, 85f, 85f, 85f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Local_155.f_131, 2979.708f, 1312.865f, 44.532f, 0f, 0f, -22f, 50f, 150f, 12f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Local_155.f_131, 2905.422f, 1227.519f, 45.69f, 0f, 0f, 38f, 80f, 20f, 12f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Local_155.f_131, 3000.11f, 1407.337f, 44.532f, 0f, 0f, -22f, 16.157f, 69.086f, 12f);
			break;
		case joaat("EMERALD"):
			Local_155.f_131 = VOLUME::CREATE_VOLUME_AGGREGATE();
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Local_155.f_131, 1626.381f, 538.097f, 93.935f, 0f, 0f, 13f, 200f, 30f, 30f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Local_155.f_131, 1529.628f, 457.671f, 90.804f, 0f, 0f, 0f, 24f, 150f, 10f);
			break;
		case joaat("RIGGS"):
			Local_155.f_131 = VOLUME::CREATE_VOLUME_AGGREGATE();
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Local_155.f_131, -962.711f, -633.934f, 75.135f, 0f, 0f, -3f, 120f, 24f, 10f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Local_155.f_131, -1042.875f, -616.398f, 77.44f, 0f, 0f, -26f, 55f, 24f, 10f);
			break;
		case joaat("RHODES"):
			Local_155.f_131 = VOLUME::CREATE_VOLUME_BOX(1297.591f, -1373.736f, 79.649f, 0f, 0f, -40f, 300f, 24f, 25f);
			break;
		case joaat("SAINT_DENIS"):
			Local_155.f_131 = VOLUME::CREATE_VOLUME_AGGREGATE();
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Local_155.f_131, 2645f, -1513f, 53f, 0f, 0f, 0f, 255f, 118f, 54f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Local_155.f_131, 2810f, -1429f, 53f, 0f, 0f, 51f, 215f, 90f, 54f);
			break;
		case joaat("FLATNECK"):
			Local_155.f_131 = VOLUME::CREATE_VOLUME_BOX(-424.097f, -392.14f, 85.137f, 0f, 0f, 27f, 250f, 12f, 15f);
			break;
		case joaat("VALENTINE"):
			Local_155.f_131 = VOLUME::CREATE_VOLUME_AGGREGATE();
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Local_155.f_131, -172.487f, 598.204f, 112.971f, 0f, 0f, 54f, 150f, 30f, 17f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Local_155.f_131, -157.228f, 491.562f, 112.432f, 0f, 0f, -46f, 150f, 25f, 20f);
			break;
		case joaat("MACFARLANES"):
			Local_155.f_131 = VOLUME::CREATE_VOLUME_AGGREGATE();
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Local_155.f_131, -2480.622f, -2453.685f, 61.059f, 0f, 0f, 21f, 30f, 125f, 15f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Local_155.f_131, -2349.058f, -2506.292f, 62.516f, 0f, 0f, 2f, 200f, 25f, 15f);
			break;
		case joaat("ARMADILLO"):
			Local_155.f_131 = VOLUME::CREATE_VOLUME_BOX(-3752.055f, -2523.257f, -11.843f, 0f, 0f, 3f, 20f, 250f, 12f);
			break;
		case joaat("BENEDICT_POINT"):
			Local_155.f_131 = VOLUME::CREATE_VOLUME_AGGREGATE();
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Local_155.f_131, -5239.406f, -3484.593f, -22.045f, 0f, 0f, 0f, 20f, 70f, 15f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Local_155.f_131, -5257.606f, -3420.548f, -21.795f, 0f, 0f, -51f, 80f, 20f, 15f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Local_155.f_131, -5236f, -3325.329f, -20.139f, 0f, 0f, -51f, 50f, 150f, 15f);
			break;
	}
}

void func_173(int iParam0)
{
	if (func_409(iParam0))
	{
		return;
	}
	Global_1102813.f_26.f_9 = (Global_1102813.f_26.f_9 || iParam0);
}

void func_174(int iParam0)
{
	if (!func_410(iParam0))
	{
		return;
	}
	Global_1102813.f_26.f_9 = (Global_1102813.f_26.f_9 - (Global_1102813.f_26.f_9 && iParam0));
}

int func_175()
{
	return 10208;
}

bool func_176(int iParam0)
{
	return Global_1148491.f_2[iParam0 /*18*/].f_1 != 0;
}

int func_177(int iParam0)
{
	return Global_1148491.f_2[iParam0 /*18*/].f_1;
}

float func_178()
{
	return -3.364235E+26f;
}

int func_179(int iParam0, bool bParam1)
{
	struct<13> Var0;

	if (!func_411(iParam0, bParam1))
	{
		Var0.f_12 = -1;
		Var0.f_12.f_1 = -1;
		Var0.f_4 = 3;
		Var0.f_5 = iParam0;
		if (bParam1)
		{
			func_412(iParam0);
		}
		return func_414(&Var0, func_413(0, 8));
	}
	return 1;
}

bool func_180(int iParam0)
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

int func_181(int iParam0)
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

bool func_182(int iParam0, int iParam1)
{
	return func_78(Local_351[iParam1 /*6*/].f_1, iParam0);
}

bool func_183(int iParam0)
{
	return func_78(Local_301.f_13, iParam0);
}

bool func_184()
{
	if (func_176(0))
	{
		return true;
	}
	if (!func_415(Local_544.f_2, &(Local_155.f_127), &(Local_13.f_10)))
	{
		return false;
	}
	return true;
}

void func_185(int iParam0)
{
	func_149(&(Local_301.f_13), iParam0);
}

void func_186()
{
}

void func_187(int iParam0)
{
	Local_301 = iParam0;
}

bool func_188()
{
	if (!func_416(1, Local_544.f_1366))
	{
		if (Local_13.f_10 == -1 || (MISC::GET_GAME_TIMER() - Local_13.f_10) > Global_1901671.f_316.f_188)
		{
			if (Local_13.f_10 == -1)
			{
			}
			func_187(8);
		}
		return false;
	}
	else if (!func_417(2))
	{
		if (func_418())
		{
			func_419(2);
			return true;
		}
	}
	return false;
}

bool func_189(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !func_78(Local_351[iVar0 /*6*/].f_1, iParam0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_190(var uParam0, bool bParam1)
{
	if (bParam1 || !func_159(uParam0))
	{
		func_207(uParam0);
	}
}

void func_191()
{
	int iVar0;
	int iVar1;

	if (!func_417(32))
	{
		iVar0 = func_420(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (func_159(&(Local_301.f_1)))
			{
				iVar1 = func_192(&(Local_301.f_1));
				if (iVar1 > 45000)
				{
					func_421(1087373312 /* Float: 6.5f */);
					func_419(32);
					func_422(0, 1);
				}
				else
				{
					func_423();
				}
			}
		}
	}
}

int func_192(var uParam0)
{
	if (!func_159(uParam0))
	{
		return 0;
	}
	if (func_424(uParam0))
	{
		return uParam0->f_2;
	}
	return func_425(uParam0->f_1);
}

int func_193()
{
	return 10000;
}

int func_194(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0) && Local_351[iVar2 /*6*/] >= iParam0)
		{
			iVar1++;
		}
		iVar2++;
	}
	return iVar1;
}

void func_195(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_426(uParam0, 1);
	func_427(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_196()
{
	return 3000;
}

bool func_197()
{
	return true;
}

void func_198()
{
	if (!func_159(&(Local_301.f_4)))
	{
		func_190(&(Local_301.f_4), 0);
	}
}

void func_199(bool bParam0, int iParam1)
{
	if (!bParam0 && !func_428(2, 30))
	{
		return;
	}
	func_430(func_429(iParam1));
}

void func_200(bool bParam0)
{
	int iVar0;

	if (!bParam0 && !func_428(2, 60))
	{
		return;
	}
	Local_301.f_14++;
	iVar0 = func_194(2);
	Local_301.f_15 = (Local_301.f_15 + iVar0);
}

void func_201()
{
	func_432(func_431(0));
	func_433(0);
	func_422(0, 0);
	func_434(0, "MOVING");
	func_421(4f);
}

void func_202()
{
	func_200(1);
	func_435();
	func_187(6);
}

void func_203(bool bParam0)
{
	int iVar0;

	if (!func_183(64))
	{
		if (Local_544.f_1421 == -0.02932728f && (Local_544.f_9 == -0.02932728f || Local_544.f_9 == 1020553f))
		{
			iVar0 = func_436(2);
			if (iVar0 <= 1)
			{
				func_185(64);
				if (bParam0)
				{
					func_185(128);
				}
			}
		}
		else if ((Local_544.f_1421 == 6.258238E+27f && Local_544.f_9 == -0.02932728f) && Local_544.f_3 == 1.035446E+14f)
		{
			func_185(64);
			if (bParam0)
			{
				func_185(128);
			}
		}
	}
}

void func_204()
{
	if (Local_544.f_9 == -4.537018E+10f)
	{
		return;
	}
	if (Local_544.f_13.f_11.f_2 == 0)
	{
		return;
	}
	if (func_320(&(Local_544.f_13), 0) > 0f && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_544.f_13.f_244[0 /*23*/].f_14))
	{
		func_437(Local_544.f_13.f_244[0 /*23*/].f_14);
	}
}

bool func_205()
{
	func_438();
	func_439();
	func_440();
	func_441();
	return false;
}

int func_206()
{
	if (!func_159(&(Local_301.f_4)))
	{
		return 0;
	}
	return func_192(&(Local_301.f_4));
}

void func_207(var uParam0)
{
	func_195(uParam0, 0);
}

void func_208()
{
	if (Local_544.f_9 == -4.537018E+10f)
	{
		if (Local_301.f_12 != 1 && Local_301.f_12 != 4)
		{
			func_442();
			func_430(0);
		}
	}
	else
	{
		func_442();
		if (func_183(2048))
		{
			func_430(0);
		}
	}
}

bool func_209()
{
	return func_423();
}

bool func_210()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) <= 4);
}

void func_211(int iParam0)
{
	func_149(&(Local_544.f_1369), iParam0);
}

void func_212(int iParam0)
{
	func_443(&(Local_544.f_1369), iParam0);
}

bool func_213()
{
	switch (Local_544.f_1)
	{
		case 15:
			return true;
		case 16:
			return true;
		case 17:
			return true;
		case 1:
			return func_444();
		default:
			break;
	}
	return false;
}

void func_214()
{
	Global_1149417.f_5568.f_22 = MISC::GET_FRAME_COUNT();
}

bool func_215()
{
	switch (Local_544.f_1)
	{
		case 12:
			return true;
		case 8:
			return true;
		case 9:
			return true;
		case 10:
			return true;
		case 11:
			return true;
		case 13:
			return true;
		case 14:
			return true;
		case 7:
			return true;
		default:
			break;
	}
	return false;
}

void func_216(int iParam0)
{
	if (!func_445(Global_1149417.f_5568.f_97, iParam0))
	{
		func_149(&(Global_1149417.f_5568.f_97), iParam0);
	}
}

bool func_217(int iParam0)
{
	switch (Local_544.f_1)
	{
		case 16:
		case 17:
			if (iParam0 == 0)
			{
				return true;
			}
			break;
		case 1:
			return func_446(iParam0);
	}
	return false;
}

void func_218(int iParam0)
{
	if (!func_447(iParam0))
	{
		return;
	}
	Global_1149417.f_5701.f_10[iParam0] = MISC::GET_FRAME_COUNT();
}

int func_219()
{
	return Global_1108965.f_34.f_612;
}

void func_220(int iParam0, struct<2> Param1, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam3)
	{
		if (!func_73(Param1))
		{
			return;
		}
		if (func_448(Param1, 1))
		{
			return;
		}
		if (func_449(Param1))
		{
			return;
		}
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	func_450(iVar0);
	if (Global_1108965.f_34.f_353[iVar0 /*6*/] && Global_1108965.f_34.f_353[iVar0 /*6*/].f_5 == -1)
	{
		return;
	}
	if (!func_373(Param1) || !bParam3)
	{
		Global_1108965.f_34.f_353[iVar0 /*6*/] = 1;
		Global_1108965.f_34.f_353[iVar0 /*6*/].f_1 = iParam0;
		Global_1108965.f_34.f_353[iVar0 /*6*/].f_5 = 5;
		Global_1108965.f_34.f_353[iVar0 /*6*/].f_4 = Global_1295619.f_16;
		if (bParam4)
		{
			Global_1287258[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/].f_66 = 1;
		}
		if (bParam3)
		{
			Global_1108965.f_34.f_353[iVar0 /*6*/].f_2 = { Param1 };
		}
		Global_1108965.f_34.f_546[iVar0 /*2*/] = { func_451(iParam0) };
	}
	else
	{
		Global_1108965.f_34.f_353[iVar0 /*6*/] = 1;
		Global_1108965.f_34.f_353[iVar0 /*6*/].f_1 = iParam0;
		Global_1108965.f_34.f_353[iVar0 /*6*/].f_2 = { Param1 };
		Global_1108965.f_34.f_353[iVar0 /*6*/].f_5 = -1;
		Global_1108965.f_34.f_353[iVar0 /*6*/].f_4 = Global_1295619.f_16;
		Global_1108965.f_34.f_546[iVar0 /*2*/] = { func_451(iParam0) };
		if (bParam4)
		{
			Global_1287258[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/].f_66 = 1;
		}
	}
	if (Global_1108965.f_34[iVar0 /*11*/].f_6)
	{
		func_452(iVar0);
	}
}

void func_221(bool bParam0)
{
	if (bParam0)
	{
		func_453(1);
	}
	func_453(0);
	MISC::SET_BIT(&(Global_1958621.f_1), 0);
}

void func_222(int iParam0)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 59:
			func_454(iParam0);
			break;
		case 3:
			func_455(iParam0);
			break;
	}
}

void func_223(int iParam0)
{
	struct<10> Var0;
	int iVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 12))
	{
		return;
	}
	iVar12 = Var0.f_5;
	if (Var0.f_4 == -1)
	{
		return;
	}
	if ((iVar12 == -4.574957E+34f && func_456(&(Local_544.f_1396))) && func_457(&(Local_544.f_1396), &Var0))
	{
		func_458(&(Local_544.f_1396));
		Local_544.f_1316++;
		Local_544.f_1317 = (Local_544.f_1317 + Var0.f_8);
		Local_544.f_1319 = (Local_544.f_1319 + Var0.f_6);
		if (Var0.f_8 > 0)
		{
			if (func_46(Local_544.f_1, Local_544.f_3, &fVar13))
			{
				func_459(func_47(-4.099351E-30f, fVar13), Var0.f_8);
			}
		}
	}
	if ((iVar12 == -3.880084E-36f && func_456(&(Local_544.f_1400))) && func_457(&(Local_544.f_1400), &Var0))
	{
		func_458(&(Local_544.f_1400));
		Local_544.f_1316++;
		Local_544.f_1317 = (Local_544.f_1317 + Var0.f_8);
		Local_544.f_1319 = (Local_544.f_1319 + Var0.f_6);
		if (Var0.f_8 > 0)
		{
			if (func_46(Local_544.f_1, Local_544.f_3, &fVar14))
			{
				func_459(func_47(-4.099351E-30f, fVar14), Var0.f_8);
			}
		}
	}
	if ((iVar12 == 7321.754f && func_456(&(Local_544.f_1404))) && func_457(&(Local_544.f_1404), &Var0))
	{
		func_458(&(Local_544.f_1404));
		Local_544.f_1316++;
		Local_544.f_1317 = (Local_544.f_1317 + Var0.f_8);
		Local_544.f_1319 = (Local_544.f_1319 + Var0.f_6);
		if (Var0.f_8 > 0)
		{
			if (func_46(Local_544.f_1, Local_544.f_3, &fVar15))
			{
				func_459(func_47(-4.099351E-30f, fVar15), Var0.f_8);
			}
		}
	}
	if ((((((((iVar12 == -5.652986E+27f || iVar12 == 2.999697E+13f) || iVar12 == -6.722573E+13f) || iVar12 == -5.838401E+29f) || iVar12 == -398261.8f) || iVar12 == 3.938424E+11f) || iVar12 == 2.075582E+16f) || iVar12 == -3.294948E-05f) || ((iVar12 == -1.098954E+30f && func_456(&(Local_544.f_1408))) && func_457(&(Local_544.f_1408), &Var0)))
	{
		func_458(&(Local_544.f_1408));
		Local_544.f_1316++;
	}
	if (((iVar12 != 0 && iVar12 == Local_544.f_1416) && func_456(&(Local_544.f_1412))) && func_457(&(Local_544.f_1412), &Var0))
	{
		func_458(&(Local_544.f_1412));
		Local_544.f_1316++;
		Local_544.f_1318 = (Local_544.f_1318 + Var0.f_9);
		if (Var0.f_9 > 0)
		{
			if (func_46(Local_544.f_1, Local_544.f_3, &fVar16))
			{
				func_459(func_47(5.997336E+16f, fVar16), Var0.f_9);
			}
		}
	}
}

void func_224()
{
	func_460();
	func_461();
	func_225(Local_301);
}

void func_225(int iParam0)
{
	Local_544.f_10 = iParam0;
}

void func_226()
{
	if (!func_428(1, 30))
	{
		return;
	}
	func_52();
}

bool func_227(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;

	iVar0 = 1;
	HUD::TEXT_BLOCK_REQUEST(func_353());
	if (!HUD::TEXT_BLOCK_IS_LOADED(func_353()))
	{
		iVar0 = 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		HUD::TEXT_BLOCK_REQUEST(&uParam0);
		if (!HUD::TEXT_BLOCK_IS_LOADED(&uParam0))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

char[] func_228(bool bParam0)
{
	if (!bParam0)
	{
		return "script@mp@endflow@endcelebration@FME@Female";
	}
	return "script@mp@endflow@endcelebration@FME@Male";
}

char* func_229()
{
	return "LIVE";
}

bool func_230(var uParam0, char* sParam1, char* sParam2)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
		{
			return true;
		}
	}
	else
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true) && !ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
	return false;
}

bool func_231(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return false;
	}
	UISTATEMACHINE::_UIFLOWBLOCK_ENTER(*uParam0, uParam0->f_1);
	if (!UISTATEMACHINE::UI_STATE_MACHINE_EXISTS(*uParam0))
	{
		UISTATEMACHINE::UI_STATE_MACHINE_CREATE(*uParam0, *uParam0);
	}
	return true;
}

bool func_232()
{
	int iVar0;

	iVar0 = 1;
	STREAMING::REQUEST_MODEL(func_462(), false);
	if (!STREAMING::HAS_MODEL_LOADED(func_462()))
	{
		iVar0 = 0;
	}
	if (!AUDIO::PREPARE_SOUNDSET(func_358(), false) || !AUDIO::PREPARE_SOUND(func_359(), func_358(), -2))
	{
		iVar0 = 0;
	}
	if (Local_155.f_121 != 0)
	{
		STREAMING::REQUEST_MODEL(Local_155.f_121, false);
		if (!STREAMING::HAS_MODEL_LOADED(Local_155.f_121))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_233(int iParam0, int iParam1)
{
	func_149(&(Local_351[iParam1 /*6*/].f_1), iParam0);
}

bool func_234()
{
	int iVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;

	if (!func_416(1, Local_544.f_1366))
	{
		iVar0 = func_420(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_423();
			func_463();
			if (VEHICLE::_HAS_TRAIN_LOADED(iVar0))
			{
				fVar1 = func_464(func_170(Local_544.f_2));
				if (fVar1 != 0f)
				{
					VEHICLE::SET_TRAIN_OFFSET_FROM_STATION(iVar0, fVar1);
				}
				iVar9 = VEHICLE::_GET_TRAIN_CARRIAGE_TRAILER_NUMBER(iVar0);
				func_465();
				iVar10 = 0;
				iVar10 = 0;
				while (iVar10 <= (iVar9 - 1))
				{
					iVar2 = VEHICLE::GET_TRAIN_CARRIAGE(iVar0, iVar10);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
					{
						if (func_466(ENTITY::GET_ENTITY_MODEL(iVar2), &vVar3, &vVar6))
						{
							func_467(iVar10, 1);
							vVar6.f_2 = (vVar6.z + (vVar3.z * 1056964608));
							Local_155[iVar10 /*8*/] = VOLUME::CREATE_VOLUME_BOX(0f, 0f, 0f, 0f, 0f, 0f, vVar3);
							if (VOLUME::DOES_VOLUME_EXIST(Local_155[iVar10 /*8*/]))
							{
								PED::_ATTACH_VOLUME_TO_ENTITY(Local_155[iVar10 /*8*/], iVar2, vVar6, 0f, 0f, 0f, 2, true);
							}
						}
						Local_155[iVar10 /*8*/].f_1 = VOLUME::CREATE_VOLUME_SPHERE(0f, 0f, 0f, 0f, 0f, 0f, 30f, 50f, 10f);
						if (VOLUME::DOES_VOLUME_EXIST(Local_155[iVar10 /*8*/].f_1))
						{
							PED::_ATTACH_VOLUME_TO_ENTITY(Local_155[iVar10 /*8*/].f_1, iVar2, 0f, 0f, 0f, 0f, 0f, 0f, 2, true);
						}
					}
					iVar10++;
				}
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_422(0, 1);
				}
				func_468(1);
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_235()
{
}

void func_236()
{
	func_226();
	func_469();
	func_470();
	func_471();
	func_472();
	func_473();
	func_474();
	func_275();
	func_475();
	if (Local_544.f_9 != -4.537018E+10f)
	{
		func_476();
		func_477();
	}
	else
	{
		func_478();
	}
	func_479();
}

void func_237()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	struct<8> Var5;
	struct<8> Var13;
	struct<8> Var21;
	struct<8> Var29;
	char cVar37[64];

	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	if (!func_156(Local_544.f_1366))
	{
		bVar0 = true;
		if (Local_544.f_9 == -4.537018E+10f && Local_351[Local_544.f_1366 /*6*/] == 1)
		{
			bVar0 = false;
		}
		func_129(1, bVar0);
		return;
	}
	if (func_159(&(Local_301.f_1)))
	{
		iVar1 = func_192(&(Local_301.f_1));
		iVar2 = (Local_544.f_1302 - iVar1);
		iVar3 = (iVar2 / 1000);
		if (iVar3 < 21)
		{
			func_250();
		}
		if (func_480())
		{
			func_481(&(Local_544.f_1039), iVar2, 0, -1, 0);
			if (iVar3 < 4)
			{
				if (!func_65(16))
				{
					func_211(16);
					GRAPHICS::ANIMPOSTFX_PLAY(func_56());
					func_482(&(Local_544.f_1294));
				}
				if (iVar3 < 1)
				{
					iVar3 = 1;
				}
			}
		}
	}
	if (!func_297(Local_544.f_1322))
	{
		func_483(0, "", -1, 0);
	}
	if (((func_65(16) || !func_484(255)) || !ENTITY::DOES_ENTITY_EXIST(Global_33)) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		func_483(0, "", -1, 0);
	}
	else if (((func_68(Local_544.f_1430) || (func_68(Local_544.f_1433) && func_485(Global_34, Local_544.f_1430) <= Local_544.f_1327)) || (!func_68(Local_544.f_1433) && func_485(Global_34, Local_544.f_1433) <= Local_544.f_1327)) || !func_486(Local_544.f_1))
	{
		if (Local_544.f_1300 != 4)
		{
			if (Local_544.f_9 == -4.537018E+10f)
			{
				sVar4 = func_487();
				if (MISC::IS_STRING_NULL_OR_EMPTY(sVar4))
				{
					func_483(4, MISC::VAR_STRING(10, "FME_OBJECTIVE_WAIT_POSSE_VERSUS", &(Local_544.f_1372)), -1, 0);
				}
				else
				{
					func_483(4, sVar4, -1, 0);
				}
			}
			else
			{
				Var5 = { Local_544.f_1380 };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var5))
				{
					Var5 = { Local_544.f_1372 };
				}
				if (func_65(1048576))
				{
					func_483(4, MISC::VAR_STRING(2, "FME_OBJECTIVE_WAIT_ST"), -1, 0);
				}
				else if (Local_544.f_1 == 1)
				{
					func_483(4, MISC::VAR_STRING(10, "FME_OBJECTIVE_WAIT_CHALLENGES", &Var5), -1, 0);
				}
				else
				{
					func_483(4, MISC::VAR_STRING(10, "FME_OBJECTIVE_WAIT", &Var5), -1, 0);
				}
			}
		}
	}
	else if ((func_137(131072) && !func_137(1048576)) && func_331(Local_544.f_1330))
	{
		if (Local_544.f_1300 != 2)
		{
			func_483(2, MISC::VAR_STRING(10, "FME_OBJECTIVE_FAST_TRAVEL_POSSE_VERSUS", &(Local_544.f_1372)), 7500, 0);
			func_43(1048576);
		}
	}
	else if (Local_544.f_1300 != 3)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_488()))
		{
			func_483(3, func_488(), -1, 0);
		}
		else if (Local_544.f_9 == -4.537018E+10f)
		{
			func_483(3, "FME_OBJECTIVE_ENTER_AREA_POSSE_VERSUS", -1, 0);
		}
		else
		{
			func_483(3, "FME_OBJECTIVE_ENTER_AREA", -1, 0);
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Local_544.f_1359))
	{
		if (!func_68(Local_544.f_1430) && func_486(Local_544.f_1))
		{
			func_489(&(Local_544.f_1359));
		}
	}
	if (!func_480())
	{
		return;
	}
	if (!func_137(2))
	{
		if ((((((func_48(func_490(5.133143E-24f)) >= func_491() || Local_544.f_9 != -0.02932728f) || Local_544.f_9 != 1020553f) || func_492() == 1) || func_492() == 2) || !GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))) || GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) < 2)
		{
			func_43(2);
		}
		else if (func_493(Local_544.f_1323))
		{
			Var13 = { Local_544.f_1380 };
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
			{
				Var13 = { Local_544.f_1372 };
			}
			Local_544.f_1323 = func_494(MISC::VAR_STRING(10, "FME_HELP_SCORE", &Var13));
			func_459(func_490(5.133143E-24f), 1);
			func_43(2);
		}
	}
	else if (!func_137(4))
	{
		if (Local_544.f_1311 >= func_491())
		{
			func_43(4);
		}
		else if (func_493(Local_544.f_1323))
		{
			Var21 = { func_495(Local_544.f_1, Local_544.f_3) };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var21))
			{
				Local_544.f_1323 = func_494(&Var21);
			}
			func_43(4);
		}
	}
	else if (!func_137(8))
	{
		if (Local_544.f_1311 >= func_491())
		{
			func_43(8);
		}
		else if (func_493(Local_544.f_1323))
		{
			Var29 = { func_496(Local_544.f_1, Local_544.f_3) };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var29))
			{
				Local_544.f_1323 = func_494(&Var29);
			}
			func_43(8);
		}
	}
	else if (!func_137(16))
	{
		if (func_137(8388608) && func_493(Local_544.f_1323))
		{
			StringCopy(&cVar37, func_497(), 64);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar37))
			{
				Local_544.f_1323 = func_494(&cVar37);
			}
			func_43(16);
		}
	}
}

int func_238()
{
	if (Global_1072759.f_28644.f_66.f_42 >= 9)
	{
		return 1;
	}
	return 0;
}

int func_239()
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - Global_1072759.f_28644.f_109);
	if (iVar1 < Global_1901671.f_2.f_39)
	{
		return 0;
	}
	return 1;
}

void func_240()
{
	vector3 vVar0;
	var uVar3;
	int iVar4;

	func_498(1, 0, 0);
	func_63(0);
	func_43(2097152);
	func_499(&vVar0, &uVar3, &iVar4);
	if (!func_68(vVar0) && !iVar4 == -1)
	{
		if ((!func_137(3.85186E-34f) && !func_500(Local_544.f_1, Local_544.f_3)) && func_501(Local_544.f_1, Local_544.f_3))
		{
			func_502(1, 0);
		}
		func_503(vVar0, uVar3, 1);
	}
	else
	{
		func_363(1, 1);
	}
}

bool func_241(float fParam0)
{
	return (Global_1572887.f_72.f_15 && fParam0) != 0;
}

void func_242(int iParam0)
{
	func_504(&(Global_1572887.f_72.f_15), iParam0);
}

void func_243(bool bParam0)
{
	if (Global_1072759.f_28756.f_1 != SCRIPTS::GET_ID_OF_THIS_THREAD() && !bParam0)
	{
		return;
	}
	if (Global_1072759.f_28756.f_1 == 0)
	{
		return;
	}
	func_504(&(Global_1072759.f_28756.f_2), 2);
}

void func_244(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	if (bParam0)
	{
		Global_1072759.f_28644.f_66.f_28 = 1;
		Global_1072759.f_28644.f_66.f_29 = iParam3;
		Global_1072759.f_28644.f_66.f_26 = iParam6;
		Global_1072759.f_28644.f_66.f_27 = iParam8;
		if (bParam7)
		{
			MISC::SET_BIT(&(Global_1072759.f_28644.f_66.f_8), 18);
		}
	}
	else
	{
		Global_1072759.f_28644.f_66.f_30 = 1;
		Global_1072759.f_28644.f_66.f_33 = !bParam1;
		Global_1072759.f_28644.f_66.f_31 = iParam2;
		Global_1072759.f_28644.f_66.f_32 = iParam4;
		Global_1072759.f_28644.f_66.f_35 = iParam5;
		if (MISC::IS_BIT_SET(Global_1072759.f_28644.f_66.f_8, 18))
		{
			MISC::CLEAR_BIT(&(Global_1072759.f_28644.f_66.f_8), 18);
		}
	}
}

void func_245()
{
	float fVar0;
	float fVar1;

	if (Local_544.f_9 != -4.537018E+10f || !func_486(Local_544.f_1))
	{
		return;
	}
	if ((!func_156(Local_544.f_1366) || !func_137(131072)) || func_68(Local_544.f_1430))
	{
		func_505();
		return;
	}
	if ((((!ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33)) || PED::IS_PED_INCAPACITATED(Global_33)) || func_506()) || Global_1915643.f_20644)
	{
		func_505();
		return;
	}
	fVar0 = func_485(Global_34, Local_544.f_1430);
	fVar1 = (Local_544.f_1328 + 1108082688);
	if (Local_544.f_10 > 3)
	{
		if (func_137(262144) || (Local_544.f_1327 > 0f && fVar0 <= fVar1))
		{
			func_339(131072);
			func_505();
			return;
		}
	}
	if (fVar0 < fVar1)
	{
		func_505();
		return;
	}
	if (!func_331(Local_544.f_1330) && !PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		Local_544.f_1330 = func_507("FM_FAST_TRAVEL", -1.068381E+13f, Global_33, 2, 0, 0, 0, 5, 1.6f, 570, 4000, 10, 2f, 0, 8.750548E+22f, 0, 0);
		if (!func_137(524288))
		{
			func_43(524288);
		}
	}
	if (func_331(Local_544.f_1330))
	{
		if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
		{
			if (func_508(Local_544.f_1330, 0))
			{
				func_336(&(Local_544.f_1330), 0, 1);
			}
		}
		else
		{
			if (!func_508(Local_544.f_1330, 0))
			{
				func_335(Local_544.f_1330, 1, 1, 1);
			}
			if (func_509(Local_544.f_1330, 0))
			{
				func_363(1, 1);
				func_43(262144);
			}
		}
		if (Local_544.f_1300 == 2 && func_510(Local_544.f_1322))
		{
			func_511(Local_544.f_1330, 0, 1);
		}
		else
		{
			func_511(Local_544.f_1330, 1, 1);
		}
	}
}

void func_246()
{
	int iVar0;
	char[] cVar1[8];
	vector3 vVar2;

	if (!func_156(Local_544.f_1366))
	{
		return;
	}
	if (Local_544.f_9 != -0.02932728f && Local_544.f_9 != 1020553f)
	{
		return;
	}
	if (func_68(Local_544.f_1433))
	{
		return;
	}
	if (!func_512() > 0f)
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_544.f_1361))
	{
		Local_544.f_1361 = MAP::BLIP_ADD_FOR_RADIUS(-1.288118E+32f, Local_544.f_1433, func_512());
	}
	else
	{
		MAP::SET_BLIP_COORDS(Local_544.f_1361, Local_544.f_1433);
	}
	if (func_159(&(Local_544.f_1341)) && func_192(&(Local_544.f_1341)) > 1500)
	{
		if ((((!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(Local_544.f_1294) && !UISTATEMACHINE::UI_STATE_MACHINE_EXISTS(4.148054E-32f)) && !DATABINDING::DATABINDING_IS_ENTRY_VALID(Local_544.f_1294.f_2)) && !DATABINDING::DATABINDING_IS_ENTRY_VALID(Local_544.f_1294.f_1)) && !GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_513()))
		{
			func_305(&(Local_544.f_1341));
		}
	}
	if ((((!ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33)) || func_62(255)) || func_297(Local_544.f_1321)) || func_159(&(Local_544.f_1341)))
	{
		func_341(4);
		func_514();
		func_258(1);
		return;
	}
	if (func_515())
	{
		func_516(4);
		if (!func_159(&(Local_544.f_1338)))
		{
			AUDIO::PLAY_SOUND_FRONTEND("OOB_start", func_120(), true, 0);
			func_483(5, "FME_OBJECTIVE_ABANDON_LOBBY_WARNING", -1, 0);
			func_207(&(Local_544.f_1338));
		}
		else
		{
			iVar0 = func_193();
			cVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT((iVar0 - func_192(&(Local_544.f_1338)))) * 981668463));
			if (cVar1 < 0)
			{
				cVar1 = 0;
			}
			vVar2 = { Local_544.f_1433 };
			vVar2.f_2 = (vVar2.z + 1092616192);
			func_517(&(Local_544.f_1294), cVar1, vVar2, func_512(), 1, 0, 0, 1, 0);
			if (func_192(&(Local_544.f_1338)) > iVar0)
			{
				func_518();
				func_519(Global_33, 0, 0);
				if (ENTITY::IS_ENTITY_DEAD(Global_33))
				{
					AUDIO::PLAY_SOUND_FRONTEND("OOB_death", func_120(), true, 0);
					func_341(4);
					func_514();
					func_258(1);
				}
			}
		}
	}
	else
	{
		if (Local_544.f_1300 == 5)
		{
			func_207(&(Local_544.f_1341));
			AUDIO::PLAY_SOUND_FRONTEND("OOB_return", func_120(), true, 0);
			if (func_297(Local_544.f_1323))
			{
				UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Local_544.f_1323, false);
			}
			func_483(0, "", -1, 0);
		}
		if (MAP::DOES_BLIP_EXIST(Local_544.f_1360))
		{
			MAP::REMOVE_BLIP(&(Local_544.f_1360));
		}
		func_341(4);
		func_514();
		if (func_65(16))
		{
			func_258(0);
		}
		else
		{
			func_258(1);
		}
	}
}

void func_247()
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;

	if (func_182(65536, Local_544.f_1366))
	{
		return;
	}
	iVar0 = func_520();
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 == -1.197024E-12f)
	{
		return;
	}
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (!WEAPON::IS_PED_CARRYING_WEAPON(Global_33, iVar0))
	{
		return;
	}
	WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Global_33, 0, &Var1);
	WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Global_33, 1, &Var5);
	if (func_521(Var1, Var5))
	{
		func_233(65536, Local_544.f_1366);
	}
}

void func_248()
{
	func_465();
	func_463();
}

void func_249()
{
	if (func_68(Local_544.f_1433))
	{
		return;
	}
	if (Local_544.f_1300 == 5)
	{
		if (func_297(Local_544.f_1323))
		{
			UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Local_544.f_1323, false);
		}
		func_483(0, "", -1, 0);
	}
	func_341(4);
	func_514();
	func_258(0);
}

void func_250()
{
	if (Local_544.f_9 == -4.537018E+10f)
	{
		return;
	}
	if (func_137(8192))
	{
		return;
	}
	if (!func_137(4194304))
	{
		NETWORK::_NETWORK_SESSION_ADD_SESSION_FLAGS(512);
		func_43(4194304);
	}
}

void func_251(int iParam0, int iParam1)
{
	func_149(&(Global_1206482.f_78[iParam0 /*20*/].f_6), iParam1);
}

bool func_252()
{
	return true;
}

void func_253()
{
	Local_544.f_1313 = func_48(func_522(-1.0077E+32f));
}

void func_254()
{
	Local_544.f_1314 = func_48(func_522(-15.68474f));
}

int func_255()
{
	if (Local_544.f_1421 == -0.02932728f && func_183(64))
	{
		func_41(-6.824783E-15f);
		func_52();
		func_256();
		return 1;
	}
	return 0;
}

void func_256()
{
	switch (Local_544.f_1421)
	{
		case joaat("STANDARD"):
		case joaat("STANDARD_SEAMLESS"):
			func_523(0);
			break;
		case 142723591:
		case 1229355466:
			func_524();
			break;
		case -1893775542:
		case joaat("ALL_ALLY_NEUTRAL"):
			func_525();
			break;
		case -1477057661:
		case -1323241207:
			func_523(1);
			break;
		case joaat("ALL_ALLY_STANDARD_SEAMLESS"):
		case joaat("ALL_ALLY_STANDARD"):
			func_526(1);
			break;
	}
}

void func_257(bool bParam0, bool bParam1)
{
	struct<14> Var0;

	if (bParam0->f_2 > 0)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(12, true, false);
		if (bParam1)
		{
			func_294(bParam0);
			func_527();
		}
		func_528(bParam0);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(bParam0->f_6);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(bParam0->f_5);
		HUD::_0xF1E6979C0B779985(&(bParam0->f_4));
		bParam0->f_9 = 0;
		func_529(0);
		func_530(0);
		UIFEED::UI_FEED_CLEAR_CHANNEL(2, true, false);
		Var0.f_11 = -1;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		MISC::COPY_SCRIPT_STRUCT(bParam0, &Var0, 15);
	}
}

void func_258(bool bParam0)
{
	func_531(&(Local_544.f_1294), 1, bParam0);
}

void func_259()
{
	if (MAP::DOES_BLIP_EXIST(Local_544.f_1359))
	{
		MAP::REMOVE_BLIP(&(Local_544.f_1359));
	}
	if (MAP::DOES_BLIP_EXIST(Local_544.f_1360))
	{
		MAP::REMOVE_BLIP(&(Local_544.f_1360));
	}
	if (MAP::DOES_BLIP_EXIST(Local_544.f_1361))
	{
		MAP::REMOVE_BLIP(&(Local_544.f_1361));
	}
}

void func_260()
{
	if (func_156(Local_544.f_1366))
	{
		func_532();
	}
	func_533(Local_544.f_2);
	func_534(3072, 1);
	func_535();
}

void func_261()
{
	int iVar0;

	iVar0 = Local_544.f_1303;
	if (func_159(&(Local_301.f_4)))
	{
		iVar0 = (iVar0 - func_192(&(Local_301.f_4)));
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 < 15000)
	{
		PED::SET_PED_RESET_FLAG(Global_33, 134, true);
	}
	Local_544.f_1301 = iVar0;
}

void func_262()
{
	bool bVar0;
	struct<8> Var1;
	bool bVar9;
	char cVar10[64];
	bool bVar18;
	char cVar19[64];
	int iVar27;
	int iVar28;
	struct<8> Var29;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	int iVar40;

	func_288();
	if (!func_156(Local_544.f_1366))
	{
		bVar0 = true;
		if (Local_544.f_9 == -4.537018E+10f && Local_351[Local_544.f_1366 /*6*/] == 1)
		{
			bVar0 = false;
		}
		func_129(1, bVar0);
		return;
	}
	if (!func_65(2))
	{
		if (func_536())
		{
			func_283(func_281(), func_282(), 0, 0, 30000);
		}
		Var1 = { func_537() };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
			StringCopy(&Var1, func_538(Local_544.f_1372), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(func_539()))
		{
			cVar10 = { func_540(Local_544.f_1, Local_544.f_3) };
		}
		else
		{
			bVar9 = true;
		}
		if (func_183(64))
		{
			iVar27 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
			if (GANG::NETWORK_IS_GANG_ACTIVE(iVar27) && GANG::NETWORK_GET_NUM_GANG_MEMBERS(iVar27) > 1)
			{
				StringCopy(&cVar19, "FME_SHARD_PRIMARY_POSSE_DISBANDED", 64);
				func_211(8);
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(func_541()))
		{
			bVar18 = true;
		}
		if (bVar9 || bVar18)
		{
			if (bVar9 && bVar18)
			{
				Local_544.f_1321 = func_544(&Var1, func_539(), func_541(), func_542(), func_543());
			}
			else if (bVar9)
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
				{
					Local_544.f_1321 = func_545(&Var1, func_539(), func_542(), func_543());
				}
				else
				{
					Local_544.f_1321 = func_544(&Var1, func_539(), &cVar19, func_542(), func_543());
				}
			}
			else if (bVar18)
			{
				Local_544.f_1321 = func_544(&Var1, &cVar10, func_541(), func_542(), func_543());
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
		{
			Local_544.f_1321 = func_545(&Var1, &cVar10, func_542(), func_543());
		}
		else
		{
			Local_544.f_1321 = func_544(&Var1, &cVar10, &cVar19, func_542(), func_543());
		}
		func_211(2);
	}
	else if (!func_65(4))
	{
		if (func_536())
		{
			func_283(func_281(), func_282(), 0, 0, 30000);
		}
		if (!func_297(Local_544.f_1321))
		{
			func_211(4);
		}
	}
	else
	{
		func_283(func_281(), func_282(), 0, 0, 30000);
		if (((Local_544.f_1039.f_2 != 2 || Local_544.f_1039.f_1 != 2) || !UISTATEMACHINE::UI_STATE_MACHINE_EXISTS(2.040361E+17f)) || !DATABINDING::DATABINDING_IS_ENTRY_VALID(Local_544.f_13.f_11.f_2))
		{
			return;
		}
		if (!func_65(8) && func_183(64))
		{
			if (!func_297(Local_544.f_1321) && func_493(Local_544.f_1323))
			{
				iVar28 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
				if (GANG::NETWORK_IS_GANG_ACTIVE(iVar28) && GANG::NETWORK_GET_NUM_GANG_MEMBERS(iVar28) > 1)
				{
					Var29 = { func_537() };
					if (MISC::IS_STRING_NULL_OR_EMPTY(&Var29))
					{
						Var29 = { Local_544.f_1372 };
					}
					Local_544.f_1321 = func_545(&Var29, "FME_SHARD_PRIMARY_POSSE_DISBANDED", 0, 0);
				}
				func_211(8);
			}
		}
		else if (!func_137(32))
		{
			bVar37 = true;
			bVar38 = false;
			func_546(Local_544.f_1359, &bVar37, &bVar38);
			if (Local_544.f_1311 >= func_491() && !bVar38)
			{
				func_43(32);
			}
			else if (!func_297(Local_544.f_1321) && func_493(Local_544.f_1323))
			{
				if (bVar37)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(func_546(Local_544.f_1359, &bVar37, &bVar38)))
					{
						Local_544.f_1323 = func_494(func_546(Local_544.f_1359, &bVar37, &bVar38));
					}
					func_43(32);
				}
			}
		}
		else if (!func_137(128))
		{
			if ((func_48(func_490(-8.761921E+21f)) >= 5 || !func_299(Local_544.f_1418)) || !func_547())
			{
				func_43(64);
				func_43(128);
			}
			else if (!func_137(64) && !func_548(Local_544.f_1))
			{
				func_43(64);
			}
			else if (!func_297(Local_544.f_1321) && func_493(Local_544.f_1323))
			{
				if (!func_137(64))
				{
					Local_544.f_1323 = func_494("FME_HELP_SCOREBOARD_1");
					func_43(64);
				}
				else
				{
					Local_544.f_1323 = func_494("FME_HELP_SCOREBOARD_2");
					func_459(func_490(-8.761921E+21f), 1);
					func_43(128);
				}
			}
		}
		else if (!func_137(65536))
		{
			if (func_48(func_490(1.933278E+25f)) >= func_491())
			{
				func_43(65536);
			}
			else if (!func_548(Local_544.f_1))
			{
				func_43(65536);
			}
			else if ((((func_289() && func_547()) && !func_297(Local_544.f_1321)) && func_493(Local_544.f_1323)) && Local_351[Local_544.f_1366 /*6*/].f_2 > 0f)
			{
				bVar39 = false;
				if (func_282() & 1024 == 1024)
				{
					bVar39 = true;
				}
				if (func_549(bVar39, 1, &iVar40))
				{
					if (!func_159(&(Local_544.f_1335)))
					{
						func_207(&(Local_544.f_1335));
					}
					else if (func_192(&(Local_544.f_1335)) >= 2000)
					{
						Local_544.f_1323 = func_494(MISC::VAR_STRING(10, "FME_HELP_SCORE_DRAW", func_551(PLAYER::GET_PLAYER_NAME(iVar40), func_550(iVar40, 1, -1, 0))));
						func_459(func_490(1.933278E+25f), 1);
						func_43(65536);
					}
				}
				else if (func_159(&(Local_544.f_1335)))
				{
					func_305(&(Local_544.f_1335));
				}
			}
		}
	}
}

void func_263()
{
	if (Local_544.f_9 == -4.537018E+10f)
	{
		return;
	}
	if (func_156(Local_544.f_1366))
	{
		func_516(16);
	}
	else
	{
		func_341(16);
	}
}

void func_264()
{
	if (func_156(Local_544.f_1366))
	{
		func_552(250);
	}
}

void func_265()
{
	int iVar0;
	char[] cVar1[8];
	vector3 vVar2;

	if (!func_156(Local_544.f_1366))
	{
		return;
	}
	if (Local_544.f_9 != -0.02932728f && Local_544.f_9 != 1020553f)
	{
		return;
	}
	if (func_553() == 4 || func_553() == 10)
	{
		return;
	}
	if (func_68(Local_544.f_1430))
	{
		return;
	}
	if (!func_554())
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_544.f_1361))
	{
		Local_544.f_1361 = func_555();
	}
	else
	{
		MAP::SET_BLIP_COORDS(Local_544.f_1361, Local_544.f_1430);
	}
	if (func_159(&(Local_544.f_1341)) && func_192(&(Local_544.f_1341)) > 1500)
	{
		if ((((!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(Local_544.f_1294) && !UISTATEMACHINE::UI_STATE_MACHINE_EXISTS(4.148054E-32f)) && !DATABINDING::DATABINDING_IS_ENTRY_VALID(Local_544.f_1294.f_2)) && !DATABINDING::DATABINDING_IS_ENTRY_VALID(Local_544.f_1294.f_1)) && !GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_513()))
		{
			func_305(&(Local_544.f_1341));
		}
	}
	if ((((!ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33)) || func_62(255)) || func_297(Local_544.f_1321)) || func_159(&(Local_544.f_1341)))
	{
		func_341(4);
		func_514();
		func_258(1);
		return;
	}
	if (func_556())
	{
		func_516(4);
		if (!MAP::DOES_BLIP_EXIST(Local_544.f_1360))
		{
			Local_544.f_1360 = MAP::BLIP_ADD_FOR_COORDS(2.786954E-24f, Local_544.f_1430);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_544.f_1360, "FME_OBJECTIVE_ABANDON_BLIP_NAME");
			MAP::BLIP_ADD_MODIFIER(Local_544.f_1360, 1.231009E-30f);
		}
		else
		{
			MAP::SET_BLIP_COORDS(Local_544.f_1360, Local_544.f_1430);
		}
		if (!func_159(&(Local_544.f_1338)))
		{
			AUDIO::PLAY_SOUND_FRONTEND("OOB_start", func_120(), true, 0);
			func_483(5, "FME_OBJECTIVE_ABANDON_WARNING", -1, 0);
			func_207(&(Local_544.f_1338));
		}
		else
		{
			iVar0 = func_557();
			cVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT((iVar0 - func_192(&(Local_544.f_1338)))) * 981668463));
			if (cVar1 < 0)
			{
				cVar1 = 0;
			}
			vVar2 = { Local_544.f_1430 };
			vVar2.f_2 = (vVar2.z + 1092616192);
			func_517(&(Local_544.f_1294), cVar1, vVar2, Local_544.f_1328, 1, 0, 0, 1, 0);
			if (func_192(&(Local_544.f_1338)) > iVar0)
			{
				func_518();
				func_519(Global_33, 0, 0);
				if (ENTITY::IS_ENTITY_DEAD(Global_33))
				{
					AUDIO::PLAY_SOUND_FRONTEND("OOB_death", func_120(), true, 0);
					func_341(4);
					func_514();
					func_258(1);
				}
			}
		}
	}
	else
	{
		if (Local_544.f_1300 == 5)
		{
			func_207(&(Local_544.f_1341));
			AUDIO::PLAY_SOUND_FRONTEND("OOB_return", func_120(), true, 0);
			if (func_297(Local_544.f_1323))
			{
				UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Local_544.f_1323, false);
			}
			func_483(0, "", -1, 0);
		}
		if (MAP::DOES_BLIP_EXIST(Local_544.f_1360))
		{
			MAP::REMOVE_BLIP(&(Local_544.f_1360));
		}
		func_341(4);
		func_514();
		func_258(1);
	}
}

bool func_266()
{
	return false;
}

void func_267()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = func_48(func_522(-1.0077E+32f));
	iVar0 = (iVar0 - Local_544.f_1313);
	if (iVar0 != Local_351[Local_544.f_1366 /*6*/].f_3)
	{
		Local_351[Local_544.f_1366 /*6*/].f_3 = iVar0;
	}
	iVar1 = func_48(func_522(-15.68474f));
	iVar1 = (iVar1 - Local_544.f_1314);
	if (iVar1 != Local_351[Local_544.f_1366 /*6*/].f_4)
	{
		Local_351[Local_544.f_1366 /*6*/].f_4 = iVar1;
	}
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 <= 8)
	{
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		fVar5 = -1f;
		fVar6 = -1f;
		iVar9 = Local_544.f_1423;
		iVar7 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar9);
		iVar8 = 255;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar7))
		{
			fVar2 = Local_351[iVar9 /*6*/].f_2;
			fVar3 = BUILTIN::TO_FLOAT(Local_351[iVar9 /*6*/].f_3);
			fVar4 = BUILTIN::TO_FLOAT(Local_351[iVar9 /*6*/].f_4);
			iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar7);
			fVar5 = BUILTIN::TO_FLOAT(Local_351[iVar9 /*6*/].f_5);
			fVar6 = BUILTIN::TO_FLOAT(NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar8));
		}
		func_558(&(Local_544.f_13), fVar2, iVar8, &(Local_544.f_1005[iVar9]), !func_156(iVar9), fVar3, fVar4, 0, fVar5, fVar6);
		Local_544.f_1423++;
		if (Local_544.f_1423 >= 32)
		{
			Local_544.f_1423 = 0;
		}
		iVar10++;
	}
	func_559(&(Local_544.f_13));
}

void func_268()
{
	char* sVar0;
	float fVar1;

	if (Local_544.f_9 == -4.537018E+10f || !func_560())
	{
		return;
	}
	if (Local_301.f_11 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_301.f_11))
	{
		if (Local_301.f_11 != Local_544.f_1038)
		{
			if (Local_544.f_1038 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_544.f_1038))
			{
				func_561(Local_544.f_1038);
			}
			if (Local_544.f_1038 == 255)
			{
			}
			Local_544.f_1038 = Local_301.f_11;
			if ((func_156(Local_544.f_1366) && !func_297(Local_544.f_1321)) && !func_65(2097152))
			{
				if (Local_544.f_1038 == PLAYER::PLAYER_ID())
				{
					fVar1 = 27.64779f;
					sVar0 = "FME_GAME_UPDATE_NEW_LEADER_SELF";
				}
				else
				{
					fVar1 = func_550(Local_544.f_1038, 1, -1, 0);
					sVar0 = MISC::VAR_STRING(10, "FME_GAME_UPDATE_NEW_LEADER", func_551(PLAYER::GET_PLAYER_NAME(Local_544.f_1038), fVar1));
				}
				Local_544.f_1325 = func_562(sVar0, fVar1);
			}
		}
		if (Local_544.f_1038 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_544.f_1038))
		{
			func_563(Local_544.f_1038, -2.521588E+12f);
		}
	}
}

void func_269()
{
	if (func_159(&(Local_544.f_1344)) && func_192(&(Local_544.f_1344)) > 120000)
	{
		func_305(&(Local_544.f_1344));
		func_106(0);
		func_54();
	}
}

void func_270()
{
	func_564();
	func_565();
	func_566();
	func_535();
	func_567();
	func_568();
	func_569();
}

bool func_271()
{
	return false;
}

void func_272()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 <= 31)
	{
		fVar0 = 0f;
		fVar1 = 0f;
		fVar2 = 0f;
		fVar3 = -1f;
		fVar4 = -1f;
		iVar5 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar7);
		iVar6 = 255;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar5))
		{
			fVar0 = Local_351[iVar7 /*6*/].f_2;
			fVar1 = BUILTIN::TO_FLOAT(Local_351[iVar7 /*6*/].f_3);
			fVar2 = BUILTIN::TO_FLOAT(Local_351[iVar7 /*6*/].f_4);
			iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar5);
			fVar3 = BUILTIN::TO_FLOAT(Local_351[iVar7 /*6*/].f_5);
			fVar4 = fVar1;
		}
		func_558(&(Local_544.f_13), fVar0, iVar6, &(Local_544.f_1005[iVar7]), !func_156(iVar7), fVar1, fVar2, 0, fVar3, fVar4);
		iVar7++;
	}
	func_559(&(Local_544.f_13));
}

void func_273()
{
	if (Local_544.f_9 == -4.537018E+10f)
	{
		return;
	}
	VOICE::_0x1C38C3577901AF1F();
	func_570();
}

void func_274()
{
	if (!func_156(Local_544.f_1366))
	{
		func_129(1, 1);
		return;
	}
	func_288();
	func_283(func_281(), func_282(), Local_544.f_11, Local_544.f_12, 30000);
}

void func_275()
{
	if (!func_571(2, -1))
	{
		return;
	}
	if ((func_572() != 4 && func_572() != 10) && func_572() != 0)
	{
		return;
	}
	func_573();
}

bool func_276()
{
	return func_574(256);
}

void func_277()
{
	func_575(128);
}

int func_278(int iParam0)
{
	if (iParam0 == 255)
	{
		return 0;
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	StringCopy(&(Local_544.f_1440), func_576(iParam0), 64);
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		Local_544.f_1448 = 4.808429E-35f;
	}
	else
	{
		Local_544.f_1448 = func_550(iParam0, 1, -1, 0);
	}
	return 1;
}

void func_279(bool bParam0)
{
	bParam0->f_981 = 1;
}

void func_280(bool bParam0)
{
	bParam0->f_982 = 1;
}

int func_281()
{
	return func_577();
}

int func_282()
{
	return 32769;
}

void func_283(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;

	Local_544.f_11 = iParam2;
	Local_544.f_12 = iParam3;
	fVar0 = 3.661866E-19f;
	fVar1 = 4.808429E-35f;
	fVar2 = 4.465091E-08f;
	fVar3 = 4.808429E-35f;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	iVar7 = 0;
	if (Local_544.f_1421 == -0.02932728f)
	{
		fVar0 = 4.808429E-35f;
		fVar1 = -1.405739E-29f;
		fVar2 = 4.465091E-08f;
		fVar3 = -1.405739E-29f;
		if (!MISC::IS_BIT_SET(Local_544.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_544.f_13.f_11.f_159), 16);
		}
	}
	else if (func_578())
	{
		fVar2 = 3.661866E-19f;
		fVar3 = -1.405739E-29f;
		fVar0 = 27.64779f;
		fVar1 = -1.405739E-29f;
		if (!MISC::IS_BIT_SET(Local_544.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_544.f_13.f_11.f_159), 16);
		}
	}
	else if (func_579())
	{
		fVar2 = 3.661866E-19f;
	}
	if (Local_544.f_1 == 8)
	{
		fVar0 = 4.808429E-35f;
		fVar1 = -1.405739E-29f;
		fVar2 = 4.465091E-08f;
		fVar3 = -1.405739E-29f;
		if (!MISC::IS_BIT_SET(Local_544.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_544.f_13.f_11.f_159), 16);
		}
	}
	else if (Local_544.f_1 == 7)
	{
		fVar0 = -3.387027E+11f;
		fVar2 = -3.387027E+11f;
		if (!MISC::IS_BIT_SET(Local_544.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_544.f_13.f_11.f_159), 16);
		}
	}
	else if (Local_544.f_1 == 14)
	{
		iVar4 = -7.879672E-11f;
		iVar5 = -1.101616E-25f;
		iVar6 = -7.879672E-11f;
		iVar7 = -1.101616E-25f;
		if (!MISC::IS_BIT_SET(Local_544.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_544.f_13.f_11.f_159), 16);
		}
	}
	else if (Local_544.f_1 == 13)
	{
		iVar4 = 27.64779f;
		iVar5 = 27.64779f;
		iVar6 = 27.64779f;
		iVar7 = 27.64779f;
		if (!MISC::IS_BIT_SET(Local_544.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_544.f_13.f_11.f_159), 16);
		}
	}
	else if (Local_544.f_1 == 6 || Local_544.f_1 == 5)
	{
		if ((func_320(&(Local_544.f_13), 0) > 0f && Local_544.f_13.f_244[0 /*23*/].f_14 != 255) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_544.f_13.f_244[0 /*23*/].f_14))
		{
			if (Local_544.f_13.f_244[0 /*23*/].f_14 == PLAYER::PLAYER_ID())
			{
				if ((((func_320(&(Local_544.f_13), 1) > 0f && Local_544.f_13.f_244[1 /*23*/].f_14 != 255) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_544.f_13.f_244[1 /*23*/].f_14)) && GANG::_NETWORK_IS_IN_MY_GANG(Local_544.f_13.f_244[1 /*23*/].f_14)) && !func_580(Local_544.f_13.f_244[1 /*23*/].f_14, 1))
				{
					fVar2 = 3.661866E-19f;
				}
			}
			else if (GANG::_NETWORK_IS_IN_MY_GANG(Local_544.f_13.f_244[0 /*23*/].f_14) && !func_580(Local_544.f_13.f_244[0 /*23*/].f_14, 1))
			{
				fVar2 = 3.661866E-19f;
			}
		}
	}
	uVar8 = 1;
	switch (Local_544.f_1418)
	{
		case joaat("TIMER"):
			func_481(&(Local_544.f_1039), iParam0, 0, iParam4, func_581());
			break;
		case 1310067901:
			func_582(&(Local_544.f_1039), &(Local_544.f_13), &uVar8, iParam1, 1);
			break;
		case joaat("LEADERBOARD"):
			func_582(&(Local_544.f_1039), &(Local_544.f_13), &uVar8, iParam1 | 256, 1);
			break;
		case -2065086408:
			func_583(&(Local_544.f_1039), &(Local_544.f_13), &uVar8, iParam0, 0, iParam4, func_581(), iParam1 | 2048, fVar0, fVar2, fVar1, fVar3, 1);
			break;
		case 1619021308:
			func_584(&(Local_544.f_1039), &(Local_544.f_13), &uVar8, iParam0, 0, iParam4, func_581(), iParam1, fVar0, fVar2, fVar1, fVar3, 1);
			break;
		case 524681:
			func_585(&(Local_544.f_1039), &(Local_544.f_1054), iParam0, 0, iParam4, func_581(), Local_544.f_1293, 0, 0, 0, 0);
			break;
		case -1828147615:
			func_586(&(Local_544.f_1039), &(Local_544.f_1054), &(Local_544.f_13), &uVar8, iParam0, 0, iParam4, func_581(), 2.087847E-24f, 0, iParam1, fVar0, fVar2, fVar1, fVar3, 1);
			break;
		case 227643027:
			func_587(&(Local_544.f_1039), &(Local_544.f_1054), &(Local_544.f_13), iParam0, &uVar8, 0, iParam4, func_581(), 2.087847E-24f, 0, 0, 1, 0, iParam1, 1, 3.661866E-19f, 4.465091E-08f, 4.808429E-35f, 4.808429E-35f, iVar4, iVar5, iVar6, iVar7);
			break;
		case 1086838518:
			func_582(&(Local_544.f_1039), &(Local_544.f_13), &uVar8, iParam1, 1);
			func_585(&(Local_544.f_1039), &(Local_544.f_1054), iParam0, 0, iParam4, func_581(), Local_544.f_1293, 0, 0, 0, 0);
			break;
	}
}

void func_284()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	float fVar7;
	bool bVar8;
	struct<5> Var9;
	vector3 vVar14;

	if (Local_544.f_9 == -4.537018E+10f)
	{
		return;
	}
	iVar0 = Local_301.f_10;
	if ((func_183(256) && !func_492() == 2) || Local_544.f_1 == 10)
	{
		iVar1 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
		if (GANG::NETWORK_IS_GANG_ACTIVE(iVar1))
		{
			iVar2 = GANG::NETWORK_GET_GANG_LEADER(iVar1);
			if (iVar2 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
			{
				iVar0 = iVar2;
			}
		}
		else
		{
			iVar0 = PLAYER::PLAYER_ID();
		}
	}
	if (iVar0 == 255)
	{
		iVar0 = PLAYER::PLAYER_ID();
	}
	if (iVar0 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		iVar3 = PLAYER::GET_PLAYER_PED(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			if (!func_588())
			{
				vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar3, false, false) };
			}
			else
			{
				vVar4 = { ENTITY::GET_ENTITY_COORDS(Global_33, false, false) };
			}
			fVar7 = 0f;
			bVar8 = true;
			if (!func_589(&vVar4, &fVar7, &bVar8))
			{
				if (((func_36(&Var9, Local_544.f_1) && func_44(&Var9)) && func_45(&Var9, Local_544.f_2)) && func_590(&Var9))
				{
					func_146(Var9, 5.3786E+35f, &vVar4, 1);
					func_145(Var9, -1.524697E+32f, &fVar7, 1);
				}
			}
			Local_544.f_1436 = { vVar4 };
			Local_544.f_1450 = PED::CLONE_PED(iVar3, false, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(Local_544.f_1450))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_544.f_1450))
				{
					PED::RESURRECT_PED(Local_544.f_1450);
				}
				else
				{
					ENTITY::SET_ENTITY_HEALTH(Local_544.f_1450, 100, 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_544.f_1450, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_544.f_1450, false, true);
				ENTITY::SET_ENTITY_COORDS(Local_544.f_1450, vVar4, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Local_544.f_1450, fVar7);
				if (bVar8)
				{
					ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Local_544.f_1450, true);
				}
				ENTITY::FREEZE_ENTITY_POSITION(Local_544.f_1450, true);
				ENTITY::SET_ENTITY_COLLISION(Local_544.f_1450, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_544.f_1450, true);
				ENTITY::SET_ENTITY_VISIBLE(Local_544.f_1450, false);
				PED::CLEAR_PED_DECORATIONS(Local_544.f_1450);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_544.f_1450, true, true);
				if (func_591())
				{
					Local_544.f_1449 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					if (CAM::DOES_CAM_EXIST(Local_544.f_1449))
					{
						vVar14 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(Local_544.f_1450, true, false), ENTITY::GET_ENTITY_HEADING(Local_544.f_1450), 0.3f, 2f, 0.3f) };
						CAM::SET_CAM_COORD(Local_544.f_1449, vVar14);
						CAM::POINT_CAM_AT_ENTITY(Local_544.f_1449, Local_544.f_1450, 0.3f, 0f, 0.3f, true);
						CAM::SET_CAM_FOV(Local_544.f_1449, 35f);
						ENTITY::SET_ENTITY_HEADING(Local_544.f_1450, func_592(vVar4, vVar14, 1));
					}
				}
			}
		}
	}
}

void func_285()
{
	if (func_137(2.524355E-29f))
	{
		return;
	}
	if (Local_301.f_12 == 0)
	{
		func_593();
		if (Local_544.f_9 == -4.537018E+10f)
		{
			if (func_137(32768))
			{
				func_43(4096);
			}
			else
			{
				func_43(16384);
			}
		}
		else if ((Local_301.f_10 == PLAYER::PLAYER_ID() || func_137(8192)) || func_594())
		{
			func_43(4096);
		}
		else
		{
			if (Local_351[Local_544.f_1366 /*6*/].f_2 <= 0f)
			{
				func_595((func_194(2) - 1));
			}
			func_43(16384);
		}
		if (func_492() == 2)
		{
			if (func_594())
			{
				func_596(Local_544.f_1, Local_544.f_3, 0);
			}
			else
			{
				func_597(Local_544.f_1, Local_544.f_3, -1);
			}
		}
		else if (func_137(4096) || func_137(8192))
		{
			func_596(Local_544.f_1, Local_544.f_3, Local_544.f_1367);
		}
		else if (func_137(16384))
		{
			func_597(Local_544.f_1, Local_544.f_3, Local_544.f_1367);
		}
		func_598();
	}
	if (Local_301.f_12 == 4)
	{
		func_43(16384);
	}
	func_43(2.524355E-29f);
}

void func_286()
{
}

void func_287()
{
}

void func_288()
{
	if ((func_156(Local_544.f_1366) && func_299(Local_544.f_1418)) && Local_301.f_12 == 0)
	{
		if (!func_18(Local_544, 4096))
		{
			func_251(Local_544, 4096);
		}
		if (!func_599())
		{
			func_251(Local_544, 16384);
		}
	}
	else
	{
		if (func_18(Local_544, 4096))
		{
			func_600(Local_544, 4096);
		}
		if (func_18(Local_544, 16384))
		{
			func_600(Local_544, 16384);
		}
	}
}

bool func_289()
{
	return func_18(Local_544, 4096);
}

bool func_290()
{
	switch (Local_544.f_1)
	{
		case 8:
		case 15:
		case 16:
		case 17:
			return true;
		default:
			break;
	}
	return false;
}

bool func_291()
{
	return false;
}

void func_292()
{
	func_601(&(Local_544.f_1054), 1, 0);
	func_602(&(Local_544.f_13));
	func_257(&(Local_544.f_1039), 1);
}

bool func_293()
{
	struct<8> Var0;
	char cVar8[64];
	struct<8> Var16;
	char cVar24[64];
	bool bVar32;
	struct<8> Var33;
	char cVar41[64];

	if (func_62(255))
	{
		return false;
	}
	UIFEED::UI_FEED_CLEAR_CHANNEL(11, true, false);
	if (func_603())
	{
		return true;
	}
	Var0 = { func_537() };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { Local_544.f_1380 };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
		{
			Var0 = { Local_544.f_1372 };
		}
	}
	if (Local_301.f_12 != 0)
	{
		StringCopy(&cVar8, func_604(), 64);
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar8))
		{
			if (Local_544.f_9 == -4.537018E+10f)
			{
				StringCopy(&cVar8, "FME_SHARD_OUTRO_TITLE_OVER_POSSE_VERSUS", 64);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_323()))
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar8))
			{
				Local_544.f_1321 = func_545(MISC::VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), func_323(), func_605(), func_606());
			}
			else
			{
				Local_544.f_1321 = func_545(&cVar8, func_323(), func_605(), func_606());
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar8))
		{
			Local_544.f_1321 = func_545(MISC::VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), func_607(Local_301.f_12), func_605(), func_606());
		}
		else
		{
			Local_544.f_1321 = func_545(&cVar8, func_607(Local_301.f_12), func_605(), func_606());
		}
	}
	else if (Local_544.f_9 != -4.537018E+10f)
	{
		Local_544.f_1321 = func_608(MISC::VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), func_605(), func_606());
	}
	else if (func_137(4096))
	{
		Var16 = { func_609() };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var16))
		{
			StringCopy(&Var16, "FME_SHARD_OUTRO_TITLE_WINNER", 64);
		}
		StringCopy(&cVar24, func_610(), 64);
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar24))
		{
			Local_544.f_1321 = func_545(&Var16, func_321(func_320(&(Local_544.f_13), 0)), func_605(), func_606());
		}
		else
		{
			Local_544.f_1321 = func_544(&Var16, func_321(func_320(&(Local_544.f_13), 0)), &cVar24, func_605(), func_606());
		}
	}
	else
	{
		bVar32 = false;
		Var33 = { func_611() };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var33))
		{
			if (!func_182(4096, Local_544.f_1366) && Local_544.f_1367 >= 0)
			{
				bVar32 = true;
			}
			else if (Local_544.f_9 == -4.537018E+10f)
			{
				StringCopy(&Var33, func_604(), 64);
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var33))
				{
					StringCopy(&Var33, "FME_SHARD_OUTRO_TITLE_OVER_POSSE_VERSUS", 64);
				}
			}
			else
			{
				StringCopy(&Var33, "FME_SHARD_OUTRO_TITLE_OVER", 64);
			}
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(func_324(Local_544.f_1440, Local_544.f_1448, func_320(&(Local_544.f_13), 0))))
		{
			if (bVar32)
			{
				Local_544.f_1321 = func_608(MISC::VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_PLACED", func_612(Local_544.f_1367)), func_605(), func_606());
			}
			else
			{
				Local_544.f_1321 = func_608(&Var33, func_605(), func_606());
			}
		}
		else
		{
			StringCopy(&cVar41, func_610(), 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar41))
			{
				if (bVar32)
				{
					Local_544.f_1321 = func_545(MISC::VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_PLACED", func_612(Local_544.f_1367)), func_324(Local_544.f_1440, Local_544.f_1448, func_320(&(Local_544.f_13), 0)), func_605(), func_606());
				}
				else
				{
					Local_544.f_1321 = func_545(&Var33, func_324(Local_544.f_1440, Local_544.f_1448, func_320(&(Local_544.f_13), 0)), func_605(), func_606());
				}
			}
			else if (bVar32)
			{
				Local_544.f_1321 = func_544(MISC::VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_PLACED", func_612(Local_544.f_1367)), func_324(Local_544.f_1440, Local_544.f_1448, func_320(&(Local_544.f_13), 0)), &cVar41, func_605(), func_606());
			}
			else
			{
				Local_544.f_1321 = func_544(&Var33, func_324(Local_544.f_1440, Local_544.f_1448, func_320(&(Local_544.f_13), 0)), &cVar41, func_605(), func_606());
			}
		}
	}
	return true;
}

void func_294(bool bParam0)
{
	if (bParam0->f_11 >= 0)
	{
		if (!AUDIO::_HAS_SOUND_ID_FINISHED(bParam0->f_11))
		{
			AUDIO::_STOP_SOUND_WITH_ID(bParam0->f_11);
		}
		AUDIO::RELEASE_SOUND_ID(bParam0->f_11);
		bParam0->f_11 = -1;
	}
}

int func_295()
{
	return 7000;
}

bool func_296()
{
	vector3 vVar0;
	bool bVar3;

	if (Local_544.f_9 == -4.537018E+10f)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_544.f_1450))
	{
		return true;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_544.f_1450, true, false) };
	if (func_68(vVar0))
	{
		return true;
	}
	if (func_62(255))
	{
		return false;
	}
	if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		STREAMING::LOAD_SCENE_START(vVar0, func_613(Local_544.f_1449), 60f, 0);
		return false;
	}
	bVar3 = true;
	if (!STREAMING::IS_LOAD_SCENE_LOADED())
	{
		bVar3 = false;
	}
	STREAMING::_REQUEST_METADATA_AT_COORD(vVar0);
	if (!STREAMING::_HAS_COLLISION_LOADED_AT_COORD(vVar0))
	{
		bVar3 = false;
	}
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar0);
	if (!ENTITY::HAS_COLLISION_LOADED_AROUND_POSITION(vVar0))
	{
		bVar3 = false;
	}
	if (!bVar3)
	{
		return false;
	}
	if (!AUDIO::PREPARE_SOUND(func_123(), func_124(), -2))
	{
		bVar3 = false;
	}
	if (!AUDIO::PREPARE_SOUND(func_125(), func_126(), -2))
	{
		bVar3 = false;
	}
	if (!func_614())
	{
		bVar3 = false;
	}
	return bVar3;
}

bool func_297(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_615(iParam0))
	{
		iVar0 = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);
	}
	return iVar0 != 6;
}

void func_298()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if ((((!func_65(65536) && Local_544.f_9 == -4.537018E+10f) && func_289()) && func_547()) && func_493(Local_544.f_1323))
	{
		bVar0 = false;
		if (func_282() & 1024 == 1024)
		{
			bVar0 = true;
		}
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 <= (Local_544.f_1367 - 1))
		{
			iVar1 = Local_544.f_13.f_244[iVar2 /*23*/].f_14;
			if (func_616(iVar1, bVar0, 0))
			{
				Local_544.f_1323 = func_494("FME_HELP_SCORE_SURPASS");
				func_211(65536);
			}
			else
			{
				iVar2++;
			}
		}
	}
}

bool func_299(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TIMER"):
			return false;
		default:
			break;
	}
	return true;
}

bool func_300()
{
	return false;
}

bool func_301()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

bool func_302()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(7);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) <= 4);
}

bool func_303()
{
	return (func_617() && func_618());
}

void func_304()
{
	if (!UIAPPS::IS_ANY_UIAPP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_UIAPPS();
}

void func_305(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

bool func_306()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			iVar2 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iVar1);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::IS_ENTITY_VISIBLE(iVar2)) && func_619(iVar2, Local_544.f_1436, 1) < 1092616192)
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar2, false);
				iVar0 = 0;
			}
		}
		iVar3++;
	}
	return iVar0;
}

void func_307(vector3 vParam0, float fParam3)
{
	Global_1572887.f_72.f_45 = { vParam0 };
	Global_1572887.f_72.f_48 = fParam3;
}

void func_308()
{
	return;
}

void func_309()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (iVar0 == PLAYER::PLAYER_ID())
			{
				NETWORK::SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(false);
			}
			else
			{
				NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar0, false);
			}
		}
		iVar1++;
	}
}

void func_310()
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_544.f_1371))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_544.f_1450))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_544.f_1371, ENTITY::GET_ENTITY_COORDS(Local_544.f_1450, true, false), ENTITY::GET_ENTITY_ROTATION(Local_544.f_1450, 2), 2);
	ANIMSCENE::START_ANIM_SCENE(Local_544.f_1371);
}

bool func_311()
{
	return false;
}

float func_312()
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
	{
		case 0:
			return -1.058153E-20f;
		case 1:
			return -1.74652E-37f;
		case 2:
			return 1.160404E-23f;
		case 3:
			return -4.819601E+26f;
		case 4:
			return -2.077572E+09f;
		case 5:
			return -2.573254E+15f;
		case 6:
			return 3.260038E-26f;
		case 7:
			return -7.456562E+32f;
		default:
			break;
	}
	return 1.160404E-23f;
}

int func_313(int iParam0)
{
	switch (iParam0)
	{
		case joaat("KIT_EMOTE_ACTION_SHOOTHIP_1"):
			return 1500;
		case joaat("KIT_EMOTE_ACTION_SPIT_1"):
			return 1800;
		case joaat("KIT_EMOTE_GREET_THUMBSUP_1"):
			return 1500;
		case joaat("KIT_EMOTE_GREET_WAVENEAR_1"):
			return 1500;
		case joaat("KIT_EMOTE_REACTION_NOD_HEAD_1"):
			return 1800;
		case joaat("KIT_EMOTE_REACTION_SHAKEHEAD_1"):
			return 1800;
		case joaat("KIT_EMOTE_TAUNT_UP_YOURS_1"):
			return 1400;
		case joaat("KIT_EMOTE_TAUNT_YOUSTINK_1"):
			return 1800;
		default:
			break;
	}
	return 1500;
}

int func_314(int iParam0)
{
	switch (iParam0)
	{
		case joaat("KIT_EMOTE_ACTION_SPIT_1"):
		case joaat("KIT_EMOTE_ACTION_SHOOTHIP_1"):
		case joaat("KIT_EMOTE_ACTION_FIST_PUMP_1"):
		case joaat("KIT_EMOTE_ACTION_POINT_1"):
		case joaat("KIT_EMOTE_ACTION_BLOW_KISS_1"):
			return 1;
		case joaat("KIT_EMOTE_GREET_WAVENEAR_1"):
		case joaat("KIT_EMOTE_GREET_THUMBSUP_1"):
			return 3;
		case joaat("KIT_EMOTE_REACTION_NOD_HEAD_1"):
		case joaat("KIT_EMOTE_REACTION_SHAKEHEAD_1"):
		case joaat("KIT_EMOTE_REACTION_SHOT_1"):
		case joaat("KIT_EMOTE_REACTION_YEEHAW_1"):
		case joaat("KIT_EMOTE_REACTION_POINTLAUGH_1"):
			return 0;
		case joaat("KIT_EMOTE_TAUNT_YOUSTINK_1"):
		case -23808358:
		case joaat("KIT_EMOTE_TAUNT_UP_YOURS_1"):
		case joaat("KIT_EMOTE_TAUNT_PROVOKE_1"):
			return 2;
		default:
			break;
	}
	return -1;
}

void func_315(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	if (!func_620(bParam1))
	{
		return;
	}
	TASK::TASK_PLAY_EMOTE_WITH_HASH(iParam0, iParam5, iParam2, bParam1, bParam3, bParam4, false, false, bParam6);
}

char* func_316()
{
	return "";
}

char* func_317()
{
	return "";
}

char[] func_318()
{
	return "";
}

char* func_319()
{
	return "";
}

float func_320(var uParam0, int iParam1)
{
	return uParam0->f_244[iParam1 /*23*/].f_5;
}

char[] func_321(float fParam0)
{
	if (fParam0 == 1f)
	{
		return MISC::VAR_STRING(2, "FME_KOTR_SHARD_OUTRO_PRIMARY_WON", BUILTIN::FLOOR(fParam0));
	}
	return MISC::VAR_STRING(2, "FME_KOTR_SHARD_OUTRO_PRIMARY_WON_PLURAL", BUILTIN::FLOOR(fParam0));
}

void func_322(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_3))
	{
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_4))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_4, sParam1);
	}
	else
	{
		uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "gamerTag", sParam1);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_5))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_5, sParam2);
	}
	else
	{
		uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "teamName", sParam2);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_12))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_12, iParam7);
	}
	else
	{
		uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3, "teamNameColor", iParam7);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_6[0]))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[0], sParam3);
	}
	else
	{
		uParam0->f_6[0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info0", sParam3);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_6[1]))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[1], sParam4);
	}
	else
	{
		uParam0->f_6[1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info1", sParam4);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_6[2]))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[2], sParam5);
	}
	else
	{
		uParam0->f_6[2] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info2", sParam5);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_6[3]))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[3], sParam6);
	}
	else
	{
		uParam0->f_6[3] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info3", sParam6);
	}
}

char* func_323()
{
	return "";
}

char* func_324(var uParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9)
{
	return MISC::VAR_STRING(2, "FME_KOTR_SHARD_OUTRO_PRIMARY_FAILED");
}

void func_325(var uParam0)
{
}

bool func_326()
{
	return false;
}

bool func_327(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(uParam0->f_15, 0))
	{
		return true;
	}
	if (!UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(*uParam0))
	{
		func_231(uParam0);
		return false;
	}
	UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(*uParam0, uParam0->f_2);
	MISC::SET_BIT(&(uParam0->f_15), 0);
	return true;
}

bool func_328()
{
	return false;
}

int func_329()
{
	return 0.03028275f;
}

char* func_330(int iParam0)
{
	return MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iParam0), 0);
}

bool func_331(int iParam0)
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

int func_332(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, bool bParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_621(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_622(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, fParam6, fParam7, fParam8, bParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_333(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_331(iParam0))
	{
		return;
	}
	iVar0 = func_623(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1951897[iVar0 /*23*/].f_3, sParam1);
}

bool func_334(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_331(iParam0))
	{
		return false;
	}
	iVar0 = func_623(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1951897[iVar0 /*23*/].f_3);
}

void func_335(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_331(iParam0))
	{
		return;
	}
	iVar0 = func_623(iParam0);
	if (bParam1)
	{
		func_624(iParam0, 4);
		if (bParam3)
		{
			func_625(iVar0, 1);
		}
		func_626(iVar0, 1);
	}
	else
	{
		func_627(iParam0, 4);
		func_626(iVar0, 0);
	}
}

void func_336(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_331(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_623(*uParam0);
	if (Global_1951897[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_628(iVar0);
	*uParam0 = 0;
}

bool func_337()
{
	return true;
}

bool func_338(bool bParam0)
{
	if (!func_157(-251222f, bParam0))
	{
		return false;
	}
	return true;
}

void func_339(int iParam0)
{
	func_443(&(Local_544.f_1368), iParam0);
}

void func_340(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_629(&(Global_1149417.f_4804), bParam1);
		func_168(121);
	}
	else
	{
		func_169(121);
	}
}

void func_341(int iParam0)
{
	if (func_630(Global_1902878, iParam0))
	{
		func_631(&Global_1902878, iParam0);
	}
}

void func_342(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	func_632(iVar0, iParam0);
	func_633(iVar0, iParam0);
}

bool func_343()
{
	return func_634(256);
}

void func_344()
{
	if (func_634(256))
	{
		func_635(256);
	}
}

void func_345(int iParam0, int iParam1)
{
	func_443(&(Local_351[iParam1 /*6*/].f_1), iParam0);
}

bool func_346(int iParam0)
{
	int iVar0;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return false;
	}
	iVar0 = GANG::NETWORK_GET_GANG_LEADER(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	if (func_636(iVar0, 0, 1))
	{
		return false;
	}
	if (func_637(iVar0, 32))
	{
		return true;
	}
	return false;
}

void func_347(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;

	if (func_343())
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (!func_637(PLAYER::PLAYER_ID(), 32))
		{
			func_638(32);
			if (iParam2 == 0)
			{
				sVar0 = MISC::VAR_STRING(2, "NG_PP_FF_ON");
				func_639(sVar0, -2, 0, 0, 0, 1);
			}
			if (iParam1 == 1)
			{
				func_640(iParam0, GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
			}
		}
	}
	else if (func_637(PLAYER::PLAYER_ID(), 32))
	{
		func_641(32);
		if (iParam2 == 0)
		{
			sVar0 = MISC::VAR_STRING(2, "NG_PP_FF_OFF");
			func_639(sVar0, -2, 0, 0, 0, 1);
		}
		if (iParam1 == 1)
		{
			func_640(iParam0, GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
		}
	}
}

void func_348()
{
	func_168(96);
}

void func_349(bool bParam0)
{
	if (bParam0)
	{
		func_169(49);
	}
	else
	{
		func_168(49);
	}
}

void func_350(bool bParam0)
{
	if (bParam0)
	{
		func_169(113);
		if (!Global_1295619.f_7)
		{
			func_642(16);
		}
	}
	else
	{
		func_168(113);
		if (!Global_1295619.f_7)
		{
			func_642(16);
		}
	}
}

void func_351(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, bParam0);
}

void func_352(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_643(&Global_1940186, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_644(&Global_1940186, 8388608);
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

char* func_353()
{
	return "FMUI";
}

void func_354()
{
	if (!func_182(65536, Local_544.f_1366))
	{
		return;
	}
	if (!func_182(32768, Local_544.f_1366))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_521(Local_544.f_1474, Local_544.f_1478))
	{
		func_345(32768, Local_544.f_1366);
	}
}

void func_355(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_645(iParam0, iVar0);
		iVar0++;
	}
}

char* func_356()
{
	return "FM_KotC_END";
}

int func_357(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (((iVar0 == Global_1072759.f_22943.f_1 || Global_1072759.f_22943.f_1 == 0) || iParam1 > Global_1072759.f_22943) || iParam1 == 4)
	{
		if (bParam2)
		{
			uVar1 = -1;
			MISC::COPY_SCRIPT_STRUCT(&(Global_1072759.f_22943), &uVar1, 2);
		}
		else
		{
			Global_1072759.f_22943.f_1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			Global_1072759.f_22943 = iParam1;
		}
		if (AUDIO::TRIGGER_MUSIC_EVENT(sParam0))
		{
		}
		return 1;
	}
	return 0;
}

char* func_358()
{
	return "RDRO_King_Of_The_Rails_Sounds";
}

char* func_359()
{
	return "screen_pulse";
}

void func_360(bool bParam0)
{
	Global_1102813.f_3671 = 0;
	if (!Global_1295619.f_7 && bParam0)
	{
		func_642(16);
	}
}

void func_361()
{
	func_646();
	func_647();
	func_648();
}

void func_362(bool bParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13))
	{
		func_649(NETWORK::NET_TO_VEH(Local_13), bParam0, 16);
	}
}

void func_363(bool bParam0, bool bParam1)
{
	if (func_650(255) == 4)
	{
		return;
	}
	if (func_68(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_168(0);
	}
	else
	{
		if (bParam1)
		{
			func_651(0, 0, 0, 1);
		}
		func_169(0);
		func_652(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = -2.19652E+23f;
		func_653(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}
	func_654(Global_1102813.f_3839, 36);
	func_655(Global_1102813.f_3878, 36);
}

void func_364()
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Local_544.f_1439))
	{
		func_656(Local_544.f_1439);
	}
}

void func_365()
{
	if (func_297(Local_544.f_1325))
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Local_544.f_1325, false);
	}
}

void func_366()
{
	func_336(&(Local_544.f_1330), 1, 1);
	func_336(&(Local_544.f_1331), 1, 1);
}

void func_367()
{
	if (func_297(Local_544.f_1323))
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Local_544.f_1323, false);
	}
}

void func_368()
{
	if (func_297(Local_544.f_1321))
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Local_544.f_1321, false);
	}
}

void func_369()
{
	if (func_297(Local_544.f_1322))
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Local_544.f_1322, false);
	}
	Local_544.f_1322 = 0;
	Local_544.f_1300 = 0;
}

void func_370()
{
	if (func_297(Local_544.f_1324))
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Local_544.f_1324, false);
	}
}

void func_371()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_561(iVar0);
		iVar0++;
	}
}

bool func_372(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_657(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_373(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_657(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_374(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;

	if (!func_73(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_373(Param0) && !func_372(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_658(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_657(Param0) == 3)
		{
			func_659(1, -4.059512E-23f);
		}
		else if (func_657(Param0) == 4)
		{
			func_659(0, -4.059512E-23f);
		}
	}
	if ((func_657(Param0) == 3 || func_657(Param0) == 1) || ((bParam5 && func_657(Param0) == 4) && STATS::STATSTRACKER_IS_INITIALIZED(func_658(Param0))))
	{
		if (iParam3 != -1)
		{
			func_660(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_660(Param0, 2, iParam4, 255, 0);
		}
	}
	func_661(Param0, 0);
	if (func_74(func_379(0), Param0))
	{
		func_352(1);
		func_662(0);
		func_663(0);
		func_664(1);
	}
	func_665(Param0);
	Global_1051645.f_45.f_1 = 1;
	iVar0 = func_666(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

void func_375(int iParam0, struct<2> Param1)
{
	struct<2> Var0;

	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	func_667(Param1, &Var0);
	func_668(0);
	func_669(1);
	if (func_670(Global_1206482.f_78[iParam0 /*20*/].f_3) == -4.537018E+10f)
	{
		SCRIPTS::_DEACTIVATE_GOAL_CONTEXT(8.579785E-11f);
		STATS::_0xE5A680A5D8B1F687(0);
	}
	else
	{
		SCRIPTS::_DEACTIVATE_GOAL_CONTEXT(4.052186E+20f);
	}
}

void func_376(bool bParam0)
{
	int iVar0;
	int iVar1;

	POSSE::_0xC08AFF658B2E51DA(&iVar0);
	if (iVar0 != 0)
	{
		func_504(&(Global_1203937.f_3), 32);
		func_504(&(Global_1203937.f_4), 12);
		Global_1203937.f_478 = iVar0;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		{
			func_504(&(Global_1203937.f_4), 2);
		}
		POSSE::_0xC08BFF658B2E51DA(0);
		Global_1203937.f_5[5] = 0;
		func_504(&(Global_1203937.f_5[5]), 1);
	}
	Global_1203937.f_5[3] = 0;
	func_504(&(Global_1203937.f_5[3]), 1);
	iVar1 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iVar1))
	{
		func_504(&(Global_1203937.f_5[3]), 6);
		return;
	}
	if (!GANG::NETWORK_IS_GANG_ACTIVE(iVar1))
	{
		func_504(&(Global_1203937.f_5[3]), 6);
		return;
	}
	GANG::_NETWORK_LEAVE_GANG(bParam0);
}

void func_377(int iParam0)
{
	func_149(&(Global_1072759.f_28644.f_23.f_1), iParam0);
}

void func_378(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_379(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_380()
{
	return Global_1300340.f_150;
}

bool func_381(int iParam0)
{
	return (Global_1300340.f_288.f_2 && iParam0) != 0;
}

int func_382(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -1.650272E-15f;
		case 2:
			return -2.492079E+20f;
		case 3:
			return 8217705f;
		case 4:
			return -1.856233E-32f;
		case 5:
			return -1.911328E-28f;
		case 6:
			return 8.381184E-22f;
		case 7:
			return 9.323113E-17f;
		case 8:
			return 5.298199E-21f;
		case 9:
			return 1.251051E+26f;
		case 10:
			return -1.503106E-20f;
		case 11:
			return -2.15098E-08f;
		case 12:
			return -72.71923f;
		case 13:
			return -7.383845E-26f;
		case 14:
			return 4454179f;
		case 15:
			return -1.208705E+16f;
		case 16:
			return -3.909027E-22f;
		case 17:
			return -3.218126E+13f;
		case 18:
			return -0.003058001f;
		case 19:
			return 2.779826E+37f;
		case 20:
			return -5.414377E+35f;
		case 21:
			return -4.615115E-09f;
		case 22:
			return 8.109539E-23f;
		case 23:
			return 5.286867E-36f;
		case 24:
			return 4.065167E-25f;
		case 25:
			return 6.538902E+31f;
		case 26:
			return 1.040166E+09f;
		case 27:
			return 1.308318E-34f;
		case 28:
			return 1.238993E+10f;
		case 29:
			return 1.080873E-24f;
		case 30:
			return -1.975638E-12f;
		case 31:
			return -4.626297E+11f;
		case 32:
			return -53.98294f;
		case 33:
			return 7.823787E+27f;
		case 34:
			return -3.184162E+10f;
		case 35:
			return -1.960684E+31f;
		case 36:
			return 3.373562E-16f;
		case 37:
			return -1.63599E-05f;
		case 38:
			return 3.470325E+32f;
		case 39:
			return -2.468865E-31f;
		case 40:
			return 8.133554E+29f;
		case 41:
			return 3.60728E-28f;
		case 42:
			return 3.077905E-30f;
		case 43:
			return -4.873788E-21f;
		case 44:
			return -1.840275E+19f;
		case 45:
			return -3.014988E-19f;
		case 46:
			return 8.62953E-22f;
		case 47:
			return 4.027636E-23f;
		case 48:
			return -4.840916E-07f;
		case 49:
			return -2.809316E-11f;
		case 50:
			return -5.382291E-30f;
		case 51:
			return -5.527518E+34f;
		case 52:
			return 6.137253E-27f;
		case 53:
			return -4.438688E-12f;
		case 54:
			return 1.486411E+18f;
		case 55:
			return 1.578589E-22f;
		case 56:
			return -3.582313E-31f;
		case 57:
			return -3232.209f;
		case 58:
			return 4.416884E+23f;
		case 59:
			return -6.716894E-12f;
		case 60:
			return 1.814925E-06f;
		case 61:
			return 1.623417E-33f;
		case 62:
			return -4.608549E-33f;
		case 63:
			return 2.086966E+34f;
		case 64:
			return -9.707458E-37f;
		case 65:
			return 1.09716E+20f;
		case 66:
			return 2.243992E-10f;
		case 67:
			return -2.109824E-18f;
		case 68:
			return -3.704497E-31f;
		case 69:
			return 2.969136E-26f;
		case 70:
			return -9.545294E+21f;
		case 71:
			return 2.688847E+23f;
		case 72:
			return 3.74777E-05f;
		case 73:
			return -1.065784E+33f;
		case 74:
			return -6560485f;
		case 75:
			return -1.291883E+26f;
		case 76:
			return 5.674028E-05f;
		case 77:
			return -1.040701E+36f;
		case 78:
			return 2.42736E+11f;
		case 79:
			return -1.659076E+25f;
		case 80:
			return 1.705934E+34f;
		case 81:
			return 9.852331E+12f;
		case 82:
			return -2.318358E+14f;
		case 83:
			return 992267.5f;
		case 84:
			return 3.876603E+29f;
		case 85:
			return 4.400584E+30f;
		case 86:
			return -4.730458E+37f;
		case 87:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTYFIVE");
		case 88:
			return 2.407677E+36f;
		case 89:
			return 2.528333E-16f;
		case 90:
			return 9.203827E+11f;
		case 91:
			return 4.345254E+33f;
		case 92:
			return -1.186832E-25f;
		case 93:
			return -0.2578058f;
		case 94:
			return 5.921011E-16f;
		case 95:
			return -1.309901E-09f;
		case 96:
			return -1.954541E+36f;
		case 97:
			return 3961451f;
		case 98:
			return -2.196854E-36f;
		case 99:
			return 9.503152E+28f;
		case 100:
			return -1.375416E+27f;
		case 101:
			return -6.915019E-36f;
		case 102:
			return -6.412489E-31f;
		case 103:
			return -6.325093E+37f;
		case 104:
			return 6.384474E-15f;
		case 105:
			return -4.258934E+21f;
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

void func_383(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1149417.f_3876.f_2[func_384(iParam0, 1) /*4*/] == bParam1)
	{
		return;
	}
	if (bParam2)
	{
		func_671(iParam0);
	}
	Global_1149417.f_3876.f_2[func_384(iParam0, 1) /*4*/] = bParam1;
}

int func_384(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2086327823:
			return 64;
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_MERCY_KILL"):
			return 98;
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_RETURN"):
			return 101;
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_ASSAULT"):
			return 62;
		case joaat("PERSONA_HONOR_ACTION__MURDER_PLAYER"):
			return 4;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTYFIVE"):
			return 39;
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_MURDER"):
			return 56;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_PLAYER"):
			return 68;
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_DONATE"):
			return 102;
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_KILL"):
			return 50;
		case joaat("PERSONA_HONOR_ACTION__MURDER_RAMPAGE"):
			return 5;
		case joaat("PERSONA_HONOR_ACTION__SLAUGHTER_PETS"):
			return 13;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTY"):
			return 92;
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_PLAYER"):
			return 16;
		case joaat("PERSONA_HONOR_ACTION__LOOTING"):
			return 43;
		case joaat("PERSONA_HONOR_ACTION__EXECUTION_PLAYER"):
			return 10;
		case joaat("PERSONA_HONOR_ACTION__ANIMAL_CRUELTY"):
			return 45;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_POSSE"):
			return 67;
		case joaat("PERSONA_HONOR_ACTION__MURDER_BUTCHER"):
			return 1;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_NEG"):
			return 30;
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_KILL"):
			return 53;
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_MURDER"):
			return 59;
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_KILL"):
			return 49;
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_FEED"):
			return 95;
		case joaat("PERSONA_HONOR_ACTION__UNPROVOKED_ANTAGONIZATION"):
			return 21;
		case joaat("PERSONA_HONOR_ACTION__WATCH_BLEED_OUT"):
			return 11;
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_ACCEPT"):
			return 48;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTYFIVE"):
			return 37;
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE_PLAYER"):
			return 18;
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_SAVE"):
			return 93;
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_NEG"):
			return 32;
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE"):
			return 12;
		case joaat("PERSONA_HONOR_ACTION__NB_HOBO_DOG_KILL"):
			return 57;
		case joaat("PERSONA_HONOR_ACTION__RESOURCEFUL"):
			return 74;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TEN"):
			return 34;
		case joaat("PERSONA_HONOR_ACTION__MISSION_OUTLAW"):
			return 31;
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_PLAYER"):
			return 17;
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_POS"):
			return 82;
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_AI"):
			return 15;
		case joaat("PERSONA_HONOR_ACTION__THEFT"):
			return 44;
		case joaat("PERSONA_HONOR_ACTION__MURDER"):
			return 2;
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_ALIVE"):
			return 105;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE"):
			return 70;
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL_PVP"):
			return 79;
		case joaat("PERSONA_HONOR_ACTION__CLEAR_HIDEOUT"):
			return 75;
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_ASSIST"):
			return 100;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTEEN"):
			return 35;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER"):
			return 73;
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_KILL"):
			return 51;
		case joaat("PERSONA_HONOR_ACTION__LOOTING_BODIES"):
			return 20;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE"):
			return 77;
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_RESCUE"):
			return 96;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTY"):
			return 86;
		case -29468993:
			return 103;
		case -1:
			return 0;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTYFIVE"):
			return 87;
		case joaat("PERSONA_HONOR_ACTION__IGNORE_MISSION"):
			return 23;
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL_PVP"):
			return 27;
		case joaat("PERSONA_HONOR_ACTION__NB_RANDOM_EVENT_MURDER"):
			return 61;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTY"):
			return 42;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTYFIVE"):
			return 41;
		case joaat("PERSONA_HONOR_ACTION__NB_TREASURE_HUNTER_KILL"):
			return 52;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_MULTI"):
			return 69;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_KILL"):
			return 24;
		case joaat("PERSONA_HONOR_ACTION__HERDING_STEAL"):
			return 29;
		case joaat("PERSONA_HONOR_ACTION__VANDALISM_LOW"):
			return 47;
		case joaat("PERSONA_HONOR_ACTION__GRIEFING"):
			return 22;
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_BLEED_OUT"):
			return 55;
		case joaat("PERSONA_HONOR_ACTION__MURDER_MISSION_PEDS"):
			return 6;
		case joaat("PERSONA_HONOR_ACTION__ARSON"):
			return 46;
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER_UNARMED"):
			return 8;
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER"):
			return 7;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTYFIVE"):
			return 89;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTY"):
			return 36;
		case joaat("PERSONA_HONOR_ACTION__MERCY_KILL"):
			return 94;
		case 669386338:
			return 104;
		case 796310207:
			return 66;
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_DEAD"):
			return 60;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_FULL"):
			return 72;
		case joaat("PERSONA_HONOR_ACTION__CLEAR_AMBUSH"):
			return 76;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIVE"):
			return 83;
		case joaat("PERSONA_HONOR_ACTION__NB_TIED_UP_RESCUE"):
			return 97;
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_AI"):
			return 14;
		case joaat("PERSONA_HONOR_ACTION__MURDER_CAMP_FOLLOWER"):
			return 3;
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL"):
			return 26;
		case joaat("PERSONA_HONOR_ACTION__RUSTLING"):
			return 28;
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL"):
			return 78;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTY"):
			return 90;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GUNSLINGER"):
			return 81;
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_LOOT"):
			return 54;
		case 1623086000:
			return 65;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_CLEAN"):
			return 71;
		case 1723535349:
			return 58;
		case joaat("PERSONA_HONOR_ACTION__HOGTIE_PLAYER"):
			return 9;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIVE"):
			return 33;
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_ASSIST"):
			return 99;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TEN"):
			return 84;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTY"):
			return 40;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTEEN"):
			return 85;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE_THEN_KILL"):
			return 25;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTY"):
			return 38;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTYFIVE"):
			return 91;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_POS"):
			return 80;
		case joaat("PERSONA_HONOR_ACTION__BOUNTY_BRIBE_GUARD"):
			return 63;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTY"):
			return 88;
		case joaat("PERSONA_HONOR_ACTION__TRAMPLE"):
			return 19;
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

int func_385()
{
	if (func_303())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_33) && !ENTITY::IS_ENTITY_DEAD(Global_33))
		{
			PAD::DISABLE_CONTROL_ACTION(0, -1.684686E+34f, false);
			PAD::DISABLE_CONTROL_ACTION(0, 3.101329E-34f, false);
			if (func_672())
			{
				func_673();
				func_674();
				func_675();
			}
			else if (func_676(Global_33, 0, 0, 0) == -1.197024E-12f)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				WEAPON::_HOLSTER_PED_WEAPONS(Global_33, false, false, false, false);
			}
			return 0;
		}
	}
	return 1;
}

bool func_386(int iParam0)
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

void func_387(var uParam0, bool bParam1)
{
	if (bParam1 || !func_388(uParam0))
	{
		func_677(uParam0);
	}
}

bool func_388(var uParam0)
{
	return func_390(*uParam0, 1);
}

float func_389(var uParam0)
{
	if (!func_388(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_678(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_679() - uParam0->f_1);
}

bool func_390(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_391(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = uParam1;
	uParam0->f_1 = uParam2;
}

void func_392(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
}

void func_393(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_4 = uParam1;
	uParam0->f_5 = uParam2;
}

void func_394(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_6 = uParam1;
	uParam0->f_7 = uParam2;
}

void func_395(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_8 = uParam1;
	uParam0->f_9 = uParam2;
}

void func_396(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_10 = uParam1;
	uParam0->f_11 = uParam2;
}

void func_397(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	uParam0->f_3 = 1;
}

bool func_398(int iParam0)
{
	return func_405(&(Global_1956862.f_1565), iParam0, 1);
}

void func_399(var uParam0, struct<2> Param1, bool bParam3)
{
	int iVar0;
	struct<4> Var1;
	struct<2> Var5;

	func_680(uParam0, 84);
	if (!func_681(uParam0) && !bParam3)
	{
		return;
	}
	if (!func_73(Param1))
	{
		return;
	}
	iVar0 = Param1;
	if ((iVar0 != 7 && iVar0 != 2) && iVar0 != 6)
	{
		return;
	}
	if (((((((((((((((((((SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("FM_Mission_Controller")) <= 0 && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("FM_Race_Controller")) <= 0) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("FM_Deathmatch_Controller")) <= 0) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("mp_intro")) <= 0) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("fme_archery")) <= 0) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("fme_challenges")) <= 0) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("fme_condor_egg")) <= 0) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("fme_dead_drop")) <= 0) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("fme_escaped_convicts")) <= 0) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("fme_golden_hat")) <= 0) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("fme_hot_property")) <= 0) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("fme_king_of_the_castle")) <= 0) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("fme_king_of_the_rails")) <= 0) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("fme_round_up")) <= 0) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("fme_supply_train")) <= 0) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("fme_treasure_hunt")) <= 0) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("fme_wreckage")) <= 0) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("fme_animal_tagging")) <= 0) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("fme_wildlife_photographer")) <= 0) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("fme_protect_legendary_animal")) <= 0)
	{
		return;
	}
	if (Global_1149417.f_4804)
	{
		func_629(&(Global_1149417.f_4804), 1);
	}
	func_682(&(Global_1149417.f_4804));
	func_683(uParam0);
	func_684();
	func_685(0);
	Global_1149417.f_4804 = { *uParam0 };
	Global_1149417.f_4804.f_13 = { Param1 };
	Global_1149417.f_4804 = 1;
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_17418.f_55.f_61[0 /*4*/])))
	{
		Var1 = { func_686(0, 1, 0, -1) };
	}
	func_690(&(Global_1149417.f_4804), func_687(&Var1, 0), func_688(&Var1, 0), -1.544382E+07f, func_689(&Var1, 0));
	if (uParam0->f_10)
	{
		if (func_157(uParam0->f_54, uParam0->f_54.f_1))
		{
		}
		if (uParam0->f_54.f_2)
		{
			func_691();
		}
	}
	if (bParam3)
	{
		if (func_692(0) != 3)
		{
			func_693(1, uParam0->f_57);
			func_694(2.350989E-38f);
		}
	}
	if (uParam0->f_1 && !uParam0->f_16.f_2)
	{
		Var5.f_1 = 0;
		if (uParam0->f_9)
		{
			Global_1149417.f_4804.f_51 = { uParam0->f_51 };
			Var5.f_1 = uParam0->f_51.f_1;
		}
		Var5 = uParam0->f_16.f_1;
		func_695(&Var5);
		if (!func_167(119, 255))
		{
			func_696();
		}
	}
	if (uParam0->f_3)
	{
		func_697(uParam0);
		func_698();
		func_699(0);
	}
	if (uParam0->f_6)
	{
		func_699(3);
	}
	if (uParam0->f_4)
	{
		func_699(1);
		func_700(uParam0->f_25, uParam0->f_25.f_1, uParam0->f_25.f_2);
		func_701(uParam0->f_25.f_3, 1);
		func_702(uParam0->f_25.f_4, 1);
		func_703(uParam0->f_25.f_5, 1);
	}
	else if (bParam3)
	{
		func_704();
	}
	if (uParam0->f_5)
	{
		func_699(2);
		func_705(0, uParam0->f_25.f_6, 1);
		func_705(2, uParam0->f_25.f_7, 1);
		func_705(1, uParam0->f_25.f_8, 1);
	}
	if (uParam0->f_7)
	{
		func_699(4);
	}
	if (uParam0->f_12)
	{
		func_699(5);
		func_706(uParam0->f_34[0 /*3*/], uParam0->f_34[0 /*3*/].f_1, 0);
		func_706(uParam0->f_34[1 /*3*/], uParam0->f_34[1 /*3*/].f_1, 1);
		func_706(uParam0->f_34[2 /*3*/], uParam0->f_34[2 /*3*/].f_1, 2);
		func_706(uParam0->f_34[3 /*3*/], uParam0->f_34[3 /*3*/].f_1, 3);
		func_707();
	}
	if (uParam0->f_8)
	{
		func_699(6);
		func_708(Global_1956862.f_1565.f_117);
	}
	else if (uParam0->f_4)
	{
		func_708(Global_1956862.f_1549);
	}
	else if (bParam3)
	{
		func_708(Global_1956862.f_1549);
	}
}

int func_400(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_709(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_692(bParam1), bParam0, bParam3);
}

void func_401(bool bParam0)
{
	struct<4> Var0;

	Var0 = { func_711(5.207907E-07f, func_710(1), 0.08386164f, 1) };
	INVENTORY::_INVENTORY_COPY_ITEM_TO_MISSION_INVENTORY(&Var0, bParam0);
	func_712(27, 0, 2, 0, 0);
}

void func_402(bool bParam0)
{
	struct<4> Var0;

	func_713(1);
	Var0 = { func_711(4.080975E-29f, func_710(1), 6.727819E+25f, 1) };
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		INVENTORY::_INVENTORY_COPY_ITEM_TO_MISSION_INVENTORY(&Var0, bParam0);
	}
}

bool func_403(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_714(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_715(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_716(bParam0, iParam1, iParam2);
	}
	Var1 = { func_717(bParam0, 0, 1) };
	Var6 = { func_711(bParam0, Var1, Var1.f_4, 0) };
	return func_718(bParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

void func_404()
{
	func_169(123);
}

bool func_405(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_406()
{
	return Global_1102813.f_3672;
}

bool func_407(var uParam0, int iParam1, int iParam2)
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

bool func_408(var uParam0, int iParam1, int iParam2)
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

bool func_409(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) == iParam0;
}

bool func_410(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) != 0;
}

bool func_411(int iParam0, bool bParam1)
{
	if (!func_719())
	{
		return false;
	}
	if (Global_1148491.f_2[iParam0 /*18*/].f_1 == 0)
	{
		return false;
	}
	if (bParam1)
	{
		func_412(iParam0);
	}
	func_720(iParam0, 4);
	return true;
}

void func_412(int iParam0)
{
	Global_1149020.f_2[iParam0 /*43*/].f_10 = Global_1295619.f_16 + 60;
}

var func_413(int iParam0, int iParam1)
{
	return func_721(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

int func_414(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return 0;
	}
	*uParam0 = 20;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 24, 2, &uParam1);
	return 1;
}

bool func_415(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;

	bVar0 = uParam1->f_2;
	if (func_722(func_170(iParam0)))
	{
		bVar0 = !bVar0;
	}
	fVar1 = 1135542272; /* Float: 350f */
	vVar2 = { VEHICLE::_GET_STATION_COORDS_FROM_TRAIN_STATION_DATA(*uParam1, uParam1->f_1) };
	vVar5 = { VEHICLE::_GET_CHECKPOINT_TRAIN_SPAWN_LOCATION(*uParam1, vVar2, fVar1, !bVar0) };
	if (!func_723(0, vVar5))
	{
		*uParam2++;
		if (*uParam2 < 45)
		{
			return false;
		}
	}
	func_724(0, func_178(), vVar5, bVar0, Local_544.f_7, 0);
	return true;
}

bool func_416(int iParam0, int iParam1)
{
	return func_78(Local_26[iParam1 /*4*/], iParam0);
}

bool func_417(int iParam0)
{
	return func_78(Local_13.f_9, iParam0);
}

bool func_418()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;

	if (Local_155.f_121 != 0)
	{
		iVar0 = func_725(0, Local_155.f_121.f_1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) + Local_155.f_121.f_2 };
			fVar4 = (ENTITY::GET_ENTITY_HEADING(iVar0) + Local_155.f_121.f_5);
			if (func_726(&Local_13, Local_155.f_121, vVar1, fVar4, 1, 1, 0, 1))
			{
				iVar5 = NETWORK::NET_TO_VEH(Local_13);
				ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(iVar5, iVar0, 0, 0, Local_155.f_121.f_2, 0f, 0f, 0f, 0f, 0f, fVar4, -1f, true, true, true, true, 2, false, 1f, 1f);
				ENTITY::SET_ENTITY_INVINCIBLE(iVar5, true);
				VEHICLE::_0x8878FF3EEE2868A9(iVar5, 0f);
				VEHICLE::_SET_VEHICLE_DIRT_LEVEL_2(iVar5, 0f);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar5, 0f);
				VEHICLE::_SET_VEHICLE_MUD_LEVEL(iVar5, 0f);
			}
		}
	}
	return true;
}

void func_419(int iParam0)
{
	if (!func_78(Local_13.f_9, iParam0))
	{
		func_149(&(Local_13.f_9), iParam0);
	}
}

int func_420(int iParam0)
{
	return Global_1149020.f_2[iParam0 /*43*/].f_2;
}

void func_421(float fParam0)
{
	if (Local_13.f_6 != fParam0)
	{
		Local_13.f_6 = fParam0;
		func_727(0, fParam0);
	}
}

int func_422(int iParam0, bool bParam1)
{
	struct<13> Var0;

	if (!func_728(iParam0, bParam1))
	{
		Var0.f_12 = -1;
		Var0.f_12.f_1 = -1;
		Var0.f_4 = 7;
		Var0.f_5 = iParam0;
		Var0.f_11 = bParam1;
		return func_414(&Var0, func_413(0, 8));
	}
	return 1;
}

int func_423()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = func_420(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::GET_ENTITY_SPEED(iVar1) > 0f)
	{
		func_421(0f);
		iVar0 = 0;
	}
	return iVar0;
}

bool func_424(var uParam0)
{
	return func_390(*uParam0, 2);
}

int func_425(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

void func_426(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_427(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_428(int iParam0, int iParam1)
{
	Local_544.f_1362[iParam0]++;
	if (Local_544.f_1362[iParam0] >= iParam1)
	{
		Local_544.f_1362[iParam0] = 0;
		return true;
	}
	return false;
}

int func_429(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Local_544.f_9 == -4.537018E+10f)
	{
		iVar0 = Local_544.f_6;
		if (!GANG::NETWORK_IS_GANG_ID_VALID(iVar0))
		{
			return 1;
		}
		iVar1 = GANG::NETWORK_GET_GANG_LEADER(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			return 1;
		}
	}
	iVar2 = func_194(2);
	if (iVar2 < Local_544.f_1308)
	{
		return 3;
	}
	if (iParam0 > 0 && iVar2 < iParam0)
	{
		return 3;
	}
	if (Local_544.f_1307 > 1 && func_436(2) < Local_544.f_1307)
	{
		return 2;
	}
	return 0;
}

void func_430(int iParam0)
{
	if (Local_301.f_12 != iParam0)
	{
		Local_301.f_12 = iParam0;
	}
}

int func_431(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Local_155;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (func_729(iVar1, 1))
		{
			if (Local_13.f_7 != iVar1)
			{
				MISC::SET_BIT(&iVar3, iVar1);
				if (!MISC::IS_BIT_SET(Local_13.f_8, iVar1) && (bParam0 || func_730(iVar1) == 0))
				{
					MISC::SET_BIT(&iVar2, iVar1);
				}
			}
		}
		iVar1++;
	}
	if (func_731(iVar2) == 0)
	{
		iVar2 = iVar3;
		Local_13.f_8 = 0;
	}
	return func_732(iVar2, iVar0, 1, 0);
}

void func_432(int iParam0)
{
	Local_13.f_7 = iParam0;
	MISC::SET_BIT(&(Local_13.f_8), iParam0);
}

int func_433(int iParam0)
{
	struct<13> Var0;

	if (!func_733(iParam0))
	{
		Var0.f_12 = -1;
		Var0.f_12.f_1 = -1;
		Var0.f_4 = 9;
		Var0.f_5 = iParam0;
		return func_414(&Var0, func_413(0, 8));
	}
	return 1;
}

int func_434(int iParam0, char* sParam1)
{
	struct<8> Var0;
	struct<16> Var8;

	Var0 = { func_734(sParam1) };
	if (!func_735(iParam0, Var0))
	{
		Var8.f_12 = -1;
		Var8.f_12.f_1 = -1;
		Var8.f_4 = 10;
		Var8.f_5 = iParam0;
		Var8.f_15 = { Var0 };
		return func_414(&Var8, func_413(0, 8));
	}
	return 1;
}

void func_435()
{
	func_434(0, "STOPPED");
	func_736(0);
	func_421(0f);
}

int func_436(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar4);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && Local_351[iVar4 /*6*/] >= iParam0)
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				iVar1 = GANG::NETWORK_GET_GANG_ID(iVar3);
				if (((!GANG::NETWORK_IS_GANG_ID_VALID(iVar1) || !GANG::NETWORK_IS_GANG_ACTIVE(iVar1)) || GANG::NETWORK_GET_NUM_GANG_MEMBERS(iVar1) <= 1) || GANG::NETWORK_IS_GANG_LEADER(iVar3))
				{
					iVar0++;
				}
			}
		}
		iVar4++;
	}
	return iVar0;
}

void func_437(int iParam0)
{
	if (Local_301.f_11 != iParam0)
	{
		Local_301.f_11 = iParam0;
	}
}

void func_438()
{
	switch (Local_13.f_11)
	{
		case 0:
			if (!func_737(Local_544.f_2))
			{
				func_738(5);
			}
			else
			{
				func_738(1);
			}
			break;
		case 1:
			if (func_739(Local_13.f_12))
			{
				func_738(2);
			}
			break;
		case 2:
			func_421(1087373312 /* Float: 6.5f */);
			func_738(3);
			break;
		case 3:
			if (!func_739(Local_13.f_12))
			{
				Local_13.f_12++;
				if (Local_13.f_12 >= func_740(Local_544.f_2))
				{
					Local_13.f_12 = 0;
				}
				func_738(4);
			}
			break;
		case 4:
			func_421(4f);
			if (Local_13.f_12 == 0)
			{
				func_738(5);
			}
			else
			{
				func_738(1);
			}
			break;
		case 5:
			break;
	}
}

void func_439()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -1315570756:
				func_741(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_440()
{
	if (!func_417(8))
	{
		return;
	}
	if (Local_544.f_1301 > func_742())
	{
		if (!func_159(&(Local_13.f_1)))
		{
			func_190(&(Local_13.f_1), 0);
		}
		else if (func_192(&(Local_13.f_1)) >= func_743())
		{
			func_432(func_431(1));
			func_207(&(Local_13.f_1));
			func_434(0, "CROSSING");
		}
	}
	else if (func_159(&(Local_13.f_1)))
	{
		func_305(&(Local_13.f_1));
	}
}

void func_441()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Local_13.f_4 == 255)
	{
		func_745(func_744());
	}
	else
	{
		bVar0 = false;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_4) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_13.f_4))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_4);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1)) && !PED::IS_PED_HOGTIED(iVar1))
			{
				iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_13.f_4);
				iVar3 = iVar2;
				if (func_416(4, iVar3))
				{
					bVar0 = true;
				}
			}
		}
		if (!bVar0)
		{
			func_745(255);
		}
	}
}

void func_442()
{
	if (func_746(&(Local_544.f_13)) > 0f)
	{
		func_747(Local_544.f_13.f_244[0 /*23*/].f_14);
	}
}

void func_443(var uParam0, int iParam1)
{
	func_748(uParam0, iParam1);
}

int func_444()
{
	return 0;
}

bool func_445(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

int func_446(int iParam0)
{
	return 0;
}

bool func_447(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 1);
}

bool func_448(struct<2> Param0, bool bParam2)
{
	int iVar0;

	iVar0 = func_657(Param0);
	return (iVar0 == 5 || (iVar0 == 6 && bParam2));
}

bool func_449(struct<2> Param0)
{
	return func_657(Param0) == 7;
}

void func_450(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1108965.f_34.f_353[iParam0 /*6*/].f_1))
	{
		return;
	}
	if (!Global_1108965.f_34.f_353[iParam0 /*6*/])
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1108965.f_34.f_353[iParam0 /*6*/].f_1))
	{
		func_749(iParam0);
		return;
	}
	if (Global_1108965.f_34.f_353[iParam0 /*6*/].f_5 != -1)
	{
		if ((Global_1295619.f_16 - Global_1108965.f_34.f_353[iParam0 /*6*/].f_4) > Global_1108965.f_34.f_353[iParam0 /*6*/].f_5)
		{
			func_749(iParam0);
		}
		return;
	}
	if (func_373(Global_1108965.f_34.f_353[iParam0 /*6*/].f_2))
	{
		return;
	}
	if (!func_73(Global_1108965.f_34.f_353[iParam0 /*6*/].f_2))
	{
		func_749(iParam0);
		return;
	}
	if (!func_373(Global_1108965.f_34.f_353[iParam0 /*6*/].f_2))
	{
		func_749(iParam0);
		return;
	}
	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1108965.f_34.f_546[iParam0 /*2*/])) != Global_1108965.f_34.f_353[iParam0 /*6*/].f_1)
	{
		func_749(iParam0);
		return;
	}
}

struct<2> func_451(int iParam0)
{
	struct<2> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

void func_452(int iParam0)
{
	int iVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (Global_1108965.f_34.f_353[iParam0 /*6*/])
	{
		func_450(iParam0);
	}
	if (!Global_1108965.f_34[iParam0 /*11*/].f_6)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		func_750(iParam0);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_750(iParam0);
		return;
	}
	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1108965.f_34.f_546[iParam0 /*2*/])) != iVar0)
	{
		func_750(iParam0);
		return;
	}
	if (GANG::_NETWORK_IS_IN_MY_GANG(iVar0))
	{
		func_751(iVar0, 0);
		return;
	}
	if (Global_1287258[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/].f_66)
	{
		func_751(iVar0, 0);
		return;
	}
	if (Global_1287258[iParam0 /*67*/].f_66)
	{
		func_751(iVar0, 0);
		return;
	}
	if (func_752(iParam0))
	{
		func_751(iVar0, 0);
		return;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(Global_1108965.f_34[iParam0 /*11*/].f_7, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 600000)
	{
		func_751(iVar0, 0);
		return;
	}
}

void func_453(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_753(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1903834.f_496[iVar0]), iVar1);
}

void func_454(int iParam0)
{
	struct<10> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 10))
	{
		return;
	}
	if (Var0.f_4 != Local_544)
	{
		return;
	}
	switch (Var0.f_5)
	{
		case 1:
			func_754(Var0.f_6, Var0.f_9);
			break;
	}
}

void func_455(int iParam0)
{
	struct<5> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		return;
	}
	if (Var0.f_1 == PLAYER::PLAYER_ID())
	{
		switch (Var0.f_4)
		{
			case 5:
				if (Local_544.f_9 != -4.537018E+10f)
				{
					func_755();
				}
				break;
		}
	}
}

bool func_456(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_457(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return true;
	}
	return false;
}

void func_458(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_459(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_460()
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(iVar0))
	{
		PLAYER::_SPECIAL_ABILITY_SET_DISABLED(iVar0, true);
	}
	if (PLAYER::_IS_SECONDARY_SPECIAL_ABILITY_ACTIVE(iVar0))
	{
		PLAYER::_SECONDARY_SPECIAL_ABILITY_SET_DISABLED(iVar0, true);
	}
	if (Local_544.f_9 != -4.537018E+10f)
	{
		if (func_506())
		{
			func_756();
		}
		if (func_757())
		{
			func_758();
		}
		if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(-8.851064E-21f) || UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(-8.851064E-21f))
		{
			UIAPPS::_CLOSE_UIAPP_BY_HASH_IMMEDIATE(-8.851064E-21f);
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::SET_FRONTEND_ACTIVE(false);
		}
		if ((ENTITY::DOES_ENTITY_EXIST(Global_33) && !ENTITY::IS_ENTITY_DEAD(Global_33)) && PED::IS_PED_INCAPACITATED(Global_33))
		{
			func_519(Global_33, 0, 0);
		}
	}
	func_250();
	func_107();
	func_109();
	func_129(0, 1);
	func_130(1);
	func_273();
	func_251(Local_544, 4);
}

void func_461()
{
	func_357(func_356(), 1, 1);
	func_646();
	func_647();
	if (Local_155.f_132 >= 0)
	{
		func_355(Local_155.f_132);
	}
}

float func_462()
{
	return 6.055515E-25f;
}

void func_463()
{
	int iVar0;

	if (!func_759(32))
	{
		iVar0 = func_420(0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && VEHICLE::IS_TRAIN_WAITING_AT_STATION(iVar0))
		{
			func_736(0);
			func_760(32);
		}
	}
}

float func_464(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1125515264 /* Float: 150f */;
		default:
			break;
	}
	return 0f;
}

int func_465()
{
	int iVar0;
	int iVar1;

	if (func_416(16, Local_544.f_1366))
	{
		return 1;
	}
	iVar0 = func_420(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = VEHICLE::GET_DRIVER_OF_VEHICLE(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
		PED::SET_PED_CONFIG_FLAG(iVar1, 263, true);
		PED::SET_PED_CONFIG_FLAG(iVar1, 16, true);
		PED::SET_PED_CONFIG_FLAG(iVar1, 245, true);
		PED::SET_PED_CONFIG_FLAG(iVar1, 16, true);
		PED::SET_PED_CONFIG_FLAG(iVar1, 17, true);
		PED::SET_PED_CONFIG_FLAG(iVar1, 18, true);
		PED::SET_PED_CONFIG_FLAG(iVar1, 19, true);
		PED::SET_PED_CONFIG_FLAG(iVar1, 6, true);
		PED::SET_PED_CONFIG_FLAG(iVar1, 310, false);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar1, true);
			PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
			PED::SET_PED_LASSO_HOGTIE_FLAG(iVar1, 0, false);
			ENTITY::SET_ENTITY_PROOFS(iVar1, 159, false);
		}
		PED::SET_PED_CAN_RAGDOLL(iVar1, false);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iVar1, 524369);
		PED::SET_PED_CONFIG_FLAG(iVar1, 2, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, 3.397268E+19f);
		func_468(16);
	}
	return 1;
}

bool func_466(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == 8.014762E-30f)
	{
		*uParam1 = { 1081117604, 1098473662, 1078611033 };
		*uParam2 = { 0f, 0f, 1f };
		return true;
	}
	return false;
}

void func_467(int iParam0, int iParam1)
{
	if (!func_78(Local_155[iParam0 /*8*/].f_2, iParam1))
	{
		func_149(&(Local_155[iParam0 /*8*/].f_2), iParam1);
	}
}

void func_468(int iParam0)
{
	if (!func_78(Local_26[Local_544.f_1366 /*4*/], iParam0))
	{
		func_149(&(Local_26[Local_544.f_1366 /*4*/]), iParam0);
	}
}

void func_469()
{
	int iVar0;
	int iVar1;

	if (Local_544.f_9 != -4.537018E+10f)
	{
		return;
	}
	if (Local_351[Local_544.f_1366 /*6*/] != 1)
	{
		func_364();
		return;
	}
	if ((GANG::NETWORK_IS_GANG_ID_VALID(Local_544.f_6) && GANG::_NETWORK_IS_GANG_MEMBER(Local_544.f_6, PLAYER::PLAYER_ID())) && !func_761())
	{
		if (func_762(Local_544, Local_544.f_7, Local_544.f_3))
		{
			func_763(1);
			func_364();
		}
		return;
	}
	iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iVar0) || (GANG::NETWORK_GET_NUM_GANG_MEMBERS(iVar0) == 1 && !func_764()))
	{
		return;
	}
	if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		if (((!func_65(1) && func_765(Local_544)) && !func_766()) && func_493(Local_544.f_1323))
		{
			Local_544.f_1439 = func_767(Local_544, Local_544.f_1, Local_544.f_3, Local_544.f_7);
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Local_544.f_1439))
			{
				if (func_768())
				{
					Local_544.f_1323 = func_494("FME_HELP_RULES_POSSE_VERSUS");
				}
				func_769(Local_544, Local_544.f_7);
				func_211(1);
			}
		}
	}
	else
	{
		iVar1 = GANG::NETWORK_GET_GANG_LEADER(iVar0);
		if (((iVar1 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1)) && func_770(Local_544, 64, iVar1)) && func_762(Local_544, Local_544.f_7, Local_544.f_3))
		{
			if (func_771(0))
			{
				func_773(func_772(), 0);
			}
			func_763(1);
			func_364();
		}
	}
}

void func_470()
{
	float fVar0;

	if (!func_156(Local_544.f_1366))
	{
		return;
	}
	if (!func_68(Local_544.f_1430))
	{
		if (!ENTITY::HAS_COLLISION_LOADED_AROUND_POSITION(Local_544.f_1430))
		{
			STREAMING::REQUEST_COLLISION_AT_COORD(Local_544.f_1430);
		}
		fVar0 = Local_544.f_1328;
		if (fVar0 > 1140850688)
		{
			fVar0 = (1140850688 - 1f);
		}
		PATHFIND::_0xCF213A5FC3ABFC08(Local_544.f_1430, Local_544.f_1430.f_1, fVar0);
	}
}

void func_471()
{
	if (func_156(Local_544.f_1366) && (Local_544.f_1421 == -6.824783E-15f || !func_774()))
	{
		func_775();
	}
	else
	{
		func_110();
	}
}

void func_472()
{
	if (func_156(Local_544.f_1366))
	{
		func_776();
	}
	else
	{
		func_111();
	}
}

void func_473()
{
	var uVar0;
	var uVar30;
	vector3 vVar39;
	float fVar42;
	var uVar43;
	var uVar44;
	vector3 vVar45;
	var uVar48;
	int iVar49;

	if (!func_156(Local_544.f_1366) || !func_777(Local_544))
	{
		func_109();
		return;
	}
	else
	{
		func_778();
	}
	if ((func_137(1) && func_779(255)) && func_780(255))
	{
		vVar39 = { Local_544.f_1430 };
		if (func_68(vVar39))
		{
			vVar39 = { Global_34 };
		}
		if (Local_544.f_10 < 4)
		{
			func_499(&vVar45, &uVar48, &iVar49);
			if ((func_137(2f) && !func_68(vVar45)) && !iVar49 == -1)
			{
				if ((!func_137(3.85186E-34f) && !func_500(Local_544.f_1, Local_544.f_3)) && func_501(Local_544.f_1, Local_544.f_3))
				{
					func_502(1, 0);
				}
				func_781(vVar45, uVar48, 0f, 0f, 0f, 0);
				return;
			}
			else
			{
				fVar42 = Local_544.f_1327;
				func_782(&uVar43, &uVar44, fVar42);
			}
		}
		else
		{
			fVar42 = Local_544.f_1328;
			func_783(Local_544.f_1, Local_544.f_2, &uVar43, &uVar44, fVar42);
		}
		fVar42 = (fVar42 - 1101004800);
		func_784(Local_544.f_1, Local_544.f_3, vVar39, uVar43, uVar44, fVar42, &uVar0, &uVar30);
		func_785(fVar42, &uVar0, &uVar30);
		func_786(&uVar0, &(Local_544.f_1426), &(Local_544.f_1427));
		func_787(&uVar0, &uVar30);
	}
}

void func_474()
{
	switch (Local_544.f_1421)
	{
		case joaat("STANDARD"):
		case joaat("STANDARD_SEAMLESS"):
			func_788(0);
			break;
		case -1477057661:
		case -1323241207:
			func_789();
			func_788(1);
			break;
		case joaat("ALL_ALLY_STANDARD_SEAMLESS"):
		case joaat("ALL_ALLY_STANDARD"):
			func_790(1);
			break;
		case 142723591:
		case 1229355466:
			func_791();
			break;
		case -1893775542:
		case joaat("ALL_ALLY_NEUTRAL"):
			func_792();
			break;
	}
}

void func_475()
{
}

void func_476()
{
	int iVar0;

	iVar0 = func_175();
	POPULATION::_0xF45E46DEECF7DF6E(iVar0, 0, 0, -1, -1);
	if (iVar0 & 2016 == 2016)
	{
		PED::_SET_AMBIENT_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::_SET_SCENARIO_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (iVar0 & 8192 == 8192)
	{
		PED::_SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::_SET_SCENARIO_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
}

void func_477()
{
	if (!func_156(Local_544.f_1366))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_33) && !ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		WEAPON::SET_ALLOW_ANY_WEAPON_DROP(Global_33, false);
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Global_33, false);
	}
}

void func_478()
{
	if (!func_156(Local_544.f_1366))
	{
		return;
	}
	if (Local_544.f_1424 < 0)
	{
		Local_544.f_1424 = 0;
		func_793(1101004800 /* Float: 20f */);
		return;
	}
	func_794(Local_544.f_1424, 1092616192 /* Float: 10f */);
	Local_544.f_1424++;
	if (Local_544.f_1424 >= 32)
	{
		Local_544.f_1424 = 0;
	}
}

void func_479()
{
}

bool func_480()
{
	return true;
}

void func_481(bool bParam0, int iParam1, bool bParam2, int iParam3, char* sParam4)
{
	bool bVar0;

	if ((func_795(bParam0, &bVar0) && func_796(bParam0)) && func_797(bParam0, -6.67918E-23f, &bVar0))
	{
		func_798(bParam0, iParam1, bParam2, iParam3, sParam4);
	}
	if (bVar0)
	{
		func_257(bParam0, 1);
	}
}

void func_482(int iParam0)
{
	if (iParam0->f_5 < 0)
	{
		iParam0->f_5 = AUDIO::GET_SOUND_ID();
		AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(iParam0->f_5, func_799(), func_800(), true);
	}
}

bool func_483(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (Local_544.f_1322 == 0 || !func_297(Local_544.f_1322))
	{
		func_369();
	}
	if (iParam0 >= 5 && (func_297(Local_544.f_1321) && !bParam3))
	{
		func_369();
		return false;
	}
	if (Local_544.f_1300 == 5 && iParam0 >= 5)
	{
		return false;
	}
	if (Local_544.f_1300 != iParam0 || iParam0 == 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			func_369();
		}
		else
		{
			Local_544.f_1322 = func_801(sParam1, iParam2, 0, 0, 1);
		}
		Local_544.f_1300 = iParam0;
		return true;
	}
	return false;
}

bool func_484(int iParam0)
{
	return !func_62(iParam0);
}

float func_485(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_486(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
			return false;
		default:
			break;
	}
	return true;
}

char* func_487()
{
	return "";
}

char* func_488()
{
	return "";
}

void func_489(var uParam0)
{
	if (Local_544.f_9 == -4.537018E+10f)
	{
		if (Local_544.f_1327 <= 0f)
		{
			*uParam0 = MAP::BLIP_ADD_FOR_COORDS(2.786954E-24f, Local_544.f_1430);
		}
		else
		{
			*uParam0 = MAP::BLIP_ADD_FOR_RADIUS(-6.432629E-08f, Local_544.f_1430, Local_544.f_1327);
			MAP::BLIP_ADD_MODIFIER(*uParam0, 1.094035E-22f);
		}
	}
	else if (Local_544.f_1327 <= 0f)
	{
		*uParam0 = MAP::BLIP_ADD_FOR_COORDS(9.897284E-17f, Local_544.f_1430);
	}
	else
	{
		*uParam0 = MAP::BLIP_ADD_FOR_RADIUS(-1.422441E+37f, Local_544.f_1430, Local_544.f_1327);
		MAP::BLIP_ADD_MODIFIER(*uParam0, 1.094035E-22f);
	}
	MAP::SET_BLIP_SPRITE(*uParam0, -2.266671E+18f, true);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, &(Local_544.f_1372));
}

struct<2> func_490(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

int func_491()
{
	return NaNf;
}

int func_492()
{
	return 0;
}

bool func_493(int iParam0)
{
	if (func_301())
	{
		return false;
	}
	else if (func_297(iParam0))
	{
		return false;
	}
	else if (func_297(Local_544.f_1321))
	{
		return false;
	}
	else if (func_62(255))
	{
		return false;
	}
	else if (!CAM::IS_SCREEN_FADED_IN())
	{
		return false;
	}
	return true;
}

int func_494(char* sParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return 0;
	}
	return func_802(sParam0, 10000, 0, 0, 0, 1);
}

struct<8> func_495(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_143(&Var8))
	{
		func_144(Var8, 3.753123E+25f, &Var0, 0);
	}
	return Var0;
}

struct<8> func_496(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_143(&Var8))
	{
		func_144(Var8, -1.527448E-33f, &Var0, 0);
	}
	return Var0;
}

char* func_497()
{
	return "";
}

void func_498(bool bParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	if (func_803())
	{
		if (func_804(255))
		{
			if (!func_167(39, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_805(Global_1893611.f_2) && func_806(Global_1893611.f_2))
		{
			func_807(Global_1893611.f_2, 0);
			if (iParam1 != 0)
			{
				Global_1893611.f_7 = iParam1;
				func_808(16);
			}
		}
		else if (func_805(Global_1893611.f_2) && !func_809(Global_1893611.f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
		}
		Global_1893611.f_7 = 0;
		func_810(16);
		func_811(bParam2);
		if (bVar0)
		{
			func_810(1);
		}
	}
}

void func_499(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = { 0f, 0f, 0f };
	*uParam1 = 0f;
	*uParam2 = -1;
	*uParam2 = func_812(Local_544.f_1, Local_544.f_2);
	if (*uParam2 == -1)
	{
	}
	else if (*uParam2 > Local_544.f_1310)
	{
	}
	else if (*uParam2 < (Local_544.f_1310 - 1))
	{
	}
	if (!*uParam2 == -1)
	{
		*uParam0 = { func_813(Local_544.f_1, Local_544.f_2, Local_544.f_1453) };
		*uParam1 = func_814(Local_544.f_1, Local_544.f_2, Local_544.f_1453);
	}
}

bool func_500(int iParam0, var uParam1)
{
	bool bVar0;
	struct<5> Var1;

	bVar0 = false;
	if (((func_36(&Var1, iParam0) && func_37(&Var1)) && func_38(&Var1, uParam1)) && func_815(&Var1))
	{
		func_42(Var1, 8.537317E+15f, &bVar0, 0);
	}
	return bVar0;
}

bool func_501(int iParam0, var uParam1)
{
	bool bVar0;
	struct<5> Var1;

	bVar0 = false;
	if (((func_36(&Var1, iParam0) && func_37(&Var1)) && func_38(&Var1, uParam1)) && func_815(&Var1))
	{
		func_42(Var1, 7.857968E+37f, &bVar0, 0);
	}
	return bVar0;
}

void func_502(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_169(70);
		if (bParam1)
		{
			func_169(73);
		}
	}
	else
	{
		func_168(70);
		func_168(73);
	}
}

void func_503(vector3 vParam0, var uParam3, bool bParam4)
{
	if (func_816(vParam0, uParam3))
	{
		func_363(1, bParam4);
	}
}

void func_504(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_505()
{
	func_336(&(Local_544.f_1330), 1, 1);
}

bool func_506()
{
	return Global_1896762.f_352;
}

int func_507(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_621(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1951897[iVar0 /*23*/].f_11 && iParam1 == Global_1951897[iVar0 /*23*/].f_4)
				{
					if (iParam3 <= Global_1951897[iVar0 /*23*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_622(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1f, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

bool func_508(int iParam0, bool bParam1)
{
	if (bParam1 && !func_331(iParam0))
	{
		return false;
	}
	return !func_621(iParam0, 4);
}

bool func_509(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_331(iParam0))
	{
		return false;
	}
	iVar0 = func_623(iParam0);
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

bool func_510(int iParam0)
{
	int iVar0;

	if (func_615(iParam0))
	{
		iVar0 = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

void func_511(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_331(iParam0))
	{
		return;
	}
	iVar0 = func_623(iParam0);
	func_625(iVar0, bParam1);
}

float func_512()
{
	return Local_544.f_1327;
}

char* func_513()
{
	return "MP_OutofAreaDirectional";
}

void func_514()
{
	if (func_159(&(Local_544.f_1338)))
	{
		func_305(&(Local_544.f_1338));
	}
}

bool func_515()
{
	float fVar0;

	fVar0 = func_485(Global_34, Local_544.f_1433);
	if (fVar0 >= Local_544.f_1327)
	{
		return true;
	}
	return false;
}

void func_516(int iParam0)
{
	if (!func_630(Global_1902878, iParam0))
	{
		func_504(&Global_1902878, iParam0);
	}
}

int func_517(int iParam0, char* sParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	bool bVar0;
	int iVar1;

	if (func_817(iParam0, sParam1, &bVar0, bParam6, vParam2, fParam5, iParam10))
	{
		func_818(iParam0, sParam1, bParam7, bParam8, bParam9);
		iVar1 = 1;
	}
	else
	{
		iVar1 = 0;
	}
	if (bVar0)
	{
		func_531(iParam0, 1, 1);
	}
	return iVar1;
}

void func_518()
{
	if (!func_819(64))
	{
		func_820(64);
	}
}

void func_519(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_33 == iParam0)
		{
		}
		ENTITY::SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

int func_520()
{
	return 0;
}

bool func_521(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	bool bVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		bVar0 = true;
	}
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		WEAPON::SET_PLAYER_PED_QUICK_SWAP_WEAPON_BY_GUID(PLAYER::PLAYER_PED_ID(), &uParam0, &uParam4);
		return true;
	}
	return false;
}

struct<2> func_522(float fParam0)
{
	struct<2> Var0;

	Var0 = fParam0;
	return Var0;
}

void func_523(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_821(bParam0, iVar0);
		iVar0++;
	}
}

void func_524()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_822(iVar0);
		iVar0++;
	}
}

void func_525()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_823(iVar0);
		iVar0++;
	}
}

void func_526(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_824(iVar0, bParam0);
		iVar0++;
	}
}

void func_527()
{
	AUDIO::_RELEASE_SHARD_SOUNDS(func_581(), func_825());
	AUDIO::_RELEASE_SHARD_SOUNDS(func_826(), func_825());
	AUDIO::_RELEASE_SHARD_SOUNDS(func_827(), func_825());
	AUDIO::_RELEASE_SHARD_SOUNDS(func_828(), func_825());
	AUDIO::_RELEASE_SHARD_SOUNDS(func_799(), func_800());
	AUDIO::_RELEASE_SHARD_SOUNDS(func_829(), func_830());
}

void func_528(bool bParam0)
{
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(bParam0->f_3))
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(bParam0->f_3));
	}
	if (UISTATEMACHINE::UI_STATE_MACHINE_EXISTS(2.040361E+17f))
	{
		UISTATEMACHINE::UI_STATE_MACHINE_DESTROY(2.040361E+17f);
	}
}

void func_529(int iParam0)
{
	if (Global_1902880.f_1 != iParam0)
	{
		Global_1902880.f_1 = iParam0;
	}
}

void func_530(int iParam0)
{
	Global_1902880 = iParam0;
}

void func_531(int iParam0, bool bParam1, bool bParam2)
{
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*iParam0))
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(iParam0);
	}
	if (UISTATEMACHINE::UI_STATE_MACHINE_EXISTS(4.148054E-32f))
	{
		UISTATEMACHINE::UI_STATE_MACHINE_DESTROY(4.148054E-32f);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0->f_2))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_2);
		iParam0->f_2 = 0;
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0->f_3))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(iParam0->f_3, false);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_3);
		iParam0->f_3 = 0;
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0->f_1))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_1);
		iParam0->f_1 = 0;
	}
	if (bParam2)
	{
		if (iParam0->f_4 >= 0)
		{
			if (!AUDIO::_HAS_SOUND_ID_FINISHED(iParam0->f_4))
			{
				AUDIO::_STOP_SOUND_WITH_ID(iParam0->f_4);
			}
			AUDIO::RELEASE_SOUND_ID(iParam0->f_4);
			iParam0->f_4 = -1;
		}
		if (iParam0->f_5 >= 0)
		{
			if (!AUDIO::_HAS_SOUND_ID_FINISHED(iParam0->f_5))
			{
				AUDIO::_STOP_SOUND_WITH_ID(iParam0->f_5);
			}
			AUDIO::RELEASE_SOUND_ID(iParam0->f_5);
			iParam0->f_5 = -1;
		}
	}
	if (bParam1)
	{
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_513()))
		{
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_513());
			HUD::_DISABLE_HUD_CONTEXT(-4.163976E-38f);
			GRAPHICS::_0x981C7D863980FA51();
		}
	}
}

void func_532()
{
	int iVar0;

	if (!MAP::DOES_BLIP_EXIST(Local_155.f_140))
	{
		iVar0 = func_420(0);
		Local_155.f_140 = MAP::BLIP_ADD_FOR_ENTITY(-3.327737E+24f, iVar0);
	}
	if (!MAP::DOES_BLIP_EXIST(Local_544.f_1359))
	{
		if ((Local_13.f_7 >= 0 && VOLUME::DOES_VOLUME_EXIST(Local_155[Local_13.f_7 /*8*/])) && !MAP::DOES_BLIP_EXIST(Local_544.f_1360))
		{
			Local_544.f_1359 = MAP::_BLIP_ADD_FOR_VOLUME(9151700f, Local_155[Local_13.f_7 /*8*/]);
			MAP::BLIP_ADD_MODIFIER(Local_544.f_1359, 1.094035E-22f);
			MAP::BLIP_ADD_MODIFIER(Local_544.f_1359, 1.231009E-30f);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_544.f_1359, "FME_KOTR_BLIP_NAME");
		}
	}
	else if (MAP::DOES_BLIP_EXIST(Local_544.f_1360))
	{
		MAP::REMOVE_BLIP(&(Local_544.f_1359));
	}
}

void func_533(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ANNESBURG"):
			Local_155.f_142[0] = VOLUME::CREATE_VOLUME_BOX(2773.655f, 2218.06f, 161.089f, 0f, 0f, -26f, 100f, 35f, 13f);
			Local_155.f_142[1] = VOLUME::CREATE_VOLUME_BOX(2125.702f, 1887.152f, 191.012f, 0f, 0f, 34f, 450f, 55f, 40f);
			break;
		case joaat("EMERALD"):
			Local_155.f_142[0] = VOLUME::CREATE_VOLUME_BOX(1731.612f, -929.858f, 46.822f, 0f, 0f, -33f, 440f, 90f, 30f);
			Local_155.f_142[1] = VOLUME::CREATE_VOLUME_BOX(2252.933f, -1325.254f, 49.096f, 0f, 0f, -38f, 350f, 58f, 20f);
			break;
		case joaat("RIGGS"):
			Local_155.f_142[0] = VOLUME::CREATE_VOLUME_BOX(-1432.634f, 210.63f, 102.948f, 0f, 0f, 74f, 400f, 200f, 40f);
			Local_155.f_142[1] = VOLUME::CREATE_VOLUME_BOX(-1075.187f, 598.102f, 97.363f, 0f, 0f, 33f, 100f, 40f, 20f);
			Local_155.f_142[2] = VOLUME::CREATE_VOLUME_BOX(-721.749f, 914.8f, 120.517f, 0f, 0f, 50f, 200f, 30f, 34f);
			break;
		case joaat("RHODES"):
			break;
		case joaat("SAINT_DENIS"):
			Local_155.f_142[0] = VOLUME::CREATE_VOLUME_BOX(2691.35f, -319.931f, 43.45f, 0f, 0f, 69f, 250f, 40f, 20f);
			break;
		case joaat("FLATNECK"):
			break;
		case joaat("VALENTINE"):
			Local_155.f_142[0] = VOLUME::CREATE_VOLUME_BOX(720.001f, 718.715f, 116.645f, 0f, 0f, 15f, 170f, 19f, 10f);
			break;
		case joaat("MACFARLANES"):
			Local_155.f_142[0] = VOLUME::CREATE_VOLUME_BOX(-3156.595f, -1906.639f, 71.2f, 0f, 0f, -22f, 650f, 40f, 50f);
			Local_155.f_142[1] = VOLUME::CREATE_VOLUME_BOX(-3724.575f, -2195.066f, -8.309f, 0f, 0f, -96f, 170f, 50f, 30f);
			break;
		case joaat("ARMADILLO"):
			break;
		case joaat("BENEDICT_POINT"):
			break;
	}
}

void func_534(int iParam0, bool bParam1)
{
	if (!func_831(113))
	{
		return;
	}
	Global_1102813.f_3671 = iParam0;
	if (!Global_1295619.f_7 && bParam1)
	{
		func_642(16);
	}
}

void func_535()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_420(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
		func_34(vVar1);
	}
}

bool func_536()
{
	switch (Local_544.f_1)
	{
		case 8:
		case 15:
		case 16:
		case 17:
			return true;
		default:
			break;
	}
	return false;
}

struct<8> func_537()
{
	struct<8> Var0;

	return Var0;
}

char* func_538(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char[] func_539()
{
	return "";
}

struct<8> func_540(int iParam0, var uParam1)
{
	char cVar0[64];
	struct<5> Var8;

	StringCopy(&cVar0, "", 64);
	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_143(&Var8))
	{
		func_144(Var8, 389842.2f, &cVar0, 0);
	}
	return cVar0;
}

char[] func_541()
{
	return "";
}

char[] func_542()
{
	return func_832();
}

char* func_543()
{
	return func_833();
}

int func_544(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4)
{
	return func_834(sParam0, sParam1, sParam2, func_295(), sParam4, sParam3, 0, 1, 1, 1);
}

int func_545(char* sParam0, char[4] cParam1, char* sParam2, char* sParam3)
{
	return func_835(sParam0, cParam1, func_295(), sParam3, sParam2, 0, 1, 1);
}

char* func_546(int iParam0, bool bParam1, bool bParam2)
{
	if (!MAP::DOES_BLIP_EXIST(iParam0))
	{
		*bParam1 = 0;
		return "";
	}
	*bParam1 = 1;
	return MISC::VAR_STRING(2, "FME_KOTR_HELP_CONTENT_RULES", iParam0);
}

bool func_547()
{
	if (func_282() & 64 == 64)
	{
		return false;
	}
	return true;
}

bool func_548(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			return false;
		default:
			break;
	}
	return true;
}

bool func_549(bool bParam0, bool bParam1, var uParam2)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		*uParam2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (func_616(*uParam2, bParam0, bParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_550(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		if (iParam2 == -1)
		{
			return 5.316992E+14f;
		}
		else
		{
			return 4.279651E-16f;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 4.279651E-16f;
	}
	iVar2 = iParam0;
	if (func_373(func_379(0)) && func_666(func_379(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = MISC::IS_BIT_SET(Global_3145858.f_6[iVar4], iVar5);
	}
	if (Global_1072759.f_21353.f_1[iVar2 /*8*/].f_5 != 0)
	{
		return Global_1072759.f_21353.f_1[iVar2 /*8*/].f_5;
	}
	if (bParam3 && Global_1072759.f_21353.f_1[iVar2 /*8*/].f_6 != 0)
	{
		return Global_1072759.f_21353.f_1[iVar2 /*8*/].f_6;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_836(iParam0);
			if (iVar6 == -64.26542f && NETWORK::_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(iParam0))
			{
				return 27.64779f;
			}
			else
			{
				return iVar6;
			}
		}
		else
		{
			return func_837(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_78(Global_1072759.f_21353.f_1[iVar2 /*8*/].f_7, 1024))
	{
		return -4.19002E+20f;
	}
	iVar7 = func_838(iParam0, 1);
	if (!bVar0)
	{
		if (func_839(iParam0, bParam1))
		{
			return func_837(iParam0);
		}
		else if (func_840(iParam0, bParam1))
		{
			if (func_580(iParam0, bParam1))
			{
				return 4.709691E+29f;
			}
			else
			{
				if (iVar7 > 5)
				{
					return -1.403075E+23f;
				}
				else if (iVar7 > 3)
				{
					return -1.403075E+23f;
				}
				else if (iVar7 > 1)
				{
					return 80048.15f;
				}
				return 1.150299E-36f;
			}
		}
	}
	else if (bVar1)
	{
		return func_836(iParam0);
	}
	else if (func_839(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return 27.64779f;
		}
		else if (func_842(func_841(func_379(0)), 1) == 9.256025E-25f)
		{
			return func_837(iParam0);
		}
		else
		{
			return func_837(iParam0);
		}
	}
	else if (func_840(iParam0, bParam1))
	{
		return 4.709691E+29f;
	}
	return 3.737303E-09f;
}

char* func_551(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_843(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

void func_552(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
}

int func_553()
{
	return Global_1102813.f_26.f_11;
}

bool func_554()
{
	return Local_544.f_1328 > 0f;
}

int func_555()
{
	return MAP::BLIP_ADD_FOR_RADIUS(-1.288118E+32f, Local_544.f_1430, Local_544.f_1328);
}

bool func_556()
{
	float fVar0;

	fVar0 = func_485(Global_34, Local_544.f_1430);
	if (fVar0 >= Local_544.f_1328)
	{
		return true;
	}
	return false;
}

int func_557()
{
	return 10000;
}

int func_558(var uParam0, float fParam1, int iParam2, var uParam3, bool bParam4, float fParam5, float fParam6, int iParam7, float fParam8, float fParam9)
{
	int iVar0;
	int iVar1;

	if ((*uParam3 >= 0 && *uParam3 < 32) && uParam0->f_244[*uParam3 /*23*/].f_14 != 255)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_244[*uParam3 /*23*/].f_14) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(uParam0->f_244[*uParam3 /*23*/].f_14))
		{
			func_844(uParam0, *uParam3);
		}
	}
	if (iParam2 == 255)
	{
		return 0;
	}
	iVar0 = *uParam3;
	if (((iVar0 < 0 || uParam0->f_244[iVar0 /*23*/].f_14 != iParam2) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_244[iVar0 /*23*/].f_14)) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(uParam0->f_244[iVar0 /*23*/].f_14))
	{
		iVar0 = -1;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (uParam0->f_244[iVar1 /*23*/].f_14 != 255)
			{
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_244[iVar1 /*23*/].f_14) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(uParam0->f_244[iVar1 /*23*/].f_14))
				{
					func_280(uParam0);
					func_844(uParam0, iVar1);
				}
			}
			if (uParam0->f_244[iVar1 /*23*/].f_14 == iParam2)
			{
				func_280(uParam0);
				iVar0 = iVar1;
				Jump @336; //curOff = 286
			}
			else if (uParam0->f_244[iVar1 /*23*/].f_14 == 255 && iVar0 == -1)
			{
				func_280(uParam0);
				iVar0 = iVar1;
			}
			iVar1++;
		}
	}
	if (iVar0 >= 0)
	{
		if (bParam4)
		{
			func_280(uParam0);
			func_844(uParam0, iVar0);
			*uParam3 = 0;
		}
		else
		{
			if ((uParam0->f_244[iVar0 /*23*/].f_5 != fParam1 || uParam0->f_244[iVar0 /*23*/].f_1 != fParam5) || uParam0->f_244[iVar0 /*23*/].f_2 != fParam6)
			{
				func_279(uParam0);
			}
			uParam0->f_244[iVar0 /*23*/].f_14 = iParam2;
			uParam0->f_244[iVar0 /*23*/].f_5 = fParam1;
			uParam0->f_244[iVar0 /*23*/].f_1 = fParam5;
			uParam0->f_244[iVar0 /*23*/].f_2 = fParam6;
			uParam0->f_244[iVar0 /*23*/].f_3 = fParam8;
			uParam0->f_244[iVar0 /*23*/].f_4 = fParam9;
			uParam0->f_244[iVar0 /*23*/] = iParam7;
			*uParam3 = iVar0;
		}
	}
	return 1;
}

void func_559(var uParam0)
{
	NETWORK::_0x7E300B5B86AB1D1A(&(uParam0->f_244), uParam0->f_244, 23, 5, 2, 1, 3, 2, 0, 4, 2, 0, 0, 0, 0);
}

bool func_560()
{
	return true;
}

void func_561(int iParam0)
{
	if (Global_1072759.f_21889[iParam0 /*18*/].f_5 != 0)
	{
		Global_1072759.f_21889[iParam0 /*18*/].f_5 = 0;
		func_845(iParam0);
	}
}

int func_562(char* sParam0, float fParam1)
{
	return func_846(sParam0, fParam1, -2, 0, 0, 0, 1);
}

void func_563(int iParam0, int iParam1)
{
	if (Global_1072759.f_21889[iParam0 /*18*/].f_5 != iParam1)
	{
		Global_1072759.f_21889[iParam0 /*18*/].f_5 = iParam1;
		func_845(iParam0);
	}
}

void func_564()
{
	if (Local_13.f_7 < 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_155[Local_13.f_7 /*8*/].f_3[Local_155.f_133]))
	{
		func_847(Local_13.f_7, Local_155.f_133);
	}
	else
	{
		func_848(Local_13.f_7, Local_155.f_133);
	}
	Local_155.f_133++;
	if (Local_155.f_133 >= 4)
	{
		Local_155.f_133 = 0;
	}
}

void func_565()
{
	if (Local_155.f_132 != Local_13.f_7)
	{
		if (MAP::DOES_BLIP_EXIST(Local_544.f_1359))
		{
			MAP::REMOVE_BLIP(&(Local_544.f_1359));
		}
		if (func_156(Local_544.f_1366))
		{
			if (Local_155.f_132 >= 0)
			{
				func_355(Local_155.f_132);
			}
		}
		if (Local_155.f_132 >= 0)
		{
			if (func_156(Local_544.f_1366) && !func_297(Local_544.f_1321))
			{
				Local_544.f_1325 = func_562(MISC::VAR_STRING(2, "FME_KOTR_GAME_UPDATE_MOVED_TITLE"), 27.64779f);
			}
			func_849(4);
		}
		func_850(Local_13.f_7);
	}
}

void func_566()
{
	if (func_156(Local_544.f_1366))
	{
		func_362(0);
	}
	else
	{
		func_362(1);
	}
}

void func_567()
{
	bool bVar0;

	bVar0 = false;
	if (func_156(Local_544.f_1366) && !ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		if (((Local_13.f_7 >= 0 && VOLUME::DOES_VOLUME_EXIST(Local_155[Local_13.f_7 /*8*/])) && ENTITY::IS_ENTITY_IN_VOLUME(Global_33, Local_155[Local_13.f_7 /*8*/], false, 0)) && !PED::IS_PED_HOGTIED(Global_33))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		func_468(4);
		if (!func_159(&(Local_26[Local_544.f_1366 /*4*/].f_1)))
		{
			func_207(&(Local_26[Local_544.f_1366 /*4*/].f_1));
		}
	}
	else
	{
		func_851(4);
		if (func_159(&(Local_26[Local_544.f_1366 /*4*/].f_1)))
		{
			func_305(&(Local_26[Local_544.f_1366 /*4*/].f_1));
		}
	}
}

void func_568()
{
	if ((Local_13.f_4 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_4)) && (Local_13.f_4 == PLAYER::PLAYER_ID() || ((GANG::_NETWORK_IS_IN_MY_GANG(Local_13.f_4) && func_416(4, Local_544.f_1366)) && !func_852())))
	{
		func_853();
	}
	else
	{
		func_854();
	}
}

void func_569()
{
	if (func_156(Local_544.f_1366))
	{
		func_855();
		func_532();
		func_856();
		func_857();
		func_858();
	}
	else
	{
		func_361();
	}
}

void func_570()
{
	if (Local_544.f_9 == -4.537018E+10f)
	{
		return;
	}
	func_859();
	func_860();
	PAD::DISABLE_CONTROL_ACTION(0, -7.654632E+14f, true);
	PAD::DISABLE_CONTROL_ACTION(0, 1.011282E+08f, true);
	PAD::DISABLE_CONTROL_ACTION(0, -2.885348E+21f, true);
	PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 28, true);
	PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::GET_PLAYER_INDEX());
	if (func_861() && func_862())
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_33) && !ENTITY::IS_ENTITY_DEAD(Global_33)) && TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33))
		{
			TASK::CLEAR_PED_TASKS(Global_33, true, false);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
	}
}

bool func_571(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Local_544.f_1366;
	}
	if ((((func_65(131072) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1))) && Local_351[iParam1 /*6*/] >= iParam0) && Local_351[iParam1 /*6*/].f_4 >= 1) && (func_553() == 4 || func_553() == 10))
	{
		return true;
	}
	return false;
}

int func_572()
{
	return Global_1102813.f_26.f_12;
}

void func_573()
{
}

bool func_574(int iParam0)
{
	return func_78(Global_1300338, iParam0);
}

void func_575(int iParam0)
{
	func_149(&Global_1300338, iParam0);
}

char* func_576(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return "";
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return "";
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return "";
	}
	return func_863(iVar0);
}

var func_577()
{
	return Local_544.f_1301;
}

bool func_578()
{
	switch (Local_544.f_1421)
	{
		case -1893775542:
		case -1323241207:
		case joaat("ALL_ALLY_STANDARD_SEAMLESS"):
		case joaat("STANDARD_SEAMLESS"):
		case 142723591:
			return true;
		default:
			break;
	}
	return false;
}

bool func_579()
{
	switch (Local_544.f_1421)
	{
		case joaat("ALL_ALLY_NEUTRAL"):
		case 1229355466:
		case joaat("ALL_ALLY_STANDARD"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_580(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28305), iVar0) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28304), iVar0))
		{
			return true;
		}
	}
	if (func_864(iParam0))
	{
		return false;
	}
	if (func_865(iParam0))
	{
		return false;
	}
	if (func_866(iParam0))
	{
		return true;
	}
	return func_867(iParam0);
}

char* func_581()
{
	return "Match_End_Timer";
}

void func_582(bool bParam0, bool bParam1, var uParam2, int iParam3, int iParam4)
{
	bool bVar0;

	iParam3 |= 8;
	if (func_795(bParam0, &bVar0) && func_868(bParam0, bParam1, iParam3, 3.661866E-19f, 4.465091E-08f, 27.64779f, 27.64779f, iParam4))
	{
		func_869(bParam1, uParam2, iParam3 | 8, 3.661866E-19f, 4.465091E-08f, 4.808429E-35f, 4.808429E-35f, iParam4);
	}
	if (bVar0)
	{
		func_602(bParam1);
		func_257(bParam0, 1);
	}
}

void func_583(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	bool bVar0;

	if (((func_795(bParam0, &bVar0) && func_796(bParam0)) && func_868(bParam0, bParam1, iParam7 | 8, 3.661866E-19f, 4.465091E-08f, 4.808429E-35f, 4.808429E-35f, iParam12)) && func_797(bParam0, -6.67918E-23f, &bVar0))
	{
		func_798(bParam0, iParam3, bParam4, iParam5, sParam6);
		func_869(bParam1, uParam2, iParam7 | 8, iParam8, iParam9, iParam10, iParam11, iParam12);
	}
	if (bVar0)
	{
		func_602(bParam1);
		func_257(bParam0, 1);
	}
}

void func_584(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	bool bVar0;

	if (((func_795(bParam0, &bVar0) && func_796(bParam0)) && func_868(bParam0, bParam1, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12)) && func_797(bParam0, 274.0287f, &bVar0))
	{
		func_798(bParam0, iParam3, bParam4, iParam5, sParam6);
		func_869(bParam1, uParam2, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12);
	}
	if (bVar0)
	{
		func_602(bParam1);
		func_257(bParam0, 1);
	}
}

void func_585(bool bParam0, var uParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam7 != 0)
	{
		iVar1 = -1;
	}
	if (((func_795(bParam0, &bVar0) && func_796(bParam0)) && func_870(bParam0, uParam1, iParam7, 0, 0, 0, 0)) && func_797(bParam0, -1.584563E+31f, &bVar0))
	{
		func_798(bParam0, iParam2, bParam3, iParam4, sParam5);
		func_871(uParam1, iParam6, bParam8, bParam9, bParam10, iVar1, 0);
	}
	if (bVar0)
	{
		func_601(uParam1, 0, 0);
		func_257(bParam0, 1);
	}
}

void func_586(bool bParam0, var uParam1, bool bParam2, var uParam3, int iParam4, bool bParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam9 != 0)
	{
		iVar1 = -1;
	}
	if ((((func_795(bParam0, &bVar0) && func_796(bParam0)) && func_870(bParam0, uParam1, iParam9, 0, 0, 0, 0)) && func_868(bParam0, bParam2, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15)) && func_797(bParam0, 274.0287f, &bVar0))
	{
		func_798(bParam0, iParam4, bParam5, iParam6, sParam7);
		func_871(uParam1, iParam8, 0, 0, 0, iVar1, 0);
		func_869(bParam2, uParam3, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15);
	}
	if (bVar0)
	{
		func_602(bParam2);
		func_601(uParam1, 0, 0);
		func_257(bParam0, 1);
	}
}

void func_587(bool bParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (iParam9 != 0)
	{
		iVar1 = -1;
	}
	if (iParam19 != 0)
	{
		iVar1 |= 1;
	}
	if (iParam20 != 0)
	{
		iVar1 |= 2;
	}
	iVar2 = 0;
	if (iParam21 != 0)
	{
		iVar2 |= 1;
	}
	if (iParam22 != 0)
	{
		iVar2 |= 2;
	}
	if ((((func_795(bParam0, &bVar0) && func_796(bParam0)) && func_870(bParam0, uParam1, iParam9, iParam19, iParam20, iParam21, iParam22)) && func_868(bParam0, bParam2, iParam13 | 8, 3.661866E-19f, 4.465091E-08f, 4.808429E-35f, 4.808429E-35f, iParam14)) && func_797(bParam0, 3.797955E-11f, &bVar0))
	{
		func_798(bParam0, iParam3, bParam5, iParam6, sParam7);
		func_871(uParam1, iParam8, bParam10, bParam11, bParam12, iVar1, iVar2);
		func_869(bParam2, uParam4, iParam13 | 8, iParam15, iParam16, iParam17, iParam18, iParam14);
	}
	if (bVar0)
	{
		func_601(uParam1, 0, 0);
		func_257(bParam0, 1);
		func_602(bParam2);
	}
}

bool func_588()
{
	return false;
}

bool func_589(var uParam0, float fParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	int iVar5;
	float fVar6;

	iVar0 = func_420(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	bVar4 = VEHICLE::_GET_TRAIN_DIRECTION(iVar0);
	iVar5 = VEHICLE::_GET_TRACK_INDEX_FROM_COORDS(vVar1);
	fVar6 = 1097859072; /* Float: 15f */
	*uParam0 = { VEHICLE::_GET_CHECKPOINT_TRAIN_SPAWN_LOCATION(iVar5, vVar1, fVar6, bVar4) };
	if (func_68(*uParam0))
	{
		return false;
	}
	*fParam1 = func_592(vVar1, *uParam0, 1);
	*iParam2 = 0;
	return true;
}

bool func_590(bool bParam0)
{
	bParam0->f_2 = -5.140563E+32f;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_591()
{
	return true;
}

float func_592(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -1028390912; /* Float: -90f */
	}
	else
	{
		fVar0 = 1119092736; /* Float: 90f */
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 1135869952);
		}
	}
	return fVar0;
}

void func_593()
{
	func_595(Local_544.f_1005[Local_544.f_1366]);
}

bool func_594()
{
	return false;
}

void func_595(int iParam0)
{
	if (iParam0 == -1)
	{
		func_233(4096, Local_544.f_1366);
		iParam0 = (func_194(2) - 1);
	}
	Local_544.f_1367 = iParam0;
}

void func_596(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	float fVar1;

	iVar0 = func_670(iParam0);
	if (iVar0 == -4.537018E+10f)
	{
		func_459(func_47(-8.839952E-30f, -4.537018E+10f), 1);
		if (iParam2 == 0)
		{
			func_459(func_522(59.71727f), 1);
		}
	}
	else
	{
		func_459(func_47(-8.839952E-30f, -1.088202E-21f), 1);
		if (iParam2 >= 0 && iParam2 < 3)
		{
			func_459(func_522(2.048397E+11f), 1);
		}
	}
	if (func_46(iParam0, uParam1, &fVar1))
	{
		func_459(func_47(-8.839952E-30f, fVar1), 1);
		if (iParam2 >= 0 && iParam2 < 3)
		{
			func_459(func_47(-5.659199E+25f, fVar1), 1);
		}
	}
}

void func_597(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	float fVar1;

	iVar0 = func_670(iParam0);
	if (iVar0 == -4.537018E+10f)
	{
		func_459(func_47(1.255702E+11f, -4.537018E+10f), 1);
		if (iParam2 == 0)
		{
			func_459(func_522(59.71727f), 1);
		}
	}
	else
	{
		func_459(func_47(1.255702E+11f, -1.088202E-21f), 1);
		if (iParam2 >= 0 && iParam2 < 3)
		{
			func_459(func_522(2.048397E+11f), 1);
		}
	}
	if (func_46(iParam0, uParam1, &fVar1))
	{
		func_459(func_47(1.255702E+11f, fVar1), 1);
		if (iParam2 >= 0 && iParam2 < 3)
		{
			func_459(func_47(-5.659199E+25f, fVar1), 1);
		}
	}
}

int func_598()
{
	struct<2> Var0;
	struct<2> Var13;
	struct<2> Var26;
	bool bVar39;
	struct<2> Var40;

	if (!func_872())
	{
		return 1;
	}
	if (Local_544.f_9 != -4.537018E+10f && !func_137(8192))
	{
		if (Local_544.f_1 != 9)
		{
			Var0.f_1 = 11;
			func_873(&Var0, Local_544.f_1367);
			func_874(&Var0);
			func_875(&Var0, Local_301.f_4);
			func_876(&Var0);
			func_877(-4.574957E+34f, &(Local_544.f_1396), &Var0, 0, 255, 0, 0);
			Local_544.f_1315++;
			Var13.f_1 = 11;
			func_879(&Var13, func_878());
			func_873(&Var13, Local_544.f_1367);
			func_874(&Var13);
			func_875(&Var13, Local_301.f_4);
			func_876(&Var13);
			func_877(-3.880084E-36f, &(Local_544.f_1400), &Var13, 0, 255, 0, 0);
			Local_544.f_1315++;
			Var26.f_1 = 11;
			func_874(&Var26);
			func_880(&Var26, Local_301.f_4);
			func_881(&Var26);
			func_882(&Var26, Local_544.f_1367);
			func_883(&Var26);
			func_876(&Var26);
			func_877(7321.754f, &(Local_544.f_1404), &Var26, 0, 255, 0, 0);
			Local_544.f_1315++;
		}
		bVar39 = func_884(Local_301.f_4);
		Var40.f_1 = 11;
		func_876(&Var40);
		if (bVar39 != 0)
		{
			func_877(bVar39, &(Local_544.f_1412), &Var40, 0, 255, 0, 0);
			Local_544.f_1416 = bVar39;
			Local_544.f_1315++;
		}
	}
	func_885();
	return 1;
}

bool func_599()
{
	return true;
}

void func_600(int iParam0, int iParam1)
{
	func_443(&(Global_1206482.f_78[iParam0 /*20*/].f_6), iParam1);
}

void func_601(var uParam0, bool bParam1, bool bParam2)
{
	struct<30> Var0;
	var uVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	var uVar39;
	int iVar40;

	if (((*uParam0)[0 /*34*/] != 0 || bParam2) || ((uParam0[0 /*34*/])->f_23 != -1 && bParam1))
	{
		Var0.f_27 = -1;
		Var0.f_28 = -1;
		Var0.f_29 = -1f;
		iVar40 = 0;
		while (iVar40 <= 6)
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_1);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_2);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_3);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_4);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_5);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_6);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_10);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_11);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_12);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_13);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_14);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_15);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_20);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_21);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_22);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_16);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_17);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_18);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_19);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((*uParam0)[iVar40 /*34*/]);
			if (!bParam1)
			{
				uVar34 = (uParam0[iVar40 /*34*/])->f_23;
				uVar35 = (uParam0[iVar40 /*34*/])->f_25;
				uVar36 = (uParam0[iVar40 /*34*/])->f_26;
				uVar37 = (uParam0[iVar40 /*34*/])->f_27;
				uVar38 = (uParam0[iVar40 /*34*/])->f_28;
				uVar39 = (uParam0[iVar40 /*34*/])->f_29;
			}
			MISC::COPY_SCRIPT_STRUCT(uParam0[iVar40 /*34*/], &Var0, 34);
			if (!bParam1)
			{
				(uParam0[iVar40 /*34*/])->f_23 = uVar34;
				(uParam0[iVar40 /*34*/])->f_25 = uVar35;
				(uParam0[iVar40 /*34*/])->f_26 = uVar36;
				(uParam0[iVar40 /*34*/])->f_27 = uVar37;
				(uParam0[iVar40 /*34*/])->f_28 = uVar38;
				(uParam0[iVar40 /*34*/])->f_29 = uVar39;
			}
			iVar40++;
		}
	}
}

void func_602(bool bParam0)
{
	struct<15> Var0;
	int iVar23;

	if (bParam0->f_11.f_2 != 0)
	{
		func_886(&(bParam0->f_11));
		func_887(bParam0);
		func_888(&(bParam0->f_11), 1);
		Global_1940072.f_110 = 0;
		Var0.f_1 = -1f;
		Var0.f_2 = -1f;
		Var0.f_3 = -1f;
		Var0.f_4 = -1f;
		Var0.f_5 = -1f;
		Var0.f_14 = 255;
		func_889(&(bParam0->f_11));
		iVar23 = 0;
		while (iVar23 <= 31)
		{
			MISC::COPY_SCRIPT_STRUCT(&(bParam0->f_244[iVar23 /*23*/]), &Var0, 23);
			iVar23++;
		}
		bParam0->f_982 = 0;
	}
}

bool func_603()
{
	return false;
}

char* func_604()
{
	return "";
}

char[] func_605()
{
	return func_890();
}

char* func_606()
{
	return func_891();
}

char[] func_607(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "FME_SHARD_OUTRO_PRIMARY_INVALID_GANG";
		case 2:
			return "FME_SHARD_OUTRO_PRIMARY_EXPIRED_GANGS";
		case 3:
			return "FME_SHARD_OUTRO_PRIMARY_EXPIRED_PLAYERS";
		default:
			break;
	}
	return "FME_SHARD_OUTRO_PRIMARY_EXPIRED";
}

int func_608(char* sParam0, char* sParam1, char* sParam2)
{
	return func_892(sParam0, func_295(), sParam2, sParam1, 0, 1);
}

struct<8> func_609()
{
	struct<8> Var0;

	return Var0;
}

char* func_610()
{
	return "";
}

struct<8> func_611()
{
	struct<8> Var0;

	return Var0;
}

char* func_612(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "FM_PLACE_1";
		case 1:
			return "FM_PLACE_2";
		case 2:
			return "FM_PLACE_3";
		case 3:
			return "FM_PLACE_4";
		case 4:
			return "FM_PLACE_5";
		case 5:
			return "FM_PLACE_6";
		case 6:
			return "FM_PLACE_7";
		case 7:
			return "FM_PLACE_8";
		case 8:
			return "FM_PLACE_9";
		case 9:
			return "FM_PLACE_10";
		case 10:
			return "FM_PLACE_11";
		case 11:
			return "FM_PLACE_12";
		case 12:
			return "FM_PLACE_13";
		case 13:
			return "FM_PLACE_14";
		case 14:
			return "FM_PLACE_15";
		case 15:
			return "FM_PLACE_16";
		case 16:
			return "FM_PLACE_17";
		case 17:
			return "FM_PLACE_18";
		case 18:
			return "FM_PLACE_19";
		case 19:
			return "FM_PLACE_20";
		case 20:
			return "FM_PLACE_21";
		case 21:
			return "FM_PLACE_22";
		case 22:
			return "FM_PLACE_23";
		case 23:
			return "FM_PLACE_24";
		case 24:
			return "FM_PLACE_25";
		case 25:
			return "FM_PLACE_26";
		case 26:
			return "FM_PLACE_27";
		case 27:
			return "FM_PLACE_28";
		case 28:
			return "FM_PLACE_29";
		case 29:
			return "FM_PLACE_30";
		case 30:
			return "FM_PLACE_31";
		case 31:
			return "FM_PLACE_32";
		default:
			break;
	}
	return "";
}

Vector3 func_613(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	else
	{
		vVar0 = { CAM::GET_CAM_ROT(iParam0, 2) };
	}
	fVar3 = BUILTIN::SIN(vVar0.z);
	fVar4 = BUILTIN::COS(vVar0.z);
	fVar5 = BUILTIN::SIN(vVar0.x);
	fVar6 = BUILTIN::COS(vVar0.x);
	return func_893((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

bool func_614()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(Global_33, 0, 16);
		return false;
	}
	return true;
}

bool func_615(int iParam0)
{
	return iParam0 != 0;
}

bool func_616(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (((iParam0 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0)) && iParam0 != PLAYER::PLAYER_ID())
	{
		iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
		if (iVar0 >= 0 && iVar0 < 32)
		{
			if (bParam1)
			{
				if (Local_351[Local_544.f_1366 /*6*/].f_2 == Local_351[iVar0 /*6*/].f_2 && (!bParam2 || Local_351[Local_544.f_1366 /*6*/].f_5 > Local_351[iVar0 /*6*/].f_5))
				{
					return true;
				}
			}
			else if (BUILTIN::FLOOR(Local_351[Local_544.f_1366 /*6*/].f_2) == BUILTIN::FLOOR(Local_351[iVar0 /*6*/].f_2) && (!bParam2 || Local_351[Local_544.f_1366 /*6*/].f_5 > Local_351[iVar0 /*6*/].f_5))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_617()
{
	return Global_1940186.f_38 == -1.197024E-12f;
}

bool func_618()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1902818, false))
	{
		return true;
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-4.809239E+20f) > 0)
	{
		return true;
	}
	if (func_23() == 0 && NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(-4.809239E+20f, -1, true, 0))
	{
		return true;
	}
	return false;
}

float func_619(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

bool func_620(bool bParam0)
{
	switch (func_894(bParam0))
	{
		case -2101244071:
		case -1070622585:
		case -1057349201:
		case -569548732:
		case 874188557:
			return true;
	}
	return false;
}

bool func_621(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_622(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
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
	func_625(iParam0, 1);
	func_626(iParam0, 1);
	func_627(iParam0, 128);
}

int func_623(int iParam0)
{
	return iParam0;
}

void func_624(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_625(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_621(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_626(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_627(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

void func_628(int iParam0)
{
	if (!func_895(iParam0))
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

void func_629(var uParam0, bool bParam1)
{
	int iVar0;

	if (!func_681(uParam0))
	{
		return;
	}
	iVar0 = Global_1295619.f_3;
	func_896();
	func_685(0);
	if (uParam0->f_1)
	{
		func_897(iVar0, 1);
	}
	if (uParam0->f_10)
	{
		if (func_338(uParam0->f_54.f_1))
		{
		}
		if (uParam0->f_54.f_2)
		{
			func_691();
		}
	}
	if (uParam0->f_12)
	{
		func_898();
	}
	if (uParam0->f_8)
	{
		func_899(PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(PLAYER::PLAYER_ID()));
		func_708(func_900());
	}
	else if (uParam0->f_4)
	{
		func_901();
		func_899(PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(PLAYER::PLAYER_ID()));
		func_708(Global_1956862.f_1549);
	}
	if (uParam0->f_3)
	{
		func_902();
	}
	if (bParam1)
	{
		func_693(0, 0);
		func_903();
	}
	func_682(&(Global_1149417.f_4804));
}

bool func_630(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_631(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_632(int iParam0, int iParam1)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Local_544.f_1420), iParam1))
	{
		func_904(iParam0);
		if (Local_544.f_9 != -4.537018E+10f)
		{
			func_905(iParam1, 0);
		}
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Local_544.f_1420), iParam1);
	}
}

void func_633(int iParam0, int iParam1)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Local_544.f_1419), iParam1))
	{
		func_906(iParam0);
		func_907(iParam0);
		func_908(iParam0);
		if (Local_544.f_9 != -4.537018E+10f)
		{
			func_905(iParam1, 0);
		}
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Local_544.f_1419), iParam1);
	}
	if (func_137(9.403955E-38f))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam0 == PLAYER::PLAYER_ID())
		{
			func_344();
			func_339(9.403955E-38f);
			if (func_137(1.504633E-36f))
			{
				func_347(1, 0, 1);
				func_339(1.504633E-36f);
			}
		}
	}
}

bool func_634(int iParam0)
{
	return func_630(Global_1203937.f_3, iParam0);
}

void func_635(int iParam0)
{
	func_631(&(Global_1203937.f_3), iParam0);
}

bool func_636(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!Global_1149417.f_5568)
	{
		return false;
	}
	if (iParam0 == Global_1295619.f_149[Global_1295619])
	{
		return ((Global_17418.f_2641.f_2 == 2 || (bParam1 && Global_17418.f_2641.f_2 == 1)) || (bParam2 && Global_17418.f_2641.f_2 == 3));
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return ((Global_1101558[iVar0 /*38*/].f_33 == 2 || (bParam1 && Global_1101558[iVar0 /*38*/].f_33 == 1)) || (bParam2 && Global_1101558[iVar0 /*38*/].f_33 == 3));
}

bool func_637(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return func_78(Global_1072759.f_21353.f_1[iParam0 /*8*/].f_7, iParam1);
}

void func_638(int iParam0)
{
	if (!func_78(Global_1072759.f_21353.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7, iParam0))
	{
		func_149(&(Global_1072759.f_21353.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7), iParam0);
	}
}

int func_639(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	int iVar17;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	iVar17 = UIFEED::_UI_FEED_POST_FEED_TICKER(&Var0, &Var13, bParam5);
	return iVar17;
}

void func_640(int iParam0, int iParam1)
{
	struct<2> Var0[7];
	int iVar15;
	int iVar16;
	struct<11> Var17;
	struct<2> Var28;
	int iVar30;

	iVar15 = GANG::_NETWORK_GET_GANG_MEMBERS(iParam1, &Var0);
	Var28 = { func_909() };
	iVar30 = 0;
	while (iVar30 <= (iVar15 - 1))
	{
		if ((func_910(Var0[iVar30 /*2*/]) && !NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var0[iVar30 /*2*/]), &Var28)) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Var0[iVar30 /*2*/])))
		{
			iVar16 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar30 /*2*/]));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar16))
			{
				Var17.f_4 = 7;
				Var17.f_5 = iParam1;
				Var17.f_10 = iParam0;
				func_911(&Var17, iVar16);
			}
		}
		iVar30++;
	}
}

void func_641(int iParam0)
{
	if (func_78(Global_1072759.f_21353.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7, iParam0))
	{
		func_443(&(Global_1072759.f_21353.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7), iParam0);
	}
}

bool func_642(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	if (MISC::_IS_BIT_FLAG_SET(&(Global_1156096.f_2166), iParam0))
	{
		return true;
	}
	if (Global_1156096.f_2165 >= 21)
	{
		return false;
	}
	Global_1156096.f_2143[Global_1156096.f_2165] = iParam0;
	Global_1156096.f_2165++;
	return true;
}

void func_643(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_644(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_645(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_155[iParam0 /*8*/].f_3[iParam1]))
	{
		func_754(ENTITY::GET_ENTITY_COORDS(Local_155[iParam0 /*8*/].f_3[iParam1], true, false), 1f);
		OBJECT::DELETE_OBJECT(&(Local_155[iParam0 /*8*/].f_3[iParam1]));
	}
}

void func_646()
{
	func_912(1);
	func_913(1);
}

void func_647()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_914(iVar0);
		iVar0++;
	}
	if (MAP::DOES_BLIP_EXIST(Local_155.f_140))
	{
		MAP::REMOVE_BLIP(&(Local_155.f_140));
	}
}

void func_648()
{
	func_912(1);
	func_913(1);
}

void func_649(int iParam0, bool bParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			if (func_759(iParam2))
			{
				return;
			}
			else
			{
				func_760(iParam2);
			}
		}
		else if (!func_759(iParam2))
		{
			return;
		}
		else
		{
			func_849(iParam2);
		}
		VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iParam0, bParam1);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iParam0, PLAYER::PLAYER_ID(), bParam1);
	}
}

int func_650(int iParam0)
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

void func_651(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_915(iParam0);
	if (!func_916(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_917(128) && !func_831(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_918() == 4)
	{
		func_168(18);
	}
	func_173(1024);
}

void func_652(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_653(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_654(struct<29> Param0, var uParam29, int iParam30)
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

void func_655(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_656(int iParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1940239.f_245.f_5, iParam0);
	func_919(iParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0);
	func_920((Global_1940239.f_245.f_1306 - 1));
}

int func_657(struct<2> Param0)
{
	int iVar0;

	if (!func_73(Param0))
	{
		return -1;
	}
	iVar0 = func_921(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1072759.f_19487.f_1[iVar0 /*3*/].f_2;
}

int func_658(struct<2> Param0)
{
	return func_922(Param0);
}

int func_659(bool bParam0, float fParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102813.f_16)
	{
		return 0;
	}
	if (!func_923())
	{
		return 0;
	}
	if (!func_17())
	{
		return 0;
	}
	Global_0 = fParam1;
	if (bParam0)
	{
		func_924(&Global_0, 8);
	}
	func_924(&Global_0, 1);
	return 1;
}

void func_660(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;

	iVar0 = func_925(func_666(Param0));
	iVar1 = func_658(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_23() == 0)
	{
		Var2 = Global_265213.f_122484.f_80.f_12;
		func_926(Param0, &Var2, iParam2);
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

void func_661(struct<2> Param0, int iParam2)
{
	if (!func_73(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_927(Param0);
	}
	else
	{
		func_928(Param0, iParam2);
	}
	func_929();
}

void func_662(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_930(iVar0, 1);
		if ((iVar1 == -4.356636E+32f || iVar1 == -1.514687E+13f) || iVar1 == 3.829501E+32f)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_931(cVar2);
			}
			else
			{
				func_932();
			}
			LAW::_0xF611DE44AEB36A1D(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_663(bool bParam0)
{
	if (!bParam0 && func_933(1.600127E-25f))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(6.069634E-12f, bParam0, 0);
	return 1;
}

void func_664(int iParam0)
{
	Global_1900460 = (Global_1900460 || iParam0);
}

int func_665(struct<2> Param0)
{
	return func_935(func_934(Param0));
}

int func_666(var uParam0, var uParam1)
{
	return uParam0;
}

int func_667(struct<2> Param0, var uParam2)
{
	int iVar0;

	iVar0 = func_936(Param0);
	if (func_936(Param0) < 0)
	{
		return 0;
	}
	func_937(iVar0, uParam2);
	return 1;
}

void func_668(bool bParam0)
{
	int iVar0;

	if (Global_1900412.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_23() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900412.f_2 == 4 && Global_1900412.f_12 != Global_1900412.f_13) && !bParam0)
	{
		Global_1900412.f_1 = Global_1900412.f_2;
		Global_1900412.f_12 = Global_1900412.f_13;
		func_938(iVar0, Global_1900412.f_12);
	}
	else
	{
		Global_1900412.f_1 = 0;
		Global_1900412.f_7 = iVar0;
		Global_1900412.f_8 = func_939();
		Global_1900412.f_9 = func_940(Global_1893611.f_2);
		Global_1900412.f_11 = func_941(Global_1896646.f_41);
		if (Global_1900412.f_9 != -1 && Global_1900412.f_9 != 0)
		{
			func_942(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
		}
		else if (Global_1900412.f_11 != -1)
		{
			func_942(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_11);
		}
		else
		{
			func_942(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
		}
	}
	Global_1900412.f_2 = 0;
}

void func_669(bool bParam0)
{
	if (Global_1203937.f_420 != 2)
	{
		return;
	}
	if (Global_1203937.f_420.f_1 == 0)
	{
		return;
	}
	Global_1203937.f_420.f_1 = 0;
	POSSE::_0xC684FF658B2E55DA(bParam0);
}

int func_670(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1206482.f_1[iParam0 /*4*/];
}

void func_671(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_943(&(Global_1149417.f_3876.f_2[func_384(iParam0, 1) /*4*/]));
}

bool func_672()
{
	if ((Global_1902818.f_35 == 1 && Global_1902818.f_5 >= 2) && Global_1902818.f_5 != 9)
	{
		return true;
	}
	return false;
}

void func_673()
{
	if (func_944())
	{
		func_945(8);
	}
}

void func_674()
{
	if (func_946())
	{
		func_945(16);
	}
}

void func_675()
{
	if (func_947())
	{
		func_945(32);
	}
}

float func_676(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	float fVar0;

	fVar0 = -3.273909E-18f;
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return fVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &fVar0, bParam1, iParam2, bParam3))
	{
		return fVar0;
	}
	return fVar0;
}

void func_677(var uParam0)
{
	func_948(uParam0, 0f);
}

bool func_678(var uParam0)
{
	return func_390(*uParam0, 2);
}

float func_679()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

void func_680(var uParam0, int iParam1)
{
	if (uParam0->f_1)
	{
		func_949(&(uParam0->f_16), 84);
	}
}

bool func_681(var uParam0)
{
	if (uParam0->f_1)
	{
		return true;
	}
	else if (uParam0->f_10)
	{
		return true;
	}
	else if (uParam0->f_9)
	{
		return true;
	}
	else if (uParam0->f_4)
	{
		return true;
	}
	else if (uParam0->f_5)
	{
		return true;
	}
	else if (uParam0->f_3)
	{
		return true;
	}
	else if (uParam0->f_8)
	{
		return true;
	}
	else if (uParam0->f_6)
	{
		return true;
	}
	else if (uParam0->f_7)
	{
		return true;
	}
	else if (uParam0->f_11)
	{
		return true;
	}
	else if (uParam0->f_2)
	{
		return true;
	}
	else if (uParam0->f_12)
	{
		return true;
	}
	return false;
}

void func_682(var uParam0)
{
	func_950(uParam0);
	func_951(&(uParam0->f_16));
	func_952(&(uParam0->f_21));
	func_953(&(uParam0->f_22));
	func_954(&(uParam0->f_25));
	func_955(&(uParam0->f_47));
	func_956(&(uParam0->f_51));
	func_957(&(uParam0->f_54));
	func_958(&(uParam0->f_57));
}

void func_683(var uParam0)
{
	if (uParam0->f_5 && !uParam0->f_7)
	{
		func_162(uParam0, 1);
	}
}

void func_684()
{
	func_959();
	func_960();
	func_899(PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(PLAYER::PLAYER_ID()));
}

void func_685(bool bParam0)
{
	int iVar0;

	if (!bParam0 && Global_1956862.f_1431.f_108)
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ATTRIBUTE::_IS_ATTRIBUTE_OVERPOWERED(iVar0, 0))
	{
		Global_1956862.f_1431.f_108.f_1 = ATTRIBUTE::_GET_ATTRIBUTE_OVERPOWER_SECONDS_LEFT(iVar0, 0);
	}
	else
	{
		Global_1956862.f_1431.f_108.f_1 = 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_OVERPOWERED(iVar0, 1))
	{
		Global_1956862.f_1431.f_108.f_3 = ATTRIBUTE::_GET_ATTRIBUTE_OVERPOWER_SECONDS_LEFT(iVar0, 1);
	}
	else
	{
		Global_1956862.f_1431.f_108.f_3 = 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_OVERPOWERED(iVar0, 2))
	{
		Global_1956862.f_1431.f_108.f_2 = ATTRIBUTE::_GET_ATTRIBUTE_OVERPOWER_SECONDS_LEFT(iVar0, 2);
	}
	else
	{
		Global_1956862.f_1431.f_108.f_2 = 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(iVar0, 0))
	{
		Global_1956862.f_1431.f_108.f_4 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_OVERPOWER_SECONDS_LEFT(iVar0, 0);
	}
	else
	{
		Global_1956862.f_1431.f_108.f_4 = 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(iVar0, 1))
	{
		Global_1956862.f_1431.f_108.f_6 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_OVERPOWER_SECONDS_LEFT(iVar0, 1);
	}
	else
	{
		Global_1956862.f_1431.f_108.f_6 = 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(iVar0, 2))
	{
		Global_1956862.f_1431.f_108.f_5 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_OVERPOWER_SECONDS_LEFT(iVar0, 2);
	}
	else
	{
		Global_1956862.f_1431.f_108.f_5 = 0f;
	}
	Global_1956862.f_1431.f_108 = 1;
}

struct<4> func_686(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar33;
	bool bVar34;
	int iVar35;
	struct<4> Var36;

	Var0.f_9 = -5.45926E-19f;
	if (!func_961(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_962() };
		if (func_963() && INVENTORY::_INVENTORY_IS_GUID_VALID(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&Var29, &Var0))
		{
			func_964(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_965(PLAYER::PLAYER_ID());
	}
	bVar33 = func_966();
	bVar34 = false;
	if (bVar33)
	{
		bVar34 = func_967(75);
	}
	iVar35 = func_968(iParam3, 0);
	if (iVar35 != 3)
	{
		if (INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_17418.f_55.f_61[iVar35 /*4*/])))
		{
			Var0 = { Global_17418.f_55.f_61[iVar35 /*4*/] };
		}
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		if (!bParam1)
		{
			return func_969();
		}
		if (!func_970(&Var0, 0))
		{
			Var36 = { func_971(bParam0) };
		}
		else
		{
			Var36 = { Var0 };
		}
		return Var36;
	}
	return Var0;
}

var func_687(int iParam0, int iParam1)
{
	func_972(iParam0, iParam1, 0);
	return Global_1903834.f_11;
}

var func_688(int iParam0, int iParam1)
{
	func_972(iParam0, iParam1, 0);
	return Global_1903834.f_22;
}

int func_689(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_972(iParam0, iParam1, 1))
	{
	}
	if (!func_973(&Global_1903834))
	{
		return 0;
	}
	iVar0 = func_974(Global_1903834.f_11, Global_1903834.f_23);
	return iVar0;
}

void func_690(var uParam0, var uParam1, var uParam2, float fParam3, int iParam4)
{
	uParam0->f_47 = uParam1;
	uParam0->f_47.f_1 = uParam2;
	uParam0->f_47.f_2 = fParam3;
	uParam0->f_47.f_3 = iParam4;
}

void func_691()
{
	func_975(&(Global_1149417.f_3876.f_480));
}

int func_692(bool bParam0)
{
	if (func_23() == -1)
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

void func_693(bool bParam0, bool bParam1)
{
	INVENTORY::_INVENTORY_USE_MISSION_INVENTORY(bParam0, bParam1);
	func_976(&(Global_1292096.f_12));
	func_976(&(Global_1292096.f_16));
}

void func_694(int iParam0)
{
	Global_1953279 = (Global_1953279 || iParam0);
}

int func_695(var uParam0)
{
	var uVar0;

	if (!func_977(32))
	{
		func_978(&(Global_1953279.f_2366));
		func_694(32);
	}
	if (uParam0->f_1 == 0)
	{
		if (!func_979(*uParam0))
		{
			if (func_977(32))
			{
				func_897(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1);
			}
			return 0;
		}
		func_980(&(Global_1953279.f_2366));
		if (!func_981(&(Global_1953279.f_1557), *uParam0, &uVar0, 0, 1, 0, 0, 0, 0, 8))
		{
			if (func_977(32))
			{
				func_897(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1);
			}
			return 0;
		}
		func_982(&(Global_1953279.f_1557));
	}
	func_712(33, Global_1149417.f_4787.f_4, 0, 0, 0);
	Global_1149417.f_4787.f_4 = *uParam0;
	Global_1149417.f_4787 = uParam0->f_1;
	func_712(30, 0, 0, 0, 0);
	func_712(27, 0, 0, 0, 0);
	func_712(32, Global_1149417.f_4787.f_4, 0, 0, 0);
	return 1;
}

void func_696()
{
	func_169(125);
}

void func_697(var uParam0)
{
	if (uParam0->f_4)
	{
		if (uParam0->f_25 == -1)
		{
			uParam0->f_25 = func_983(0, 0);
		}
		else if (uParam0->f_25 < 1)
		{
			uParam0->f_25 = 1;
		}
		else if (uParam0->f_25 > 10)
		{
			uParam0->f_25 = 10;
		}
		if (uParam0->f_25.f_1 == -1)
		{
			uParam0->f_25.f_1 = func_983(2, 0);
		}
		else if (uParam0->f_25.f_1 < 1)
		{
			uParam0->f_25.f_1 = 1;
		}
		else if (uParam0->f_25.f_1 > 10)
		{
			uParam0->f_25.f_1 = 10;
		}
		if (uParam0->f_25.f_2 == -1)
		{
			uParam0->f_25.f_2 = func_983(1, 0);
		}
		else if (uParam0->f_25.f_2 < 1)
		{
			uParam0->f_25.f_2 = 1;
		}
		else if (uParam0->f_25.f_2 > 10)
		{
			uParam0->f_25.f_2 = 10;
		}
		if (uParam0->f_25.f_3 == -1)
		{
			uParam0->f_25.f_3 = func_984(0);
		}
		else if (uParam0->f_25.f_3 < 1)
		{
			uParam0->f_25.f_3 = 1;
		}
		else if (uParam0->f_25.f_3 > 200)
		{
			uParam0->f_25.f_3 = 200;
		}
		if (uParam0->f_25.f_4 == -1)
		{
			uParam0->f_25.f_4 = func_985(0);
		}
		else if (uParam0->f_25.f_4 < 1)
		{
			uParam0->f_25.f_4 = 1;
		}
		else if (uParam0->f_25.f_4 > 200)
		{
			uParam0->f_25.f_4 = 200;
		}
		if (uParam0->f_25.f_5 == -1)
		{
			uParam0->f_25.f_5 = func_986(0);
		}
		else if (uParam0->f_25.f_5 < 1)
		{
			uParam0->f_25.f_5 = 1;
		}
		else if (uParam0->f_25.f_5 > 200)
		{
			uParam0->f_25.f_5 = 200;
		}
	}
	if (uParam0->f_5)
	{
		if (uParam0->f_25.f_6 == -1)
		{
		}
		else if (uParam0->f_25.f_6 > 18000)
		{
			uParam0->f_25.f_6 = 18000;
		}
		if (uParam0->f_25.f_7 == -1)
		{
		}
		else if (uParam0->f_25.f_7 > 18000)
		{
			uParam0->f_25.f_7 = 18000;
		}
		if (uParam0->f_25.f_8 == -1)
		{
		}
		else if (uParam0->f_25.f_8 > 18000)
		{
			uParam0->f_25.f_8 = 18000;
		}
	}
}

void func_698()
{
	func_987();
}

int func_699(int iParam0)
{
	if (func_408(&(Global_1956862.f_1565), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

void func_700(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	func_988(0, iParam0);
	func_988(2, iParam1);
	func_988(1, iParam2);
	iVar0 = func_989(iParam0);
	func_990(0, iVar0);
	iVar0 = func_989(iParam1);
	func_990(2, iVar0);
	iVar0 = func_989(iParam2);
	func_990(1, iVar0);
}

void func_701(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_991(1);
	}
	if (iParam0 < 1)
	{
		iParam0 = Global_1956862.f_1546;
	}
	else if (iParam0 > 200)
	{
		iParam0 = Global_1956862.f_1546;
	}
	switch (iParam1)
	{
		case 0:
			Global_1956862.f_1546 = iParam0;
			break;
		case 1:
			Global_1956862.f_1565.f_136 = iParam0;
			break;
	}
}

void func_702(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_991(1);
	}
	if (iParam0 < 1)
	{
		iParam0 = Global_1956862.f_1546.f_1;
	}
	else if (iParam0 > 200)
	{
		iParam0 = Global_1956862.f_1546.f_1;
	}
	switch (iParam1)
	{
		case 0:
			Global_1956862.f_1546.f_1 = iParam0;
			break;
		case 1:
			Global_1956862.f_1565.f_136.f_1 = iParam0;
			break;
	}
}

void func_703(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_991(1);
	}
	if (iParam0 < 1)
	{
		iParam0 = Global_1956862.f_1546.f_2;
	}
	else if (iParam0 > 200)
	{
		iParam0 = Global_1956862.f_1546.f_2;
	}
	switch (iParam1)
	{
		case 0:
			Global_1956862.f_1546.f_2 = iParam0;
			break;
		case 1:
			Global_1956862.f_1565.f_136.f_2 = iParam0;
			break;
	}
}

void func_704()
{
	float fVar0;

	func_988(0, func_983(0, 0));
	func_988(2, func_983(2, 0));
	func_988(1, func_983(1, 0));
	fVar0 = func_992(0, 0);
	func_990(0, BUILTIN::FLOOR(fVar0));
	fVar0 = func_992(2, 0);
	func_990(2, BUILTIN::FLOOR(fVar0));
	fVar0 = func_992(1, 0);
	func_990(1, BUILTIN::FLOOR(fVar0));
}

void func_705(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_991(2);
	}
	switch (iParam0)
	{
		case 0:
			if (iParam2 == 0)
			{
				Global_1956862.f_1431.f_81 = uParam1;
			}
			else
			{
				Global_1956862.f_1565.f_2.f_81 = uParam1;
			}
			break;
		case 2:
			if (iParam2 == 0)
			{
				Global_1956862.f_1431.f_83 = uParam1;
			}
			else
			{
				Global_1956862.f_1565.f_2.f_83 = uParam1;
			}
			break;
		case 1:
			if (iParam2 == 0)
			{
				Global_1956862.f_1431.f_82 = uParam1;
			}
			else
			{
				Global_1956862.f_1565.f_2.f_82 = uParam1;
			}
			break;
		default:
			break;
	}
}

void func_706(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	if (!func_993(iParam0, iParam2))
	{
		return;
	}
	vVar0.x = iParam0;
	vVar0.f_1 = uParam1;
	Global_1149417.f_4804.f_34[iParam2 /*3*/] = { vVar0 };
}

void func_707()
{
	func_994();
	func_995();
}

void func_708(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	func_996();
	func_997();
	func_998(&uParam0, iVar0);
	func_999(&uParam0, iVar0);
	func_1000(&uParam0, iVar0);
	func_1001(&uParam0);
	func_1002();
	func_1003(1);
}

bool func_709(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

struct<4> func_710(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_692(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_711(2.982335E+09f, func_969(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_711(2.982335E+09f, func_969(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_711(2.982335E+09f, func_969(), -5.45926E-19f, bParam0);
}

struct<4> func_711(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_714(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_692(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

void func_712(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_694(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1004(Var0);
}

void func_713(bool bParam0)
{
	struct<4> Var0;

	Var0 = { func_711(-2.399649E-08f, func_710(1), 6.727819E+25f, 1) };
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		INVENTORY::_INVENTORY_COPY_ITEM_TO_MISSION_INVENTORY(&Var0, bParam0);
	}
}

bool func_714(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_715(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_1006(func_1005(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

int func_716(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_714(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_715(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_717(bParam0, 0, 0) };
	if (func_1007(bParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_1008(0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_692(0), &uVar6, &Var1, bParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_717(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_710(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_1009(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_711(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_1010(bParam1) };
			if (bParam2 && func_1011(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_1012(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_1012(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_1013(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_1014(bParam1) };
			switch (func_894(bParam0))
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
			if (func_1015(bParam0, -2.580501E-27f))
			{
				Var0 = { func_711(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_1015(bParam0, -4.220332E-15f))
			{
				Var0 = { func_711(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_711(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_1015(bParam0, -3.171238E-21f))
			{
				Var0 = { func_711(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_1016(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_1015(bParam0, -3.171238E-21f))
			{
				Var0 = { func_711(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

int func_718(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_714(bParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam2))
	{
		return 0;
	}
	if (func_1007(bParam0, iParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_1008(0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_692(0), uParam1, iParam2, bParam0, iParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

bool func_719()
{
	return (((SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[3]) && SCRIPTS::IS_THREAD_ACTIVE(Global_1051645.f_16[3], false)) && NETWORK::_NETWORK_IS_THREAD_ACTIVE(Global_1051645.f_16[3])) && NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1051645.f_16[3]) == PLAYER::PLAYER_ID());
}

void func_720(int iParam0, int iParam1)
{
	if (Global_1148491.f_2[iParam0 /*18*/] != iParam1)
	{
		Global_1148491.f_2[iParam0 /*18*/] = iParam1;
	}
}

var func_721(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_1017() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1018());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1018());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1018());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_1019(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_1020(iVar2))
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
				if (iVar9 & 8192 != 0 && func_650(iVar2) != 1)
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
					if (!func_1021(iVar10))
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

bool func_722(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

bool func_723(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;

	if (func_68(vParam1))
	{
		return false;
	}
	if (func_1022(iParam0))
	{
		return false;
	}
	if (func_1023(iParam0))
	{
		return false;
	}
	fVar0 = 5f;
	fVar1 = func_1024(iParam0);
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
				if (fVar4 < fVar1 && !func_1025(iParam0))
				{
					return false;
				}
			}
		}
		iVar5++;
	}
	return true;
}

int func_724(int iParam0, int iParam1, vector3 vParam2, bool bParam5, struct<2> Param6, bool bParam8)
{
	struct<24> Var0;

	if (!func_1026(iParam0, iParam1, vParam2, bParam5, Param6, bParam8))
	{
		Var0.f_12 = -1;
		Var0.f_12.f_1 = -1;
		Var0.f_4 = 1;
		Var0.f_5 = iParam0;
		Var0.f_6 = iParam1;
		Var0.f_8 = { vParam2 };
		Var0.f_11 = bParam5;
		Var0.f_12 = { Param6 };
		Var0.f_23 = bParam8;
		return func_414(&Var0, func_413(0, 8));
	}
	return 1;
}

var func_725(int iParam0, int iParam1)
{
	return Global_1149020.f_2[iParam0 /*43*/].f_12[iParam1 /*2*/];
}

bool func_726(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return false;
		}
	}
	if (!func_1027(iParam1))
	{
		return false;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return false;
	}
	if (NETWORK::NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED())
	{
		return false;
	}
	if (func_1028(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_CREATE_MISSION_TRAIN(0.4263186f, vParam2, true, false, true, true));
	}
	else if (func_1029(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_CREATE_MISSION_TRAIN(-55968.55f, vParam2, true, false, true, true));
	}
	else if (iParam8 != 0 && VEHICLE::_IS_THIS_MODEL_A_DRAFT_VEHICLE(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_CREATE_DRAFT_VEHICLE(iParam1, vParam2, fParam5, true, bParam6, bParam7, iParam8, bParam9));
	}
	else
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam5, true, bParam6, bParam7, bParam9));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam6)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return true;
	}
	return false;
}

int func_727(int iParam0, float fParam1)
{
	struct<15> Var0;

	if (!func_1030(iParam0, fParam1))
	{
		Var0.f_12 = -1;
		Var0.f_12.f_1 = -1;
		Var0.f_4 = 5;
		Var0.f_5 = iParam0;
		Var0.f_14 = fParam1;
		return func_414(&Var0, func_413(0, 8));
	}
	return 1;
}

bool func_728(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_420(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return false;
	}
	VEHICLE::_SET_TRAIN_STOPS_FOR_STATIONS(iVar0, bParam1);
	return true;
}

bool func_729(int iParam0, int iParam1)
{
	return func_78(Local_155[iParam0 /*8*/].f_2, iParam1);
}

int func_730(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1) && func_1031(PLAYER::GET_PLAYER_PED(iVar1), 0, iParam0))
		{
			iVar0++;
		}
		iVar2++;
	}
	return iVar0;
}

int func_731(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_732(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[32];

	if (iParam1 > 32)
	{
	}
	iVar1 = func_1032(iParam3);
	if (iParam2 == 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iVar1, iParam1);
		return iVar0;
	}
	iVar2 = iVar1;
	while (iVar2 <= ((iVar1 + iParam1) - 1))
	{
		if ((iParam2 == 1 && MISC::IS_BIT_SET(iParam0, iVar2)) || (iParam2 == 2 && !MISC::IS_BIT_SET(iParam0, iVar2)))
		{
			iVar4[iVar3] = iVar2;
			iVar3++;
		}
		iVar2++;
	}
	if (iVar3 == 0)
	{
		return -1;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar3);
	return iVar4[iVar0];
}

bool func_733(int iParam0)
{
	int iVar0;

	iVar0 = func_420(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return false;
	}
	VEHICLE::_SET_TRAIN_LEAVE_STATION(iVar0);
	func_1033(iParam0, 8);
	return true;
}

struct<8> func_734(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

bool func_735(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)
{
	int iVar0;

	iVar0 = func_420(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return false;
	}
	VEHICLE::_TRIGGER_TRAIN_WHISTLE(iVar0, &uParam1, false, false);
	return true;
}

int func_736(int iParam0)
{
	struct<13> Var0;

	if (!func_1034(iParam0))
	{
		Var0.f_12 = -1;
		Var0.f_12.f_1 = -1;
		Var0.f_4 = 8;
		Var0.f_5 = iParam0;
		return func_414(&Var0, func_413(0, 8));
	}
	return 1;
}

bool func_737(int iParam0)
{
	switch (iParam0)
	{
		case joaat("EMERALD"):
		case joaat("RIGGS"):
		case joaat("ANNESBURG"):
		case joaat("VALENTINE"):
		case joaat("SAINT_DENIS"):
		case joaat("MACFARLANES"):
			return true;
		case joaat("ARMADILLO"):
		case joaat("BENEDICT_POINT"):
		case joaat("FLATNECK"):
		case joaat("RHODES"):
			return false;
		default:
			break;
	}
	return false;
}

void func_738(int iParam0)
{
	Local_13.f_11 = iParam0;
}

bool func_739(int iParam0)
{
	int iVar0;

	if (!func_737(Local_544.f_2))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(Local_155.f_142[iParam0]))
	{
		return false;
	}
	iVar0 = func_420(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(iVar0, Local_155.f_142[iParam0], true, 0))
	{
		return true;
	}
	return false;
}

int func_740(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("ANNESBURG"):
			iVar0 = 2;
			break;
		case joaat("EMERALD"):
			iVar0 = 2;
			break;
		case joaat("RIGGS"):
			iVar0 = 3;
			break;
		case joaat("RHODES"):
			iVar0 = 0;
			break;
		case joaat("SAINT_DENIS"):
			iVar0 = 1;
			break;
		case joaat("FLATNECK"):
			iVar0 = 0;
			break;
		case joaat("VALENTINE"):
			iVar0 = 1;
			break;
		case joaat("MACFARLANES"):
			iVar0 = 2;
			break;
		case joaat("ARMADILLO"):
			iVar0 = 0;
			break;
		case joaat("BENEDICT_POINT"):
			iVar0 = 0;
			break;
	}
	if (iVar0 > 3)
	{
		iVar0 = 3;
	}
	return iVar0;
}

void func_741(int iParam0)
{
	struct<15> Var0;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;

	if (Local_13.f_4 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_4))
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 32))
	{
		return;
	}
	if (!((Var0.f_3 || Var0.f_13) || Var0.f_14))
	{
		return;
	}
	iVar32 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar32) || !PED::IS_PED_A_PLAYER(iVar32))
	{
		return;
	}
	iVar33 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar32);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar33) || iVar33 != Local_13.f_4)
	{
		return;
	}
	iVar34 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar34) || !PED::IS_PED_A_PLAYER(iVar34))
	{
		return;
	}
	iVar35 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar34);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar35))
	{
		return;
	}
	iVar36 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar35);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar36))
	{
		return;
	}
	if (!func_416(4, iVar36))
	{
		return;
	}
	func_1035(iVar35);
}

int func_742()
{
	return 20000;
}

int func_743()
{
	return 75000;
}

int func_744()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = 255;
	if (Local_13.f_5 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_5))
	{
		iVar0 = Local_13.f_5;
		func_1035(255);
	}
	else
	{
		iVar6 = 0;
		while (iVar6 <= 31)
		{
			iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar6);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1) && func_416(4, iVar6))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
				iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3) && !PED::IS_PED_HOGTIED(iVar3))
				{
					iVar4 = func_192(&(Local_26[iVar6 /*4*/].f_1));
					if (iVar4 > iVar5)
					{
						iVar5 = iVar4;
						iVar0 = iVar2;
					}
				}
			}
			iVar6++;
		}
	}
	return iVar0;
}

void func_745(int iParam0)
{
	if (Local_13.f_4 != iParam0)
	{
		if (iParam0 == 255)
		{
		}
		Local_13.f_4 = iParam0;
		if (!func_417(8))
		{
			func_419(8);
		}
	}
}

float func_746(var uParam0)
{
	float fVar0;
	int iVar1;

	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (uParam0->f_244[iVar1 /*23*/].f_5 > fVar0)
		{
			fVar0 = uParam0->f_244[iVar1 /*23*/].f_5;
		}
		iVar1++;
	}
	return fVar0;
}

int func_747(int iParam0)
{
	if (iParam0 == 255)
	{
		return 0;
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	Local_301.f_10 = iParam0;
	return 1;
}

void func_748(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_749(int iParam0)
{
	struct<6> Var0;

	Var0.f_1 = 255;
	Var0.f_2 = -1;
	Var0.f_2.f_1 = -1;
	Var0.f_5 = -1;
	Global_1108965.f_34.f_353[iParam0 /*6*/] = { Var0 };
	Global_1287258[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/].f_66 = 0;
}

void func_750(int iParam0)
{
	struct<11> Var0;
	struct<2> Var11;

	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28302), iParam0);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28306), iParam0);
	Global_1108965.f_34[iParam0 /*11*/].f_6 = 0;
	Var0 = 4;
	Global_1108965.f_34[iParam0 /*11*/] = { Var0 };
	func_1036(iParam0);
	Var11 = 255;
	Global_1287258[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/][iParam0 /*2*/] = { Var11 };
	if ((!func_1037() || !func_1038()) || Global_1572887.f_7)
	{
		func_639(MISC::VAR_STRING(2, "PARLEY_TICKER_END_DC"), -2, 0, 0, 0, 1);
	}
	if (!func_1039(&(Global_1108965.f_34[iParam0 /*11*/].f_8), 256))
	{
		if (func_1040(Global_1108965.f_34.f_614) < 2 || Global_1108965.f_34.f_618 != 255)
		{
			func_1041(&(Global_1108965.f_34.f_613), 64);
		}
		else
		{
			func_1041(&(Global_1108965.f_34.f_613), 32);
		}
		Global_1108965.f_34.f_614 = Global_1295619.f_16;
	}
}

void func_751(int iParam0, bool bParam1)
{
	int iVar0;
	struct<11> Var1;
	struct<2> Var12;
	int iVar14;
	struct<6> Var15;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	if (!Global_1108965.f_34[iVar0 /*11*/].f_6)
	{
		return;
	}
	func_1042(iParam0);
	func_906(iParam0);
	func_907(iParam0);
	func_1043(&(Global_1108965.f_34[iVar0 /*11*/].f_8), 2);
	func_1036(iVar0);
	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1108965.f_34.f_546[iVar0 /*2*/])) == iParam0 && !func_1039(&(Global_1108965.f_34[iVar0 /*11*/].f_8), 256))
	{
		if (func_1040(Global_1108965.f_34.f_614) < 2 || Global_1108965.f_34.f_618 != 255)
		{
			func_1041(&(Global_1108965.f_34.f_613), 64);
		}
		else
		{
			func_1041(&(Global_1108965.f_34.f_613), 32);
			Global_1108965.f_34.f_618 = iParam0;
		}
		Global_1108965.f_34.f_614 = Global_1295619.f_16;
		func_639(MISC::VAR_STRING(10, "PARLEY_TICKER_END", func_551(PLAYER::GET_PLAYER_NAME(iParam0), func_550(iParam0, 1, -1, 0))), -2, 0, 0, 0, 1);
	}
	Var1 = 4;
	Global_1108965.f_34[iVar0 /*11*/] = { Var1 };
	Var12 = 255;
	Global_1287258[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/][iVar0 /*2*/] = { Var12 };
	if (!bParam1)
	{
		return;
	}
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&iVar14, iVar0);
	Var15.f_5 = PLAYER::PLAYER_ID();
	Var15.f_4 = 5;
	func_1044(&Var15, &iVar14);
}

bool func_752(int iParam0)
{
	if (Global_1287258[iParam0 /*67*/].f_66)
	{
		return Global_1287258[iParam0 /*67*/].f_66;
	}
	return Global_1108965.f_34.f_353[iParam0 /*6*/];
}

bool func_753(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

int func_754(vector3 vParam0, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (!func_156(Local_544.f_1366))
	{
		return 0;
	}
	if (!func_115())
	{
		return 0;
	}
	func_1045(-8.083521E+28f, &fVar0, &fVar1, &fVar2);
	GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(fVar0, fVar1, fVar2);
	if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_fme_smoke_puff_tint", vParam0, 0f, 0f, 0f, fParam3, false, false, false))
	{
		return 1;
	}
	return 0;
}

void func_755()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	struct<14> Var6;
	struct<14> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return;
	}
	func_1046();
	iVar1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(Global_33), "ALL WEAPONS", -5.45926E-19f, &iVar0);
	if (iVar1 < 0 || iVar0 <= 0)
	{
		INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iVar1);
		return;
	}
	if (func_1047(&bVar2, &iVar3))
	{
		func_1048(bVar2, iVar3, 0);
	}
	bVar4 = false;
	iVar5 = func_520();
	Var6.f_9 = -5.45926E-19f;
	Var20.f_9 = -5.45926E-19f;
	iVar37 = -1;
	iVar38 = -1;
	iVar39 = -1;
	iVar40 = -1;
	iVar41 = -1;
	iVar42 = -1;
	iVar43 = -1;
	iVar34 = 0;
	while (iVar34 <= (iVar0 - 1))
	{
		Var6 = { Var20 };
		if (INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iVar1, iVar34, &Var6))
		{
			if (iVar5 != 0 && Var6.f_4 == iVar5)
			{
				bVar4 = true;
			}
			if (WEAPON::IS_WEAPON_A_GUN(Var6.f_4) && WEAPON::IS_PED_CARRYING_WEAPON(Global_33, Var6.f_4))
			{
				if (WEAPON::IS_WEAPON_REVOLVER(Var6.f_4))
				{
					iVar37 = func_1049(1.33835E+22f, 0, 0, 0);
					iVar37 = (iVar37 + func_1049(984456.8f, 0, 0, 0));
					iVar37 = (iVar37 + func_1049(3.971677E-36f, 0, 0, 0));
					iVar37 = (iVar37 + func_1049(-1.163197E-36f, 0, 0, 0));
					iVar37 = (iVar37 + func_1049(2714626f, 0, 0, 0));
					iVar35 = (iVar35 + iVar37);
				}
				else if (WEAPON::IS_WEAPON_PISTOL(Var6.f_4))
				{
					iVar38 = func_1049(5.999469E+31f, 0, 0, 0);
					iVar38 = (iVar38 + func_1049(6.597174E-09f, 0, 0, 0));
					iVar38 = (iVar38 + func_1049(21284.38f, 0, 0, 0));
					iVar38 = (iVar38 + func_1049(-1.54477E-12f, 0, 0, 0));
					iVar38 = (iVar38 + func_1049(1.851758E-30f, 0, 0, 0));
					iVar35 = (iVar35 + iVar38);
				}
				else if (WEAPON::IS_WEAPON_REPEATER(Var6.f_4))
				{
					iVar39 = func_1049(-1.339106E-09f, 0, 0, 0);
					iVar39 = (iVar39 + func_1049(-1.21702E+18f, 0, 0, 0));
					iVar39 = (iVar39 + func_1049(-9.225025E-22f, 0, 0, 0));
					iVar39 = (iVar39 + func_1049(1.256526E-30f, 0, 0, 0));
					iVar39 = (iVar39 + func_1049(980.1958f, 0, 0, 0));
					iVar36 = (iVar36 + iVar39);
				}
				else if (Var6.f_4 == -2.231397E+18f)
				{
					iVar40 = func_1049(4.067655E+37f, 0, 0, 0);
					iVar40 = func_1049(-3.589852E-30f, 0, 0, 0);
					iVar36 = (iVar36 + iVar40);
				}
				else if (WEAPON::IS_WEAPON_RIFLE(Var6.f_4) || WEAPON::_IS_WEAPON_SNIPER(Var6.f_4))
				{
					iVar41 = func_1049(4.104352E-31f, 0, 0, 0);
					iVar41 = (iVar41 + func_1049(-6.814865E-08f, 0, 0, 0));
					iVar41 = (iVar41 + func_1049(1.48591E+21f, 0, 0, 0));
					iVar41 = (iVar41 + func_1049(5.663253E+27f, 0, 0, 0));
					iVar41 = (iVar41 + func_1049(3.147558E+28f, 0, 0, 0));
					iVar41 = (iVar41 + func_1049(9.230876E-32f, 0, 0, 0));
					iVar36 = (iVar36 + iVar41);
				}
				else if (WEAPON::IS_WEAPON_SHOTGUN(Var6.f_4))
				{
					iVar42 = func_1049(-2.686844E-29f, 0, 0, 0);
					iVar42 = (iVar42 + func_1049(-1.587101f, 0, 0, 0));
					iVar42 = (iVar42 + func_1049(1.249562E-27f, 0, 0, 0));
					iVar42 = (iVar42 + func_1049(8.061036E-18f, 0, 0, 0));
					if (Var6.f_4 == 7.420716E-25f)
					{
						iVar35 = (iVar35 + iVar42);
					}
					else
					{
						iVar36 = (iVar36 + iVar42);
					}
				}
				else if (func_1050(Var6.f_4))
				{
					iVar43 = func_1049(0.0001101296f, 0, 0, 0);
					iVar43 = (iVar43 + func_1049(-30.6848f, 0, 0, 0));
					iVar43 = (iVar43 + func_1049(2.813971E-28f, 0, 0, 0));
					iVar43 = (iVar43 + func_1049(-5.806771E-28f, 0, 0, 0));
					iVar43 = (iVar43 + func_1049(2.021531E-34f, 0, 0, 0));
					iVar43 = (iVar43 + func_1049(1.90694E+21f, 0, 0, 0));
					iVar36 = (iVar36 + iVar43);
				}
			}
		}
		iVar34++;
	}
	if (iVar37 >= 0)
	{
		iVar44 = 30;
		if (iVar35 < iVar44)
		{
			func_1048(1.33835E+22f, (iVar44 - iVar35), 0);
			iVar35 = iVar44;
		}
	}
	if (iVar38 >= 0)
	{
		iVar44 = 20;
		if (iVar35 < iVar44)
		{
			func_1048(5.999469E+31f, (iVar44 - iVar35), 0);
			iVar35 = iVar44;
		}
	}
	if (iVar39 >= 0)
	{
		iVar44 = 20;
		if (iVar36 < iVar44)
		{
			func_1048(-1.339106E-09f, (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	if (iVar41 >= 0)
	{
		iVar44 = 10;
		if (iVar36 < iVar44)
		{
			func_1048(4.104352E-31f, (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	if (iVar40 >= 0)
	{
		iVar44 = 10;
		if (iVar36 < iVar44)
		{
			func_1048(4.067655E+37f, (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	if (iVar42 >= 0)
	{
		iVar44 = 6;
		if (!WEAPON::IS_PED_CARRYING_WEAPON(Global_33, 7.420716E-25f))
		{
			if (iVar36 < iVar44)
			{
				func_1048(-2.686844E-29f, (iVar44 - iVar36), 0);
				iVar36 = iVar44;
			}
		}
		else if (iVar35 < iVar44)
		{
			func_1048(-2.686844E-29f, (iVar44 - iVar35), 0);
			iVar35 = iVar44;
		}
	}
	if (iVar43 >= 0)
	{
		iVar44 = 5;
		if (iVar36 < iVar44)
		{
			func_1048(0.0001101296f, (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iVar1);
	if (iVar5 != 0)
	{
		if (!bVar4 || !WEAPON::IS_PED_CARRYING_WEAPON(Global_33, iVar5))
		{
			if (func_1051(iVar5) && !func_137(8388608))
			{
				func_43(8388608);
			}
		}
	}
}

void func_756()
{
	func_1052(0);
}

bool func_757()
{
	return Global_1940239.f_2;
}

void func_758()
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(NaNf) > 0)
	{
		Global_1940239.f_13 = 1;
	}
}

bool func_759(int iParam0)
{
	return func_78(Local_155.f_141, iParam0);
}

void func_760(int iParam0)
{
	if (!func_78(Local_155.f_141, iParam0))
	{
		func_149(&(Local_155.f_141), iParam0);
	}
}

bool func_761()
{
	return (Global_1295611.f_2.f_1 == 2 || Global_1295611.f_2.f_1 == 1);
}

bool func_762(int iParam0, struct<2> Param1, var uParam3)
{
	struct<2> Var0;

	if (func_16(Param1, 0, 128))
	{
		func_1053(func_922(Param1), 8, 25, 255);
		return false;
	}
	func_769(iParam0, Param1);
	if (iParam0 == -1)
	{
		func_1053(func_922(Param1), 8, 2, 255);
		return false;
	}
	if (Global_1206482.f_78[iParam0 /*20*/].f_3 == -1)
	{
		func_1053(func_922(Param1), 8, 3, 255);
		return false;
	}
	if (func_18(iParam0, 32))
	{
		return true;
	}
	if (!func_73(Param1))
	{
		func_1053(func_922(Param1), 8, 6, 255);
		return false;
	}
	else if (!func_372(Param1))
	{
		func_1053(func_922(Param1), 8, 19, 255);
		return false;
	}
	else if (func_373(Param1))
	{
		func_1053(func_922(Param1), 8, 23, 255);
		return false;
	}
	Var0 = { func_154() };
	if (func_73(Var0) && !func_74(Var0, Param1))
	{
		if (func_155())
		{
			func_251(iParam0, 262144);
			func_1054(1);
		}
		else
		{
			func_1053(func_922(Param1), 8, 24, 255);
			return false;
		}
	}
	func_1055(Param1, 1, 1, 1);
	func_1056(Param1, 1, 0, -1);
	func_1057(2);
	func_1058(Global_1206482.f_78[iParam0 /*20*/].f_3, uParam3);
	func_251(iParam0, 32);
	func_1059(7);
	if (func_670(Global_1206482.f_78[iParam0 /*20*/].f_3) != -4.537018E+10f)
	{
		func_1060();
		SCRIPTS::_ACTIVATE_GOAL_CONTEXT(4.052186E+20f);
	}
	else
	{
		SCRIPTS::_ACTIVATE_GOAL_CONTEXT(8.579785E-11f);
		STATS::_0xE5A680A5D8B1F687(1);
	}
	return true;
}

void func_763(bool bParam0)
{
	if (Local_544.f_9 == -4.537018E+10f && !func_133(func_132(Local_544.f_1)))
	{
		func_1061(func_132(Local_544.f_1));
		if (bParam0)
		{
			func_1062(func_132(Local_544.f_1), Local_544.f_7, -1);
		}
	}
}

bool func_764()
{
	switch (Local_544.f_1)
	{
		case 18:
			return true;
		default:
			break;
	}
	return false;
}

bool func_765(var uParam0)
{
	return true;
}

bool func_766()
{
	return func_510(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(6));
}

var func_767(int iParam0, int iParam1, var uParam2, struct<2> Param3)
{
	struct<55> Var0;
	struct<8> Var55;
	int iVar63;

	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 27.64779f;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_18 = 27.64779f;
	Var0.f_19 = 27.64779f;
	Var0.f_25 = 300;
	Var0.f_33.f_8 = 27.64779f;
	Var0.f_33.f_11 = 27.64779f;
	Var0.f_33.f_12 = 8000;
	Var0.f_33.f_13 = 1.051843E+16f;
	Var0.f_33.f_15 = 1.608566E+13f;
	Var0.f_33.f_21 = 1;
	Var55 = { func_27(iParam1, uParam2) };
	Var0.f_20 = func_1063(iParam1);
	Var0.f_21 = func_1064(iParam1);
	Var0.f_26 = 6;
	Var0.f_27 = func_922(Param3);
	Var0.f_25 = 180;
	if (func_670(iParam1) != -4.537018E+10f)
	{
		Var0.f_33.f_2 = MISC::VAR_STRING(10, "FME_TOAST_OPT_IN_TITLE", &Var55);
		Var0.f_16 = MISC::VAR_STRING(2, &Var55);
		Var0.f_17 = MISC::VAR_STRING(2, "FME_PI_MENU_BODY");
		Var0.f_2 = -8.083521E+28f;
		Var0.f_19 = -8.083521E+28f;
	}
	else
	{
		iVar63 = Global_1205923.f_1[iParam0 /*26*/].f_7;
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar63))
		{
			return 0;
		}
		Var0.f_33.f_2 = MISC::VAR_STRING(10, "FME_TOAST_OPT_IN_TITLE_POSSE_VERSUS", &Var55);
		Var0.f_16 = MISC::VAR_STRING(10, "FME_PI_MENU_TITLE_POSSE_VERSUS", PLAYER::GET_PLAYER_NAME(iVar63));
		Var0.f_17 = MISC::VAR_STRING(2, &Var55);
	}
	Var0.f_33.f_3 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE_FREE_MODE_EVENT");
	Var0.f_33.f_6 = func_1063(iParam1);
	Var0.f_33.f_7 = func_1064(iParam1);
	Var0.f_33.f_17 = func_122();
	Var0.f_33.f_18 = func_121();
	Var0.f_24 = 1;
	return func_1065(Var0);
}

bool func_768()
{
	switch (Local_544.f_1)
	{
		case 18:
			return true;
		default:
			break;
	}
	return false;
}

int func_769(int iParam0, struct<2> Param1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_18(iParam0, 16))
	{
		return 1;
	}
	if (!func_73(Param1))
	{
		return 0;
	}
	else if (func_372(Param1))
	{
		return 0;
	}
	else if (func_373(Param1))
	{
		return 0;
	}
	func_1066(Param1);
	func_251(iParam0, 16);
	return 1;
}

bool func_770(int iParam0, int iParam1, int iParam2)
{
	return func_78(Global_1206151[iParam2 /*10*/][iParam0], iParam1);
}

bool func_771(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

int func_772()
{
	return Global_1915643.f_20241;
}

void func_773(int iParam0, bool bParam1)
{
	if (!func_1067(iParam0))
	{
		return;
	}
	if ((bParam1 && func_1068(iParam0, 512)) || (!bParam1 && !func_1068(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_1069(iParam0, 512);
	}
	else
	{
		func_1070(iParam0, 512);
	}
	if (func_1071(iParam0))
	{
		INVENTORY::_0x9B4E793B1CB6550A();
	}
}

bool func_774()
{
	return true;
}

void func_775()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_33) && PED::_GET_PED_CAN_BE_INCAPACITATED_THIS_FRAME(Global_33))
		{
			func_339(1024);
		}
		if (!func_137(1024))
		{
			func_350(0);
			func_43(1024);
		}
	}
}

void func_776()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && func_156(iVar0))
		{
			func_1072(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
		}
		iVar0++;
	}
	if (!func_137(2048))
	{
		if (Local_544.f_9 == -4.537018E+10f)
		{
			func_351(1);
		}
		else
		{
			func_352(0);
			LAW::_ENABLE_DISPATCH_LAW_2(false);
			LAW::_ENABLE_DISPATCH_LAW(false);
		}
		func_43(2048);
	}
}

bool func_777(var uParam0)
{
	return true;
}

void func_778()
{
	if (!func_137(1))
	{
		func_43(1);
	}
	if (!func_779(255))
	{
		func_349(1);
	}
}

bool func_779(int iParam0)
{
	return func_167(49, iParam0);
}

bool func_780(int iParam0)
{
	return func_167(48, iParam0);
}

int func_781(vector3 vParam0, float fParam3, vector3 vParam4, int iParam7)
{
	if (func_780(255))
	{
		func_1073(&(Global_1102813.f_3869));
		Global_1102813.f_3869.f_6 = { vParam0 };
		if (ENTITY::DOES_ENTITY_EXIST(iParam7))
		{
			Global_1102813.f_3869.f_4 = iParam7;
			Global_1102813.f_3869.f_5 = 3;
		}
		else if (!func_68(vParam4))
		{
			Global_1102813.f_3869.f_1 = { vParam4 };
			Global_1102813.f_3869.f_5 = 2;
		}
		else
		{
			Global_1102813.f_3869 = fParam3;
			Global_1102813.f_3869.f_5 = 1;
		}
		func_1074(Global_1102813.f_3869, 36);
		func_169(4);
		func_168(48);
		return 1;
	}
	return 0;
}

int func_782(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 1f;
	*uParam1 = uParam2;
	if (*uParam1 <= *uParam0)
	{
		*uParam1 = 1128792064; /* Float: 200f */
	}
	else if (*uParam1 > 1128792064)
	{
		*uParam1 = 1128792064; /* Float: 200f */
	}
	return 1;
}

int func_783(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	struct<5> Var0;

	*uParam2 = 1f;
	*uParam3 = uParam4;
	if (((func_36(&Var0, iParam0) && func_44(&Var0)) && func_45(&Var0, uParam1)) && func_815(&Var0))
	{
		func_145(Var0, -2.391285E-32f, uParam2, 0);
		func_145(Var0, -9.198502E+23f, uParam3, 0);
	}
	if (*uParam3 <= *uParam2)
	{
		*uParam3 = 1128792064; /* Float: 200f */
	}
	else if (*uParam3 > 1128792064)
	{
		*uParam3 = 1128792064; /* Float: 200f */
	}
	return 1;
}

void func_784(int iParam0, var uParam1, vector3 vParam2, float fParam5, float fParam6, float fParam7, var uParam8, var uParam9)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar9;
	var uVar12;
	int iVar13;

	vVar0 = { vParam2 };
	if (fParam7 > fParam6)
	{
		fVar3 = (fParam7 - fParam6);
		iVar5 = 32;
		iVar13 = 0;
		iVar13 = 0;
		while (iVar13 <= 20)
		{
			vVar6 = { func_1075(vParam2, fVar3, 0f) };
			if (func_1076(&vVar6, 1176256410))
			{
				uVar12 = func_721(vParam2, 0f, 0f, 0f, fParam6, fParam6, fParam6, -2.19652E+23f, 1, 8);
				iVar4 = SCRIPTS::COUNT_PLAYER_BITS(&uVar12);
				if (iVar4 < iVar5)
				{
					iVar5 = iVar4;
					vVar9 = { vVar6 };
				}
			}
			iVar13++;
		}
		if (!func_68(vVar9))
		{
			vParam2 = { vVar9 };
		}
	}
	uParam8->f_5 = 2;
	uParam8->f_1 = { vVar0 };
	uParam8->f_17.f_6 = { vParam2 };
	uParam8->f_17 = { fParam6, fParam6, fParam6 };
	if (fParam6 > 1097859072)
	{
		uParam8->f_17 = { fParam6, fParam6, 1097859072 /* Float: 15f */ };
	}
	uParam8->f_17.f_9 = -2.19652E+23f;
	uParam8->f_6.f_6 = { vParam2 };
	uParam8->f_6 = { fParam5, fParam5, fParam5 };
	if (fParam5 > 1097859072)
	{
		uParam8->f_6 = { fParam5, fParam5, 1097859072 /* Float: 15f */ };
	}
	uParam8->f_6.f_9 = -2.19652E+23f;
	uParam8->f_16 = 1;
	uParam9->f_5 = 2;
	uParam9->f_1 = { vVar0 };
	uParam9->f_6 = { vParam2 };
	NETWORK::_NETWORK_SPAWN_CONFIG_ADD_PROPERTY_PREFERENCE(9, true, 2f);
	NETWORK::_NETWORK_SPAWN_CONFIG_ADD_PROPERTY_PREFERENCE(7, true, 2f);
	NETWORK::_NETWORK_SPAWN_CONFIG_ADD_PROPERTY_PREFERENCE(15, false, 0.75f);
	NETWORK::_NETWORK_SPAWN_CONFIG_ADD_PROPERTY_PREFERENCE(13, false, 0.75f);
	NETWORK::_NETWORK_SPAWN_CONFIG_ADD_PROPERTY_PREFERENCE(19, true, 0.05f);
	NETWORK::_NETWORK_SPAWN_CONFIG_ADD_PROPERTY_SCRIPTED(1, false);
	NETWORK::_NETWORK_SPAWN_CONFIG_ADD_PROPERTY_SCRIPTED(2, true);
	NETWORK::_NETWORK_SPAWN_CONFIG_ADD_PROPERTY_SCRIPTED(3, false);
	func_1077(1);
	if (((!func_137(3.85186E-34f) && !func_571(2, -1)) && !func_500(iParam0, uParam1)) && func_501(iParam0, uParam1))
	{
		func_502(1, 0);
	}
}

void func_785(float fParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	int iVar18;
	int iVar19;

	if (VOLUME::DOES_VOLUME_EXIST(Local_155.f_131))
	{
		NETWORK::_0x405DDEFB1F531B18(Local_155.f_131, false, 0, 0);
	}
	if (Local_155.f_132 < 0)
	{
		return;
	}
	iVar0 = func_420(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = iVar0;
	iVar2 = func_725(0, Local_155.f_132);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		iVar1 = iVar2;
	}
	fVar3 = (fParam0 * 1036831949);
	if (fVar3 > uParam1->f_17)
	{
		fVar3 = uParam1->f_17;
	}
	iVar7 = func_1078(0);
	iVar8 = func_725(0, (iVar7 - 1));
	if (ENTITY::DOES_ENTITY_EXIST(iVar8))
	{
		vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar8, true, false) };
	}
	else
	{
		vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	}
	vVar9 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar8) };
	vVar12 = { vVar4 - vVar9 * FtoV((fParam0 * 1056964608)) };
	vVar15 = { VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(vVar12) };
	uParam1->f_17.f_6 = { vVar15 };
	uParam1->f_17 = { fVar3, fVar3, uParam1->f_17.f_2 };
	uParam1->f_6.f_6 = { vVar15 };
	uParam1->f_4 = iVar1;
	uParam1->f_5 = 3;
	uParam2->f_6 = { vVar15 };
	uParam2->f_4 = iVar1;
	uParam2->f_5 = 3;
	func_169(101);
	iVar18 = VEHICLE::_GET_TRAIN_CARRIAGE_TRAILER_NUMBER(iVar0);
	iVar19 = 0;
	iVar19 = 0;
	while (iVar19 <= (iVar18 - 1))
	{
		if (VOLUME::DOES_VOLUME_EXIST(Local_155[iVar19 /*8*/].f_1))
		{
			NETWORK::_0x405DDEFB1F531B18(Local_155[iVar19 /*8*/].f_1, false, 0, 0);
		}
		iVar19++;
	}
}

void func_786(var uParam0, var uParam1, var uParam2)
{
	if (VOLUME::DOES_VOLUME_EXIST(*uParam2))
	{
		VOLUME::DELETE_VOLUME(*uParam2);
	}
	if (!func_68(uParam0->f_17))
	{
		*uParam2 = VOLUME::CREATE_VOLUME_SPHERE(uParam0->f_17.f_6, 0f, 0f, 0f, uParam0->f_17);
		NETWORK::_0x405DDEFB1F531B18(*uParam2, true, 0, 0);
	}
	if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
	{
		VOLUME::DELETE_VOLUME(*uParam1);
	}
	if (!func_68(uParam0->f_6))
	{
		*uParam1 = VOLUME::CREATE_VOLUME_SPHERE(uParam0->f_6.f_6, 0f, 0f, 0f, uParam0->f_6);
		NETWORK::_0x405DDEFB1F531B18(*uParam1, false, 0, 0);
	}
	NETWORK::NETWORK_SPAWN_CONFIG_SET_GROUND_TO_ROOT_OFFSET(1f);
}

void func_787(var uParam0, var uParam1)
{
	func_1079(*uParam0, *uParam1, 0, 0, 1);
}

void func_788(bool bParam0)
{
	func_821(bParam0, Local_544.f_1422);
	Local_544.f_1422++;
	if (Local_544.f_1422 >= 32)
	{
		Local_544.f_1422 = 0;
	}
}

void func_789()
{
	func_504(&(Global_1072759.f_22945.f_3), 4);
}

void func_790(bool bParam0)
{
	func_1080();
	func_824(Local_544.f_1422, bParam0);
	Local_544.f_1422++;
	if (Local_544.f_1422 >= 32)
	{
		Local_544.f_1422 = 0;
	}
}

void func_791()
{
	func_1080();
	func_822(Local_544.f_1422);
	Local_544.f_1422++;
	if (Local_544.f_1422 >= 32)
	{
		Local_544.f_1422 = 0;
	}
}

void func_792()
{
	func_1080();
	func_823(Local_544.f_1422);
	Local_544.f_1422++;
	if (Local_544.f_1422 >= 32)
	{
		Local_544.f_1422 = 0;
	}
}

void func_793(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID()) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
			NETWORK::_0x5A91BCEF74944E93(iVar0, fParam0);
		}
		iVar1++;
	}
}

void func_794(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID()) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
		if (func_156(iVar1))
		{
			NETWORK::_0x5A91BCEF74944E93(iVar0, fParam1);
		}
	}
}

int func_795(bool bParam0, bool bParam1)
{
	if (!func_1081())
	{
		*bParam1 = 1;
		return 0;
	}
	switch (bParam0->f_2)
	{
		case 0:
			if (func_1082())
			{
				bParam0->f_3 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-3.715775E+34f);
				func_530(1);
				func_1083(bParam0, 1);
			}
			return 0;
		case 1:
			if (!func_1084())
			{
				return 0;
			}
			func_1083(bParam0, 2);
			break;
	}
	Global_1940072.f_110 = 1;
	return 1;
}

int func_796(bool bParam0)
{
	if (bParam0->f_5 == 0)
	{
		bParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "centralInfoDatastore");
		func_1085(bParam0->f_5, &(bParam0->f_6), 0);
		func_1085(bParam0->f_5, &(bParam0->f_7), 1);
		func_1085(bParam0->f_5, &(bParam0->f_8), 37);
		func_1086(bParam0->f_8, 1);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(bParam0->f_5, "timerMessageString", "");
		return 0;
	}
	return 1;
}

int func_797(bool bParam0, int iParam1, bool bParam2)
{
	switch (bParam0->f_1)
	{
		case 0:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(bParam0->f_3))
			{
				func_1087(bParam0, 1);
			}
			break;
		case 1:
			*bParam0 = iParam1;
			if (*bParam0 != 0)
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(bParam0->f_3, *bParam0);
				UISTATEMACHINE::UI_STATE_MACHINE_CREATE(2.040361E+17f, bParam0->f_3);
			}
			func_1087(bParam0, 2);
			break;
		case 2:
			if (iParam1 != *bParam0)
			{
				func_1087(bParam0, 3);
				return 0;
			}
			return 1;
		case 3:
			if (UISTATEMACHINE::UI_STATE_MACHINE_EXISTS(2.040361E+17f) && UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(2.040361E+17f))
			{
				UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_EXIT(2.040361E+17f, 0);
				func_1087(bParam0, 4);
			}
			else
			{
				func_1087(bParam0, 0);
			}
			break;
		case 4:
			if (!UISTATEMACHINE::_UI_STATE_MACHINE_IS_EXITED(2.040361E+17f))
			{
				*bParam2 = 1;
				func_1087(bParam0, 0);
			}
			break;
	}
	return 0;
}

void func_798(bool bParam0, int iParam1, bool bParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	bool bVar1;

	sVar0 = func_1088(iParam1, bParam2, 3, 0, 0, 0);
	if (bParam0->f_13 != iParam1)
	{
		func_1089(bParam0->f_6, sVar0);
	}
	bVar1 = iParam1 <= iParam3;
	if (bParam0->f_14 != bVar1)
	{
		func_1086(bParam0->f_7, bVar1);
		bParam0->f_14 = bVar1;
	}
	func_1090(bParam0, iParam1, sParam4);
	func_1091(bParam0, iParam1);
	bParam0->f_13 = iParam1;
}

char* func_799()
{
	return "321_Countdown";
}

char* func_800()
{
	return "HUD_MP_FREE_MODE";
}

int func_801(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
	return func_1092(sParam0, iParam1, iParam2, iParam3, 0, bParam4);
}

int func_802(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

bool func_803()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_4;
}

bool func_804(int iParam0)
{
	return func_167(27, iParam0);
}

bool func_805(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_806(int iParam0)
{
	if (!func_805(iParam0))
	{
		return false;
	}
	return func_809(iParam0, 8);
}

void func_807(int iParam0, int iParam1)
{
	if (!func_805(iParam0))
	{
		return;
	}
	Global_1887363[iParam0 /*36*/].f_20 = iParam1;
}

void func_808(int iParam0)
{
	Global_1893611 = (Global_1893611 || iParam0);
}

bool func_809(int iParam0, float fParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		return (Global_8130[iParam0 /*11*/] && fParam1) != 0;
	}
	return (Global_1072759.f_19611[iParam0 /*11*/] && fParam1) != 0;
}

void func_810(int iParam0)
{
	Global_1893611 = (Global_1893611 - (Global_1893611 && iParam0));
}

bool func_811(bool bParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_809(iVar1, 1))
		{
			if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1887363[iVar1 /*36*/].f_27)))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1887363[iVar1 /*36*/].f_27));
			}
		}
		if (Global_1887363[iVar1 /*36*/].f_10 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1887363[iVar1 /*36*/].f_10, false))
			{
				if (func_23() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1887363[iVar1 /*36*/].f_10, 523);
				}
				else if (!SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(Global_1887363[iVar1 /*36*/].f_10))
				{
					SCRIPTS::_REQUEST_THREAD_EXIT(Global_1887363[iVar1 /*36*/].f_10);
				}
			}
			else if (func_809(iVar1, 2))
			{
				if (func_23() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_1887363[iVar1 /*36*/].f_27), 523);
				}
				else
				{
					SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(MISC::GET_HASH_KEY(&(Global_1887363[iVar1 /*36*/].f_27)));
				}
			}
			if (!SCRIPTS::DOES_THREAD_EXIST(Global_1887363[iVar1 /*36*/].f_10))
			{
				Global_1887363[iVar1 /*36*/].f_10 = 0;
				func_1093(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		else if (bParam0)
		{
			if (func_809(iVar1, 1))
			{
				func_1093(iVar1, 1);
			}
		}
		iVar1++;
	}
	return !bVar0;
}

int func_812(int iParam0, var uParam1)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1)) && func_1094(&Var1))
	{
		iVar0 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(Var1, Var1.f_1);
	}
	return iVar0;
}

Vector3 func_813(int iParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	struct<5> Var3;

	vVar0 = { 0f, 0f, 0f };
	if (((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1)) && func_1094(&Var3))
	{
		if (func_1095(&Var3, uParam2))
		{
			if (func_146(Var3, 5.3786E+35f, &vVar0, 1))
			{
			}
		}
	}
	return vVar0;
}

float func_814(int iParam0, var uParam1, var uParam2)
{
	float fVar0;
	struct<5> Var1;

	if (((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1)) && func_1094(&Var1))
	{
		if (func_1095(&Var1, uParam2))
		{
			if (func_145(Var1, -1.524697E+32f, &fVar0, 1))
			{
			}
		}
	}
	return fVar0;
}

bool func_815(bool bParam0)
{
	bParam0->f_2 = 6.990236E-15f;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_816(vector3 vParam0, var uParam3)
{
	if (func_68(vParam0))
	{
		return false;
	}
	if (func_650(255) == 4)
	{
		return false;
	}
	if (func_167(4, 255))
	{
	}
	func_169(4);
	func_1073(&(Global_1102813.f_3869));
	Global_1102813.f_3869.f_6 = { vParam0 };
	Global_1102813.f_3869 = uParam3;
	Global_1102813.f_3869.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_1074(Global_1102813.f_3869, 36);
	return true;
}

bool func_817(int iParam0, char* sParam1, bool bParam2, bool bParam3, vector3 vParam4, float fParam7, bool bParam8)
{
	bool bVar0;

	if (!func_1081() || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		*bParam2 = 1;
		return false;
	}
	if (iParam0->f_1 == 0)
	{
		iParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "MPCountdown");
		iParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iParam0->f_1, "Timer", MISC::VAR_STRING(2, "FME_COUNTDOWN", sParam1));
		iParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iParam0->f_1, "showTimer", true);
		if ((bParam3 && !func_68(vParam4)) && fParam7 > 0f)
		{
			GRAPHICS::ANIMPOSTFX_PLAY(func_513());
			HUD::_ENABLE_HUD_CONTEXT(-4.163976E-38f);
			fParam7 = func_1096(fParam7, 0f, 1148846080 /* Float: 1000f */);
			if (bParam8 == 0 || !VOLUME::DOES_VOLUME_EXIST(bParam8))
			{
				bVar0 = VOLUME::CREATE_VOLUME_SPHERE(vParam4, 0f, 0f, 0f, fParam7, fParam7, fParam7);
				GRAPHICS::_0x735762E8D7573E42(1, bVar0, 5f);
				VOLUME::DELETE_VOLUME(bVar0);
			}
			else
			{
				GRAPHICS::_0x735762E8D7573E42(1, bParam8, 5f);
			}
		}
	}
	return true;
}

void func_818(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0->f_2))
	{
		if (bParam2 && iParam1 < 1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(iParam0->f_2, MISC::VAR_STRING(2, "GEIRON_RACE_GO"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(iParam0->f_2, MISC::VAR_STRING(2, "FME_COUNTDOWN", iParam1));
		}
		if (bParam3)
		{
			if (iParam0->f_5 < 0)
			{
				if (iParam0->f_4 >= 0)
				{
					if (!AUDIO::_HAS_SOUND_ID_FINISHED(iParam0->f_4))
					{
						AUDIO::_STOP_SOUND_WITH_ID(iParam0->f_4);
					}
					AUDIO::RELEASE_SOUND_ID(iParam0->f_4);
					iParam0->f_4 = -1;
				}
				func_482(iParam0);
			}
		}
		else if (bParam4)
		{
			if (iParam0->f_4 < 0)
			{
				iParam0->f_4 = AUDIO::GET_SOUND_ID();
				AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(iParam0->f_4, func_828(), func_825(), true);
				AUDIO::_SET_VARIABLE_ON_SOUND_WITH_ID(iParam0->f_4, "Time", BUILTIN::TO_FLOAT(iParam1));
			}
		}
	}
}

bool func_819(int iParam0)
{
	return (Global_1102813.f_3520 && iParam0) != 0;
}

void func_820(int iParam0)
{
	if (!func_819(iParam0))
	{
		Global_1102813.f_3520 = (Global_1102813.f_3520 || iParam0);
	}
}

void func_821(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_156(Local_544.f_1366))
	{
		func_342(iParam1);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID())
	{
		if (Local_544.f_9 != -4.537018E+10f || ((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))) && func_156(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))))
		{
			if (!bParam0)
			{
				if (GANG::_NETWORK_IS_IN_MY_GANG(iVar0))
				{
					func_632(iVar0, iParam1);
				}
				else
				{
					func_1097(iVar0, iParam1);
				}
			}
			else
			{
				func_1097(iVar0, iParam1);
			}
		}
		else
		{
			func_632(iVar0, iParam1);
		}
	}
	else
	{
		func_632(iVar0, iParam1);
	}
}

void func_822(int iParam0)
{
	int iVar0;

	if (!func_156(Local_544.f_1366))
	{
		func_342(iParam0);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID())
	{
		if (Local_544.f_9 != -4.537018E+10f || ((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))) && func_156(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))))
		{
			if (GANG::_NETWORK_IS_IN_MY_GANG(iVar0))
			{
				func_633(iVar0, iParam0);
				if (!func_182(8192, Local_544.f_1366))
				{
					if (func_346(Global_1295619.f_10))
					{
						func_347(0, 0, 0);
						func_233(8192, Local_544.f_1366);
					}
				}
				if (!func_182(16384, Local_544.f_1366))
				{
					if (!func_343())
					{
						func_1098();
						func_233(16384, Local_544.f_1366);
					}
				}
			}
			else
			{
				func_1099(iVar0, iParam0);
			}
		}
		else
		{
			func_633(iVar0, iParam0);
		}
	}
	else
	{
		func_633(iVar0, iParam0);
	}
}

void func_823(int iParam0)
{
	int iVar0;

	if (!func_156(Local_544.f_1366))
	{
		func_342(iParam0);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID())
	{
		if (Local_544.f_9 != -4.537018E+10f || ((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))) && func_156(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))))
		{
			if (GANG::_NETWORK_IS_IN_MY_GANG(iVar0))
			{
				func_633(iVar0, iParam0);
				if (!func_182(8192, Local_544.f_1366))
				{
					if (func_346(Global_1295619.f_10))
					{
						func_347(0, 0, 0);
						func_233(8192, Local_544.f_1366);
					}
				}
				if (!func_182(16384, Local_544.f_1366))
				{
					if (!func_343())
					{
						func_1098();
						func_233(16384, Local_544.f_1366);
					}
				}
			}
			else
			{
				func_1100(iVar0, iParam0);
			}
		}
		else
		{
			func_633(iVar0, iParam0);
		}
	}
	else
	{
		func_633(iVar0, iParam0);
	}
}

void func_824(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_156(Local_544.f_1366))
	{
		func_342(iParam0);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID())
	{
		if (Local_544.f_9 != -4.537018E+10f || ((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))) && func_156(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))))
		{
			if (GANG::_NETWORK_IS_IN_MY_GANG(iVar0))
			{
				func_633(iVar0, iParam0);
				if (!func_182(8192, Local_544.f_1366))
				{
					if (func_346(Global_1295619.f_10))
					{
						func_347(0, 0, 0);
						func_233(8192, Local_544.f_1366);
					}
				}
				if (!func_182(16384, Local_544.f_1366))
				{
					if (!func_343())
					{
						func_1098();
						func_233(16384, Local_544.f_1366);
					}
				}
			}
			else
			{
				func_1101(iVar0, iParam0, bParam1);
			}
		}
		else
		{
			func_633(iVar0, iParam0);
		}
	}
	else
	{
		func_633(iVar0, iParam0);
	}
}

char* func_825()
{
	return "RDRO_Countdown_Sounds";
}

char* func_826()
{
	return "Round_End_Timer";
}

char* func_827()
{
	return "10S";
}

char* func_828()
{
	return "Out_Of_Bounds";
}

char* func_829()
{
	return "target_spawn";
}

char* func_830()
{
	return "MP005_OBHELT_sounds";
}

bool func_831(int iParam0)
{
	return (Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1) == Global_1106895[iParam0 /*2*/].f_1;
}

char* func_832()
{
	return "match_start";
}

char* func_833()
{
	return "rdro_gamemode_generic_sounds";
}

int func_834(char* sParam0, char* sParam1, char* sParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<4> Var0;
	struct<4> Var13;
	int iVar20;

	Var0 = -2;
	Var0 = iParam3;
	Var0.f_1 = sParam4;
	Var0.f_2 = sParam5;
	Var0.f_3 = iParam6;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = sParam2;
	iVar20 = UIFEED::_UI_FEED_POST_THREE_TEXT_SHARD(&Var0, &Var13, bParam7, bParam8, bParam9);
	return iVar20;
}

int func_835(char* sParam0, char[4] cParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	int iVar20;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = sParam3;
	Var0.f_2 = sParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = cParam1;
	iVar20 = UIFEED::_UI_FEED_POST_TWO_TEXT_SHARD(&Var0, &vVar13, bParam6, bParam7);
	return iVar20;
}

float func_836(int iParam0)
{
	switch (PLAYER::GET_PLAYER_TEAM(iParam0))
	{
		case 0:
			return -8.998766E+28f;
		case 1:
			return -6.580683E-18f;
		case 2:
			return -2.691543E+12f;
		case 3:
			return 2.986218E-33f;
		case 4:
			return 8.281546E-06f;
		case 5:
			return -2.792393E+27f;
		case 6:
			return 2.121323E-22f;
		case 7:
			return 6.18127E+26f;
		case 8:
			return 1.990545E+23f;
		default:
			break;
	}
	return -64.26542f;
}

float func_837(int iParam0)
{
	if (GANG::NETWORK_GET_GANG_ID(iParam0) != Global_1295619.f_10 && !func_77())
	{
		return 4.279651E-16f;
	}
	return -18751.78f;
}

int func_838(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_1102(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = BUILTIN::FLOOR(Global_1101558[iVar3 /*38*/].f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	else
	{
		iVar1 = iVar0;
	}
	if (iVar1 < Global_1901671.f_737.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901671.f_737.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901671.f_737.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901671.f_737.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901671.f_737.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901671.f_737.f_36)
	{
		return 5;
	}
	return 6;
}

bool func_839(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 255)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (iParam0 == Global_1295619.f_5)
	{
		return true;
	}
	iVar0 = iParam0;
	if (!Global_1295619.f_17[iVar0])
	{
		return false;
	}
	if (bParam1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), iVar0) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28304), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28305), iVar0))
		{
			return true;
		}
	}
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iVar0))
	{
		return true;
	}
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28301), iVar0) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28303), iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_TEAM(Global_1295619.f_5);
	iVar2 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return true;
	}
	else if (GANG::_NETWORK_IS_IN_MY_GANG(iParam0))
	{
		return true;
	}
	return false;
}

bool func_840(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28305), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), iVar0) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28304), iVar0))
		{
			return true;
		}
	}
	if (func_865(iParam0))
	{
		return true;
	}
	return !func_839(iParam0, 0);
}

int func_841(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_1103(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_842(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -5.544348E+20f;
		case 1:
			return 9.256025E-25f;
		case 2:
			return -218565.1f;
		case 3:
			return 1.294398E-25f;
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

char* func_843(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_844(var uParam0, int iParam1)
{
	uParam0->f_244[iParam1 /*23*/].f_14 = 255;
	uParam0->f_244[iParam1 /*23*/].f_5 = -1f;
	uParam0->f_244[iParam1 /*23*/].f_1 = -1f;
	uParam0->f_244[iParam1 /*23*/].f_2 = -1f;
}

void func_845(int iParam0)
{
	if (!func_1104(iParam0))
	{
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_21353.f_260), iParam0);
	}
}

int func_846(char* sParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
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
	vVar13.f_2 = fParam1;
	iVar16 = UIFEED::_UI_FEED_POST_GAME_UPDATE_SHARD(&Var0, &vVar13, bParam6);
	return iVar16;
}

int func_847(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	Local_155[iParam0 /*8*/].f_3[iParam1] = OBJECT::CREATE_OBJECT(func_462(), func_1105(), false, false, false, false, true);
	if (ENTITY::DOES_ENTITY_EXIST(Local_155[iParam0 /*8*/].f_3[iParam1]))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Local_155[iParam0 /*8*/].f_3[iParam1], true);
		ENTITY::SET_ENTITY_COLLISION(Local_155[iParam0 /*8*/].f_3[iParam1], false, false);
		iVar0 = 1;
		if (Local_13.f_4 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_4))
		{
			bVar1 = true;
		}
		else
		{
			if (Local_13.f_4 == PLAYER::PLAYER_ID())
			{
				iVar2 = 1;
			}
			if (GANG::_NETWORK_IS_IN_MY_GANG(Local_13.f_4) && !func_852())
			{
				iVar3 = 1;
			}
			else
			{
				bVar4 = true;
			}
		}
		if (bVar1)
		{
			iVar0 = 8;
		}
		else if (iVar2 || iVar3)
		{
			iVar0 = 2;
		}
		else if (bVar4)
		{
			iVar0 = 0;
		}
		OBJECT::SET_OBJECT_TINT_INDEX(Local_155[iParam0 /*8*/].f_3[iParam1], iVar0);
		ENTITY::_SET_ENTITY_FADE_IN(Local_155[iParam0 /*8*/].f_3[iParam1]);
		func_848(iParam0, iParam1);
		func_754(ENTITY::GET_ENTITY_COORDS(Local_155[iParam0 /*8*/].f_3[iParam1], true, false), 1f);
	}
	return 1;
}

void func_848(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;

	iVar0 = Local_155[iParam0 /*8*/].f_3[iParam1];
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && !ENTITY::IS_ENTITY_ATTACHED(iVar0))
	{
		iVar1 = func_725(0, iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			func_1106(iParam1, &vVar2, &fVar5);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar0, iVar1, 0, vVar2, 0f, 0f, fVar5, true, false, true, false, 2, true, false, false);
		}
	}
}

void func_849(int iParam0)
{
	if (func_78(Local_155.f_141, iParam0))
	{
		func_443(&(Local_155.f_141), iParam0);
	}
}

void func_850(var uParam0)
{
	if (!func_759(512))
	{
		func_760(512);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(func_1107(), func_358(), true, 0);
	}
	Local_155.f_132 = uParam0;
}

void func_851(int iParam0)
{
	if (func_78(Local_26[Local_544.f_1366 /*4*/], iParam0))
	{
		func_443(&(Local_26[Local_544.f_1366 /*4*/]), iParam0);
	}
}

bool func_852()
{
	return func_78(Local_301.f_13, 64);
}

void func_853()
{
	if (!func_159(&(Local_544.f_1332)))
	{
		func_190(&(Local_544.f_1332), 0);
	}
	else if (func_424(&(Local_544.f_1332)))
	{
		func_1108(&(Local_544.f_1332));
	}
	if (func_159(&(Local_544.f_1332)) && func_192(&(Local_544.f_1332)) > func_1109())
	{
		func_1110(1f);
		func_207(&(Local_544.f_1332));
	}
}

void func_854()
{
	if (func_159(&(Local_544.f_1332)) && !func_424(&(Local_544.f_1332)))
	{
		func_1111(&(Local_544.f_1332));
	}
}

void func_855()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (iVar0 == Local_13.f_4)
			{
				func_1112(iVar1, 1.428663E-30f);
			}
			else
			{
				func_914(iVar1);
			}
		}
		iVar1++;
	}
}

void func_856()
{
	if (func_416(4, Local_544.f_1366))
	{
		if (Local_13.f_4 != 255)
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_4) && (Local_13.f_4 == PLAYER::PLAYER_ID() || (GANG::_NETWORK_IS_IN_MY_GANG(Local_13.f_4) && !func_852())))
			{
				func_1113();
				func_912(1);
			}
			else
			{
				func_1114();
				func_913(1);
			}
		}
	}
	else
	{
		func_912(1);
		func_913(1);
	}
}

void func_857()
{
	if (func_759(4))
	{
		return;
	}
	if (((func_159(&(Local_13.f_1)) && (func_743() - func_192(&(Local_13.f_1))) < func_1115()) && Local_544.f_1301 > (func_742() + func_1115())) && !func_297(Local_544.f_1321))
	{
		Local_544.f_1325 = func_562(MISC::VAR_STRING(2, "FME_KOTR_GAME_UPDATE_NEW_CAR_WARNING"), 27.64779f);
		func_760(4);
	}
}

void func_858()
{
	if (Local_13.f_4 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_4))
	{
		if (!func_416(4, Local_544.f_1366))
		{
			if (MAP::DOES_BLIP_EXIST(Local_544.f_1359))
			{
				MAP::BLIP_ADD_MODIFIER(Local_544.f_1359, -1.271778E-20f);
				MAP::BLIP_REMOVE_MODIFIER(Local_544.f_1359, -9.758836E-14f);
				MAP::BLIP_REMOVE_MODIFIER(Local_544.f_1359, -2.74076E-39f);
			}
			if (func_483(13, "FME_KOTR_OBJECTIVE_ENTER", -1, 0))
			{
				func_1116(8);
				func_357(func_1117(), 1, 0);
			}
		}
	}
	else if (Local_13.f_4 == PLAYER::PLAYER_ID())
	{
		if (MAP::DOES_BLIP_EXIST(Local_544.f_1359))
		{
			MAP::BLIP_REMOVE_MODIFIER(Local_544.f_1359, -1.271778E-20f);
			MAP::BLIP_ADD_MODIFIER(Local_544.f_1359, -9.758836E-14f);
			MAP::BLIP_REMOVE_MODIFIER(Local_544.f_1359, -2.74076E-39f);
		}
		if (func_483(10, "FME_KOTR_OBJECTIVE_DEFEND_SELF", -1, 0))
		{
			func_1116(2);
			func_357(func_1118(), 1, 0);
		}
	}
	else if (GANG::_NETWORK_IS_IN_MY_GANG(Local_13.f_4) && !func_852())
	{
		if (MAP::DOES_BLIP_EXIST(Local_544.f_1359))
		{
			MAP::BLIP_REMOVE_MODIFIER(Local_544.f_1359, -1.271778E-20f);
			MAP::BLIP_ADD_MODIFIER(Local_544.f_1359, -9.758836E-14f);
			MAP::BLIP_REMOVE_MODIFIER(Local_544.f_1359, -2.74076E-39f);
		}
		if (((Local_544.f_1311 < func_491() && !func_759(128)) && func_493(Local_544.f_1323)) && MAP::DOES_BLIP_EXIST(Local_544.f_1359))
		{
			Local_544.f_1323 = func_494(MISC::VAR_STRING(2, "FME_KOTR_HELP_FRIENDLY_KING", Local_544.f_1359));
			func_760(128);
		}
		if (func_483(11, "FME_KOTR_OBJECTIVE_DEFEND_TEAM", -1, 0))
		{
			func_1116(2);
			func_357(func_1118(), 1, 0);
		}
	}
	else
	{
		if (MAP::DOES_BLIP_EXIST(Local_544.f_1359))
		{
			MAP::BLIP_REMOVE_MODIFIER(Local_544.f_1359, -1.271778E-20f);
			MAP::BLIP_REMOVE_MODIFIER(Local_544.f_1359, -9.758836E-14f);
			MAP::BLIP_ADD_MODIFIER(Local_544.f_1359, -2.74076E-39f);
		}
		if (((Local_544.f_1311 < func_491() && !func_759(64)) && func_493(Local_544.f_1323)) && MAP::DOES_BLIP_EXIST(Local_544.f_1359))
		{
			Local_544.f_1323 = func_494(MISC::VAR_STRING(2, "FME_KOTR_HELP_ENEMY_KING", Local_544.f_1359));
			func_760(64);
		}
		if (Local_155.f_130 != Local_13.f_4)
		{
			if (Local_544.f_1300 != 5)
			{
				func_483(0, "", -1, 0);
			}
			Local_155.f_130 = Local_13.f_4;
		}
		if (func_483(6, MISC::VAR_STRING(10, "FME_KOTR_OBJECTIVE_ATTACK", func_551(PLAYER::GET_PLAYER_NAME(Local_13.f_4), func_550(Local_13.f_4, 1, -1, 0))), -1, 0))
		{
			func_1116(0);
			func_357(func_1117(), 1, 0);
		}
	}
}

void func_859()
{
	if (MISC::IS_BIT_SET(Global_1958671, 4))
	{
	}
	else
	{
		MISC::SET_BIT(&Global_1958671, 0);
	}
}

void func_860()
{
	if (func_574(2))
	{
	}
	else
	{
		func_575(8);
	}
}

int func_861()
{
	if (func_303())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_33) && !ENTITY::IS_ENTITY_DEAD(Global_33))
		{
			PAD::DISABLE_CONTROL_ACTION(0, -1.684686E+34f, false);
			PAD::DISABLE_CONTROL_ACTION(0, 3.101329E-34f, false);
			if (func_672())
			{
				func_673();
				func_674();
				func_675();
			}
			else if (func_676(Global_33, 0, 0, 0) == -1.197024E-12f)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				WEAPON::_HOLSTER_PED_WEAPONS(Global_33, false, false, false, false);
			}
			return 0;
		}
	}
	return 1;
}

int func_862()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_33) && !ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		if (func_676(Global_33, 0, 0, 1) == -230.1699f || func_676(Global_33, 0, 0, 1) == 5.402792E-27f)
		{
			func_1119(0);
		}
		else if (WEAPON::_IS_WEAPON_BINOCULARS(func_676(Global_33, 0, 0, 1)))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, false, 0, false, false);
		}
	}
	return 1;
}

char* func_863(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_167(40, iParam0))
		{
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1102813.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1102813.f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!Global_1295619.f_17[iParam0])
	{
		return sVar0;
	}
	if (func_167(40, iParam0))
	{
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1101558[iParam0 /*38*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1101558[iParam0 /*38*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1295619.f_149[iParam0]);
}

bool func_864(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

bool func_865(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28303), iParam0))
	{
		return true;
	}
	return false;
}

bool func_866(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28301), iParam0))
	{
		return true;
	}
	return false;
}

bool func_867(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_1120(iParam0);
		return false;
	}
	if (func_866(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 2)
		{
			func_1121(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1295619.f_5, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 2);
}

int func_868(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;

	if (bParam1->f_11.f_2 == 0)
	{
		bParam1->f_983 = MISC::_SHOULD_USE_METRIC_WEIGHT();
		if (!func_630(iParam2, 8))
		{
			bVar0 = func_630(iParam2, 128);
			func_1122(bParam0, bParam1, iParam2, bVar0, iParam3, iParam4, iParam5, iParam6);
		}
		if (!func_630(iParam2, 4))
		{
			func_1123(bParam1, iParam2, iParam7);
		}
	}
	return 1;
}

void func_869(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12[8];
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	bVar0 = func_630(iParam2, 8);
	bVar1 = func_630(iParam2, 128);
	bVar2 = func_630(iParam2, 1024);
	bVar3 = func_630(iParam2, 4096);
	bVar4 = func_630(iParam2, 8192);
	bVar5 = func_630(iParam2, 256);
	bVar6 = iParam7 > 1;
	iVar21 = 0;
	while (iVar21 < 8)
	{
		iVar12[iVar21] = iVar21;
		iVar21++;
	}
	iVar22 = PLAYER::PLAYER_ID();
	if (bVar3)
	{
		if (bParam0->f_983 != MISC::_SHOULD_USE_METRIC_WEIGHT())
		{
			func_279(bParam0);
			func_280(bParam0);
			bParam0->f_983 = MISC::_SHOULD_USE_METRIC_WEIGHT();
		}
	}
	else if (bVar4)
	{
		if (bParam0->f_983 != MISC::_SHOULD_USE_METRIC_MEASUREMENTS_2())
		{
			func_279(bParam0);
			func_280(bParam0);
			bParam0->f_983 = MISC::_SHOULD_USE_METRIC_MEASUREMENTS_2();
		}
	}
	if (bParam0->f_982 || bParam0->f_981)
	{
		iVar11 = 0;
		while (iVar11 <= 31)
		{
			if (bParam0->f_244[iVar11 /*23*/].f_14 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0->f_244[iVar11 /*23*/].f_14))
			{
				if (bVar6)
				{
					iVar9 = bParam0->f_244[iVar11 /*23*/];
					if (iVar9 == PLAYER::GET_PLAYER_TEAM(iVar22))
					{
						fVar7 = (*uParam1)[iVar9];
					}
					else if ((*uParam1)[iVar9] > fVar8)
					{
						fVar8 = (*uParam1)[iVar9];
					}
				}
				else if (bParam0->f_244[iVar11 /*23*/].f_14 == PLAYER::PLAYER_ID())
				{
					fVar7 = bParam0->f_244[iVar11 /*23*/].f_5;
				}
				else if (!bVar10)
				{
					fVar8 = bParam0->f_244[iVar11 /*23*/].f_5;
					bVar10 = true;
				}
				StringCopy(&(bParam0->f_244[iVar11 /*23*/].f_14.f_1), PLAYER::GET_PLAYER_NAME(bParam0->f_244[iVar11 /*23*/].f_14), 64);
			}
			iVar11++;
		}
		if (!bVar0)
		{
			func_1124(bParam0, iParam2, fVar7, fVar8, bVar1, bVar2, bVar3, iParam3, iParam4, iParam5, iParam6, bParam0->f_982);
		}
		if (bParam0->f_981)
		{
			iVar24 = 0;
			while (iVar24 <= 31)
			{
				if (bParam0->f_244[iVar24 /*23*/].f_14 == PLAYER::PLAYER_ID())
				{
					iVar23 = iVar24;
				}
				else
				{
					iVar24++;
				}
			}
			func_1125(&(bParam0->f_11), &(bParam0->f_244), PLAYER::GET_PLAYER_TEAM(iVar22), bVar6, &iVar12, 0, iVar23);
			bParam0->f_981 = 0;
		}
	}
	if (bVar5)
	{
		MISC::SET_BIT(&(bParam0->f_11.f_158), 18);
	}
	if (!func_630(iParam2, 4))
	{
		func_1126(&(bParam0->f_11), &(bParam0->f_244), &iVar22, bParam0->f_982, &iVar12, bVar6, 0, 0);
		bParam0->f_982 = 0;
	}
}

int func_870(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam2 != 0)
	{
		iParam3 = iParam2;
		iParam4 = iParam2;
	}
	if ((uParam1[0 /*34*/])->f_21 == 0)
	{
		func_1127(bParam0, uParam1, 0, "meter0", iParam3, iParam5);
		func_1127(bParam0, uParam1, 1, "meter1", iParam4, iParam6);
		func_1127(bParam0, uParam1, 2, "meter2", iParam2, 0);
		func_1127(bParam0, uParam1, 3, "meter3", iParam2, 0);
		func_1127(bParam0, uParam1, 4, "meter4", iParam2, 0);
		func_1127(bParam0, uParam1, 5, "meter5", iParam2, 0);
		func_1127(bParam0, uParam1, 6, "meter6", iParam2, 0);
		return 0;
	}
	return 1;
}

void func_871(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	bool bVar8;
	bool bVar9;

	func_1128(iParam1, &fVar1, &uVar2, &fVar3, &uVar4, &uVar5, &uVar6, &uVar7);
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		bVar8 = MISC::IS_BIT_SET(iParam5, iVar0);
		bVar9 = MISC::IS_BIT_SET(iParam6, iVar0);
		func_1129(uParam0, iVar0, fVar1, uVar2, fVar3, uVar4, uVar5, uVar6, uVar7, bVar8, bParam2, bParam3, bParam4, bVar9);
		iVar0++;
	}
}

bool func_872()
{
	return true;
}

int func_873(int iParam0, int iParam1)
{
	int iVar0;

	switch (func_492())
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = 2.004547E-15f;
					break;
				case 1:
					iVar0 = 0.02424469f;
					break;
				case 2:
					iVar0 = 1.109032E+07f;
					break;
				case 3:
					iVar0 = -3.959939E+19f;
					break;
				case 4:
					iVar0 = -0.02577062f;
					break;
				case 5:
					iVar0 = 6.969637E-37f;
					break;
				case 6:
					iVar0 = -1.126231E+11f;
					break;
				case 7:
					iVar0 = -6.272404E-28f;
					break;
				case 8:
					iVar0 = -5.175019E-20f;
					break;
				case 9:
					iVar0 = -8.836333E+28f;
					break;
				case 10:
					iVar0 = 3.296998E-31f;
					break;
				case 11:
					iVar0 = -3.690085E+16f;
					break;
				case 12:
					iVar0 = -1.16412E+27f;
					break;
				case 13:
					iVar0 = -4.569104E-06f;
					break;
				case 14:
					iVar0 = -2.32206E+23f;
					break;
				case 15:
					iVar0 = -9.286526E-10f;
					break;
				case 16:
					iVar0 = -18.23743f;
					break;
				case 17:
					iVar0 = -1.932812E-29f;
					break;
				case 18:
					iVar0 = -1.200768E-11f;
					break;
				case 19:
					iVar0 = -1.962015E+34f;
					break;
				case 20:
					iVar0 = 6.750098E-35f;
					break;
				case 21:
					iVar0 = -6.355615E+17f;
					break;
				case 22:
					iVar0 = -2.664432E+27f;
					break;
				case 23:
					iVar0 = 0.00282072f;
					break;
				case 24:
					iVar0 = 0.0622257f;
					break;
				case 25:
					iVar0 = 5.769449E-27f;
					break;
				case 26:
					iVar0 = 181.9201f;
					break;
				case 27:
					iVar0 = 1.948734E-28f;
					break;
				case 28:
					iVar0 = 2.37088E-17f;
					break;
				case 29:
					iVar0 = 1.044796E-14f;
					break;
				case 30:
					iVar0 = -1.312928E+36f;
					break;
				case 31:
					iVar0 = -2.7962E-16f;
					break;
				default:
					return 0;
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				iVar0 = -4.243963E-14f;
			}
			else
			{
				iVar0 = -0.1114524f;
			}
			break;
		case 2:
			if (func_594())
			{
				iVar0 = -4.243963E-14f;
			}
			else
			{
				iVar0 = -0.1114524f;
			}
			break;
	}
	if (iVar0 != 0)
	{
		func_1130(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_874(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (GANG::NETWORK_IS_GANG_ID_VALID(iVar1) && GANG::NETWORK_GET_NUM_GANG_MEMBERS(iVar1) >= 2)
	{
		iVar0 = -2.311459E+08f;
	}
	else
	{
		iVar0 = -4.734002E-15f;
	}
	if (iVar0 != 0)
	{
		func_1130(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_875(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_159(&uParam1))
	{
		iVar2 = func_192(&uParam1);
		iVar1 = BUILTIN::FLOOR(func_1096(((BUILTIN::TO_FLOAT(iVar2) / 1148846080) / 1114636288), 0f, 1106247680 /* Float: 30f */));
	}
	switch (iVar1)
	{
		case 0:
			iVar0 = -4.629723E-29f;
			break;
		case 1:
			iVar0 = -1.012578E-15f;
			break;
		case 2:
			iVar0 = 3.034928E+31f;
			break;
		case 3:
			iVar0 = -4.539209E-38f;
			break;
		case 4:
			iVar0 = 5.917202E+07f;
			break;
		case 5:
			iVar0 = 7.742719E+20f;
			break;
		case 6:
			iVar0 = 2.770397E-13f;
			break;
		case 7:
			iVar0 = 6.045531E-05f;
			break;
		case 8:
			iVar0 = 1.506013E-34f;
			break;
		case 9:
			iVar0 = 2.532337E-26f;
			break;
		case 10:
			iVar0 = -1.825083E-28f;
			break;
		case 11:
			iVar0 = 6.415542E+33f;
			break;
		case 12:
			iVar0 = 3.368938E-12f;
			break;
		case 13:
			iVar0 = -9.97444E-18f;
			break;
		case 14:
			iVar0 = 2.244307E-17f;
			break;
		case 15:
			iVar0 = -2.281962E-22f;
			break;
		case 16:
			iVar0 = 2.118638E+10f;
			break;
		case 17:
			iVar0 = 3.258074E-06f;
			break;
		case 18:
			iVar0 = -3.32034E+21f;
			break;
		case 19:
			iVar0 = -3.23939E+10f;
			break;
		case 20:
			iVar0 = -9.955331E+11f;
			break;
		case 21:
			iVar0 = 3.097418E-35f;
			break;
		case 22:
			iVar0 = -5.89594E+28f;
			break;
		case 23:
			iVar0 = 9.242888E-19f;
			break;
		case 24:
			iVar0 = 3.811499E+08f;
			break;
		case 25:
			iVar0 = 1.243183E-05f;
			break;
		case 26:
			iVar0 = 3.295329E+24f;
			break;
		case 27:
			iVar0 = 1.961037E+12f;
			break;
		case 28:
			iVar0 = 1.044431E+23f;
			break;
		case 29:
			iVar0 = 7.038466E+09f;
			break;
		case 30:
			iVar0 = -2.047529E-20f;
			break;
		default:
			return 0;
	}
	if (iVar0 != 0)
	{
		func_1130(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_876(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if ((func_36(&Var1, Local_544.f_1) && func_37(&Var1)) && func_38(&Var1, Local_544.f_3))
	{
		if (func_40(Var1, -1.290971E+36f, &uVar6, 0))
		{
			iVar0 = uVar6;
		}
	}
	if (iVar0 != 0)
	{
		func_1130(iParam0, iVar0);
		return 1;
	}
	else if (Local_544.f_9 != -4.537018E+10f)
	{
	}
	return 0;
}

int func_877(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	return func_1131(bParam0, uParam1, iParam2, &Var0, iParam3, iParam4, iParam5, bParam6);
}

int func_878()
{
	int iVar0;

	if (Local_301.f_14 == 0)
	{
		return func_194(2);
	}
	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(Local_301.f_15) / BUILTIN::TO_FLOAT(Local_301.f_14)));
	if (iVar0 < 2)
	{
		iVar0 = 2;
	}
	else if (iVar0 > 32)
	{
		iVar0 = 32;
	}
	return iVar0;
}

int func_879(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			iVar0 = -5.953997E+19f;
			break;
		case 3:
			iVar0 = -2.974582E+31f;
			break;
		case 4:
			iVar0 = 5.674275E-36f;
			break;
		case 5:
			iVar0 = -2.222356E-16f;
			break;
		case 6:
			iVar0 = -2.246261E-27f;
			break;
		case 7:
			iVar0 = -9.195768E-38f;
			break;
		case 8:
			iVar0 = 1.143176E+29f;
			break;
		case 9:
			iVar0 = -4.423529E+18f;
			break;
		case 10:
			iVar0 = -5.261954E+24f;
			break;
		case 11:
			iVar0 = -1.403203E+10f;
			break;
		case 12:
			iVar0 = -1.69048E-32f;
			break;
		case 13:
			iVar0 = -2.335039E+34f;
			break;
		case 14:
			iVar0 = -2.487902E-15f;
			break;
		case 15:
			iVar0 = -2.338858E-26f;
			break;
		case 16:
			iVar0 = 1.856852E+31f;
			break;
		case 17:
			iVar0 = 1.672867E+14f;
			break;
		case 18:
			iVar0 = 2.456224E-29f;
			break;
		case 19:
			iVar0 = 2.366804E+37f;
			break;
		case 20:
			iVar0 = 3.34203E+11f;
			break;
		case 21:
			iVar0 = 5.81473E+10f;
			break;
		case 22:
			iVar0 = -3.001155E-06f;
			break;
		case 23:
			iVar0 = -1.203633E-16f;
			break;
		case 24:
			iVar0 = -2.37486E-23f;
			break;
		case 25:
			iVar0 = -2.408008E-34f;
			break;
		case 26:
			iVar0 = -2.627577E+08f;
			break;
		case 27:
			iVar0 = -8.330621E+35f;
			break;
		case 28:
			iVar0 = -2.994557E+10f;
			break;
		case 29:
			iVar0 = -1.103057E+38f;
			break;
		case 30:
			iVar0 = 7.291698E-05f;
			break;
		case 31:
			iVar0 = 4.375371E-13f;
			break;
		case 32:
			iVar0 = 2.596343E-20f;
			break;
		default:
			return 0;
	}
	if (iVar0 != 0)
	{
		func_1130(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_880(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_159(&uParam1))
	{
		iVar2 = func_192(&uParam1);
		iVar1 = BUILTIN::FLOOR(func_1096(((BUILTIN::TO_FLOAT(iVar2) / 1148846080) / 1114636288), 0f, 1106247680 /* Float: 30f */));
	}
	switch (iVar1)
	{
		case 0:
			iVar0 = 4.48875E-26f;
			break;
		case 1:
			iVar0 = 3.204939E+17f;
			break;
		case 2:
			iVar0 = -3.416355E+34f;
			break;
		case 3:
			iVar0 = 3.651252E-06f;
			break;
		case 4:
			iVar0 = 1465.142f;
			break;
		case 5:
			iVar0 = 4.452651E-32f;
			break;
		case 6:
			iVar0 = 1.412388E+25f;
			break;
		case 7:
			iVar0 = 2.597338E-11f;
			break;
		case 8:
			iVar0 = -1.677856E+36f;
			break;
		case 9:
			iVar0 = -2.407859E+11f;
			break;
		case 10:
			iVar0 = -3.743338E+20f;
			break;
		case 11:
			iVar0 = -9.912318E+12f;
			break;
		case 12:
			iVar0 = -204.6044f;
			break;
		case 13:
			iVar0 = -3.975582E+33f;
			break;
		case 14:
			iVar0 = 2.619008E-14f;
			break;
		case 15:
			iVar0 = 2.2231E+18f;
			break;
		case 16:
			iVar0 = 7.71033E-32f;
			break;
		case 17:
			iVar0 = 77.04993f;
			break;
		case 18:
			iVar0 = 7.827407E+31f;
			break;
		case 19:
			iVar0 = -3.561615E-14f;
			break;
		case 20:
			iVar0 = 6.098698E-08f;
			break;
		case 21:
			iVar0 = -4.071937E-33f;
			break;
		case 22:
			iVar0 = -1.523518E-24f;
			break;
		case 23:
			iVar0 = 1.117442E+28f;
			break;
		case 24:
			iVar0 = 4.736163E+36f;
			break;
		case 25:
			iVar0 = -2.995825E+18f;
			break;
		case 26:
			iVar0 = -1.102119E+27f;
			break;
		case 27:
			iVar0 = -1.693391E-08f;
			break;
		case 28:
			iVar0 = -8.25463f;
			break;
		case 29:
			iVar0 = 2.635012E-15f;
			break;
		case 30:
			iVar0 = 2.719325E-09f;
			break;
		default:
			return 0;
	}
	if (iVar0 != 0)
	{
		func_1130(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_881(int iParam0)
{
	int iVar0;

	switch (func_492())
	{
		case 0:
			iVar0 = -2.235903E+10f;
			break;
		case 1:
			iVar0 = -1.794392E-20f;
			break;
		case 2:
			iVar0 = -4.168162E-32f;
			break;
		default:
			break;
	}
	if (iVar0 != 0)
	{
		func_1130(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_882(int iParam0, int iParam1)
{
	int iVar0;

	switch (func_492())
	{
		case 0:
		case 1:
			if (iParam1 == 0)
			{
				iVar0 = 6.697449E+34f;
			}
			else
			{
				iVar0 = 1.148343E-09f;
			}
			break;
		case 2:
			if (func_594())
			{
				iVar0 = 6.697449E+34f;
			}
			else
			{
				iVar0 = 1.148343E-09f;
			}
			break;
		default:
			break;
	}
	if (iVar0 != 0)
	{
		func_1130(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_883(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iVar1))
	{
		iVar0 = 2.402546E+17f;
	}
	else
	{
		iVar2 = GANG::NETWORK_GET_NUM_GANG_MEMBERS(iVar1);
		switch (iVar2)
		{
			case 1:
				iVar0 = 2.402546E+17f;
				break;
			case 2:
				iVar0 = -4.286863E+32f;
				break;
			case 3:
				iVar0 = 3.719903E-34f;
				break;
			case 4:
				iVar0 = -0.7193813f;
				break;
			case 5:
				iVar0 = 1.603776E-28f;
				break;
			case 6:
				iVar0 = -2.784869E+16f;
				break;
			case 7:
				iVar0 = -7.248083E-12f;
				break;
			default:
				return 0;
		}
	}
	if (iVar0 != 0)
	{
		func_1130(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_884(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_159(&uParam0))
	{
		iVar1 = func_192(&uParam0);
		iVar0 = BUILTIN::FLOOR(func_1096(((BUILTIN::TO_FLOAT(iVar1) / 1148846080) / 1114636288), 0f, 1106247680 /* Float: 30f */));
	}
	iVar2 = 0;
	if (iVar0 < 3)
	{
		iVar2 = 0;
	}
	else if (iVar0 < 6)
	{
		iVar2 = -3.819318E-38f;
	}
	else if (iVar0 < 9)
	{
		iVar2 = -1.089063E+15f;
	}
	else if (iVar0 < 12)
	{
		iVar2 = -6.773625E+16f;
	}
	else if (iVar0 < 15)
	{
		iVar2 = 0.09229348f;
	}
	else if (iVar0 < 20)
	{
		iVar2 = -8.546086E-10f;
	}
	else if (iVar0 < 25)
	{
		iVar2 = 8.318404E+19f;
	}
	else if (iVar0 < 30)
	{
		iVar2 = -2.146311E+31f;
	}
	else
	{
		iVar2 = 5.51433E-35f;
	}
	return iVar2;
}

int func_885()
{
	return 0;
}

void func_886(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar0], "Position", "");
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar0], "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar0], "GamertagColor", 0);
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar0], "StatPriority", "");
		iVar0++;
	}
}

void func_887(bool bParam0)
{
	int iVar0;
	var uVar1;

	if ((*bParam0)[0 /*5*/] != 0)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((*bParam0)[iVar0 /*5*/]);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((bParam0[iVar0 /*5*/])->f_1);
			iVar0++;
		}
		uVar1 = 2;
		MISC::COPY_SCRIPT_STRUCT(bParam0, &uVar1, 11);
	}
}

void func_888(var uParam0, bool bParam1)
{
	int iVar0;

	UIAPPS::_CLOSE_UIAPP_BY_HASH(1.355797E-17f);
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(*uParam0);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_142))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_142);
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_143[iVar0]))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_143[iVar0]);
		}
		iVar0++;
	}
	AUDIO::_RELEASE_SOUNDSET("MP_Leaderboard_Sounds");
	if (!bParam1)
	{
		func_1132(&(uParam0->f_162));
	}
	func_529(0);
}

void func_889(var uParam0)
{
	int iVar0;
	var uVar1;
	struct<34> Var3;

	iVar0 = 0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_142 = 0;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		uParam0->f_3[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		uParam0->f_12[iVar0] = 0;
		uParam0->f_45[iVar0 /*3*/][0] = 0;
		uParam0->f_45[iVar0 /*3*/][1] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		uParam0->f_143[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_149 = 0;
	uParam0->f_150 = 0;
	uParam0->f_151 = 0;
	uParam0->f_158 = 0;
	uParam0->f_159 = 0;
	uParam0->f_160 = 0;
	uParam0->f_161 = -1;
	uParam0->f_232 = 0;
	uParam0->f_152 = 0;
	uParam0->f_157 = 0;
	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_153), &uVar1, 2);
	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_155), &uVar1, 2);
	Var3 = 32;
	Var3.f_33 = 32;
	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_162), &Var3, 70);
}

char* func_890()
{
	return "match_end";
}

char* func_891()
{
	return "RDRO_Adversary_Sounds";
}

int func_892(char* sParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, bool bParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	int iVar20;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = sParam2;
	Var0.f_2 = sParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	iVar20 = UIFEED::_UI_FEED_POST_ONE_TEXT_SHARD(&Var0, &Var13, bParam5);
	return iVar20;
}

Vector3 func_893(vector3 vParam0)
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

int func_894(bool bParam0)
{
	struct<2> Var0;

	if (!func_714(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_895(int iParam0)
{
	return func_621(iParam0, 2);
}

void func_896()
{
	if (!func_167(136, 255))
	{
		return;
	}
}

void func_897(int iParam0, bool bParam1)
{
	if (!func_977(32))
	{
		return;
	}
	func_712(33, Global_1149417.f_4787.f_4, 0, 0, 0);
	func_1133(32);
	func_1134();
	Global_1149417.f_4787.f_4 = 0;
	Global_1149417.f_4787 = 0;
	func_982(&(Global_1953279.f_2366));
	func_980(&(Global_1953279.f_2366));
	func_1135(4);
	if (bParam1)
	{
		func_1136(iParam0, 1, 1, 0);
	}
	func_712(27, 0, 131074, 0, 0);
	func_712(34, 0, 131072, 0, 0);
}

void func_898()
{
	func_1137();
	func_1138();
}

void func_899(float fParam0)
{
	Global_1956862.f_1561.f_3 = fParam0;
}

struct<12> func_900()
{
	struct<12> Var0;
	int iVar12;
	int iVar13;

	Var0.f_1 = -1;
	Var0.f_3 = -1f;
	Var0.f_4 = 2;
	Var0.f_5 = -1f;
	Var0.f_7 = -1f;
	Var0.f_9 = -1f;
	Var0.f_11 = -1f;
	iVar12 = PLAYER::PLAYER_PED_ID();
	iVar13 = PLAYER::PLAYER_ID();
	switch (Global_1956862.f_1565.f_117.f_12)
	{
		case 0:
			Var0 = 0;
			Var0.f_8 = 0;
			Var0.f_4 = 2;
			Var0.f_2 = 0;
			Var0.f_10 = 0;
			Var0.f_6 = 0;
			break;
		case 1:
			Var0 = 0;
			Var0.f_8 = 0;
			Var0.f_4 = 2;
			Var0.f_2 = 1;
			Var0.f_10 = 1;
			Var0.f_6 = 1;
			break;
		case 2:
			Var0 = 3;
			Var0.f_1 = Global_1956862.f_1565.f_117.f_13;
			Var0.f_8 = 3;
			Var0.f_9 = Global_1956862.f_1565.f_117.f_15;
			Var0.f_4 = 3;
			Var0.f_5 = Global_1956862.f_1565.f_117.f_14;
			Var0.f_2 = 3;
			Var0.f_3 = Global_1956862.f_1565.f_117.f_16;
			Var0.f_10 = 3;
			Var0.f_11 = Global_1956862.f_1565.f_117.f_17;
			Var0.f_6 = 3;
			Var0.f_7 = Global_1956862.f_1565.f_117.f_18;
			break;
		case 3:
			Var0 = 3;
			Var0.f_1 = ENTITY::GET_ENTITY_HEALTH(iVar12);
			Var0.f_8 = 3;
			Var0.f_9 = PED::_GET_PED_STAMINA(iVar12);
			Var0.f_4 = 3;
			Var0.f_5 = PLAYER::_GET_PLAYER_DEAD_EYE(iVar13);
			Var0.f_2 = 3;
			Var0.f_3 = func_1139(0, 2);
			Var0.f_10 = 3;
			Var0.f_11 = func_1139(1, 2);
			Var0.f_6 = 3;
			Var0.f_7 = func_1139(2, 2);
			break;
	}
	return Var0;
}

void func_901()
{
	var uVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	var uVar4;

	uVar0 = func_1140(-2.692547E+11f, -5.146326E-12f);
	Global_1956862.f_1431.f_74.f_2 = uVar0;
	uVar1 = func_1140(1.141655E-29f, 6.146477E+13f);
	Global_1956862.f_1431.f_74.f_3 = uVar1;
	fVar2 = func_1140(1.29544E-08f, -2.606967E+22f);
	fVar3 = func_1140(1.29544E-08f, 3.109305E+14f);
	Global_1956862.f_1431.f_74.f_1 = (fVar2 + fVar3);
	uVar4 = func_1141(-6.155973E-21f);
	Global_1956862.f_1431.f_74.f_5 = uVar4;
}

void func_902()
{
	MISC::_CLEAR_ALL_BIT_FLAGS(&(Global_1956862.f_1565));
}

void func_903()
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return;
	}
	WEAPON::_ENABLE_WEAPON_RESTORE(Global_33);
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &iVar0, false, 0, true))
	{
		if ((((iVar0 == -1.197024E-12f || WEAPON::_IS_WEAPON_BINOCULARS(iVar0)) || iVar0 == -230.1699f) || iVar0 == 5.402792E-27f) || iVar0 == 4.568779E-32f)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		}
	}
}

void func_904(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28301), iParam0))
	{
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28301), iParam0);
		if (func_867(iParam0))
		{
			func_1120(iParam0);
		}
	}
}

void func_905(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_21626.f_259), iParam0))
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_21626.f_259), iParam0);
		}
	}
	else if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_21626.f_259), iParam0))
	{
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_21626.f_259), iParam0);
		func_845(iParam0);
	}
}

void func_906(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28302), iParam0);
		if (func_1021(iParam0))
		{
			func_1120(iParam0);
		}
	}
}

void func_907(int iParam0)
{
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28306), iParam0);
}

void func_908(int iParam0)
{
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28304), iParam0);
}

struct<2> func_909()
{
	struct<2> Var0;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0);
	return Var0;
}

bool func_910(var uParam0, var uParam1)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

void func_911(var uParam0, int iParam1)
{
	var uVar0;

	*uParam0 = 22;
	uParam0->f_1 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iParam1);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 11, 6, &uVar0);
}

void func_912(bool bParam0)
{
	if (func_759(1))
	{
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_1142()))
		{
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1142());
		}
		func_305(&(Local_155.f_134));
		if (bParam0)
		{
			func_849(1);
		}
	}
}

void func_913(bool bParam0)
{
	if (func_759(2))
	{
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_1143()))
		{
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1143());
		}
		func_305(&(Local_155.f_137));
		if (bParam0)
		{
			func_849(2);
		}
	}
}

void func_914(int iParam0)
{
	if (Global_1072759.f_21626[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21626[iParam0 /*8*/].f_1 = 0;
		func_845(iParam0);
	}
}

void func_915(int iParam0)
{
	Global_1102813.f_26.f_12 = iParam0;
}

bool func_916(int iParam0)
{
	return (Global_1102813.f_26.f_7 && iParam0) != 0;
}

bool func_917(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) != 0;
}

int func_918()
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

void func_919(int iParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_1144(95));
	if (func_615(iVar0))
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(iVar0, true);
	}
}

void func_920(int iParam0)
{
	Global_1940239.f_245.f_1306 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_245.f_6, MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(Global_1940239.f_245.f_1306), 0));
}

int func_921(struct<2> Param0)
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
	if (!func_1103(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1072759.f_19487 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_1103(Global_1072759.f_19487.f_1[iVar8 /*3*/], &vVar3);
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

int func_922(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_1103(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_923()
{
	return !Global_1572887.f_10;
}

void func_924(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_925(int iParam0)
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

void func_926(struct<2> Param0, int iParam2, int iParam3)
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
	switch (func_666(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_1145(func_841(Param0));
			if ((iVar4 == -1 && iParam3 == 2) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2.332405E-23f) == 0)
			{
				iVar5 = 0;
				while (iVar5 <= 112)
				{
					if (func_1146(iVar5) == func_841(Param0))
					{
						iVar4 = iVar5;
					}
					else
					{
						iVar5++;
					}
				}
			}
			iVar6 = func_1147(iVar4);
			if (!func_1148(iVar6, 0))
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

int func_927(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_921(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1149(iVar0);
}

int func_928(struct<2> Param0, int iParam2)
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
	if (!func_1103(Param0, &vVar0))
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
		func_1103(Global_1072759.f_19487.f_1[iVar9 /*3*/], &vVar3);
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
			func_1150(iVar9);
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

void func_929()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1072759.f_19487)
	{
		if (func_1103(Global_1072759.f_19487.f_1[iVar0 /*3*/], &vVar1))
		{
		}
		iVar0++;
	}
}

int func_930(int iParam0, int iParam1)
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

void func_931(char[12] cParam0)
{
	Global_1939089.f_75.f_67 = { cParam0 };
}

void func_932()
{
	StringCopy(&(Global_1939089.f_75.f_67), "", 24);
}

bool func_933(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1151(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_1152(iVar1))
	{
		if (Global_1072759.f_19585.f_24 && !func_1153(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(Global_1072759.f_19585[iVar1], iVar2) || MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2));
	}
	return MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2);
}

int func_934(struct<2> Param0)
{
	int iVar0;

	if (!func_73(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_74(Global_1900460.f_1[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_935(int iParam0)
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
		func_1154(&(Global_1900460.f_1[0 /*2*/]));
		return 1;
	}
	func_1154(&(Global_1900460.f_1[iParam0 /*2*/]));
	Global_1900460.f_66 = (Global_1900460.f_66 - 1);
	func_1155(iParam0, Global_1900460.f_66);
	return 1;
}

int func_936(struct<2> Param0)
{
	int iVar0;

	if (Global_1205789.f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1205789.f_129)
	{
		if (func_74(Global_1205789[iVar0 /*4*/].f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_937(int iParam0, var uParam1)
{
	func_1156(uParam1, iParam0);
	if (Global_1205789.f_129 > 0)
	{
		if (Global_1205789.f_130 == iParam0)
		{
			func_1157(0);
		}
	}
	func_1158();
}

void func_938(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_939()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 1008981770)
	{
		return 19;
	}
	if (fVar0 < 1042536202)
	{
		return 15;
	}
	if (fVar0 < 1050589266)
	{
		return 17;
	}
	if (fVar0 < 1055622431)
	{
		return 16;
	}
	if (fVar0 < 1058810102)
	{
		return 18;
	}
	return 0;
}

int func_940(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 30:
			return 27;
		case 52:
			return 28;
		case 31:
			return 29;
		case 32:
			return 30;
		case 33:
			return 31;
		case 127:
			return 32;
		case 131:
			return 33;
		case 132:
			return 34;
		case 35:
			return 35;
		case 88:
			return 40;
		case 37:
			return 42;
		case 38:
			return 43;
		case 94:
			return 44;
		case 121:
			return 46;
		case 39:
			return 47;
		case 40:
			return 48;
		case 41:
			return 49;
		case 42:
			return 50;
		case 53:
			return 51;
		case 44:
			return 52;
		case 55:
			return 53;
		case 45:
			return 54;
		case 47:
			return 57;
		case 51:
			return 61;
		case 60:
			return 63;
		case 62:
			return 64;
		case 63:
			return 65;
		case 64:
			return 66;
		case 65:
			return 67;
		case 66:
			return 68;
		case 135:
			return 69;
		case 136:
			return 70;
		case 67:
			return 71;
		case 82:
			return 72;
		case 69:
			return 73;
		case 70:
			return 74;
		case 72:
			return 76;
		case 73:
			return 78;
		case 74:
			return 79;
		case 75:
			return 80;
		case 76:
			return 81;
		case 77:
			return 82;
		case 80:
			return 84;
		case 81:
			return 85;
		case 123:
			return 86;
		case 83:
			return 87;
		case 84:
			return 88;
		case 85:
			return 90;
		case 86:
			return 91;
		case 87:
			return 92;
		case 92:
			return 96;
		case 93:
			return 97;
		case 98:
			return 99;
		case 99:
			return 100;
		case 100:
			return 101;
		case 101:
			return 102;
		case 102:
			return 103;
		case 103:
			return 104;
		case 104:
			return 105;
		case 105:
			return 106;
		case 106:
			return 107;
		case 110:
			return 114;
		case 111:
			return 115;
		case 113:
			return 118;
		case 115:
			return 119;
		case 116:
			return 120;
		case 117:
			return 121;
		case 118:
			return 122;
		case 139:
			return 123;
		default:
			break;
	}
	return 0;
}

int func_941(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 170;
		case 1:
			return 171;
		case 2:
			return 172;
		case 3:
			return 173;
		case 4:
			return 174;
		case 5:
			return 175;
		case 6:
			return 175;
		case 7:
			return 175;
		case 8:
			return 176;
		case 9:
			return 177;
		case 10:
			return 178;
		case 11:
			return 179;
		case 12:
			return 180;
		case 13:
			return 181;
		case 14:
			return 182;
		case 15:
			return 183;
		case 16:
			return 184;
		default:
			break;
	}
	return -1;
}

void func_942(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_943(var uParam0)
{
	struct<4> Var0;

	Var0 = 1;
	Var0.f_1 = 1;
	*uParam0 = { Var0 };
}

bool func_944()
{
	return Global_1902818.f_5 == 6;
}

void func_945(int iParam0)
{
	if (!func_1159(iParam0))
	{
		func_149(&(Global_1902818.f_2), iParam0);
	}
}

bool func_946()
{
	return Global_1902818.f_5 == 7;
}

bool func_947()
{
	return Global_1902818.f_5 == 12;
}

void func_948(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_679() - fParam1);
	func_426(uParam0, 1);
	func_427(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_949(var uParam0, int iParam1)
{
}

void func_950(var uParam0)
{
	struct<16> Var0;

	Var0.f_13 = -1;
	Var0.f_13.f_1 = -1;
	*uParam0 = { Var0 };
}

void func_951(var uParam0)
{
	struct<5> Var0;

	Var0.f_3 = 1;
	*uParam0 = { Var0 };
}

void func_952(var uParam0)
{
	var uVar0;

	uVar0 = 1;
	*uParam0 = uVar0;
}

void func_953(var uParam0)
{
	vector3 vVar0;

	vVar0 = 1;
	vVar0.f_1 = -1f;
	vVar0.f_2 = 1;
	*uParam0 = { vVar0 };
}

void func_954(var uParam0)
{
	struct<9> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_2 = -1;
	Var0.f_1 = -1;
	Var0 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	*uParam0 = { Var0 };
}

void func_955(var uParam0)
{
	struct<4> Var0;

	*uParam0 = { Var0 };
}

void func_956(var uParam0)
{
	vector3 vVar0;

	*uParam0 = { vVar0 };
}

void func_957(var uParam0)
{
	vector3 vVar0;

	*uParam0 = { vVar0 };
}

void func_958(var uParam0)
{
	var uVar0;

	*uParam0 = uVar0;
}

void func_959()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1956862.f_1565.f_117.f_13 = BUILTIN::FLOOR(PLAYER::_GET_PLAYER_HEALTH(iVar0));
	Global_1956862.f_1565.f_117.f_14 = PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(iVar0);
	Global_1956862.f_1565.f_117.f_15 = PLAYER::_GET_PLAYER_STAMINA(iVar0);
}

void func_960()
{
	Global_1956862.f_1565.f_117.f_16 = func_1139(0, 2);
	Global_1956862.f_1565.f_117.f_17 = func_1139(1, 2);
	Global_1956862.f_1565.f_117.f_18 = func_1139(2, 2);
}

bool func_961(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<18> Var29;
	int iVar47;
	int iVar48;
	struct<10> Var49;
	int iVar63;

	Var0.f_9 = -5.45926E-19f;
	Var29 = { func_1160(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, -5.356537E-22f, 0, 0) };
	if (func_1161(&Var29, &iVar47, &iVar48, bParam1))
	{
		Var49.f_9 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar48)
		{
			if (func_1162(&Var49, iVar63, iVar47, iVar48))
			{
				if (func_1163(&Var49, &Var0, 0))
				{
					if (func_1164(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_1165(iVar47);
						return true;
					}
				}
			}
			iVar63++;
		}
		func_1165(iVar47);
	}
	return false;
}

struct<4> func_962()
{
	return Global_1290256.f_11.f_310;
}

bool func_963()
{
	return Global_1290256.f_11.f_318 > Global_1295619.f_16;
}

void func_964(var uParam0, bool bParam1)
{
	Global_1290256.f_11.f_310 = { *uParam0 };
	if (bParam1)
	{
		Global_1290256.f_11.f_318 = Global_1295619.f_16 + 10;
	}
}

int func_965(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_1166(iParam0);
	bVar1 = func_16(func_1167(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return iVar0;
}

int func_966()
{
	int iVar0;
	struct<2> Var1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var1 = { func_379(iVar0) };
		if (func_666(Var1) == 7)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_967(int iParam0)
{
	return func_1168(&(Global_3145858.f_6), iParam0);
}

int func_968(int iParam0, int iParam1)
{
	if (iParam1 == 0)
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
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 4;
			case 1:
				return 5;
			case 2:
				return 6;
			case 3:
				return 7;
			default:
				break;
		}
	}
	return -1;
}

struct<4> func_969()
{
	struct<4> Var0;

	return Var0;
}

bool func_970(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<18> Var29;
	int iVar47;
	int iVar48;
	struct<10> Var49;
	int iVar63;

	Var0.f_9 = -5.45926E-19f;
	Var29 = { func_1160(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, -5.356537E-22f, 0, 0) };
	if (func_1161(&Var29, &iVar47, &iVar48, bParam1))
	{
		Var49.f_9 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar48)
		{
			if (func_1162(&Var49, iVar63, iVar47, iVar48))
			{
				if (func_1163(&Var49, &Var0, 0))
				{
					if (func_1164(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_1165(iVar47);
						return true;
					}
				}
			}
			iVar63++;
		}
		func_1165(iVar47);
	}
	return false;
}

struct<4> func_971(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar16;

	Var2.f_9 = -5.45926E-19f;
	if (!func_1169("ALL HORSES", &iVar0, &iVar1, -5.45926E-19f, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_1162(&Var2, iVar16, iVar0, iVar1))
		{
		}
		else if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Var2))
		{
		}
		else
		{
			iVar16++;
		}
	}
	func_1165(iVar0);
	return Var2;
}

bool func_972(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	func_1170(&Global_1903834);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_1171(iParam0, &Global_1903834, &(Global_1903834.f_53), bParam2))
			{
				return false;
			}
			break;
		case 2:
			if (!func_1172(iParam0, &Global_1903834, &(Global_1903834.f_82), bParam2))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_973(int iParam0)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam0->f_10 == -1)
	{
		return false;
	}
	return true;
}

int func_974(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_1173(iParam0, iVar1);
		if (iParam1 < iVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4;
}

void func_975(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1174(uParam0[iVar0 /*7*/]);
		iVar0++;
	}
}

void func_976(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_977(int iParam0)
{
	return (Global_1953279 && iParam0) != 0;
}

void func_978(var uParam0)
{
	int iVar0;

	*uParam0 = Global_1953279.f_1676;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uParam0->f_1[iVar0 /*3*/] = { Global_1953279.f_1676.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

bool func_979(var uParam0)
{
	struct<4> Var0;

	Var0 = func_1175(0);
	Var0.f_1 = uParam0;
	Var0.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&Var0);
	return DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var0);
}

void func_980(var uParam0)
{
	int iVar0;

	Global_1953279.f_1557 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1953279.f_1557.f_1[iVar0 /*3*/] = { uParam0->f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

bool func_981(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	int iVar11;

	iVar11 = 0;
	Var4 = func_1175(iParam6);
	Var4.f_1 = bParam1;
	Var4.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&Var4);
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var4))
	{
		return false;
	}
	DATAFILE::_PARSEDDATA_GET_BOOL(&bVar2, &Var4, -2.622373E-16f);
	DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, 2.24095E+35f);
	*uParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_1177(uParam0, func_1176(iVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_1178(-1);
		}
		if (DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, -2.161193E-05f))
		{
			iVar11 = func_1176(iVar0);
		}
	}
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var4))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, 2.24243E+12f))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_1179(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, 1.154786E+11f))
			{
			}
			else
			{
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bVar2)
				{
					func_1180(iVar3, 16, 6);
				}
				if (bParam5)
				{
					if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = 1808.893f;
					}
					else
					{
						Jump @362; //curOff = 297
						if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, 46846.96f))
						{
							if (func_1181(iVar3) && func_1182(uParam0->f_1[iVar1 /*3*/], iVar3, &iVar0))
							{
								uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
						}
					}
					iVar1 = 16;
					if (bVar2)
					{
						if (!bParam8)
						{
							func_1184(uParam0, iVar11, func_1183(bParam1) != 0, iParam9);
						}
					}
					else if ((((func_1185() == 4.387347E-38f && uParam0->f_1[iVar1 /*3*/] == Global_1953279.f_83[iVar1 /*12*/]) && func_1183(uParam0->f_1[34 /*3*/]) == 0) && !func_977(32)) && !func_977(64))
					{
						uParam0->f_1[iVar1 /*3*/] = func_1186(-2.763755E-08f, 0);
						uParam0->f_1[iVar1 /*3*/].f_1 = 1808.893f;
						func_1187(uParam0, uParam0->f_1[iVar1 /*3*/], iVar1, 0, iParam9);
					}
					if (bParam4)
					{
						*uParam0 = bParam1;
					}
					return true;
				}
			}
		}
	}
}

void func_982(var uParam0)
{
	int iVar0;

	Global_1953279.f_1676 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1953279.f_1676.f_1[iVar0 /*3*/] = { uParam0->f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

int func_983(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 2)
	{
		iParam1 = func_991(1);
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = Global_1956862.f_1431.f_50[iParam0];
			break;
		case 1:
			iVar0 = Global_1956862.f_1565.f_2.f_50[iParam0];
			break;
	}
	return iVar0 + 4;
}

int func_984(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_991(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956862.f_1546;
		case 1:
			return Global_1956862.f_1565.f_136;
		default:
			break;
	}
	return -1;
}

int func_985(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_991(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956862.f_1546.f_1;
		case 1:
			return Global_1956862.f_1565.f_136.f_1;
		default:
			break;
	}
	return -1;
}

int func_986(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_991(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956862.f_1546.f_2;
		case 1:
			return Global_1956862.f_1565.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_987()
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1956862.f_1565.f_2), &(Global_1956862.f_1431), 115);
	Global_1956862.f_1565.f_2.f_6[0 /*3*/] = func_1139(0, 0);
	Global_1956862.f_1565.f_2.f_6[0 /*3*/].f_2 = 0;
	Global_1956862.f_1565.f_2.f_6[0 /*3*/].f_1 = -15;
	Global_1956862.f_1565.f_2.f_6[1 /*3*/] = func_1139(1, 0);
	Global_1956862.f_1565.f_2.f_6[1 /*3*/].f_2 = 0;
	Global_1956862.f_1565.f_2.f_6[1 /*3*/].f_1 = -15;
	Global_1956862.f_1565.f_2.f_6[2 /*3*/] = func_1139(2, 0);
	Global_1956862.f_1565.f_2.f_6[2 /*3*/].f_2 = 0;
	Global_1956862.f_1565.f_2.f_6[2 /*3*/].f_1 = -15;
}

void func_988(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(Global_1295619.f_3) != 3)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	bVar0 = func_1188(iParam0);
	iVar1 = func_1189(bVar0, func_710(0), -6.082892E-09f, 0, 0, 0);
	iVar2 = (iParam1 - iVar1);
	iVar3 = MISC::ABSI(iVar2);
	if (iVar2 > 0)
	{
		func_403(bVar0, iVar3, 6.028273E-12f);
	}
	else
	{
		func_1190(bVar0, iVar3, -5.149929E+33f, 0, 0);
	}
}

int func_989(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 100;
		case 2:
			return 300;
		case 3:
			return 700;
		case 4:
			return 1500;
		case 5:
			return 3100;
		default:
			break;
	}
	return 100;
}

void func_990(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(Global_1295619.f_3) != 3)
	{
		return;
	}
	bVar0 = func_1191(iParam0);
	iVar1 = func_1189(bVar0, func_710(0), -2.696814E-33f, 0, 0, 0);
	iVar2 = (iParam1 - iVar1);
	iVar3 = MISC::ABSI(iVar2);
	if (iVar2 > 0)
	{
		func_403(bVar0, iVar3, 6.028273E-12f);
	}
	else
	{
		func_1190(bVar0, iVar3, -5.149929E+33f, 0, 0);
	}
	func_1192(iParam0, BUILTIN::TO_FLOAT(iParam1), 1);
}

int func_991(int iParam0)
{
	return func_1193(func_398(iParam0));
}

float func_992(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_991(1);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956862.f_1431.f_26[iParam0];
		case 1:
			return Global_1956862.f_1565.f_2.f_26[iParam0];
		default:
			break;
	}
	return -1f;
}

bool func_993(int iParam0, int iParam1)
{
	return func_1195(func_1194(iParam0), iParam1);
}

void func_994()
{
	func_1196(0);
	func_1196(1);
	func_1196(2);
	func_1196(3);
}

void func_995()
{
	func_1197(0);
	func_1197(1);
	func_1197(2);
	func_1197(3);
}

void func_996()
{
	if (func_1198(2))
	{
		func_1199(0);
	}
	else
	{
		func_1199(1);
	}
	func_1200(1);
	PLAYER::_SET_LOCAL_PLAYER_PERSONA_ABILITY_FLAG(15, true);
	PLAYER::_SET_LOCAL_PLAYER_PERSONA_ABILITY_FLAG(16, true);
}

void func_997()
{
	float fVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 23)
	{
		fVar0 = func_992(iVar1, 2);
		func_1192(iVar1, fVar0, 2);
		iVar1++;
	}
}

void func_998(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = func_984(2);
	iVar2 = iVar0;
	iVar3 = -1;
	if (func_1201())
	{
		func_1202(iParam1);
		return;
	}
	PED::_SET_TANK_ATTRIBUTE_SIZE(iParam1, 0, BUILTIN::TO_FLOAT(iVar0));
	if (func_23() == 0)
	{
		iVar1 = BUILTIN::ROUND(PED::_GET_PED_INCAPACITATION_HEALTH(iParam1));
		iVar2 = (iVar2 + iVar1);
	}
	ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, iVar2);
	iVar4 = *uParam0;
	switch (iVar4)
	{
		case 0:
			iVar3 = ENTITY::GET_ENTITY_MAX_HEALTH(iParam1, true);
			func_1203(iVar3, 0);
			break;
		case 3:
			iVar3 = uParam0->f_1;
			if (iVar3 > 0)
			{
				func_1203(iVar3, 0);
			}
			else
			{
				iVar3 = ENTITY::GET_ENTITY_MAX_HEALTH(iParam1, true);
				func_1203(iVar3, 0);
			}
			break;
		case 1:
			break;
		case 2:
			break;
	}
}

void func_999(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;

	if (func_1201())
	{
		return;
	}
	iVar0 = func_986(2);
	fVar1 = -1f;
	PED::_SET_TANK_ATTRIBUTE_SIZE(iParam1, 1, BUILTIN::TO_FLOAT(iVar0));
	iVar2 = uParam0->f_8;
	switch (iVar2)
	{
		case 2:
			break;
		case 0:
			fVar1 = PED::_GET_PED_MAX_STAMINA(iParam1);
			func_1204(fVar1, 0);
			break;
		case 1:
			fVar1 = 0f;
			func_1204(fVar1, 0);
			break;
		case 3:
			fVar1 = uParam0->f_9;
			if (fVar1 >= 0f)
			{
				func_1204(fVar1, 0);
			}
			else
			{
				fVar1 = PED::_GET_PED_MAX_STAMINA(iParam1);
				func_1204(fVar1, 0);
			}
			break;
	}
}

void func_1000(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (func_1201())
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = func_985(2);
	fVar2 = -1f;
	PED::_SET_TANK_ATTRIBUTE_SIZE(iParam1, 2, BUILTIN::TO_FLOAT(iVar1));
	iVar3 = uParam0->f_4;
	switch (iVar3)
	{
		case 2:
			func_1206(func_1205());
			break;
		case 0:
			fVar2 = PLAYER::_SPECIAL_ABILITY_GET_AMOUNT_CACHED(iVar0);
			func_1206(fVar2);
			break;
		case 1:
			fVar2 = 0f;
			func_1206(fVar2);
			break;
		case 3:
			fVar2 = uParam0->f_5;
			if (fVar2 >= 0f)
			{
				func_1206(fVar2);
			}
			else
			{
				fVar2 = PLAYER::_SPECIAL_ABILITY_GET_AMOUNT_CACHED(iVar0);
				func_1206(fVar2);
			}
			break;
	}
	func_899(0f);
}

void func_1001(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 23)
	{
		if (func_1207(iVar1))
		{
			iVar2 = func_1208(iVar1);
			fVar0 = func_1209(uParam0, iVar2);
			func_1210(iVar2, fVar0);
		}
		iVar1++;
	}
	func_1211();
}

void func_1002()
{
	if (Global_1956862.f_1431.f_108.f_1 != 0f)
	{
		func_1212(0, Global_1956862.f_1431.f_108.f_1, 0, 0);
		Global_1956862.f_1431.f_108.f_1 = 0f;
	}
	if (Global_1956862.f_1431.f_108.f_3 != 0f)
	{
		func_1212(1, Global_1956862.f_1431.f_108.f_3, 0, 0);
		Global_1956862.f_1431.f_108.f_3 = 0f;
	}
	if (Global_1956862.f_1431.f_108.f_2 != 0f)
	{
		func_1212(2, Global_1956862.f_1431.f_108.f_2, 0, 0);
		Global_1956862.f_1431.f_108.f_2 = 0f;
	}
	if (Global_1956862.f_1431.f_108.f_4 != 0f)
	{
		func_1212(19, Global_1956862.f_1431.f_108.f_4, 0, 0);
		Global_1956862.f_1431.f_108.f_4 = 0f;
	}
	if (Global_1956862.f_1431.f_108.f_6 != 0f)
	{
		func_1212(18, Global_1956862.f_1431.f_108.f_6, 0, 0);
		Global_1956862.f_1431.f_108.f_6 = 0f;
	}
	if (Global_1956862.f_1431.f_108.f_5 != 0f)
	{
		func_1212(20, Global_1956862.f_1431.f_108.f_5, 0, 0);
		Global_1956862.f_1431.f_108.f_5 = 0f;
	}
	func_1213();
}

void func_1003(int iParam0)
{
	Global_1956862.f_1431.f_3 = iParam0;
}

void func_1004(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
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
			if (Global_1953279.f_918 >= 25)
			{
				return;
			}
			if (func_1214(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1953279.f_918)
				{
					iVar1 = ((Global_1953279.f_923 + iVar0) % 25);
					if ((Global_1953279.f_736[iVar1 /*4*/] == Param0 && Global_1953279.f_736[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1953279.f_736[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_1215(Param0);
			Global_1953279.f_736[Global_1953279.f_924 /*4*/] = { Param0 };
			Global_1953279.f_918++;
			Global_1953279.f_924 = (Global_1953279.f_924 + 1 % 25);
			func_694(8);
			break;
		case 24:
		case 25:
			if (Global_1953279.f_919 >= 25)
			{
				return;
			}
			if (func_1214(Param0))
			{
				return;
			}
			func_1215(Param0);
			Global_1953279.f_635[Global_1953279.f_919 /*4*/] = { Param0 };
			Global_1953279.f_919++;
			func_694(8);
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1953279.f_920 >= 20)
			{
				return;
			}
			if (func_1214(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1953279.f_920)
				{
					iVar1 = ((Global_1953279.f_921 + iVar0) % 20);
					if ((Global_1953279.f_837[iVar1 /*4*/] == Param0 && Global_1953279.f_837[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1953279.f_837[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			if (Param0 == 34)
			{
				Global_1953279.f_930 = 1;
				Global_1953279.f_930.f_1 = Param0.f_2;
				Global_1953279.f_930.f_2 = Param0.f_3;
			}
			func_1215(Param0);
			Global_1953279.f_837[Global_1953279.f_922 /*4*/] = { Param0 };
			Global_1953279.f_920++;
			Global_1953279.f_922 = (Global_1953279.f_922 + 1 % 20);
			func_694(8);
			break;
			break;
	}
}

bool func_1005(bool bParam0)
{
	return bParam0;
}

bool func_1006(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

bool func_1007(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, float fParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_1216(&bParam0);
	if (!func_714(bParam0, 0) && !func_1006(func_1005(bParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_715(bParam0, -3.294982E+22f) == 0)
	{
		bParam3 = true;
	}
	if (func_1217(bParam0) && WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		Var0 = { func_1010(0) };
		Var4.f_9 = -5.45926E-19f;
		if (!func_1012(bParam0, &Var0, 6.282013E+23f, 0, 0))
		{
			return false;
		}
		else if (func_1013(bParam0, &Var4, 6.282013E+23f))
		{
			return false;
		}
		if (func_1011(bParam0, 1))
		{
			if (!func_1012(bParam0, &Var0, -3.587391E+15f, 0, 0))
			{
				return false;
			}
			else if (func_1013(bParam0, &Var4, -3.587391E+15f))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_1218(bParam0, iParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_1189(bParam0, *iParam1, iParam1->f_4, bParam4, bParam3, fParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_1008(bool bParam0)
{
	if (func_23() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_692(bParam0));
}

int func_1009(bool bParam0)
{
	vector3 vVar0;

	if (!func_714(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_1010(bool bParam0)
{
	int iVar0;

	iVar0 = func_692(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_711(8.681942E-06f, func_710(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_711(8.681942E-06f, func_710(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_711(8.681942E-06f, func_710(bParam0), -1.942248E+12f, 0);
}

int func_1011(bool bParam0, bool bParam1)
{
	if (func_894(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_1219();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_1012(bool bParam0, var uParam1, float fParam2, bool bParam3, float fParam4)
{
	return func_1189(bParam0, *uParam1, fParam2, bParam3, 1, fParam4) > 0;
}

bool func_1013(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_1220(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1014(bool bParam0)
{
	int iVar0;

	iVar0 = func_692(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_711(3.507197E-29f, func_710(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_711(3.507197E-29f, func_710(bParam0), 12999093, 0);
}

bool func_1015(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_894(bParam0);
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
			if (func_1221(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_1016(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_1222(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_1017()
{
	return Global_1051645.f_12;
}

char* func_1018()
{
	return "unnamed";
}

int func_1019(int iParam0)
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

bool func_1020(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_167(36, iParam0);
}

bool func_1021(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_864(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_1223(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

bool func_1022(int iParam0)
{
	return func_1224(iParam0, 4);
}

bool func_1023(int iParam0)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (Global_1149020.f_2[iParam0 /*43*/].f_11 == iVar0 || Global_1149020.f_2[iParam0 /*43*/].f_11 == (iVar0 - 1))
	{
		return true;
	}
	return false;
}

int func_1024(int iParam0)
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

bool func_1025(int iParam0)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (Global_1149020.f_2[iParam0 /*43*/].f_9 == iVar0 || Global_1149020.f_2[iParam0 /*43*/].f_9 == (iVar0 - 1))
	{
		return true;
	}
	return false;
}

bool func_1026(int iParam0, int iParam1, vector3 vParam2, bool bParam5, struct<2> Param6, bool bParam8)
{
	if (!func_719())
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	else if (func_68(vParam2))
	{
		return false;
	}
	Global_1148491.f_57[iParam0 /*18*/].f_1 = iParam1;
	Global_1148491.f_57[iParam0 /*18*/].f_3 = { vParam2 };
	Global_1148491.f_57[iParam0 /*18*/].f_6 = bParam5;
	Global_1148491.f_57[iParam0 /*18*/].f_7 = { Param6 };
	if (bParam8)
	{
		Global_1148491.f_57[iParam0 /*18*/].f_2 = iParam1;
	}
	return true;
}

bool func_1027(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_1028(int iParam0)
{
	if ((iParam0 == 2.324436E+15f || iParam0 == 0.4263186f) || iParam0 == -1.730292E-25f)
	{
		return true;
	}
	return false;
}

bool func_1029(int iParam0)
{
	return iParam0 == -556.0374f;
}

bool func_1030(int iParam0, float fParam1)
{
	int iVar0;

	iVar0 = func_420(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return false;
	}
	if (fParam1 < 0f)
	{
		return false;
	}
	VEHICLE::SET_TRAIN_CRUISE_SPEED(iVar0, fParam1);
	return true;
}

bool func_1031(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1149020.f_2[iParam1 /*43*/].f_12[iParam2 /*2*/]))
	{
		return false;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1149020.f_2[iParam1 /*43*/].f_12[iParam2 /*2*/].f_1) && ENTITY::IS_ENTITY_IN_VOLUME(iParam0, Global_1149020.f_2[iParam1 /*43*/].f_12[iParam2 /*2*/].f_1, false, 0))
	{
		return true;
	}
	return false;
}

int func_1032(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	uVar1 = iParam0;
	if (MISC::IS_BIT_SET(iParam0, 31))
	{
		iVar0++;
		iParam0 ^= -1;
	}
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

void func_1033(int iParam0, int iParam1)
{
	if (func_78(Global_1148603[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][iParam0 /*4*/], iParam1))
	{
		func_443(&(Global_1148603[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][iParam0 /*4*/]), iParam1);
	}
}

bool func_1034(int iParam0)
{
	int iVar0;

	iVar0 = func_420(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return false;
	}
	VEHICLE::_SET_TRAIN_HALT(iVar0);
	return true;
}

void func_1035(int iParam0)
{
	if (Local_13.f_5 != iParam0)
	{
		if (iParam0 == 255)
		{
		}
		Local_13.f_5 = iParam0;
	}
}

void func_1036(int iParam0)
{
	if (Global_1072759.f_21626[iParam0 /*8*/].f_5 != 0)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1072759.f_21626[iParam0 /*8*/]))
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_1072759.f_21626[iParam0 /*8*/], Global_1072759.f_21626[iParam0 /*8*/].f_5);
		}
		Global_1072759.f_21626[iParam0 /*8*/].f_5 = 0;
		func_845(iParam0);
	}
}

bool func_1037()
{
	return func_630(Global_1572887.f_8, 1);
}

bool func_1038()
{
	return (Global_1572887.f_72.f_40 >= 14 && Global_1572887.f_72.f_40 < 21);
}

bool func_1039(var uParam0, int iParam1)
{
	return func_78(*uParam0, iParam1);
}

int func_1040(int iParam0)
{
	return (Global_1295619.f_16 - iParam0);
}

void func_1041(var uParam0, int iParam1)
{
	if (func_1039(uParam0, iParam1))
	{
		return;
	}
	func_149(uParam0, iParam1);
}

void func_1042(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	Global_1108965.f_34[iVar0 /*11*/].f_10 = 0;
}

void func_1043(var uParam0, int iParam1)
{
	func_443(uParam0, iParam1);
}

void func_1044(var uParam0, int* iParam1)
{
	*uParam0 = 28;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 9, 18, iParam1);
}

void func_1045(int iParam0, float fParam1, float fParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;

	HUD::_GET_COLOR_FROM_NAME(iParam0, &iVar0, &iVar1, &iVar2, &uVar3);
	fVar4 = 1132396544; /* Float: 255f */
	*fParam1 = (BUILTIN::TO_FLOAT(iVar0) / fVar4);
	*fParam2 = (BUILTIN::TO_FLOAT(iVar1) / fVar4);
	*fParam3 = (BUILTIN::TO_FLOAT(iVar2) / fVar4);
}

void func_1046()
{
	func_1225();
	func_1226();
}

bool func_1047(var uParam0, var uParam1)
{
	return false;
}

int func_1048(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam0 == 0)
	{
		return 0;
	}
	if (iParam1 < 0)
	{
		return 0;
	}
	iVar0 = func_1049(bParam0, 0, 0, 0);
	if (iVar0 >= iParam1)
	{
		return 0;
	}
	iVar1 = (iParam1 - iVar0);
	return func_1227(bParam0, iVar1, bParam2, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
}

int func_1049(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_714(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_1009(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_1228(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_1229(bParam0, 0);
	}
	if (func_715(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_692(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_1230(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_692(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

bool func_1050(bool bParam0)
{
	return WEAPON::IS_WEAPON_BOW(bParam0);
}

bool func_1051(int iParam0)
{
	bool bVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = true;
	if (func_1231(iParam0))
	{
		bVar0 = false;
	}
	WEAPON::GIVE_WEAPON_TO_PED(Global_33, iParam0, 0, bVar0, false, 0, true, 0.5f, 1f, 6.028273E-12f, false, 0f, false);
	func_1232(iParam0);
	return true;
}

void func_1052(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896762.f_352)
		{
			Global_1896762.f_352 = bParam0;
		}
	}
	else if (Global_1896762.f_352)
	{
		Global_1896762.f_352 = bParam0;
	}
}

void func_1053(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam3 == 255)
	{
		iVar0 = PLAYER::PLAYER_ID();
	}
	iVar2 = func_1233(iParam1);
	iVar1 = iParam2;
	if ((iVar2 && iVar1) != 0)
	{
	}
	TELEMETRY::_TELEMETRY_MISSION_FAILED_TO_LAUNCH(iParam0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar0), false, false), (iVar2 || iVar1));
}

int func_1054(int iParam0)
{
	if (func_1234())
	{
		return 0;
	}
	if (!func_155())
	{
		return 0;
	}
	if (func_1235())
	{
		func_1236(2);
	}
	else
	{
		func_1236(1);
	}
	func_1237(iParam0);
	return 1;
}

void func_1055(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<18> Var1;

	if (!func_73(Param0))
	{
		return;
	}
	if (!func_372(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1238(Param0);
	}
	if (!func_73(func_379(0)))
	{
		func_661(Param0, 3);
		func_352(bParam3);
		func_662(!bParam4);
		func_1239(Param0, -1);
		if (bParam2 && !func_1240(2))
		{
			func_924(&Global_0, 1024);
		}
		func_664(1);
	}
	else
	{
		func_1239(Param0, -1);
		func_661(Param0, 4);
		func_1241(Param0, 0);
	}
	Global_1051645.f_45.f_1 = 1;
	iVar0 = func_666(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_1242(Param0, &Var1))
		{
			MISC::_0x1096603B519C905F(&(Var1.f_17));
		}
	}
}

int func_1056(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	struct<4> Var0;

	if (func_936(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_922(Param0);
	Var0.f_3 = iParam3;
	func_1243(&Var0, bParam2, iParam4);
	return 1;
}

void func_1057(int iParam0)
{
	if (Global_1203937.f_420 != 2)
	{
		return;
	}
	if (Global_1203937.f_420.f_1 != 0)
	{
		return;
	}
	Global_1203937.f_420.f_1 = iParam0;
	POSSE::_0xC584FF658B2E55DA(iParam0);
}

void func_1058(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;

	iVar0 = func_670(iParam0);
	if (iVar0 == -4.537018E+10f)
	{
		func_459(func_47(1.039154E+16f, -4.537018E+10f), 1);
	}
	else
	{
		func_459(func_47(1.039154E+16f, -1.088202E-21f), 1);
	}
	if (func_46(iParam0, uParam1, &fVar1))
	{
		func_459(func_47(1.039154E+16f, fVar1), 1);
	}
}

void func_1059(int iParam0)
{
	int iVar0;
	int iVar1;

	if ((Global_1900412.f_1 == 2 || Global_1900412.f_1 == 5) || Global_1900412.f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_23() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_940(Global_1893611.f_2);
	Global_1900412.f_1 = 3;
	Global_1900412.f_2 = 0;
	Global_1900412.f_7 = iVar0;
	Global_1900412.f_8 = iParam0;
	Global_1900412.f_9 = iVar1;
	if (Global_1900412.f_9 != -1 && Global_1900412.f_9 != 0)
	{
		func_942(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
	}
	else if (Global_1900412.f_11 != -1)
	{
		func_942(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_11);
	}
}

void func_1060()
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		if (func_1244(1048576, PLAYER::PLAYER_ID()) || Global_1295611.f_2.f_1 == 2)
		{
			func_1245();
		}
	}
	if (LAW::GET_WANTED_SCORE(Global_1295619.f_5) > 0)
	{
		if (func_1246())
		{
			func_1247();
		}
		func_1248();
	}
}

void func_1061(int iParam0)
{
	if (Global_1108965.f_775.f_28 != iParam0)
	{
		Global_1108965.f_775.f_28 = iParam0;
	}
}

int func_1062(int iParam0, struct<2> Param1, int iParam3)
{
	switch (iParam0)
	{
		case 4:
		case 5:
		case 6:
		case 7:
			break;
		default:
			return 0;
	}
	func_1249(iParam0, Param1, iParam3);
	return 1;
}

float func_1063(int iParam0)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = -1.06008E+37f;
	if (func_36(&Var1, iParam0) && func_143(&Var1))
	{
		func_40(Var1, -9.068753E-21f, &fVar0, 0);
	}
	return fVar0;
}

var func_1064(int iParam0)
{
	var uVar0;
	struct<5> Var1;

	if (func_36(&Var1, iParam0) && func_143(&Var1))
	{
		func_40(Var1, -2.193765E-07f, &uVar0, 0);
	}
	return uVar0;
}

var func_1065(struct<34> Param0, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];
	char cVar11[64];

	iVar0 = func_1250();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = (iVar1 + Param0.f_25);
	MISC::_INT_TO_STRING(iVar1, "%i", &cVar11);
	Global_1940239.f_245.f_1308++;
	StringCopy(&cVar3, "Invite_Root_", 64);
	StringConCat(&cVar3, &cVar11, 64);
	StringConCat(&cVar3, "_", 64);
	StringIntConCat(&cVar3, Global_1940239.f_245.f_1308, 64);
	func_1251(&(Global_1940239.f_245.f_14[iVar0 /*43*/]), Global_1940239.f_245.f_4, cVar3, Param0);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_39 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_1144(88), Global_1940239.f_245.f_1308);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_41 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940239.f_245.f_14[iVar0 /*43*/], func_1144(89), true);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_42 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940239.f_245.f_14[iVar0 /*43*/], func_1144(90), false);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_37 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940239.f_245.f_14[iVar0 /*43*/], func_1144(78), Param0.f_32);
	if (Param0.f_32)
	{
		Global_1940239.f_245.f_14[iVar0 /*43*/].f_36 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1940239.f_245.f_14[iVar0 /*43*/], func_1144(76), Param0.f_31);
		Global_1940239.f_245.f_14[iVar0 /*43*/].f_35 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_1144(79), Param0.f_30);
	}
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_30 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_1144(91), Param0.f_26);
	bVar15 = false;
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_38 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(Global_1940239.f_245.f_14[iVar0 /*43*/], 1.46912E-13f, bVar15);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_31 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_1144(53), Param0.f_27);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_32 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_1144(54), Param0.f_27.f_1);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_33 = DATABINDING::_DATABINDING_ADD_DATA_GANG_ID(Global_1940239.f_245.f_14[iVar0 /*43*/], func_1144(92), Param0.f_27.f_2);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_29 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_1144(93), iVar2);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_1144(94), Param0.f_24);
	func_920(Global_1940239.f_245.f_1306 + 1);
	if (Global_1940239.f_245.f_1308 == NaNf)
	{
		Global_1940239.f_245.f_1308 = 0;
	}
	if (func_1252(Param0.f_26))
	{
		Param0.f_33 = 5;
		Param0.f_33.f_1 = 1;
		Param0.f_33.f_13 = 5.395881E-11f;
		Param0.f_33.f_14 = Global_1940239.f_245.f_14[iVar0 /*43*/];
		iVar16 = func_1253(&(Param0.f_33));
		Global_1940239.f_245.f_14[iVar0 /*43*/].f_40 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_1144(95), iVar16);
	}
	iVar17 = func_1254();
	if (iVar17 == 0 || Param0.f_24 == iVar17)
	{
		Global_1940239.f_245.f_1307++;
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940239.f_245.f_5, 0, "pm_invite_item", Global_1940239.f_245.f_14[iVar0 /*43*/]);
	}
	return Global_1940239.f_245.f_14[iVar0 /*43*/];
}

int func_1066(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1900530 == 15)
	{
		return -1;
	}
	if (!func_1255(Param0))
	{
		return -1;
	}
	iVar1 = func_1256(Param0);
	if (iVar1 >= 0)
	{
		func_1257(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = Global_1900530;
		Global_1900531[iVar0 /*2*/] = { Param0 };
		Global_1900562[iVar0 /*2*/] = { Var2 };
		func_1257(Param0, 1);
		Global_1900530++;
		if (Global_1900530 > 15)
		{
			Global_1900530 = 15;
		}
		return iVar0;
	}
	return -1;
}

bool func_1067(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_1068(int iParam0, int iParam1)
{
	if (!func_1067(iParam0))
	{
		return false;
	}
	if (func_23() == -1)
	{
		return (Global_1915643.f_3[iParam0 /*447*/].f_6 && iParam1) != 0;
	}
	else
	{
		return (Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1) != 0;
	}
	return false;
}

void func_1069(int iParam0, int iParam1)
{
	if (!func_1067(iParam0))
	{
		return;
	}
	if (func_23() == -1)
	{
		Global_1915643.f_3[iParam0 /*447*/].f_6 = (Global_1915643.f_3[iParam0 /*447*/].f_6 || iParam1);
	}
	else
	{
		Global_1051832.f_92[iParam0 /*75*/].f_1 = (Global_1051832.f_92[iParam0 /*75*/].f_1 || iParam1);
	}
}

void func_1070(int iParam0, int iParam1)
{
	if (!func_1067(iParam0))
	{
		return;
	}
	if (func_23() == -1)
	{
		Global_1915643.f_3[iParam0 /*447*/].f_6 = (Global_1915643.f_3[iParam0 /*447*/].f_6 - (Global_1915643.f_3[iParam0 /*447*/].f_6 && iParam1));
	}
	else
	{
		Global_1051832.f_92[iParam0 /*75*/].f_1 = (Global_1051832.f_92[iParam0 /*75*/].f_1 - (Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1));
	}
}

bool func_1071(int iParam0)
{
	if (func_1258())
	{
		if (Global_1915643.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

void func_1072(int iParam0)
{
	PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 354, true);
	Global_1072759.f_21353.f_1[iParam0 /*8*/].f_4 = MISC::GET_FRAME_COUNT();
}

void func_1073(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_1074(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

Vector3 func_1075(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;

	fVar3 = (fParam3 * fParam3);
	iVar5 = 0;
	while (iVar5 < 10)
	{
		vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), 0f };
		if (((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= fVar3)
		{
			fVar4 = (fParam4 / 2f);
			vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar4, fVar4);
			return vParam0 + vVar0;
		}
		iVar5++;
	}
	return func_1259(vParam0, fParam3, fParam4);
}

bool func_1076(var uParam0, float fParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
	{
		uParam0->f_2 = uVar3;
		return true;
	}
	return false;
}

void func_1077(bool bParam0)
{
	if (bParam0)
	{
		func_169(68);
	}
	else
	{
		func_168(68);
	}
}

var func_1078(int iParam0)
{
	return Global_1149020.f_2[iParam0 /*43*/].f_5;
}

int func_1079(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_780(255))
	{
		if ((Param0.f_17.f_9 != -9.406495E-20f && Param0.f_17.f_9 != -2.19652E+23f) && Param0.f_17.f_9 != 4.795139E-15f)
		{
			Param0.f_17.f_9 = -2.19652E+23f;
		}
		if (Param0.f_16)
		{
			if ((Param0.f_6.f_9 != -9.406495E-20f && Param0.f_6.f_9 != -2.19652E+23f) && Param0.f_6.f_9 != 4.795139E-15f)
			{
				Param0.f_6.f_9 = -2.19652E+23f;
			}
		}
		func_652(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = { Param0 };
		func_653(&(Global_1102813.f_3878));
		Global_1102813.f_3878 = { Param30 };
		Global_1102813.f_3909 = iParam39;
		Global_1102813.f_3910 = iParam40;
		Global_1102813.f_3911 = iParam41;
		func_654(Global_1102813.f_3839, 36);
		func_655(Global_1102813.f_3878, 36);
		func_168(48);
		return 1;
	}
	return 0;
}

void func_1080()
{
	func_504(&(Global_1072759.f_22945.f_3), 128);
}

bool func_1081()
{
	return true;
}

bool func_1082()
{
	return (!Global_1902880 && MISC::ABSI((MISC::GET_FRAME_COUNT() - Global_1902880.f_2)) >= 5);
}

void func_1083(bool bParam0, int iParam1)
{
	if (bParam0->f_2 != iParam1)
	{
		bParam0->f_2 = iParam1;
	}
}

bool func_1084()
{
	int iVar0;

	iVar0 = 1;
	if ((((((!AUDIO::PREPARE_SOUND(func_581(), func_825(), -2) || !AUDIO::PREPARE_SOUND(func_826(), func_825(), -2)) || !AUDIO::PREPARE_SOUND(func_827(), func_825(), -2)) || !AUDIO::PREPARE_SOUND(func_1260(), func_825(), -2)) || !AUDIO::PREPARE_SOUND(func_828(), func_825(), -2)) || !AUDIO::PREPARE_SOUND(func_799(), func_800(), -2)) || !AUDIO::PREPARE_SOUND(func_829(), func_830(), -2))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_1085(int iParam0, var uParam1, int iParam2)
{
	switch (func_1261(iParam2))
	{
		case 0:
			func_1262(iParam0, uParam1, iParam2, 0);
			break;
		case 1:
			func_1263(iParam0, uParam1, iParam2, 0);
			break;
		case 2:
			func_1264(iParam0, uParam1, iParam2, -1);
			break;
		case 3:
			func_1265(iParam0, uParam1, iParam2, -1f);
			break;
		case 4:
			func_1266(iParam0, uParam1, iParam2, 0, 0);
			break;
		default:
			break;
	}
}

void func_1086(int iParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(iParam0, bParam1);
}

void func_1087(bool bParam0, int iParam1)
{
	if (bParam0->f_1 != iParam1)
	{
		bParam0->f_1 = iParam1;
	}
}

char* func_1088(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	char cVar0[32];
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char cVar8[32];

	StringCopy(&cVar0, "", 32);
	if (bParam3)
	{
		if (iParam0 != 0)
		{
			StringConCat(&cVar0, "+", 32);
			iParam0 = (iParam0 * -1);
		}
		else
		{
			return "";
		}
	}
	fVar4 = (IntToFloat(iParam0) / 1148846080);
	if (bParam5)
	{
		iVar5 = BUILTIN::CEIL(fVar4);
	}
	else
	{
		iVar5 = BUILTIN::FLOOR(fVar4);
	}
	iVar6 = func_1267((iVar5 / 60), 0, 180);
	iVar7 = func_1267((iVar5 % 60), 0, 60);
	if (iVar6 <= 9)
	{
		StringConCat(&cVar0, "0", 32);
	}
	StringIntConCat(&cVar0, iVar6, 32);
	if (iVar7 <= 9)
	{
		StringConCat(&cVar0, ":0", 32);
	}
	else
	{
		StringConCat(&cVar0, ":", 32);
	}
	StringIntConCat(&cVar0, iVar7, 32);
	if (bParam1)
	{
		StringConCat(&cVar0, ".", 32);
		iVar9 = (iParam0 % 1000);
		if (iVar9 < 10)
		{
			StringConCat(&cVar8, "00", 8);
		}
		else if (iVar9 < 100)
		{
			StringConCat(&cVar8, "0", 8);
		}
		StringIntConCat(&cVar8, iVar9, 8);
		if (iParam2 > 3 || iParam2 < 1)
		{
			iParam2 = 3;
		}
		iVar10 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar8);
		if (iParam2 > iVar10)
		{
			iParam2 = iVar10;
		}
		StringCopy(&cVar8, HUD::_GET_TEXT_SUBSTRING_2(&cVar8, iParam2), 8);
		StringConCat(&cVar0, &cVar8, 32);
	}
	if (!bParam4)
	{
		StringConCat(&cVar0, " ", 32);
	}
	return HUD::_GET_TEXT_SUBSTRING_2(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

void func_1089(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0, sParam1);
}

void func_1090(bool bParam0, int iParam1, char* sParam2)
{
	if (iParam1 <= 10000)
	{
		if ((bParam0->f_13 > iParam1 && bParam0->f_13 > 10000) && bParam0->f_11 < 0)
		{
			bParam0->f_11 = AUDIO::GET_SOUND_ID();
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2) || MISC::ARE_STRINGS_EQUAL(sParam2, func_827()))
			{
				AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(bParam0->f_11, func_827(), func_825(), true);
			}
			else
			{
				AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(bParam0->f_11, sParam2, func_825(), true);
				AUDIO::_SET_VARIABLE_ON_SOUND_WITH_NAME("Time", 10f, sParam2, func_825());
			}
		}
	}
	else
	{
		func_294(bParam0);
	}
}

void func_1091(bool bParam0, int iParam1)
{
	if (iParam1 <= 0 && bParam0->f_12 < 0)
	{
		bParam0->f_12 = AUDIO::GET_SOUND_ID();
		AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(bParam0->f_12, func_1260(), func_825(), true);
	}
}

int func_1092(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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
	iVar15 = UIFEED::_UI_FEED_POST_OBJECTIVE(&Var0, &Var13, bParam5);
	return iVar15;
}

void func_1093(int iParam0, float fParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/] = (Global_8130[iParam0 /*11*/] - (Global_8130[iParam0 /*11*/] && fParam1));
		return;
	}
	Global_1072759.f_19611[iParam0 /*11*/] = (Global_1072759.f_19611[iParam0 /*11*/] - (Global_1072759.f_19611[iParam0 /*11*/] && fParam1));
}

bool func_1094(bool bParam0)
{
	bParam0->f_2 = 8.812851E+20f;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_1095(bool bParam0, var uParam1)
{
	bParam0->f_2 = 6.184497E+31f;
	bParam0->f_3 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

float func_1096(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_1097(int iParam0, int iParam1)
{
	if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Local_544.f_1420), iParam1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			func_1268(iParam0);
			if (Local_544.f_9 != -4.537018E+10f)
			{
				func_905(iParam1, 1);
			}
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Local_544.f_1420), iParam1);
		}
	}
}

void func_1098()
{
	if (!func_634(256))
	{
		func_1269(256);
	}
}

void func_1099(int iParam0, int iParam1)
{
	if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Local_544.f_1419), iParam1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			func_1270(iParam0);
			if (Local_544.f_9 != -4.537018E+10f)
			{
				func_905(iParam1, 1);
			}
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Local_544.f_1419), iParam1);
		}
	}
	if (!func_137(9.403955E-38f))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam0 == PLAYER::PLAYER_ID())
		{
			if (func_346(GANG::NETWORK_GET_GANG_ID(iParam0)))
			{
				func_347(0, 0, 1);
				func_43(1.504633E-36f);
			}
			func_1098();
			func_43(9.403955E-38f);
		}
	}
}

void func_1100(int iParam0, int iParam1)
{
	if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Local_544.f_1419), iParam1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			func_1270(iParam0);
			if (!GANG::_NETWORK_IS_IN_MY_GANG(iParam0))
			{
				func_1271(iParam0);
			}
			if (Local_544.f_9 != -4.537018E+10f)
			{
				func_905(iParam1, 1);
			}
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Local_544.f_1419), iParam1);
		}
	}
	if (!func_137(9.403955E-38f))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam0 == PLAYER::PLAYER_ID())
		{
			if (func_346(GANG::NETWORK_GET_GANG_ID(iParam0)))
			{
				func_347(0, 0, 1);
				func_43(1.504633E-36f);
			}
			func_1098();
			func_43(9.403955E-38f);
		}
	}
}

void func_1101(int iParam0, int iParam1, bool bParam2)
{
	if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Local_544.f_1419), iParam1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			func_1270(iParam0);
			if (bParam2)
			{
				if ((func_183(64) || !GANG::_NETWORK_IS_IN_MY_GANG(iParam0)) || Local_544.f_1421 == -6.824783E-15f)
				{
					func_1272(iParam0);
				}
			}
			else if (!GANG::_NETWORK_IS_IN_MY_GANG(iParam0))
			{
				func_1271(iParam0);
			}
			if (Local_544.f_9 != -4.537018E+10f)
			{
				func_905(iParam1, 1);
			}
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Local_544.f_1419), iParam1);
		}
	}
	if (!func_137(9.403955E-38f))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam0 == PLAYER::PLAYER_ID())
		{
			if (func_346(GANG::NETWORK_GET_GANG_ID(iParam0)))
			{
				func_347(0, 0, 1);
				func_43(1.504633E-36f);
			}
			func_1098();
			func_43(9.403955E-38f);
		}
	}
}

float func_1102(int iParam0, bool bParam1)
{
	int iVar0;

	if (!Global_1149417.f_5568)
	{
		return 0f;
	}
	if (iParam0 == Global_1295619.f_149[Global_1295619])
	{
		return Global_17418.f_2641;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(iParam0)) > 1 && bParam1) && Global_1101558[iVar0 /*38*/].f_18 >= Global_1101558[iVar0 /*38*/].f_30)
	{
		return Global_1101558[iVar0 /*38*/].f_18;
	}
	return Global_1101558[iVar0 /*38*/].f_30;
}

bool func_1103(struct<2> Param0, bool bParam2)
{
	if (!func_73(Param0))
	{
		return false;
	}
	func_1273(bParam2);
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

bool func_1104(int iParam0)
{
	return SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_21353.f_260), iParam0);
}

Vector3 func_1105()
{
	return Local_544.f_1430;
}

void func_1106(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 1071890135, 1089875339, 1066192077 /* Float: 1.1f */ };
	switch (iParam0)
	{
		case 0:
			*uParam1 = { *uParam1 * Vector(1f, 1f, 1f) };
			*uParam2 = 1119092736; /* Float: 90f */
			break;
		case 1:
			*uParam1 = { *uParam1 * Vector(1f, -1f, 1f) };
			*uParam2 = 1119092736; /* Float: 90f */
			break;
		case 2:
			*uParam1 = { *uParam1 * Vector(1f, 1f, -1f) };
			*uParam2 = -1028390912; /* Float: -90f */
			break;
		case 3:
			*uParam1 = { *uParam1 * Vector(1f, -1f, -1f) };
			*uParam2 = -1028390912; /* Float: -90f */
			break;
	}
}

char* func_1107()
{
	return "new_active_carriage";
}

void func_1108(var uParam0)
{
	if (!func_159(uParam0))
	{
	}
	if (func_424(uParam0))
	{
		func_195(uParam0, uParam0->f_2);
	}
}

int func_1109()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;

	fVar0 = 1148846080; /* Float: 1000f */
	fVar1 = Local_351[Local_544.f_1366 /*6*/].f_2;
	fVar2 = func_746(&(Local_544.f_13));
	fVar3 = 1092616192; /* Float: 10f */
	if (fVar2 > (fVar1 + fVar3))
	{
		fVar4 = 1106247680; /* Float: 30f */
		fVar5 = ((fVar2 - fVar1) - fVar3);
		if (fVar5 > fVar4)
		{
			fVar5 = fVar4;
		}
		fVar6 = (fVar5 / fVar4);
		fVar7 = 1140457472; /* Float: 500f */
		fVar8 = (fVar0 - fVar7);
		fVar9 = (fVar6 * fVar8);
		fVar0 = (fVar0 - fVar9);
	}
	fVar0 = (fVar0 * func_1274(func_852()));
	return BUILTIN::FLOOR(fVar0);
}

void func_1110(float fParam0)
{
	func_1275((Local_351[Local_544.f_1366 /*6*/].f_2 + fParam0));
}

void func_1111(var uParam0)
{
	if (!func_159(uParam0))
	{
	}
	if (!func_424(uParam0))
	{
		uParam0->f_2 = func_425(uParam0->f_1);
		func_426(uParam0, 2);
	}
}

void func_1112(int iParam0, int iParam1)
{
	if (Global_1072759.f_21626[iParam0 /*8*/].f_1 != iParam1)
	{
		Global_1072759.f_21626[iParam0 /*8*/].f_1 = iParam1;
		func_845(iParam0);
	}
}

void func_1113()
{
	if (!func_759(2))
	{
		func_849(256);
		GRAPHICS::ANIMPOSTFX_PLAY(func_1143());
		func_207(&(Local_155.f_137));
		func_760(2);
	}
	else
	{
		if (!func_759(256))
		{
			AUDIO::PLAY_SOUND_FRONTEND("screen_pulse", "RDRO_King_Of_The_Rails_Sounds", true, 0);
			func_760(256);
		}
		if (func_159(&(Local_155.f_137)) && func_192(&(Local_155.f_137)) > func_1276())
		{
			func_913(0);
		}
	}
}

void func_1114()
{
	if (!func_759(1))
	{
		func_849(256);
		GRAPHICS::ANIMPOSTFX_PLAY(func_1142());
		func_207(&(Local_155.f_134));
		func_760(1);
	}
	else
	{
		if (!func_759(256))
		{
			AUDIO::PLAY_SOUND_FRONTEND("screen_pulse", "RDRO_King_Of_The_Rails_Sounds", true, 0);
			func_760(256);
		}
		if (func_159(&(Local_155.f_134)) && func_192(&(Local_155.f_134)) > func_1276())
		{
			func_912(0);
		}
	}
}

int func_1115()
{
	return 8000;
}

void func_1116(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		func_1277(iVar0, iParam0);
		iVar0++;
	}
}

char* func_1117()
{
	return "FM_KotC_ATTACKING";
}

char* func_1118()
{
	return "FM_KotC_DEFENDING";
}

void func_1119(bool bParam0)
{
	if (func_1278())
	{
		Global_1958670 = 1;
	}
	if (func_1279(-3.294948E+35f))
	{
	}
	if (bParam0 && (Global_1940186.f_38 == -230.1699f || Global_1940186.f_38 == 5.402792E-27f))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		Global_1940186.f_38 = -3.273909E-18f;
	}
}

void func_1120(int iParam0)
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
	func_1280(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_1121(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	struct<8> Var6;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_1281(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] != 2)
	{
		if (!Global_1295619.f_17[iVar0])
		{
			func_1120(iParam0);
			return;
		}
		NETWORK::_0x51951DE06C0D1C40(iParam0, 2);
		Global_1072759.f_21353.f_1[iVar0 /*8*/] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (iVar2 != Global_1295619 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				if (GANG::_NETWORK_IS_IN_MY_GANG(iVar3))
				{
					if (bParam3)
					{
						SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (GANG::NETWORK_IS_IN_SAME_GANG(iVar3, iParam0))
				{
					if (bParam4)
					{
						SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_1121(iVar3, iParam1, 0, 1, 0, 0);
					}
				}
			}
			iVar2++;
		}
		if (bVar5)
		{
			Var6.f_6 = 255;
			Var6.f_4 = 1;
			Var6.f_6 = iParam0;
			Var6.f_7 = iParam1;
			func_1282(&Var6, uVar4);
		}
	}
}

int func_1122(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if ((*bParam1)[0 /*5*/] == 0)
	{
		iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(bParam0->f_5, "score");
		func_1263(iVar0, bParam1[0 /*5*/], 2, "0");
		func_1263(iVar0, bParam1[1 /*5*/], 8, "0");
		bVar1 = !func_630(iParam2, 16);
		bVar2 = !func_630(iParam2, 32);
		func_1266(iVar0, &((bParam1[0 /*5*/])->f_3), 5, bVar1, 0);
		func_1262(iVar0, &((bParam1[0 /*5*/])->f_1), 3, iParam4);
		func_1262(iVar0, &((bParam1[0 /*5*/])->f_2), 4, iParam6);
		func_1266(iVar0, &((bParam1[1 /*5*/])->f_3), 11, bVar2, 0);
		func_1262(iVar0, &((bParam1[1 /*5*/])->f_1), 9, iParam5);
		func_1262(iVar0, &((bParam1[1 /*5*/])->f_2), 10, iParam7);
	}
	return 1;
}

int func_1123(bool bParam0, int iParam1, int iParam2)
{
	if (func_630(iParam1, 262144))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_160), 6);
	}
	else if (func_630(iParam1, 65536))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_160), 3);
	}
	else if (func_630(iParam1, 131072))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_160), 4);
		MISC::SET_BIT(&(bParam0->f_11.f_159), 18);
	}
	else if (func_630(iParam1, 1048576))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_160), 8);
	}
	else
	{
		MISC::SET_BIT(&(bParam0->f_11.f_159), 6);
	}
	if (func_630(iParam1, 64))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_159), 0);
	}
	if (func_630(iParam1, 2048))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_159), 7);
	}
	if (func_630(iParam1, 1024))
	{
		bParam0->f_11.f_151 = 2;
		MISC::SET_BIT(&(bParam0->f_11.f_159), 31);
	}
	if (func_630(iParam1, 4096))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_159), 9);
	}
	if (func_630(iParam1, 16384))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_159), 17);
		MISC::SET_BIT(&(bParam0->f_11.f_159), 18);
	}
	if (func_630(iParam1, 4194304))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_160), 11);
	}
	if (func_630(iParam1, 8388608))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_160), 12);
	}
	if (func_630(iParam1, 8192))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_159), 10);
		MISC::SET_BIT(&(bParam0->f_11.f_159), 17);
		MISC::SET_BIT(&(bParam0->f_11.f_159), 18);
	}
	if (func_630(iParam1, 32768))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_159), 22);
		MISC::SET_BIT(&(bParam0->f_11.f_159), 23);
	}
	if (func_630(iParam1, 524288))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_160), 7);
	}
	if (func_630(iParam1, 2097152))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_159), 17);
		MISC::SET_BIT(&(bParam0->f_11.f_160), 9);
	}
	if (func_630(iParam1, 2.350989E-38f))
	{
		MISC::SET_BIT(&(bParam0->f_11.f_159), 17);
		MISC::SET_BIT(&(bParam0->f_11.f_159), 0);
		MISC::SET_BIT(&(bParam0->f_11.f_160), 13);
	}
	func_1283(&(bParam0->f_11));
	func_280(bParam0);
	if (iParam2 > 1)
	{
		bParam0->f_11.f_150 = iParam2;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(bParam0->f_984)))
	{
		func_1284(&(bParam0->f_11), &(bParam0->f_984));
	}
	return 1;
}

void func_1124(bool bParam0, int iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	char cVar0[32];
	char cVar4[32];
	char cVar8[32];
	var uVar12;
	char cVar16[32];
	char cVar20[32];
	char cVar24[32];
	var uVar28;
	bool bVar32;
	bool bVar33;

	if ((bParam0[0 /*5*/])->f_4 != fParam2 || bParam11)
	{
		if (bParam6)
		{
			StringCopy(&cVar0, func_1285(fParam2), 32);
			func_1089((*bParam0)[0 /*5*/], &cVar0);
		}
		else if (bParam4)
		{
			StringCopy(&cVar4, func_1286(fParam2), 32);
			func_1089((*bParam0)[0 /*5*/], &cVar4);
		}
		else if (bParam5)
		{
			StringCopy(&cVar8, MISC::_GET_STRING_FROM_FLOAT(fParam2, 2), 32);
			func_1089((*bParam0)[0 /*5*/], &cVar8);
		}
		else
		{
			MISC::_INT_TO_STRING(BUILTIN::FLOOR(fParam2), "%i", &uVar12);
			func_1089((*bParam0)[0 /*5*/], &uVar12);
		}
		(bParam0[0 /*5*/])->f_4 = fParam2;
	}
	if ((bParam0[1 /*5*/])->f_4 != fParam3 || bParam11)
	{
		if (bParam6)
		{
			StringCopy(&cVar16, func_1285(fParam3), 32);
			func_1089((*bParam0)[1 /*5*/], &cVar16);
		}
		else if (bParam4)
		{
			StringCopy(&cVar20, func_1286(fParam3), 32);
			func_1089((*bParam0)[1 /*5*/], &cVar20);
		}
		else if (bParam5)
		{
			StringCopy(&cVar24, MISC::_GET_STRING_FROM_FLOAT(fParam3, 2), 32);
			func_1089((*bParam0)[1 /*5*/], &cVar24);
		}
		else
		{
			MISC::_INT_TO_STRING(BUILTIN::FLOOR(fParam3), "%i", &uVar28);
			func_1089((*bParam0)[1 /*5*/], &uVar28);
		}
		(bParam0[1 /*5*/])->f_4 = fParam3;
	}
	bVar32 = !func_630(iParam1, 16);
	bVar33 = !func_630(iParam1, 32);
	func_1287((bParam0[0 /*5*/])->f_1, iParam7);
	func_1287((bParam0[0 /*5*/])->f_2, iParam9);
	func_1086((bParam0[0 /*5*/])->f_3, bVar32);
	func_1287((bParam0[1 /*5*/])->f_1, iParam8);
	func_1287((bParam0[1 /*5*/])->f_2, iParam10);
	func_1086((bParam0[1 /*5*/])->f_3, bVar33);
}

void func_1125(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	if (func_1288(0))
	{
		func_1289(uParam0, uParam1, iParam4, bParam3, 0, bParam5, 0, iParam6, iParam2);
	}
	else
	{
		func_1290(uParam0, uParam1, iParam4, bParam3, 0, bParam5, 0, iParam6, iParam2);
	}
	func_1291(uParam0, uParam1, bParam3, iParam2, iParam4, MISC::IS_BIT_SET(uParam0->f_159, 5), iParam6);
}

void func_1126(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	iVar0 = -1;
	if (!MISC::IS_BIT_SET(uParam0->f_159, 1))
	{
		iVar2 = PLAYER::GET_PLAYER_TEAM(*iParam2);
		iVar3 = func_1292();
		bVar4 = func_1293();
		bVar5 = func_1294();
		bVar6 = MISC::IS_BIT_SET(uParam0->f_158, 18);
		if (uParam0->f_152 != Global_1940072.f_111)
		{
			if (uParam0->f_152)
			{
				bVar1 = true;
			}
			uParam0->f_152 = Global_1940072.f_111;
			bParam3 = true;
		}
		func_1295(uParam0, uParam1, iParam2, &iVar0, iVar2);
		if (!MISC::IS_BIT_SET(uParam0->f_158, 1))
		{
			if (!bVar5 && !bParam7)
			{
				if ((iVar3 != -1 || bVar4) || bVar6)
				{
					if (!MISC::IS_BIT_SET(uParam0->f_158, 0))
					{
						func_1283(uParam0);
						func_1296(uParam0, uParam1, iParam4, 0, 1, bParam5, iVar2, -1, bParam6, 0, iVar0);
						MISC::SET_BIT(&(uParam0->f_158), 0);
					}
					else
					{
						func_1125(uParam0, uParam1, iVar2, bParam5, iParam4, bParam6, iVar0);
					}
					MISC::CLEAR_BIT(&(uParam0->f_158), 13);
					MISC::SET_BIT(&(uParam0->f_158), 1);
				}
			}
		}
		else if ((((iVar3 == -1 && !bVar4) && !bVar6) || bVar5) || bParam7)
		{
			if (!bVar1)
			{
				MISC::SET_BIT(&(uParam0->f_158), 13);
			}
			PAD::ENABLE_CONTROL_ACTION(0, -6.00134E-14f, true);
			PAD::ENABLE_CONTROL_ACTION(0, -1.422437E+11f, true);
			PAD::ENABLE_CONTROL_ACTION(1, -6.00134E-14f, true);
			PAD::ENABLE_CONTROL_ACTION(1, -1.422437E+11f, true);
			PAD::ENABLE_CONTROL_ACTION(0, 0.07516246f, true);
			PAD::ENABLE_CONTROL_ACTION(0, -1.909881f, true);
			PAD::ENABLE_CONTROL_ACTION(1, 0.07516246f, true);
			PAD::ENABLE_CONTROL_ACTION(1, -1.909881f, true);
			MISC::CLEAR_BIT(&(uParam0->f_158), 1);
			if (bVar5)
			{
				Global_1940072.f_5 = 0;
			}
		}
		else
		{
			if (!Global_1940072.f_111)
			{
				PAD::DISABLE_CONTROL_ACTION(0, -6.00134E-14f, false);
				PAD::DISABLE_CONTROL_ACTION(0, -1.422437E+11f, false);
				PAD::DISABLE_CONTROL_ACTION(1, -6.00134E-14f, false);
				PAD::DISABLE_CONTROL_ACTION(1, -1.422437E+11f, false);
				PAD::DISABLE_CONTROL_ACTION(0, 0.07516246f, false);
				PAD::DISABLE_CONTROL_ACTION(0, -1.909881f, false);
				PAD::DISABLE_CONTROL_ACTION(1, 0.07516246f, false);
				PAD::DISABLE_CONTROL_ACTION(1, -1.909881f, false);
			}
			if (bParam3)
			{
				func_1125(uParam0, uParam1, iVar2, bParam5, iParam4, bParam6, iVar0);
			}
			else if (!Global_1940072.f_111)
			{
				func_1297(uParam0, uParam1);
				func_1298(uParam0, uParam1, 0);
			}
		}
		if (!Global_1940072.f_111)
		{
			if ((MISC::IS_BIT_SET(uParam0->f_158, 1) || MISC::IS_BIT_SET(uParam0->f_158, 13)) || uParam0->f_232 < 2)
			{
				func_1299(uParam0, 1);
			}
			func_1300(uParam0);
		}
	}
}

void func_1127(bool bParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (iParam4 == 0)
	{
		iParam4 = 4.808429E-35f;
	}
	(*uParam1)[iParam2 /*34*/] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(bParam0->f_5, sParam3);
	func_1262((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_4), 21, 0);
	func_1262((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_5), 20, 0);
	func_1262((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_7), 23, 0);
	func_1262((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_8), 22, 0);
	func_1262((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_9), 24, 0);
	func_1262((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_2), 18, iParam4);
	if (iParam5 == 0)
	{
		func_1085((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_6), 25);
	}
	else
	{
		func_1262((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_6), 25, iParam5);
	}
	func_1085((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_1), 17);
	func_1085((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_3), 19);
	func_1085((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_10), 26);
	func_1085((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_11), 27);
	func_1085((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_20), 16);
	func_1085((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_21), 14);
	func_1085((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_22), 15);
	func_1085((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_12), 29);
	func_1085((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_13), 28);
	func_1085((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_14), 30);
	func_1085((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_15), 31);
	func_1085((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_16), 32);
	func_1085((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_17), 33);
	func_1085((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_18), 34);
	func_1085((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_19), 35);
}

void func_1128(int iParam0, float fParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	switch (iParam0)
	{
		case joaat("ATTACK"):
			*fParam1 = func_1301();
			*uParam2 = func_1301();
			*fParam3 = func_1301();
			*uParam4 = func_1301();
			*uParam5 = func_1302();
			*uParam6 = func_1301();
			*uParam7 = func_1301();
			break;
		case joaat("DELIVER"):
			*fParam1 = func_1303();
			*uParam2 = func_1303();
			*fParam3 = func_1301();
			*uParam4 = func_1302();
			*uParam5 = func_1302();
			*uParam6 = func_1301();
			*uParam7 = func_1301();
			break;
		case joaat("DEFEND"):
			*fParam1 = func_1302();
			*uParam2 = func_1303();
			*fParam3 = func_1301();
			*uParam4 = func_1302();
			*uParam5 = func_1302();
			*uParam6 = func_1301();
			*uParam7 = func_1301();
			break;
		case joaat("COLLECT"):
			*fParam1 = func_1301();
			*uParam2 = func_1301();
			*fParam3 = func_1302();
			*uParam4 = func_1301();
			*uParam5 = func_1302();
			*uParam6 = func_1301();
			*uParam7 = func_1301();
			break;
	}
}

void func_1129(var uParam0, int iParam1, float fParam2, int iParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	char* sVar8;
	int iVar9;
	float fVar10;
	char[] cVar11[8];

	bVar3 = true;
	bVar4 = true;
	iVar5 = (uParam0[iParam1 /*34*/])->f_25;
	iVar6 = (uParam0[iParam1 /*34*/])->f_26;
	iVar9 = (uParam0[iParam1 /*34*/])->f_23;
	if (bParam10)
	{
		iVar9 = 0;
	}
	switch (iVar9)
	{
		case -1:
		case 0:
			bVar3 = false;
			break;
		case 5:
			fVar0 = fParam5;
			fVar2 = fParam5;
			break;
		case 6:
			fVar0 = fParam7;
			fVar2 = fParam7;
			break;
		case 7:
			bVar4 = false;
			fVar0 = func_1303();
			fVar2 = fParam6;
			iVar1 = fParam6;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_TICK";
			break;
		case 8:
			bVar4 = false;
			fVar0 = func_1303();
			fVar2 = fParam8;
			iVar1 = fParam8;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_TICK";
			break;
		case 2:
			bVar4 = false;
			fVar0 = func_1303();
			fVar2 = func_1303();
			iVar1 = iParam3;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_CROSS";
			break;
		case 3:
			bVar4 = false;
			fVar0 = fParam2;
			fVar2 = fParam2;
			break;
		case 9:
			fVar0 = func_1301();
			fVar2 = func_1301();
			break;
		case 4:
			fVar0 = fParam4;
			break;
		default:
			fVar0 = fParam2;
			fVar2 = fParam2;
			break;
	}
	func_1086((uParam0[iParam1 /*34*/])->f_21, bVar3);
	if (bVar3)
	{
		func_1304(uParam0, iParam1);
		func_1086((uParam0[iParam1 /*34*/])->f_11, bVar4);
		fVar10 = (uParam0[iParam1 /*34*/])->f_29;
		if ((uParam0[iParam1 /*34*/])->f_28 > 1)
		{
			fVar10 = (BUILTIN::TO_FLOAT((uParam0[iParam1 /*34*/])->f_27) / BUILTIN::TO_FLOAT((uParam0[iParam1 /*34*/])->f_28));
			if (bParam11 && !func_1305((uParam0[iParam1 /*34*/])->f_23))
			{
				iVar5 = 0;
				iVar6 = 0;
				StringIntConCat(&cVar11, (uParam0[iParam1 /*34*/])->f_27, 8);
				if (bParam12)
				{
					StringConCat(&cVar11, "/", 8);
					StringIntConCat(&cVar11, (uParam0[iParam1 /*34*/])->f_28, 8);
				}
			}
			func_1089((uParam0[iParam1 /*34*/])->f_20, &cVar11);
		}
		else
		{
			func_1089((uParam0[iParam1 /*34*/])->f_20, "");
		}
		if (fVar10 >= 0f)
		{
			if (!bParam9)
			{
				func_1287((uParam0[iParam1 /*34*/])->f_2, fVar2);
			}
			func_1306((uParam0[iParam1 /*34*/])->f_1, fVar10);
			func_1086((uParam0[iParam1 /*34*/])->f_10, 0);
			func_1086((uParam0[iParam1 /*34*/])->f_3, 1);
		}
		else
		{
			func_1086((uParam0[iParam1 /*34*/])->f_10, 1);
			func_1086((uParam0[iParam1 /*34*/])->f_3, 0);
		}
		if (iVar6 != 0)
		{
			if (!bParam13)
			{
				func_1287((uParam0[iParam1 /*34*/])->f_6, fVar0);
			}
			func_1287((uParam0[iParam1 /*34*/])->f_4, iVar5);
			func_1287((uParam0[iParam1 /*34*/])->f_5, iVar6);
		}
		if (!MISC::IS_STRING_NULL(sVar8))
		{
			func_1287((uParam0[iParam1 /*34*/])->f_14, iVar1);
			func_1089((uParam0[iParam1 /*34*/])->f_12, sVar7);
			func_1089((uParam0[iParam1 /*34*/])->f_13, sVar8);
			func_1086((uParam0[iParam1 /*34*/])->f_15, 1);
		}
		else
		{
			func_1086((uParam0[iParam1 /*34*/])->f_15, 0);
		}
		func_1086((uParam0[iParam1 /*34*/])->f_16, (uParam0[iParam1 /*34*/])->f_30);
	}
}

void func_1130(int iParam0, int iParam1)
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

int func_1131(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_1130(iParam2, -3.005759E+25f);
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
	func_1307(uParam1, bParam0, Var3);
	return 1;
}

void func_1132(var uParam0)
{
	int iVar0;

	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		(*uParam0)[iVar0] = 255;
		iVar0++;
	}
}

void func_1133(int iParam0)
{
	Global_1953279 = (Global_1953279 - (Global_1953279 && iParam0));
}

void func_1134()
{
	Global_1953279.f_3485 = 0;
	Global_1953279.f_3485.f_1 = 0;
	Global_1953279.f_3485.f_8 = 0;
	Global_1953279.f_3485.f_2 = 0;
	Global_1953279.f_3485.f_3[0] = 0;
	Global_1953279.f_3485.f_3[1] = 0;
	Global_1953279.f_3485.f_3[2] = 0;
	Global_1953279.f_3485.f_3[3] = 0;
	Global_1953279.f_3485.f_9 = 0;
	Global_1953279.f_3485.f_10 = 0;
	Global_1953279.f_3485.f_11 = 0;
	if (Global_1953279.f_3485.f_12)
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(Global_1953279.f_3485.f_13);
	}
	Global_1953279.f_3485.f_12 = 0;
	func_1133(32768);
	func_1308(37.82234f, 8, 6);
}

void func_1135(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1309(iVar0, iParam0))
		{
			func_1310(iVar0, iParam0, 6);
		}
		iVar0++;
	}
}

void func_1136(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 2;
	}
	if (bParam2 && Global_1953279.f_2844 != 0)
	{
		func_1311(Global_1953279.f_2844);
		func_1312(&uVar1, 0);
		Global_1953279.f_2844 = 0;
	}
	else if (iParam3 != 0 && func_1313(iParam3))
	{
		func_1314(0);
	}
	if (func_977(32768))
	{
		func_1315(37.82234f);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		iParam0 = 0;
		func_1316(Global_1953279.f_1676.f_1[1 /*3*/], -6.600012E-27f, &(Global_1953279.f_1048), &(Global_1953279.f_1048.f_9), 1);
		func_712(2, 0, iVar0, 0, 0);
		func_712(4, 0, 0, 0, 0);
		func_712(5, 0, 0, 0, 0);
	}
	else
	{
		iVar0 |= 1;
		func_712(2, 0, iVar0, iParam0, 0);
	}
	func_1317();
}

void func_1137()
{
	func_1318(0);
	func_1318(1);
	func_1318(2);
	func_1318(3);
}

void func_1138()
{
	func_1319(0);
	func_1319(1);
	func_1319(2);
	func_1319(3);
}

float func_1139(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_991(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956862.f_1431.f_6[iParam0 /*3*/];
		case 1:
			return Global_1956862.f_1565.f_2.f_6[iParam0 /*3*/];
		default:
			break;
	}
	return -1f;
}

float func_1140(float fParam0, float fParam1)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_47(fParam0, fParam1) };
	STATS::STAT_ID_GET_FLOAT(&Var1, &uVar0);
	return uVar0;
}

var func_1141(float fParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_522(fParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

char* func_1142()
{
	return "KingCastleRed";
}

char* func_1143()
{
	return "KingCastleBlue";
}

char* func_1144(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		case 1:
			return "dynamic_list_item_visible";
		case 2:
			return "dynamic_list_item_main_color";
		case 3:
			return "dynamic_list_item_secondary_color";
		case 4:
			return "dynamic_list_item_tertiary_color";
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		case 6:
			return "dynamic_list_item_main_img_texture";
		case 7:
			return "dynamic_list_item_main_img_visible";
		case 8:
			return "dynamic_list_item_main_img_enabled";
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		case 10:
			return "dynamic_list_item_status_icon_texture";
		case 11:
			return "dynamic_list_item_status_icon_visible";
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		case 13:
			return "dynamic_list_item_deco__texture";
		case 14:
			return "dynamic_list_item_deco_visible";
		case 15:
			return "dynamic_list_item_raw_text_entry";
		case 16:
			return "dynamic_list_item_text_label_entry";
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		case 22:
			return "dynamic_list_item_end_img_texture";
		case 23:
			return "dynamic_list_item_end_img_visible";
		case 24:
			return "dynamic_list_item_end_img_left_texture_dic";
		case 25:
			return "dynamic_list_item_end_img_left_texture";
		case 26:
			return "dynamic_list_item_end_img_left_visible";
		case 27:
			return "dynamic_list_item_corner_end_img_texture_dic";
		case 28:
			return "dynamic_list_item_corner_end_img_texture";
		case 29:
			return "dynamic_list_item_corner_end_img_visible";
		case 30:
			return "dynamic_list_item_entry_player_index";
		case 31:
			return "dynamic_list_item_entry_friend_index";
		case 32:
			return "dynamic_list_item_player_gamer_handle";
		case 33:
			return "dynamic_list_item_option_stepper_visible";
		case 34:
			return "dynamic_list_item_option_stepper_text_enabled";
		case 35:
			return "dynamic_list_item_option_stepper_items";
		case 36:
			return "dynamic_list_item_option_stepper_current_hash";
		case 37:
			return "dynamic_list_item_option_stepper_current_index";
		case 38:
			return "dynamic_list_item_option_stepper_max_index";
		case 39:
			return "dynamic_list_item_left_chevron_enabled";
		case 40:
			return "dynamic_list_item_right_chevron_enabled";
		case 41:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		case 42:
			return "dynamic_list_item_main_fill_maximum";
		case 43:
			return "dynamic_list_item_main_fill_value";
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		case 47:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		case 48:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		case 49:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		case 50:
			return "dynamic_list_item_extra_img_texture_one_dic";
		case 51:
			return "dynamic_list_item_extra_img_one_texture";
		case 52:
			return "dynamic_list_item_extra_img_one_visible";
		case 53:
			return "dynamic_list_item_extra_int_field_one_value";
		case 54:
			return "dynamic_list_item_extra_int_field_two_value";
		case 55:
			return "dynamic_list_item_extra_vector_field_one_value";
		case 56:
			return "dynamic_list_item_extra_bool_field_one_value";
		case 57:
			return "dynamic_list_item_link";
		case 58:
			return "dynamic_list_item_event_channel_hash";
		case 59:
			return "dynamic_list_item_focus_hash";
		case 60:
			return "dynamic_list_item_select_hash";
		case 61:
			return "dynamic_list_item_prompt_text";
		case 62:
			return "dynamic_list_item_prompt_text_raw";
		case 63:
			return "dynamic_list_item_prompt_enabled";
		case 64:
			return "dynamic_list_item_prompt_visible";
		case 68:
			return "dynamic_list_item_prompt_option_text";
		case 69:
			return "dynamic_list_item_prompt_option_enabled";
		case 70:
			return "dynamic_list_item_prompt_option_visible";
		case 71:
			return "dynamic_list_item_prompt_option_select_hash";
		case 72:
			return "dynamic_list_item_prompt_toggle_text";
		case 73:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 74:
			return "dynamic_list_item_prompt_toggle_visible";
		case 75:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 76:
			return "dynamic_list_item_prompt_r3_text";
		case 77:
			return "dynamic_list_item_prompt_r3_enabled";
		case 78:
			return "dynamic_list_item_prompt_r3_visible";
		case 79:
			return "dynamic_list_item_select_r3_select_hash";
		case 80:
			return "dynamic_list_item_prompt_dpad_left_right_text";
		case 81:
			return "dynamic_list_item_prompt_dpad_left_right_enabled";
		case 82:
			return "dynamic_list_item_prompt_dpad_left_right_visible";
		case 83:
			return "dynamic_list_item_select_dpad_left_right_select_hash";
		case 84:
			return "mount_collection_index";
			return "dynamic_list_item_rename_prompt_enabled";
			return "dynamic_list_item_rename_prompt_visible";
			return "dynamic_list_item_stats_info_toggle_prompt_text";
			return "invite_unique_id";
			return "invite_tracked";
			return "invite_processed";
			return "invite_script_type";
			return "invite_gang_id";
			return "invite_expiration_time";
			return "invite_filter_type";
			return "invite_feed_message_id";
			return "invite_all_enabled";
			return "invite_all_visible";
			return "dynamic_list_item_overlay_tick_visible";
			return "dynamic_list_item_overlay_time_visible";
			return "dynamic_list_item_overlay_new_visible";
			return "null";
		}

int func_1145(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_1320(&Var1, iParam0))
	{
		iVar0 = ((func_1321() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_1146(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/];
}

int func_1147(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/].f_2;
}

bool func_1148(int iParam0, int iParam1)
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

int func_1149(int iParam0)
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

int func_1150(int iParam0)
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

int func_1151(int iParam0, int iParam1)
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

bool func_1152(int iParam0)
{
	int iVar0;

	iVar0 = func_1322(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_1153(int iParam0)
{
	if (iParam0 == 1.351745E+31f)
	{
		return true;
	}
	return false;
}

void func_1154(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_1155(int iParam0, int iParam1)
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
			func_1323((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1323(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_73(Global_1900460.f_1[0 /*2*/]))
	{
		func_661(Global_1900460.f_1[0 /*2*/], 3);
	}
}

void func_1156(var uParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	if (Global_1205789.f_129 <= 0)
	{
		Global_1205789.f_129 = 0;
		return;
	}
	if (iParam1 >= Global_1205789.f_129)
	{
		iParam1 = 0;
	}
	if (iParam1 >= 32)
	{
		iParam1 = (Global_1205789.f_129 - 1);
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	if (Global_1205789.f_129 == 1)
	{
		*uParam0 = { Global_1205789[0 /*4*/] };
		Global_1205789[0 /*4*/] = { Var0 };
		Global_1205789.f_129 = 0;
		return;
	}
	*uParam0 = { Global_1205789[iParam1 /*4*/] };
	Global_1205789.f_129 = (Global_1205789.f_129 - 1);
	iVar4 = (Global_1205789.f_129 - 1);
	iVar5 = iParam1;
	while (iVar5 <= iVar4)
	{
		Global_1205789[iVar5 /*4*/] = { Global_1205789[iVar5 + 1 /*4*/] };
		Global_1205789[iVar5 + 1 /*4*/] = { Var0 };
		iVar5++;
	}
}

void func_1157(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1205789.f_129)
	{
		return;
	}
	Global_1205789.f_130 = iParam0;
	Global_1205789.f_131 = Global_1205789[iParam0 /*4*/];
}

void func_1158()
{
	if (Global_1205789.f_131 == 0)
	{
		return;
	}
	Global_1205789.f_130 = func_1324(Global_1205789.f_131);
	if (Global_1205789.f_130 < 0)
	{
		Global_1205789.f_131 = 0;
	}
}

bool func_1159(int iParam0)
{
	return func_78(Global_1902818.f_2, iParam0);
}

struct<18> func_1160(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_1161(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_692(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1162(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_1163(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	iVar0 = func_692(bParam2);
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(iVar0, iParam0, iParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_1164(var uParam0, int iParam1)
{
	return func_78(*uParam0, iParam1);
}

int func_1165(int iParam0)
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

int func_1166(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;

	if (!Global_1048577)
	{
		return 3;
	}
	iVar0 = Global_263042[iParam0 /*65*/].f_1.f_16.f_2;
	fVar1 = func_1325(iVar0);
	iVar2 = func_1326(iVar0, fVar1);
	return iVar2;
}

struct<2> func_1167()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_1168(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

bool func_1169(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_692(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

void func_1170(var uParam0)
{
	func_976(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_969() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
}

bool func_1171(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_1163(iParam0, iParam2, bParam3))
	{
		return false;
	}
	if (!func_1327(uParam1, iParam2))
	{
		return false;
	}
	return true;
}

bool func_1172(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_1328(iParam0, iParam2, bParam3))
	{
		return false;
	}
	if (!func_1329(uParam1, iParam2))
	{
		return false;
	}
	return true;
}

int func_1173(int iParam0, int iParam1)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		iParam0 = 2.175367f;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iParam0, 7, iParam1);
	return iVar0;
}

void func_1174(var uParam0)
{
	struct<7> Var0;

	*uParam0 = { Var0 };
}

int func_1175(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1185();
	}
	if (iParam0 == 3.272964E+34f)
	{
		return -1.077915E-26f;
	}
	else if (iParam0 == 4.387347E-38f)
	{
		return -10172.2f;
	}
	return 0;
}

int func_1176(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 256;
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 512;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 1024;
		case -915377750:
			return 2048;
		case -1283403230:
			return 4096;
		case 1024778115:
			return 8192;
		case 75507907:
			return 16384;
		case -1678578495:
			return 32768;
		case -1925540957:
			return 65536;
		case -1932005642:
			return 131072;
		case -803648582:
			return 128;
		case 351949263:
			return 262144;
		case -597281578:
			return 524288;
		case 465720259:
			return 1048576;
		case 396349281:
			return 2097152;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 2160;
		case -141044514:
			return 8304;
		case 884232794:
			return 16496;
		case 836721350:
			return 40960;
		case -1062102573:
			return 65601;
		case -884591393:
			return 96;
		case -1886898087:
			return 32880;
		case -1629261761:
			return 2049;
		case 2050534155:
			return 48;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_1177(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1330(&(uParam0->f_1[iVar0 /*3*/]), 2))
		{
			if (func_1331(iVar0, iParam1))
			{
				vVar4 = { func_1332(iVar0, -1) };
				if (((!bParam4 && vVar4.x != Global_1953279.f_83[iVar0 /*12*/]) && vVar4.x != 0) && (uParam0->f_1[iVar0 /*3*/] != vVar4.x || uParam0->f_1[iVar0 /*3*/].f_1 != vVar4.y))
				{
					uParam0->f_1[iVar0 /*3*/] = { vVar4 };
				}
				if (func_1309(iVar0, 4))
				{
					func_1310(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_1333(iVar0, 4, 6);
				}
				Jump @205; //curOff = 171
				if (bParam2)
				{
					vVar1.x = Global_1953279.f_83[iVar0 /*12*/];
					uParam0->f_1[iVar0 /*3*/] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

void func_1178(int iParam0)
{
	func_1334(&(Global_1953279.f_2938), iParam0);
}

int func_1179(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
		case -1197751823:
			return 20;
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
		case -1130865351:
			return 31;
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
		case -893163968:
			return 17;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
		case 304805134:
			return 21;
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
		case 735520874:
			return 5;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
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

void func_1180(int iParam0, int iParam1, int iParam2)
{
	Global_1953279.f_83[func_1179(iParam0, 1) /*12*/].f_11 = (Global_1953279.f_83[func_1179(iParam0, 1) /*12*/].f_11 || iParam1);
}

int func_1181(int iParam0)
{
	float fVar0;
	var uVar1;

	Global_1953279.f_1039.f_2 = 0;
	fVar0 = 655621.5f;
	func_1335(&(Global_1953279.f_1039), fVar0, -4.642217E+25f, 2.24243E+12f, 1, iParam0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1953279.f_1039));
	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&uVar1, &(Global_1953279.f_1039), 2.24243E+12f))
	{
		return 0;
	}
	return 1;
}

int func_1182(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 1808.893f;
	return 1;
}

int func_1183(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_714(bParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(bParam0, 1.282908E-11f, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

void func_1184(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (func_1336(uParam0->f_1[34 /*3*/], -7.339854E+32f))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = func_1309(iVar0, 16);
		if (bVar1)
		{
			func_1310(iVar0, 16, 9);
		}
		if (Global_1953279.f_83[iVar0 /*12*/].f_3[0] == -1.473351E-26f || uParam0->f_1[iVar0 /*3*/] == 0)
		{
		}
		else
		{
			if (bVar1)
			{
				func_1337(iVar0, iParam3);
			}
			if (!bParam2 && func_1183(uParam0->f_1[iVar0 /*3*/]) != 0)
			{
			}
			else if (func_1331(iVar0, iParam1) && !bVar1)
			{
				uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
				uParam0->f_1[iVar0 /*3*/].f_1 = 0;
				func_1187(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 1, iParam3);
				func_1337(iVar0, iParam3);
			}
			else if (bVar1 && !bParam2)
			{
				func_1187(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 0, iParam3);
			}
		}
		iVar0++;
	}
}

int func_1185()
{
	return Global_1953279.f_1;
}

int func_1186(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<18> Var3;

	iVar2 = 0;
	Var3 = { func_1160(0, -5.45926E-19f, iParam0, -5.45926E-19f, 0, 0, 0) };
	if (func_1161(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_1338(iVar0, iVar1, iParam1);
		}
		func_1165(iVar0);
	}
	return iVar2;
}

void func_1187(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam1;
	bVar1 = func_1339(bVar0, 1);
	if (bParam3 && func_1336(uParam0->f_1[iParam2 /*3*/], 1.280781E-26f))
	{
		func_1340(uParam0, uParam0->f_1[iParam2 /*3*/]);
	}
	switch (func_1341(iParam2, 1))
	{
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			func_1342(uParam0, bVar0, iParam2, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			func_1343(uParam0, bVar0, iParam2);
			break;
		case -338487716:
			func_1344(uParam0, bVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_1345(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1742327865:
			func_1346(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1250092473:
			func_1347(uParam0, bVar1, bVar0, iParam4);
			break;
		case -893163968:
			func_1348(uParam0, bVar1, bVar0, iParam4);
			break;
		case -450913544:
			func_1349(uParam0, bVar1, bVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_1350(uParam0, bVar1, bVar0, iParam4);
			break;
		case 304805134:
			func_1351(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1145151482:
			func_1352(uParam0, bVar1, bVar0, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			func_1353(uParam0, bVar1, bVar0, iParam4);
			break;
		case -426430150:
			func_1354(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_1355(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1958421083:
			func_1356(uParam0, bVar1, bVar0, iParam4);
			break;
		case -1944638739:
			func_1357(uParam0, bVar1, bVar0, iParam4);
			break;
	}
}

float func_1188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -4.160438E-28f;
		case 1:
			return 1.392762E+21f;
		case 2:
			return 1.171494E+20f;
		default:
			break;
	}
	return -4.160438E-28f;
}

int func_1189(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_714(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_715(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_711(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_692(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_692(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_1190(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_714(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_715(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_1358(bParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_717(bParam0, bParam4, 0) };
	Var6 = { func_711(bParam0, Var1, Var1.f_4, bParam4) };
	return func_1359(bParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

int func_1191(int iParam0)
{
	if (!func_1360(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return 1.448632E-34f;
		case 2:
			return 2441432f;
		case 1:
			return -3.74425E-26f;
		default:
			break;
	}
	return 0;
}

int func_1192(int iParam0, float fParam1, int iParam2)
{
	if (!func_1361(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_991(2);
	}
	func_1362(iParam0, fParam1, iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(Global_1295619.f_3))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1295619.f_3, iParam0, BUILTIN::FLOOR(fParam1));
	}
	return 1;
}

int func_1193(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_1194(int iParam0)
{
	if (!func_1363(iParam0))
	{
		return 0;
	}
	return Global_1149417.f_11.f_1562[func_1364(iParam0, 1) /*46*/].f_1;
}

bool func_1195(int iParam0, int iParam1)
{
	if (iParam0 == 5.389147E-28f)
	{
		return func_1365(iParam1);
	}
	else
	{
		return !func_1365(iParam1);
	}
	return false;
}

void func_1196(int iParam0)
{
	struct<36> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_35 = -1;
	func_1367(func_1366(iParam0, 1), &Var0, 2, -1);
	func_1368(&Var0, iParam0, 0);
}

void func_1197(int iParam0)
{
	struct<37> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_35 = -1;
	func_1369(Global_1149417.f_4804.f_34[iParam0 /*3*/], &Var0, 0, -1);
	func_1370(Var0, iParam0, 0);
}

bool func_1198(int iParam0)
{
	return func_405(&(Global_1956862.f_1753), iParam0, 1);
}

void func_1199(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		if (func_1198(2))
		{
			func_1371(2);
		}
		if (PLAYER::_GET_PLAYER_UI_PROMPT_IS_DISABLED(iVar0, 34, 0))
		{
			PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar0, 34, 0, false);
		}
	}
	else
	{
		if (!func_1198(2))
		{
			func_1372(2);
		}
		if (!PLAYER::_GET_PLAYER_UI_PROMPT_IS_DISABLED(iVar0, 34, 0))
		{
			PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar0, 34, 0, true);
		}
	}
	PLAYER::_ENABLE_EAGLEEYE(iVar0, bParam0);
	PLAYER::_SET_LOCAL_PLAYER_PERSONA_ABILITY_FLAG(27, bParam0);
}

void func_1200(bool bParam0)
{
	if (bParam0)
	{
		if (func_1198(1))
		{
			func_1371(1);
		}
	}
	else if (!func_1198(1))
	{
		func_1372(1);
	}
}

bool func_1201()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

void func_1202(int iParam0)
{
	int iVar0;

	iVar0 = 100;
	switch (func_1185())
	{
		case -1940918681:
		case 1973311174:
			iVar0 = 100;
			break;
		case -1009665394:
		case 1237752161:
			iVar0 = 18;
			break;
	}
	PED::_SET_TANK_ATTRIBUTE_SIZE(iParam0, 0, 1f);
	ENTITY::SET_ENTITY_MAX_HEALTH(iParam0, iVar0);
}

void func_1203(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1295619.f_3;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::SET_ENTITY_HEALTH(iParam1, iParam0, 0);
}

void func_1204(float fParam0, int iParam1)
{
	float fVar0;

	if (fParam0 < 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1295619.f_3;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	fVar0 = (fParam0 - PED::_GET_PED_STAMINA(iParam1));
	PED::_CHANGE_PED_STAMINA(iParam1, fVar0);
}

float func_1205()
{
	return Global_1956862.f_1561.f_3;
}

void func_1206(float fParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(iVar0))
	{
		return;
	}
	if (fParam0 < 0f)
	{
		return;
	}
	fVar2 = (fParam0 - PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(iVar0));
	func_1373(fVar2, 0, 1);
}

bool func_1207(int iParam0)
{
	return func_1360(iParam0);
}

int func_1208(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

float func_1209(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;

	iVar1 = func_1374(uParam0, iParam1);
	switch (iVar1)
	{
		case 0:
			fVar0 = func_1139(iParam1, 2);
			if (iParam1 == 0 && fVar0 < 1112014848)
			{
				fVar0 = 1112014848; /* Float: 50f */
			}
			else if (fVar0 < 1092616192)
			{
				fVar0 = 1092616192; /* Float: 10f */
			}
			return fVar0;
		case 1:
			fVar0 = func_1139(iParam1, 2);
			if (fVar0 < 1092616192)
			{
				fVar0 = 1092616192; /* Float: 10f */
			}
			return fVar0;
		case 2:
			return BUILTIN::TO_FLOAT(100);
		case 3:
			return func_1375(uParam0, iParam1);
	}
	return -1f;
}

void func_1210(int iParam0, float fParam1)
{
	func_1376(iParam0, fParam1);
	func_1377(iParam0, fParam1, 0, 0, 1, 2);
}

void func_1211()
{
	func_1378();
	func_1379();
	func_1380();
	func_1381();
}

int func_1212(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return func_1382(iParam0, fParam1, bParam2, bParam3);
}

void func_1213()
{
	Global_1956862.f_1431.f_108 = 0;
	Global_1956862.f_1431.f_108.f_1 = 0f;
	Global_1956862.f_1431.f_108.f_3 = 0f;
	Global_1956862.f_1431.f_108.f_2 = 0f;
	Global_1956862.f_1431.f_108.f_4 = 0f;
	Global_1956862.f_1431.f_108.f_6 = 0f;
	Global_1956862.f_1431.f_108.f_5 = 0f;
}

bool func_1214(int iParam0)
{
	return Global_1953279.f_595[iParam0] > 0;
}

void func_1215(int iParam0)
{
	Global_1953279.f_595[iParam0]++;
}

int func_1216(bool bParam0)
{
	if (!func_714(*bParam0, 0))
	{
		return 0;
	}
	if (!func_1383(*bParam0))
	{
		return 0;
	}
	switch (*bParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*bParam0 = -7.975852E-25f;
			break;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*bParam0 = -1.072744E-16f;
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*bParam0 = 1.62503E-31f;
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*bParam0 = -1.6957E+27f;
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*bParam0 = -1.177047E+07f;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_1217(bool bParam0)
{
	return func_1009(bParam0) == -3.265313E+23f;
}

int func_1218(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_714(bParam0, 0))
	{
		if (func_1006(func_1005(bParam0), 2))
		{
			return -1;
		}
		return 0;
	}
	if (func_1009(bParam0) == 5.407193E-38f)
	{
		return -1;
	}
	if (!bParam2 && func_715(bParam0, -3.294982E+22f) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(bParam0, iParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_692(bParam3), bParam0);
}

int func_1219()
{
	if (func_400(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_1220(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_692(0);
	*iParam1 = { func_711(bParam0, func_1010(0), fParam3, 0) };
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

bool func_1221(bool bParam0, int iParam1, int iParam2)
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

bool func_1222(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_692(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

void func_1223(int iParam0)
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
		func_1120(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_1280(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

int func_1224(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_78(Global_1148603[iVar0 /*13*/][iParam0 /*4*/], iParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1225()
{
	if (func_182(32768, Local_544.f_1366))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	WEAPON::_GET_PLAYER_PED_QUICK_SWAP_WEAPON_BY_GUID(PLAYER::PLAYER_PED_ID(), &(Local_544.f_1474), &(Local_544.f_1478));
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&(Local_544.f_1474)))
	{
	}
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&(Local_544.f_1478)))
	{
	}
	func_233(32768, Local_544.f_1366);
}

void func_1226()
{
	if (func_182(131072, Local_544.f_1366))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(PLAYER::PLAYER_PED_ID(), 10, &(Local_544.f_1470)))
	{
		return;
	}
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&(Local_544.f_1470)))
	{
	}
	func_233(131072, Local_544.f_1366);
}

int func_1227(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	struct<13> Var6;
	int iVar29;
	struct<2> Var30;
	bool bVar32;

	if (!func_714(bParam0, 0))
	{
		return 0;
	}
	if (!func_1384(bParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_1385(bParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_1386(bParam0, bParam2);
	iVar2 = 0;
	if (func_1009(bParam0) == -42.1084f)
	{
		if (!func_1336(bParam0, 7.396633E-08f) && !func_1336(bParam0, -6.685221E-33f))
		{
			bVar3 = true;
		}
	}
	if (func_1387(bParam0, 8388608) && !func_1388(27))
	{
		func_1389(27);
	}
	func_1390(bParam0);
	if (!bVar3)
	{
		if (func_1336(bParam0, -7.272718E-19f))
		{
			bParam2 = true;
			bVar4 = true;
			bVar1 = func_1392(func_1391(bParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(bVar1))
			{
				if (func_23() == -1)
				{
					func_1393(bVar1);
				}
				if (func_1008(0) && func_1394(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_1395(bParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_403(bParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_1009(bParam0) == -3.265313E+23f)
		{
			if (!func_1396(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_1009(bParam0) == 6.919076E-28f && func_709(bParam0))
		{
			if (!func_1397(bParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_1336(bParam0, -1.355837E+35f))
		{
			func_459(func_490(-182.2023f), iVar0);
		}
		else if (bParam0 == 8.064365E+36f)
		{
			func_459(func_47(-1.250509E+13f, 6.875483E+36f), iVar0);
		}
		else if (func_1336(bParam0, -3.187887E+34f) && !func_1336(bParam0, 3.708451E-17f))
		{
			if (bParam0 != 4.568779E-32f)
			{
				func_1398(536, 0);
			}
			if (func_1336(bParam0, -2.826186E-34f) || func_1336(bParam0, -5.200334E-11f))
			{
			}
		}
		else if (func_1336(bParam0, -8.87647E+33f))
		{
			if (func_1336(bParam0, -157.5682f))
			{
			}
		}
		else if (func_1336(bParam0, -1.641295E-14f) && func_1336(bParam0, 888.6404f))
		{
			func_1398(519, 0);
		}
		else if (func_1336(bParam0, 888.6404f) && func_1336(bParam0, -1.086842E+20f))
		{
		}
		else if (func_1336(bParam0, 4.619806E-19f))
		{
		}
		else if (func_1336(bParam0, 9.243318E-18f))
		{
			if (func_1399())
			{
				func_1400(7.177414E+09f, 0, 1f, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_1336(bParam0, 1.063826E-10f) && func_1336(bParam0, 7.561756E-05f))
		{
			func_1401(bParam0);
		}
		else if (func_1336(bParam0, -1.56509E-23f))
		{
			func_1402(bParam0);
		}
		else if (func_1336(bParam0, -2.873199E-24f))
		{
			func_1403(bParam0);
		}
		else if (func_1336(bParam0, -0.08388482f) && func_1336(bParam0, 7.561756E-05f))
		{
			func_1404(bParam0);
		}
		else if (bParam0 == -2.680077E+18f)
		{
			Global_1940072.f_21 = 0;
		}
		else if (func_1336(bParam0, 7.339242E+27f))
		{
			func_1405();
		}
		else if (func_1336(bParam0, -6.685221E-33f))
		{
		}
		else if (func_1336(bParam0, 3.708451E-17f))
		{
		}
		else if (func_1336(bParam0, -0.08388482f) && func_1336(bParam0, -8.498268E-23f))
		{
		}
		else if (func_1336(bParam0, -2.826186E-34f) || func_1336(bParam0, -5.200334E-11f))
		{
		}
		else if (func_1336(bParam0, -7.721469E-31f))
		{
			return 0;
		}
		else if (func_1336(bParam0, 37699.67f))
		{
			switch (bParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_1406(3.397524E-31f, 1))
					{
						func_1227(3.397524E-31f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_1406(6.760231E-15f, 1))
					{
						func_1227(6.760231E-15f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_1406(-13818.36f, 1))
					{
						func_1227(-13818.36f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_1406(4.642866E-20f, 1))
					{
						func_1227(4.642866E-20f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_1406(-21.88862f, 1))
					{
						func_1227(-21.88862f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_1406(5.120068E-22f, 1))
					{
						func_1227(5.120068E-22f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_1336(bParam0, -5.092244E+08f) && func_1387(bParam0, 4))
		{
		}
		else if (func_1336(bParam0, 9.811189E+11f))
		{
			func_1407(bParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		switch (bParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1.126487E+31f;
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -4.003846E-11f;
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 4.742571E+17f;
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 6.01081E-28f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1.95382E-16f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1.95382E-16f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2.353932E-30f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2.353932E-30f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -3.627576E-31f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -3.627576E-31f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 6.722741E+37f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 6.722741E+37f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -5536.38f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -5536.38f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 7.333728E+10f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 7.333728E+10f;
				break;
			case joaat("PROVISION_MP_TREASURE_MAP_REWARDS_BOX_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -8.132168E-17f;
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
			case joaat("WEAPON_KIT_BINOCULARS_IMPROVED"):
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_1409(272, func_1408(-1.263708E+38f, 0), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_1409(270, func_1408(1.344431E-31f, 0), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_1409(271, func_1408(-7.101952E+23f, 0), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_1410(685, 1.579975E+31f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_1410(685, 42.3843f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_1410(685, 2.097458E+12f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_1410(685, -6.137742E-06f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case -2034071102: /* GXTEntry: "Lamb Heart" */
			case -1939600995: /* GXTEntry: "Prime Rib" */
			case -1760041550: /* GXTEntry: "High Quality Beef Stew" */
			case -1708424762: /* GXTEntry: "Regional Beef Stew" */
			case -1598782722: /* GXTEntry: "Consomme" */
			case -1505924449: /* GXTEntry: "Fried Catfish" */
			case -1403873319: /* GXTEntry: "Prairie Chicken" */
			case -1335566375: /* GXTEntry: "Lamb Fry" */
			case -1192685521: /* GXTEntry: "Oyster Stew" */
			case 144810727: /* GXTEntry: "Turtle Soup" */
			case 567164682: /* GXTEntry: "Oatmeal" */
			case 1174625611: /* GXTEntry: "Corned Beef Hash" */
			case 1955751248: /* GXTEntry: "Roast Beef" */
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_1410(686, NaNf, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_1410(686, -7.923627E-17f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_1398(526, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_1398(529, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_1388(1))
				{
					func_1398(522, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_1398(521, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_23() == -1)
				{
					bParam0 = -7.729678E-14f;
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_1398(534, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		bVar5 = bParam0;
		func_1411(&bVar5);
		if (!func_403(bVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_1008(0))
		{
			return 1;
		}
		if (func_1009(bParam0) == -42.1084f)
		{
			func_1412(bParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_1008(0) && !func_1413())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_33, false, false, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_1227(Var6.f_1[iVar29], Var6.f_12[iVar29], 0, 0, 0, -4207915f, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_1414(iVar2, 0);
		}
	}
	Var30 = { func_1415(bParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var30))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var30, iVar0);
	}
	func_1416(bParam0);
	if (fParam6 > 0f)
	{
		if (func_1336(bParam0, -5.092244E+08f))
		{
			func_1417(bParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 3787186f;
		func_1418(bParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

bool func_1228(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_714(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_1009(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_1336(bParam0, 9.811189E+11f))
	{
		func_1419(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

int func_1229(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_1160(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_1420(&Var0, func_1010(0));
	}
	if (!func_1161(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_1165(iVar18);
	return iVar19;
}

struct<4> func_1230(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_717(bParam0, bParam1, 0) };
	return func_711(bParam0, Var0, Var0.f_4, bParam1);
}

bool func_1231(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_FISHINGROD"):
		case joaat("WEAPON_KIT_CAMERA"):
		case joaat("OBJECT_4"):
		case joaat("OBJECT_3"):
		case 332793555:
		case joaat("OBJECT_2"):
		case joaat("OBJECT_1"):
			return true;
		default:
			break;
	}
	return false;
}

void func_1232(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<18> Var2;
	struct<10> Var20;
	struct<22> Var34;

	Var2 = { func_1160(iParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (!func_1161(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	Var20.f_9 = -5.45926E-19f;
	if (!func_1162(&Var20, 0, iVar0, iVar1))
	{
		func_1165(iVar0);
		return;
	}
	Var34.f_9 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_692(0), &Var20, &Var34, 22, 1))
	{
		func_1165(iVar0);
		return;
	}
	if (!Var34.f_21)
	{
		Var34.f_21 = 1;
		if (!INVENTORY::_INVENTORY_UPDATE_INVENTORY_ITEM(func_692(0), &Var20, &Var34, 22))
		{
		}
	}
	func_1165(iVar0);
}

int func_1233(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		case 1:
			return 2f;
		case 2:
			return 3.689349E+19f;
		case 3:
			return 1.584563E+29f;
		case 4:
			return 1.038459E+34f;
		case 5:
			return 4.656613E-10f;
		case 7:
			return 3.051758E-05f;
		case 6:
			return 2.524355E-29f;
		case 8:
			return 3.85186E-34f;
		default:
			break;
	}
	return 0;
}

bool func_1234()
{
	return func_1421() != 0;
}

bool func_1235()
{
	int iVar0;

	iVar0 = func_1422();
	if (!SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		return false;
	}
	return SCRIPTS::IS_THREAD_ACTIVE(iVar0, false);
}

void func_1236(int iParam0)
{
	Global_1300340.f_288 = iParam0;
}

void func_1237(int iParam0)
{
	Global_1300340.f_288.f_1 = iParam0;
}

void func_1238(struct<2> Param0)
{
	struct<32> Var0;

	if (func_658(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_658(Param0)))
	{
	}
	else
	{
		STATS::STATSTRACKER_DEED_STARTED(func_658(Param0), Global_265213.f_122484.f_80.f_12);
		if (func_1242(Param0, &Var0))
		{
			if (Var0.f_29 == -2.476369E+14f)
			{
				STATS::_0xF21A5D66874FCEDD(Var0.f_2, 0, -5.802101E-13f);
			}
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_29, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_30, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_31, 0);
		}
	}
}

int func_1239(struct<2> Param0, int iParam2)
{
	int iVar0;

	iVar0 = func_934(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900460.f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900460.f_66;
	func_1423(Param0, iVar0);
	Global_1900460.f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900460.f_66)
	{
		return iVar0;
	}
	func_1155(iVar0, iParam2);
	return iParam2;
}

bool func_1240(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

int func_1241(struct<2> Param0, int iParam2)
{
	int iVar0;

	if (!func_73(Param0))
	{
		return 0;
	}
	iVar0 = func_934(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_1424(Param0, func_379(0), iParam2))
	{
		func_661(func_379(0), 3);
		func_661(func_379(iVar0), 4);
		return 0;
	}
	func_1155(iVar0, 0);
	func_661(func_379(0), 3);
	func_661(func_379(1), 4);
	return 1;
}

bool func_1242(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_1103(Param0, &vVar0);
	if (func_1425(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

void func_1243(var uParam0, bool bParam1, int iParam2)
{
	func_1426(uParam0, iParam2);
	if (Global_1205789.f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_1157(func_936(uParam0->f_1));
	}
	else
	{
		func_1158();
	}
}

bool func_1244(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102813.f_3 && iParam0) != 0;
	}
	return (Global_1101558[iParam1 /*38*/].f_3 && iParam0) != 0;
}

void func_1245()
{
	int iVar0;

	if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295619.f_5))
	{
		return;
	}
	iVar0 = func_1427();
	if (iVar0 > 0)
	{
		func_1428(-6.064608E-06f, iVar0, 0);
	}
}

bool func_1246()
{
	return (func_1429(Global_1295619.f_5, 1, 0, 1) && func_1430() > 0);
}

void func_1247()
{
	int iVar0;

	if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295619.f_5))
	{
		return;
	}
	iVar0 = func_1430();
	if (iVar0 > 0)
	{
		func_1431(iVar0, 0, -5.149929E+33f, 0);
	}
}

void func_1248()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	LAW::CLEAR_WANTED_SCORE(iVar0);
	func_1432();
}

void func_1249(int iParam0, struct<2> Param1, int iParam3)
{
	int iVar0;

	if (func_73(Global_1109780.f_193[Global_1295619 /*8*/].f_2.f_1))
	{
		return;
	}
	if (Global_1109780.f_193[Global_1295619 /*8*/].f_2 != -1 && Global_1109780.f_193[Global_1295619 /*8*/].f_2 != iParam0)
	{
		return;
	}
	Global_1109780.f_193[Global_1295619 /*8*/].f_2 = iParam0;
	Global_1109780.f_193[Global_1295619 /*8*/].f_2.f_1 = { Param1 };
	if (iParam3 != -1)
	{
		Global_1109780.f_193[Global_1295619 /*8*/].f_2.f_3 = iParam3;
	}
	iVar0 = func_1433(Global_1295619.f_5);
	if (iVar0 != 6 && iVar0 != 8)
	{
		func_1434(6);
	}
}

int func_1250()
{
	int iVar0;
	int iVar1;
	struct<43> Var2;
	int iVar45;

	iVar1 = Global_1295619.f_16;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Var2 = { Global_1940239.f_245.f_14[iVar0 /*43*/] };
		iVar45 = DATABINDING::DATABINDING_READ_INT(Var2.f_29);
		if (iVar45 < iVar1)
		{
			if (func_1435(Var2))
			{
				func_656(Var2);
			}
			return iVar0;
		}
		iVar0++;
	}
	return func_1436();
}

void func_1251(var uParam0, int iParam1, char[32] cParam2, struct<24> Param10)
{
	func_1437(uParam0, iParam1, cParam2, Param10);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_1144(15), Param10.f_16);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_1144(17), Param10.f_17);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1144(3), Param10.f_18);
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1144(4), Param10.f_19);
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1144(5), Param10.f_20);
	uParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1144(6), Param10.f_21);
	uParam0->f_25 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1144(98), Param10.f_22);
	uParam0->f_26 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1144(99), Param10.f_23);
	uParam0->f_27 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1144(100), Param10.f_23);
}

bool func_1252(var uParam0)
{
	return true;
}

int func_1253(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		return 0;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		return 0;
	}
	else if (uParam0->f_6 == 0)
	{
		return 0;
	}
	else if (uParam0->f_7 == 0)
	{
		return 0;
	}
	if (uParam0->f_13 == 5.395881E-11f)
	{
		if (Global_1896762.f_354)
		{
			uParam0->f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			uParam0->f_4 = MISC::VAR_STRING(2, "NM_TI_ACCEPT_INVITE");
		}
	}
	if (*uParam0 == 5)
	{
		return func_1439(func_1438(uParam0->f_2, 4.808429E-35f), func_1438(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 6)
	{
		return func_1440(func_1438(uParam0->f_2, 4.808429E-35f), func_1438(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 1)
	{
		return func_1441(func_1438(uParam0->f_2, 4.808429E-35f), func_1438(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 3)
	{
		return func_1442(func_1438(uParam0->f_2, 4.808429E-35f), func_1438(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_1443(func_1438(uParam0->f_2, 4.808429E-35f), func_1438(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 4)
	{
		return func_1444(func_1438(uParam0->f_2, 4.808429E-35f), func_1438(uParam0->f_3, 4.808429E-35f), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_1445(func_1438(uParam0->f_2, 4.808429E-35f), func_1438(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

var func_1254()
{
	return Global_1940239.f_245.f_1305;
}

bool func_1255(struct<2> Param0)
{
	return func_657(Param0) == 0;
}

int func_1256(struct<2> Param0)
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
		if (func_74(Global_1900531[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1257(struct<2> Param0, bool bParam2)
{
	if (!func_73(Param0))
	{
		return;
	}
	if (!func_1255(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1446(Param0);
	}
	func_661(Param0, 1);
	bParam2 = bParam2;
}

bool func_1258()
{
	return (Global_1915643.f_20637 || Global_1915643.f_22504.f_1);
}

Vector3 func_1259(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_1447(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

char* func_1260()
{
	return "countdown_final_thud";
}

int func_1261(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 4;
		case 6:
			return 4;
		case 7:
			return 3;
		case 8:
			return 1;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 4;
		case 12:
			return 4;
		case 13:
			return 3;
		case 16:
			return 1;
		case 14:
			return 4;
		case 15:
			return 4;
		case 17:
			return 3;
		case 18:
			return 0;
		case 19:
			return 4;
		case 20:
			return 1;
		case 21:
			return 1;
		case 22:
			return 0;
		case 23:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 26:
			return 4;
		case 27:
			return 4;
		case 28:
			return 1;
		case 29:
			return 1;
		case 30:
			return 0;
		case 31:
			return 4;
		case 32:
			return 4;
		case 33:
			return 4;
		case 34:
			return 4;
		case 35:
			return 4;
		case 36:
			return 1;
		case 37:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_1262(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		iParam3 = func_1448(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(iParam0, func_1449(iParam2), iParam3);
}

void func_1263(int iParam0, var uParam1, int iParam2, char* sParam3)
{
	if (MISC::IS_STRING_NULL(sParam3))
	{
		sParam3 = func_1450(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iParam0, func_1449(iParam2), sParam3);
}

void func_1264(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == -1)
	{
		iParam3 = func_1451(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_INT(iParam0, func_1449(iParam2), iParam3);
}

void func_1265(int iParam0, var uParam1, int iParam2, float fParam3)
{
	if (fParam3 == -1f)
	{
		fParam3 = func_1452(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_FLOAT(iParam0, func_1449(iParam2), fParam3);
}

void func_1266(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!bParam4)
	{
		bParam3 = func_1453(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iParam0, func_1449(iParam2), bParam3);
}

int func_1267(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_1268(int iParam0)
{
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28301), iParam0);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28302), iParam0);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28303), iParam0);
	if (!func_867(iParam0))
	{
		func_1121(iParam0, 5, 1, 1, 0, 0);
	}
}

void func_1269(int iParam0)
{
	func_504(&(Global_1203937.f_3), iParam0);
}

void func_1270(int iParam0)
{
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28301), iParam0);
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28302), iParam0);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28303), iParam0);
	if (!func_1021(iParam0))
	{
		func_1223(iParam0);
	}
}

void func_1271(int iParam0)
{
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28305), iParam0);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28304), iParam0);
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28306), iParam0);
}

void func_1272(int iParam0)
{
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28305), iParam0);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28306), iParam0);
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28304), iParam0);
}

void func_1273(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

float func_1274(bool bParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	fVar0 = 1f;
	if (bParam0)
	{
		return fVar0;
	}
	if (!func_78(Local_26[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/], 4))
	{
		return fVar0;
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar3);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1) && func_78(Local_26[iVar3 /*4*/], 4))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
			if (GANG::_NETWORK_IS_IN_MY_GANG(iVar2) && iVar2 != PLAYER::PLAYER_ID())
			{
				fVar0 = (fVar0 - 1036831949);
			}
		}
		iVar3++;
	}
	return fVar0;
}

void func_1275(float fParam0)
{
	if (Local_351[Local_544.f_1366 /*6*/].f_2 != fParam0)
	{
		if (fParam0 < 0f)
		{
			fParam0 = 0f;
		}
		Local_351[Local_544.f_1366 /*6*/].f_2 = fParam0;
		Local_351[Local_544.f_1366 /*6*/].f_5 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

int func_1276()
{
	return 1000;
}

void func_1277(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 < 0 || iParam0 >= 15)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_1454(iParam0, iVar0, iParam1);
		iVar0++;
	}
}

bool func_1278()
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

bool func_1279(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939421.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1939421[iVar0 /*16*/].f_10)))
		{
			func_1455(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1280(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_1281(int iParam0, int iParam1, int iParam2)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 < iParam1)
	{
		if (iParam2 != 0)
		{
			Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = iParam2;
		}
		else
		{
			Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = Global_1295619.f_16;
		}
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = iParam1;
		return true;
	}
	else if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 == iParam1)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = Global_1295619.f_16;
		return true;
	}
	return false;
}

void func_1282(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 186;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 3, &uParam1);
	func_1456(*uParam0);
}

void func_1283(var uParam0)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, "Title");
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "LeaderboardList");
	uParam0->f_142 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "LeaderboardList");
}

void func_1284(var uParam0, char* sParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_158, 7))
	{
		MISC::SET_BIT(&(uParam0->f_158), 7);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Heading", sParam1);
	}
}

char* func_1285(char* sParam0)
{
	return MISC::VAR_STRING(6, "FM_WEIGHT", sParam0);
}

char* func_1286(float fParam0)
{
	return MISC::VAR_STRING(2, "FM_PERCENT", BUILTIN::FLOOR((fParam0 * 1120403456)));
}

void func_1287(int iParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(iParam0, iParam1);
}

bool func_1288(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 4)
	{
		return false;
	}
	return Global_3145858.f_61223[iParam0 /*3*/].f_1 != 0;
}

void func_1289(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;

	if (Global_1940072.f_111)
	{
		if (func_1457())
		{
			func_1458(uParam0, uParam1, iParam2, iParam7, iParam8);
		}
		else
		{
			func_1459(uParam0, uParam1, iParam2, iParam7, iParam8);
		}
	}
	else
	{
		func_1297(uParam0, uParam1);
		iVar2 = PLAYER::PLAYER_ID();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_1460(&((uParam1[iVar0 /*23*/])->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_1461(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", func_1462(uParam1, iVar0));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", iVar1);
				}
				bVar3 = iVar2 == (uParam1[iVar0 /*23*/])->f_14;
				fVar4 = func_1463(uParam0, uParam1, iVar0, iVar2, bVar3);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_1464(uParam0, uParam1, iVar0, bParam3, fVar4);
					}
				}
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Gamertag", &((uParam1[iVar0 /*23*/])->f_14.f_1));
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "GamertagColor", fVar4);
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "CrewTag", func_1465());
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Rank", func_1466((uParam1[iVar0 /*23*/])->f_14));
				if (!bParam4)
				{
					if (func_1467())
					{
						if (func_1468((uParam1[iVar0 /*23*/])->f_14))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", true);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", false);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", true);
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", true);
					}
				}
				if (bParam4)
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat0", func_1469((uParam1[iVar0 /*23*/])->f_11));
				}
				else if (bParam5)
				{
				}
				fVar5 = func_1470(uParam1[iVar0 /*23*/], uParam0->f_159);
				fVar6 = func_1471(uParam1[iVar0 /*23*/], uParam0->f_159);
				fVar7 = func_1472(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
				fVar8 = func_1473(uParam1[iVar0 /*23*/]);
				if (Global_1049307[0 /*3*/].f_1 != 0)
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat1", MISC::_GET_STRING_FROM_FLOAT(fVar5, 0));
				}
				if (Global_1049307[1 /*3*/].f_1 != 0 && fVar6 != -1f)
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat2", MISC::_GET_STRING_FROM_FLOAT(fVar6, 0));
				}
				if (Global_1049307[2 /*3*/].f_1 != 0)
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", MISC::_GET_STRING_FROM_FLOAT(fVar7, 0));
				}
				if (Global_1049307[3 /*3*/].f_1 != 0)
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "StatRounds", MISC::_GET_STRING_FROM_FLOAT(fVar8, 0));
				}
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "isHighlighted", bVar3);
				if (bVar3)
				{
				}
				if (bParam4 && (uParam1[iVar0 /*23*/])->f_13)
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Blip", "BLIP_MVP");
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "BlipColor", -1.101616E-25f);
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "BlipColor", fVar4);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

void func_1290(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	bool bVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;

	if (Global_1940072.f_111)
	{
		func_1459(uParam0, uParam1, iParam2, iParam7, iParam8);
	}
	else
	{
		func_1297(uParam0, uParam1);
		iVar7 = PLAYER::PLAYER_ID();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_1460(&((uParam1[iVar0 /*23*/])->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_1461(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", func_1462(uParam1, iVar0));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", iVar1);
				}
				bVar8 = iVar7 == (uParam1[iVar0 /*23*/])->f_14;
				fVar9 = func_1463(uParam0, uParam1, iVar0, iVar7, bVar8);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_1464(uParam0, uParam1, iVar0, bParam3, fVar9);
					}
				}
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Gamertag", &((uParam1[iVar0 /*23*/])->f_14.f_1));
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "GamertagColor", fVar9);
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "CrewTag", func_1465());
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Rank", func_1466((uParam1[iVar0 /*23*/])->f_14));
				if (!bParam4)
				{
					if (func_1467())
					{
						if (func_1468((uParam1[iVar0 /*23*/])->f_14))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", true);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", false);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", true);
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", true);
					}
				}
				if (bParam4)
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat0", func_1469((uParam1[iVar0 /*23*/])->f_11));
				}
				else if (bParam5)
				{
					if (func_1474(uParam0->f_159))
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat1", MISC::_GET_STRING_FROM_FLOAT((uParam1[iVar0 /*23*/])->f_8, 0));
					}
					else if (func_1475(uParam0->f_159))
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat2", MISC::_GET_STRING_FROM_FLOAT((uParam1[iVar0 /*23*/])->f_8, 0));
					}
					else
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat0", MISC::_GET_STRING_FROM_FLOAT((uParam1[iVar0 /*23*/])->f_8, 0));
					}
				}
				if (MISC::IS_BIT_SET(uParam0->f_159, 3))
				{
					iVar10 = 0;
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar2 = BUILTIN::ROUND(func_1471(uParam1[iVar0 /*23*/], uParam0->f_159));
						iVar10 = "Stat2";
					}
					else
					{
						iVar2 = BUILTIN::ROUND(func_1470(uParam1[iVar0 /*23*/], uParam0->f_159));
						iVar10 = "Stat1";
					}
					sVar5 = " ";
					if (func_1476(iVar2))
					{
						iVar11 = uParam0->f_159;
						if ((uParam1[iVar0 /*23*/])->f_1 == 1286243416)
						{
							MISC::CLEAR_BIT(&iVar11, 12);
						}
						sVar5 = func_1477(iVar2, iVar11, 0);
					}
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], iVar10, sVar5);
				}
				else if (!MISC::IS_BIT_SET(uParam0->f_159, 0) && !MISC::IS_BIT_SET(uParam0->f_159, 17))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_159, 18))
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat1", MISC::_GET_STRING_FROM_FLOAT(func_1470(uParam1[iVar0 /*23*/], uParam0->f_159), func_1478(uParam0, 1)));
					}
				}
				if (MISC::IS_BIT_SET(uParam0->f_159, 4))
				{
					iVar12 = 0;
					sVar6 = " ";
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar12 = "Stat3";
						iVar3 = BUILTIN::ROUND(func_1472(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160));
					}
					else
					{
						iVar12 = "Stat2";
						iVar3 = BUILTIN::ROUND(func_1471(uParam1[iVar0 /*23*/], uParam0->f_159));
					}
					if (func_1476(iVar3))
					{
						sVar6 = func_1088(iVar3, 1, 2, 0, 0, 0);
					}
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], iVar12, sVar6);
				}
				else if (MISC::IS_BIT_SET(uParam0->f_159, 15))
				{
					iVar13 = 0;
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar13 = "Stat3";
						fVar14 = func_1472(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
					}
					else
					{
						iVar13 = "Stat2";
						fVar14 = func_1471(uParam1[iVar0 /*23*/], uParam0->f_159);
					}
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], iVar13, MISC::_GET_STRING_FROM_FLOAT(fVar14, 0));
				}
				else if ((!MISC::IS_BIT_SET(uParam0->f_159, 3) && !func_1475(uParam0->f_159)) && !func_1479(uParam0->f_159))
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat2", MISC::_GET_STRING_FROM_FLOAT(func_1471(uParam1[iVar0 /*23*/], uParam0->f_159), func_1478(uParam0, 2)));
				}
				if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
				{
					if (MISC::IS_BIT_SET(uParam0->f_160, 0))
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", "-");
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 9))
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", func_1285(func_1472(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160)));
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 10))
					{
						fVar4 = func_1472(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
						if (fVar4 >= 0f)
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", func_1088(BUILTIN::FLOOR(fVar4), 1, 2, 0, 0, 0));
						}
						else
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", MISC::VAR_STRING(2, "FM_POSSE_RACE_LEADERBOARD_DNF"));
						}
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 21))
					{
						iVar2 = BUILTIN::ROUND(func_1472(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160));
						sVar5 = " ";
						sVar5 = func_1477(iVar2, uParam0->f_159, 0);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", sVar5);
					}
					else
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", MISC::_GET_STRING_FROM_FLOAT(func_1472(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160), func_1478(uParam0, 3)));
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "isHighlighted", bVar8);
				if (bVar8)
				{
				}
				if (bParam4 && (uParam1[iVar0 /*23*/])->f_13)
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Blip", "BLIP_MVP");
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "BlipColor", -1.101616E-25f);
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "BlipColor", fVar9);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

void func_1291(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4[8];
	int iVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	iVar13 = 0;
	iVar14 = 32;
	bVar16 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (Global_1940072.f_111)
	{
		iVar3 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_142);
		if (MISC::IS_BIT_SET(uParam0->f_159, 28) && uParam0->f_150 > 0)
		{
			iVar14 = uParam0->f_150;
			func_1480(iParam4, &uVar4, uParam0->f_150, bVar16);
			func_1481(uParam0, iParam6, &uVar4, &iVar13, &iVar14);
			iVar1 = 0;
			while (iVar1 <= (iVar14 - 1))
			{
				iVar17 = uVar4[iVar1];
				if (iVar1 == 0 || iVar1 >= iVar13)
				{
					if ((iVar17 < 8 && iVar17 != -1) && iVar0 < 5)
					{
						func_1482(uParam0->f_2, uParam0->f_143[iVar0], "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar1++;
			}
		}
		else
		{
			func_1483(uParam1, iParam6, &iVar13, &iVar14);
			iVar2 = 0;
			while (iVar2 <= iVar14)
			{
				if (iVar0 == 0 || iVar2 >= iVar13)
				{
					if (func_1460(&((uParam1[iVar2 /*23*/])->f_14)) && iVar0 < 5)
					{
						func_1482(uParam0->f_2, uParam0->f_143[iVar0], "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar2++;
			}
		}
		iVar3 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_142) - 1);
		if (iVar0 <= iVar3)
		{
			iVar18 = iVar3;
			while (iVar18 >= iVar0)
			{
				DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_142, iVar18);
				iVar18 = (iVar18 + -1);
			}
		}
		return;
	}
	iVar3 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2);
	if (bParam2 && uParam0->f_150 > 0)
	{
		func_1480(iParam4, &uVar4, uParam0->f_150, bVar16);
		func_1484(uParam0, uParam1, iParam3, uParam0->f_150, bParam5);
		if (!bVar15)
		{
			iVar1 = 0;
			while (iVar1 <= (uParam0->f_150 - 1))
			{
				iVar19 = uVar4[iVar1];
				if (iVar19 < 8 && iVar19 > -1)
				{
					func_1482(uParam0->f_2, uParam0->f_3[iVar19], "LeaderboardHeader", iVar3, iVar0);
					iVar0++;
					iVar2 = 0;
					while (iVar2 <= 31)
					{
						if (iVar19 == (*uParam1)[iVar2 /*23*/] && func_1460(&((uParam1[iVar2 /*23*/])->f_14)))
						{
							func_1482(uParam0->f_2, uParam0->f_12[iVar2], "LeaderboardListItem", iVar3, iVar0);
							iVar0++;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	else
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			if (func_1460(&((uParam1[iVar2 /*23*/])->f_14)))
			{
				func_1482(uParam0->f_2, uParam0->f_12[iVar2], "LeaderboardListItem", iVar3, iVar0);
				iVar0++;
			}
			iVar2++;
		}
	}
	if (uParam0->f_149 > 0 || iVar0 > 0)
	{
		if (iVar0 < 3)
		{
			iVar20 = iVar0;
			while (iVar20 <= 3)
			{
				func_1482(uParam0->f_2, uParam0->f_12[31], "LeaderboardListItemBlank", iVar3, iVar0);
				iVar0++;
				iVar20++;
			}
		}
	}
	iVar3 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2) - 1);
	if (iVar0 <= iVar3)
	{
		iVar21 = iVar3;
		while (iVar21 >= iVar0)
		{
			DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_2, iVar21);
			iVar21 = (iVar21 + -1);
		}
	}
}

int func_1292()
{
	if (Global_1940072.f_20)
	{
		if (Global_1940072.f_5 == 1)
		{
			return 1;
		}
		if (Global_1940072.f_5 == 2)
		{
			return 2;
		}
	}
	return -1;
}

bool func_1293()
{
	if (Global_1102813.f_26.f_3440.f_4 && !func_1467())
	{
		Global_1102813.f_26.f_3440.f_4 = 0;
	}
	return Global_1102813.f_26.f_3440.f_4;
}

bool func_1294()
{
	return (func_819(2) && func_1485());
}

void func_1295(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_158, 17))
	{
		if (MISC::IS_BIT_SET(uParam0->f_159, 22))
		{
			Global_1940072.f_112 = 1;
		}
		else
		{
			Global_1940072.f_112 = 0;
		}
		MISC::SET_BIT(&(uParam0->f_158), 17);
	}
	if (Global_1940072.f_111)
	{
		if (MISC::IS_BIT_SET(uParam0->f_159, 28))
		{
			iVar0 = 0;
			while (iVar0 <= (uParam0->f_150 - 1))
			{
				if (iVar0 == iParam4)
				{
					*iParam3 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if ((uParam1[iVar0 /*23*/])->f_14 == *iParam2)
				{
					*iParam3 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

void func_1296(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	func_1486(uParam0, uParam1, iParam2, iParam7, bParam4, bParam3, bParam5, bParam8, bParam9, iParam10, iParam6);
	func_1291(uParam0, uParam1, bParam5, iParam6, iParam2, MISC::IS_BIT_SET(uParam0->f_159, 5), iParam10);
}

void func_1297(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((uParam1[iVar0 /*23*/])->f_14 == 255)
		{
		}
		else if (func_1460(&((uParam1[iVar0 /*23*/])->f_14)))
		{
			func_1487(uParam0, &((uParam1[iVar0 /*23*/])->f_14), iVar0, 1);
		}
		iVar0++;
	}
}

void func_1298(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((uParam1[iVar0 /*23*/])->f_14 == 255)
		{
		}
		else
		{
			func_1461(uParam0, uParam1, iVar0, bParam2);
		}
		iVar0++;
	}
}

void func_1299(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_1488(16);
	switch (uParam0->f_232)
	{
		case 0:
			func_529(1);
			func_1489(&(uParam0->f_232), 1);
			break;
		case 1:
			AUDIO::PREPARE_SOUNDSET("MP_Leaderboard_Sounds", true);
			func_1489(&(uParam0->f_232), 2);
			break;
		case 2:
			iVar1 = UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(1.355797E-17f, func_1490(bParam1));
			if (iVar1 == 0)
			{
				func_1489(&(uParam0->f_232), 3);
			}
			else if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(1.355797E-17f))
			{
				func_1489(&(uParam0->f_232), 3);
			}
			break;
		case 3:
			if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(1.355797E-17f))
			{
				if (!bVar0)
				{
					AUDIO::PLAY_SOUND_FRONTEND("Leaderboard_Show", "MP_Leaderboard_Sounds", true, 0);
				}
				UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(1.355797E-17f, func_1491());
				func_1489(&(uParam0->f_232), 4);
			}
			else if (func_1492())
			{
				func_1489(&(uParam0->f_232), 2);
			}
			break;
		case 4:
			if (MISC::IS_BIT_SET(uParam0->f_158, 13))
			{
				if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(1.355797E-17f))
				{
					if (!bVar0)
					{
						AUDIO::PLAY_SOUND_FRONTEND("Leaderboard_Hide", "MP_Leaderboard_Sounds", true, 0);
					}
					UIAPPS::_CLOSE_UIAPP_BY_HASH(1.355797E-17f);
					func_1489(&(uParam0->f_232), 5);
				}
			}
			break;
		case 5:
			if (bParam1)
			{
				MISC::CLEAR_BIT(&(uParam0->f_158), 13);
				func_1489(&(uParam0->f_232), 1);
			}
			else
			{
				func_1489(&(uParam0->f_232), 6);
			}
			break;
		case 6:
			func_888(uParam0, bParam1);
			break;
	}
}

void func_1300(var uParam0)
{
	func_1493(&(uParam0->f_162));
	if ((MISC::IS_BIT_SET(uParam0->f_158, 14) || MISC::IS_BIT_SET(uParam0->f_158, 15)) || MISC::IS_BIT_SET(uParam0->f_158, 16))
	{
		return;
	}
	func_1494(&(uParam0->f_162), 0);
	MISC::SET_BIT(&(uParam0->f_158), 14);
}

float func_1301()
{
	return 1.958777E+31f;
}

float func_1302()
{
	return -9.513237E-21f;
}

float func_1303()
{
	return -3.842693E-13f;
}

void func_1304(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_159(&((uParam0[iParam1 /*34*/])->f_31));
	iVar1 = (uParam0[iParam1 /*34*/])->f_24;
	if (iVar1 != 0)
	{
		if (!bVar0)
		{
			func_190(&((uParam0[iParam1 /*34*/])->f_31), 0);
		}
	}
	else if (bVar0)
	{
		if (func_192(&((uParam0[iParam1 /*34*/])->f_31)) < 1500)
		{
			return;
		}
		func_305(&((uParam0[iParam1 /*34*/])->f_31));
	}
	func_1086((uParam0[iParam1 /*34*/])->f_17, iVar1 == 1);
	func_1086((uParam0[iParam1 /*34*/])->f_18, iVar1 == 2);
	func_1086((uParam0[iParam1 /*34*/])->f_19, iVar1 == 3);
}

bool func_1305(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 7:
		case 8:
			return true;
	}
	return false;
}

void func_1306(var uParam0, float fParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(uParam0, fParam1);
}

void func_1307(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_456(uParam0))
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

void func_1308(int iParam0, int iParam1, int iParam2)
{
	Global_1953279.f_83[func_1179(iParam0, 1) /*12*/].f_11 = (Global_1953279.f_83[func_1179(iParam0, 1) /*12*/].f_11 - (Global_1953279.f_83[func_1179(iParam0, 1) /*12*/].f_11 && iParam1));
}

bool func_1309(int iParam0, int iParam1)
{
	return (Global_1953279.f_83[iParam0 /*12*/].f_11 && iParam1) != 0;
}

void func_1310(int iParam0, int iParam1, int iParam2)
{
	Global_1953279.f_83[iParam0 /*12*/].f_11 = (Global_1953279.f_83[iParam0 /*12*/].f_11 - (Global_1953279.f_83[iParam0 /*12*/].f_11 && iParam1));
}

int func_1311(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1953279.f_2844.f_1 <= 0)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		Global_1953279.f_2844.f_2 = 0;
		Global_1953279.f_2844.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1953279.f_2844.f_43[iVar0 /*2*/] = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1953279.f_2844.f_3[iVar1] = 0;
			iVar1++;
		}
		return 1;
	}
	iVar0 = func_1495(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	Global_1953279.f_2844.f_2 = (Global_1953279.f_2844.f_2 - (Global_1953279.f_2844.f_2 && Global_1953279.f_2844.f_43[iVar0 /*2*/].f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_1496(iVar1, Global_1953279.f_2844.f_43[iVar0 /*2*/].f_1))
		{
			func_1497(iVar1, Global_1953279.f_2844.f_43[iVar0 /*2*/].f_1);
		}
		iVar1++;
	}
	Global_1953279.f_2844.f_1 = (Global_1953279.f_2844.f_1 - 1);
	Global_1953279.f_2844.f_43[iVar0 /*2*/] = { Global_1953279.f_2844.f_43[Global_1953279.f_2844.f_1 /*2*/] };
	Global_1953279.f_2844.f_43[Global_1953279.f_2844.f_1 /*2*/].f_1 = 0;
	Global_1953279.f_2844.f_43[Global_1953279.f_2844.f_1 /*2*/] = 0;
	return 1;
}

bool func_1312(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_1341(iVar0, 1);
		if (!func_1498(iVar2, 258))
		{
		}
		else if (Global_1953279.f_2844.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam1)
			{
				func_1337(iVar0, 0);
				func_1499(&(Global_1953279.f_2938.f_2[(Global_1953279.f_2938 - 1) /*2*/]), 1, 6);
			}
			if (Global_1953279.f_2844.f_54[iVar0] != 0)
			{
				if (iVar2 == -7.4271E-05f)
				{
					*uParam0 |= 262144;
				}
			}
			func_1308(iVar2, 259, 6);
			Global_1953279.f_2844.f_54[iVar0] = 0;
			Global_1953279.f_2765[iVar0 /*2*/] = 0;
			Global_1953279.f_2765[iVar0 /*2*/].f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

int func_1313(int iParam0)
{
	bool bVar0;
	var uVar1;

	if (iParam0 == 0)
	{
		return 0;
	}
	bVar0 = Global_1953279.f_1676.f_1[34 /*3*/];
	if ((((func_1183(bVar0) != 0 && iParam0 != -9.954964E+07f) && iParam0 != -2.320688E-12f) && iParam0 != -2.991873E+37f) && iParam0 != 1.514253E+30f)
	{
		return 0;
	}
	if (func_1336(bVar0, -7.339854E+32f))
	{
		return 0;
	}
	return func_1500(iParam0, &uVar1);
}

int func_1314(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1953279.f_2844.f_1 <= 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_1341(iVar0, 1);
		if (func_1498(iVar2, 2))
		{
		}
		else
		{
			if (Global_1953279.f_2844.f_3[iVar0] == 0)
			{
				if (!func_1498(iVar2, 256))
				{
				}
				else
				{
					Jump @104; //curOff = 87
					func_1180(iVar2, 2, 6);
					iVar1++;
					if (bParam0 && func_1501(iVar0) == -1)
					{
						func_1337(iVar0, 0);
						func_1499(&(Global_1953279.f_2938.f_2[(Global_1953279.f_2938 - 1) /*2*/]), 2, 6);
					}
				}
				iVar0++;
				if (iVar1 > 0)
				{
					return 1;
				}
				return 0;
			}
		}
	}
}

void func_1315(int iParam0)
{
	func_1180(iParam0, 8, 6);
}

int func_1316(bool bParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	struct<15> Var3;
	struct<18> Var21;

	if (func_1502(&(Global_1953279.f_1048), 2))
	{
		return 0;
	}
	if (iParam1 == -7.008358E-38f)
	{
		bVar0 = bParam0;
	}
	else if (iParam1 == -6.600012E-27f)
	{
		bVar0 = func_1503(bParam0);
	}
	else
	{
		return 0;
	}
	iVar1 = func_1504(uParam3, iParam1);
	bVar2 = func_1505(bVar0) != false;
	if (iVar1 == -1 && bVar2)
	{
		return 0;
	}
	if (bVar2)
	{
		if (bParam4)
		{
			func_1506(uParam2, uParam3, iParam1);
		}
		else
		{
			func_1507(uParam2, uParam3, iVar1);
		}
		return 1;
	}
	if (bParam4)
	{
		Var3.f_2 = -1;
		Var3.f_13 = 1f;
		Var3.f_14 = 1f;
		if (!func_1508(&Var3, bVar0, 0, 1, 6))
		{
			return 0;
		}
		if (iVar1 != -1 && Var3.f_3 == (uParam3[iVar1 /*18*/])->f_3)
		{
			return 0;
		}
		func_1509(uParam2, uParam3, &Var3);
	}
	else if (iVar1 == -1)
	{
		func_1510(uParam2, uParam3, bVar0, 0, 1);
	}
	else
	{
		Var21.f_2 = -1;
		Var21.f_13 = 1f;
		Var21.f_14 = 1f;
		if (!func_1508(&Var21, bVar0, 0, 1, 6))
		{
			return 0;
		}
		*(uParam3[iVar1 /*18*/]) = { Var21 };
	}
	return 1;
}

void func_1317()
{
	Global_1953279.f_1046 = 0;
}

void func_1318(int iParam0)
{
	struct<36> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_35 = -1;
	func_1369(Global_1149417.f_4804.f_34[iParam0 /*3*/], &Var0, 2, -1);
	func_1368(&Var0, iParam0, 0);
}

void func_1319(int iParam0)
{
	struct<37> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_35 = -1;
	func_1367(func_1366(iParam0, 1), &Var0, 0, -1);
	func_1370(Var0, iParam0, 0);
}

bool func_1320(bool bParam0, int iParam1)
{
	*bParam0 = Global_1245159.f_9818;
	bParam0->f_2 = 1.013984E-23f;
	bParam0->f_3 = iParam1;
	return (DATAFILE::PARSEDDATA_IS_FILE_LOADED(*bParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0));
}

int func_1321()
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

int func_1322(int iParam0)
{
	return func_1511(iParam0) + 30;
}

void func_1323(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { Global_1900460.f_1[iParam0 /*2*/] };
	Global_1900460.f_1[iParam0 /*2*/] = { Global_1900460.f_1[iParam1 /*2*/] };
	Global_1900460.f_1[iParam1 /*2*/] = { Var0 };
}

int func_1324(int iParam0)
{
	int iVar0;

	if (Global_1205789.f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1205789.f_129)
	{
		if (Global_1205789[iVar0 /*4*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

float func_1325(int iParam0)
{
	if (iParam0 == 9.256025E-25f || iParam0 == -218565.1f)
	{
		return 1.256553E-21f;
	}
	return Global_524288.f_39632;
}

int func_1326(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -504335712:
			if (func_1512(iParam1))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		case 395262693:
			iVar0 = 2;
			break;
		case -933924539:
			iVar0 = 0;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

bool func_1327(var uParam0, int iParam1)
{
	*uParam0 = { *iParam1 };
	uParam0->f_4 = iParam1->f_4;
	uParam0->f_5 = { iParam1->f_5 };
	uParam0->f_9 = iParam1->f_9;
	uParam0->f_11 = iParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = func_1513(uParam0->f_11);
	if (uParam0->f_22 == 0)
	{
		return false;
	}
	uParam0->f_12 = { iParam1->f_16 };
	uParam0->f_23 = iParam1->f_25;
	uParam0->f_20 = iParam1->f_24;
	uParam0->f_10 = 0;
	return true;
}

bool func_1328(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	iVar0 = func_692(bParam2);
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(iVar0, iParam0, iParam1, 24, 1))
	{
		return false;
	}
	return true;
}

bool func_1329(var uParam0, int iParam1)
{
	*uParam0 = { *iParam1 };
	uParam0->f_4 = iParam1->f_4;
	uParam0->f_5 = { iParam1->f_5 };
	uParam0->f_9 = iParam1->f_9;
	uParam0->f_11 = iParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = 0;
	uParam0->f_12 = { iParam1->f_15 };
	uParam0->f_20 = iParam1->f_23;
	uParam0->f_10 = 2;
	return true;
}

bool func_1330(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_1331(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1953279.f_83[iParam0 /*12*/].f_10 && iParam1) != 0;
}

Vector3 func_1332(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17418.f_55.f_664.f_1777;
	}
	return Global_17418.f_55.f_664.f_33[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

void func_1333(int iParam0, int iParam1, int iParam2)
{
	Global_1953279.f_83[iParam0 /*12*/].f_11 = (Global_1953279.f_83[iParam0 /*12*/].f_11 || iParam1);
}

void func_1334(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	Var2 = 39;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_1953279.f_2938.f_35[iVar0 /*2*/] = { Var2 };
		if (iVar0 < *uParam0)
		{
			if ((func_1514(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_1514(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_1499(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
				}
				Global_1953279.f_2938.f_35[iVar1 /*2*/] = { uParam0->f_2[iVar0 /*2*/] };
				iVar1++;
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				uParam0->f_2[iVar0 /*2*/] = { Global_1953279.f_2938.f_35[iVar0 /*2*/] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_1335(var uParam0, int iParam1, bool bParam2, float fParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = bParam2;
	uParam0->f_2 = fParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_1336(bool bParam0, int iParam1)
{
	if (!func_714(bParam0, 0))
	{
		return func_1515(func_1005(bParam0), iParam1);
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

void func_1337(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_1516(&(Global_1953279.f_2938), iParam0, iParam1);
}

int func_1338(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<10> Var1;
	int iVar15;
	int iVar16;

	Var1.f_9 = -5.45926E-19f;
	iVar16 = 0;
	if (func_1185() == 4.387347E-38f)
	{
		iVar16 = 1;
	}
	iParam2 |= 28;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (!func_1162(&Var1, iVar0, iParam0, iParam1))
		{
		}
		else if (func_1517(Var1.f_4) && PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(Var1.f_4, iVar16, true) == 0)
		{
		}
		else if (func_1183(Var1.f_4) != 0)
		{
		}
		else if (func_1336(Var1.f_4, -7.339854E+32f))
		{
		}
		else if (func_1336(Var1.f_4, 4.422284E-20f))
		{
		}
		else
		{
			iVar15 = func_894(Var1.f_4);
			if (func_1519(iParam2, func_1518(iVar15)))
			{
			}
			else
			{
				return Var1.f_4;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_1339(bool bParam0, bool bParam1)
{
	if (!func_714(bParam0, 0))
	{
	}
	if (!bParam1 && (bParam0 == -2.296707E-23f || bParam0 == -2.419822E+17f))
	{
		return false;
	}
	if (func_1336(bParam0, 2.063512E-29f))
	{
		return true;
	}
	return false;
}

void func_1340(var uParam0, var uParam1)
{
	struct<4> Var0;
	int iVar7;
	int iVar8;

	Var0 = func_1175(0);
	Var0.f_1 = uParam1;
	Var0.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&Var0);
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var0))
	{
		return;
	}
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var0))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar7, &Var0, 2.24243E+12f))
		{
		}
		else
		{
			iVar8 = func_1179(iVar7, 1);
			if (iVar8 < 0 || iVar8 > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar7, &Var0, 1.154786E+11f))
			{
			}
			else if (uParam0->f_1[iVar8 /*3*/] != iVar7)
			{
			}
			else
			{
				uParam0->f_1[iVar8 /*3*/] = Global_1953279.f_83[iVar8 /*12*/];
				uParam0->f_1[iVar8 /*3*/].f_1 = 0;
				func_1337(iVar8, 0);
			}
		}
	}
}

int func_1341(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1.09963E-29f;
		case 1:
			return -0.0195536f;
		case 2:
			return 6.16353E-25f;
		case 3:
			return 5.030698E+25f;
		case 4:
			return 6.953832E+10f;
		case 5:
			return 1.528789E-12f;
		case 6:
			return -3.812509E+14f;
		case 7:
			return 3.512979E-25f;
		case 8:
			return -2.87713E-08f;
		case 9:
			return 7.026751E+12f;
		case 10:
			return 37.82234f;
		case 11:
			return -5.103779E+26f;
		case 12:
			return 2.057189E+24f;
		case 13:
			return 1.705946E+19f;
		case 14:
			return 1.46383E+28f;
		case 15:
			return 6.38604E+21f;
		case 16:
			return 4289245f;
		case 17:
			return -6402848f;
		case 18:
			return -4.710718E+22f;
		case 19:
			return -7.579719E-11f;
		case 20:
			return -7.4271E-05f;
		case 21:
			return 5.394459E-28f;
		case 22:
			return -6.543055E-16f;
		case 23:
			return 774.4996f;
		case 24:
			return -0.0004201953f;
		case 25:
			return 8.86537E-15f;
		case 26:
			return -2.476578E+31f;
		case 27:
			return 2.199934E-35f;
		case 28:
			return -2.801147E+12f;
		case 29:
			return -3.522703E+23f;
		case 30:
			return 9.443141E+25f;
		case 31:
			return -0.01859914f;
		case 32:
			return -1.666598E-29f;
		case 33:
			return -8.05196E-19f;
		case 34:
			return 1.128179E-10f;
		case 35:
			return 1.186104E+32f;
		case 36:
			return -1.164553E-31f;
		case 37:
			return 9.901452E+29f;
		case 38:
			return -2.586538E-15f;
		case 39:
			return -1.003831E+26f;
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

void func_1342(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1 == -3.916588E+30f || bParam1 == 2.515798E+09f)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 1.494364E-28f;
	}
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 1.494364E-28f)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 1808.893f;
	}
	iVar0 = 10;
	iVar1 = func_894(uParam0->f_1[iVar0 /*3*/]);
	if (iVar1 == 1.246195E-34f)
	{
		if (func_1336(bParam1, 1.816948E-22f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_1337(iVar0, iParam3);
		}
	}
	else if (iVar1 == 4.454951E+36f)
	{
		if (func_1336(bParam1, -3.086476E+35f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_1337(iVar0, iParam3);
		}
	}
	else if (iVar1 == -9.847085E+19f)
	{
		if (func_1336(bParam1, -3.086476E+35f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_1337(iVar0, iParam3);
		}
	}
	iVar0 = 11;
	if (func_1336(uParam0->f_1[iVar0 /*3*/], -8.86916E-14f) && func_1336(bParam1, -3.086476E+35f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_1336(bParam1, -3.086476E+35f)) && func_1336(uParam0->f_1[iVar0 /*3*/], -1.186825E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
}

void func_1343(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1 == 9.94413E+23f)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 1.494364E-28f;
	}
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 1.494364E-28f)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 1808.893f;
	}
}

void func_1344(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	func_1337(1, iParam3);
	if (bParam2)
	{
		return;
	}
	iVar0 = 12;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (!func_1339(bVar1, 0) && func_1336(bVar1, -2.411198E+32f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	iVar0 = 10;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((bVar1 != Global_1953279.f_83[iVar0 /*12*/] && func_894(bVar1) == 4.454951E+36f) && func_1336(bParam1, -3.086476E+35f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
}

void func_1345(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_894(bParam2))
	{
		case -525676072:
			func_1520(uParam0, bParam1, iParam3);
			break;
		case 2086043523:
			func_1521(uParam0, bParam1, iParam3);
			break;
	}
}

void func_1346(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (func_894(uParam0->f_1[iVar0 /*3*/]) == 3.381578E-06f)
	{
		func_1337(iVar0, iParam3);
	}
	func_1337(1, iParam3);
	if (bParam1)
	{
		return;
	}
	if (func_1522(bParam2))
	{
		func_1523(uParam0, bParam1, iParam3);
	}
	iVar0 = 11;
	if (func_1336(bParam2, -2.411198E+32f) && !func_1339(uParam0->f_1[iVar0 /*3*/], 0))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	if (func_1336(bParam2, -1.186825E-08f))
	{
		return;
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/].f_1 == 5.334513E+16f)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		func_1337(iVar0, iParam3);
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
		{
			func_1337(iVar0, iParam3);
		}
	}
	else if (uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -4.070739E-17f;
		func_1337(iVar0, iParam3);
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
		{
			func_1337(iVar0, iParam3);
		}
	}
}

void func_1347(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	iVar0 = 12;
	iVar1 = 0;
	if (func_1185() == 4.387347E-38f)
	{
		iVar1 = 1;
	}
	if (3.919656E+35f == PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(uParam0->f_1[iVar0 /*3*/], iVar1, true))
	{
		if ((bParam1 || func_1336(bParam2, 9.741843E+28f)) || func_894(bParam2) == 2.251657E+29f)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_1337(iVar0, iParam3);
		}
	}
	bVar2 = uParam0->f_1[iVar0 /*3*/];
	if ((!func_1339(bVar2, 0) && !func_1336(bVar2, -1.186825E-08f)) && func_1336(bParam2, -1.06471E-16f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	iVar0 = 17;
	if (!func_1339(uParam0->f_1[iVar0 /*3*/], 0) && func_1336(bParam2, 2.713478E+14f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	iVar0 = 29;
	if (!func_1339(uParam0->f_1[iVar0 /*3*/], 0) && func_1336(bParam2, 170.5778f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	iVar0 = 34;
	bVar2 = uParam0->f_1[iVar0 /*3*/];
	if (func_894(bVar2) == 8.292232E+24f && func_894(bParam2) == 2.251657E+29f)
	{
		uParam0->f_1[iVar0 /*3*/] = func_1524(bParam2);
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	else if (func_1525(bVar2, bParam1, iVar1))
	{
		bVar2 = uParam0->f_1[18 /*3*/];
		iVar3 = 0;
		if (func_894(bVar2) == 3.381578E-06f && func_1526(32))
		{
			iVar3 |= 1;
		}
		if (func_1336(bParam2, 4.422284E-20f))
		{
			iVar3 |= 2;
		}
		bVar2 = func_1186(Global_1953279.f_83[iVar0 /*12*/].f_9, iVar3);
		if (bVar2 != 0)
		{
			uParam0->f_1[iVar0 /*3*/] = bVar2;
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_1337(iVar0, iParam3);
			func_1355(uParam0, 0, bVar2, iParam3);
		}
	}
	iVar0 = 21;
	if (!func_1339(uParam0->f_1[iVar0 /*3*/], 0) && func_1336(bParam2, 7.182742E-32f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	iVar4 = 23;
	if (!func_1339(uParam0->f_1[iVar0 /*3*/], 0) || (uParam0->f_1[iVar4 /*3*/] != Global_1953279.f_83[iVar4 /*12*/] && func_1336(uParam0->f_1[iVar4 /*3*/], -2.881491E-21f)))
	{
		func_1527(uParam0, iParam3);
	}
}

void func_1348(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_1336(bParam2, 4.528383E-26f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
}

void func_1349(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	switch (func_894(bParam2))
	{
		case 698653232:
			func_1528(uParam0, bParam1, bParam2, iParam4);
			break;
		case 912453393:
			func_1529(uParam0, bParam1, iParam3, iParam4);
			break;
	}
}

void func_1350(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_894(bParam2))
	{
		case -1080198344:
		case 1868067663:
			func_1530(uParam0, bParam1, bParam2, iParam3);
			break;
		case 294388917:
			func_1531(uParam0, bParam1, bParam2, iParam3);
			break;
	}
}

void func_1351(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (func_894(uParam0->f_1[iVar0 /*3*/]) == 3.381578E-06f)
	{
		func_1337(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 23;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_1336(bParam2, 9.484546E+16f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_1527(uParam0, iParam3);
	}
}

void func_1352(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!bParam1)
	{
		iVar0 = 21;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
		{
			if (func_1336(uParam0->f_1[iVar0 /*3*/], 9.484546E+16f))
			{
				uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
				uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			}
			func_1337(iVar0, iParam3);
		}
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_1336(bParam2, -2.881491E-21f))
		{
			func_1527(uParam0, iParam3);
		}
		else
		{
			func_1337(iVar0, iParam3 | 16);
		}
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/].f_1 != -6.7231E+19f)
	{
		return;
	}
	uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
	func_1337(iVar0, iParam3);
	iVar0 = 25;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_1337(iVar0, iParam3);
	}
	iVar0 = 28;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_1337(iVar0, iParam3);
	}
}

void func_1353(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	if (func_1532(2.199934E-35f) && func_1336(bParam2, -4.878666E-06f))
	{
		iVar0 = 27;
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	iVar0 = 32;
	if (!func_1339(uParam0->f_1[iVar0 /*3*/], 0) && func_1336(bParam2, 0.01839931f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
}

void func_1354(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_1336(uParam0->f_1[iVar0 /*3*/], 4.528383E-26f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam2);
	}
}

void func_1355(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_894(bParam2))
	{
		case 1759215194:
			func_1533(uParam0, iParam3);
			break;
		case 1223979091:
		case 2047428024:
			func_1534(uParam0, bParam1, bParam2, iParam3);
			break;
		case 684307653:
			func_1535(uParam0, bParam1, bParam2, iParam3);
			break;
		case 502936876:
			func_1536(uParam0, bParam1, iParam3);
			break;
		case -1740828670:
			func_1537(uParam0, bParam1, bParam2, iParam3);
			break;
		case 344283346:
			func_1538(uParam0, bParam1, iParam3);
			break;
	}
}

void func_1356(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_894(bParam2))
	{
		case 1769055947:
			func_1539(uParam0, bParam1, bParam2, iParam3);
			break;
		case -923693316:
			func_1540(uParam0, bParam1, bParam2, iParam3);
			break;
	}
}

void func_1357(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		func_1541(uParam0, iParam3, 0, 1);
		return;
	}
	iVar0 = 35;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((func_1336(bParam2, 9.000944E-10f) && uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/]) && func_894(bVar1) == -494711.9f)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	if ((func_1336(bParam2, -4.282854E-21f) && uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/]) && func_894(bVar1) == 1.825867E+25f)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	iVar0 = 37;
	if (func_1336(bParam2, -9.697137E-08f) && uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
}

int func_1358(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<17> Var65;
	struct<17> Var82;

	if (func_1542(bParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_715(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_1008(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_1543(&Var1, &iVar62, bParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_1544(bParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_1545(7.184882E+22f, &Var65, 1);
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
			func_1546(iVar64, Var82);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_692(bParam4), bParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_1359(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (func_1542(bParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_1016(*iParam1, &Var0, bParam6, 0, -1))
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
	if (!func_1008(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_23() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -5.45926E-19f;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_1545(7.184882E+22f, &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -5.149929E+33f;
				Var32.f_16 = -1;
				Var32 = iParam5;
				Var32.f_7 = iParam4;
				func_1546(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_692(bParam6), iParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1360(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1361(int iParam0)
{
	if (func_1360(iParam0))
	{
		return true;
	}
	else if (func_1547(iParam0))
	{
		return true;
	}
	return false;
}

void func_1362(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_991(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956862.f_1431.f_26[iParam0] = fParam1;
			break;
		case 1:
			Global_1956862.f_1565.f_2.f_26[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

bool func_1363(int iParam0)
{
	int iVar0;

	iVar0 = func_1364(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 35)
	{
		return false;
	}
	return true;
}

int func_1364(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("NET_PLAYER_ABILITY__STRANGE_MEDICINE"):
			return 18;
		case joaat("NET_PLAYER_ABILITY__FOCUS_FIRE"):
			return 5;
		case joaat("NET_PLAYER_ABILITY__NECESSITY_BREEDS"):
			return 10;
		case joaat("NET_PLAYER_ABILITY__THE_GIFT_OF_FOCUS"):
			return 20;
		case joaat("NET_PLAYER_ABILITY__RIDE_LIKE_THE_WIND"):
			return 33;
		case joaat("NET_PLAYER_ABILITY__FOOL_ME_ONCE"):
			return 32;
		case joaat("NET_PLAYER_ABILITY__GUNSLINGERS_CHOICE"):
			return 34;
		case joaat("NET_PLAYER_ABILITY__COME_BACK_STRONGER"):
			return 3;
		case joaat("NET_PLAYER_ABILITY__WINNING_STREAK"):
			return 24;
		case joaat("NET_PLAYER_ABILITY__KICK_IN_THE_BUTT"):
			return 26;
		case joaat("NET_PLAYER_ABILITY__PEAK_CONDITION"):
			return 14;
		case joaat("NET_PLAYER_ABILITY__THE_SHORT_GAME"):
			return 21;
		case joaat("NET_PLAYER_ABILITY__OVERRIDE_REVENGE_SLOW_TIME"):
			return 25;
		case joaat("NET_PLAYER_ABILITY__IRON_LUNG"):
			return 30;
		case joaat("NET_PLAYER_ABILITY__THE_UNBLINKING_EYE"):
			return 22;
		case 0:
			return 0;
		case joaat("NET_PLAYER_ABILITY__FRIENDS_FOR_LIFE"):
			return 31;
		case joaat("NET_PLAYER_ABILITY__NEVER_WITHOUT_ONE"):
			return 11;
		case joaat("NET_PLAYER_ABILITY__OF_SINGLE_PURPOSE"):
			return 12;
		case joaat("NET_PLAYER_ABILITY__A_MOMENT_TO_RECUPERATE"):
			return 1;
		case joaat("NET_PLAYER_ABILITY__SLIPPERY_BASTARD"):
			return 16;
		case joaat("NET_PLAYER_ABILITY__PAINT_IT_BLACK"):
			return 13;
		case joaat("NET_PLAYER_ABILITY__TAKE_THE_PAIN_AWAY"):
			return 19;
		case joaat("NET_PLAYER_ABILITY__EYE_FOR_AN_EYE"):
			return 4;
		case joaat("NET_PLAYER_ABILITY__COLD_BLOODED"):
			return 2;
		case joaat("NET_PLAYER_ABILITY__HUNKER_DOWN"):
			return 8;
		case joaat("NET_PLAYER_ABILITY__QUITE_AN_INSPIRATION"):
			return 15;
		case joaat("NET_PLAYER_ABILITY__TO_FIGHT_ANOTHER_DAY"):
			return 23;
		case joaat("NET_PLAYER_ABILITY__HORSEMAN"):
			return 7;
		case joaat("NET_PLAYER_ABILITY__LIVE_FOR_THE_FIGHT"):
			return 27;
		case joaat("NET_PLAYER_ABILITY__HANGMAN"):
			return 6;
		case joaat("NET_PLAYER_ABILITY__STRENGTH_IN_NUMBERS"):
			return 29;
		case joaat("NET_PLAYER_ABILITY__SLOW_AND_STEADY"):
			return 17;
		case joaat("NET_PLAYER_ABILITY__LANDONS_PATIENCE"):
			return 9;
		case joaat("NET_PLAYER_ABILITY__SHARPSHOOTER"):
			return 28;
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

bool func_1365(int iParam0)
{
	if (!func_1548(iParam0))
	{
		return false;
	}
	return iParam0 == 0;
}

int func_1366(int iParam0, bool bParam1)
{
	struct<4> Var0;

	Var0 = { func_710(bParam1) };
	return func_1550(Var0, func_1549(iParam0), 0, bParam1);
}

int func_1367(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_1551())
	{
		return 0;
	}
	if (!func_714(bParam0, 0))
	{
		return 0;
	}
	return func_1553(func_1552(bParam0), uParam1, iParam2, iParam3);
}

int func_1368(var uParam0, int iParam1, bool bParam2)
{
	if (!func_1548(iParam1))
	{
		return 0;
	}
	if (func_1554(uParam0))
	{
		func_1555();
	}
	func_1556(iParam1);
	if (bParam2 && func_1557())
	{
		return 0;
	}
	func_1558(iParam1);
	func_1559(uParam0);
	func_1560(iParam1, uParam0, 1);
	return 1;
}

bool func_1369(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_1551())
	{
		return false;
	}
	return func_1553(iParam0, uParam1, iParam2, iParam3);
}

int func_1370(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, int iParam37, bool bParam38)
{
	if (!func_1548(iParam37))
	{
		return 0;
	}
	func_1561(&uParam0, iParam37);
	if (bParam38 && func_1557())
	{
		return 0;
	}
	func_1562(&uParam0, iParam37);
	func_1559(&uParam0);
	func_1560(iParam37, &uParam0, 1);
	return 1;
}

int func_1371(int iParam0)
{
	if (func_407(&(Global_1956862.f_1753), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_1372(int iParam0)
{
	if (func_408(&(Global_1956862.f_1753), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

void func_1373(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_1563(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if ((PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(iVar0) && fParam0 > 0f) && !bParam2)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = PLAYER::_GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(iVar0, fParam0, 0, 0, 1);
	}
	else
	{
		PLAYER::_SPECIAL_ABILITY_DRAIN_BY_AMOUNT(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(iVar0, fVar2);
	}
}

int func_1374(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_2;
		case 1:
			return uParam0->f_10;
		case 2:
			return uParam0->f_6;
		default:
			break;
	}
	return 1;
}

float func_1375(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_3;
		case 1:
			return uParam0->f_11;
		case 2:
			return uParam0->f_7;
		default:
			break;
	}
	return 0f;
}

void func_1376(int iParam0, float fParam1)
{
	Global_17418.f_55.f_2459.f_24[iParam0 /*3*/] = fParam1;
}

int func_1377(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_991(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_1564(iVar0, iParam0, fParam1))
	{
		if (bParam2)
		{
			if (fParam1 >= 1120403456)
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
			}
		}
		if (bParam3)
		{
			func_1565(iParam0, 7000, iParam5);
		}
		func_1566(iVar0, iParam0, fParam1);
		func_1567(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

void func_1378()
{
	if (!Global_1956862.f_1431.f_85)
	{
		return;
	}
	Global_1956862.f_1431.f_85 = 0;
}

void func_1379()
{
	if (!Global_1956862.f_1431.f_92)
	{
		return;
	}
	Global_1956862.f_1431.f_92 = 0;
}

void func_1380()
{
	if (!Global_1956862.f_1431.f_89)
	{
		return;
	}
	Global_1956862.f_1431.f_89 = 0;
}

void func_1381()
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;

	sVar0 = func_1568();
	sVar1 = func_1569();
	bVar2 = (((Global_1956862.f_1431.f_89 && Global_1956862.f_1431.f_92) || (Global_1956862.f_1431.f_89 && Global_1956862.f_1431.f_85)) || (Global_1956862.f_1431.f_85 && Global_1956862.f_1431.f_92));
	bVar3 = (Global_1956862.f_1431.f_89 || Global_1956862.f_1431.f_85);
	if (Global_1956862.f_1431.f_92 && !func_1570())
	{
		if (!Global_1956862.f_1431.f_93)
		{
			GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
			Global_1956862.f_1431.f_93 = 1;
		}
	}
	else if (Global_1956862.f_1431.f_93)
	{
		GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(sVar0);
		Global_1956862.f_1431.f_93 = 0;
	}
	if (bVar3)
	{
		fVar4 = ((MISC::GET_FRAME_TIME() * 1148846080) / 1157234688);
		fVar5 = (1f * fVar4);
		fVar6 = (-1f * fVar4);
		if (bVar2)
		{
			Global_1956862.f_1431.f_95 = (Global_1956862.f_1431.f_95 + fVar5);
			Global_1956862.f_1431.f_91 = (Global_1956862.f_1431.f_91 + fVar6);
			Global_1956862.f_1431.f_87 = (Global_1956862.f_1431.f_87 + fVar6);
		}
		else if (Global_1956862.f_1431.f_89)
		{
			Global_1956862.f_1431.f_95 = (Global_1956862.f_1431.f_95 + fVar6);
			Global_1956862.f_1431.f_91 = (Global_1956862.f_1431.f_91 + fVar5);
			Global_1956862.f_1431.f_87 = (Global_1956862.f_1431.f_87 + fVar6);
		}
		else if (Global_1956862.f_1431.f_85)
		{
			Global_1956862.f_1431.f_95 = (Global_1956862.f_1431.f_95 + fVar6);
			Global_1956862.f_1431.f_91 = (Global_1956862.f_1431.f_91 + fVar6);
			Global_1956862.f_1431.f_87 = (Global_1956862.f_1431.f_87 + fVar5);
		}
		Global_1956862.f_1431.f_95 = func_1096(Global_1956862.f_1431.f_95, 0f, 1f);
		Global_1956862.f_1431.f_87 = func_1096(Global_1956862.f_1431.f_87, 0f, 1f);
		Global_1956862.f_1431.f_91 = func_1096(Global_1956862.f_1431.f_91, 0f, 1f);
		if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1) && !func_1201())
		{
			GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
		}
		GRAPHICS::_ANIMPOSTFX_SET_POTENCY(sVar1, 1, Global_1956862.f_1431.f_91);
		GRAPHICS::_ANIMPOSTFX_SET_POTENCY(sVar1, 2, Global_1956862.f_1431.f_87);
		GRAPHICS::_ANIMPOSTFX_SET_POTENCY(sVar1, 3, Global_1956862.f_1431.f_95);
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
	{
		Global_1956862.f_1431.f_95 = 0f;
		Global_1956862.f_1431.f_91 = 0f;
		Global_1956862.f_1431.f_87 = 0f;
		GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(sVar1);
	}
	if (Global_1956862.f_1431.f_88)
	{
		fVar7 = PLAYER::_GET_PLAYER_HEALTH(Global_1295619.f_149[Global_1295619]);
		fVar8 = (IntToFloat(PED::GET_PED_MAX_HEALTH(Global_1295619.f_3)) * 1036831949);
		func_1571(fVar7, fVar8);
	}
	else
	{
		func_1572();
	}
}

int func_1382(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_1360(iParam0))
		{
			fParam1 = 1106247680; /* Float: 30f */
		}
		else
		{
			fParam1 = 1106247680; /* Float: 30f */
		}
	}
	else if (fParam1 <= 0f)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_1573(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_1574(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_1573(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_1575(3.279095E+25f);
			func_1576(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_1573(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_1577(-1, 0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_1575(2.372604E-26f);
			func_1578(0, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/].f_1 = fParam1;
			break;
		case 18:
			func_1578(1, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/].f_1 = fParam1;
			break;
		case 20:
			func_1578(2, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/].f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_1383(bool bParam0)
{
	return func_1336(bParam0, 5.168749E+07f);
}

bool func_1384(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_23() == -1)
	{
		if (func_1217(bParam0) && func_1579(bParam0))
		{
			func_1580(bParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (bParam0 == 9605447f)
	{
		bParam2 = true;
	}
	else if (bParam0 == -3.273909E-18f)
	{
		return false;
	}
	return true;
}

bool func_1385(bool bParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_1581(bParam0, iParam1);
	Var0 = { func_717(bParam0, 0, 1) };
	iVar5 = func_1218(bParam0, &Var0, 0, 0);
	iVar6 = func_400(bParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_1336(bParam0, -1.690907E-35f))
		{
			func_1398(674, 1);
		}
		else if (func_23() == -1)
		{
			func_1398(673, 0);
		}
	}
	if (func_1007(bParam0, &Var0, *iParam1, 0, 0, -1, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_1386(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_1582())
	{
		return;
	}
	switch (func_1583(bParam0, -60352.49f))
	{
		case -1565009253:
		case -1420737577:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1940072.f_70.f_5 = 1;
			Global_1940072.f_70.f_6 = 0;
			Global_1940072.f_70.f_1 = bParam0;
			break;
	}
}

bool func_1387(bool bParam0, int iParam1)
{
	if (!func_714(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam0, iParam1);
}

bool func_1388(int iParam0)
{
	if (!func_1584(iParam0))
	{
		return false;
	}
	return func_1585(iParam0);
}

void func_1389(int iParam0)
{
	if (!func_1584(iParam0))
	{
		return;
	}
	func_1586(iParam0);
	func_1587(iParam0);
}

void func_1390(bool bParam0)
{
	if (func_1336(bParam0, -1.640085E-16f))
	{
		func_1588(-2.462866E+08f, 0, 255, 0, 0);
	}
	else if (func_1336(bParam0, -4.561297E+28f))
	{
		func_1588(-4249.272f, 0, 255, 0, 0);
	}
	else if (func_1336(bParam0, 2.133228E-14f))
	{
		func_1588(-5.046843E+11f, 0, 255, 0, 0);
	}
	else if (func_1336(bParam0, 5.050617E+08f))
	{
		func_1588(2.629104E-17f, 0, 255, 0, 0);
	}
}

bool func_1391(bool bParam0, bool bParam1)
{
	bool bVar0;

	switch (bParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_CONFUSE"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_DISORIENT"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_DRAIN"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_TRAIL"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_WOUND"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_DYNAMITE"):
			bVar0 = -7.135455E-16f;
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			bVar0 = -7.135455E-16f;
			break;
		case joaat("AMMO_MOLOTOV"):
			bVar0 = 2.870844E+29f;
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE"):
			bVar0 = 2.870844E+29f;
			break;
		case joaat("AMMO_TOMAHAWK"):
			bVar0 = -4.049688E-16f;
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			bVar0 = 2.176132E+38f;
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			bVar0 = -4.049688E-16f;
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			bVar0 = -4.049688E-16f;
			break;
		case joaat("AMMO_BOLAS"):
			bVar0 = 1284.666f;
			break;
		case joaat("AMMO_POISONBOTTLE"):
			bVar0 = -1.27948E+18f;
			break;
		case joaat("AMMO_HATCHET"):
			bVar0 = 5.420628E-33f;
			break;
		case joaat("AMMO_HATCHET_HUNTER"):
			bVar0 = 1.96266E-13f;
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
			bVar0 = -1.776182E+22f;
			break;
		case joaat("AMMO_HATCHET_ANCIENT"):
			bVar0 = 1.387712E-18f;
			break;
		case joaat("AMMO_HATCHET_CLEAVER"):
			bVar0 = -5.528462E+28f;
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT"):
			bVar0 = -0.02419633f;
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			bVar0 = -7.093211E-30f;
			break;
		case joaat("AMMO_HATCHET_HEWING"):
			bVar0 = 4.318794E-22f;
			break;
		case joaat("AMMO_HATCHET_VIKING"):
			bVar0 = 1.396023E+32f;
			break;
		default:
			break;
	}
	if (func_714(bVar0, 0))
	{
		if (bParam1)
		{
			if (func_1589(bVar0) || func_1590(bVar0))
			{
				return bVar0;
			}
		}
		else
		{
			return bVar0;
		}
	}
	return bParam0;
}

bool func_1392(bool bParam0, bool bParam1)
{
	if (!func_714(bParam0, 0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return bParam0;
	}
	if (!bParam1)
	{
	}
	return false;
}

void func_1393(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 != -1)
	{
		return;
	}
	if (!func_1591(bParam0))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(iVar0, true);
}

bool func_1394(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
	{
		Var0 = { func_717(bParam0, 0, 1) };
		if (func_1012(bParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -5.45926E-19f;
			if (func_1013(bParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_711(bParam0, Var0, Var0.f_4, 0) };
				func_1359(bParam0, &Var27, &Var0, 1, -5.149929E+33f, 1, 0);
			}
		}
	}
	if (func_1008(0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_33, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
		{
			return false;
		}
		func_1395(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
		func_1592(bParam0, iParam1);
		return true;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
	{
		return false;
	}
	if (iParam1 > 0)
	{
	}
	WEAPON::GIVE_WEAPON_TO_PED(Global_33, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return true;
}

bool func_1395(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_709(bParam0))
	{
		return false;
	}
	if (!func_1008(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, bParam0, iParam1, iParam2);
	return true;
}

bool func_1396(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	bool bVar7;

	bVar0 = func_1392(bParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_23() == -1)
		{
			func_1393(bVar0);
			if (iParam1 == 3787186f)
			{
				func_1593(bVar0);
			}
		}
		if (!func_1007(bParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_1580(bParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1594(bVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(bVar0))
			{
				func_1394(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == -1.197024E-12f || WEAPON::_IS_WEAPON_BINOCULARS(bVar0))
			{
				func_1394(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(bVar0))
			{
				func_1394(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(bVar0))
			{
				if (bVar0 == 3.3488E-21f && !func_1595())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(bParam0))
				{
				}
				else if (!func_1596(bVar0))
				{
					func_1394(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_1394(bVar0, WEAPON::GET_WEAPON_CLIP_SIZE(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(bVar0))
			{
				bVar7 = func_1597(Global_33, 2, 0, 1);
				if ((((func_1591(bVar7) && !Global_26688) && bVar7 != bVar0) && !func_1406(-0.0002099206f, 1)) && bParam4)
				{
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_33, bVar7);
				}
				if (func_1591(bVar7) && func_1406(-0.0002099206f, 1))
				{
					if (!func_1394(bVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_1394(bVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_1394(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(true) != 0 && iParam1 == 3787186f)
	{
		func_1398(515, 1);
	}
	return true;
}

bool func_1397(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!func_709(bParam0))
	{
		return false;
	}
	bVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	if (func_1591(bVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_33, &iVar2, bVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::IS_WEAPON_BOW(bVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::GET_WEAPON_CLIP_SIZE(bVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_1409(func_1598(bParam0), func_1408(bParam0, 0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_1008(0))
	{
		if (func_1395(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_403(bParam0, *iParam1, iParam2);
	}
	return false;
}

void func_1398(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_1599(iParam0, &iVar0, &iVar1);
	if (!func_1600(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1601(iVar0, iVar1);
}

bool func_1399()
{
	return false;
}

int func_1400(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_23() == 0)
	{
		func_1414(iParam0, 0);
		return 0;
	}
	iVar0 = func_1602(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_1603(iVar0, sParam4, iParam5, 0);
	}
	func_1604(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_1401(bool bParam0)
{
}

void func_1402(bool bParam0)
{
}

void func_1403(bool bParam0)
{
}

void func_1404(bool bParam0)
{
}

void func_1405()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-9.596595E-08f) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-9.596595E-08f, -3.936833E-09f, 1);
	}
}

bool func_1406(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_714(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_1009(bParam0);
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
			if (!func_1605(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_1606(bParam0))
			{
				return true;
			}
			break;
	}
	return func_1049(bParam0, 0, 0, 0) >= iParam1;
}

void func_1407(bool bParam0, int iParam1)
{
	var uVar0;

	func_1419(bParam0, iParam1, &uVar0);
}

bool func_1408(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_714(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_1607(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

void func_1409(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_1599(iParam0, &iVar0, &iVar1);
	if (!func_1600(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1608(iParam0, 1024))
	{
		return;
	}
	func_1601(iVar0, iVar1);
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/] = bParam1;
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_1410(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_1599(iParam0, &iVar0, &iVar1);
	if (!func_1600(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1608(iParam0, 1024))
	{
		return;
	}
	func_1601(iVar0, iVar1);
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/] = fParam1;
	if (!bParam3)
	{
		Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	}
	else
	{
		Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;
	}
}

void func_1411(bool bParam0)
{
	switch (*bParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*bParam0 = -1.177047E+07f;
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*bParam0 = 2.106782E+14f;
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*bParam0 = 1.62503E-31f;
			break;
	}
}

void func_1412(bool bParam0)
{
	if (func_23() != -1)
	{
		return;
	}
}

bool func_1413()
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

int func_1414(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_1609(&Var4, 2.95884E+10f);
	return func_1610(iParam0, &Var4, &uVar0, iParam1, 0);
}

struct<2> func_1415(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_714(bParam0, 0))
	{
		return Var0;
	}
	if (func_1336(bParam0, -8.087424E+27f))
	{
		if (func_23() == -1)
		{
			if (func_1336(bParam0, -3.480943E+19f))
			{
				return func_522(4.052717E-32f);
			}
			else
			{
				return func_522(9918.3f);
			}
		}
	}
	else if (func_1336(bParam0, -3.480943E+19f))
	{
		return func_522(-18395.16f);
	}
	if (func_1336(bParam0, 4.091206E+36f))
	{
		return func_522(3.674458E+22f);
	}
	return Var2;
}

void func_1416(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			break;
	}
}

void func_1417(bool bParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_1611(Global_1902818.f_37);
	func_1613(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1612(bParam0), 0, 4.808429E-35f, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_1418(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	float fVar11;
	int iVar12;
	float fVar13;
	char* sVar14;
	char* sVar15;
	int iVar16;
	char* sVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	char* sVar21;
	char cVar22[128];

	if (!func_714(bParam0, 0))
	{
		return;
	}
	else if (bParam0 == 4.553053E+26f)
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_1614() || bParam6)
	{
		func_1615(bParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_1616(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (bParam0 == 6.911906E+22f)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_1616(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_1387(bParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_1009(bParam0);
	iVar10 = 0;
	fVar11 = 4.975531E-10f;
	if ((((((((iVar6 == 6.919076E-28f && bParam0 != 1.024642E-23f) && bParam0 != -0.0001582362f) && bParam0 != 6.749065E-23f) && bParam0 != -4.382751E+30f) && bParam0 != 0.0002301198f) && bParam0 != 6.911906E+22f) && !func_1336(bParam0, -5.215192E-33f)) && !func_1336(bParam0, 5.48031E-34f))
	{
		iVar10 = 1.334267E-16f;
		fVar11 = 1.334267E-16f;
	}
	iVar12 = func_894(bParam0);
	if (((((((iVar6 == -287.6557f || iVar6 == 2.678246E-15f) || iVar12 == -5.930502E-22f) || iVar12 == 6.813211E-30f) || iVar12 == 3.588834E-09f) || iVar12 == -1.005061E+16f) || iVar12 == 8.083898E+09f) || iVar12 == 272038.9f)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_1617(bParam0, &Var7, fVar11, iVar10, 0, -2.889029E+24f))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 1.435927E-34f)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	fVar13 = 4.808429E-35f;
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		fVar13 = 1.058639E-16f;
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_1336(bParam0, 6.834376E-22f))
	{
		sVar17 = func_1618(bParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(bParam0))
	{
		if (!bVar0 && !bParam2)
		{
			fVar13 = -1.284544E+08f;
		}
		else
		{
			fVar13 = -2.926177E-30f;
		}
	}
	if (func_1336(bParam0, 9.618302E+26f))
	{
		fVar13 = 3.405875E-36f;
	}
	if (func_1619(bParam0))
	{
		if (!bVar0 && !bParam2)
		{
			fVar13 = -1.101616E-25f;
		}
		else
		{
			fVar13 = -2.926177E-30f;
		}
	}
	bVar18 = func_1408(bParam0, 0);
	if ((func_1620(iVar12) && func_1336(bParam0, -7.13245E+27f)) && bVar18 != 0)
	{
		bVar18 = func_1621(bParam0);
	}
	else if (func_1009(bParam0) == -42.1084f)
	{
		bVar19 = func_1622(bParam0);
		if (func_714(bVar19, 0))
		{
			bVar18 = func_1408(bVar19, 0);
		}
	}
	if (func_1623(bParam0, 3.62898E+13f) && bParam3)
	{
		iVar20 = 1;
		func_1624(bParam0, -982726.7f, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_843(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, bVar18), iVar1), fVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::VAR_STRING(0, bVar18);
	}
	if ((((((iVar12 == -6.84366E-28f && bParam0 != -2.296707E-23f) && bParam0 != 2.515798E+09f) && bParam0 != -3.916588E+30f) || ((iVar12 == 1.226722E-30f && bParam0 != 9.94413E+23f) && bParam0 != -2.419822E+17f)) || (iVar12 == 6.813211E-30f && bParam0 != -9.486547E+07f)) || (iVar12 == -1.005061E+16f && bParam0 != -8.665711E-37f))
	{
		sVar21 = MISC::VAR_STRING(0, func_1625(bParam0, -9.085264E+22f));
	}
	if (iVar12 == -1.955052E+34f || iVar12 == 4.029065E+31f)
	{
		StringCopy(&cVar22, "", 128);
		if (func_1626(bParam0, &cVar22))
		{
			sVar21 = func_1438(func_1627(cVar22), 4.808429E-35f);
		}
	}
	func_1613(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, fVar13, sVar15, sVar14, 0, 1);
}

void func_1419(bool bParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*iParam1 = 2.868836E+26f;
			*uParam2 = 1.33835E+22f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*iParam1 = -6.44427E+07f;
			*uParam2 = 1.33835E+22f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*iParam1 = -1.5597E+17f;
			*uParam2 = 984456.8f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = -1.340805E-26f;
			*uParam2 = -1.163197E-36f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*iParam1 = -0.0004557966f;
			*uParam2 = 5.999469E+31f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*iParam1 = -7.543728E-18f;
			*uParam2 = 5.999469E+31f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*iParam1 = -4.09862E-21f;
			*uParam2 = 6.597174E-09f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = -1.78904E-16f;
			*uParam2 = -1.54477E-12f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*iParam1 = -4.051864E-08f;
			*uParam2 = 4.104352E-31f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*iParam1 = 6.371044E+11f;
			*uParam2 = 4.104352E-31f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*iParam1 = -2.04749E+08f;
			*uParam2 = 1.48591E+21f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = 3.971968E-06f;
			*uParam2 = 3.147558E+28f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*iParam1 = -9.057481E+30f;
			*uParam2 = -1.339106E-09f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*iParam1 = 2.184573E-20f;
			*uParam2 = -1.339106E-09f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*iParam1 = -9.738313E+24f;
			*uParam2 = -1.21702E+18f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = 39255.64f;
			*uParam2 = 1.256526E-30f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*iParam1 = 0.0001116685f;
			*uParam2 = -2.686844E-29f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*iParam1 = -1.441753E-05f;
			*uParam2 = -2.686844E-29f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*iParam1 = -8.900574E-37f;
			*uParam2 = 1.249562E-27f;
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*iParam1 = -4.758429E+16f;
			*uParam2 = 4.067655E+37f;
			break;
	}
}

void func_1420(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_1421()
{
	return Global_1300340.f_288;
}

int func_1422()
{
	return Global_1300340.f_150.f_4;
}

void func_1423(struct<2> Param0, int iParam2)
{
	if (!func_73(Param0))
	{
		func_1154(&(Global_1900460.f_1[iParam2 /*2*/]));
	}
	else
	{
		Global_1900460.f_1[iParam2 /*2*/] = { Param0 };
	}
	func_1056(Param0, 0, 1, -1);
}

bool func_1424(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_73(Param0))
	{
		return false;
	}
	if (!func_73(Param2))
	{
		return true;
	}
	iVar0 = func_666(Param0);
	iVar1 = func_666(Param2);
	if (iVar1 == iVar0)
	{
		if (bParam4)
		{
			return true;
		}
	}
	if (iVar1 == 2 || iVar1 == 7)
	{
		if (bParam4 && (iVar0 == 2 || iVar0 == 7))
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 2 || iVar0 == 7)
	{
		return true;
	}
	if (iVar1 == 6)
	{
		return false;
	}
	if (iVar0 == 6)
	{
		return true;
	}
	if (iVar1 == 5)
	{
		return false;
	}
	if (iVar0 == 5)
	{
		return true;
	}
	if (iVar1 == 3)
	{
		if (bParam4 && iVar0 == 3)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 3)
	{
		return true;
	}
	if (iVar1 == 4)
	{
		if (bParam4 && iVar0 == 4)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 4)
	{
		return true;
	}
	return false;
}

bool func_1425(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_1628(iParam0))
	{
		return false;
	}
	if (func_1629(iParam0, uParam1, &uVar0))
	{
		func_1630(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_1426(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (Global_1205789.f_129 >= 32)
	{
		Global_1205789.f_129 = 32;
		return;
	}
	if (iParam1 >= Global_1205789.f_129)
	{
		iParam1 = -1;
	}
	if (iParam1 <= -1)
	{
		Global_1205789[Global_1205789.f_129 /*4*/] = { *uParam0 };
		Global_1205789.f_129++;
		return;
	}
	iVar0 = iParam1;
	iVar1 = (Global_1205789.f_129 - 1);
	Var2.f_1 = -1;
	Var2.f_1.f_1 = -1;
	while (iVar1 >= iVar0)
	{
		Var2 = { Global_1205789[iVar1 /*4*/] };
		Global_1205789[iVar1 /*4*/] = { Global_1205789[iVar1 + 1 /*4*/] };
		Global_1205789[iVar1 + 1 /*4*/] = { Var2 };
		iVar1 = (iVar1 - 1);
	}
	Global_1205789[iParam1 /*4*/] = { *uParam0 };
	Global_1205789.f_129++;
}

int func_1427()
{
	int iVar0;

	iVar0 = Global_1295611.f_2.f_4;
	if (!func_1631(iVar0))
	{
		iVar0 = MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return iVar0;
}

int func_1428(int iParam0, int iParam1, int iParam2)
{
	return func_1632(iParam0, iParam1, iParam2);
}

bool func_1429(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_1633(bParam1, bParam2, bParam3);
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

int func_1430()
{
	int iVar0;

	iVar0 = func_1634(1.353158E-34f, 8.497754E-37f, 1, 0, 1, 0);
	if (!func_1631(iVar0))
	{
		iVar0 = MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return iVar0;
}

int func_1431(int iParam0, char* sParam1, float fParam2, bool bParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<17> Var6;
	struct<17> Var23;

	iVar0 = -1;
	Var1 = { func_717(3.996812E+36f, 1, 0) };
	Var6 = { func_1635(3.996812E+36f, Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = fParam2;
	iVar0 = func_1545(7.184882E+22f, &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var23.f_7 = -5.149929E+33f;
		Var23.f_16 = -1;
		StringCopy(&(Var23.f_12), sParam1, 32);
		func_1546(iVar0, Var23);
	}
	return iVar0;
}

void func_1432()
{
	int iVar0;

	VOLUME::_0x748C5F51A18CB8F0(false);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_1636(iVar0))
		{
			func_1637(iVar0);
		}
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(true);
}

int func_1433(int iParam0)
{
	return Global_1109780.f_193[iParam0 /*8*/];
}

void func_1434(int iParam0)
{
	Global_1109780.f_193[Global_1295619 /*8*/] = iParam0;
	func_1638(&(Global_1108965.f_775.f_30));
}

bool func_1435(struct<42> Param0, var uParam42)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Param0.f_41))
	{
		return DATABINDING::DATABINDING_IS_ENTRY_VALID(Param0);
	}
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Param0.f_41);
}

int func_1436()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar4 = DATABINDING::DATABINDING_READ_INT(Global_1940239.f_245.f_14[0 /*43*/].f_29);
	iVar5 = DATABINDING::DATABINDING_READ_INT(Global_1940239.f_245.f_14[0 /*43*/].f_39);
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = DATABINDING::DATABINDING_READ_INT(Global_1940239.f_245.f_14[iVar0 /*43*/].f_29);
		iVar2 = DATABINDING::DATABINDING_READ_INT(Global_1940239.f_245.f_14[iVar0 /*43*/].f_39);
		if (iVar1 < iVar4)
		{
			iVar3 = iVar0;
			iVar4 = iVar1;
			iVar5 = iVar2;
		}
		else if (iVar1 == iVar4)
		{
			if (iVar2 < iVar5)
			{
				iVar3 = iVar0;
				iVar4 = iVar1;
				iVar5 = iVar2;
			}
		}
		iVar0++;
	}
	func_656(Global_1940239.f_245.f_14[iVar3 /*43*/]);
	return iVar3;
}

void func_1437(var uParam0, int iParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1144(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1144(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1144(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1144(57), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1144(58), Param10.f_4);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1144(60), Param10.f_5);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1144(59), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = -5.222598E+14f;
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1144(61), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_1144(62), "");
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1144(63), Param10.f_8);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1144(64), Param10.f_9);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1144(65), Param10.f_10);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1144(71), Param10.f_11);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1144(66), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = -5.222598E+14f;
	}
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1144(68), Param10.f_13);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1144(69), Param10.f_14);
	uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1144(70), Param10.f_15);
}

char* func_1438(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_843(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_1439(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, bool bParam13, bool bParam14, var uParam15, var uParam16)
{
	struct<10> Var0;
	struct<8> Var13;
	int iVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_9 = uParam4;
	Var0.f_9.f_1 = uParam5;
	Var0.f_9.f_2 = uParam6;
	Var0.f_9.f_3 = uParam7;
	Var0.f_4.f_2 = uParam15;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = uParam16;
	iVar21 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&Var0, &Var13, bParam13, bParam14);
	return iVar21;
}

int func_1440(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
{
	struct<10> Var0;
	struct<10> Var13;
	int iVar23;

	Var0 = -2;
	Var0 = uParam11;
	Var0.f_1 = uParam12;
	Var0.f_2 = uParam13;
	Var0.f_3 = iParam15;
	Var0.f_9 = uParam7;
	Var0.f_9.f_1 = uParam8;
	Var0.f_9.f_2 = uParam9;
	Var0.f_9.f_3 = uParam10;
	Var0.f_4.f_2 = uParam18;
	Var13.f_9 = 1;
	Var13 = uParam14;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = uParam19;
	iVar23 = UIFEED::_UI_FEED_POST_SAMPLE_NOTIFICATION(&Var0, &Var13, iParam16, iParam17);
	return iVar23;
}

int func_1441(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, bool bParam12, bool bParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	int iVar21;

	Var0 = -2;
	Var0 = uParam7;
	Var0.f_1 = uParam8;
	Var0.f_2 = uParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = uParam4;
	Var0.f_4.f_1 = uParam6;
	Var0.f_4.f_2 = uParam5;
	Var13.f_7 = 1;
	Var13 = uParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	iVar21 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&Var0, &Var13, bParam12, bParam13);
	return iVar21;
}

int func_1442(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
{
	struct<5> Var0;
	struct<10> Var13;
	int iVar23;

	Var0 = -2;
	Var0 = uParam10;
	Var0.f_1 = uParam11;
	Var0.f_2 = uParam12;
	Var0.f_3 = iParam14;
	Var0.f_4 = uParam7;
	Var0.f_4.f_1 = uParam9;
	Var0.f_4.f_2 = uParam8;
	Var13.f_9 = 1;
	Var13 = uParam13;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = 1;
	iVar23 = UIFEED::_UI_FEED_POST_SAMPLE_NOTIFICATION(&Var0, &Var13, iParam15, iParam16);
	return iVar23;
}

int func_1443(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, bool bParam13, bool bParam14)
{
	struct<5> Var0;
	struct<8> Var13;
	int iVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = 1;
	iVar21 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&Var0, &Var13, bParam13, bParam14);
	return iVar21;
}

int func_1444(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	struct<5> Var0;
	struct<8> Var13;
	int iVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = uParam2;
	Var13.f_4 = uParam3;
	Var13.f_5 = uParam4;
	Var13.f_7 = 1;
	iVar21 = UIFEED::_UI_FEED_POST_RANKUP_TOAST(&Var0, &Var13, iParam13, iParam14);
	return iVar21;
}

int func_1445(char* sParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	int iVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = fParam2;
	Var13.f_5 = fParam3;
	Var13.f_7 = 1;
	iVar21 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&Var0, &Var13, bParam9, bParam10);
	return iVar21;
}

void func_1446(struct<2> Param0)
{
	if (func_658(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_658(Param0)))
	{
		STATS::_0x99230691875FC218(func_666(Param0), func_658(Param0), Global_34);
	}
}

Vector3 func_1447(vector3 vParam0, float fParam3)
{
	float fVar0;

	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_1448(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return func_1302();
		case 4:
			return 4.808429E-35f;
		case 9:
			return func_1301();
		case 10:
			return 4.808429E-35f;
		case 23:
			return 6.6361E+21f;
		case 22:
			return -180.0783f;
		case 24:
			return NaNf;
		case 18:
			return 4.808429E-35f;
		case 25:
			return func_1301();
		case 30:
			return func_1301();
		default:
			break;
	}
	return 0;
}

char* func_1449(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "timerString";
		case 1:
			return "isTimerLow";
		case 2:
			return "leftScore";
		case 5:
			return "leftScoreVisible";
		case 3:
			return "leftScoreColor";
		case 4:
			return "leftScoreTextColor";
		case 8:
			return "rightScore";
		case 11:
			return "rightScoreVisible";
		case 9:
			return "rightScoreColor";
		case 10:
			return "rightScoreTextColor";
		case 14:
			return "visible";
		case 15:
			return "enabled";
		case 16:
			return "text";
		case 17:
			return "meterValue";
		case 18:
			return "meterColor";
		case 19:
			return "meterVisible";
		case 20:
			return "txn";
		case 21:
			return "txd";
		case 22:
			return "secondaryTxn";
		case 23:
			return "secondaryTxd";
		case 24:
			return "secondaryImgColor";
		case 25:
			return "imgColor";
		case 26:
			return "isIconBackgroundVisible";
		case 27:
			return "iconEnabled";
		case 28:
			return "overlayTxn";
		case 29:
			return "overlayTxd";
		case 30:
			return "overlayColor";
		case 31:
			return "overlayVisible";
		case 32:
			return "meterThirdsVisible";
		case 33:
			return "showAlternateIcons";
		case 34:
			return "showBlinkIcon";
		case 35:
			return "showPulse";
		case 36:
			return "countDownTimer";
		case 37:
			return "isVisible";
		default:
			break;
	}
	return "";
}

char* func_1450(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "00:00";
		case 2:
			return "0";
		case 8:
			return "0";
		case 16:
			return "";
		case 21:
			return "";
		case 20:
			return "";
		case 29:
			return "";
		case 28:
			return "";
		default:
			break;
	}
	return "";
}

int func_1451(int iParam0)
{
	return 0;
}

float func_1452(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 0f;
		case 13:
			return 0f;
		case 17:
			return 0f;
		default:
			break;
	}
	return 0f;
}

int func_1453(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 5:
			return 1;
		case 6:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 14:
			return 1;
		case 15:
			return 1;
		case 19:
			return 0;
		case 26:
			return 0;
		case 27:
			return 1;
		case 31:
			return 0;
		case 32:
			return 0;
		case 33:
			return 0;
		case 34:
			return 0;
		case 35:
			return 0;
		case 37:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_1454(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = Local_155[iParam0 /*8*/].f_3[iParam1];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		OBJECT::SET_OBJECT_TINT_INDEX(iVar0, iParam2);
	}
}

void func_1455(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939421[iParam0 /*16*/].f_10)))
	{
		return;
	}
	Global_1939421[iParam0 /*16*/] = { Var0 };
	Global_1939421.f_161 = (Global_1939421.f_161 - 1);
	if (Global_1939421.f_161 < 0)
	{
		Global_1939421.f_161 = 0;
	}
}

void func_1456(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

bool func_1457()
{
	return Global_3145858.f_61251[0 /*3*/].f_1 != 0;
}

void func_1458(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<8> Var7;
	char[] cVar15[8];
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	float fVar21[8];
	var uVar30[8];
	int iVar39;
	float fVar40;
	bool bVar41;
	float fVar42;
	char* sVar43;

	iVar4 = 0;
	iVar5 = 32;
	iVar6 = PLAYER::PLAYER_ID();
	bVar16 = Global_1049333[0 /*3*/].f_1 == -0.02260292f;
	bVar17 = Global_1049333[0 /*3*/].f_1 == 3.077718E+22f;
	bVar18 = Global_1049333[0 /*3*/].f_1 == 2.175983E+37f;
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar2], "Position", "");
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar2], "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar2], "GamertagColor", 0);
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar2], "StatPriority", "");
		iVar2++;
	}
	bVar19 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (bVar16 && uParam0->f_150 > 0)
	{
		bVar20 = MISC::IS_BIT_SET(uParam0->f_159, 5);
		if ((bVar17 || bVar18) && func_1639() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar21[iVar0] = BUILTIN::TO_FLOAT(Global_1051030[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if ((*uParam1)[iVar0 /*23*/] != -1 && (*uParam1)[iVar0 /*23*/] < 8)
				{
					if (func_1640(uParam1[iVar0 /*23*/], 0) != -1f)
					{
						fVar21[(*uParam1)[iVar0 /*23*/]] = (fVar21[(*uParam1)[iVar0 /*23*/]] + func_1640(uParam1[iVar0 /*23*/], 0));
					}
				}
				iVar0++;
			}
		}
		iVar5 = uParam0->f_150;
		func_1480(iParam2, &uVar30, uParam0->f_150, bVar19);
		func_1481(uParam0, iParam3, &uVar30, &iVar4, &iVar5);
		iVar2 = 0;
		while (iVar2 <= (iVar5 - 1))
		{
			iVar39 = uVar30[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar4)
			{
				if (iVar39 < 8 && iVar39 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar2 + 1, 8);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Position", &cVar15);
						Var7 = { func_1641(iVar39) };
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &Var7);
						fVar40 = func_1642(iVar39, iParam4, uParam0->f_150, bVar20, iParam4 == iVar39, MISC::IS_BIT_SET(uParam0->f_160, 14));
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar3], "GamertagColor", fVar40);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "StatPriority", MISC::_GET_STRING_FROM_FLOAT(fVar21[iVar39], uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_1483(uParam1, iParam3, &iVar4, &iVar5);
		iVar1 = 0;
		while (iVar1 <= iVar5)
		{
			if (iVar3 == 0 || iVar1 >= iVar4)
			{
				if (func_1460(&((uParam1[iVar1 /*23*/])->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar1 + 1, 8);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Position", &cVar15);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &((uParam1[iVar1 /*23*/])->f_14.f_1));
						bVar41 = iVar6 == (uParam1[iVar1 /*23*/])->f_14;
						fVar42 = func_1463(uParam0, uParam1, iVar1, iVar6, bVar41);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar3], "GamertagColor", fVar42);
						sVar43 = "";
						sVar43 = MISC::_GET_STRING_FROM_FLOAT(func_1640(uParam1[iVar1 /*23*/], 0), 0);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "StatPriority", sVar43);
					}
				}
			}
			iVar1++;
		}
	}
}

void func_1459(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	struct<8> Var14;
	char[] cVar22[8];
	bool bVar23;
	bool bVar24;
	float fVar25[8];
	var uVar34[8];
	int iVar43;
	float fVar44;
	bool bVar45;
	float fVar46;
	char* sVar47;
	int iVar48;

	iVar5 = 0;
	iVar6 = 32;
	bVar7 = MISC::IS_BIT_SET(uParam0->f_159, 3);
	bVar8 = MISC::IS_BIT_SET(uParam0->f_159, 23);
	bVar9 = MISC::IS_BIT_SET(uParam0->f_159, 24);
	bVar10 = MISC::IS_BIT_SET(uParam0->f_159, 25);
	bVar11 = MISC::IS_BIT_SET(uParam0->f_160, 10);
	bVar12 = MISC::IS_BIT_SET(uParam0->f_159, 28);
	iVar13 = PLAYER::PLAYER_ID();
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar2], "Position", "");
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar2], "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar2], "GamertagColor", 0);
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar2], "StatPriority", "");
		iVar2++;
	}
	bVar23 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (bVar12 && uParam0->f_150 > 0)
	{
		bVar24 = MISC::IS_BIT_SET(uParam0->f_159, 5);
		if ((bVar10 || bVar8) && func_1639() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar25[iVar0] = BUILTIN::TO_FLOAT(Global_1051030[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if ((*uParam1)[iVar0 /*23*/] != -1 && (*uParam1)[iVar0 /*23*/] < 8)
				{
					if (bVar9)
					{
						if ((uParam1[iVar0 /*23*/])->f_1 != -1f)
						{
							fVar25[(*uParam1)[iVar0 /*23*/]] = (fVar25[(*uParam1)[iVar0 /*23*/]] + (uParam1[iVar0 /*23*/])->f_1);
						}
					}
					else if (bVar8)
					{
						if ((uParam1[iVar0 /*23*/])->f_5 != -1f)
						{
							fVar25[(*uParam1)[iVar0 /*23*/]] = (fVar25[(*uParam1)[iVar0 /*23*/]] + (uParam1[iVar0 /*23*/])->f_5);
						}
					}
					else if (bVar11)
					{
						if ((uParam1[iVar0 /*23*/])->f_8 != -1f)
						{
							fVar25[(*uParam1)[iVar0 /*23*/]] = (fVar25[(*uParam1)[iVar0 /*23*/]] + (uParam1[iVar0 /*23*/])->f_8);
						}
					}
					else if ((uParam1[iVar0 /*23*/])->f_1 != -1f)
					{
						fVar25[(*uParam1)[iVar0 /*23*/]] = (fVar25[(*uParam1)[iVar0 /*23*/]] + (uParam1[iVar0 /*23*/])->f_1);
					}
				}
				iVar0++;
			}
		}
		iVar6 = uParam0->f_150;
		func_1480(iParam2, &uVar34, uParam0->f_150, bVar23);
		func_1481(uParam0, iParam3, &uVar34, &iVar5, &iVar6);
		iVar2 = 0;
		while (iVar2 <= (iVar6 - 1))
		{
			iVar43 = uVar34[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar5)
			{
				if (iVar43 < 8 && iVar43 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar2 + 1, 8);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Position", &cVar22);
						Var14 = { func_1641(iVar43) };
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &Var14);
						fVar44 = func_1642(iVar43, iParam4, uParam0->f_150, bVar24, iParam4 == iVar43, MISC::IS_BIT_SET(uParam0->f_160, 14));
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar3], "GamertagColor", fVar44);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "StatPriority", MISC::_GET_STRING_FROM_FLOAT(fVar25[iVar43], uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_1483(uParam1, iParam3, &iVar5, &iVar6);
		iVar1 = 0;
		while (iVar1 <= iVar6)
		{
			if (iVar3 == 0 || iVar1 >= iVar5)
			{
				if (func_1460(&((uParam1[iVar1 /*23*/])->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar1 + 1, 8);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Position", &cVar22);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &((uParam1[iVar1 /*23*/])->f_14.f_1));
						bVar45 = iVar13 == (uParam1[iVar1 /*23*/])->f_14;
						fVar46 = func_1463(uParam0, uParam1, iVar1, iVar13, bVar45);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar3], "GamertagColor", fVar46);
						sVar47 = "";
						if (bVar7)
						{
							if (MISC::IS_BIT_SET(uParam0->f_159, 26))
							{
								if (MISC::IS_BIT_SET(uParam0->f_159, 0))
								{
									sVar47 = MISC::_GET_STRING_FROM_FLOAT(func_1472(uParam1[iVar1 /*23*/], uParam0->f_159, uParam0->f_160), 0);
								}
								else
								{
									sVar47 = MISC::_GET_STRING_FROM_FLOAT(func_1471(uParam1[iVar1 /*23*/], uParam0->f_159), 0);
								}
							}
							else if (MISC::IS_BIT_SET(uParam0->f_159, 27))
							{
								iVar4 = BUILTIN::ROUND(func_1470(uParam1[iVar1 /*23*/], uParam0->f_159));
								sVar47 = " ";
								if (func_1476(iVar4))
								{
									iVar48 = uParam0->f_159;
									if ((uParam1[iVar1 /*23*/])->f_1 == 1286243416)
									{
										MISC::CLEAR_BIT(&iVar48, 12);
									}
									sVar47 = func_1477(iVar4, iVar48, 1);
								}
							}
							else
							{
								sVar47 = MISC::_GET_STRING_FROM_FLOAT(func_1470(uParam1[iVar1 /*23*/], uParam0->f_159), func_1478(uParam0, 1));
							}
						}
						else if (bVar9)
						{
							sVar47 = MISC::_GET_STRING_FROM_FLOAT((uParam1[iVar1 /*23*/])->f_1, 0);
						}
						else if (bVar8 || bVar10)
						{
							if (MISC::IS_BIT_SET(uParam0->f_159, 9))
							{
								sVar47 = func_1285((uParam1[iVar1 /*23*/])->f_5);
							}
							else
							{
								sVar47 = MISC::_GET_STRING_FROM_FLOAT((uParam1[iVar1 /*23*/])->f_5, 0);
							}
						}
						else if (bVar11)
						{
							sVar47 = MISC::_GET_STRING_FROM_FLOAT((uParam1[iVar1 /*23*/])->f_8, 0);
						}
						else
						{
							sVar47 = MISC::_GET_STRING_FROM_FLOAT((uParam1[iVar1 /*23*/])->f_1, 0);
						}
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_143[iVar3], "StatPriority", sVar47);
					}
				}
			}
			iVar1++;
		}
	}
}

bool func_1460(var uParam0)
{
	if (*uParam0 != 255)
	{
		return true;
	}
	else if (Global_2883584 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)))
	{
		return true;
	}
	return false;
}

void func_1461(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = 0;
	iVar1 = PLAYER::PLAYER_ID();
	bVar2 = iVar1 == (uParam1[iParam2 /*23*/])->f_14;
	iVar0 = func_1463(uParam0, uParam1, iParam2, iVar1, bVar2);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam1[iParam2 /*23*/])->f_14) && VOICE::_0x919AF2D93E9AA89D((uParam1[iParam2 /*23*/])->f_14))
	{
		bVar3 = VOICE::_0xEF6F2A35FAAF2ED7((uParam1[iParam2 /*23*/])->f_14);
	}
	else
	{
		bVar3 = false;
	}
	if (bVar3)
	{
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "HeadsetIconVisible", bVar3);
	if (!bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_12[iParam2], "HeadsetIconColor", iVar0);
	}
	if (bVar3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowBlip", false);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowBlip", true);
	}
}

int func_1462(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam1 == iVar0)
		{
			return iVar1 + 1;
		}
		else if ((*uParam0)[iParam1 /*23*/] == (*uParam0)[iVar0 /*23*/] && func_1460(&((uParam0[iVar0 /*23*/])->f_14)))
		{
			iVar1++;
		}
		iVar0++;
	}
	return -1;
}

float func_1463(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;

	if (MISC::IS_BIT_SET(uParam0->f_159, 11))
	{
		fVar0 = func_1643((*uParam1)[iParam2 /*23*/], PLAYER::GET_PLAYER_TEAM(iParam3), uParam0->f_150, MISC::IS_BIT_SET(uParam0->f_159, 5), bParam4, MISC::IS_BIT_SET(uParam0->f_160, 14));
	}
	else if (MISC::IS_BIT_SET(uParam0->f_159, 16))
	{
		if (bParam4)
		{
			fVar0 = 4.808429E-35f;
		}
		else
		{
			fVar0 = func_550((uParam1[iParam2 /*23*/])->f_14, 1, -1, 1);
		}
	}
	else
	{
		fVar0 = func_550((uParam1[iParam2 /*23*/])->f_14, 1, -1, 1);
	}
	return fVar0;
}

void func_1464(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	switch ((uParam1[iParam2 /*23*/])->f_10)
	{
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iParam2], "SetOverlayImg", 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowOverlay", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowCross", false);
			break;
		case 2:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowCross", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowOverlay", false);
			break;
		default:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowCross", false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowOverlay", false);
			break;
	}
	if (bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_12[iParam2], "CrossColor", iParam4);
	}
}

char* func_1465()
{
	return "RSN";
}

char* func_1466(int iParam0)
{
	if (iParam0 >= 32 || iParam0 < 0)
	{
		return "-";
	}
	return MISC::VAR_STRING(2, "NUMBER", Global_1155135[iParam0 /*30*/]);
}

bool func_1467()
{
	if (Global_1102813.f_26.f_3337 == 9)
	{
		return false;
	}
	if (Global_1102813.f_26.f_3337 == 10)
	{
		return false;
	}
	if (Global_1102813.f_26.f_3337 == 11)
	{
		return false;
	}
	if (func_917(2048))
	{
		return true;
	}
	if (func_916(1))
	{
		return true;
	}
	if (Global_1102813.f_26.f_3337 != 0)
	{
		return true;
	}
	return false;
}

bool func_1468(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_1644()));
	return iParam0 == iVar0;
}

char* func_1469(int iParam0)
{
	if (iParam0 != 0)
	{
		return STATS::_0xB112B9262EC29C20(1.861746E+28f, iParam0);
	}
	return "";
}

float func_1470(var uParam0, int iParam1)
{
	if (func_1288(0))
	{
		return func_1645(uParam0, 0);
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return uParam0->f_7;
	}
	else if (MISC::IS_BIT_SET(iParam1, 19))
	{
		return uParam0->f_6;
	}
	return uParam0->f_1;
}

float func_1471(var uParam0, int iParam1)
{
	if (func_1288(0))
	{
		return func_1645(uParam0, 1);
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		if (MISC::IS_BIT_SET(iParam1, 0))
		{
			return uParam0->f_7;
		}
		else if (MISC::IS_BIT_SET(iParam1, 4) || MISC::IS_BIT_SET(iParam1, 15))
		{
			return uParam0->f_8;
		}
	}
	else if (func_1474(iParam1) || MISC::IS_BIT_SET(iParam1, 19))
	{
		return uParam0->f_1;
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return uParam0->f_6;
	}
	else if (MISC::IS_BIT_SET(iParam1, 20))
	{
		return uParam0->f_6;
	}
	return uParam0->f_2;
}

float func_1472(var uParam0, int iParam1, int iParam2)
{
	if (func_1288(0))
	{
		return func_1645(uParam0, 2);
	}
	else if (MISC::IS_BIT_SET(iParam1, 0) && !MISC::IS_BIT_SET(iParam1, 17))
	{
		if (MISC::IS_BIT_SET(iParam1, 3) && (MISC::IS_BIT_SET(iParam1, 4) || MISC::IS_BIT_SET(iParam1, 15)))
		{
			return uParam0->f_8;
		}
		return uParam0->f_2;
	}
	else if (MISC::IS_BIT_SET(iParam1, 21))
	{
		return uParam0->f_7;
	}
	else if (func_1475(iParam1))
	{
		return uParam0->f_1;
	}
	else if (MISC::IS_BIT_SET(iParam1, 14))
	{
		return uParam0->f_8;
	}
	else if (MISC::IS_BIT_SET(iParam2, 8))
	{
		return uParam0->f_3;
	}
	return uParam0->f_5;
}

float func_1473(var uParam0)
{
	if (func_1288(3))
	{
		return func_1645(uParam0, 3);
	}
	return -1f;
}

bool func_1474(int iParam0)
{
	if ((func_1475(iParam0) || func_1479(iParam0)) || MISC::IS_BIT_SET(iParam0, 18))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(iParam0, 0) || MISC::IS_BIT_SET(iParam0, 17))
	{
		return true;
	}
	return false;
}

bool func_1475(int iParam0)
{
	return (MISC::IS_BIT_SET(iParam0, 0) && MISC::IS_BIT_SET(iParam0, 17));
}

bool func_1476(int iParam0)
{
	if ((iParam0 != 7.82218E-36f || iParam0 == 0) || iParam0 == BUILTIN::ROUND(-3f))
	{
		return true;
	}
	return false;
}

char* func_1477(int iParam0, int iParam1, bool bParam2)
{
	char cVar0[32];

	StringCopy(&cVar0, "", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	if (bParam2)
	{
		if (iParam0 == 0)
		{
			return " ";
		}
		else if ((((iParam0 == 0.004723787f || iParam0 == 9.25711E-36f) || iParam0 == 2.52543E-36f) || iParam0 == 8.539645E-36f) || iParam0 == BUILTIN::ROUND(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_1088(iParam0, 1, 2, MISC::IS_BIT_SET(iParam1, 12), 0, 0);
		}
	}
	else if ((MISC::IS_BIT_SET(iParam1, 3) || MISC::IS_BIT_SET(iParam1, 4)) || MISC::IS_BIT_SET(iParam1, 7))
	{
		if (iParam0 == 0)
		{
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POS_LEAD");
		}
		else if (iParam0 == 9.25711E-36f || iParam0 == 2.52543E-36f)
		{
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POS_DNF");
		}
		else if (iParam0 == 8.539645E-36f)
		{
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POS_ELIM");
		}
		else if (iParam0 == BUILTIN::ROUND(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_1088(iParam0, 1, 2, MISC::IS_BIT_SET(iParam1, 12), 0, 0);
		}
	}
	if (MISC::IS_BIT_SET(iParam1, 21))
	{
		if (iParam0 <= 0 || iParam0 == 0.004723787f)
		{
			return "--:--:--";
		}
		else
		{
			return func_1088(iParam0, 1, 2, 0, 0, 0);
		}
	}
	if (iParam0 < 0)
	{
		return "";
	}
	return func_1646(&cVar0);
}

int func_1478(var uParam0, int iParam1)
{
	if (iParam1 == 1 && MISC::IS_BIT_SET(uParam0->f_159, 29))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 2 && MISC::IS_BIT_SET(uParam0->f_159, 30))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 3 && MISC::IS_BIT_SET(uParam0->f_159, 31))
	{
		return uParam0->f_151;
	}
	return 0;
}

bool func_1479(int iParam0)
{
	return (MISC::IS_BIT_SET(iParam0, 18) && MISC::IS_BIT_SET(iParam0, 17));
}

void func_1480(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		(*uParam1)[iVar0] = (*iParam0)[iVar0];
		iVar0++;
	}
	if (!bParam3)
	{
		if (iParam2 < 8 && (*uParam1)[7] != -1)
		{
			(*uParam1)[(iParam2 - 1)] = (*uParam1)[7];
			(*uParam1)[7] = -1;
		}
	}
}

void func_1481(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam1 == (*uParam2)[iVar0])
		{
			iParam1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	*iParam3 = (iParam1 - 1);
	*iParam4 = iParam1 + 2;
	if (*iParam4 >= uParam0->f_150)
	{
		*iParam4 = uParam0->f_150;
		*iParam3 = (uParam0->f_150 - 3);
	}
	if (*iParam3 < 0)
	{
		*iParam3 = 0;
	}
	if (*iParam4 < 5 && uParam0->f_150 > 5)
	{
		*iParam4 = 5;
	}
	if (*iParam4 < uParam0->f_150 && uParam0->f_150 < 5)
	{
		*iParam4 = uParam0->f_150;
	}
	if (*iParam4 > 8)
	{
		*iParam4 = 8;
	}
}

void func_1482(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	if (iParam4 < iParam3)
	{
		if (iParam1 != DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(iParam0, iParam4))
		{
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(iParam0, iParam1);
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iParam0, iParam4, sParam2, iParam1);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iParam0, iParam4, sParam2, iParam1);
	}
}

void func_1483(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = -1;
	iVar4 = -1;
	iVar6 = -1;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (func_1460(&((uParam0[iVar1 /*23*/])->f_14)))
		{
			if (iVar1 < iParam1)
			{
				iVar3 = iVar2;
				iVar2 = iVar1;
			}
			else if (iVar1 > iParam1)
			{
				iVar5++;
				if (iVar5 < 4)
				{
					iVar6 = iVar1;
				}
			}
			iVar0++;
			iVar4 = iVar1;
		}
		iVar1++;
	}
	*iParam2 = iVar2;
	if (iVar6 != -1)
	{
		*iParam3 = iVar6;
	}
	else
	{
		*iParam3 = iVar4;
	}
	if (*iParam3 >= iVar4 && iVar6 == -1)
	{
		*iParam3 = iVar4;
		if (iVar3 != -1)
		{
			*iParam2 = iVar3;
		}
		else
		{
			*iParam2 = iVar2;
		}
	}
	if (*iParam2 < 0)
	{
		*iParam2 = 0;
	}
}

void func_1484(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2[4];
	char cVar7[64];
	bool bVar15;
	int iVar16;
	float fVar17;
	int iVar18;
	int iVar19;
	vector3 vVar20[24];
	float fVar23;

	bVar15 = func_1288(0);
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_150 - 1))
	{
		StringCopy(&cVar7, "LeaderboardListHeader_", 64);
		if (iVar0 < 10)
		{
			StringConCat(&cVar7, "0", 64);
		}
		StringIntConCat(&cVar7, iVar0, 64);
		uParam0->f_3[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar7);
		cVar7 = { func_1641(iVar0) };
		fVar2[0] = 0f;
		fVar2[1] = 0f;
		fVar2[2] = 0f;
		fVar2[3] = 0f;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (iVar0 != (*uParam1)[iVar1 /*23*/] || !func_1460(&((uParam1[iVar1 /*23*/])->f_14)))
			{
			}
			else if (bVar15)
			{
				iVar16 = 0;
				while (iVar16 < 4)
				{
					fVar2[iVar16] = (fVar2[iVar16] + func_1645(uParam1[iVar1 /*23*/], iVar16));
					iVar16++;
				}
			}
			else if (MISC::IS_BIT_SET(uParam0->f_159, 19))
			{
				if ((uParam1[iVar1 /*23*/])->f_6 != -1f && fVar2[0] == 0f)
				{
					fVar2[0] = (fVar2[0] + (uParam1[iVar1 /*23*/])->f_6);
				}
				if ((uParam1[iVar1 /*23*/])->f_1 != -1f)
				{
					fVar2[1] = (fVar2[1] + (uParam1[iVar1 /*23*/])->f_1);
				}
				if ((uParam1[iVar1 /*23*/])->f_5 != -1f)
				{
					fVar2[2] = (fVar2[2] + (uParam1[iVar1 /*23*/])->f_5);
				}
			}
			else
			{
				if ((uParam1[iVar1 /*23*/])->f_1 != -1f)
				{
					fVar2[0] = (fVar2[0] + (uParam1[iVar1 /*23*/])->f_1);
				}
				if ((uParam1[iVar1 /*23*/])->f_2 != -1f)
				{
					fVar2[1] = (fVar2[1] + (uParam1[iVar1 /*23*/])->f_2);
				}
				if ((uParam1[iVar1 /*23*/])->f_5 != -1f)
				{
					fVar2[2] = (fVar2[2] + (uParam1[iVar1 /*23*/])->f_5);
				}
			}
			iVar1++;
		}
		if (!MISC::IS_BIT_SET(uParam0->f_159, 19))
		{
			if (MISC::IS_BIT_SET(uParam0->f_159, 25) || MISC::IS_BIT_SET(uParam0->f_159, 23))
			{
				if (func_1639() == 0)
				{
					fVar2[2] = BUILTIN::TO_FLOAT(Global_1051030[iVar0]);
				}
			}
		}
		fVar17 = func_1642(iVar0, iParam2, iParam3, bParam4, iParam2 == iVar0, MISC::IS_BIT_SET(uParam0->f_160, 14));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "HeadingColor", fVar17);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Heading", &cVar7);
		if (bVar15)
		{
			iVar18 = (4 - func_1647());
			iVar19 = iVar18;
			while (iVar19 <= 3)
			{
				if (!func_1288(iVar19))
				{
				}
				else
				{
					StringCopy(&cVar20, "Stat", 24);
					if (iVar19 == 3)
					{
						StringConCat(&cVar20, "Rounds", 24);
					}
					else
					{
						StringIntConCat(&cVar20, iVar19, 24);
					}
					DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], &cVar20, MISC::_GET_STRING_FROM_FLOAT(fVar2[iVar19], uParam0->f_151));
					StringConCat(&cVar20, "Color", 24);
					DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], &cVar20, fVar17);
				}
				iVar19++;
			}
		}
		else if (MISC::IS_BIT_SET(uParam0->f_159, 6))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat3Color", fVar17);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat3", MISC::_GET_STRING_FROM_FLOAT(fVar2[2], uParam0->f_151));
		}
		else if (func_1474(uParam0->f_159))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat2Color", fVar17);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat2", MISC::_GET_STRING_FROM_FLOAT(fVar2[0], uParam0->f_151));
			fVar23 = fVar2[1];
			if (MISC::IS_BIT_SET(uParam0->f_159, 17))
			{
				fVar23 = fVar2[2];
			}
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat3Color", fVar17);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat3", MISC::_GET_STRING_FROM_FLOAT(fVar23, uParam0->f_151));
		}
		else if (func_1475(uParam0->f_159))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat3Color", fVar17);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat3", MISC::_GET_STRING_FROM_FLOAT(fVar2[2], uParam0->f_151));
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat1Color", fVar17);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat1", MISC::_GET_STRING_FROM_FLOAT(fVar2[0], uParam0->f_151));
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat2Color", fVar17);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat2", MISC::_GET_STRING_FROM_FLOAT(fVar2[1], uParam0->f_151));
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat3Color", fVar17);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat3", MISC::_GET_STRING_FROM_FLOAT(fVar2[2], uParam0->f_151));
		}
		iVar0++;
	}
}

bool func_1485()
{
	return func_819(4);
}

void func_1486(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	char cVar1[32];

	if (bParam4)
	{
		if (func_1288(0))
		{
			func_1648(uParam0);
		}
		else
		{
			func_1649(uParam0, bParam5, bParam7);
		}
	}
	uParam0->f_149 = 0;
	if (iParam3 != -1)
	{
		uParam0->f_150 = iParam3;
	}
	if (MISC::IS_BIT_SET(uParam0->f_159, 5))
	{
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&cVar1, "MiniListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_143[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar1);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_143[iVar0], "Position", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_143[iVar0], "Gamertag", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_143[iVar0], "GamertagColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_143[iVar0], "StatPriority", "");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		StringCopy(&cVar1, "LeaderboardListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_12[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_12[iVar0], "Position", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowCross", false);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_12[iVar0], "CrossColor", 4.465091E-08f);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Gamertag", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_12[iVar0], "GamertagColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowCrewTag", true);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "CrewTag", "");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowRank", true);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Rank", "0");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "Spectating", false);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Stat0", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Stat1", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Stat2", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Stat3", "");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowBlip", func_1650());
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_12[iVar0], "BlipColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Blip", "BLIP_AMBIENT_PED_MEDIUM");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "isHighlighted", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "HeadsetIconVisible", false);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_12[iVar0], "HeadsetIconColor", 4.808429E-35f);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowBlip", true);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_06", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_07", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_08", false);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_06", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_07", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_08", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_12[iVar0], "SetOverlayImg", 1);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowOverlay", false);
		func_1487(uParam0, &((uParam1[iVar0 /*23*/])->f_14), iVar0, 0);
		iVar0++;
	}
	if (func_1288(0))
	{
		func_1289(uParam0, uParam1, iParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
	else
	{
		func_1290(uParam0, uParam1, iParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
}

void func_1487(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	char cVar0[64];
	char cVar8[64];
	struct<8> Var16;

	if (func_1651() > 0)
	{
		return;
	}
	StringCopy(&cVar0, "mp_lobby_textures", 64);
	StringCopy(&cVar8, "TEMP_PEDSHOT", 64);
	MemCopy(&Var16, {func_1652(uParam0, *uParam1)}, 8);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var16) && !MISC::ARE_STRINGS_EQUAL(&Var16, "Invalid Handle"))
	{
		cVar0 = { Var16 };
		cVar8 = { Var16 };
	}
	if (bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45[iParam2 /*3*/][0], &cVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45[iParam2 /*3*/][1], &cVar8);
	}
	else
	{
		uParam0->f_45[iParam2 /*3*/][0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iParam2], "AvatarDictionary", &cVar0);
		uParam0->f_45[iParam2 /*3*/][1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iParam2], "AvatarTexture", &cVar8);
	}
}

bool func_1488(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

void func_1489(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

float func_1490(bool bParam0)
{
	if (bParam0)
	{
		return 0.03028275f;
	}
	return -2518.559f;
}

float func_1491()
{
	return 1.432296E-31f;
}

bool func_1492()
{
	if (Global_1940072.f_20 && Global_1940072.f_5 == 1)
	{
		return true;
	}
	return false;
}

void func_1493(var uParam0)
{
	int iVar0;
	int iVar1;
	char cVar2[128];

	if (uParam0->f_69 == 0 && uParam0->f_66 == uParam0->f_67)
	{
		return;
	}
	iVar0 = uParam0->f_68;
	uParam0->f_68++;
	if (uParam0->f_68 >= 32)
	{
		uParam0->f_68 = 0;
		if (uParam0->f_69 != 0 && func_1651() < 50)
		{
			func_1653(uParam0, uParam0->f_69, 0);
			uParam0->f_69 = 0;
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_67, iVar0))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_66, iVar0))
	{
		return;
	}
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return;
	}
	StringCopy(&cVar2, "", 128);
	switch (func_1654(&cVar2, iVar0, 1))
	{
		case 4:
			(*uParam0)[iVar0] = iVar1;
			MISC::SET_BIT(&(uParam0->f_67), iVar0);
			break;
		case 3:
			break;
		case 1:
			if (uParam0->f_67 == 0)
			{
				return;
			}
			if (uParam0->f_33[iVar0] >= Global_1901671.f_316.f_17)
			{
				return;
			}
			uParam0->f_33[iVar0]++;
			func_1655(iVar0, 1);
			MISC::SET_BIT(&(uParam0->f_69), iVar0);
			break;
		case 2:
			if (uParam0->f_33[iVar0] >= Global_1901671.f_316.f_17)
			{
				return;
			}
			uParam0->f_33[iVar0]++;
			func_1655(iVar0, 1);
			MISC::SET_BIT(&(uParam0->f_69), iVar0);
			break;
		case 0:
			break;
	}
}

void func_1494(var uParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	Var0.f_1 = 1;
	Var0 = 1;
	Var0.f_3 = iParam1;
	func_1656(&Var0);
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar5 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
		{
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_66), iVar4);
		}
		iVar4++;
	}
}

int func_1495(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1953279.f_2844.f_1)
	{
		if (Global_1953279.f_2844.f_43[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1496(int iParam0, var uParam1)
{
	return (Global_1953279.f_2844.f_3[iParam0] && uParam1) != 0;
}

void func_1497(int iParam0, var uParam1)
{
	Global_1953279.f_2844.f_3[iParam0] = (Global_1953279.f_2844.f_3[iParam0] - (Global_1953279.f_2844.f_3[iParam0] && uParam1));
}

bool func_1498(int iParam0, int iParam1)
{
	return (Global_1953279.f_83[func_1179(iParam0, 1) /*12*/].f_11 && iParam1) != 0;
}

void func_1499(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_1500(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	*uParam1 = func_1657(iParam0);
	Var2 = -22248.28f;
	if (func_23() == -1)
	{
		Var2 = 4.316871E+13f;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&Var2);
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var2))
	{
		return 0;
	}
	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var2, -5.853618E-34f))
	{
		return 0;
	}
	iVar1 = func_1658(iParam0);
	func_1659(iVar0, iVar1, uParam1);
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var2))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var2, -5.853618E-34f))
		{
		}
		else
		{
			func_1659(iVar0, iVar1, uParam1);
		}
	}
	return 1;
}

int func_1501(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1953279.f_2938)
	{
		if (Global_1953279.f_2938.f_2[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1502(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

float func_1503(bool bParam0)
{
	if (bParam0 == -2.296707E-23f)
	{
		return 2.186574E+22f;
	}
	else if (func_1336(bParam0, -7.15325E+10f))
	{
		return 2.833008E-34f;
	}
	else if (func_1336(bParam0, -0.9828076f))
	{
		return -8.41446E+37f;
	}
	else if (func_1336(bParam0, -7.310568E+12f))
	{
		return -1.398649E-17f;
	}
	else
	{
		return 2.425724E+21f;
	}
	return 2.186574E+22f;
}

int func_1504(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((uParam0[iVar0 /*18*/])->f_1 == -1 || (uParam0[iVar0 /*18*/])->f_17 == 0)
		{
		}
		else
		{
			if ((uParam0[iVar0 /*18*/])->f_17 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1505(bool bParam0)
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

int func_1506(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1504(uParam1, iParam2);
	if (iVar0 == -1)
	{
		return 0;
	}
	PED::_REMOVE_PED_OVERLAY(*uParam0, (uParam1[iVar0 /*18*/])->f_2);
	func_1507(uParam0, uParam1, iVar0);
	return 1;
}

void func_1507(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	uParam0->f_6 = (uParam0->f_6 - 1);
	iVar0 = iParam2;
	while (iVar0 <= uParam0->f_6)
	{
		if (iVar0 + 1 >= 22)
		{
		}
		else
		{
			*(uParam1[iVar0 /*18*/]) = { *(uParam1[iVar0 + 1 /*18*/]) };
			(uParam1[iVar0 /*18*/])->f_2 = ((uParam1[iVar0 /*18*/])->f_2 - 1);
			iVar0++;
		}
	}
}

bool func_1508(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	struct<5> Var0;

	Var0 = 3.113408E-15f;
	Var0.f_1 = -5.035317E+11f;
	Var0.f_2 = 1.854962E-22f;
	Var0.f_3 = 1;
	Var0.f_4 = bParam1;
	DATAFILE::_PARSEDDATA_GET_FILE(&Var0);
	if (!func_1660(&Var0, uParam0, 0, iParam4))
	{
		return false;
	}
	*uParam0 = bParam1;
	if (bParam2)
	{
		func_1661(uParam0, bParam3);
	}
	return true;
}

void func_1509(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if ((!func_1502(uParam0, 1) || func_1502(uParam0, 2)) || uParam0->f_6 < 0)
	{
		return;
	}
	if (uParam2->f_17 == -0.0003995475f)
	{
		if (uParam2->f_3 == 0)
		{
			uParam2->f_3 = uParam0->f_2;
		}
		if (uParam2->f_4 == 0)
		{
			uParam2->f_4 = uParam0->f_3;
		}
		if (uParam2->f_5 == 0)
		{
			uParam2->f_5 = uParam0->f_4;
		}
		func_1662(uParam0, uParam2->f_3, uParam2->f_4, uParam2->f_5);
	}
	else
	{
		iVar0 = func_1504(uParam1, uParam2->f_17);
		if (iVar0 <= -1)
		{
			if (uParam0->f_6 >= 22)
			{
				return;
			}
			*(uParam1[uParam0->f_6 /*18*/]) = { *uParam2 };
			uParam0->f_6++;
			func_1663(uParam0, uParam1, (uParam0->f_6 - 1));
		}
		else
		{
			uParam2->f_2 = (uParam1[iVar0 /*18*/])->f_2;
			*(uParam1[iVar0 /*18*/]) = { *uParam2 };
			func_1664(uParam0, uParam1[iVar0 /*18*/], 1);
		}
	}
}

int func_1510(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<18> Var0;
	int iVar18;
	struct<18> Var19;

	Var0.f_2 = -1;
	Var0.f_13 = 1f;
	Var0.f_14 = 1f;
	if (!func_1508(&Var0, bParam2, bParam3, bParam4, 6))
	{
		return 0;
	}
	if (uParam0->f_6 >= 22)
	{
		return 0;
	}
	*(uParam1[uParam0->f_6 /*18*/]) = { Var0 };
	uParam0->f_6++;
	Var19.f_2 = -1;
	Var19.f_13 = 1f;
	Var19.f_14 = 1f;
	iVar18 = (uParam0->f_6 - 1);
	while (iVar18 >= 1)
	{
		if ((uParam1[iVar18 /*18*/])->f_1 < (uParam1[(iVar18 - 1) /*18*/])->f_1)
		{
			Var19 = { *(uParam1[iVar18 /*18*/]) };
			*(uParam1[iVar18 /*18*/]) = { *(uParam1[(iVar18 - 1) /*18*/]) };
			*(uParam1[(iVar18 - 1) /*18*/]) = { Var19 };
		}
	else
	{
		}
		else
		{
			iVar18 = (iVar18 + -1);
		}
	}
	return 1;
}

int func_1511(int iParam0)
{
	return iParam0 * 31;
}

bool func_1512(int iParam0)
{
	return ((((iParam0 == -5.09425E-25f || iParam0 == -2.445049E+27f) || iParam0 == 3.302249E-11f) || iParam0 == 8.123318E-38f) || iParam0 == -1.121027E+34f);
}

int func_1513(int iParam0)
{
	if (iParam0 == 6.51589E-10f)
	{
		return -5.867486E+25f;
	}
	switch (iParam0)
	{
		case joaat("A_C_HORSE_AMERICANPAINT_OVERO"):
			return -7671.036f;
		case joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"):
			return 1.565249E+13f;
		case joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"):
			return 1.206894E-35f;
		case joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"):
			return -4.349822E+08f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK"):
			return 1.019417E+11f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"):
			return -1.24796E+12f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return 3.947066E+18f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return -5.675616E+10f;
		case joaat("A_C_HORSE_ANDALUSIAN_DARKBAY"):
			return -2.501807E-09f;
		case joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"):
			return 8.144612E-13f;
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
			return 19.44001f;
		case joaat("A_C_HORSE_APPALOOSA_BLANKET"):
			return -7.905541E-26f;
		case joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"):
			return -0.0002948103f;
		case joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD"):
			return -2.676207E+32f;
		case joaat("A_C_HORSE_APPALOOSA_LEOPARD"):
			return -2.358058E-07f;
		case joaat("A_C_HORSE_ARABIAN_BLACK"):
			return -1.792899E-36f;
		case joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY"):
			return -1.835706E+08f;
		case joaat("A_C_HORSE_ARABIAN_WHITE"):
			return -9.721153E+35f;
		case joaat("A_C_HORSE_ARDENNES_BAYROAN"):
			return 7.125971E+26f;
		case joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"):
			return 6.323706E-09f;
		case joaat("A_C_HORSE_ARDENNES_IRONGREYROAN"):
			return 2.070833E-33f;
		case joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT"):
			return -5.617021E-07f;
		case joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"):
			return 6.362973E+37f;
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return -4.733491E-17f;
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN"):
			return 3.068005E+13f;
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return 6.286798E-14f;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return 7.639143E-29f;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return 2.131064E+28f;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return -2.811856E-11f;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK"):
			return -4.518364E-32f;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return 4.596671E+10f;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_GREY"):
			return 4.427686E+32f;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"):
			return 2.149006E-19f;
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return 3.583278E+07f;
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return 3.672272E+36f;
		case joaat("A_C_HORSE_MORGAN_BAY"):
			return 1317401f;
		case joaat("A_C_HORSE_MORGAN_BAYROAN"):
			return 6.706112E-07f;
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return 522994.2f;
		case joaat("A_C_HORSE_MORGAN_PALOMINO"):
			return 1.139994E-15f;
		case joaat("A_C_HORSE_MUSTANG_GRULLODUN"):
			return -3.391958E-19f;
		case joaat("A_C_HORSE_MUSTANG_WILDBAY"):
			return 3.746556E+33f;
		case joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"):
			return -3.879503E-13f;
		case joaat("A_C_HORSE_NOKOTA_BLUEROAN"):
			return 7.807593E-33f;
		case joaat("A_C_HORSE_NOKOTA_WHITEROAN"):
			return -1.605381E+12f;
		case joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return -2.190123E-23f;
		case joaat("A_C_HORSE_SHIRE_DARKBAY"):
			return -1.420053E+35f;
		case joaat("A_C_HORSE_SHIRE_LIGHTGREY"):
			return -1.301456E-33f;
		case joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL"):
			return 4.656437E+23f;
		case joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT"):
			return 2.152173E-30f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO"):
			return 1.354223E-34f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			return -5.083863E+07f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY"):
			return -1.021829E+07f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN"):
			return -2.609989E+08f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"):
			return 6.879982E+24f;
		case joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY"):
			return -4.6141E+09f;
		case joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY"):
			return -4.526459E-30f;
		case joaat("A_C_HORSE_THOROUGHBRED_BRINDLE"):
			return 2.370827E+22f;
		case joaat("A_C_HORSE_THOROUGHBRED_BLACKCHESTNUT"):
			return -3.511005E-07f;
		case joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return 8.750258E+33f;
		case joaat("A_C_HORSE_TURKOMAN_DARKBAY"):
			return -9.142146E+33f;
		case joaat("A_C_HORSE_TURKOMAN_GOLD"):
			return -5.966001E+30f;
		case joaat("A_C_HORSE_TURKOMAN_SILVER"):
			return -2.014525E-29f;
		case joaat("A_C_HORSE_BRETON_REDROAN"):
			return -4.513147E+11f;
		case joaat("A_C_HORSE_BRETON_SORREL"):
			return 2.120006E+30f;
		case joaat("A_C_HORSE_BRETON_GRULLODUN"):
			return 8.596086E+18f;
		case joaat("A_C_HORSE_BRETON_SEALBROWN"):
			return 0.00097687f;
		case joaat("A_C_HORSE_BRETON_MEALYDAPPLEBAY"):
			return 0.9606787f;
		case joaat("A_C_HORSE_BRETON_STEELGREY"):
			return -6.984672E-11f;
		case joaat("A_C_HORSE_CRIOLLO_BLUEROANOVERO"):
			return 2.300937E+18f;
		case joaat("A_C_HORSE_CRIOLLO_DUN"):
			return 3.055963E-25f;
		case joaat("A_C_HORSE_CRIOLLO_BAYBRINDLE"):
			return joaat("BREED_CRIOLLO_BAYBRINDLE");
		case joaat("A_C_HORSE_CRIOLLO_SORRELOVERO"):
			return -1.131241E-23f;
		case joaat("A_C_HORSE_CRIOLLO_BAYFRAMEOVERO"):
			return -1.13357E+32f;
		case joaat("A_C_HORSE_CRIOLLO_MARBLESABINO"):
			return 5.734728E-08f;
		case -390136947:
			return -49526.15f;
		case 1104566530:
			return -1.164754E+26f;
		case -1142861801:
			return -1.076792E-24f;
		case -417416199:
			return -1.229762E+29f;
		case -1460773772:
			return 1.797443E+31f;
		case 1476007840:
			return -5.376032E-30f;
		case joaat("A_C_HORSE_KLADRUBER_BLACK"):
			return 3.738345E-07f;
		case joaat("A_C_HORSE_KLADRUBER_WHITE"):
			return -3.817251E-17f;
		case joaat("A_C_HORSE_KLADRUBER_CREMELLO"):
			return -1.856765E+17f;
		case joaat("A_C_HORSE_KLADRUBER_GREY"):
			return -3.577101E+25f;
		case joaat("A_C_HORSE_KLADRUBER_DAPPLEROSEGREY"):
			return -8.213095E-23f;
		case joaat("A_C_HORSE_KLADRUBER_SILVER"):
			return -6.157964E+14f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_BLACK"):
			return -9.863372E+27f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPECKLEDGREY"):
			return 8053409f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_PIEBALDROAN"):
			return 1.824036E-09f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_ROSEGREY"):
			return -1.819399E+11f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return -2.392047E-27f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return 6.890993E+18f;
		case 1387035765:
			return 1.908594E+09f;
		case 506531963:
			return -0.001692632f;
		case 2038357529:
			return 2.163332E+28f;
		case 1599848740:
			return 4.000557E+12f;
		case 1887211198:
			return 3.11928E-18f;
		case 1645353708:
			return 907.9868f;
		case 1154747978:
			return -2.484812E-23f;
		case 74569170:
			return 2.332845E-24f;
		case -2004712574:
			return 0.0001293215f;
		case 699227695:
			return 6.169305E-34f;
		case 1514230770:
			return -2.827861E+38f;
		case 704938950:
			return 290.1437f;
		case joaat("A_C_DONKEY_01"):
			return -1.217579E-09f;
		case joaat("A_C_HORSEMULE_01"):
			return 1.537994E-34f;
		case joaat("A_C_HORSEMULEPAINTED_01"):
			return -6.569504E-26f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return -1.304779E-31f;
		case joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE"):
			return -1.146618E+16f;
		case joaat("A_C_HORSE_ARABIAN_GREY"):
			return -4.191203E-13f;
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return -1.171704E-35f;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return -2.655684E-08f;
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return -0.0003522342f;
		case joaat("A_C_HORSE_MUSTANG_GOLDENDUN"):
			return 4.778737E-10f;
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"):
			return -2.409371E+30f;
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_02"):
			return NaNf;
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"):
			return -5870.035f;
		default:
			break;
	}
	return 0;
}

bool func_1514(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_1515(bool bParam0, int iParam1)
{
	if (!func_1006(bParam0, 2))
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

void func_1516(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (*uParam0 + 1 >= 16)
	{
		return;
	}
	if (!func_1665(uParam0, 1))
	{
		func_1666(uParam0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0->f_2[iVar0 /*2*/] == iParam1)
		{
			uParam0->f_2[iVar0 /*2*/].f_1 = iParam2;
			return;
		}
		if (Global_1953279.f_83[uParam0->f_2[iVar0 /*2*/] /*12*/].f_2 > Global_1953279.f_83[iParam1 /*12*/].f_2)
		{
			iVar1 = *uParam0;
			while (iVar1 >= iVar0 + 1)
			{
				uParam0->f_2[iVar1 /*2*/] = { uParam0->f_2[(iVar1 - 1) /*2*/] };
				iVar1 = (iVar1 + -1);
			}
			uParam0->f_2[iVar0 /*2*/] = iParam1;
			uParam0->f_2[iVar0 /*2*/].f_1 = iParam2;
			*uParam0++;
			return;
		}
		iVar0++;
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_1517(bool bParam0)
{
	return (((bParam0 != 9.94413E+23f && bParam0 != -3.916588E+30f) && bParam0 != 2.515798E+09f) && !func_1667(bParam0));
}

int func_1518(int iParam0)
{
	switch (iParam0)
	{
		case 502936876:
			return 1;
		case 684307653:
			return 2;
		case 1759215194:
			return 4;
		case -1740828670:
			return 8;
		case 344283346:
			return 16;
		default:
			break;
	}
	return 0;
}

bool func_1519(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1520(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (func_1336(bVar1, 3.611922E-33f) || func_894(bVar1) == 5.002459E-36f)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam2);
	}
}

void func_1521(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 11;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_1336(uParam0->f_1[iVar0 /*3*/], -3.086476E+35f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam2);
	}
}

bool func_1522(bool bParam0)
{
	if (!func_714(bParam0, 0))
	{
		return false;
	}
	if (func_1336(bParam0, 3.611922E-33f) || func_894(bParam0) == 5.002459E-36f)
	{
		return true;
	}
	return false;
}

void func_1523(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 10;
	if (-9.847085E+19f == func_894(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam2);
	}
}

int func_1524(bool bParam0)
{
	var uVar0;
	var uVar1;

	func_1335(&uVar1, 9044914, bParam0, 0, 0, 0);
	DATAFILE::_PARSEDDATA_GET_FILE(&uVar1);
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&uVar1))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&uVar0, &uVar1, -0.0008358429f))
		{
			return 0;
		}
		return uVar0;
	}
	return 0;
}

bool func_1525(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_894(bParam0);
	if (iParam2 == 0)
	{
		return (iVar0 == 8.292232E+24f || iVar0 == 1.34646E-26f);
	}
	return (!bParam1 && (iVar0 == -2.443576E-24f || iVar0 == 1.34646E-26f));
}

bool func_1526(int iParam0)
{
	return (Global_17418.f_55.f_664.f_1734 && iParam0) != 0;
}

void func_1527(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = 16;
	bVar1 = false;
	if (func_1185() == 4.387347E-38f)
	{
		bVar1 = true;
	}
	func_1337(iVar0, iParam1);
	if (uParam0->f_1[iVar0 /*3*/].f_1 == -4.070739E-17f || uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f)
	{
		return;
	}
	if (uParam0->f_1[iVar0 /*3*/].f_1 == 0 || uParam0->f_1[iVar0 /*3*/].f_1 == 1808.893f)
	{
		if (func_1668(uParam0->f_1[iVar0 /*3*/], bVar1, -4.070739E-17f) >= 0)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -4.070739E-17f;
			return;
		}
	}
	if (func_1668(uParam0->f_1[iVar0 /*3*/], bVar1, 4.712272E+09f) >= 0)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 4.712272E+09f;
	}
}

void func_1528(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_1336(bParam2, -1.06471E-16f)) && !func_1336(uParam0->f_1[iVar0 /*3*/], -1.186825E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	iVar0 = 16;
	if ((uParam0->f_1[iVar0 /*3*/].f_1 == 5.334513E+16f || uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f) && func_1336(bParam2, -3099.443f))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 5.334513E+16f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
			func_1337(iVar0, iParam3);
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -4.070739E-17f;
			func_1337(iVar0, iParam3);
		}
	}
}

void func_1529(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	if (uParam0->f_1[iParam2 /*3*/].f_1 != -1.366178E-36f)
	{
		iVar0 = 34;
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_1336(bVar1, 3.984539E+18f))
		{
			uParam0->f_1[iParam2 /*3*/].f_1 = -1.366178E-36f;
			func_1337(iParam2, iParam3);
		}
		else
		{
			iVar0 = 35;
			bVar1 = uParam0->f_1[iVar0 /*3*/];
			if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && 1.825867E+25f == func_894(bVar1))
			{
				uParam0->f_1[iParam2 /*3*/].f_1 = -1.366178E-36f;
				func_1337(iParam2, iParam3);
			}
		}
	}
}

void func_1530(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	iVar0 = 16;
	func_1337(iVar0, iParam3);
	iVar0 = 18;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_1336(bParam2, 3.949663E+29f) && func_894(bVar1) == 7.30981E-14f)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_1337(iVar0, iParam3);
		}
		else if (func_1336(bParam2, 8.367934E-23f) && func_894(bVar1) == 3.381578E-06f)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_1337(iVar0, iParam3);
		}
		else
		{
			func_1337(iVar0, iParam3);
		}
	}
	if (bParam1)
	{
		iVar0 = 21;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
		{
			func_1337(iVar0, iParam3);
			func_1351(uParam0, 0, uParam0->f_1[iVar0 /*3*/], iParam3);
		}
		iVar0 = 17;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && uParam0->f_1[iVar0 /*3*/].f_1 == 1.494364E-28f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_1337(iVar0, iParam3);
		}
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_1336(bParam2, 170.5778f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_1336(bParam2, -3099.443f))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 5.334513E+16f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -4.070739E-17f;
		}
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_1336(bParam2, -1.06471E-16f)) && !func_1336(uParam0->f_1[iVar0 /*3*/], -1.186825E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
}

void func_1531(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_1337(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && !func_1336(uParam0->f_1[iVar0 /*3*/], -1.186825E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	iVar0 = 13;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	iVar0 = 25;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_1336(bParam2, 1.096909E-14f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
}

bool func_1532(int iParam0)
{
	return Global_1953279.f_1676.f_1[func_1179(iParam0, 1) /*3*/] != Global_1953279.f_83[func_1179(iParam0, 1) /*12*/];
}

void func_1533(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam1);
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_1337(iVar0, iParam1);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_1336(uParam0->f_1[iVar0 /*3*/], -336998.2f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		}
		func_1337(iVar0, iParam1);
	}
}

void func_1534(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (bParam1)
	{
		return;
	}
	bVar2 = false;
	bVar3 = false;
	if (func_1185() == 4.387347E-38f)
	{
		bVar3 = true;
	}
	if (func_1185() == 4.387347E-38f)
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953279.f_83[iVar0 /*12*/] && func_894(uParam0->f_1[18 /*3*/]) != 3.381578E-06f)
		{
			uParam0->f_1[iVar0 /*3*/] = func_1186(Global_1953279.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_1337(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	func_1337(iVar0, iParam3);
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_1336(bParam2, -9.489474E-15f))
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_1336(bVar1, 3.411183E+14f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		}
		else if (func_1668(uParam0->f_1[iVar0 /*3*/], bVar3, -1.366178E-36f) != -1)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -1.366178E-36f;
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		}
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && uParam0->f_1[iVar0 /*3*/].f_1 == 1.494364E-28f)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_894(bVar1) == 3.381578E-06f)
		{
			bVar2 = true;
			if (func_1336(bParam2, 3.984539E+18f))
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = -1.366178E-36f;
				func_1337(iVar0, iParam3);
			}
		}
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (bVar1 != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_894(bVar1) == 6.698816E+28f && func_1336(bParam2, -234.3313f))
		{
			func_1669(uParam0, iVar0, iParam3);
		}
		else if (bVar2)
		{
			func_1337(iVar0, iParam3);
		}
	}
	iVar0 = 34;
	if (8.292232E+24f == func_894(uParam0->f_1[iVar0 /*3*/]))
	{
		func_1337(16, iParam3);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_1336(bParam2, -4.282854E-21f))
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_894(bVar1) == 1.825867E+25f)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_1337(iVar0, iParam3);
		}
	}
}

void func_1535(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	if (func_1185() == 4.387347E-38f)
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953279.f_83[iVar0 /*12*/] && func_894(uParam0->f_1[18 /*3*/]) != 3.381578E-06f)
		{
			uParam0->f_1[iVar0 /*3*/] = func_1186(Global_1953279.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_1337(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_1336(uParam0->f_1[iVar0 /*3*/], -5.428462E-37f))
		{
			func_1541(uParam0, iParam3, 1, 0);
		}
		else if (func_1336(bParam2, 2.896282E+23f))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		}
	}
	func_1337(iVar0, iParam3);
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_1336(bVar1, 8.399988f) && func_1336(bParam2, 7.029633E-22f))
		{
			func_1669(uParam0, iVar0, iParam3);
		}
	}
}

void func_1536(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	func_1337(36, iParam2);
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam2);
	}
	if (func_1185() == 4.387347E-38f)
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953279.f_83[iVar0 /*12*/])
		{
			iVar0 = 16;
			uParam0->f_1[iVar0 /*3*/] = func_1186(Global_1953279.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_1337(iVar0, iParam2);
		}
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (bVar1 != Global_1953279.f_83[iVar0 /*12*/] && func_1336(bVar1, 2.801708E-26f))
	{
		func_1669(uParam0, iVar0, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam2);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && 1.825867E+25f == func_894(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam2);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam2);
	}
}

void func_1537(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_894(bVar1) == 2.209101E-28f)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	iVar0 = 18;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_894(bVar1) == 3.381578E-06f)
		{
			if (uParam0->f_1[iVar0 /*3*/].f_1 != 1808.893f)
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
				func_1337(iVar0, iParam3);
			}
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_1337(iVar0, iParam3);
		}
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_1336(uParam0->f_1[iVar0 /*3*/], -5.428462E-37f))
		{
			func_1541(uParam0, iParam3, 1, 0);
		}
		else if (func_1336(bParam2, 2.896282E+23f))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		}
	}
}

void func_1538(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_1669(uParam0, iVar0, iParam2);
	}
	iVar0 = 21;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam2);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam2);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam2);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam2);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam2);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_1336(uParam0->f_1[iVar0 /*3*/], -5.428462E-37f))
		{
			func_1541(uParam0, iParam2, 1, 0);
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
			func_1337(iVar0, iParam2);
		}
	}
}

void func_1539(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 34;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		func_1337(iVar0, iParam3);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -1.366178E-36f;
		func_1337(iVar0, iParam3);
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_1336(bParam2, -9.697137E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (3.381578E-06f == func_894(bVar1) && uParam0->f_1[iVar0 /*3*/].f_1 != -1.366178E-36f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -1.366178E-36f;
			func_1337(iVar0, iParam3);
		}
	}
}

void func_1540(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 37;
	if (func_1336(bParam2, -9.697137E-08f) && uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam3);
	}
}

void func_1541(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 36;
	if (bParam2)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam1);
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam1);
	}
	iVar0 = 38;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam1);
	}
	iVar0 = 35;
	if (bParam3 && -494711.9f == func_894(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam1);
	}
}

bool func_1542(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

bool func_1543(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
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
		iParam3 = func_715(bParam2, -3.294982E+22f);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(bParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_1670(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<17> func_1544(bool bParam0, var uParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0 = { func_711(bParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = bParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_1545(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1671(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_1673(func_1672(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_1674(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

void func_1546(int iParam0, struct<17> Param1)
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

bool func_1547(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return true;
		case 13:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1548(int iParam0)
{
	if (iParam0 > 3)
	{
		return false;
	}
	if (iParam0 < 0)
	{
		return false;
	}
	return true;
}

float func_1549(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.117204E+09f;
		case 1:
			return -7.899958E+20f;
		case 2:
			return -7.941008E+09f;
		case 3:
			return -0.105234f;
		default:
			break;
	}
	return -6.307836f;
}

int func_1550(struct<4> Param0, float fParam4, int iParam5, bool bParam6)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_1675(Param0, fParam4, &Var0, iParam5, bParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1551()
{
	return DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1149417.f_8);
}

int func_1552(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (bParam0 == Global_1149417.f_11.f_1562[iVar0 /*46*/].f_2)
		{
			return Global_1149417.f_11.f_1562[iVar0 /*46*/];
		}
		iVar0++;
	}
	return 0;
}

int func_1553(int iParam0, var uParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	vector3 vVar6;

	if (iParam2 == 2)
	{
		bVar0 = func_1676() == true;
	}
	else if (iParam2 == 1)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam3 != -1)
	{
		bVar1 = true;
	}
	if (!func_1363(iParam0))
	{
		func_1677(uParam1);
		return 0;
	}
	*uParam1 = Global_1149417.f_11.f_1562[func_1364(iParam0, 1) /*46*/];
	uParam1->f_2 = Global_1149417.f_11.f_1562[func_1364(iParam0, 1) /*46*/].f_2;
	uParam1->f_1 = Global_1149417.f_11.f_1562[func_1364(iParam0, 1) /*46*/].f_1;
	uParam1->f_8 = Global_1149417.f_11.f_1562[func_1364(iParam0, 1) /*46*/].f_3;
	uParam1->f_16 = Global_1149417.f_11.f_1562[func_1364(iParam0, 1) /*46*/].f_4;
	uParam1->f_35 = Global_1149417.f_11.f_1562[func_1364(iParam0, 1) /*46*/].f_7;
	uParam1->f_36 = Global_1149417.f_11.f_1562[func_1364(iParam0, 1) /*46*/].f_8;
	if (!func_714(uParam1->f_2, 0))
	{
		func_1677(uParam1);
		return 0;
	}
	bVar2 = true;
	if (!func_1363(*uParam1))
	{
		func_1677(uParam1);
		return 0;
	}
	if (!bVar0)
	{
		if (func_1557())
		{
			uParam1->f_19 = func_1678(*uParam1);
			uParam1->f_20 = 1;
			uParam1->f_21 = 1;
			uParam1->f_9 = Global_1149417.f_11.f_1562[func_1364(iParam0, 1) /*46*/].f_5;
			uParam1->f_10 = Global_1149417.f_11.f_1562[func_1364(iParam0, 1) /*46*/].f_6;
			if (func_1548(uParam1->f_19))
			{
				uParam1->f_13 = Global_1149417.f_4804.f_34[uParam1->f_19 /*3*/].f_1;
			}
			else
			{
				uParam1->f_13 = 0;
			}
		}
		else
		{
			uParam1->f_19 = func_1679(*uParam1);
			fVar3 = func_1549(uParam1->f_19);
			uParam1->f_3 = { func_711(uParam1->f_2, func_710(bVar2), fVar3, bVar2) };
			uParam1->f_21 = func_1680(uParam1);
			uParam1->f_13 = func_1681(uParam1);
			uParam1->f_15 = func_1682(uParam1);
			uParam1->f_20 = func_1683(uParam1);
			uParam1->f_22 = func_1684(uParam1);
			uParam1->f_14 = func_1685(uParam1);
			uParam1->f_25 = func_1686(uParam1);
			uParam1->f_26 = func_1687(uParam1);
			uParam1->f_24 = func_1688(uParam1);
			uParam1->f_23 = func_1689(uParam1);
			uParam1->f_27 = func_1690(uParam1);
			uParam1->f_29 = func_1691(uParam1);
			uParam1->f_30 = func_1692(uParam1);
			uParam1->f_32 = func_1693(uParam1);
			uParam1->f_33 = func_1694(uParam1);
			uParam1->f_34 = func_1695(uParam1);
			fVar4 = -982726.7f;
			if (!uParam1->f_20)
			{
				if (uParam1->f_30 || uParam1->f_29)
				{
					fVar4 = uParam1->f_31;
				}
				uParam1->f_17 = func_1696(Global_1149417.f_11.f_1562[func_1364(iParam0, 1) /*46*/].f_2, fVar4);
			}
			else
			{
				if (uParam1->f_24 || uParam1->f_23)
				{
					fVar4 = uParam1->f_28;
				}
				uParam1->f_17 = func_1697(uParam1->f_13, fVar4);
			}
			uParam1->f_18 = func_1696(Global_1149417.f_11.f_1562[func_1364(iParam0, 1) /*46*/].f_2, -2.401104E+18f);
			if (bVar1)
			{
				uParam1->f_29 = 0;
				uParam1->f_30 = 0;
				if (uParam1->f_25)
				{
					uParam1->f_25 = iParam3 == uParam1->f_13 + 1;
				}
				if (uParam1->f_27)
				{
					uParam1->f_27 = iParam3 == uParam1->f_13 + 1;
				}
				if (uParam1->f_20)
				{
					uParam1->f_20 = uParam1->f_13 >= iParam3;
				}
				uParam1->f_13 = iParam3;
			}
			if (uParam1->f_20)
			{
				uParam1->f_9 = Global_1149417.f_11.f_1562[func_1364(iParam0, 1) /*46*/].f_3;
				uParam1->f_10 = Global_1149417.f_11.f_1562[func_1364(iParam0, 1) /*46*/].f_6;
			}
			else
			{
				func_1698(uParam1);
			}
		}
	}
	else
	{
		iVar5 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1940239.f_1556.f_8));
		uParam1->f_9 = Global_1149417.f_11.f_1562[func_1364(iParam0, 1) /*46*/].f_3;
		uParam1->f_10 = Global_1149417.f_11.f_1562[func_1364(iParam0, 1) /*46*/].f_6;
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar5))
		{
			uParam1->f_19 = func_1699(*uParam1, iVar5);
			if (func_1548(uParam1->f_19))
			{
				vVar6 = { Global_1155135[iVar5 /*30*/].f_5[uParam1->f_19 /*3*/] };
				uParam1->f_13 = vVar6.y;
				uParam1->f_21 = func_1700(&(vVar6.f_2), 1);
			}
		}
	}
	uParam1->f_11 = func_1701(uParam1);
	uParam1->f_12 = func_1702(Global_1149417.f_11.f_1562[func_1364(iParam0, 1) /*46*/], uParam1);
	return 1;
}

bool func_1554(var uParam0)
{
	return uParam0->f_1 == 5.389147E-28f;
}

void func_1555()
{
	PLAYER::_SET_SPECIAL_ABILITY_ACTIVATION_COST(Global_1295619.f_149[Global_1295619], 0f, 0);
	PLAYER::_0x4D1699543B1C023C(Global_1295619.f_149[Global_1295619], 0f);
	PLAYER::_SET_SPECIAL_ABILITY_DURATION_COST(Global_1295619.f_149[Global_1295619], 0f);
	PLAYER::_SET_DEADEYE_TAGGING_ENABLED(Global_1295619.f_149[Global_1295619], false);
	if (PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(Global_1295619.f_149[Global_1295619]))
	{
		PLAYER::_SPECIAL_ABILITY_SET_DISABLED(Global_1295619.f_149[Global_1295619], true);
	}
	PLAYER::_ENABLE_CUSTOM_DEADEYE_ABILITY(Global_1295619.f_149[Global_1295619], false);
}

void func_1556(int iParam0)
{
	struct<36> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_35 = -1;
	func_1561(&Var0, iParam0);
}

bool func_1557()
{
	return (func_398(0) && func_398(5));
}

void func_1558(int iParam0)
{
	int iVar0;

	iVar0 = func_1703(iParam0);
	func_1704(iVar0);
}

void func_1559(var uParam0)
{
	bool bVar0;
	int iVar1;

	func_1705(&(Global_1940239.f_1556.f_4168.f_37[func_1364(*uParam0, 1) /*44*/]), uParam0);
	bVar0 = func_1706(*uParam0);
	iVar1 = UIAPPS::_GET_UIAPP_CURRENT_ACTIVITY_BY_HASH(-8.851064E-21f);
	if (bVar0)
	{
		if (iVar1 == 8.567533E-12f)
		{
			func_1707(*uParam0);
			return;
		}
		else
		{
			func_1708(&(Global_1940239.f_1556.f_4168.f_1936), *uParam0);
			func_1709(*uParam0);
		}
	}
}

void func_1560(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_1710(iParam0, 1);
	if (!func_1369(iVar0, uParam1, 0, -1))
	{
		func_1677(uParam1);
	}
	func_1711(iParam0, &(Global_1940239.f_1556.f_4168.f_1579[iParam0 /*54*/]), *uParam1);
	if (bParam2 && func_1712(iParam0))
	{
		func_1713(&(Global_1940239.f_1556.f_4168.f_1985), uParam1, iParam0);
	}
}

void func_1561(var uParam0, int iParam1)
{
	Global_1149417.f_4621.f_36[iParam1 /*3*/] = *uParam0;
	Global_1149417.f_4621.f_36[iParam1 /*3*/].f_1 = uParam0->f_13;
}

void func_1562(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1363(*uParam0))
	{
		return;
	}
	if (!func_1714(uParam0->f_13))
	{
		return;
	}
	if (func_1554(uParam0))
	{
		func_1715(uParam0);
	}
	iVar0 = func_1703(iParam1);
	iVar1 = Global_1149417.f_11.f_1562[func_1364(*uParam0, 1) /*46*/].f_9[uParam0->f_13 /*12*/].f_10;
	func_1716(iVar0, iVar1);
}

bool func_1563(int iParam0)
{
	float fVar0;

	fVar0 = (func_1717(iParam0) - PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(iParam0));
	return fVar0 <= 1f;
}

bool func_1564(int iParam0, int iParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (fParam2 > 1120403456)
	{
		fParam2 = 1120403456; /* Float: 100f */
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, func_1718(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_1565(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_991(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + MISC::GET_GAME_TIMER());
	}
	switch (iParam2)
	{
		case 0:
			Global_1956862.f_1431.f_16[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1956862.f_1565.f_2.f_16[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_1566(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_1719(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, func_1720(iParam1), fParam2, -1);
	}
}

void func_1567(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_991(2);
	}
	uVar0 = Global_1295619.f_16;
	func_1721(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_1722(iParam0, uVar0, iParam3);
	}
}

char* func_1568()
{
	return "PlayerRPGCoreDeadEye";
}

char* func_1569()
{
	return "PlayerRPGCore";
}

bool func_1570()
{
	int iVar0;

	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &iVar0, true, 0, false))
		{
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_1571(float fParam0, float fParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = (fParam0 / fParam1);
	fVar1 = (-1f * (fVar0 - 1f));
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerHealthLow"))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("PlayerHealthLow");
	}
	GRAPHICS::_ANIMPOSTFX_SET_STRENGTH("PlayerHealthLow", fVar1);
}

void func_1572()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerHealthLow"))
	{
		GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT("PlayerHealthLow");
	}
}

char* func_1573(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_1574(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(iVar0);
	}
	iVar1 = func_984(2);
	func_1723(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_1575(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6[20];

	iVar1 = Global_1156096.f_47689.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = Global_1156096.f_47689.f_1[iVar2 /*2*/];
		iVar3 = func_1724(iVar0, 1);
		if (Global_1156096.f_35859.f_919[iVar3 /*12*/] == iParam0)
		{
			func_1704(iVar0);
			Global_1156096.f_47689.f_1.f_42 = (Global_1156096.f_47689.f_1.f_42 - 1);
		}
		else
		{
			Var6[iVar4 /*2*/] = { Global_1156096.f_47689.f_1[iVar2 /*2*/] };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		Global_1156096.f_47689.f_1[iVar5 /*2*/] = { Var6[iVar5 /*2*/] };
		iVar5++;
	}
}

void func_1576(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_986(2);
	func_1725(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_1577(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_985(2);
	func_1373(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_1578(int iParam0, bool bParam1, bool bParam2)
{
	func_1377(iParam0, 1120403456 /* Float: 100f */, bParam1, bParam2, 1, 2);
}

bool func_1579(bool bParam0)
{
	var uVar0;

	if (func_23() != -1)
	{
		return false;
	}
	if (func_1387(bParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return func_1007(bParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_1406(bParam0, 1);
}

void func_1580(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (func_1009(bParam0) != -3.265313E+23f)
	{
		return;
	}
	bVar0 = func_1392(bParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0))
	{
		return;
	}
	if (bParam2 || !func_1590(bVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bVar0, 0, false) && func_1049(bParam0, 0, 0, 0) == 0))
		{
			if (func_23() == -1)
			{
				func_1393(bVar0);
			}
			if (!*bParam3 && !iParam4 == 3787186f)
			{
				func_1418(bParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1581(bool bParam0, int iParam1)
{
	if (func_1336(bParam0, 7.644572E-37f))
	{
		func_1624(bParam0, -982726.7f, iParam1, 1);
	}
}

bool func_1582()
{
	if (((((!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33)) && !func_1726(Global_33, 8.330918E+10f)) && !func_1726(Global_33, 2.446422E-13f)) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		return true;
	}
	return false;
}

int func_1583(bool bParam0, int iParam1)
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

bool func_1584(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1585(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_38.f_3651[iVar1], iVar2);
}

void func_1586(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_38.f_3651[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_38.f_3651[iVar1] = uVar3;
}

void func_1587(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_1727(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_1728(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1728(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1728(3);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 30:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 31:
			break;
		case 32:
			func_1729(1);
			break;
		case 33:
			func_1730(1);
			break;
		case 34:
			func_1731(1);
			break;
		case 35:
			break;
		case 36:
			func_1732(0);
			break;
		case 37:
			func_1733(0);
			break;
		case 38:
			func_1734(0);
			break;
		case 39:
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if (func_1735() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_1445("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_1398(677, 0);
			break;
		case 3:
			if (func_1735() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_1445("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_1398(678, 0);
			break;
		case 4:
			if (func_1735() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_1445("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_1398(679, 0);
			break;
		case 5:
			if (func_1735() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_1445("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_1398(680, 0);
			break;
		case 23:
			UNLOCK::UNLOCK_SET_UNLOCKED(-4.628467E+31f, true);
			UNLOCK::UNLOCK_SET_VISIBLE(-4.628467E+31f, true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			break;
		case 47:
			if (func_23() == -1)
			{
				if (!func_1406(0.01458261f, 1))
				{
					func_403(0.01458261f, 1, 6.028273E-12f);
				}
			}
			break;
		case 49:
			if (func_23() == -1)
			{
				if (!func_1406(0.01458261f, 1))
				{
					func_403(0.01458261f, 1, 6.028273E-12f);
				}
				if (!func_1406(7.734759E-34f, 1))
				{
					func_403(7.734759E-34f, 1, 6.028273E-12f);
				}
			}
			break;
		case 48:
			if (func_23() == -1)
			{
				if (!func_1406(1.044822E-10f, 1))
				{
					func_403(1.044822E-10f, 1, 6.028273E-12f);
				}
			}
			break;
		case 50:
			if (func_23() == -1)
			{
				if (!func_1406(1.044822E-10f, 1))
				{
					func_403(1.044822E-10f, 1, 6.028273E-12f);
				}
				if (!func_1406(-1.840652E+20f, 1))
				{
					func_403(-1.840652E+20f, 1, 6.028273E-12f);
				}
			}
			break;
		case 22:
			PLAYER::_SET_MOUNT_PROMPT_DISABLED(false);
			break;
		case 24:
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 43:
			break;
		case 44:
			UNLOCK::UNLOCK_SET_UNLOCKED(-3.989886E+08f, true);
			Global_1940186.f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
		case 51:
			UNLOCK::UNLOCK_SET_UNLOCKED(-1.056862E+36f, true);
			break;
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(-1.092788E+25f, true);
			break;
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(2.756398E-28f, true);
			break;
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(-4.80995E-29f, true);
			break;
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(8.669974E+11f, true);
			break;
	}
}

int func_1588(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_1131(bParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_1589(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_VISIBLE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_1590(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar0))
	{
		return true;
	}
	return false;
}

bool func_1591(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != -3.273909E-18f);
}

void func_1592(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_33, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar2 = func_1736(WEAPON::GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_33, bParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_33, &iVar1, bParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, bParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_33, bParam0, iVar1);
		}
	}
}

void func_1593(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || Global_1940186.f_6)
	{
		return;
	}
	if (WEAPON::IS_WEAPON_BOW(bParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::IS_WEAPON_PISTOL(bParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(bParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_RIFLE(bParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(bParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_33, sVar0, bParam0);
	iVar2 = func_1737();
	func_1738(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_33, sVar1, iVar2);
}

int func_1594(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_1050(bParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, 0.0001101296f) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(bParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::GET_WEAPON_CLIP_SIZE(bParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

bool func_1595()
{
	return false;
}

bool func_1596(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

int func_1597(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1598(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_1388(49))
			{
				if (!func_1388(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_1388(50))
			{
				if (!func_1388(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

void func_1599(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_1600(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_1739(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1740(iParam0))
	{
		return false;
	}
	if (func_1741(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_1608(iParam0, 1)) || func_1240(32768))
	{
		if (!func_1608(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_1742())
	{
		return false;
	}
	return true;
}

void func_1601(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

int func_1602(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	bool bVar25;

	if (func_23() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_1406(6.217872E+26f, 1))
	{
		fVar0 = (fVar0 + 1036831949);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_LOOT_TABLES_GET_INFO(Global_33, true, true, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (Var1.f_1[iVar24] == 3.996812E+36f)
		{
			return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			bVar25 = Var1.f_1[iVar24];
			if (func_714(bVar25, 0) && func_1336(bVar25, -7.721469E-31f))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_1603(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_1743(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1613(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 3.428622E+27f, 0, 4.808429E-35f, 0, 0, 0, 1);
}

void func_1604(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1744() || func_1745())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 1036831949));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_1613(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -3.959475E-32f, 0, 4.808429E-35f, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_1613(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 3.428622E+27f, 0, 4.808429E-35f, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 6.028273E-12f);
		func_459(func_522(6.480143E+20f), iVar1);
	}
}

bool func_1605(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_714(bParam0, 0))
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		return false;
	}
	bVar0 = func_1228(bParam0, iParam1);
	Var4.f_9 = -5.45926E-19f;
	if (func_1169("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1162(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_1591(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
			{
				func_1165(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1165(iVar1);
	}
	return false;
}

bool func_1606(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_714(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_894(bParam0);
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
	iVar1 = func_1505(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_1746(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_1747(bParam0);
	iVar2 = func_1746(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == Global_17418.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_1607(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case joaat("KIT_POUCH_REMEDIES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case joaat("KIT_POUCH_INGREDIENTS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case joaat("KIT_POUCH_MATERIALS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case joaat("KIT_POUCH_VALUABLES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case joaat("KIT_POUCH_KIT"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case joaat("KIT_POUCH_PROVISIONS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
		case 239629152:
			if (bParam1)
			{
				return MISC::GET_HASH_KEY("DOCUMENT_BOUNTY_HUNTER_LICENSE_UPGRADE_01_SHORT");
			}
			break;
	}
	return 0;
}

bool func_1608(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

void func_1609(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case joaat("LOOTER_PED_IS_FEMALE"):
			case joaat("LOOTER_PED_IS_MALE"):
				if (uParam0->f_1[iVar1] == 8.967694E-17f || uParam0->f_1[iVar1] == 1.721179E-28f)
				{
					bVar0 = true;
				}
				break;
			case joaat("LOOT_TYPE_NORMAL"):
			case joaat("LOOT_TYPE_SKINNING"):
				if (uParam0->f_1[iVar1] == 2.95884E+10f || uParam0->f_1[iVar1] == 2.575707E+29f)
				{
					bVar0 = true;
				}
				break;
			case joaat("FISHING_RESULT_RUINED"):
			case joaat("FISHING_RESULT_NORMAL"):
			case joaat("FISHING_RESULT_LEGENDARY"):
				if ((uParam0->f_1[iVar1] == 2.770086E+17f || uParam0->f_1[iVar1] == -2.793692E-28f) || uParam0->f_1[iVar1] == 1.982896E+31f)
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_1610(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	var uVar0;
	struct<15> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_1748(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_1749(uParam2, iParam0, Var1);
	return 1;
}

char* func_1611(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

float func_1612(bool bParam0)
{
	var uVar0;

	if (!func_1750(bParam0, &uVar0, 4.975531E-10f, 0, 0, -2.889029E+24f))
	{
		return -0.1987056f;
	}
	return uVar0;
}

int func_1613(char* sParam0, char* sParam1, int iParam2, int iParam3, float fParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	int iVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = fParam4;
	Var13.f_6 = 0;
	iVar20 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&Var0, &Var13, bParam8);
	func_1751(sParam0, sParam1, iParam2);
	return iVar20;
}

bool func_1614()
{
	return !Global_1913431;
}

void func_1615(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1913431.f_3)
	{
		if ((((Global_1913431.f_4[iVar0 /*6*/] == bParam0 && Global_1913431.f_4[iVar0 /*6*/].f_2 == bParam2) && Global_1913431.f_4[iVar0 /*6*/].f_3 == iParam3) && Global_1913431.f_4[iVar0 /*6*/].f_4 == bParam4) && Global_1913431.f_4[iVar0 /*6*/].f_5 == bParam5)
		{
			Global_1913431.f_4[iVar0 /*6*/].f_1 = (Global_1913431.f_4[iVar0 /*6*/].f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1913431.f_3 < 19)
	{
		Global_1913431.f_4[Global_1913431.f_3 /*6*/] = bParam0;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_1 = iParam1;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_2 = bParam2;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_3 = iParam3;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_4 = bParam4;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_5 = bParam5;
		Global_1913431.f_3++;
	}
}

char* func_1616(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1617(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(bParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_1618(bool bParam0)
{
	if (func_1336(bParam0, -1.80273E-33f))
	{
		return "collectible_arrowheads";
	}
	if (func_1336(bParam0, 1894063f))
	{
		return "collectible_liquor_bottles";
	}
	if (func_1336(bParam0, 8.310792E-34f))
	{
		return "collectible_coins";
	}
	if (func_1336(bParam0, -95782.72f))
	{
		return "colectible_heirlooms";
	}
	if (func_1336(bParam0, 7.372995E+17f))
	{
		return "collectible_jewelry";
	}
	if (func_1336(bParam0, -2.99103E+33f))
	{
		return "collectible_bird_eggs";
	}
	if (func_1336(bParam0, 2.768429E+31f))
	{
		return "collectible_tarot_cards";
	}
	if (func_1336(bParam0, 6.482542E-11f))
	{
		return "collectible_flowers";
	}
	if (((func_1336(bParam0, -1.58908E+26f) || func_1336(bParam0, -3.503386E-34f)) || func_1336(bParam0, -1.887503E+19f)) || func_1336(bParam0, 1.396434E-14f))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_1619(bool bParam0)
{
	if (func_1336(bParam0, -1.15596E+32f))
	{
		if (((func_1752(bParam0, -9.979451E-09f) || func_1752(bParam0, 2.758862E+11f)) || func_1752(bParam0, 1.868312E+36f)) || func_1752(bParam0, -2.847523E-24f))
		{
			return true;
		}
	}
	if (func_1336(bParam0, -6.231785E+11f) || func_1336(bParam0, 1.026869E-32f))
	{
		return true;
	}
	return false;
}

bool func_1620(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
		default:
			break;
	}
	return true;
}

int func_1621(bool bParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_714(bParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(bParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35 /*2*/].f_1 == 14460646)
			{
				if (Var0.f_18[iVar35 /*2*/] != 0)
				{
					return Var0.f_18[iVar35 /*2*/];
				}
			}
			iVar35++;
		}
	}
	return 0;
}

bool func_1622(bool bParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;

	iVar0 = func_1753(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_1754(-5.45926E-19f, -5.45926E-19f, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_1755(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iVar11, iVar13, &bVar14) && func_1667(bVar14))
			{
				func_1756(iVar11);
				return bVar14;
			}
			iVar13++;
		}
		func_1756(iVar11);
	}
	return false;
}

bool func_1623(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, -60352.49f))
	{
		return true;
	}
	return false;
}

int func_1624(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_714(bParam0, 0) && !func_1006(func_1005(bParam0), 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(bParam0, bParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

int func_1625(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1757(bParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_1626(bool bParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_714(bParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_1758(bParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_1759(bParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_1760(bParam0), 128);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
		return false;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return false;
	}
	*sParam1 = { cVar1 };
	return true;
}

char* func_1627(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_1628(int iParam0)
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

bool func_1629(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = 1.841357E+10f;
	bParam2->f_3 = func_1761(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_1630(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	bParam1->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam1);
	uParam2->f_3 = func_1762(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_1763(iVar0);
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
			uParam2->f_5 = func_1764(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_1765(iVar0);
		}
		bParam1->f_2 = 4.168656E-33f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	}
	else if (*uParam2 == 7)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_1766(iVar0);
		}
	}
	else
	{
		bParam1->f_2 = 3.190274E+20f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), bParam1);
	}
	bParam1->f_2 = 1.006963E+34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_7 = func_1767(iVar0);
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

bool func_1631(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_23() == 0)
	{
		return func_1768(iParam0);
	}
	return iParam0 <= func_1769();
}

int func_1632(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1235672.f_9085.f_97 >= 10)
	{
		return -1;
	}
	if (iParam0 == 5.988193E+11f)
	{
		iVar0 = Global_1235672.f_9085.f_99;
		iVar1 = Global_1235672.f_9085.f_97;
		while (iVar1 > 0)
		{
			iVar0 = (iVar0 - 1);
			if (iVar0 < 0)
			{
				iVar0 = 9;
			}
			if (Global_1235672.f_9085.f_16[iVar0 /*8*/] == iParam0)
			{
				return -1;
			}
			iVar1 = (iVar1 - 1);
		}
	}
	iVar2 = Global_1235672.f_9085.f_99;
	Global_1235672.f_9085.f_16[iVar2 /*8*/] = iParam0;
	Global_1235672.f_9085.f_16[iVar2 /*8*/].f_5 = iParam2;
	Global_1235672.f_9085.f_16[iVar2 /*8*/].f_6 = iParam1;
	Global_1235672.f_9085.f_97++;
	Global_1235672.f_9085.f_99 = (Global_1235672.f_9085.f_99 + 1 % 10);
	return iVar2;
}

int func_1633(bool bParam0, bool bParam1, bool bParam2)
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

int func_1634(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -982726.7f) && func_1770(bParam0, 8.497754E-37f))
	{
		iParam1 = 8.497754E-37f;
	}
	if (func_1771(bParam0) || func_1336(bParam0, 2.791187f))
	{
		return func_1773(func_1772(bParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_1774(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

struct<17> func_1635(bool bParam0, struct<4> Param1, float fParam5, int iParam6, bool bParam7)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0.f_4 = { Param1 };
	Var0 = { func_711(bParam0, Var0.f_4, fParam5, 1) };
	Var0.f_8 = bParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = fParam5;
	if (bParam7)
	{
		Var0.f_15 = func_715(bParam0, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_969() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_1636(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

void func_1637(int iParam0)
{
	int iVar0;
	int iVar1;

	VOLUME::_0x748C5F51A18CB8F0(false);
	if (!func_1636(iParam0))
	{
		return;
	}
	func_1775(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_805(iVar0))
		{
			if (func_1777(func_1776(iVar0, 1, 1)) == iParam0)
			{
				func_1778(iVar0, 0);
				func_1779(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_1780(iVar1))
		{
			if (func_1781(iVar1) == iParam0)
			{
				func_1782(iVar1, 0);
			}
		}
		iVar1++;
	}
	VOLUME::_0x748C5F51A18CB8F0(true);
}

void func_1638(var uParam0)
{
	func_1783(uParam0, 0);
}

int func_1639()
{
	int iVar0;

	if (func_1488(16))
	{
		iVar0 = Global_1050074.f_12;
	}
	else
	{
		iVar0 = func_1784();
	}
	return iVar0;
}

float func_1640(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_9;
		default:
			break;
	}
	return 0f;
}

struct<8> func_1641(int iParam0)
{
	char cVar0[64];

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1051039[iParam0 /*8*/])))
	{
		StringCopy(&cVar0, "TEAM_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
		StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cVar0), 64);
		return cVar0;
	}
	return Global_1051039[iParam0 /*8*/];
}

float func_1642(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	return func_1643(iParam0, iParam1, iParam2, bParam3, bParam4, bParam5);
}

float func_1643(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (iParam2 > 1)
	{
		if (bParam3)
		{
			switch (iParam0)
			{
				case 0:
					return -8.998766E+28f;
				case 1:
					return -6.580683E-18f;
				case 2:
					return -2.691543E+12f;
				case 3:
					return 2.986218E-33f;
				case 4:
					return 8.281546E-06f;
				case 5:
					return -2.792393E+27f;
				case 6:
					return 2.121323E-22f;
				case 7:
					return 6.18127E+26f;
				default:
					break;
			}
			return 27.64779f;
		}
		if (iParam1 == iParam0)
		{
			return 1.392783E+25f;
		}
	}
	else if (bParam4)
	{
		if (iParam2 < 2)
		{
			return 27.64779f;
		}
		else
		{
			return 1.392783E+25f;
		}
	}
	else if (bParam5)
	{
		return 1.392783E+25f;
	}
	return -64.26542f;
}

var func_1644()
{
	return Global_1102813.f_26.f_3341;
}

float func_1645(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_1;
		case 1:
			return uParam0->f_2;
		case 2:
			return uParam0->f_3;
		case 3:
			return uParam0->f_4;
		default:
			break;
	}
	return 0f;
}

char* func_1646(char* sParam0)
{
	return HUD::_GET_TEXT_SUBSTRING_2(sParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0));
}

int func_1647()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_3145858.f_61223[iVar1 /*3*/].f_1 != 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1648(var uParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	sVar0 = func_1785(uParam0->f_159, uParam0->f_160);
	sVar1 = func_1786(uParam0->f_159, uParam0->f_160);
	sVar2 = func_1787(uParam0->f_159, uParam0->f_160);
	sVar3 = func_1788();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", sVar0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", 27.64779f);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", sVar1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", 27.64779f);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat3", sVar2);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat3Color", 27.64779f);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "StatRounds", sVar3);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "StatRoundsColor", 27.64779f);
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HeadingColor", 27.64779f);
}

void func_1649(var uParam0, bool bParam1, bool bParam2)
{
	if (func_1479(uParam0->f_159) || func_1475(uParam0->f_159))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", "");
	}
	if (!MISC::IS_BIT_SET(uParam0->f_159, 0) && !MISC::IS_BIT_SET(uParam0->f_159, 17))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat0", HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LDR_RNDW"));
				DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat0Color", 27.64779f);
			}
		}
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", func_1785(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", 27.64779f);
	}
	else if (func_1475(uParam0->f_159))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LDR_RNDW"));
				DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", 27.64779f);
			}
		}
	}
	else if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
	{
		if (bParam2)
		{
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LDR_RNDW"));
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", 27.64779f);
		}
	}
	if (!func_1475(uParam0->f_159))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", func_1786(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", 27.64779f);
	}
	if (!MISC::IS_BIT_SET(uParam0->f_159, 3) || MISC::IS_BIT_SET(uParam0->f_159, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat3", func_1787(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat3Color", 27.64779f);
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HeadingColor", 27.64779f);
}

int func_1650()
{
	return 1;
}

int func_1651()
{
	return Global_1149417.f_5087.f_325;
}

struct<16> func_1652(var uParam0, int iParam1)
{
	struct<16> Var0;
	int iVar16;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return Var0;
	}
	iVar16 = iParam1;
	switch (func_1654(&Var0, iVar16, 1))
	{
		case 4:
			break;
		case 1:
			func_1655(iVar16, 1);
			break;
		case 2:
			func_1655(iVar16, 1);
			func_1789(&(uParam0->f_162), iParam1, 0);
			break;
		case 3:
			break;
		case 0:
			break;
	}
	return Var0;
}

void func_1653(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (iParam1 == 0)
	{
		return;
	}
	Var0.f_1 = 1;
	Var0 = 2;
	Var0.f_3 = iParam2;
	iVar4 = iParam1;
	Var0.f_2 = iVar4;
	func_1656(&Var0);
	uParam0->f_66 = (uParam0->f_66 || iParam1);
}

int func_1654(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar5;
	int iVar6;
	char* sVar7;

	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	iVar2 = func_1790(iParam1, iParam2);
	switch (iParam2)
	{
		case 0:
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(PLAYER::INT_TO_PLAYERINDEX(iParam1), &uVar3);
			if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uVar3))
			{
				return 1;
			}
			StringCopy(sParam0, NETWORK::_REQUEST_PEDSHOT_TEXTURE_MULTIPLAYER_DOWNLOAD(&uVar3, iParam2), 128);
			return 4;
		case 1:
		case 2:
			switch (iVar2)
			{
				case 0:
				default:
					return 1;
					return 2;
				case 1:
					return 3;
				case 2:
					iVar5 = func_1791(iParam2);
					iVar1 = NETWORK::_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(iParam1, iVar5);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_1792(iParam1, iParam2, 0);
						return 1;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1)))
					{
						func_1792(iParam1, iParam2, 3);
					}
					else
					{
						func_1792(iParam1, iParam2, 4);
					}
					func_1793(iParam1, iParam2, iVar1);
					break;
				case 3:
					iVar1 = func_1794(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1792(iParam1, iParam2, 0);
						return 1;
					}
					iVar6 = NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(iVar1);
					switch (iVar6)
					{
						case 0:
							func_1792(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_1792(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_1794(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1792(iParam1, iParam2, 0);
						return 1;
					}
					sVar7 = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1);
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sVar7))
					{
						return 3;
					}
					func_1792(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_1794(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1792(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_1655(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	iVar1 = func_1790(iParam0, iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	switch (iVar1)
	{
		case 1:
		case 2:
		default:
			return;
			func_1793(iParam0, iParam1, 0);
			func_1792(iParam0, iParam1, 0);
		case 3:
		case 4:
		case 5:
			iVar2 = func_1794(iParam0, iParam1);
			if (iVar2 != 0)
			{
				NETWORK::TEXTURE_DOWNLOAD_RELEASE(iVar2);
			}
			func_1792(iParam0, iParam1, 0);
			break;
	}
}

void func_1656(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	struct<8> Var7;
	struct<8> Var15;

	vVar0 = -1;
	vVar0.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(vVar0.f_2), PLAYER::NETWORK_PLAYER_ID_TO_INT());
			func_1795(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			SCRIPTS::_SET_ALL_PLAYER_BITS(&(vVar0.f_2));
			func_1795(vVar0);
			if (!uParam0->f_3)
			{
			}
			else
			{
				Var7.f_4 = 0;
				Var7.f_6 = uParam0->f_1;
				Var7.f_5 = *uParam0;
				Var7.f_7 = uVar5;
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295619.f_149[iVar3]))
					{
					}
					else if (Global_1295619.f_149[iVar3] == Global_1295619.f_5)
					{
					}
					else
					{
						SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar6, Global_1295619.f_149[iVar3]);
					}
					iVar3++;
				}
				func_1796(&Var7, uVar6);
				Jump @464; //curOff = 221
				if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(uParam0->f_2)))
				{
					return;
				}
				bVar4 = false;
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(uParam0->f_2), iVar3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295619.f_149[iVar3]))
					{
						bVar4 = true;
					}
					else
					{
						iVar3++;
					}
				}
				if (!bVar4)
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				func_1795(vVar0);
				if (!uParam0->f_3)
				{
				}
				else
				{
					Var15.f_4 = 0;
					Var15.f_6 = uParam0->f_1;
					Var15.f_5 = *uParam0;
					Var15.f_7 = uParam0->f_2;
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < 32)
					{
						if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295619.f_149[iVar3]))
						{
						}
						else if (Global_1295619.f_149[iVar3] == Global_1295619.f_5)
						{
						}
						else
						{
							SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar6, Global_1295619.f_149[iVar3]);
						}
						iVar3++;
					}
					func_1796(&Var15, uVar6);
				}
			}
			default:
				break;
	}
}

int func_1657(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	Var1 = -22248.28f;
	if (func_23() == -1)
	{
		Var1 = 4.316871E+13f;
	}
	Var1.f_1 = iParam0;
	Var1.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&Var1);
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var1))
	{
		return 0;
	}
	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var1, -2.74559E+16f))
	{
		return 0;
	}
	return func_1176(iVar0);
}

int func_1658(int iParam0)
{
	int iVar0;

	Global_1953279.f_2844.f_43[Global_1953279.f_2844.f_1 /*2*/] = iParam0;
	iVar0 = Global_1953279.f_2844.f_2 ^ -1;
	iVar0 = (iVar0 && -iVar0);
	Global_1953279.f_2844.f_2 = (Global_1953279.f_2844.f_2 || iVar0);
	Global_1953279.f_2844.f_43[Global_1953279.f_2844.f_1 /*2*/].f_1 = iVar0;
	Global_1953279.f_2844.f_1++;
	return iVar0;
}

void func_1659(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_1797(iParam0, &iVar0))
	{
		return;
	}
	if (iVar0 == 20)
	{
		if (func_1336(Global_1953279.f_1676.f_1[iVar0 /*3*/], 1.280781E-26f))
		{
			bVar2 = func_1798(Global_1953279.f_1676.f_1[iVar0 /*3*/], 37.82234f);
			if (4.281622E+11f == func_894(bVar2))
			{
				func_1799(10, iParam1);
			}
		}
	}
	else if (iVar0 == 23)
	{
		iVar1 = 20;
		if (Global_1953279.f_1676.f_1[iVar1 /*3*/].f_1 == -6.7231E+19f)
		{
			Global_1953279.f_2844.f_54[iVar1] = 1808.893f;
			func_1333(iVar1, 256, 6);
			*uParam2 |= 262144;
		}
	}
	func_1799(iVar0, iParam1);
}

bool func_1660(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;

	if (DATAFILE::_PARSEDDATA_GET_SECTION(&uVar2, uParam0, -3.925446E+21f))
	{
		uParam1->f_17 = uVar2;
	}
	else if (!bParam2)
	{
		return false;
	}
	if (DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, uParam0, -430996f))
	{
		uParam1->f_3 = iVar0;
	}
	else
	{
		uParam1->f_3 = 0;
	}
	if (DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, uParam0, 3.361014E+09f))
	{
		uParam1->f_4 = iVar0;
	}
	else
	{
		uParam1->f_4 = 0;
	}
	if (DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, uParam0, 3.450418E+35f))
	{
		uParam1->f_5 = iVar0;
	}
	else
	{
		uParam1->f_5 = 0;
	}
	if (DATAFILE::_PARSEDDATA_GET_FLOAT(&uVar4, uParam0, 1.743857E+34f))
	{
		uParam1->f_13 = uVar4;
	}
	else
	{
		uParam1->f_13 = 0f;
	}
	if (DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, uParam0, 5.853573E-13f))
	{
		uParam1->f_16 = func_1800(iVar0);
	}
	if (DATAFILE::_PARSEDDATA_GET_FLOAT(&uVar4, uParam0, 2.92439E+26f))
	{
		uParam1->f_15 = uVar4;
	}
	else
	{
		uParam1->f_15 = 0f;
	}
	if (DATAFILE::_PARSEDDATA_GET_INT(&uVar3, uParam0, 3.204777E-05f))
	{
		uParam1->f_6 = uVar3;
	}
	else
	{
		uParam1->f_6 = 0;
	}
	if (DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, uParam0, 5.382946E-06f))
	{
		uParam1->f_7 = iVar0;
		if (DATAFILE::_PARSEDDATA_GET_INT(&uVar3, uParam0, 5.9618E+30f))
		{
			uParam1->f_8 = uVar3;
		}
		else
		{
			uParam1->f_8 = 0;
		}
		if (DATAFILE::_PARSEDDATA_GET_FLOAT(&uVar4, uParam0, -6.533777E-33f))
		{
			uParam1->f_14 = uVar4;
		}
		else
		{
			uParam1->f_14 = 0f;
		}
	}
	else
	{
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_14 = 0f;
	}
	if (DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, uParam0, 5.69306E-27f))
	{
		uParam1->f_9 = iVar0;
		if (DATAFILE::_PARSEDDATA_GET_INT(&uVar3, uParam0, 479611.9f))
		{
			uParam1->f_10 = uVar3;
		}
		if (DATAFILE::_PARSEDDATA_GET_INT(&uVar3, uParam0, 4.188479E-06f))
		{
			uParam1->f_11 = uVar3;
		}
		if (DATAFILE::_PARSEDDATA_GET_INT(&uVar3, uParam0, -4.710037E-06f))
		{
			uParam1->f_12 = uVar3;
		}
	}
	else
	{
		uParam1->f_9 = 0;
		uParam1->f_10 = 0;
		uParam1->f_11 = 0;
		uParam1->f_12 = 0;
	}
	uParam0->f_1 = 3.633832E+25f;
	uParam0->f_2 = 1.854962E-22f;
	uParam0->f_3 = 1;
	uParam0->f_4 = uVar2;
	DATAFILE::_PARSEDDATA_GET_FILE(uParam0);
	if (DATAFILE::_PARSEDDATA_GET_INT(&uVar1, uParam0, -0.05136334f))
	{
		uParam1->f_1 = uVar1;
	}
	return true;
}

void func_1661(var uParam0, bool bParam1)
{
	int iVar0;
	struct<18> Var1;
	bool bVar19;
	struct<4> Var20;

	Var1.f_9 = 1;
	Var1.f_11 = -5.45926E-19f;
	iVar0 = func_1801(uParam0->f_17);
	if (iVar0 == 0)
	{
		return;
	}
	bVar19 = *uParam0;
	Var20 = { func_711(5.207907E-07f, func_710(1), 0.08386164f, 1) };
	if (bParam1 && bVar19 != func_1802(Var20, iVar0, 1, -1))
	{
		return;
	}
	Var1 = { func_1803(func_711(bVar19, Var20, iVar0, 1), 1, 0) };
	if (Var1.f_17 <= 0)
	{
		return;
	}
	uParam0->f_13 = func_1804(Var1.f_17);
}

void func_1662(var uParam0, var uParam1, var uParam2, var uParam3)
{
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	uParam0->f_4 = uParam3;
	PED::_SET_TEXTURE_LAYER_TEXTURE_MAP(*uParam0, 0, uParam0->f_2, uParam0->f_3, uParam0->f_4);
}

void func_1663(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 > 0 && (uParam1[(iParam2 - 1) /*18*/])->f_1 > (uParam1[iParam2 /*18*/])->f_1)
	{
		func_1805(uParam0, uParam1);
	}
	else
	{
		func_1806(uParam0, uParam1[iParam2 /*18*/]);
	}
}

void func_1664(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		PED::_SET_TEXTURE_LAYER_TEXTURE_MAP(*uParam0, uParam1->f_2, uParam1->f_3, uParam1->f_4, uParam1->f_5);
	}
	if (uParam1->f_9 != 0)
	{
		PED::_SET_TEXTURE_LAYER_PALLETE(*uParam0, uParam1->f_2, uParam1->f_9);
		PED::_SET_TEXTURE_LAYER_TINT(*uParam0, uParam1->f_2, uParam1->f_10, uParam1->f_11, uParam1->f_12);
	}
	if (uParam1->f_7 != 0)
	{
		PED::_SET_TEXTURE_LAYER_MOD(*uParam0, uParam1->f_2, uParam1->f_7, uParam1->f_14, uParam1->f_8);
	}
	if (uParam1->f_15 > 0f)
	{
		PED::_SET_TEXTURE_LAYER_ROUGHNESS(*uParam0, uParam1->f_2, uParam1->f_15);
	}
	PED::_SET_TEXTURE_LAYER_SHEET_GRID_INDEX(*uParam0, uParam1->f_2, uParam1->f_6);
	PED::_SET_TEXTURE_LAYER_ALPHA(*uParam0, uParam1->f_2, uParam1->f_13);
}

bool func_1665(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1666(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1667(bool bParam0)
{
	if (!func_714(bParam0, 0))
	{
	}
	if (func_1336(bParam0, -5.542951E+24f))
	{
		return true;
	}
	return false;
}

int func_1668(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_GET_SHOP_ITEM_NUM_WEARABLE_STATES(iParam0, bParam1, true))
	{
		if (PED::_GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX(iParam0, iVar0, bParam1, true) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1669(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_1336(uParam0->f_1[iParam1 /*3*/], 1.280781E-26f))
	{
		func_1340(uParam0, uParam0->f_1[iParam1 /*3*/]);
	}
	else
	{
		uParam0->f_1[iParam1 /*3*/] = Global_1953279.f_83[iParam1 /*12*/];
		uParam0->f_1[iParam1 /*3*/].f_1 = 0;
		func_1337(iParam1, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && uParam0->f_1[iVar0 /*3*/].f_1 == 1.494364E-28f)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1337(iVar0, iParam2);
	}
}

bool func_1670(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		else if (func_1807(uParam0[iVar0 /*6*/]))
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
				*(uParam0[iVar0 /*6*/]) = { func_969() };
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

bool func_1671(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_1808(iParam1->f_8, iParam0, iVar0, 2048) || func_1808(iParam1->f_8, iParam0, iVar0, 32768)) || func_1808(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_1808(iParam1->f_8, iParam0, iVar0, 4) || func_1808(iParam1->f_8, iParam0, iVar0, 256)) || func_1808(iParam1->f_8, iParam0, iVar0, 65536)) || func_1808(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_1808(iParam1->f_8, iParam0, iVar0, 1) || func_1808(iParam1->f_8, iParam0, iVar0, 8)) || func_1808(iParam1->f_8, iParam0, iVar0, 65536)) || func_1808(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_1808(iParam1->f_8, iParam0, iVar0, 1) || func_1808(iParam1->f_8, iParam0, iVar0, 16)) || func_1808(iParam1->f_8, iParam0, iVar0, 2)) || func_1808(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_1808(iParam1->f_8, iParam0, iVar0, 8) || func_1808(iParam1->f_8, iParam0, iVar0, 4096)) || func_1808(iParam1->f_8, iParam0, iVar0, 256)) || func_1808(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_1672(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_1673(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_1809(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_1809(iParam1, 2, 0, 0);
	return -1;
}

int func_1674(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_1809(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_1675(var uParam0, float fParam1, var uParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_692(bParam7);
	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(iVar0, &uParam0, bParam4) <= iParam6)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(iVar0, &uParam0, bParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

int func_1676()
{
	return Global_1940239.f_1556.f_4168.f_2083;
}

void func_1677(var uParam0)
{
	struct<37> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_35 = -1;
	func_1698(&Var0);
	*uParam0 = { Var0 };
}

int func_1678(int iParam0)
{
	int iVar0;

	if (!func_1557())
	{
		return -1;
	}
	if (!func_1363(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_1149417.f_4804.f_34[iVar0 /*3*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1679(int iParam0)
{
	int iVar0;
	float fVar1;
	bool bVar2;

	if (!func_1363(iParam0))
	{
		return -1;
	}
	bVar2 = func_1810(iParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		fVar1 = func_1549(iVar0);
		if (func_1811(bVar2, fVar1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1680(var uParam0)
{
	if (!func_1812(*uParam0))
	{
		return false;
	}
	if (func_1683(uParam0))
	{
		return true;
	}
	return UNLOCK::UNLOCK_IS_UNLOCKED(uParam0->f_2);
}

int func_1681(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	bool bVar6;

	if (!func_1363(*uParam0))
	{
		return -1;
	}
	if (!func_714(uParam0->f_2, 0))
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(uParam0->f_3)))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		bVar6 = func_1813(iVar1);
		Var2 = { func_711(bVar6, uParam0->f_3, 2.918308E+20f, 1) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var2))
		{
		}
		else
		{
			iVar0 = iVar1;
			iVar1++;
		}
	}
	return iVar0;
}

int func_1682(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	bool bVar7;
	int iVar8;

	if (uParam0->f_13 >= 2)
	{
		return 0;
	}
	if (!func_1363(*uParam0))
	{
		return -1;
	}
	if (!func_714(uParam0->f_2, 0))
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(uParam0->f_3)))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < 3)
	{
		bVar7 = func_1813(iVar2);
		Var3 = { func_711(bVar7, uParam0->f_3, 2.918308E+20f, 1) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
		}
		else
		{
			iVar8 = func_1814(iVar2);
			iVar0 = func_1189(3.078375E+12f, Var3, iVar8, 1, 0, 0);
			iVar1 = (iVar1 + iVar0);
			iVar2++;
		}
	}
	return iVar1;
}

int func_1683(var uParam0)
{
	return func_1815(uParam0->f_2, 1);
}

int func_1684(var uParam0)
{
	int iVar0;

	if (!func_1363(*uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_1366(iVar0, 1) == uParam0->f_2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1685(var uParam0)
{
	return uParam0->f_13 >= 2;
}

bool func_1686(var uParam0)
{
	return ((!uParam0->f_14 && uParam0->f_20) && func_1816(uParam0));
}

int func_1687(var uParam0)
{
	return 0;
}

int func_1688(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (uParam0->f_14)
	{
		return 0;
	}
	if (!uParam0->f_20)
	{
		return 0;
	}
	if (!func_1817(uParam0))
	{
		return 0;
	}
	iVar0 = func_1681(uParam0) + 1;
	bVar1 = func_1813(iVar0);
	if (!func_714(bVar1, 0))
	{
		return 0;
	}
	if (!func_1818(bVar1, &iVar2))
	{
		return 0;
	}
	uParam0->f_28 = iVar2;
	iVar3 = func_1819(iVar0, iVar2);
	if (iVar3 > 0 && uParam0->f_15 < iVar3)
	{
		return 0;
	}
	return 1;
}

int func_1689(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (uParam0->f_14)
	{
		return 0;
	}
	if (!uParam0->f_20)
	{
		return 0;
	}
	if (!func_1817(uParam0))
	{
		return 0;
	}
	iVar0 = func_1681(uParam0) + 1;
	bVar1 = func_1813(iVar0);
	if (!func_714(bVar1, 0))
	{
		return 0;
	}
	if (!func_1820(bVar1, &iVar2))
	{
		return 0;
	}
	uParam0->f_28 = iVar2;
	iVar3 = func_1819(iVar0, iVar2);
	if (iVar3 > 0 && uParam0->f_15 < iVar3)
	{
		return 0;
	}
	return 1;
}

var func_1690(var uParam0)
{
	return (((uParam0->f_26 || uParam0->f_25) || uParam0->f_24) || uParam0->f_23);
}

int func_1691(var uParam0)
{
	var uVar0;

	if (uParam0->f_20)
	{
		return 0;
	}
	if (!func_1817(uParam0))
	{
		return 0;
	}
	if (!func_1821(uParam0->f_2, &uVar0))
	{
		return 0;
	}
	uParam0->f_31 = uVar0;
	return 1;
}

int func_1692(var uParam0)
{
	var uVar0;

	if (uParam0->f_20)
	{
		return 0;
	}
	if (!func_1817(uParam0))
	{
		return 0;
	}
	if (!func_1822(uParam0->f_2, &uVar0))
	{
		return 0;
	}
	uParam0->f_31 = uVar0;
	return 1;
}

bool func_1693(var uParam0)
{
	return (((!uParam0->f_20 && func_1817(uParam0)) && !uParam0->f_29) && !uParam0->f_30);
}

int func_1694(var uParam0)
{
	return 0;
}

var func_1695(var uParam0)
{
	return (((uParam0->f_33 || uParam0->f_32) || uParam0->f_29) || uParam0->f_30);
}

int func_1696(bool bParam0, int iParam1)
{
	return func_1634(bParam0, iParam1, 1, 0, 1, 0);
}

int func_1697(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_1813(iParam0 + 1);
	return func_1696(bVar0, iParam1);
}

void func_1698(var uParam0)
{
	uParam0->f_9 = -2972364f;
	uParam0->f_10 = 1.713238E-28f;
}

int func_1699(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return -1;
	}
	if (!func_1363(iParam0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_1155135[iVar1 /*30*/].f_5[iVar0 /*3*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1700(var uParam0, int iParam1)
{
	return func_630(*uParam0, iParam1);
}

char* func_1701(var uParam0)
{
	return MISC::VAR_STRING(42, "MP_ABILITY_CARD_DISPLAY_STRING", MISC::VAR_STRING(0, uParam0->f_8), MISC::VAR_STRING(2, func_1823(uParam0->f_13)));
}

char* func_1702(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46)
{
	if (!func_1714(uParam46->f_13))
	{
		return "NULL";
	}
	return MISC::VAR_STRING(0, Param0.f_9[uParam46->f_13 /*12*/].f_11);
}

int func_1703(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	iVar0 = (iVar0 + iParam0 * 32);
	iVar0 = (iVar0 + Global_1295619);
	iVar1 = func_1824(iVar0, 1);
	if (func_1825(iVar1))
	{
		return iVar1;
	}
	return 0;
}

int func_1704(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_1825(iParam0))
	{
		return 0;
	}
	iVar0 = func_1724(iParam0, 1);
	if (!func_1826(Global_1156096.f_35859.f_919[iVar0 /*12*/]))
	{
		return 1;
	}
	iVar3 = func_1827(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
	iVar4 = 0;
	while (iVar4 < Global_1156096.f_35859[iVar3 /*6*/].f_5)
	{
		iVar1 = Global_1156096.f_35859[iVar3 /*6*/][iVar4];
		switch (func_1828(iParam0, iVar1))
		{
			case 0:
				func_1829(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1156096.f_35859.f_11700)
				{
					if (Global_1156096.f_35859.f_9503[iVar5 /*3*/] != iVar1 || Global_1156096.f_35859.f_9503[iVar5 /*3*/].f_1 != iParam0)
					{
					}
					else
					{
						func_1829(iVar1, iParam0, iVar4);
						func_1830(&(Global_1156096.f_35859.f_9503[iVar5 /*3*/]));
						Global_1156096.f_35859.f_11700 = (Global_1156096.f_35859.f_11700 - 1);
						Global_1156096.f_35859.f_9503[iVar5 /*3*/] = { Global_1156096.f_35859.f_9503[Global_1156096.f_35859.f_11700 /*3*/] };
						func_1830(&(Global_1156096.f_35859.f_9503[Global_1156096.f_35859.f_11700 /*3*/]));
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_1831(iVar1, 1);
				func_1832(iVar2, -1);
				if (Global_1156096.f_35859.f_3116[iVar2 /*31*/].f_29 <= 0)
				{
					func_1833(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1156096.f_35859.f_9502)
					{
						if (Global_1156096.f_35859.f_9302[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1156096.f_35859.f_9302[iVar6] = -1;
							Global_1156096.f_35859.f_9502 = (Global_1156096.f_35859.f_9502 - 1);
							Global_1156096.f_35859.f_9302[iVar6] = Global_1156096.f_35859.f_9302[Global_1156096.f_35859.f_9502];
							Global_1156096.f_35859.f_9302[Global_1156096.f_35859.f_9502] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1156096.f_35859.f_919[iVar0 /*12*/] = -1;
			func_1834(&(Global_1156096.f_35859.f_919[iVar0 /*12*/]));
			return 1;
		}

void func_1705(var uParam0, var uParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, uParam1->f_11);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_3, uParam1->f_12);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_4, uParam1->f_9);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_5, uParam1->f_10);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_41, func_1835(uParam1->f_1, uParam1->f_13));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_6, *uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_7, func_1554(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_34, uParam1->f_22);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_12, uParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_13, !uParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_35, func_1836(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_14, !uParam1->f_21);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_15, uParam1->f_33);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_16, uParam1->f_32);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_17, uParam1->f_34);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_18, func_1837(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_19, uParam1->f_26);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_20, uParam1->f_25);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_21, uParam1->f_27);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_22, (!uParam1->f_14 && uParam1->f_20));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_23, !uParam1->f_14);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_24, (!uParam1->f_14 && func_1838(4)));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_25, func_1839(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_26, func_1840(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_27, func_1841(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_28, func_1842(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_29, (uParam1->f_34 && func_1842(uParam1)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_30, (uParam1->f_27 && func_1842(uParam1)));
	if (uParam1->f_29)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_31, func_330(0));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_32, func_1843(0));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_31, func_330(func_1844(uParam1->f_17)));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_32, func_1843(func_1845(uParam1->f_17)));
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_33, uParam1->f_18);
	if (!uParam1->f_21)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_43, func_1846(uParam1->f_16));
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_36, uParam1->f_13);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_38, uParam1->f_15);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_40, func_1847(uParam1->f_13));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_10, uParam1->f_25);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, !uParam1->f_21);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_8, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_9, false);
}

bool func_1706(int iParam0)
{
	return func_1848() == iParam0;
}

void func_1707(int iParam0)
{
	struct<37> Var0;
	struct<37> Var37;
	int iVar74;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_35 = -1;
	Var37.f_7 = 1;
	Var37.f_13 = -1;
	Var37.f_15 = -1;
	Var37.f_16 = -1;
	Var37.f_17 = -1;
	Var37.f_18 = -1;
	Var37.f_19 = -1;
	Var37.f_35 = -1;
	iVar74 = 0;
	while (iVar74 < 3)
	{
		Var0 = { Var37 };
		func_1369(iParam0, &Var0, 2, iVar74);
		func_1849(&(Global_1940239.f_1556.f_4168.f_1797[iVar74 /*46*/]), Var0);
		if (func_1850(iVar74))
		{
			func_1851(&(Global_1940239.f_1556.f_4168.f_2034), Var0);
		}
		iVar74++;
	}
}

void func_1708(var uParam0, struct<16> Param1, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37)
{
	int iVar0;

	func_1705(uParam0, &Param1);
	iVar0 = func_1847(Param1.f_13);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_44, MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOCUS_XP_INFO", Param1.f_15, iVar0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45, func_1852(&Param1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_47, func_1853(&Param1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_46, func_1854(&Param1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_48, func_1855(&Param1));
}

void func_1709(struct<37> Param0)
{
	int iVar0;

	if (!func_1856())
	{
		return;
	}
	iVar0 = func_1676();
	if (func_1557())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_4168.f_5, true);
	}
	else if (iVar0 == 1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_4168.f_5, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_4168.f_5, false);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_4168.f_4, func_1857(Param0));
}

int func_1710(int iParam0, bool bParam1)
{
	float fVar0;
	struct<4> Var1;
	bool bVar5;

	if (func_1557())
	{
		return Global_1149417.f_4804.f_34[iParam0 /*3*/];
	}
	fVar0 = func_1549(iParam0);
	Var1 = { func_710(bParam1) };
	bVar5 = func_1550(Var1, fVar0, 0, bParam1);
	if (!func_1858(bVar5))
	{
		return 0;
	}
	return func_1552(bVar5);
}

void func_1711(int iParam0, var uParam1, struct<23> Param2, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38)
{
	bool bVar0;

	bVar0 = func_1859(iParam0);
	if (func_1557())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_47, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_46, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_50, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_49, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_48, false);
		func_1705(uParam1, &Param2);
		return;
	}
	func_1705(uParam1, &Param2);
	if (bVar0)
	{
		func_1860(&(Global_1149417.f_4621.f_36[iParam0 /*3*/].f_2), 1);
	}
	else
	{
		func_1861(&(Global_1149417.f_4621.f_36[iParam0 /*3*/].f_2), 1);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_46, (bVar0 && func_1862()));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_47, ((bVar0 && func_1862()) && func_1838(0)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_48, (Param2.f_22 && func_1862()));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_49, ((Param2.f_22 && func_1862()) && func_1838(3)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_50, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_51, func_1846(func_1863(iParam0)));
}

bool func_1712(int iParam0)
{
	return Global_1940239.f_1556.f_4168.f_2086 == iParam0;
}

void func_1713(var uParam0, var uParam1, int iParam2)
{
	func_1864(iParam2, uParam1);
	func_1705(uParam0, uParam1);
}

bool func_1714(int iParam0)
{
	if (iParam0 >= 0 && iParam0 <= 2)
	{
		return true;
	}
	return false;
}

int func_1715(var uParam0)
{
	int iVar0;

	if (!func_1363(*uParam0))
	{
		return 0;
	}
	iVar0 = func_1364(*uParam0, 1);
	func_1555();
	PLAYER::_SET_DEADEYE_TAGGING_ENABLED(Global_1295619.f_149[Global_1295619], Global_1149417.f_11.f_1562[iVar0 /*46*/].f_9[uParam0->f_13 /*12*/]);
	if (PLAYER::_GET_IS_DEADEYE_TAGGING_ENABLED(Global_1295619.f_149[Global_1295619]))
	{
		if (func_1198(0))
		{
			PLAYER::_SET_DEADEYE_TAGGING_CONFIG(Global_1295619.f_149[Global_1295619], 6);
		}
		else
		{
			PLAYER::_SET_DEADEYE_TAGGING_CONFIG(Global_1295619.f_149[Global_1295619], 7);
		}
	}
	PLAYER::_SET_LOCAL_PLAYER_PERSONA_ABILITY_FLAG(23, !Global_1149417.f_11.f_1562[iVar0 /*46*/].f_9[uParam0->f_13 /*12*/].f_1);
	PLAYER::_SET_LOCAL_PLAYER_PERSONA_ABILITY_FLAG(22, Global_1149417.f_11.f_1562[iVar0 /*46*/].f_9[uParam0->f_13 /*12*/].f_2);
	PLAYER::_SET_LOCAL_PLAYER_PERSONA_ABILITY_FLAG(21, Global_1149417.f_11.f_1562[iVar0 /*46*/].f_9[uParam0->f_13 /*12*/].f_2);
	PLAYER::_SET_LOCAL_PLAYER_PERSONA_ABILITY_FLAG(7, Global_1149417.f_11.f_1562[iVar0 /*46*/].f_9[uParam0->f_13 /*12*/].f_3);
	PLAYER::_SET_LOCAL_PLAYER_PERSONA_ABILITY_FLAG(12, Global_1149417.f_11.f_1562[iVar0 /*46*/].f_9[uParam0->f_13 /*12*/].f_4);
	PLAYER::_SET_LOCAL_PLAYER_PERSONA_ABILITY_FLAG(8, Global_1149417.f_11.f_1562[iVar0 /*46*/].f_9[uParam0->f_13 /*12*/].f_5);
	PLAYER::_SET_LOCAL_PLAYER_PERSONA_ABILITY_FLAG(18, Global_1149417.f_11.f_1562[iVar0 /*46*/].f_9[uParam0->f_13 /*12*/].f_6);
	PLAYER::_SET_LOCAL_PLAYER_PERSONA_ABILITY_FLAG(9, Global_1149417.f_11.f_1562[iVar0 /*46*/].f_9[uParam0->f_13 /*12*/].f_7);
	PLAYER::_SET_LOCAL_PLAYER_PERSONA_ABILITY_FLAG(10, Global_1149417.f_11.f_1562[iVar0 /*46*/].f_9[uParam0->f_13 /*12*/].f_8);
	PLAYER::_SET_LOCAL_PLAYER_PERSONA_ABILITY_FLAG(14, !Global_1149417.f_11.f_1562[iVar0 /*46*/].f_9[uParam0->f_13 /*12*/].f_9);
	PLAYER::_ENABLE_CUSTOM_DEADEYE_ABILITY(Global_1295619.f_149[Global_1295619], true);
	return 1;
}

int func_1716(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_1825(iParam0))
	{
		return 0;
	}
	iVar0 = func_1724(iParam0, 1);
	if (!func_1826(iParam1))
	{
		return 0;
	}
	iVar1 = func_1827(iParam1, 1);
	if (Global_1156096.f_35859.f_919[iVar0 /*12*/] == iParam1)
	{
		return 1;
	}
	if (func_1826(Global_1156096.f_35859.f_919[iVar0 /*12*/]))
	{
		func_1704(iParam0);
	}
	Global_1156096.f_35859.f_919[iVar0 /*12*/] = iParam1;
	iVar4 = 0;
	while (iVar4 < Global_1156096.f_35859[iVar1 /*6*/].f_5)
	{
		iVar2 = Global_1156096.f_35859[iVar1 /*6*/][iVar4];
		iVar3 = func_1831(iVar2, 1);
		switch (func_1865(iParam0, iVar2))
		{
			case 0:
				func_1866(iVar2, iParam0, iVar4);
				break;
			case 1:
				Global_1156096.f_35859.f_9503[Global_1156096.f_35859.f_11700 /*3*/] = iVar2;
				Global_1156096.f_35859.f_9503[Global_1156096.f_35859.f_11700 /*3*/].f_1 = iParam0;
				Global_1156096.f_35859.f_9503[Global_1156096.f_35859.f_11700 /*3*/].f_2 = iVar4;
				Global_1156096.f_35859.f_11700++;
				break;
			case 2:
				Jump @427; //curOff = 338
				if (Global_1156096.f_35859.f_3116[iVar3 /*31*/].f_29 <= 0)
				{
					Global_1156096.f_35859.f_9302[Global_1156096.f_35859.f_9502] = iVar2;
					Global_1156096.f_35859.f_9502++;
				}
				func_1832(iVar3, 1);
				iVar4++;
			}
			return 1;
		}

float func_1717(int iParam0)
{
	return (PLAYER::_GET_PLAYER_MAX_DEAD_EYE(iParam0, 0) - IntToFloat(func_1867(2)));
}

int func_1718(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

char* func_1719(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

char* func_1720(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_1721(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_991(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956862.f_1431.f_6[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1956862.f_1565.f_2.f_6[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_1722(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_991(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956862.f_1431.f_16[iParam0 /*3*/].f_2 = uParam1;
			break;
		case 1:
			Global_1956862.f_1565.f_2.f_16[iParam0 /*3*/].f_2 = uParam1;
			break;
		default:
			break;
	}
}

void func_1723(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1295619.f_3;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_CHANGE_ENTITY_HEALTH(iParam1, fParam0, 0, 0);
}

int func_1724(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2059285007:
			return 167;
		case -2006026692:
			return 176;
		case -1993903481:
			return 124;
		case -1970041458:
			return 142;
		case -1935700575:
			return 136;
		case -1927422497:
			return 127;
		case -1920464018:
			return 58;
		case -1919393558:
			return 27;
		case -1857550353:
			return 173;
		case -1855662261:
			return 55;
		case -1840995238:
			return 15;
		case -1835722213:
			return 88;
		case -1790318144:
			return 106;
		case -1786033368:
			return 62;
		case -1767968552:
			return 86;
		case -1767662471:
			return 32;
		case -1729980669:
			return 108;
		case -1729554078:
			return 49;
		case -1727526861:
			return 109;
		case -1722264360:
			return 18;
		case -1719665775:
			return 37;
		case -1716981503:
			return 107;
		case -1697567574:
			return 72;
		case -1685270562:
			return 181;
		case -1631930150:
			return 166;
		case -1629969648:
			return 174;
		case -1605880447:
			return 120;
		case -1575244501:
			return 61;
		case -1551628748:
			return 74;
		case -1543433893:
			return 70;
		case -1539337723:
			return 121;
		case -1525401254:
			return 64;
		case -1525233154:
			return 47;
		case -1491472827:
			return 94;
		case -1486927560:
			return 112;
		case -1480068681:
			return 50;
		case -1478178768:
			return 148;
		case -1465202595:
			return 104;
		case -1459368569:
			return 116;
		case -1431848307:
			return 76;
		case -1418298797:
			return 155;
		case -1391865428:
			return 171;
		case -1378468884:
			return 60;
		case -1291022662:
			return 117;
		case -1288042557:
			return 19;
		case -1248720641:
			return 7;
		case -1229834518:
			return 89;
		case -1223791123:
			return 79;
		case -1209874968:
			return 45;
		case -1197630873:
			return 153;
		case -1196069774:
			return 180;
		case -1181880939:
			return 80;
		case -1170784825:
			return 38;
		case -1125028284:
			return 137;
		case -1123356036:
			return 147;
		case -1100659165:
			return 6;
		case -1089821002:
			return 85;
		case -1084890102:
			return 172;
		case -1080696981:
			return 92;
		case -1010031245:
			return 39;
		case -992423055:
			return 157;
		case -979738281:
			return 77;
		case -931294997:
			return 111;
		case -920221586:
			return 110;
		case -900877140:
			return 30;
		case -885737328:
			return 114;
		case -885646667:
			return 67;
		case -837774766:
			return 78;
		case -813902658:
			return 182;
		case -799500009:
			return 145;
		case -751329575:
			return 139;
		case -711254121:
			return 132;
		case -660114191:
			return 31;
		case -649929946:
			return 53;
		case -636552746:
			return 123;
		case -587737142:
			return 71;
		case -546870456:
			return 159;
		case -521477124:
			return 82;
		case -481051896:
			return 135;
		case -425216802:
			return 17;
		case -415437740:
			return 103;
		case -415250715:
			return 144;
		case -392183396:
			return 90;
		case -343572565:
			return 21;
		case -340578116:
			return 169;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 177;
		case -126580932:
			return 0;
		case -117284255:
			return 122;
		case -60432888:
			return 44;
		case -56802666:
			return 102;
		case -47513954:
			return 99;
		case -46116991:
			return 163;
		case -35033037:
			return 133;
		case -33431232:
			return 12;
		case -29822088:
			return 40;
		case 0:
			return 1;
		case 1213703:
			return 154;
		case 54499763:
			return 98;
		case 111084081:
			return 56;
		case 114587291:
			return 29;
		case 149216078:
			return 57;
		case 168336706:
			return 149;
		case 173401469:
			return 100;
		case 180714777:
			return 81;
		case 268103762:
			return 97;
		case 282858309:
			return 183;
		case 320758674:
			return 158;
		case 352539363:
			return 179;
		case 362862598:
			return 170;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 456199285:
			return 168;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 175;
		case 638586808:
			return 118;
		case 659100749:
			return 59;
		case 666050502:
			return 65;
		case 698214003:
			return 2;
		case 713106899:
			return 36;
		case 780689752:
			return 3;
		case 791791441:
			return 125;
		case 797908556:
			return 42;
		case 798283666:
			return 141;
		case 807983049:
			return 150;
		case 839199173:
			return 91;
		case 846387993:
			return 14;
		case 852774198:
			return 113;
		case 878491929:
			return 33;
		case 887717126:
			return 66;
		case 926420921:
			return 51;
		case 946848176:
			return 68;
		case 952755846:
			return 24;
		case 955999834:
			return 134;
		case 956867472:
			return 9;
		case 1036630721:
			return 10;
		case 1037792287:
			return 140;
		case 1052684812:
			return 87;
		case 1075856357:
			return 95;
		case 1078589127:
			return 46;
		case 1095779900:
			return 22;
		case 1110815339:
			return 152;
		case 1138017610:
			return 11;
		case 1156950836:
			return 83;
		case 1195903441:
			return 52;
		case 1278022357:
			return 48;
		case 1281707602:
			return 164;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1449867002:
			return 162;
		case 1498983922:
			return 84;
		case 1547488310:
			return 161;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1636352616:
			return 151;
		case 1662680949:
			return 178;
		case 1698995037:
			return 4;
		case 1769731136:
			return 115;
		case 1801131110:
			return 75;
		case 1806354060:
			return 96;
		case 1811663962:
			return 131;
		case 1828803907:
			return 20;
		case 1829805500:
			return 54;
		case 1830494920:
			return 101;
		case 1838787462:
			return 129;
		case 1865781806:
			return 165;
		case 1899963938:
			return 63;
		case 1900141702:
			return 156;
		case 1903067887:
			return 126;
		case 1907663129:
			return 43;
		case 2040423027:
			return 128;
		case 2050123975:
			return 130;
		case 2096770678:
			return 119;
		case 2110112797:
			return 69;
		case 2119170919:
			return 160;
		case 2132307595:
			return 26;
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

void func_1725(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1295619.f_3;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	PED::_CHANGE_PED_STAMINA(iParam1, fParam0);
}

bool func_1726(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_1727(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, true);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, false);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, true);
	}
}

void func_1728(int iParam0)
{
	int iVar0;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1956862.f_5.f_7))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1956862.f_5.f_7) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1956862.f_5.f_7, iParam0);
		if (iVar0 == Global_1956862.f_5.f_14[iParam0 /*102*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956862.f_5.f_7, iParam0, "pause_info_panel_list", Global_1956862.f_5.f_14[iParam0 /*102*/]);
}

void func_1729(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_33, 440, !bParam0);
}

void func_1730(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_33, 439, !bParam0);
}

void func_1731(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_33, 438, !bParam0);
}

void func_1732(bool bParam0)
{
	float fVar0;

	fVar0 = 1.203047E-24f;
	if (bParam0)
	{
		HUD::_ENABLE_HUD_CONTEXT(fVar0);
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(fVar0);
	}
}

void func_1733(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, false);
	}
}

void func_1734(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, false);
	}
}

bool func_1735()
{
	return true;
	if (Global_1572887.f_14 == 0)
	{
		return true;
	}
	return Global_38.f_1;
}

int func_1736(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_1737()
{
	return Global_1902565;
}

void func_1738(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_1868(*iParam0);
	iVar1 = func_1869(*iParam0);
	iVar2 = func_1870(*iParam0);
	iVar3 = func_1871(*iParam0);
	iVar4 = func_1872(*iParam0);
	iVar5 = func_1873(*iParam0);
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
	iVar6 = func_1874(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1874(iVar1, iVar0);
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
	func_1875(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_1739(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_1740(int iParam0)
{
	if (func_1608(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_1741(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Global_1904398.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_38.f_3542)
	{
		if (Global_38.f_3542[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904398.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904398.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (iVar1 - Global_38.f_3542[iVar0 /*3*/]);
			if (Global_38.f_3542[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904398.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1742()
{
	if (!func_17())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

void func_1743(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1876())
	{
		Global_1913431.f_125 = MISC::GET_GAME_TIMER();
		Global_1913431.f_126 = iParam1;
	}
	Global_1913431.f_127 = (Global_1913431.f_127 + iParam0);
}

bool func_1744()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(-3.159453E+34f);
}

bool func_1745()
{
	return DLC::IS_DLC_PRESENT(-1.05615E-37f);
}

int func_1746(var uParam0, int iParam1)
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

int func_1747(bool bParam0)
{
	int iVar0;

	iVar0 = func_894(bParam0);
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

void func_1748(var uParam0)
{
	func_1609(uParam0, 8.505438E-34f);
	if (func_1185() == 3.272964E+34f)
	{
		func_1609(uParam0, 8.967694E-17f);
	}
	else
	{
		func_1609(uParam0, 1.721179E-28f);
	}
}

void func_1749(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_456(uParam0))
	{
		return;
	}
	if (Global_1292096.f_2539 < 20)
	{
		Global_1292096.f_2539++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1292096.f_2539.f_1[iVar0 /*22*/] = { Global_1292096.f_2539.f_1[iVar0 + 1 /*22*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	Global_1292096.f_2539.f_1[(Global_1292096.f_2539 - 1) /*22*/] = { Var1 };
}

bool func_1750(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(bParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_1751(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-1.304703E+22f, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(2.767241E+29f, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-1.523167E+09f, iParam2);
}

int func_1752(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 512441.5f))
	{
		return 1;
	}
	return 0;
}

int func_1753(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_714(bParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(bParam0, -9.085264E+22f, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

struct<10> func_1754(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_1755(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int* iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_1756(int iParam0)
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

int func_1757(bool bParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	int iVar43;

	iVar41 = 0;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(bParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if (Var0[iVar43 /*2*/].f_1 == iParam1)
			{
				iVar41 = Var0[iVar43 /*2*/];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_1758(bool bParam0)
{
	bool bVar0;

	if (!func_714(bParam0, 0))
	{
		return "";
	}
	bVar0 = func_1408(bParam0, 0);
	if (bVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(bVar0);
}

bool func_1759(bool bParam0)
{
	if (func_894(bParam0) == -1.955052E+34f || func_894(bParam0) == 4.029065E+31f)
	{
		return true;
	}
	return false;
}

char* func_1760(bool bParam0)
{
	int iVar0;

	if (!func_714(bParam0, 0))
	{
		return "";
	}
	iVar0 = func_1621(bParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(iVar0);
}

int func_1761(int iParam0)
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

int func_1762(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_1877(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_1763(int iParam0)
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

int func_1764(int iParam0)
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

int func_1765(int iParam0)
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

int func_1766(int iParam0)
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

int func_1767(int iParam0)
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

bool func_1768(int iParam0)
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

int func_1769()
{
	if (func_23() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_1770(bool bParam0, int iParam1)
{
	if (!func_714(bParam0, 0))
	{
		return false;
	}
	if (func_1771(bParam0) || func_1336(bParam0, 2.791187f))
	{
		return func_1878(func_1772(bParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, iParam1) > 0;
}

bool func_1771(bool bParam0)
{
	if (func_1336(bParam0, 2.944387E-36f))
	{
		return true;
	}
	return false;
}

bool func_1772(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_714(bParam0, 0))
	{
		return func_1879(func_1005(bParam0), bParam1);
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

int func_1773(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_1880(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1774(bool bParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_714(bParam0, 0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, iParam1);
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
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM(bParam0, iParam1, iVar0, uParam2[iVar0 /*2*/]))
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
		func_1881(bParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

void func_1775(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_1636(iParam0))
	{
		return;
	}
	if (func_1882(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_1883(iParam0, 1);
	}
	else
	{
		func_1884(iParam0, 1);
	}
	func_1885(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_1781(iVar0) == iParam0)
		{
			func_1782(iVar0, 0);
		}
		iVar0++;
	}
}

int func_1776(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 81:
			if (func_1886(iParam0))
			{
				return 5.727499E-28f;
			}
			else
			{
				return -4.550262E-15f;
			}
			break;
		case 111:
			if (func_1886(iParam0))
			{
				return -2.213167E-09f;
			}
			else
			{
				return -1.951939E-33f;
			}
			break;
		case 5:
			if (func_23() != -1 && func_1887() == 7.153792E+09f)
			{
				return 7.153792E+09f;
			}
			else
			{
				return 5.579046E+17f;
			}
			break;
		case 66:
			return 9.269587E-37f;
		case 83:
			return 7.668727E+24f;
		case 26:
			return -1.3254E+18f;
		case 40:
			if (!bParam1 || func_23() != -1)
			{
				return 1.225169E+20f;
			}
			if (func_1388(44))
			{
				return 1.225169E+20f;
			}
			else
			{
				return 2.517126E+23f;
			}
			break;
		case 98:
			if (func_23() != -1)
			{
				return 11802.65f;
			}
			else
			{
				return 3.581493E+20f;
			}
			break;
		case 70:
			return -5.202225E+07f;
		case 74:
			return 1.515653E+17f;
		case 99:
			return 0.05905914f;
		case 101:
			return -4.029773E+31f;
		case 62:
			return 1.957643E-10f;
		case 3:
			return -12802.21f;
		case 33:
			return 8.374734E-13f;
		case 87:
			if (func_23() != -1)
			{
				return 11802.65f;
			}
			else
			{
				return 6.753505E-13f;
			}
			break;
		case 37:
			return 2.333444E-32f;
		case 60:
			if (func_23() != -1)
			{
				return -0.004497551f;
			}
			else
			{
				return 3.93134E+35f;
			}
			break;
		case 135:
			return 0.0002236268f;
		case 127:
			return -4.581088E+29f;
		case 131:
			return 4.061754E+21f;
		case 121:
			return 6.18694E-30f;
		case 136:
			if (func_23() != -1)
			{
				return -2.363869E+07f;
			}
			if (!bParam1)
			{
				return 0.03422423f;
			}
			if (func_1388(44))
			{
				return 0.03422423f;
			}
			else
			{
				return 4.526744E+20f;
			}
			break;
		case 22:
			return 0.0002714096f;
		case 39:
			return -9.790009E+20f;
		case 4:
		case 9:
		case 45:
		case 63:
		case 76:
		case 84:
		case 104:
			break;
		case 116:
			return -2.676368E-33f;
	}
	if (bParam2)
	{
		iVar0 = func_1888(iParam0);
		if (iVar0 != -1)
		{
			return func_1889(iVar0, bParam1);
		}
	}
	return 0;
}

int func_1777(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP"):
			return -1;
		case joaat("LAW_REGION_CUMBERLAND_FOREST"):
		case joaat("LAW_REGION_VALENTINE"):
		case joaat("LAW_REGION_HEARTLANDS"):
		case joaat("LAW_REGION_CORNWALL"):
		case joaat("LAW_REGION_FORT_WALLACE"):
		case joaat("LAW_REGION_VALENTINE_LOCKDOWN"):
		case joaat("LAW_REGION_BUTCHER_CREEK"):
		case joaat("LAW_REGION_ROANOKE_RIDGE"):
		case joaat("LAW_REGION_EMERALD_RANCH"):
		case joaat("LAW_REGION_VAN_HORN"):
		case joaat("LAW_REGION_ANNESBURG"):
		case joaat("LAW_REGION_WAPITI"):
			return 1;
		case joaat("LAW_REGION_BAYOU_NWA"):
		case joaat("LAW_REGION_RHODES"):
		case joaat("LAW_REGION_RHODES_LOCKDOWN"):
		case joaat("LAW_REGION_LAGRAS"):
		case joaat("LAW_REGION_CALIGA_HALL"):
		case joaat("LAW_REGION_BLUEGILL_MARSH"):
		case joaat("LAW_REGION_SISIKA"):
		case joaat("LAW_REGION_BRAITHWAITE_MANOR"):
		case joaat("LAW_REGION_SAINT_DENIS"):
		case joaat("LAW_REGION_SCARLETT_MEADOWS"):
			return 2;
		case joaat("LAW_REGION_GRIZZLIES"):
			return 0;
		case joaat("LAW_REGION_MANICATO"):
		case joaat("LAW_REGION_GUAMA"):
		case joaat("LAW_REGION_AGUASDULCES"):
			return 5;
		case joaat("LAW_REGION_MANZANITA_POST"):
		case joaat("LAW_REGION_GREAT_PLAINS_MAINGAME"):
		case joaat("LAW_REGION_MANZANITA_POST_MAINGAME"):
		case joaat("LAW_REGION_GREAT_PLAINS"):
		case joaat("LAW_REGION_TALL_TREES"):
		case joaat("LAW_REGION_STRAWBERRY"):
		case joaat("LAW_REGION_BEECHERS_HOPE"):
		case joaat("LAW_REGION_TALL_TREES_MAINGAME"):
		case joaat("LAW_REGION_PRONGHORN_RANCH"):
		case joaat("LAW_REGION_BIG_VALLEY"):
		case joaat("LAW_REGION_BLACKWATER"):
		case joaat("LAW_REGION_BLACKWATER_MAINGAME"):
			return 3;
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME"):
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS"):
		case joaat("LAW_REGION_ARMADILLO"):
		case joaat("LAW_REGION_TUMBLEWEED"):
		case joaat("LAW_REGION_MACFARLANES_RANCH"):
		case joaat("LAW_REGION_THIEVES_LANDING"):
		case joaat("LAW_REGION_THIEVES_LANDING_MAINGAME"):
		case joaat("LAW_REGION_RIDGEWOOD_FARM"):
			return 4;
	}
	return -1;
}

void func_1778(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_805(iParam0))
	{
		return;
	}
	bVar0 = func_809(iParam0, 1.504633E-36f);
	if (bParam1)
	{
		if (!bVar0)
		{
			func_1890(iParam0, func_1737());
			func_1891(iParam0, 1.504633E-36f);
		}
	}
	else if (bVar0)
	{
		func_1093(iParam0, 1.504633E-36f);
		func_1890(iParam0, -15);
	}
	func_1892(iParam0);
}

void func_1779(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!func_805(iParam0))
	{
		return;
	}
	if (func_1893(iParam0) && !bParam1)
	{
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[iParam0 /*36*/].f_6))
	{
		iVar0 = Global_1887363[iParam0 /*36*/].f_6;
	}
	else
	{
		iVar0 = func_1894(iParam0);
	}
	bVar1 = func_809(iParam0, 9.403955E-38f);
	if (bParam1)
	{
		iVar2 = func_1895(iParam0);
		if (iParam2 > iVar2)
		{
			func_1896(iParam0, func_1737());
			func_1897(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_1891(iParam0, 9.403955E-38f);
			if (VOLUME::DOES_VOLUME_EXIST(iVar0))
			{
				if (iParam0 == 40)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				PATHFIND::_0xF2A2177AC848B3A8(iVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		func_1093(iParam0, 9.403955E-38f);
		func_1896(iParam0, -15);
		if (VOLUME::DOES_VOLUME_EXIST(iVar0))
		{
			PATHFIND::_0xF2A2177AC848B3A8(iVar0, 1, 1);
		}
	}
	func_1898(iParam0);
}

bool func_1780(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_1781(int iParam0)
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

void func_1782(int iParam0, bool bParam1)
{
	if (!func_1780(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1899(iParam0, 1);
	}
	else
	{
		if (func_1900(iParam0))
		{
			return;
		}
		func_1901(iParam0, 1);
	}
	func_1902(iParam0, bParam1);
}

void func_1783(var uParam0, int iParam1)
{
	uParam0->f_1 = (func_1903() - iParam1);
	func_426(uParam0, 1);
	func_427(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_1784()
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(8.360127E+26f) != 0)
	{
		return 0;
	}
	else if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-4.947796E+13f) != 0)
	{
		return 1;
	}
	return 2;
}

char* func_1785(int iParam0, int iParam1)
{
	if (func_1288(0))
	{
		return func_1904(0);
	}
	else if ((MISC::IS_BIT_SET(iParam0, 0) || MISC::IS_BIT_SET(iParam0, 17)) || MISC::IS_BIT_SET(iParam0, 18))
	{
		return "";
	}
	else if (MISC::IS_BIT_SET(iParam1, 12))
	{
		return MISC::VAR_STRING(2, "FM_WP_LEADERBOARD_PHOTOS_TAKEN");
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		return MISC::VAR_STRING(2, "FM_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 3))
	{
		return MISC::VAR_STRING(2, "UIC_LB_TIME");
	}
	else if (MISC::IS_BIT_SET(iParam0, 19))
	{
		return MISC::VAR_STRING(2, "UIC_LB_BOUT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::VAR_STRING(2, "FM_FISHING_LEADERBOARD_HOOKED");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::VAR_STRING(2, "FM_ROUNDUP_LEADERBOARD_TOTAL");
	}
	return MISC::VAR_STRING(2, "UIC_LB_KILLS");
}

char* func_1786(int iParam0, int iParam1)
{
	if (func_1288(0))
	{
		if (func_1288(1))
		{
			return func_1904(1);
		}
		else
		{
			return "";
		}
	}
	else if (func_1475(iParam0) || func_1479(iParam0))
	{
		return "";
	}
	else if (MISC::IS_BIT_SET(iParam1, 9))
	{
		return MISC::VAR_STRING(2, "FM_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 1))
	{
		return MISC::VAR_STRING(2, "UIC_LB_DEL");
	}
	else if (MISC::IS_BIT_SET(iParam1, 12))
	{
		return MISC::VAR_STRING(2, "FM_WP_LEADERBOARD_BEST_PHOTO");
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return MISC::VAR_STRING(2, "FM_LEADERBOARD_KILLS");
		}
		else
		{
			return MISC::VAR_STRING(2, "FM_LEADERBOARD_DEATHS");
		}
	}
	else if (MISC::IS_BIT_SET(iParam0, 3))
	{
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_TIME");
		}
		else
		{
			return func_1905(iParam0);
		}
	}
	else if (func_1474(iParam0) || MISC::IS_BIT_SET(iParam0, 19))
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 8))
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_VAL");
	}
	else if (MISC::IS_BIT_SET(iParam0, 20))
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_ACC");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::VAR_STRING(2, "FM_FISHING_LEADERBOARD_CAUGHT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 4))
	{
		return MISC::VAR_STRING(2, "FM_HUNTING_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_DEATHS");
}

char* func_1787(int iParam0, int iParam1)
{
	if (func_1288(0))
	{
		if (func_1288(2))
		{
			return func_1904(2);
		}
		else
		{
			return "";
		}
	}
	else if (MISC::IS_BIT_SET(iParam0, 13))
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("FM_POSSE_RACE_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 9))
	{
		return MISC::VAR_STRING(2, "FM_GOODS_TRAIN_LEADERBOARD_GOODS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 7))
	{
		return MISC::VAR_STRING(2, "FM_WRECKAGE_LEADERBOARD_FOUND");
	}
	else if (MISC::IS_BIT_SET(iParam1, 11))
	{
		return MISC::VAR_STRING(2, "FME_AT_SCORE_TAG");
	}
	else if (MISC::IS_BIT_SET(iParam1, 12))
	{
		return MISC::VAR_STRING(2, "FM_WP_LEADERBOARD_POINTS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		if (MISC::IS_BIT_SET(iParam1, 13))
		{
			return MISC::VAR_STRING(2, "FM_LEADERBOARD_KILLS");
		}
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return MISC::VAR_STRING(2, "FM_LEADERBOARD_DEATHS");
		}
		else
		{
			return MISC::VAR_STRING(2, "FM_LEADERBOARD_SCORE");
		}
	}
	else if (MISC::IS_BIT_SET(iParam0, 3) && MISC::IS_BIT_SET(iParam0, 0))
	{
		return func_1905(iParam0);
	}
	else if ((MISC::IS_BIT_SET(iParam0, 0) && !MISC::IS_BIT_SET(iParam0, 17)) && !func_1479(iParam0))
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_DEATHS");
	}
	else if (func_1475(iParam0) && !func_1479(iParam0))
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 2) || MISC::IS_BIT_SET(iParam0, 19))
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_CAPS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 2))
	{
		return MISC::VAR_STRING(2, "UIC_LB_DEL");
	}
	else if (MISC::IS_BIT_SET(iParam0, 14))
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_BOUT");
	}
	else if (MISC::IS_BIT_SET(iParam0, 21))
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_TA");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::VAR_STRING(2, "FM_FISHING_LEADERBOARD_WEIGHT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 4))
	{
		return MISC::VAR_STRING(2, "FM_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::VAR_STRING(2, "FM_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_SCORE");
}

char* func_1788()
{
	if (func_1288(0))
	{
		return func_1904(3);
	}
	return "";
}

void func_1789(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	MISC::SET_BIT(&iVar1, iVar0);
	func_1653(uParam0, iVar1, iParam2);
}

int func_1790(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return Global_1149417.f_5087[iParam0 /*10*/].f_5[iParam1];
}

int func_1791(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
	}
}

void func_1792(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == -1)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	Global_1149417.f_5087[iParam0 /*10*/].f_5[iParam1] = iParam2;
}

void func_1793(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	Global_1149417.f_5087[iParam0 /*10*/][iParam1] = iParam2;
}

int func_1794(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	return Global_1149417.f_5087[iParam0 /*10*/][iParam1];
}

void func_1795(vector3 vParam0)
{
	if (Global_1149417.f_5087.f_325 >= 50)
	{
		return;
	}
	if (vParam0.x == -1)
	{
		return;
	}
	Global_1149417.f_5087.f_326[Global_1149417.f_5087.f_324 /*3*/] = { vParam0 };
	Global_1149417.f_5087.f_324 = (Global_1149417.f_5087.f_324 + 1 % 50);
	Global_1149417.f_5087.f_325++;
}

void func_1796(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 189;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 4, &uParam1);
}

bool func_1797(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;

	switch (iParam0)
	{
		case -1912930450:
			fVar0 = 2.057189E+24f;
			if (func_894(func_1906(fVar0)) != 5.002459E-36f && !func_1336(func_1906(fVar0), 3.611922E-33f))
			{
				return false;
			}
			break;
		case -1745589872:
			fVar0 = 2.057189E+24f;
			if (!func_1336(func_1906(fVar0), -1.186825E-08f))
			{
				return false;
			}
			break;
		case -1549909015:
			fVar0 = 37.82234f;
			iVar1 = func_894(func_1906(fVar0));
			if (iVar1 != -9.847085E+19f && iVar1 != -7.463622E-36f)
			{
				return false;
			}
			break;
		case 357406204:
			fVar0 = -7.4271E-05f;
			iVar1 = func_894(func_1906(fVar0));
			if (iVar1 != 2.209101E-28f)
			{
				return false;
			}
			break;
		case -464635753:
			fVar0 = -4.710718E+22f;
			iVar1 = func_894(func_1906(fVar0));
			if (iVar1 != 7.30981E-14f)
			{
				return false;
			}
			break;
		case 1742327865:
			fVar0 = 2.057189E+24f;
			if (func_1336(func_1906(fVar0), -1.186825E-08f))
			{
				return false;
			}
			break;
		default:
			fVar0 = iParam0;
			break;
	}
	*iParam1 = func_1179(fVar0, 1);
	return true;
}

int func_1798(bool bParam0, float fParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = func_1175(0);
	func_1335(&(Global_1953279.f_1039), iVar0, bParam0, 2.24243E+12f, 1, fParam1);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1953279.f_1039));
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&(Global_1953279.f_1039)))
	{
		return 0;
	}
	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&uVar1, &(Global_1953279.f_1039), 1.154786E+11f))
	{
		return 0;
	}
	return uVar1;
}

void func_1799(int iParam0, int iParam1)
{
	Global_1953279.f_2844.f_3[iParam0] = (Global_1953279.f_2844.f_3[iParam0] || iParam1);
}

int func_1800(int iParam0)
{
	switch (iParam0)
	{
		case 377740851:
			return 0;
		case -897347426:
			return 1;
		case -409773112:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_1801(int iParam0)
{
	switch (iParam0)
	{
		case 12857284:
			return -2.662069E-33f;
		case 299749022:
			return -1.57624E+35f;
		case -1180698265:
			return -1.316039E-30f;
		case -487028314:
			return 9.554079E+08f;
		case 241235545:
			return 7.78559E-13f;
		case 1827902148:
			return -6.119388E-06f;
		case 1301555144:
			return 1.658512E+23f;
		case -2056583192:
			return -1.135926E-06f;
		case 1015239729:
			return -4.50996E+22f;
		case -340627321:
			return -3.898063E-35f;
		case -875805376:
			return -4.373475E-11f;
		case -768760704:
			return 2.146286E+17f;
		case 1089431066:
			return -7.533319E+25f;
		case -2118203104:
			return -1.824534E-33f;
		case 1285634184:
			return 0.01202079f;
		case -559080197:
			return 6.828502E-07f;
		case -1811760631:
			return -1.035598E+30f;
		case 1858448324:
			return -6.748957E-28f;
		default:
			break;
	}
	return 0;
}

int func_1802(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_1907(&uParam0, iParam4, bParam5, iParam6);
}

struct<18> func_1803(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<18> Var0;
	struct<15> Var18;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var18.f_9 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_692(bParam4), &uParam0, &Var18, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1908(&Var18, bParam5) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

float func_1804(int iParam0)
{
	return func_1096((BUILTIN::TO_FLOAT(iParam0) / 1176256512), 981668463 /* Float: 0.001f */, 1f);
}

void func_1805(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<18> Var2;

	iVar1 = (uParam0->f_6 - 1);
	Var2.f_2 = -1;
	Var2.f_13 = 1f;
	Var2.f_14 = 1f;
	iVar0 = (uParam0->f_6 - 1);
	while (iVar0 >= 1)
	{
		if ((uParam1[iVar0 /*18*/])->f_1 < (uParam1[(iVar0 - 1) /*18*/])->f_1)
		{
			PED::_REMOVE_PED_OVERLAY(*uParam0, (uParam1[(iVar0 - 1) /*18*/])->f_2);
			Var2 = { *(uParam1[iVar0 /*18*/]) };
			*(uParam1[iVar0 /*18*/]) = { *(uParam1[(iVar0 - 1) /*18*/]) };
			*(uParam1[(iVar0 - 1) /*18*/]) = { Var2 };
			iVar1 = (iVar0 - 1);
		}
	else
	{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	iVar0 = iVar1;
	while (iVar0 <= (uParam0->f_6 - 1))
	{
		func_1806(uParam0, uParam1[iVar0 /*18*/]);
		iVar0++;
	}
}

void func_1806(var uParam0, var uParam1)
{
	uParam1->f_2 = PED::_ADD_TEXTURE_LAYER(*uParam0, uParam1->f_3, uParam1->f_4, uParam1->f_5, uParam1->f_16, uParam1->f_13, uParam1->f_6);
	func_1664(uParam0, uParam1, 0);
}

bool func_1807(var uParam0)
{
	if (!func_1909(uParam0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(uParam0);
}

int func_1808(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_78(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_1809(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_1910(iParam0, iParam1, iParam2, iParam3);
}

int func_1810(int iParam0)
{
	if (!func_1363(iParam0))
	{
		return 0;
	}
	return Global_1149417.f_11.f_1562[func_1364(iParam0, 1) /*46*/].f_2;
}

bool func_1811(bool bParam0, float fParam1, bool bParam2)
{
	struct<4> Var0;

	if (!func_1858(bParam0))
	{
		return false;
	}
	Var0 = { func_710(bParam2) };
	if (func_1189(bParam0, Var0, fParam1, bParam2, 0, 0) >= 1)
	{
		return true;
	}
	return false;
}

bool func_1812(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36)
{
	if (func_1336(vParam0.z, 3.461648E-31f))
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(-1.143461E-11f))
		{
			return false;
		}
	}
	return true;
}

int func_1813(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_1911(iVar0);
}

int func_1814(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_1912(iVar0);
}

int func_1815(bool bParam0, bool bParam1)
{
	struct<4> Var0;

	if (!func_1858(bParam0))
	{
		return 0;
	}
	Var0 = { func_710(bParam1) };
	if (func_1189(bParam0, Var0, -6.307836f, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1189(bParam0, Var0, 1.117204E+09f, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1189(bParam0, Var0, -7.899958E+20f, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1189(bParam0, Var0, -7.941008E+09f, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1189(bParam0, Var0, -0.105234f, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	return 0;
}

bool func_1816(var uParam0)
{
	return uParam0->f_15 >= func_1847(uParam0->f_13);
}

bool func_1817(var uParam0)
{
	return UNLOCK::UNLOCK_IS_VISIBLE(uParam0->f_2);
}

bool func_1818(bool bParam0, int iParam1)
{
	*iParam1 = func_1913(bParam0, 1);
	return *iParam1 != 0;
}

int func_1819(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;

	bVar0 = func_1813(iParam0);
	if (!func_714(bVar0, 0))
	{
		return func_1847(iParam0);
	}
	if (!func_1774(bVar0, iParam1, &Var2, &iVar1, 1, 0))
	{
		return func_1847(iParam0);
	}
	iVar33 = 0;
	while (iVar33 < iVar1)
	{
		if (Var2[iVar33 /*2*/] != 3.078375E+12f)
		{
		}
		else
		{
			return Var2[iVar33 /*2*/].f_1;
		}
		iVar33++;
	}
	return 0;
}

bool func_1820(bool bParam0, int iParam1)
{
	*iParam1 = func_1914(bParam0, 1);
	return *iParam1 != 0;
}

bool func_1821(bool bParam0, var uParam1)
{
	*uParam1 = func_1915(bParam0, 1);
	return *uParam1 != 0;
}

bool func_1822(bool bParam0, var uParam1)
{
	*uParam1 = func_1916(bParam0, 1, 0);
	return *uParam1 != 0;
}

char* func_1823(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_1917(iVar0);
}

int func_1824(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1.983849E+34f;
		case 1:
			return 0;
		case 2:
			return 7.012177E-14f;
		case 3:
			return 6.201856E-11f;
		case 4:
			return 5.802811E+22f;
		case 5:
			return 2.823707E-24f;
		case 6:
			return -0.2239004f;
		case 7:
			return -1.088047E-06f;
		case 8:
			return -3.626104E+28f;
		case 9:
			return 0.000130309f;
		case 10:
			return 0.09850074f;
		case 11:
			return 425.5413f;
		case 12:
			return -4.315999E+37f;
		case 13:
			return -2.694199E-37f;
		case 14:
			return 1.413607E-08f;
		case 15:
			return -6.204927E-28f;
		case 16:
			return 4.588568E+18f;
		case 17:
			return -3.959858E+23f;
		case 18:
			return -1.118407E-23f;
		case 19:
			return -4.331356E-08f;
		case 20:
			return 2.501665E+27f;
		case 21:
			return -3.227801E+26f;
		case 22:
			return 13.01715f;
		case 23:
			return 4.037345E+13f;
		case 24:
			return 9.627365E-05f;
		case 25:
			return 7.443745E-24f;
		case 26:
			return 2.026166E+38f;
		case 27:
			return -9.391054E-31f;
		case 28:
			return 1.312736E+11f;
		case 29:
			return 7.991981E-35f;
		case 30:
			return -3370283f;
		case 31:
			return -1.472966E+15f;
		case 32:
			return -2.643282E-25f;
		case 33:
			return 2.055643E-07f;
		case 34:
			return 1.223067E-24f;
		case 35:
			return 3.519812E-19f;
		case 36:
			return 2.294125E-13f;
		case 37:
			return -1.323399E-23f;
		case 38:
			return -0.0006990102f;
		case 39:
			return -408.2926f;
		case 40:
			return -6.146053E+37f;
		case 41:
			return 1.843895E+09f;
		case 42:
			return 2.603308E-10f;
		case 43:
			return 1.788866E+30f;
		case 44:
			return -4.774157E+36f;
		case 45:
			return -2.703346E-05f;
		case 46:
			return 3.155687f;
		case 47:
			return -1.307886E-16f;
		case 48:
			return 4.53702E+07f;
		case 49:
			return -6.025472E-24f;
		case 50:
			return -5.549566E-15f;
		case 51:
			return 1.097092E-05f;
		case 52:
			return 51209.82f;
		case 53:
			return -3.427944E+15f;
		case 54:
			return 2.797283E+27f;
		case 55:
			return -1.805237E-28f;
		case 56:
			return 5.981237E-35f;
		case 57:
			return 1.377381E-33f;
		case 58:
			return -8.384399E-31f;
		case 59:
			return 2.790536E-15f;
		case 60:
			return -2.435559E-11f;
		case 61:
			return -2.109809E-18f;
		case 62:
			return -5.626023E-26f;
		case 63:
			return 9.465238E+29f;
		case 64:
			return -1.285639E-16f;
		case 65:
			return 4.971693E-15f;
		case 66:
			return 4.34906E-07f;
		case 67:
			return -1.193439E+07f;
		case 68:
			return 5.716243E-05f;
		case 69:
			return 3.285952E+37f;
		case 70:
			return -2.798712E-17f;
		case 71:
			return -5.580927E+17f;
		case 72:
			return -8.651253E-23f;
		case 73:
			return 3.747381E+17f;
		case 74:
			return -1.43141E-17f;
		case 75:
			return 2.648511E+26f;
		case 76:
			return -2.97946E-13f;
		case 77:
			return -4940.167f;
		case 78:
			return -6.063771E+08f;
		case 79:
			return -8.489454E-06f;
		case 80:
			return -0.0002707063f;
		case 81:
			return 1.901747E-32f;
		case 82:
			return -1.354052E+20f;
		case 83:
			return 1965.35f;
		case 84:
			return 3.811866E+15f;
		case 85:
			return -0.5416063f;
		case 86:
			return -2.567827E-25f;
		case 87:
			return 0.3724521f;
		case 88:
			return -9.409657E-28f;
		case 89:
			return -5.311206E-06f;
		case 90:
			return -6.035422E+24f;
		case 91:
			return 7.751116E-09f;
		case 92:
			return -1.170881f;
		case 93:
			return 1.199861E-20f;
		case 94:
			return -2.136218E-15f;
		case 95:
			return 2.504144f;
		case 96:
			return 4.1291E+26f;
		case 97:
			return 2.474447E-29f;
		case 98:
			return 5.630629E-37f;
		case 99:
			return -1.420568E+37f;
		case 100:
			return 1.029874E-32f;
		case 101:
			return 3.000764E+27f;
		case 102:
			return -6.532329E+36f;
		case 103:
			return -8.921644E+23f;
		case 104:
			return -1.896069E-14f;
		case 105:
			return -3.04206E+30f;
		case 106:
			return -4.077602E-26f;
		case 107:
			return -1.746813E-23f;
		case 108:
			return -5.857211E-24f;
		case 109:
			return -7.032691E-24f;
		case 110:
			return -682118.9f;
		case 111:
			return -259651.7f;
		case 112:
			return -3.098716E-15f;
		case 113:
			return 2.471516E-08f;
		case 114:
			return -1.184373E+07f;
		case 115:
			return 1.903711E+25f;
		case 116:
			return -2.926611E-14f;
		case 117:
			return -3.27261E-08f;
		case 118:
			return 4.998134E-16f;
		case 119:
			return 1.039213E+37f;
		case 120:
			return -1.695836E-19f;
		case 121:
			return -4.154021E-17f;
		case 122:
			return -4.231212E+34f;
		case 123:
			return -1.006104E+16f;
		case 124:
			return -2.015574E-33f;
		case 125:
			return 1.616887E-10f;
		case 126:
			return 1.181052E+30f;
		case 127:
			return -4.864643E-31f;
		case 128:
			return 1.027975E+35f;
		case 129:
			return 5.944821E+27f;
		case 130:
			return 2.315885E+35f;
		case 131:
			return 6.088108E+26f;
		case 132:
			return -2.132E+13f;
		case 133:
			return -3.878659E+37f;
		case 134:
			return 0.0001198768f;
		case 135:
			return -3.90574E+21f;
		case 136:
			return -2.458307E-31f;
		case 137:
			return -0.02947152f;
		case 138:
			return -1.830049E+29f;
		case 139:
			return -7.88644E+11f;
		case 140:
			return 0.1071551f;
		case 141:
			return 2.707422E-10f;
		case 142:
			return -1.420883E-32f;
		case 143:
			return -3.587065E+31f;
		case 144:
			return -9.05641E+23f;
		case 145:
			return -1.453565E+10f;
		case 146:
			return 1.71906E+12f;
		case 147:
			return -0.03392266f;
		case 148:
			return -6.349976E-15f;
		case 149:
			return 6.577739E-33f;
		case 150:
			return 6.142469E-10f;
		case 151:
			return 3.153457E+20f;
		case 152:
			return 45.42424f;
		case 153:
			return -7.515103E-05f;
		case 154:
			return 1213703;
		case 155:
			return -8.756652E-13f;
		case 156:
			return 9.599553E+29f;
		case 157:
			return -1734.608f;
		case 158:
			return 1.99915E-27f;
		case 159:
			return -1.66755E+19f;
		case 160:
			return 6.911389E+37f;
		case 161:
			return 2.125673E+17f;
		case 162:
			return 6.465534E+13f;
		case 163:
			return -1.597654E+37f;
		case 164:
			return 6.011118E+07f;
		case 165:
			return 5.619351E+28f;
		case 166:
			return -1.976997E-20f;
		case 167:
			return -9.112642E-36f;
		case 168:
			return 1.464512E-22f;
		case 169:
			return -4.332557E+26f;
		case 170:
			return 6.496431E-26f;
		case 171:
			return -7.834105E-12f;
		case 172:
			return -0.8355108f;
		case 173:
			return -1.577966E-28f;
		case 174:
			return -2.293733E-20f;
		case 175:
			return 3.031218E-18f;
			return -7.17595E-34f;
			return -1.124586E+33f;
			return 2.849983E+21f;
			return 2.652063E-26f;
			return -8.650952E-05f;
			return -2.329539E-22f;
			return -4.241801E+09f;
			return 8.680439E-29f;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

bool func_1825(int iParam0)
{
	int iVar0;

	iVar0 = func_1724(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_1826(int iParam0)
{
	int iVar0;

	iVar0 = func_1827(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_1827(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3"):
			return 100;
		case joaat("CONTENT__PREDATOR__LEVEL_0"):
			return 136;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3"):
			return 63;
		case -2082434331:
			return 152;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2"):
			return 65;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2"):
			return 93;
		case -2038430863:
			return 151;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1"):
			return 64;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2"):
			return 35;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3"):
			return 6;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2"):
			return 56;
		case joaat("CONTENT__PREDATOR__LEVEL_3"):
			return 139;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3"):
			return 54;
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS"):
			return 110;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2"):
			return 78;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1"):
			return 80;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2"):
			return 62;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME"):
			return 73;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2"):
			return 41;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1"):
			return 25;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1"):
			return 92;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2"):
			return 47;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1"):
			return 61;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3"):
			return 3;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1"):
			return 49;
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY"):
			return 148;
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS"):
			return 107;
		case joaat("UNLOCK__ROLE__INTUITION_BONUS"):
			return 111;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1"):
			return 55;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3"):
			return 9;
		case joaat("CONTENT__PREDATOR__LEVEL_1"):
			return 137;
		case -1246069683:
			return 124;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1"):
			return 46;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1"):
			return 74;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3"):
			return 69;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1"):
			return 7;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4"):
			return 131;
		case joaat("CONTENT__PREDATOR__LEVEL_7"):
			return 143;
		case -1105699593:
			return 153;
		case -1047626954:
			return 118;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1"):
			return 1;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3"):
			return 79;
		case -980934770:
			return 125;
		case joaat("CONTENT__PREDATOR__LEVEL_4"):
			return 140;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5"):
			return 132;
		case joaat("CONTENT__PREDATOR__LEVEL_6"):
			return 142;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3"):
			return 60;
		case -821191074:
			return 115;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1"):
			return 40;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3"):
			return 48;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1"):
			return 77;
		case joaat("ABILITY_CARD__HANGMAN_TIER_2"):
			return 17;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2"):
			return 2;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3"):
			return 72;
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM"):
			return 121;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2"):
			return 59;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3"):
			return 85;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3"):
			return 94;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1"):
			return 4;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2"):
			return 68;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1"):
			return 58;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1"):
			return 128;
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY"):
			return 119;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1"):
			return 10;
		case joaat("CONTENT__HUNTED__MASKED"):
			return 146;
		case joaat("CONTENT__PASSIVE_MODE"):
			return 135;
		case -193167881:
			return 127;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3"):
			return 30;
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN"):
			return 122;
		case joaat("CONSUMABLE__DAILY_STEW"):
			return 150;
		case joaat("CONTENT__PREDATOR__LEVEL_5"):
			return 141;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1"):
			return 67;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1"):
			return 43;
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS"):
			return 106;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3"):
			return 39;
		case -1:
			return 0;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2"):
			return 8;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2"):
			return 11;
		case 130533095:
			return 126;
		case joaat("ABILITY_CARD__HANGMAN_TIER_3"):
			return 18;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2"):
			return 44;
		case 158579484:
			return 117;
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE"):
			return 101;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3"):
			return 15;
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS"):
			return 113;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6"):
			return 133;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1"):
			return 86;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2"):
			return 71;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2"):
			return 29;
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS"):
			return 105;
		case joaat("STATUS_EFFECT__POISON"):
			return 102;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3"):
			return 12;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3"):
			return 51;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7"):
			return 134;
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS"):
			return 109;
		case 549687162:
			return 145;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1"):
			return 28;
		case joaat("ABILITY_CARD__HANGMAN_TIER_1"):
			return 16;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2"):
			return 26;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1"):
			return 98;
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF"):
			return 149;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3"):
			return 45;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2"):
			return 50;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3"):
			return 88;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3"):
			return 36;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2"):
			return 90;
		case joaat("CONTENT__PREDATOR__LEVEL_8"):
			return 144;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2"):
			return 81;
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS"):
			return 114;
		case 808176588:
			return 116;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2"):
			return 38;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1"):
			return 70;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3"):
			return 21;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2"):
			return 14;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1"):
			return 89;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2"):
			return 96;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3"):
			return 82;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2"):
			return 87;
		case joaat("UNLOCK__ROLE__FOCUS_BONUS"):
			return 104;
		case 1130659268:
			return 123;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2"):
			return 20;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2"):
			return 75;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1"):
			return 31;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3"):
			return 97;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1"):
			return 19;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2"):
			return 32;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3"):
			return 24;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2"):
			return 129;
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS"):
			return 112;
		case joaat("CONTENT__PREDATOR__LEVEL_2"):
			return 138;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1"):
			return 83;
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF"):
			return 147;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3"):
			return 57;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1"):
			return 22;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3"):
			return 33;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3"):
			return 130;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1"):
			return 13;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2"):
			return 84;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1"):
			return 95;
		case joaat("EQUIPMENT__NED_KELLY_COOP"):
			return 120;
		case joaat("STATUS_EFFECT__TRACKING"):
			return 103;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2"):
			return 23;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2"):
			return 99;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3"):
			return 66;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1"):
			return 52;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3"):
			return 27;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3"):
			return 76;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2"):
			return 5;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3"):
			return 42;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1"):
			return 37;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1"):
			return 34;
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS"):
			return 108;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2"):
			return 53;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3"):
			return 91;
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

int func_1828(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1918(iParam0);
	iVar1 = Global_1295619;
	iVar2 = func_1831(iParam1, 1);
	switch (Global_1156096.f_35859.f_3116[iVar2 /*31*/].f_1)
	{
		case joaat("ON_DISABLE"):
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("DURATION"):
		case joaat("DURATION_OR_MISS"):
		case joaat("ALLY_LEAVE_DEADEYE"):
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_1829(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_1825(iParam1))
	{
		return 0;
	}
	if (!func_1919(iParam0))
	{
		return 0;
	}
	iVar0 = func_1831(iParam0, 1);
	func_1920(iParam0, iParam1, iParam2);
	if (func_1921(Global_1156096.f_35859.f_3116[iVar0 /*31*/]) && func_1922(iParam0, Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4))
	{
		vVar1 = { func_1923(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4) };
		if (func_1924(vVar1))
		{
			if (func_1925(vVar1.x, vVar1.y, vVar1.z))
			{
				func_1926(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_1927(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4);
			}
		}
		else
		{
			func_1927(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4);
		}
	}
	return 1;
}

void func_1830(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_1831(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS_EFFECT"):
			return 145;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2_EFFECT"):
			return 108;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1_EFFECT"):
			return 90;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_LOCAL_EFFECT"):
			return 79;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3_EFFECT"):
			return 60;
		case joaat("STATUS_EFFECT__POISON_EFFECT"):
			return 137;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2_EFFECT"):
			return 91;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2_EFFECT"):
			return 75;
		case -2019073637:
			return 198;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3_EFFECT"):
			return 26;
		case joaat("CONTENT__PREDATOR__LEVEL_2_EFFECTS"):
			return 180;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3_EFFECT"):
			return 92;
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY_EFFECT"):
			return 194;
		case joaat("ABILITY_CARD__HANGMAN_TIER_2_EFFECT"):
			return 28;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_TAKEN_EFFECT"):
			return 130;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3_EFFECT"):
			return 49;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3_EFFECT"):
			return 22;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1_EFFECT"):
			return 55;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_ON_HORSEBACK_INDICATOR"):
			return 6;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2_EFFECT"):
			return 134;
		case joaat("ABILITY_CARD__HANGMAN_TIER_3_EFFECT"):
			return 29;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3_EFFECT"):
			return 16;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3_EFFECT"):
			return 112;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3_EFFECT"):
			return 106;
		case joaat("ABILITY_CARD__HANGMAN_INDICATOR"):
			return 30;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGED_INDICATOR"):
			return 8;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2_EFFECT"):
			return 111;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2_EFFECT"):
			return 96;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3_EFFECT"):
			return 45;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_EFFECT"):
			return 63;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2_EFFECT"):
			return 38;
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS"):
			return 188;
		case joaat("EQUIPMENT__NED_KELLY_BASE_IMMUNITIES"):
			return 156;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_INDICATOR"):
			return 50;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1_EFFECT"):
			return 117;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3_EFFECT"):
			return 39;
		case joaat("CONTENT__PREDATOR__LEVEL_4_EFFECTS"):
			return 182;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3_EFFECT"):
			return 109;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3_EFFECT"):
			return 33;
		case -1394912816:
			return 199;
		case -1391351739:
			return 166;
		case joaat("ABILITY_CARD__HANGMAN_TIER_1_EFFECT"):
			return 27;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1_EFFECT"):
			return 110;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_1_COST"):
			return 1;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_PENALTY"):
			return 46;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_2_COST"):
			return 2;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_TAKEN_EFFECT"):
			return 132;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3_EFFECT"):
			return 119;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3_EFFECT"):
			return 76;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_AURA"):
			return 61;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7_EFFECT"):
			return 173;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1_EFFECT"):
			return 47;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1_EFFECT"):
			return 74;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1_EFFECT"):
			return 31;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1_EFFECT"):
			return 123;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2_EFFECT"):
			return 124;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2_EFFECT"):
			return 11;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_INDICATOR"):
			return 103;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2_EFFECT"):
			return 21;
		case joaat("CONTENT__PREDATOR__LEVEL_6_EFFECTS"):
			return 184;
		case -749371485:
			return 164;
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS_EFFECT"):
			return 142;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_LOCAL_EFFECT"):
			return 81;
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS_EFFECT"):
			return 148;
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF_EFFECT"):
			return 193;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3_EFFECT"):
			return 57;
		case joaat("CONTENT__PREDATOR__LEVEL_3_EFFECTS"):
			return 181;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2_EFFECT"):
			return 48;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2_EFFECT"):
			return 59;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3_EFFECT"):
			return 97;
		case joaat("CONTENT__PREDATOR__LEVEL_7_EFFECTS"):
			return 185;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1_EFFECT"):
			return 104;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3_EFFECT"):
			return 19;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1_EFFECT"):
			return 133;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1_EFFECT"):
			return 113;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_INDICATOR"):
			return 23;
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM_EFFECT"):
			return 160;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_INDICATOR"):
			return 5;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_AURA"):
			return 13;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_COST"):
			return 66;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_INDICATOR"):
			return 4;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1_COST"):
			return 51;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6_EFFECT"):
			return 172;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_PENALTY"):
			return 68;
		case -254950601:
			return 152;
		case -242870769:
			return 163;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2_EFFECT"):
			return 35;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2_EFFECT"):
			return 105;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2_EFFECT"):
			return 41;
		case joaat("EQUIPMENT__NED_KELLY_BASE_EFFECTS"):
			return 155;
		case -124368414:
			return 197;
		case -106398498:
			return 153;
		case -97000889:
			return 86;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3_EFFECT"):
			return 169;
		case -1:
			return 0;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2_EFFECT"):
			return 56;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3_EFFECT"):
			return 125;
		case joaat("ABILITY_CARD__DEFAULT_WINDED_INDICATOR"):
			return 9;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1_EFFECT"):
			return 69;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2_EFFECT"):
			return 15;
		case joaat("CONTENT__PASSIVE_MODE__IMMUNITIES_EFFECT"):
			return 177;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_COST"):
			return 64;
		case joaat("CONTENT__PASSIVE_MODE__MOUNT_EFFECTS"):
			return 175;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1_EFFECT"):
			return 98;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_LOCAL_EFFECT"):
			return 77;
		case 275909046:
			return 151;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5_EFFECT"):
			return 171;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_INDICATOR"):
			return 54;
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE_EFFECT"):
			return 136;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3_EFFECT"):
			return 89;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_DEALT_EFFECT"):
			return 127;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_DEALT_EFFECT"):
			return 129;
		case 558636891:
			return 187;
		case joaat("CONSUMABLE__DAILY_STEW_EFFECT"):
			return 196;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_REMOTE_EFFECT"):
			return 80;
		case 634217179:
			return 150;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2_EFFECT"):
			return 70;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1_EFFECT"):
			return 95;
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF_EFFECT"):
			return 195;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1_EFFECT"):
			return 107;
		case joaat("UNLOCK__ROLE__FOCUS_BONUS_EFFECT"):
			return 139;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1_EFFECT"):
			return 20;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_REMOTE_EFFECT"):
			return 82;
		case joaat("CONTENT__PREDATOR__LEVEL_0_EFFECTS"):
			return 178;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_EFFECT"):
			return 65;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1_EFFECT"):
			return 58;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1_EFFECT"):
			return 83;
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS_EFFECT"):
			return 149;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2_EFFECT"):
			return 18;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_COST"):
			return 102;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4_EFFECT"):
			return 170;
		case joaat("CONTENT__PREDATOR__LEVEL_8_EFFECTS"):
			return 186;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2_EFFECT"):
			return 84;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3_EFFECT"):
			return 100;
		case joaat("CONTENT__HUNTED__MASKED_EFFECTS"):
			return 192;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_DEADEYE_INDICATOR"):
			return 93;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_DEALT_EFFECT"):
			return 131;
		case joaat("CONTENT__PREDATOR__LEVEL_5_EFFECTS"):
			return 183;
		case joaat("EQUIPMENT__NED_KELLY_BASE_RESTRICTIONS"):
			return 157;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1_EFFECT"):
			return 17;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3_EFFECT"):
			return 122;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3_EFFECT"):
			return 115;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1_EFFECT"):
			return 34;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2_EFFECT"):
			return 32;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1_EFFECT"):
			return 43;
		case joaat("STATUS_EFFECT__TRACKING_EFFECT"):
			return 138;
		case joaat("CONTENT__PASSIVE_MODE__VEHICLE_EFFECTS"):
			return 176;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3_EFFECT"):
			return 42;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1_EFFECT"):
			return 10;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3_EFFECT"):
			return 12;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_AURA"):
			return 73;
		case 1256374770:
			return 165;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3_EFFECT"):
			return 36;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1_EFFECT"):
			return 37;
		case joaat("CONTENT__PREDATOR__BASE_IMMUNITIES"):
			return 190;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2_EFFECT"):
			return 114;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2_EFFECT"):
			return 99;
		case 1305406380:
			return 162;
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS_EFFECT"):
			return 144;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2_EFFECT"):
			return 25;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2_EFFECT"):
			return 88;
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS_EFFECT"):
			return 143;
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS_EFFECT"):
			return 140;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_EAGLE_EYE_INDICATOR"):
			return 94;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2_EFFECT"):
			return 168;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3_EFFECT"):
			return 85;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1_EFFECT"):
			return 87;
		case 1462245043:
			return 154;
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS_VULNERABLE"):
			return 189;
		case joaat("UNLOCK__ROLE__INTUITION_BONUS_EFFECT"):
			return 146;
		case joaat("CONTENT__PREDATOR__RESPAWN_EFFECTS"):
			return 191;
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS_EFFECT"):
			return 147;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_COST"):
			return 62;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_REMOTE_EFFECT"):
			return 78;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_INDICATOR"):
			return 126;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_INDICATOR"):
			return 116;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_PENALTIES"):
			return 72;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_EFFECT"):
			return 67;
		case joaat("ABILITY_CARD__WINNING_STREAK_INDICATOR"):
			return 101;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_TAKEN_EFFECT"):
			return 128;
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY_EFFECT"):
			return 158;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3_EFFECT"):
			return 71;
		case joaat("CONTENT__PREDATOR__LEVEL_1_EFFECTS"):
			return 179;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3_EFFECT"):
			return 135;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_3_COST"):
			return 3;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2_EFFECT"):
			return 121;
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS_EFFECT"):
			return 141;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1_EFFECT"):
			return 24;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1_EFFECT"):
			return 167;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1_EFFECT"):
			return 40;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_ON_HORSEBACK_INDICATOR"):
			return 7;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3_COST"):
			return 53;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2_EFFECT"):
			return 118;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2_EFFECT"):
			return 44;
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN_EFFECT"):
			return 161;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2_COST"):
			return 52;
		case joaat("CONTENT__PASSIVE_MODE__DAMAGE_EFFECTS"):
			return 174;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1_EFFECT"):
			return 120;
		case joaat("EQUIPMENT__NED_KELLY_COOP_EFFECT"):
			return 159;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1_EFFECT"):
			return 14;
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

void func_1832(int iParam0, int iParam1)
{
	Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 = (Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1);
}

void func_1833(int iParam0, int iParam1)
{
	Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
}

void func_1834(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0 /*2*/] = 0;
		uParam0->f_1[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
}

float func_1835(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	return func_1928(iParam0, iVar0);
}

bool func_1836(var uParam0)
{
	return (uParam0->f_20 && !uParam0->f_22);
}

char* func_1837(var uParam0)
{
	if (uParam0->f_29)
	{
		return "NET_PLAYER_ABILITY_PROMPT_CLAIM_WITH_REWARD";
	}
	else if (uParam0->f_30)
	{
		return "IB_REDEEM";
	}
	if (uParam0->f_33)
	{
		return "IB_BUY_NOW";
	}
	return "IB_BUY";
}

bool func_1838(int iParam0)
{
	int iVar0;

	iVar0 = func_1929();
	switch (iVar0)
	{
		case 0:
			return true;
		case 1:
			return iParam0 == 0;
		case 2:
			return iParam0 == 1;
		case 3:
			return iParam0 == 2;
		case 4:
			return iParam0 == 5;
		default:
			break;
	}
	return false;
}

char* func_1839(var uParam0)
{
	if (uParam0->f_23)
	{
		return "NET_PLAYER_ABILITY_PROMPT_UPGRADE_WITH_VOUCHER";
	}
	else if (uParam0->f_24)
	{
		return "NET_PLAYER_ABILITY_PROMPT_UPGRADE_WITH_OFFER";
	}
	else if (uParam0->f_26)
	{
		return "IB_UPGRADE_NOW";
	}
	return "IB_UPGRADE";
}

bool func_1840(var uParam0)
{
	return (((uParam0->f_32 || uParam0->f_25) || uParam0->f_24) || uParam0->f_23);
}

bool func_1841(var uParam0)
{
	return (!func_1840(uParam0) && (uParam0->f_33 || uParam0->f_26));
}

int func_1842(var uParam0)
{
	if (!uParam0->f_20 && uParam0->f_29)
	{
		if (uParam0->f_17 < 0)
		{
			return 0;
		}
		else if (func_1631(uParam0->f_17))
		{
			return 1;
		}
	}
	if (func_1840(uParam0))
	{
		if (uParam0->f_17 < 0)
		{
			return 0;
		}
		else if (func_1631(uParam0->f_17))
		{
			return 1;
		}
	}
	else if (func_1841(uParam0))
	{
		if (uParam0->f_18 < 0)
		{
			return 0;
		}
		else if (func_1930(uParam0->f_18))
		{
			return 1;
		}
	}
	return 0;
}

char* func_1843(int iParam0)
{
	if (iParam0 == 0)
	{
		return "00";
	}
	return func_330(iParam0);
}

int func_1844(int iParam0)
{
	return (iParam0 / 100);
}

int func_1845(int iParam0)
{
	return (iParam0 % 100);
}

char* func_1846(int iParam0)
{
	struct<4> Var0;

	if (iParam0 <= -1)
	{
		return "";
	}
	MISC::_INT_TO_STRING(iParam0, "%i", &Var0);
	return func_1931(Var0);
}

int func_1847(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_1932(iVar0);
}

int func_1848()
{
	return Global_1940239.f_1556.f_4168.f_2084;
}

void func_1849(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37)
{
	func_1705(uParam0, &uParam1);
}

bool func_1850(int iParam0)
{
	return func_1933() == iParam0;
}

void func_1851(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37)
{
	func_1705(uParam0, &uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45, func_1852(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_47, func_1853(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_46, func_1854(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_48, func_1855(&uParam1));
}

char* func_1852(var uParam0)
{
	if (uParam0->f_20)
	{
		if (uParam0->f_23)
		{
			return "NET_PLAYER_ABILITY_PRICE_TYPE_UPGRADE_VOUCHER";
		}
		else if (uParam0->f_24)
		{
			return "NET_PLAYER_ABILITY_PRICE_TYPE_UPGRADE_OFFER";
		}
		return "IB_UPGRADE";
	}
	if (uParam0->f_29)
	{
		return "SHOP_REWARD_PRICE";
	}
	else if (uParam0->f_30)
	{
		return "SHOP_OFFER_PRICE";
	}
	return "IB_PRICE";
}

char* func_1853(var uParam0)
{
	if (uParam0->f_20 && uParam0->f_23)
	{
		return "IB_FREE";
	}
	if (uParam0->f_29)
	{
		return "IB_FREE";
	}
	else if (uParam0->f_20 && !uParam0->f_27)
	{
		return "NET_PLAYER_ABILITY_ADDITIONAL_XP_REQUIRED";
	}
	return "";
}

int func_1854(var uParam0)
{
	if (uParam0->f_29)
	{
		return 1;
	}
	else if (!uParam0->f_27 && uParam0->f_20)
	{
		return 1;
	}
	return 0;
}

bool func_1855(var uParam0)
{
	return (uParam0->f_21 && !uParam0->f_14);
}

bool func_1856()
{
	return UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(-8.851064E-21f);
}

char* func_1857(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36)
{
	char* sVar0;
	int iVar1;

	sVar0 = func_551(func_1934(), 4.808429E-35f);
	if (func_1557())
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_OVERRIDEN");
	}
	else if (func_1676() == 1)
	{
		return MISC::VAR_STRING(10, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_REMOTE_PLAYER_MODE", sVar0);
	}
	if (!func_1856())
	{
		return "INVALID";
	}
	iVar1 = UIAPPS::_GET_UIAPP_CURRENT_ACTIVITY_BY_HASH(-8.851064E-21f);
	if (iVar1 == 1.565755E+24f)
	{
		return func_1936(func_1935());
	}
	else if (iVar1 == -5.250026E+21f)
	{
		return func_1937(&uParam0);
	}
	else if (iVar1 == 8.567533E-12f)
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_UPGRADE");
	}
	return "INVALID";
}

bool func_1858(bool bParam0)
{
	int iVar0;

	iVar0 = func_1009(bParam0);
	if ((iVar0 == 7.626548E-10f || iVar0 == 5.118983E+36f) || iVar0 == 2.787807E-34f)
	{
		return true;
	}
	return false;
}

bool func_1859(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return UNLOCK::UNLOCK_IS_UNLOCKED(-4.930077E-27f);
		case 1:
			return UNLOCK::UNLOCK_IS_UNLOCKED(6.666626E-23f);
		case 2:
			return UNLOCK::UNLOCK_IS_UNLOCKED(3.198294E-31f);
		case 3:
			return UNLOCK::UNLOCK_IS_UNLOCKED(0.5272401f);
		default:
			break;
	}
	return false;
}

void func_1860(var uParam0, int iParam1)
{
	func_504(uParam0, iParam1);
}

void func_1861(var uParam0, int iParam1)
{
	func_631(uParam0, iParam1);
}

bool func_1862()
{
	return func_1676() == 0;
}

int func_1863(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 20;
		case 3:
			return 40;
		default:
			break;
	}
	return -1;
}

void func_1864(int iParam0, var uParam1)
{
	if (!func_1363(*uParam1))
	{
		uParam1->f_11 = func_1938(iParam0);
		uParam1->f_12 = func_1939(iParam0);
	}
}

int func_1865(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1918(iParam0);
	iVar1 = Global_1295619;
	iVar2 = func_1831(iParam1, 1);
	switch (Global_1156096.f_35859.f_3116[iVar2 /*31*/])
	{
		case joaat("ON_ENABLE"):
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("ENTER_REVIVED_REMOTE"):
		case -2129621195:
		case -1503245593:
		case joaat("ALLY_ENTER_DEADEYE"):
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_1866(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;

	if (!func_1825(iParam1))
	{
		return 0;
	}
	if (!func_1919(iParam0))
	{
		return 0;
	}
	iVar0 = func_1831(iParam0, 1);
	if (!func_1940(iParam2))
	{
		return 0;
	}
	bVar1 = func_1921(Global_1156096.f_35859.f_3116[iVar0 /*31*/]);
	if (bVar1 && func_1941(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4))
	{
		vVar2 = { func_1942(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4) };
		if (!func_1920(vVar2.x, vVar2.y, vVar2.z))
		{
			return 0;
		}
	}
	if (func_1925(iParam0, iParam1, iParam2))
	{
		if (bVar1)
		{
			func_1926(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4, iParam0, iParam1, iParam2);
		}
		return 1;
	}
	return 0;
}

int func_1867(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_984(2) * 2;
		case 1:
			return func_986(2) * 2;
		case 2:
			return func_985(2) * 2;
		default:
			break;
	}
	return -1;
}

int func_1868(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_1943(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_1869(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_1870(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_1871(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_1872(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_1873(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_1874(int iParam0, int iParam1)
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

void func_1875(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1944(iParam0, iParam6);
	func_1945(iParam0, iParam5);
	func_1946(iParam0, iParam4);
	func_1947(iParam0, iParam3);
	func_1948(iParam0, iParam2);
	func_1949(iParam0, iParam1);
}

bool func_1876()
{
	return Global_1913431.f_127 == 0;
}

bool func_1877(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_1950(iParam0, uParam1, &uVar0))
	{
		func_1951(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_1878(bool bParam0, int iParam1, bool bParam2)
{
	if (!func_1952(bParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(bParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_1953(bParam0, iParam1);
	}
	return true;
}

bool func_1879(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!func_1006(bParam0, 2))
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

bool func_1880(bool bParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_1952(bParam0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(bParam0, iParam1);
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
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(bParam0, iParam1, iVar0, uParam2[iVar0 /*2*/]))
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
		func_1954(bParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

void func_1881(bool bParam0, int iParam1, var uParam2, int iParam3)
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
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_894((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_1882(int iParam0, int iParam1)
{
	if (!func_1636(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_14 == -1)
	{
		return (Global_38.f_198[iParam0 /*12*/].f_5 && iParam1) != 0;
	}
	return (Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1) != 0;
}

void func_1883(int iParam0, int iParam1)
{
	if (!func_1636(iParam0))
	{
		return;
	}
	if (!func_1882(iParam0, iParam1))
	{
	}
	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_198[iParam0 /*12*/].f_5 = (Global_38.f_198[iParam0 /*12*/].f_5 || iParam1);
		return;
	}
	Global_1072759.f_21262[iParam0 /*12*/].f_5 = (Global_1072759.f_21262[iParam0 /*12*/].f_5 || iParam1);
}

void func_1884(int iParam0, int iParam1)
{
	if (!func_1636(iParam0))
	{
		return;
	}
	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_198[iParam0 /*12*/].f_5 = (Global_38.f_198[iParam0 /*12*/].f_5 - (Global_38.f_198[iParam0 /*12*/].f_5 && iParam1));
		return;
	}
	Global_1072759.f_21262[iParam0 /*12*/].f_5 = (Global_1072759.f_21262[iParam0 /*12*/].f_5 - (Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1));
}

void func_1885(int iParam0, bool bParam1)
{
	if (!func_1636(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1956(func_1955(iParam0));
	}
	else
	{
		func_1957(func_1955(iParam0));
	}
}

bool func_1886(int iParam0)
{
	if (!func_805(iParam0))
	{
		return false;
	}
	return func_809(iParam0, 9.403955E-38f);
}

int func_1887()
{
	return Global_1939089.f_26;
}

int func_1888(int iParam0)
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
	else if (iParam0 <= 121)
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

int func_1889(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1.381375E-38f;
		case 1:
			return 0.1178391f;
		case 2:
			return 3.109246E-21f;
		case 3:
			return -6.153412E-38f;
		case 4:
			if (!bParam1 || func_23() != -1)
			{
				return -7.767989E-09f;
			}
			if (func_1388(44))
			{
				return -7.767989E-09f;
			}
			else
			{
				return -2.93388E-24f;
			}
			break;
		case 5:
			return -0.004497551f;
		case 6:
			return -0.004497551f;
		case 7:
			return -0.004497551f;
		case 8:
			return 1.202762E-19f;
		case 9:
			return -8.461319E-12f;
		case 10:
			return 11802.65f;
		case 11:
			return 3.193451E+19f;
		case 12:
			if (!bParam1 || func_23() != -1)
			{
				return -3.267154E+15f;
			}
			if (func_1388(44))
			{
				return -3.267154E+15f;
			}
			else
			{
				return 6.111615E-34f;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_23() != -1)
			{
				return -2.363869E+07f;
			}
			if (func_1388(44))
			{
				return -2.363869E+07f;
			}
			else
			{
				return -5.573858E-20f;
			}
			break;
	}
	return 0;
}

void func_1890(int iParam0, int iParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/].f_2 = iParam1;
		return;
	}
	Global_1072759.f_19611[iParam0 /*11*/].f_2 = iParam1;
}

void func_1891(int iParam0, float fParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/] = (Global_8130[iParam0 /*11*/] || fParam1);
	}
	else
	{
		Global_1072759.f_19611[iParam0 /*11*/] = (Global_1072759.f_19611[iParam0 /*11*/] || fParam1);
	}
}

void func_1892(int iParam0)
{
	if (!func_805(iParam0))
	{
		return;
	}
	if (func_1958(iParam0))
	{
		func_1959(iParam0);
	}
	else
	{
		func_1960(iParam0);
	}
}

bool func_1893(int iParam0)
{
	if (!func_805(iParam0))
	{
		return false;
	}
	return func_809(iParam0, 2.350989E-38f);
}

int func_1894(int iParam0)
{
	if (!func_805(iParam0))
	{
		return 0;
	}
	return Global_1887363[iParam0 /*36*/].f_4;
}

int func_1895(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_805(iParam0))
	{
		return 0;
	}
	iVar0 = func_1961(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_1963(func_1962(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

void func_1896(int iParam0, int iParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/].f_1 = iParam1;
		return;
	}
	Global_1072759.f_19611[iParam0 /*11*/].f_1 = iParam1;
}

void func_1897(int iParam0, int iParam1)
{
	if (!func_805(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	Global_8130[iParam0 /*11*/].f_3 = iParam1;
}

void func_1898(int iParam0)
{
	if (!func_805(iParam0))
	{
		return;
	}
	if (func_1886(iParam0) && func_1964(iParam0))
	{
		func_1956(func_1965(iParam0, 0));
	}
	else
	{
		func_1957(func_1965(iParam0, 0));
	}
}

void func_1899(int iParam0, int iParam1)
{
	if (!func_1780(iParam0))
	{
		return;
	}
	if (!func_1966(iParam0, iParam1))
	{
	}
	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_271[iParam0] = (Global_38.f_271[iParam0] || iParam1);
		return;
	}
	Global_1072759.f_21335[iParam0] = (Global_1072759.f_21335[iParam0] || iParam1);
}

bool func_1900(int iParam0)
{
	if (!func_1780(iParam0))
	{
		return false;
	}
	return func_1966(iParam0, 2);
}

void func_1901(int iParam0, int iParam1)
{
	if (!func_1780(iParam0))
	{
		return;
	}
	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_271[iParam0] = (Global_38.f_271[iParam0] - (Global_38.f_271[iParam0] && iParam1));
		return;
	}
	Global_1072759.f_21335[iParam0] = (Global_1072759.f_21335[iParam0] - (Global_1072759.f_21335[iParam0] && iParam1));
}

void func_1902(int iParam0, bool bParam1)
{
	float fVar0;

	if (!func_1780(iParam0))
	{
		return;
	}
	if (iParam0 == 8)
	{
		return;
	}
	fVar0 = func_1967(iParam0);
	if (bParam1)
	{
		func_1956(fVar0);
	}
	else
	{
		func_1957(fVar0);
	}
}

int func_1903()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

char* func_1904(int iParam0)
{
	if (Global_3145858.f_61223[iParam0 /*3*/] > -1)
	{
		if (func_1968(Global_3145858.f_61223[iParam0 /*3*/]))
		{
			return MISC::VAR_STRING(2, &(Global_3145858.f_52507[Global_3145858.f_61223[iParam0 /*3*/] /*18*/]));
		}
		return func_1969(&(Global_3145858.f_52507[Global_3145858.f_61223[iParam0 /*3*/] /*18*/]));
	}
	return "";
}

char* func_1905(int iParam0)
{
	if (MISC::IS_BIT_SET(iParam0, 4))
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_BLAP");
	}
	if (MISC::IS_BIT_SET(iParam0, 15))
	{
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("UIC_LB_CPCO");
	}
	return "";
}

bool func_1906(int iParam0)
{
	return Global_1953279.f_1676.f_1[func_1179(iParam0, 1) /*3*/];
}

int func_1907(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_1970(iParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

struct<17> func_1908(var uParam0, bool bParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_715(uParam0->f_4, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_969() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_1909(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_1910(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_1971(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_1911(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -5.611032E-27f;
		case 1:
			return -4.742815E-35f;
		case 2:
			return 3.058603E+31f;
		default:
			break;
	}
	return 0;
}

int func_1912(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2.241209E-35f;
		case 1:
			return -6.371611E+17f;
		case 2:
			return 5.648048E-30f;
		default:
			break;
	}
	return 0;
}

int func_1913(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3[15];
	int iVar34;
	int iVar35;
	bool bVar36;
	bool bVar37;
	int iVar38;
	int iVar39;

	if (!func_714(bParam0, 0))
	{
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar35 = 0;
	while (iVar35 < 3)
	{
		iVar34 = func_1972(iVar35);
		if (iVar34 == 0)
		{
		}
		else if (!func_1774(bParam0, iVar34, &Var3, &iVar2, 1, 0))
		{
		}
		else
		{
			bVar37 = false;
			iVar38 = 0;
			iVar39 = 0;
			while (iVar39 < iVar2)
			{
				bVar36 = Var3[iVar39 /*2*/];
				if (bVar36 == 0)
				{
				}
				else
				{
					if (func_1973(bVar36))
					{
						if (!bParam1 || func_1049(bVar36, 0, 1, 1) > 0)
						{
							bVar37 = true;
						}
						else if (bVar36 == 3.996812E+36f)
						{
							iVar38 = Var3[iVar39 /*2*/].f_1;
						}
						iVar39++;
						if (bVar37)
						{
							if (iVar0 == 0)
							{
								iVar0 = iVar34;
								iVar1 = iVar38;
							}
							else if (iVar38 < iVar1)
							{
								iVar0 = iVar34;
								iVar1 = iVar38;
							}
						}
						iVar35++;
						return iVar0;
					}
				}
			}
		}
	}
}

int func_1914(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar33 = func_1974(iVar0);
		if (!func_1774(bParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_1975(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_1049(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @132; //curOff = 104
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
	return 0;
}

int func_1915(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_1976(iVar0, 1, 0);
		if (!func_1774(bParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_1975(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_1049(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
					{
						return iVar33;
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
	return 0;
}

int func_1916(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	int iVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_1976(iVar0, 0, 1);
		if (!func_1774(bParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_1973(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_1049(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (Var9[iVar41 /*2*/] == 3.996812E+36f || Var9[iVar41 /*2*/] == 3.414007E-11f)
				{
					if ((bParam2 && Var9[iVar41 /*2*/] == 3.996812E+36f) || (!bParam2 && Var9[iVar41 /*2*/] == 3.414007E-11f))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41 /*2*/].f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41 /*2*/].f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41 /*2*/].f_1 < iVar2)
					{
						iVar5 = iVar40;
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
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

char* func_1917(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MP_PLAYER_CARD_TIER_ONE";
		case 1:
			return "MP_PLAYER_CARD_TIER_TWO";
		case 2:
			return "MP_PLAYER_CARD_TIER_THREE";
		default:
			break;
	}
	return "NP_CARD_TIER_INVALID";
}

int func_1918(int iParam0)
{
	if (func_1977(iParam0))
	{
		return (func_1978(iParam0) % 32);
	}
	return Global_1295619;
}

bool func_1919(int iParam0)
{
	int iVar0;

	iVar0 = func_1831(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

bool func_1920(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_1724(iParam1, 1);
	iVar1 = func_1831(iParam0, 1);
	iVar2 = func_1827(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
	if (Global_1156096.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		return false;
	}
	if (!Global_1156096.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return true;
	}
	Global_1156096.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_1979(iVar3, 1);
		if (!func_1980(iVar3))
		{
		}
		else
		{
			Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1] = (Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1] - 1);
			Global_1156096.f_2169[iVar5 /*205*/].f_201 = (Global_1156096.f_2169[iVar5 /*205*/].f_201 - func_1981(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_1982(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_1983(iVar6))
		{
		}
		else
		{
			iVar8 = func_1984(iVar6, 1);
			Global_1156096.f_21645[iVar8 /*209*/][iVar1] = (Global_1156096.f_21645[iVar8 /*209*/][iVar1] - 1);
			if (Global_1156096.f_21645[iVar8 /*209*/][iVar1] <= 0)
			{
				MISC::_CLEAR_BIT_FLAG(&(Global_1156096.f_21645[iVar8 /*209*/].f_200), iVar1);
			}
			if (!MISC::_IS_ANY_BIT_FLAG_SET(&(Global_1156096.f_21645[iVar8 /*209*/].f_200)))
			{
				Global_1156096.f_21645[iVar8 /*209*/].f_208 = 0;
				func_1985(iVar6);
			}
		}
		iVar7++;
	}
	return true;
}

bool func_1921(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_1922(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1919(iParam0))
	{
		return false;
	}
	if (!func_1986(iParam1))
	{
		return false;
	}
	iVar0 = func_1987(iParam1, 1);
	return Global_1156096.f_35859.f_9286[iVar0 /*3*/] == iParam0;
}

Vector3 func_1923(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_1988(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return Global_1156096.f_35859.f_9503[iVar0 /*3*/];
}

bool func_1924(vector3 vParam0)
{
	if (!func_1919(vParam0.x))
	{
		return false;
	}
	if (!func_1825(vParam0.y))
	{
		return false;
	}
	if (!func_1940(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_1925(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_1724(iParam1, 1);
	iVar1 = func_1831(iParam0, 1);
	iVar2 = func_1827(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
	if (Global_1156096.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		return false;
	}
	Global_1156096.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1295619.f_16;
	if (Global_1156096.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return true;
	}
	Global_1156096.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 1;
	iVar4 = 0;
	while (iVar4 < Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_1979(iVar3, 1);
		if (!func_1980(iVar3))
		{
		}
		else
		{
			Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1]++;
			Global_1156096.f_2169[iVar5 /*205*/].f_201 = (Global_1156096.f_2169[iVar5 /*205*/].f_201 + func_1981(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_1989(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_1983(iVar6))
		{
		}
		else if (!func_1990(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/])))
		{
		}
		else
		{
			iVar8 = func_1984(iVar6, 1);
			Global_1156096.f_21645[iVar8 /*209*/][iVar1]++;
			MISC::_SET_BIT_FLAG(&(Global_1156096.f_21645[iVar8 /*209*/].f_200), iVar1);
			if (!Global_1156096.f_21645[iVar8 /*209*/].f_208)
			{
				Global_1156096.f_21645[iVar8 /*209*/].f_208 = 1;
				func_1991(iVar6);
			}
		}
		iVar7++;
	}
	func_1992(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_2);
	return true;
}

void func_1926(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_1986(iParam0))
	{
		return;
	}
	iVar0 = func_1987(iParam0, 1);
	if (!func_1919(iParam1))
	{
		return;
	}
	if (!func_1825(iParam2))
	{
		return;
	}
	if (!func_1940(iParam3))
	{
		return;
	}
	Global_1156096.f_35859.f_9286[iVar0 /*3*/] = iParam1;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_1 = iParam2;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_2 = iParam3;
}

void func_1927(int iParam0)
{
	int iVar0;

	if (!func_1986(iParam0))
	{
		return;
	}
	iVar0 = func_1987(iParam0, 1);
	Global_1156096.f_35859.f_9286[iVar0 /*3*/] = -1;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_1 = 0;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_2 = -1;
}

float func_1928(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("DEADEYE"):
			switch (iParam1)
			{
				case 0:
					return -1.665895E+07f;
				case 1:
					return 2.193244E-13f;
				case 2:
					return -1.274092E+34f;
				default:
					break;
			}
			break;
		case joaat("COMBAT"):
			switch (iParam1)
			{
				case 0:
					return 15.36747f;
				case 1:
					return 3.358978E-08f;
				case 2:
					return -1.131254E-24f;
				default:
					break;
			}
			break;
		case joaat("DEFENSE"):
			switch (iParam1)
			{
				case 0:
					return -1.216679E+31f;
				case 1:
					return 8.945652E-29f;
				case 2:
					return -23.46011f;
				default:
					break;
			}
			break;
		case joaat("RECOVERY"):
			switch (iParam1)
			{
				case 0:
					return -1.3454E+36f;
				case 1:
					return 49.65254f;
				case 2:
					return 1.774646E+10f;
				default:
					break;
			}
			break;
	}
	return 27.64779f;
}

int func_1929()
{
	return Global_1149417.f_4621.f_163;
}

bool func_1930(int iParam0)
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

char* func_1931(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_1932(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1149417.f_11.f_1562.f_1647[0];
		case 1:
			return Global_1149417.f_11.f_1562.f_1647[1];
		default:
			break;
	}
	return -1;
}

int func_1933()
{
	return Global_1940239.f_1556.f_4168.f_2087;
}

char* func_1934()
{
	return func_1627(Global_1940239.f_1556.f_8.f_2);
}

int func_1935()
{
	return Global_1940239.f_1556.f_4168.f_2086;
}

char* func_1936(int iParam0)
{
	if (!func_1859(iParam0))
	{
		if (func_1365(iParam0))
		{
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_LOCKED");
		}
		else
		{
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_LOCKED", func_1863(iParam0));
		}
	}
	else if (!func_1993(iParam0, 1))
	{
		if (func_1365(iParam0))
		{
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_EQUIPPED");
		}
		else
		{
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_EQUIPPED");
		}
	}
	else if (func_1365(iParam0))
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_OPEN");
	}
	else
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_OPEN");
	}
	return "INVALID";
}

char* func_1937(var uParam0)
{
	int iVar0;
	char cVar1[128];
	bool bVar17;
	int iVar18;
	char cVar19[128];

	if (func_1994(uParam0))
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_LOCKED", func_1995(uParam0->f_2, 1));
	}
	else if (uParam0->f_29)
	{
		iVar0 = func_1696(uParam0->f_2, -982726.7f);
		if (iVar0 <= 0)
		{
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_CLAIM_WITH_REWARD_F");
		}
		else
		{
			StringCopy(&cVar1, "$", 128);
			StringIntConCat(&cVar1, func_1844(iVar0), 128);
			StringConCat(&cVar1, ".", 128);
			StringConCat(&cVar1, func_1843(func_1845(iVar0)), 128);
			return MISC::VAR_STRING(10, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_CLAIM_WITH_REWARD", &cVar1);
		}
	}
	else if (uParam0->f_30)
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_VOUCHER");
	}
	else if (uParam0->f_32)
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_CASH");
	}
	else if (uParam0->f_24)
	{
		bVar17 = func_1813(func_1681(uParam0) + 1);
		if (uParam0->f_25)
		{
			iVar18 = func_1696(bVar17, -1.926391E+21f);
		}
		else if (uParam0->f_26)
		{
			iVar18 = func_1696(bVar17, -2.401104E+18f);
		}
		StringCopy(&cVar19, "$", 128);
		StringIntConCat(&cVar19, func_1844(iVar18), 128);
		StringConCat(&cVar19, ".", 128);
		StringConCat(&cVar19, func_1843(func_1845(iVar18)), 128);
		return MISC::VAR_STRING(10, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UPGRADE_OFFER", &cVar19);
	}
	else if (uParam0->f_25)
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UPGRADE");
	}
	else if (uParam0->f_22)
	{
		if (uParam0->f_14)
		{
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_EQUIPPED_MAX");
		}
		else
		{
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_EQUIPPED");
		}
	}
	else
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UNEQUIPPED");
	}
	return "INVALID";
}

char* func_1938(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_ACTIVE_SLOT_FOCUS_TITLE");
		case 1:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_1_FOCUS_TITLE");
		case 2:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_2_FOCUS_TITLE");
		case 3:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_3_FOCUS_TITLE");
		default:
			break;
	}
	return "NULL";
}

char* func_1939(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_ACTIVE_SLOT_FOCUS_DESCRIPTION");
		case 1:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		case 2:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		case 3:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		default:
			break;
	}
	return "NULL";
}

bool func_1940(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

bool func_1941(int iParam0)
{
	int iVar0;

	if (!func_1986(iParam0))
	{
		return false;
	}
	iVar0 = func_1996(iParam0);
	if (!func_1919(iVar0))
	{
		return false;
	}
	return true;
}

Vector3 func_1942(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	if (!func_1986(iParam0))
	{
		vVar0 = -1;
		vVar0.f_2 = -1;
		return vVar0;
	}
	iVar3 = func_1987(iParam0, 1);
	return Global_1156096.f_35859.f_9286[iVar3 /*3*/];
}

int func_1943(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1944(int iParam0, int iParam1)
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

void func_1945(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - (*iParam0 && 1.128475E-36f));
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_1946(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1869(*iParam0);
	iVar1 = func_1868(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1874(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_1947(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_1948(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_1949(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_1950(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = -0.3074162f;
	bParam2->f_3 = func_1761(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_1951(bool bParam0, int iParam1, var uParam2)
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

bool func_1952(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(bParam0);
}

bool func_1953(bool bParam0, int iParam1)
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
		if (Var0[iVar474 /*47*/] == iParam1)
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

void func_1954(bool bParam0, int iParam1, var uParam2, int iParam3)
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
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_894((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_1955(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1.068233E-26f;
		case 3:
			return -8.540818E+13f;
		case 1:
			return 11.19643f;
		case 0:
			return 0.004328025f;
		case 4:
			return 15.34966f;
		case 5:
			return -1.716426E-27f;
		default:
			break;
	}
	return 0;
}

void func_1956(int iParam0)
{
	float fVar0;

	if (func_1997(iParam0) == 62)
	{
		MAP::_MAP_ENABLE_REGION_BLIP(-0.005648932f, -4.726257E-15f);
		MAP::_MAP_ENABLE_REGION_BLIP(-24.81605f, -4.726257E-15f);
		MAP::_MAP_ENABLE_REGION_BLIP(-7.185494E-26f, -4.726257E-15f);
	}
	else
	{
		fVar0 = -4.726257E-15f;
		if (((func_1998(iParam0) == 4 || func_1998(iParam0) == 12) || func_1781(func_1998(iParam0)) == 4) || (func_1966(func_1998(iParam0), 8) && ((func_1998(iParam0) == 2 || func_1998(iParam0) == 0) || func_1998(iParam0) == 10)))
		{
			fVar0 = -1.036581E-08f;
		}
		MAP::_MAP_ENABLE_REGION_BLIP(iParam0, fVar0);
	}
}

void func_1957(int iParam0)
{
	if (func_1997(iParam0) == 62)
	{
		MAP::_MAP_DISABLE_REGION_BLIP(-0.005648932f);
		MAP::_MAP_DISABLE_REGION_BLIP(-24.81605f);
		MAP::_MAP_DISABLE_REGION_BLIP(-7.185494E-26f);
	}
	else if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iParam0, -1.036581E-08f) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iParam0, -4.726257E-15f))
	{
		MAP::_MAP_DISABLE_REGION_BLIP(iParam0);
	}
}

bool func_1958(int iParam0)
{
	if (!func_805(iParam0))
	{
		return false;
	}
	return func_809(iParam0, 1.504633E-36f);
}

void func_1959(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	StringCopy(&cVar0, func_1999(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_2000(cVar0);
	MAP::_MAP_ENABLE_REGION_BLIP(MISC::GET_HASH_KEY(sVar8), -4.726257E-15f);
}

void func_1960(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	int iVar9;

	StringCopy(&cVar0, func_1999(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_2000(cVar0);
	iVar9 = MISC::GET_HASH_KEY(sVar8);
	if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iVar9, -1.036581E-08f) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iVar9, -4.726257E-15f))
	{
		MAP::_MAP_DISABLE_REGION_BLIP(iVar9);
	}
}

int func_1961(int iParam0)
{
	if (!func_805(iParam0))
	{
		return 0;
	}
	if (func_1893(iParam0))
	{
		return -1;
	}
	return Global_8130[iParam0 /*11*/].f_3;
}

int func_1962(int iParam0)
{
	if (!func_805(iParam0))
	{
		return -15;
	}
	if (Global_1572887.f_14 == -1)
	{
		return Global_8130[iParam0 /*11*/].f_1;
	}
	return Global_1072759.f_19611[iParam0 /*11*/].f_1;
}

int func_1963(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	if (!func_2001(iParam0))
	{
		return 0;
	}
	func_2002(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((BUILTIN::TO_FLOAT(iVar0) / 1114636288) + BUILTIN::TO_FLOAT(iVar1)) + (BUILTIN::TO_FLOAT(iVar2) * 1114636288)) + ((BUILTIN::TO_FLOAT(iVar3) * 1103101952) * 1114636288)) + (((BUILTIN::TO_FLOAT(iVar4) * 1106477056) * 1103101952) * 1114636288)) + (((BUILTIN::TO_FLOAT(iVar5) * 1136041984) * 1103101952) * 1114636288));
	iVar7 = BUILTIN::ROUND(fVar6);
	return iVar7;
}

bool func_1964(int iParam0)
{
	if (!func_805(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 26:
		case 33:
		case 37:
		case 40:
		case 62:
		case 66:
		case 81:
		case 83:
		case 99:
		case 101:
		case 111:
		case 121:
			return true;
	}
	return false;
}

int func_1965(int iParam0, bool bParam1)
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

bool func_1966(int iParam0, int iParam1)
{
	if (!func_1780(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_14 == -1)
	{
		return (Global_38.f_271[iParam0] && iParam1) != 0;
	}
	return (Global_1072759.f_21335[iParam0] && iParam1) != 0;
}

float func_1967(int iParam0)
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

bool func_1968(int iParam0)
{
	return func_445(Global_3145858.f_52507[iParam0 /*18*/].f_17, 0);
}

var func_1969(var uParam0)
{
	return uParam0;
}

bool func_1970(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_692(bParam3);
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, iParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_1222(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

void func_1971(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_2003(&(uParam0->f_4));
}

int func_1972(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::GET_HASH_KEY("COST_ABILITY_CARD_RANK_COUPON");
		case 1:
			return MISC::GET_HASH_KEY("COST_ABILITY_CARD_RANK_COUPON_2");
		case 2:
			return MISC::GET_HASH_KEY("COST_ABILITY_CARD_RANK_COUPON_3");
		default:
			break;
	}
	return 0;
}

bool func_1973(bool bParam0)
{
	return func_894(bParam0) == -1.955052E+34f;
}

int func_1974(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::GET_HASH_KEY("COST_ABILITY_CARD_RANK_VOUCHER");
		default:
			break;
	}
	return 0;
}

bool func_1975(bool bParam0)
{
	return func_894(bParam0) == 4.029065E+31f;
}

int func_1976(int iParam0, bool bParam1, bool bParam2)
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

bool func_1977(int iParam0)
{
	int iVar0;

	iVar0 = func_1724(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

int func_1978(int iParam0)
{
	int iVar0;

	iVar0 = func_1724(iParam0, 1);
	if (func_1977(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_2004(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_2005(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_2006(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_2007(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_2008(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_2009(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_1979(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2123992989:
			return 59;
		case joaat("MDEFENSE__BULLET"):
			return 49;
		case -1936069272:
			return 47;
		case joaat("MHEALTH__REGEN_RATE"):
			return 42;
		case joaat("MHORSE__TRAMPLE_DAMAGE"):
			return 58;
		case joaat("ADEADEYE_COST_PER_SHOT"):
			return 2;
		case joaat("MWEAPON__BOW_STAMINA_DRAIN"):
			return 41;
		case joaat("MDEFENSE__BULLET_USING_MELEE_WEAPON"):
			return 50;
		case joaat("MACCURACY__LOCAL_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 64;
		case joaat("MDAMAGE__DISTANCE_CLOSE"):
			return 37;
		case -1575020444:
			return 94;
		case -1572802418:
			return 71;
		case joaat("ALASSO__DAMAGE_DEALT_PER_SECOND"):
			return 78;
		case joaat("MDEFENSE__EXPLOSIVE"):
			return 53;
		case -1349331938:
			return 43;
		case joaat("MDAMAGE__MISSING_HEALTH_CONVERSION"):
			return 29;
		case joaat("ASTAMINA__ALTER_TANK_PER_SECOND_PERCENT"):
			return 22;
		case joaat("ADEADEYE__ALTER_CORE_PER_SECOND_PERCENT"):
			return 7;
		case joaat("MHORSE__DEFENSE"):
			return 56;
		case joaat("ASTAMINA__HORSE_GAIN_ON_HORSEBACK_KILL_PERCENT"):
			return 23;
		case joaat("MDEFENSE__RANGED"):
			return 46;
		case joaat("MDAMAGE__ALL_WEAPONS_DIFFERENT_WEAPON"):
			return 25;
		case joaat("MDEFENSE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 51;
		case joaat("MEAGLE_EYE__DEPLETION_RATE"):
			return 67;
		case joaat("MDEFENSE__FIRE"):
			return 52;
		case joaat("AHEALTH__GAIN_ON_KILL_PERCENT"):
			return 11;
		case joaat("MRPG_ATTIRBUTE_CORE_DRAIN_RATE"):
			return 66;
		case joaat("MDAMAGE__EXPLOSIVE_WEAPONS"):
			return 36;
		case joaat("MSTAMINA__REGEN_RATE"):
			return 75;
		case joaat("AHEALTH__ALTER_TANK_PER_SECOND_PERCENT"):
			return 14;
		case joaat("MDEADEYE__GAIN_MULTIPLIER_WITH_REPEATER"):
			return 73;
		case -377364039:
			return 60;
		case joaat("MACCURACY__AI_MODIFIER"):
			return 62;
		case joaat("MDAMAGE__FALLOFF"):
			return 39;
		case joaat("AHEALTH__ALTER_TOTAL_PER_MINUTE_PERCENT"):
			return 15;
		case joaat("ADEADEYE_COST_DURATION"):
			return 1;
		case joaat("MACCURACY__REMOTE_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 65;
		case joaat("MSKILL__PERCEPTION"):
			return 83;
		case -1:
			return 0;
		case 66478954:
			return 93;
		case 91687087:
			return 79;
		case joaat("MSKILL__DISTILLER"):
			return 90;
		case 194431787:
			return 61;
		case joaat("MDEADEYE__GAIN_MULTIPLIER"):
			return 72;
		case joaat("MSKILL__PROTECTION_TRADER"):
			return 85;
		case joaat("MWEAPON__BOW_DRAW_TIME"):
			return 40;
		case joaat("MDEADEYE__DEPLETION_RATE"):
			return 70;
		case joaat("MSKILL__DIVINATION"):
			return 89;
		case 410940916:
			return 92;
		case 447408404:
			return 81;
		case joaat("ADEADEYE__GAIN_ON_HEADSHOT_PERCENT"):
			return 5;
		case joaat("MHEALTH__RECHARGE_RATE"):
			return 44;
		case joaat("MACCURACY__LOCAL_PLAYER_MODIFIER"):
			return 63;
		case joaat("MSKILL__INTUITION"):
			return 88;
		case joaat("MDAMAGE__MELEE"):
			return 30;
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 19;
		case joaat("ADEADEYE__GAIN_ON_REVIVE_PERCENT"):
			return 4;
		case joaat("MSKILL__PROTECTION_MOONSHINE"):
			return 86;
		case joaat("MDEFENSE__PLAYERS"):
			return 48;
		case 874892169:
			return 95;
		case joaat("AHEALTH__ALTER_CORE_PER_SECOND_PERCENT"):
			return 16;
		case 920214733:
			return 91;
		case joaat("MINCAPACITATION__BLEEDOUT_TIME"):
			return 68;
		case joaat("ADEADEYE__ALTER_TANK_PER_SECOND_PERCENT"):
			return 6;
		case joaat("MDAMAGE__ALL_WEAPONS_AIMING_WITHOUT_FIRING"):
			return 27;
		case joaat("ADEADEYE__ALTER_TANK_DAMAGE_TAKEN_PERCENT"):
			return 8;
		case joaat("MSTAMINA__REGEN_RATE_HEALTH_CONVERSION"):
			return 76;
		case joaat("MDEFENSE__MELEE"):
			return 45;
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 20;
		case joaat("AHEALTH__GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 10;
		case 1356998909:
			return 80;
		case joaat("MSKILL__FOCUS"):
			return 82;
		case joaat("MDEADEYE__GAIN_MULTIPLIER_STR_WEAPON"):
			return 74;
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 17;
		case 1546732394:
			return 34;
		case joaat("MDEFENSE__STAMINA_CONVERSION"):
			return 55;
		case joaat("MDAMAGE__DISTANCE_FAR"):
			return 38;
		case joaat("MDAMAGE__BULLETS"):
			return 32;
		case joaat("MDEFENSE__STRENGTH_IN_NUMBERS"):
			return 54;
		case 1727267699:
			return 69;
		case joaat("MDAMAGE__STAMINA_CONVERSION"):
			return 28;
		case joaat("ADEADEYE_COST_ACTIVATION"):
			return 3;
		case joaat("MSTAMINA__SPRINT_DEPLETION_RATE"):
			return 77;
		case joaat("ASTAMINA__ALTER_CORE_PER_SECOND_PERCENT"):
			return 21;
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 18;
		case joaat("AHEALTH__GAIN_KILL_PERCENT_STR_WEAPON"):
			return 12;
		case joaat("MDAMAGE__ALL_WEAPONS"):
			return 24;
		case joaat("MDAMAGE__THROWN"):
			return 31;
		case joaat("MSKILL__AWARENESS"):
			return 84;
		case joaat("MHORSE__DEFENSE_PLAYERS"):
			return 57;
		case joaat("ADEADEYE__ALTER_TANK_BULLET_DAMAGE_TAKEN_PERCENT"):
			return 9;
		case joaat("MDAMAGE__SHOTGUN"):
			return 33;
		case joaat("AHEALTH__GAIN_KILL_PERCENT_NON_STR_WEAPON"):
			return 13;
		case joaat("MDAMAGE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 35;
		case joaat("MDAMAGE__ALL_WEAPONS_SINCE_LAST_SHOT"):
			return 26;
		case joaat("MSKILL__POTENTIAL"):
			return 87;
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

bool func_1980(int iParam0)
{
	int iVar0;

	iVar0 = func_1979(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_1981(var uParam0)
{
	float fVar0;

	if (uParam0->f_2 != 0)
	{
		fVar0 = func_2010(1.959415E-10f, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_1982(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1980(iParam0))
	{
		return;
	}
	iVar0 = func_1979(iParam0, 1);
	if (!func_642(Global_1156096.f_2169[iVar0 /*205*/]))
	{
		return;
	}
	Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/][iVar0] = (Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/][iVar0] - 1);
	if (Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/][iVar0] > 0)
	{
		return;
	}
	Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/][iVar0] = 0;
	Global_1156096.f_2169[iVar0 /*205*/].f_204 = 0;
	if (!func_2011(Global_1156096.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_2012(Global_1156096.f_2169[iVar0 /*205*/].f_203, 1);
	Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] = (Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] - 1);
	if (Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < Global_1156096.f_47561[iVar1 /*25*/].f_23)
	{
		if (Global_1156096.f_47561[iVar1 /*25*/][iVar2] != Global_1156096.f_2169[iVar0 /*205*/])
		{
		}
		else
		{
			Global_1156096.f_47561[iVar1 /*25*/][iVar2] = -1;
			Global_1156096.f_47561[iVar1 /*25*/].f_23 = (Global_1156096.f_47561[iVar1 /*25*/].f_23 - 1);
			Global_1156096.f_47561[iVar1 /*25*/][iVar2] = Global_1156096.f_47561[iVar1 /*25*/][Global_1156096.f_47561[iVar1 /*25*/].f_23];
			Global_1156096.f_47561[iVar1 /*25*/][Global_1156096.f_47561[iVar1 /*25*/].f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

bool func_1983(int iParam0)
{
	int iVar0;

	iVar0 = func_1984(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_1984(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("EAGLE_EYE_HIGHLIGHT_BOUNTIES"):
			return 52;
		case joaat("HEADSHOT_IMMUNITY"):
			return 12;
		case joaat("HAT_BLOCKS_HEADSHOT"):
			return 11;
		case joaat("ANIMAL_TURN_IN_EFFICIENCY"):
			return 64;
		case joaat("DISABLE_HEALTH_REGENERATION"):
			return 2;
		case joaat("FIRE_CAP_INFINTE"):
			return 41;
		case joaat("SLOW_AND_STEADY_AURA"):
			return 28;
		case joaat("EAGLE_EYE_HIGHLIGHT_EARTH"):
			return 53;
		case -1730553768:
			return 3;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return 25;
		case -1651690657:
			return 65;
		case joaat("NO_CRITICAL_DAMAGE_AGAINST_PLAYERS"):
			return 10;
		case -1583192324:
			return 66;
		case joaat("REVIVE_ON_BLEEDOUT"):
			return 34;
		case -1486292178:
			return 67;
		case joaat("LASSO_IMMUNITY"):
			return 5;
		case joaat("DISABLE_JUMPING"):
			return 45;
		case joaat("GRAPPLE_IMMUNITY_FROM_AI"):
			return 31;
		case -1026481003:
			return 6;
		case joaat("TAGGING_IMMUNITY"):
			return 13;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			return 33;
		case joaat("ON_HORSE_SPEED_RESTRICTION_JOG"):
			return 59;
		case joaat("FATAL_MELEE_IMMUNITY"):
			return 32;
		case joaat("FORCE_HEALTH_REGEN"):
			return 1;
		case joaat("CONFUSION_EFFECT"):
			return 14;
		case joaat("FULL_LOCKON_IMMUNITY"):
			return 4;
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			return 36;
		case -350459285:
			return 68;
		case joaat("DAMAGE_CAP_INFINTE"):
			return 40;
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			return 26;
		case -199042163:
			return 60;
		case joaat("NED_KELLY_ADVERSARY"):
			return 22;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
			return 55;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return 19;
		case -1:
			return 0;
		case joaat("TRAIL_EFFECT"):
			return 17;
		case joaat("POISON_EFFECT"):
			return 20;
		case joaat("ON_HORSE_SPEED_RESTRICTION_WALK"):
			return 61;
		case joaat("SLIPPERY_BASTARD_VFX"):
			return 24;
		case joaat("DISORIENT_EFFECT"):
			return 18;
		case joaat("FOCUS_FIRE_VFX"):
			return 23;
		case joaat("PREDATOR_ICON_DISPLAY"):
			return 39;
		case joaat("WOUND_EFFECT"):
			return 15;
		case 718630298:
			return 56;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			return 48;
		case joaat("NED_KELLY_BASE"):
			return 21;
		case joaat("DISABLE_COMBAT_DIVE"):
			return 46;
		case joaat("SLOW_AND_STEADY_VFX"):
			return 27;
		case joaat("DISABLE_FACIAL_ACTIONS"):
			return 43;
		case joaat("CANNOT_LOCK_ON_PLAYERS"):
			return 7;
		case joaat("GRAPPLE_IMMUNITY_FROM_PLAYERS"):
			return 30;
		case 1037859088:
			return 51;
		case 1066450193:
			return 54;
		case 1159158432:
			return 62;
		case joaat("OVERPOWER_PREDATOR"):
			return 37;
		case 1242495215:
			return 9;
		case joaat("ON_HORSE_SPEED_RESTRICTION_IGNORE_MOUNT_CLASS"):
			return 63;
		case 1341326366:
			return 58;
		case joaat("OVERRIDE_INFINITE_DEADEYE"):
			return 35;
		case 1398483650:
			return 50;
		case joaat("PULSE_REPOST_STATE"):
			return 38;
		case joaat("DISABLE_CONSUMABLES"):
			return 42;
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			return 57;
		case joaat("DISABLE_INCAPACITATION"):
			return 44;
		case joaat("DRAIN_EFFECT"):
			return 16;
		case 1898374676:
			return 49;
		case 2067881273:
			return 8;
		case joaat("DISABLE_DROWNING"):
			return 47;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			return 29;
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

void func_1985(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_2013();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_2014();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_UPDATE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, false, 0f);
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_2015(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_2015(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_2015(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
			func_1398(105, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_2015(iParam0));
			break;
		case joaat("OVERPOWER_PREDATOR"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 1);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 18);
			break;
		case joaat("PULSE_REPOST_STATE"):
			NETWORK::_SET_NETWORK_RESPOT_TIMER(iVar0, 0, true);
			break;
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(15);
			break;
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			break;
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_SET_LOCKON_FOCUS_FIRE_VFX(iVar1, "");
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			func_2017(func_2016(iParam0));
			break;
		case joaat("SLOW_AND_STEADY_AURA"):
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_RESET_ENTITY_AURA();
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_EAGLE_EYE_SET_PLUS_FLAG_DISABLED(iVar1, true);
			break;
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(iVar1, false);
			break;
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(iVar1, 1f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(iVar1, -1f);
			break;
		case joaat("NED_KELLY_BASE"):
			func_2018();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_642(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_642(16);
			break;
	}
}

bool func_1986(int iParam0)
{
	int iVar0;

	iVar0 = func_1987(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_1987(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("FOCUS_FIRE"):
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case joaat("QUITE_AN_INSPIRATION"):
			return 3;
		case 0:
			return 0;
		case 1938826026:
			return 2;
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

int func_1988(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_1996(iParam0);
	Var1.f_3 = 1f;
	Var1.f_5 = -1;
	Var1.f_6 = 3;
	Var1.f_6.f_1 = -1;
	Var1.f_6.f_1.f_3 = -1;
	Var1.f_6.f_1.f_3.f_3 = -1;
	Var1.f_17 = 5;
	Var32.f_3 = 1f;
	Var32.f_5 = -1;
	Var32.f_6 = 3;
	Var32.f_6.f_1 = -1;
	Var32.f_6.f_1.f_3 = -1;
	Var32.f_6.f_1.f_3.f_3 = -1;
	Var32.f_17 = 5;
	iVar63 = -1;
	iVar65 = 0;
	while (iVar65 < Global_1156096.f_35859.f_11700)
	{
		iVar64 = func_1831(Global_1156096.f_35859.f_9503[iVar65 /*3*/], 1);
		if (Global_1156096.f_35859.f_3116[iVar64 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1156096.f_35859.f_9503[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_2019(Global_1156096.f_35859.f_9503[iVar65 /*3*/], Global_1156096.f_35859.f_9503[iVar65 /*3*/].f_1))
		{
		}
		else
		{
			Var1 = { func_2020(Global_1156096.f_35859.f_9503[iVar65 /*3*/]) };
			if (Var1.f_5 > Var32.f_5)
			{
				Var32 = { Var1 };
				iVar63 = iVar65;
			}
		}
		iVar65++;
	}
	return iVar63;
}

void func_1989(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1980(iParam0))
	{
		return;
	}
	iVar0 = func_1979(iParam0, 1);
	if (!func_642(Global_1156096.f_2169[iVar0 /*205*/]))
	{
		return;
	}
	Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/][iVar0]++;
	Global_1156096.f_2169[iVar0 /*205*/].f_204 = 1;
	if (!func_2011(Global_1156096.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_2012(Global_1156096.f_2169[iVar0 /*205*/].f_203, 1);
	Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1]++;
	iVar2 = 0;
	while (iVar2 < Global_1156096.f_47561[iVar1 /*25*/].f_23)
	{
		if (Global_1156096.f_47561[iVar1 /*25*/][iVar2] == Global_1156096.f_2169[iVar0 /*205*/])
		{
			return;
		}
		iVar2++;
	}
	Global_1156096.f_47561[iVar1 /*25*/][Global_1156096.f_47561[iVar1 /*25*/].f_23] = Global_1156096.f_2169[iVar0 /*205*/];
	Global_1156096.f_47561[iVar1 /*25*/].f_23++;
}

bool func_1990(var uParam0)
{
	bool bVar0;

	if (uParam0->f_1 != 0)
	{
		bVar0 = func_2021(1.959415E-10f, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_1991(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_2013();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_2014();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_SET_PED_ACTIVATE_WOUND_EFFECT(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, true, 0f);
			GRAPHICS::ANIMPOSTFX_PLAY(func_2015(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_2015(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_2015(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
			func_1398(104, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_2015(iParam0));
			break;
		case joaat("OVERPOWER_PREDATOR"):
			break;
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(15);
			break;
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_SET_LOCKON_FOCUS_FIRE_VFX(iVar1, "focusfire");
			break;
		case joaat("SLIPPERY_BASTARD_VFX"):
			iVar2 = func_2016(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_2022(iParam0, 0));
			func_2023(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_2022(iParam0, 1));
			func_2023(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_2022(iParam0, 2));
			func_2023(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_2022(iParam0, 3));
			func_2023(iVar2, 2, 1, iVar3, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			iVar2 = func_2016(iParam0);
			func_2023(iVar2, 3, 1, -1, 1);
			break;
		case joaat("SLOW_AND_STEADY_VFX"):
			iVar2 = func_2016(iParam0);
			func_2023(iVar2, 4, 1, -1, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(iVar1, 0.01531954f);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case joaat("SLOW_AND_STEADY_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(iVar1, 1.916251E+31f);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_SET_ENTITY_AURA(0f, 2f, 2f);
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(iVar1, 6.398504E+32f);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 25);
			PLAYER::_0x263D69767F76059C(iVar1, 2);
			break;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_EAGLE_EYE_SET_PLUS_FLAG_DISABLED(iVar1, false);
			break;
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(iVar1, true);
			break;
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(iVar1, 0.5f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(iVar1, 2f);
			break;
		case joaat("NED_KELLY_BASE"):
			func_2024();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_642(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_642(16);
			break;
	}
}

void func_1992(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_2025(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_2026(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::PLAY_SOUND_FROM_ENTITY(sVar0, Global_1295619.f_3, sVar1, false, 0, 0);
}

bool func_1993(int iParam0, bool bParam1)
{
	float fVar0;
	struct<4> Var1;
	int iVar5;
	bool bVar6;

	fVar0 = func_1549(iParam0);
	Var1 = { func_710(bParam1) };
	iVar5 = func_2027(&Var1, fVar0, bParam1);
	bVar6 = iVar5 == false;
	return bVar6;
}

bool func_1994(var uParam0)
{
	return (!uParam0->f_20 && !func_1817(uParam0));
}

int func_1995(bool bParam0, bool bParam1)
{
	struct<2> Var0;

	if (!func_714(bParam0, 0))
	{
		return -1;
	}
	UNLOCK::_UNLOCK_GET_ITEM_ROLE_UNLOCK_INFO(bParam0, &Var0);
	if (Var0.f_1 < 1)
	{
		return -1;
	}
	else if (func_1336(bParam0, 5.144831E-36f) || func_1336(bParam0, 8.874786E+09f))
	{
		return -1;
	}
	switch (Var0)
	{
		case joaat("CHARACTER_RANK_TRADER"):
		case joaat("CHARACTER_RANK_BOUNTY_HUNTER"):
		case joaat("CHARACTER_RANK_COLLECTOR"):
			if (bParam1)
			{
				return Var0.f_1;
			}
			return -1;
		case joaat("CHARACTER_RANK_INTRO"):
			return 1;
		case joaat("CHARACTER_RANK"):
			return Var0.f_1;
		default:
			break;
	}
	return -1;
}

int func_1996(int iParam0)
{
	int iVar0;

	if (!func_1986(iParam0))
	{
		return -1;
	}
	iVar0 = func_1987(iParam0, 1);
	return Global_1156096.f_35859.f_9286[iVar0 /*3*/];
}

int func_1997(int iParam0)
{
	switch (iParam0)
	{
		case -2085163631:
			return 0;
		case joaat("REGION_BAY_CRAWDADWILLIES"):
			return 0;
		case joaat("REGION_BAY_MACOMBS_END"):
			return 1;
		case joaat("REGION_BAY_MERKINSWALLER"):
			return 2;
		case joaat("REGION_BAY_LAGRAS"):
			return 3;
		case joaat("REGION_BAY_LAKAY"):
			return 4;
		case joaat("REGION_BAY_SAINT_DENIS"):
			return 5;
		case joaat("REGION_BAY_ORANGE_PLANTATION"):
			return 6;
		case joaat("REGION_BAY_SERIAL_KILLER"):
			return 7;
		case joaat("REGION_BAY_SERENDIPITY"):
			return 8;
		case joaat("REGION_BAY_SHADYBELLE"):
			return 9;
		case joaat("REGION_BAY_SILTWATERSTRAND"):
			return 10;
		case joaat("REGION_BGV_APPLESEEDTIMBER"):
			return 11;
		case joaat("REGION_BGV_BERYLS_DREAM"):
			return 12;
		case joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER"):
			return 13;
		case joaat("REGION_BGV_DAKOTARIVER_TRAPPER"):
			return 14;
		case joaat("REGION_BGV_FORTRIGGS"):
			return 15;
		case joaat("REGION_BGV_HANGINGDOG"):
			return 16;
		case joaat("REGION_BGV_LONEMULESTEAD"):
			return 17;
		case joaat("REGION_BGV_MISSING_HUSBAND"):
			return 18;
		case joaat("REGION_BGV_MONTO_REST"):
			return 19;
		case joaat("REGION_BGV_OWANJILA_DAM"):
			return 20;
		case joaat("REGION_BGV_PAINTEDSKY"):
			return 21;
		case joaat("REGION_BGV_PRONGHORN"):
			return 22;
		case joaat("REGION_BGV_RIGGS_STATION"):
			return 23;
		case joaat("REGION_BGV_SHACK"):
			return 24;
		case joaat("REGION_BGV_SHEPHERDS_RISE"):
			return 25;
		case joaat("REGION_BGV_STRAWBERRY"):
			return 26;
		case joaat("REGION_BGV_VALLEY_VIEW"):
			return 27;
		case joaat("REGION_BGV_WATSONSCABIN"):
			return 30;
		case joaat("REGION_BGV_OLD_MAN_JONES"):
			return 29;
		case joaat("REGION_BLU_CANEBREAK_MANOR"):
			return 31;
		case joaat("REGION_BLU_COPPERHEAD"):
			return 32;
		case joaat("REGION_BLU_SISIKA"):
			return 33;
		case joaat("REGION_BLU_TRAVELLING_SALESMAN"):
			return 34;
		case joaat("REGION_CML_BACCHUSBRIDGE"):
			return 35;
		case joaat("REGION_CML_DINO_LADY"):
			return 36;
		case joaat("REGION_CML_OLDFORTWALLACE"):
			return 37;
		case joaat("REGION_CML_SIXPOINTCABIN"):
			return 38;
		case joaat("REGION_GRT_BEECHERS"):
			return 39;
		case joaat("REGION_GRT_BLACKWATER"):
			return 40;
		case joaat("REGION_GRT_QUAKERS_COVE"):
			return 41;
		case joaat("REGION_GRZ_ADLERRANCH"):
			return 42;
		case joaat("REGION_GRZ_DEAD_RIVAL"):
			return 43;
		case joaat("REGION_GRZ_CALUMETRAVINE"):
			return 53;
		case joaat("REGION_GRE_CIVIL_WAR_BRIDE"):
			return 54;
		case joaat("REGION_GRZ_CHEZPORTER"):
			return 44;
		case joaat("REGION_GRZ_COHUTTA"):
			return 55;
		case joaat("REGION_GRZ_COLTER"):
			return 45;
		case joaat("REGION_GRZ_COTORRA_SPRINGS"):
			return 56;
		case joaat("REGION_GRZ_FROZEN_EXPLORER"):
			return 46;
		case joaat("REGION_GRZ_GUNFIGHT"):
			return 57;
		case joaat("REGION_GRZ_MILLESANI_CLAIM"):
			return 47;
		case joaat("REGION_GRZ_MOUNTAIN_MAN"):
			return 48;
		case joaat("REGION_GRZ_MOUNT_HAGEN_PEAK"):
			return 49;
		case joaat("REGION_GRZ_STARVING_CHILDREN"):
			return 50;
		case joaat("REGION_GRZ_TEMPEST_RIM"):
			return 51;
		case joaat("REGION_GRZ_THELOFT"):
			return 58;
		case joaat("REGION_BGV_WALLACE_STATION"):
			return 28;
		case joaat("REGION_GRE_VETERAN"):
			return 59;
		case joaat("REGION_GRZ_WAPITI"):
			return 60;
		case joaat("REGION_GRZ_WINTERMINING_TOWN"):
			return 52;
		case joaat("REGION_GRZ_TRAVELLING_SALESMAN"):
			return 61;
		case joaat("REGION_GUA_AGUASDULCES"):
			return 62;
		case joaat("REGION_GUA_CAMP"):
			return 63;
		case joaat("REGION_GUA_CINCOTORRES"):
			return 64;
		case joaat("REGION_GUA_LACAPILLA"):
			return 65;
		case joaat("REGION_GUA_MANICATO"):
			return 66;
		case joaat("REGION_HRT_ABANDONED_MILL"):
			return 67;
		case joaat("REGION_HRT_CARMODYDELL"):
			return 69;
		case joaat("REGION_HRT_CORNWALLKEROSENE"):
			return 70;
		case joaat("REGION_HRT_CROP_FARM"):
			return 71;
		case joaat("REGION_HRT_CUMBERLANDFALLS"):
			return 72;
		case joaat("REGION_HRT_DOWNSRANCH"):
			return 73;
		case joaat("REGION_HRT_EMERALDRANCH"):
			return 74;
		case joaat("REGION_HRT_GRANGERS_HOGGERY"):
			return 75;
		case joaat("REGION_HRT_HORSESHOEOVERLOOK"):
			return 76;
		case joaat("REGION_HRT_LARNEDSOD"):
			return 77;
		case joaat("REGION_HRT_LOONY_CULT"):
			return 78;
		case joaat("REGION_HRT_LUCKYSCABIN"):
			return 79;
		case joaat("REGION_HRT_SWANSONS_STATION"):
			return 80;
		case joaat("REGION_HRT_VALENTINE"):
			return 81;
		case joaat("REGION_ROA_ABERDEENPIGFARM"):
			return 82;
		case joaat("REGION_ROA_ANNESBURG"):
			return 83;
		case joaat("REGION_ROA_BEECHERS_C"):
			return 68;
		case joaat("REGION_ROA_BEAVERHOLLOW"):
			return 84;
		case joaat("REGION_ROA_BLACK_BALSAM_RISE"):
			return 85;
		case joaat("REGION_ROA_BRANDYWINE_DROP"):
			return 86;
		case joaat("REGION_ROA_BUTCHERCREEK"):
			return 87;
		case joaat("REGION_ROA_DOVERHILL"):
			return 88;
		case joaat("REGION_ROA_HAPPY_FAMILY"):
			return 89;
		case joaat("REGION_ROA_ISOLATIONIST"):
			return 90;
		case joaat("REGION_ROA_MACLEANSHOUSE"):
			return 91;
		case joaat("REGION_ROA_MOSSY_FLATS"):
			return 92;
		case joaat("REGION_ROA_ROANOKE_VALLEY"):
			return 93;
		case joaat("REGION_ROA_ROCKYSEVEN"):
			return 94;
		case joaat("REGION_ROA_TRAPPER"):
			return 95;
		case joaat("REGION_ROA_VANHORNMANSION"):
			return 97;
		case joaat("REGION_ROA_VANHORNPOST"):
			return 98;
		case joaat("REGION_ROA_OLD_MAN_JONES"):
			return 96;
		case joaat("REGION_SCM_BRAITHWAITEMANOR"):
			return 99;
		case joaat("REGION_SCM_BULGERGLADE"):
			return 100;
		case joaat("REGION_SCM_CALIGAHALL"):
			return 101;
		case joaat("REGION_SCM_CATFISHJACKSONS"):
			return 102;
		case joaat("REGION_SCM_CLEMENSCOVE"):
			return 103;
		case joaat("REGION_SCM_CLEMENSPOINT"):
			return 104;
		case joaat("REGION_SCM_HORSE_SHOP"):
			return 107;
		case joaat("REGION_SCM_LONNIESSHACK"):
			return 108;
		case joaat("REGION_SCM_LOVE_TRIANGLE"):
			return 109;
		case joaat("REGION_SCM_COMPSONS_STEAD"):
			return 105;
		case joaat("REGION_SCM_DAIRY_FARM"):
			return 106;
		case joaat("REGION_SCM_RADLEYS_PASTURE"):
			return 110;
		case joaat("REGION_SCM_RHODES"):
			return 111;
		case joaat("REGION_SCM_SLAVE_PEN"):
			return 112;
		case joaat("REGION_TAL_AURORA_BASIN"):
			return 113;
		case joaat("REGION_TAL_DEAD_SETTLER"):
			return 114;
		case joaat("REGION_TAL_COCHINAY"):
			return 115;
		case joaat("REGION_TAL_MANZANITAPOST"):
			return 116;
		case joaat("REGION_TAL_PACIFICUNIONRR"):
			return 117;
		case joaat("REGION_TAL_TANNERSREACH"):
			return 118;
		case joaat("REGION_TAL_TRAPPER"):
			return 119;
		case joaat("REGION_HEN_MACFARLANES_RANCH"):
			return 135;
		case joaat("REGION_HEN_THIEVES_LANDING"):
			return 136;
		case joaat("REGION_HEN_TRAVELLING_SALESMAN"):
			return 137;
		case -1573562784:
			return 138;
		case joaat("REGION_CHO_ARMADILLO"):
			return 127;
		case joaat("REGION_CHO_COOTS_CHAPEL"):
			return 128;
		case joaat("REGION_CHO_DON_JULIO_HOUSE"):
			return 129;
		case joaat("REGION_CHO_RIDGEWOOD_FARM"):
			return 131;
		case joaat("REGION_CHO_RILEYS_CHARGE"):
			return 130;
		case joaat("REGION_CHO_TWIN_ROCKS"):
			return 132;
		case joaat("REGION_CHO_TRAVELLING_SALESMAN"):
			return 133;
		case 1869665995:
			return 134;
		case joaat("REGION_GAP_GAPTOOTH_BREACH"):
			return 120;
		case joaat("REGION_GAP_TUMBLEWEED"):
			return 121;
		case joaat("REGION_GAP_RATHSKELLER_FORK"):
			return 122;
		case joaat("REGION_RIO_BENEDICT_POINT"):
			return 123;
		case joaat("REGION_RIO_FORT_MERCER"):
			return 124;
		case joaat("REGION_RIO_PLAIN_VIEW"):
			return 125;
		case joaat("REGION_RIO_TRAVELLING_SALESMAN"):
			return 126;
		case joaat("REGION_CENTRALUNIONRR"):
			return 139;
		default:
			break;
	}
	return -1;
}

int func_1998(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DISTRICT_BAYOU_NWA"):
			return 0;
		case joaat("DISTRICT_BIG_VALLEY"):
			return 1;
		case joaat("DISTRICT_BLUEGILL_MARSH"):
			return 2;
		case joaat("DISTRICT_CUMBERLAND_FOREST"):
			return 3;
		case joaat("DISTRICT_GREAT_PLAINS"):
			return 4;
		case joaat("DISTRICT_GRIZZLIES"):
			return 5;
		case joaat("DISTRICT_GRIZZLIES_EAST"):
			return 6;
		case joaat("DISTRICT_GRIZZLIES_WEST"):
			return 7;
		case joaat("DISTRICT_GUAMA"):
			return 8;
		case joaat("DISTRICT_HEARTLAND"):
			return 9;
		case joaat("DISTRICT_ROANOKE_RIDGE"):
			return 10;
		case joaat("DISTRICT_SCARLETT_MEADOWS"):
			return 11;
		case joaat("DISTRICT_TALL_TREES"):
			return 12;
		case joaat("DISTRICT_GAPTOOTH_RIDGE"):
			return 13;
		case joaat("DISTRICT_RIO_BRAVO"):
			return 14;
		case joaat("DISTRICT_CHOLLA_SPRINGS"):
			return 15;
		case joaat("DISTRICT_HENNIGANS_STEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

char* func_1999(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 30:
			return "REGION_BGV_WATSONSCABIN";
		case 29:
			return "REGION_BGV_OLD_MAN_JONES";
		case 31:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 32:
			return "REGION_BLU_COPPERHEAD";
		case 33:
			return "REGION_BLU_SISIKA";
		case 34:
			return "REGION_BLU_TRAVELLING_SALESMAN";
		case 35:
			return "REGION_CML_BACCHUSBRIDGE";
		case 36:
			return "REGION_CML_DINO_LADY";
		case 37:
			return "REGION_CML_OLDFORTWALLACE";
		case 38:
			return "REGION_CML_SIXPOINTCABIN";
		case 39:
			return "REGION_GRT_BEECHERS";
		case 40:
			return "REGION_GRT_BLACKWATER";
		case 41:
			return "REGION_GRT_QUAKERS_COVE";
		case 42:
			return "REGION_GRZ_ADLERRANCH";
		case 43:
			return "REGION_GRZ_DEAD_RIVAL";
		case 53:
			return "REGION_GRZ_CALUMETRAVINE";
		case 54:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 44:
			return "REGION_GRZ_CHEZPORTER";
		case 55:
			return "REGION_GRZ_COHUTTA";
		case 45:
			return "REGION_GRZ_COLTER";
		case 56:
			return "REGION_GRZ_COTORRA_SPRINGS";
		case 46:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 57:
			return "REGION_GRZ_GUNFIGHT";
		case 47:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 48:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 49:
			return "REGION_GRZ_MOUNT_HAGEN_PEAK";
		case 50:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 51:
			return "REGION_GRZ_TEMPEST_RIM";
		case 58:
			return "REGION_GRZ_THELOFT";
		case 59:
			return "REGION_GRE_VETERAN";
		case 60:
			return "REGION_GRZ_WAPITI";
		case 52:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 61:
			return "REGION_GRZ_TRAVELLING_SALESMAN";
		case 62:
			return "REGION_GUA_AGUASDULCES";
		case 63:
			return "REGION_GUA_CAMP";
		case 64:
			return "REGION_GUA_CINCOTORRES";
		case 65:
			return "REGION_GUA_LACAPILLA";
		case 66:
			return "REGION_GUA_MANICATO";
		case 67:
			return "REGION_HRT_ABANDONED_MILL";
		case 69:
			return "REGION_HRT_CARMODYDELL";
		case 70:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 71:
			return "REGION_HRT_CROP_FARM";
		case 72:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 73:
			return "REGION_HRT_DOWNSRANCH";
		case 74:
			return "REGION_HRT_EMERALDRANCH";
		case 75:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 76:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 77:
			return "REGION_HRT_LARNEDSOD";
		case 78:
			return "REGION_HRT_LOONY_CULT";
		case 79:
			return "REGION_HRT_LUCKYSCABIN";
		case 80:
			return "REGION_HRT_SWANSONS_STATION";
		case 81:
			return "REGION_HRT_VALENTINE";
		case 82:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 83:
			return "REGION_ROA_ANNESBURG";
		case 84:
			return "REGION_ROA_BEAVERHOLLOW";
		case 68:
			return "REGION_ROA_BEECHERS_C";
		case 85:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 86:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 87:
			return "REGION_ROA_BUTCHERCREEK";
		case 88:
			return "REGION_ROA_DOVERHILL";
		case 89:
			return "REGION_ROA_HAPPY_FAMILY";
		case 90:
			return "REGION_ROA_ISOLATIONIST";
		case 91:
			return "REGION_ROA_MACLEANSHOUSE";
		case 92:
			return "REGION_ROA_MOSSY_FLATS";
		case 93:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 94:
			return "REGION_ROA_ROCKYSEVEN";
		case 95:
			return "REGION_ROA_TRAPPER";
		case 97:
			return "REGION_ROA_VANHORNMANSION";
		case 98:
			return "REGION_ROA_VANHORNPOST";
		case 96:
			return "REGION_ROA_OLD_MAN_JONES";
		case 99:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 100:
			return "REGION_SCM_BULGERGLADE";
		case 101:
			return "REGION_SCM_CALIGAHALL";
		case 102:
			return "REGION_SCM_CATFISHJACKSONS";
		case 103:
			return "REGION_SCM_CLEMENSCOVE";
		case 104:
			return "REGION_SCM_CLEMENSPOINT";
		case 105:
			return "REGION_SCM_COMPSONS_STEAD";
		case 106:
			return "REGION_SCM_DAIRY_FARM";
		case 107:
			return "REGION_SCM_HORSE_SHOP";
		case 108:
			return "REGION_SCM_LONNIESSHACK";
		case 109:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 110:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 111:
			return "REGION_SCM_RHODES";
		case 112:
			return "REGION_SCM_SLAVE_PEN";
		case 113:
			return "REGION_TAL_AURORA_BASIN";
		case 114:
			return "REGION_TAL_DEAD_SETTLER";
		case 115:
			return "REGION_TAL_COCHINAY";
		case 116:
			return "REGION_TAL_MANZANITAPOST";
		case 117:
			return "REGION_TAL_PACIFICUNIONRR";
		case 118:
			return "REGION_TAL_TANNERSREACH";
		case 119:
			return "REGION_TAL_TRAPPER";
		case 135:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 136:
			return "REGION_HEN_THIEVES_LANDING";
		case 137:
			return "REGION_HEN_TRAVELLING_SALESMAN";
		case 138:
			return "REGION_HEN_HARRIET";
		case 127:
			return "REGION_CHO_ARMADILLO";
		case 128:
			return "REGION_CHO_COOTS_CHAPEL";
		case 129:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 131:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 130:
			return "REGION_CHO_RILEYS_CHARGE";
		case 132:
			return "REGION_CHO_TWIN_ROCKS";
		case 133:
			return "REGION_CHO_TRAVELLING_SALESMAN";
		case 134:
			return "REGION_CHO_TRAPPER";
		case 120:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 121:
			return "REGION_GAP_TUMBLEWEED";
		case 122:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 123:
			return "REGION_RIO_BENEDICT_POINT";
		case 124:
			return "REGION_RIO_FORT_MERCER";
		case 125:
			return "REGION_RIO_PLAIN_VIEW";
		case 126:
			return "REGION_RIO_TRAVELLING_SALESMAN";
		case 139:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

char* func_2000(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_2001(int iParam0)
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
	iVar0 = func_1873(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_1872(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_1871(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_1868(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_1869(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_1870(iParam0);
	if (iVar5 < 1 || iVar5 > func_1874(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_2002(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_2028(func_1737(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_2003(var uParam0)
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

bool func_2004(int iParam0)
{
	int iVar0;

	iVar0 = func_1724(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_2005(int iParam0)
{
	int iVar0;

	iVar0 = func_1724(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_2006(int iParam0)
{
	int iVar0;

	iVar0 = func_1724(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_2007(int iParam0)
{
	int iVar0;

	iVar0 = func_1724(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_2008(int iParam0)
{
	int iVar0;

	iVar0 = func_1724(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_2009(int iParam0)
{
	int iVar0;

	iVar0 = func_1724(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

float func_2010(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_2029(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_2011(int iParam0)
{
	int iVar0;

	iVar0 = func_2012(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_2012(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CONSECUTIVE_DAMAGE_DEALT"):
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case joaat("CONSECUTIVE_DAMAGE_TAKEN"):
			return 4;
		case joaat("NEARBY_ALLIES"):
			return 2;
		case 1416591065:
			return 1;
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

void func_2013()
{
	bool bVar0;
	bool bVar1;

	if (Global_1156096.f_21645[3 /*209*/].f_208)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 550, bVar0);
	if (Global_1156096.f_21645[4 /*209*/].f_208)
	{
		if (!func_78(Global_1297553[Global_1295619 /*87*/].f_86, 1))
		{
			bVar1 = true;
		}
	}
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 556, bVar1);
}

void func_2014()
{
	bool bVar0;

	bVar0 = false;
	if (Global_1156096.f_21645[12 /*209*/].f_208)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 263, bVar0);
}

char* func_2015(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRAIN_EFFECT"):
			return "MP_ArrowDrain";
		case joaat("DISORIENT_EFFECT"):
			return "MP_ArrowDisorient";
		case joaat("TRAIL_EFFECT"):
			return "MP_ArrowTracking";
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return "MP_MoonshineToxic";
		default:
			break;
	}
	return "";
}

int func_2016(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			return -3.757584E+08f;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return -2.713979E-21f;
		case joaat("SLOW_AND_STEADY_VFX"):
			return 2.348818E-06f;
		default:
			break;
	}
	return 0;
}

void func_2017(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1203856[iVar0 /*8*/].f_5 == iParam0)
		{
			Global_1203856[iVar0 /*8*/].f_7 = 1;
			Global_1203856[iVar0 /*8*/].f_5 = 0;
		}
		iVar0++;
	}
}

void func_2018()
{
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 305, false);
	PED::_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295619.f_3);
}

bool func_2019(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_1919(iParam0))
	{
		return false;
	}
	iVar0 = func_1831(iParam0, 1);
	iVar2 = Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4;
	if (func_1921(Global_1156096.f_35859.f_3116[iVar0 /*31*/]))
	{
		iVar3 = Global_1156096.f_35859.f_9286[func_1987(iVar2, 1) /*3*/];
		Var4 = { func_2020(iVar3) };
		if (iVar3 != iParam0 && Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_5 <= Var4.f_5)
		{
			return false;
		}
	}
	switch (Global_1156096.f_35859.f_3116[iVar0 /*31*/])
	{
		case -1606735498:
		case joaat("ON_HEADSHOT"):
		case joaat("ENTER_WEARING_HAT"):
		case joaat("ENTER_SPRINTING"):
		case joaat("ENTER_MOUNTED"):
		case joaat("ENTER_DUAL_WIELD"):
		case -971275364:
		case joaat("ON_KILL"):
		case joaat("ENTER_SCENARIO"):
		case joaat("ENTER_REVIVER"):
		case -193993646:
		case joaat("ENTER_ALLY_NEARBY"):
		case -23641105:
		case joaat("ON_DAMAGE_TAKEN"):
		case joaat("ENTER_MELEE"):
		case joaat("ON_DAMAGE_DEALT_FROM_HORSEBACK"):
		case 429965152:
		case joaat("ON_DAMAGE_TAKEN_FROM_HORSEBACK"):
		case joaat("ENTER_WINDED"):
		case joaat("ENTER_NO_HAT"):
		case joaat("ON_ENABLE"):
		case joaat("ENTER_EAGLE_EYE"):
		case joaat("ENTER_DEADEYE"):
		case joaat("ENTER_SCOPED"):
		case joaat("ENTER_COVER"):
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case joaat("ENTER_DAMAGED"):
		case joaat("ON_DAMAGE_DEALT"):
		case joaat("ENTER_REVIVED"):
		case joaat("ENTER_LASSOING"):
		case joaat("ENTER_IN_VEHICLE"):
		case 2116793692:
			return true;
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_2030() && !func_2031())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_2030())
			{
				return false;
			}
			return true;
		case joaat("ENTER_REVIVED_REMOTE"):
			iVar1 = func_1918(iParam1);
			if (iVar1 == Global_1295619)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_1918(iParam1);
			if (iVar1 == Global_1295619)
			{
				return false;
			}
			if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295619.f_149[Global_1295619]))
			{
				return false;
			}
			if (!GANG::_NETWORK_IS_IN_MY_GANG(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			return true;
		case joaat("ALLY_ENTER_DEADEYE"):
			iVar1 = func_1918(iParam1);
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			if (iVar1 != Global_1295619 && !func_1021(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			if (!func_1244(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!Global_1956862.f_1716[8])
			{
				return false;
			}
			iVar1 = func_1918(iParam1);
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			if (PED::_GET_LASSOED_LASSOER(Global_1295619.f_3) != PLAYER::GET_PLAYER_PED(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

struct<31> func_2020(int iParam0)
{
	int iVar0;

	iVar0 = func_1831(iParam0, 1);
	return Global_1156096.f_35859.f_3116[iVar0 /*31*/];
}

bool func_2021(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_2029(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_2022(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
				case 1:
					return "CP_CHEST";
				case 2:
					return "CP_R_UpperArm";
				case 3:
					return "CP_L_UpperArm";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_2023(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1203856[iVar0 /*8*/]) && !Global_1203856[iVar0 /*8*/].f_6)
		{
			Global_1203856[iVar0 /*8*/].f_5 = iParam0;
			Global_1203856[iVar0 /*8*/].f_1 = iParam1;
			Global_1203856[iVar0 /*8*/].f_2 = iParam2;
			Global_1203856[iVar0 /*8*/].f_3 = iParam3;
			Global_1203856[iVar0 /*8*/].f_4 = iParam4;
			Global_1203856[iVar0 /*8*/].f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_2024()
{
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 305, true);
	PED::_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295619.f_3, 0.7f);
}

char* func_2025(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
		default:
			break;
	}
	return "";
}

char* func_2026(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
		default:
			break;
	}
	return "";
}

int func_2027(int iParam0, int iParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_692(bParam2), iParam0, iParam1);
}

void func_2028(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_2032(iParam0, iParam1, 1))
	{
		iVar0 = func_1869(iParam1);
		iVar1 = func_1868(iParam0);
		iVar2 = (func_1868(iParam0) - func_1868(iParam1));
		iVar3 = (func_1869(iParam0) - func_1869(iParam1));
		iVar4 = (func_1870(iParam0) - func_1870(iParam1));
		iVar5 = (func_1871(iParam0) - func_1871(iParam1));
		iVar6 = (func_1872(iParam0) - func_1872(iParam1));
		iVar7 = (func_1873(iParam0) - func_1873(iParam1));
	}
	else
	{
		iVar0 = func_1869(iParam0);
		iVar1 = func_1868(iParam1);
		iVar2 = (func_1868(iParam1) - func_1868(iParam0));
		iVar3 = (func_1869(iParam1) - func_1869(iParam0));
		iVar4 = (func_1870(iParam1) - func_1870(iParam0));
		iVar5 = (func_1871(iParam1) - func_1871(iParam0));
		iVar6 = (func_1872(iParam1) - func_1872(iParam0));
		iVar7 = (func_1873(iParam1) - func_1873(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_1874(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_2033(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 1094713344 /* Float: 12f */));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

bool func_2029(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar7;

	Var0 = -2.811747E+32f;
	Var0.f_1 = iParam0;
	Var0.f_2 = -5.324383E+23f;
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	DATAFILE::_PARSEDDATA_GET_FILE(&Var0);
	if (DATAFILE::_PARSEDDATA_GET_SECTION(&iVar7, &Var0, -5.324383E+23f))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		DATAFILE::_PARSEDDATA_GET_SECTION(&iVar7, &Var0, 3.342414E-09f);
		uParam2->f_10.f_3 = func_2034(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_10), &Var0, -3.294982E+22f))
				{
				}
				break;
			case 1:
				if (!DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_10.f_1), &Var0, -3.294982E+22f))
				{
				}
				break;
			case 2:
				if (!DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_10.f_2), &Var0, -3.294982E+22f))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_14), &Var0, -5.878582E+37f);
				break;
			case 1:
				DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_14.f_1), &Var0, -5.878582E+37f);
				break;
			case 2:
				DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_14.f_2), &Var0, -5.878582E+37f);
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_18), &Var0, 6.468156E+19f);
				break;
			case 1:
				DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_18.f_1), &Var0, 6.468156E+19f);
				break;
			case 2:
				DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_18.f_2), &Var0, 6.468156E+19f);
				break;
		}
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		return true;
	}
	return false;
}

bool func_2030()
{
	return Global_1572887.f_7;
}

bool func_2031()
{
	if (!Global_1048577)
	{
		return false;
	}
	if (!func_73(func_379(0)))
	{
		return false;
	}
	if (Global_3145858 != -5.544348E+20f)
	{
		return false;
	}
	if (func_1512(Global_524288.f_39632))
	{
		return true;
	}
	return false;
}

bool func_2032(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_2001(iParam1) || !func_2001(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

float func_2033(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(BUILTIN::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_2034(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("INT"):
			iVar0 = 0;
			break;
		case joaat("FLOAT"):
			iVar0 = 1;
			break;
		case joaat("BOOL"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

