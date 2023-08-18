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
	struct<360> Local_13 = { 0, 0, 0, 32, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vScriptParam_0 = { NaNf, 0f, 0f };
#endregion

void __EntryFunction__()
{
	bool bVar0;

	func_1(vScriptParam_0);
	bVar0 = true;
	while (bVar0)
	{
		bVar0 = !func_2(&Local_13);
		if (func_3(&Local_13))
		{
			bVar0 = false;
		}
		BUILTIN::WAIT(0);
	}
	func_4(&Local_13);
	func_5();
}

void func_1(vector3 vParam0)
{
	int iVar0;

	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Local_13.f_2 = vParam0.x;
	Local_13.f_359 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(vParam0.f_2), iVar0))
		{
		}
		else
		{
			Local_13.f_3[iVar0 /*11*/].f_1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		}
		iVar0++;
	}
}

bool func_2(var uParam0)
{
	int iVar0;

	if (func_6(0, 0))
	{
		return true;
	}
	iVar0 = MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - uParam0->f_359));
	if (iVar0 > 120)
	{
		return true;
	}
	return false;
}

bool func_3(var uParam0)
{
	bool bVar0;
	int iVar1;

	switch (func_7(uParam0))
	{
		case 0:
			if (GRAPHICS::PEDSHOT_IS_AVAILABLE())
			{
				return false;
			}
			uParam0->f_356 = 0;
			uParam0->f_357 = 0;
			uParam0->f_358 = 0;
			switch (uParam0->f_2)
			{
				case 0:
					bVar0 = true;
					break;
				case 1:
				case 2:
					iVar1 = 0;
					while (iVar1 < 32)
					{
						if (uParam0->f_3[iVar1 /*11*/].f_1 == 255 || uParam0->f_3[iVar1 /*11*/].f_1 < 0)
						{
						}
						else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_3[iVar1 /*11*/].f_1))
						{
						}
						else if (!bVar0)
						{
							uParam0->f_356 = iVar1;
							bVar0 = true;
						}
						else
						{
							iVar1++;
						}
						func_8(uParam0, 1);
						Jump @295; //curOff = 210
						if (func_9(uParam0))
						{
							func_8(uParam0, 2);
						}
						Jump @295; //curOff = 229
						if (func_10(uParam0))
						{
							func_11(uParam0, uParam0->f_356);
							func_12(uParam0, 0);
							if (uParam0->f_357 >= uParam0->f_358)
							{
								func_8(uParam0, 4);
							}
							else
							{
								func_13(uParam0);
							}
						}
						Jump @295; //curOff = 288
						return true;
						return false;
					}
					default:
						break;
			}
			default:
				break;
	}
}

void func_4(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*11*/]))
		{
			PED::DELETE_PED(&(uParam0->f_3[iVar0 /*11*/]));
		}
		iVar0++;
	}
	if (func_14(256))
	{
		GRAPHICS::_PEDSHOT_INIT_CLEANUP_DATA();
		GRAPHICS::_PEDSHOT_FINISH_CLEANUP_DATA();
	}
	func_15(16);
}

void func_5()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_6(bool bParam0, bool bParam1)
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

int func_7(var uParam0)
{
	return *uParam0;
}

void func_8(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_9(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		switch (uParam0->f_2)
		{
			case 0:
			default:
				return false;
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar1 /*11*/]))
				{
					return true;
				}
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (!PED::IS_PED_READY_TO_RENDER(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				iVar0 = PLAYER::PLAYER_PED_ID();
			case 1:
			case 2:
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar1 /*11*/]))
				{
				}
				else if (uParam0->f_3[iVar1 /*11*/].f_1 == 255 || uParam0->f_3[iVar1 /*11*/].f_1 < 0)
				{
				}
				else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_3[iVar1 /*11*/].f_1))
				{
				}
				else
				{
					iVar0 = PLAYER::GET_PLAYER_PED(uParam0->f_3[iVar1 /*11*/].f_1);
					if (ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						return false;
					}
					if (!PED::IS_PED_READY_TO_RENDER(iVar0))
					{
						return false;
					}
					uParam0->f_3[iVar1 /*11*/].f_2 = PED::IS_PED_MALE(iVar0);
					uParam0->f_3[iVar1 /*11*/].f_3 = { func_16(uParam0->f_2, uParam0->f_3[iVar1 /*11*/].f_2) };
					uParam0->f_3[iVar1 /*11*/] = func_17(iVar0);
					uParam0->f_358++;
					if (uParam0->f_2 == 0)
					{
						return true;
					}
					else
					{
						return false;
					}
				}
				iVar1++;
				return true;
		}
	}
}

