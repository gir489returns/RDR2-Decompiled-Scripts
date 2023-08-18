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
#endregion

void __EntryFunction__()
{
	bool bVar0;

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		NETWORK::_0xFD4272A137703449();
	}
	MISC::GAME_FRAMEWORK_MANAGER_INIT(-1.421381E-09f);
	MISC::SET_FADE_IN_AFTER_LOAD(false);
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
	REPLAY::SET_SCRIPTS_HAVE_CLEANED_UP_FOR_REPLAY_SYSTEM();
	BUILTIN::WAIT(1000);
	if (!REPLAY::IS_VIDEO_EDITOR_RUNNING())
	{
		if (REPLAY::OPEN_VIDEO_EDITOR())
		{
		}
	}
	if ((!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
	{
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
		CAM::DO_SCREEN_FADE_IN(500);
	}
	bVar0 = true;
	if (bVar0)
	{
		func_1(0);
		func_2();
	}
	while (bVar0)
	{
		bVar0 = REPLAY::IS_VIDEO_EDITOR_RUNNING();
		if (!bVar0)
		{
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			bVar0 = false;
		}
		BUILTIN::WAIT(0);
	}
	func_1(0);
	func_2();
	if (REPLAY::IS_VIDEO_EDITOR_RUNNING())
	{
		REPLAY::CLOSE_VIDEO_EDITOR(1);
	}
	MISC::_GAME_FRAMEWORK_MANAGER_SHUTDOWN();
	func_3(0, -1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(bool bParam0)
{
	int iVar0;
	bool bVar1;
	struct<26> Var2;

	iVar0 = PLAYER::PLAYER_ID();
	bVar1 = false;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		bVar1 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(iVar0)) == iVar0;
	}
	if (NETWORK::NETWORK_SESSION_IS_REQUEST_IN_PROGRESS(&(Global_1572887.f_260)) && (bParam0 || bVar1))
	{
		NETWORK::_NETWORK_SESSION_CANCEL_REQUEST(&(Global_1572887.f_260));
	}
	Var2.f_5 = 2;
	Var2.f_17 = -1;
	Var2.f_18 = -1;
	Var2.f_19 = -1;
	Var2.f_24 = -1;
	Global_1572887.f_260 = { Var2 };
}

void func_2()
{
	func_4();
	func_5(-1);
	func_6(0);
	Global_1572887.f_196.f_43 = 0;
	Global_1572887.f_196.f_60 = 0;
	Global_1572887.f_196.f_1 = -1;
	if (Global_1572887.f_196.f_56 == 2)
	{
		Global_1572887.f_196.f_56 = 0;
	}
}

void func_3(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		func_7(iParam0, iParam1);
	}
	func_8(4);
	func_9();
	func_10(1);
}

void func_4()
{
	Global_1572887.f_196.f_42 = MISC::GET_GAME_TIMER();
}

void func_5(int iParam0)
{
	Global_1572887.f_196.f_2 = iParam0;
}

void func_6(int iParam0)
{
	Global_1572887.f_196 = iParam0;
}

void func_7(int iParam0, int iParam1)
{
	if (Global_1572864.f_17 != 0)
	{
		return;
	}
	Global_1572864.f_17 = iParam0;
	Global_1572864.f_18 = iParam1;
}

void func_8(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 || iParam0);
}

void func_9()
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

void func_10(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864.f_1 = iParam0;
}