bool func_10(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = uParam0->f_356;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*11*/]))
	{
		return true;
	}
	if (!PED::IS_PED_READY_TO_RENDER(uParam0->f_3[iVar0 /*11*/]))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*11*/]))
	{
		PED::RESURRECT_PED(uParam0->f_3[iVar0 /*11*/]);
	}
	iVar1 = -1;
	switch (uParam0->f_1)
	{
		case 0:
			if (NETWORK::_NETWORK_IS_PREVIOUS_UPLOAD_PENDING())
			{
				return false;
			}
			iVar1 = uParam0->f_3[iVar0 /*11*/].f_1;
			if (func_18(iVar1, uParam0->f_2) != 0)
			{
				func_19(iVar1, uParam0->f_2);
			}
			func_20(iVar1, uParam0->f_2, 1);
			func_15(256);
			GRAPHICS::_PEDSHOT_PREVIOUS_PERSONA_PHOTO_DATA_CLEANUP();
			GRAPHICS::_PEDSHOT_SET_PERSONA_PHOTO_TYPE(1);
			GRAPHICS::_PEDSHOT_GENERATE_PERSONA_PHOTO(&(uParam0->f_3[iVar0 /*11*/].f_3), uParam0->f_3[iVar0 /*11*/], 0);
			PED::FORCE_PED_MOTION_STATE(uParam0->f_3[iVar0 /*11*/], 4.769984E-30f, false, 0, false);
			func_12(uParam0, 1);
			break;
		case 1:
			PED::FORCE_PED_MOTION_STATE(uParam0->f_3[iVar0 /*11*/], 4.769984E-30f, false, 0, false);
			switch (uParam0->f_2)
			{
				case 0:
					bVar2 = NETWORK::_NETWORK_PERSONA_PHOTO_WRITE_SC_PROFILE(&(uParam0->f_3[iVar0 /*11*/].f_3), uParam0->f_2, 1);
					break;
				case 1:
				case 2:
					iVar1 = uParam0->f_3[iVar0 /*11*/].f_1;
					bVar2 = NETWORK::_NETWORK_PERSONA_PHOTO_WRITE_LOCAL(&(uParam0->f_3[iVar0 /*11*/].f_3), iVar1, 1, func_21(uParam0->f_2));
					break;
			}
			if (!bVar2)
			{
				return false;
			}
			func_12(uParam0, 2);
			break;
		case 2:
			PED::FORCE_PED_MOTION_STATE(uParam0->f_3[iVar0 /*11*/], 4.769984E-30f, false, 0, false);
			if (NETWORK::_NETWORK_IS_PREVIOUS_UPLOAD_PENDING())
			{
				return false;
			}
			uParam0->f_357++;
			if (uParam0->f_2 == 1 || uParam0->f_2 == 2)
			{
				func_20(uParam0->f_3[iVar0 /*11*/].f_1, uParam0->f_2, 2);
			}
			func_12(uParam0, 3);
			break;
		case 3:
			return true;
	}
	return false;
}

void func_11(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iParam1 /*11*/]))
	{
		PED::DELETE_PED(&(uParam0->f_3[iParam1 /*11*/]));
	}
	if (func_14(256))
	{
		GRAPHICS::_PEDSHOT_INIT_CLEANUP_DATA();
		GRAPHICS::_PEDSHOT_FINISH_CLEANUP_DATA();
		func_22(256);
	}
}

void func_12(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_13(var uParam0)
{
	int iVar0;

	uParam0->f_356++;
	if (uParam0->f_356 >= 32)
	{
		uParam0->f_356 = 31;
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[uParam0->f_356 /*11*/]))
	{
		return;
	}
	iVar0 = uParam0->f_356 + 1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*11*/]))
		{
		}
		else
		{
			uParam0->f_356 = iVar0;
			return;
		}
		iVar0++;
	}
}

bool func_14(int iParam0)
{
	return (Global_1149417.f_5087.f_321 && iParam0) != 0;
}

void func_15(int iParam0)
{
	Global_1149417.f_5087.f_321 = (Global_1149417.f_5087.f_321 || iParam0);
}

struct<8> func_16(int iParam0, bool bParam1)
{
	char cVar0[64];

	switch (iParam0)
	{
		case 0:
			StringConCat(&cVar0, "MP_PROFILE_PHOTO", 64);
			break;
		case 1:
			StringConCat(&cVar0, "MP_MISSION_PHOTO", 64);
			break;
		case 2:
			StringConCat(&cVar0, "MINIGAME_PROFILE_PHOTO", 64);
			break;
	}
	if (!bParam1)
	{
		StringConCat(&cVar0, "_F", 64);
	}
	return cVar0;
}

int func_17(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;

	vVar0 = { Global_1149417.f_5087.f_477, Global_1149417.f_5087.f_478, Global_1149417.f_5087.f_479 };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false) + vVar0 };
	iVar6 = PED::CLONE_PED(iParam0, false, false, true);
	ENTITY::SET_ENTITY_COORDS(iVar6, vVar3, true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(iVar6, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar6, false);
	ENTITY::SET_ENTITY_VISIBLE(iVar6, false);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar6, false, true);
	return iVar6;
}

int func_18(int iParam0, int iParam1)
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

void func_19(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	iVar1 = func_18(iParam0, iParam1);
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
			func_23(iParam0, iParam1, 0);
			func_20(iParam0, iParam1, 0);
		case 3:
		case 4:
		case 5:
			iVar2 = func_24(iParam0, iParam1);
			if (iVar2 != 0)
			{
				NETWORK::TEXTURE_DOWNLOAD_RELEASE(iVar2);
			}
			func_20(iParam0, iParam1, 0);
			break;
	}
}

void func_20(int iParam0, int iParam1, int iParam2)
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

int func_21(int iParam0)
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

void func_22(int iParam0)
{
	Global_1149417.f_5087.f_321 = (Global_1149417.f_5087.f_321 - (Global_1149417.f_5087.f_321 && iParam0));
}

void func_23(int iParam0, int iParam1, int iParam2)
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

int func_24(int iParam0, int iParam1)
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

