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
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	struct<13> Local_19[5];
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = false;
	var uLocal_93[1] = { 0 };
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	iLocal_13 = 1;
	iLocal_87 = 5;
	iLocal_15 = vScriptParam_0.x;
	iLocal_16 = vScriptParam_0.y;
	iLocal_17 = vScriptParam_0.z;
	func_1();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2();
	}
	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED() && func_3())
	{
		func_4();
		func_5();
		func_6();
		BUILTIN::WAIT(0);
	}
	func_2();
}

void func_1()
{
}

void func_2()
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(iLocal_15);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_8();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_3()
{
	if (iLocal_14 != 0)
	{
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(iLocal_14) == 0)
		{
			return iLocal_13;
		}
		else
		{
			return true;
		}
	}
	return iLocal_13;
}

void func_4()
{
}

void func_5()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(2))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(2, iVar0))
		{
			case -45008988:
				func_9(iVar0);
				break;
			case -456923784:
				func_10(iVar0);
				break;
			case -843555838:
				func_11(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_6()
{
	int iVar0;
	int iVar1;

	switch (iLocal_18)
	{
		case 0:
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_16))
			{
				iLocal_18 = 7;
				return;
			}
			iLocal_85 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_16);
			if (!func_12(iLocal_85, 0))
			{
				iLocal_18 = 7;
				return;
			}
			bLocal_92 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(PERSCHAR::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(iLocal_85));
			if (!bLocal_92)
			{
				TASK::_0xE7BBC4E56B989449(iLocal_16, &uLocal_93, 1);
				if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_93[0]))
				{
					iLocal_18 = 7;
					return;
				}
			}
			iVar0 = BUILTIN::FLOOR(TASK::_GET_SCENARIO_POINT_RADIUS(iLocal_16));
			if (!func_13(iVar0, iLocal_17))
			{
				iLocal_18 = 7;
				return;
			}
			iLocal_18 = 1;
			break;
		case 1:
			if (!func_12(Global_33, 0))
			{
				iLocal_18 = 7;
				return;
			}
			if (!func_12(iLocal_85, 0))
			{
				iLocal_18 = 7;
				return;
			}
			if (!PED::IS_PED_USING_THIS_SCENARIO(iLocal_85, iLocal_16))
			{
				iLocal_18 = 7;
				return;
			}
			if (func_14(Global_33, iLocal_85, 1) > 1150885888)
			{
				return;
			}
			else if (ENTITY::GET_ENTITY_SPEED(Global_33) < 1092091904)
			{
				iLocal_18 = 2;
				return;
			}
			else
			{
				iLocal_18 = 7;
				return;
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (Local_19[iVar1 /*13*/].f_1 == 0)
				{
					iLocal_87 = iVar1;
				}
				else
				{
					if (!TASK::DOES_SCENARIO_POINT_EXIST(Local_19[iVar1 /*13*/]))
					{
						if (iVar1 > 0)
						{
							Local_19[iVar1 /*13*/].f_7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(Local_19[(iVar1 - 1) /*13*/], true), TASK::_GET_SCENARIO_POINT_HEADING(Local_19[(iVar1 - 1) /*13*/], true), Local_19[iVar1 /*13*/].f_4) };
							Local_19[iVar1 /*13*/].f_11 = (TASK::_GET_SCENARIO_POINT_HEADING(Local_19[(iVar1 - 1) /*13*/], true) + Local_19[iVar1 /*13*/].f_10);
						}
						else
						{
							Local_19[iVar1 /*13*/].f_7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_16, true), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_16, true), Local_19[iVar1 /*13*/].f_4) };
							Local_19[iVar1 /*13*/].f_11 = (TASK::_GET_SCENARIO_POINT_HEADING(iLocal_16, true) + Local_19[iVar1 /*13*/].f_10);
						}
						Local_19[iVar1 /*13*/] = TASK::CREATE_SCENARIO_POINT_HASH(Local_19[iVar1 /*13*/].f_1, Local_19[iVar1 /*13*/].f_7, Local_19[iVar1 /*13*/].f_11, 0, 0, false);
						TASK::_0xE69FDA40AAC3EFC0(Local_19[iVar1 /*13*/], 0);
						TASK::_0xA7479FB665361EDB(Local_19[iVar1 /*13*/], 0);
					}
					iVar1++;
				}
			}
			iLocal_18 = 3;
			break;
		case 3:
			if (func_15())
			{
				iLocal_18 = 7;
				return;
			}
			if (!func_16(&uLocal_88))
			{
				func_17(&uLocal_88, 0);
			}
			if (func_18(&uLocal_88, iLocal_91) && TASK::_PED_IS_IN_SCENARIO_BASE(iLocal_85))
			{
				iLocal_18 = 4;
			}
			break;
		case 4:
			if (func_15())
			{
				iLocal_18 = 7;
				return;
			}
			if (TASK::_0x79197F7D2BB5E73A(iLocal_85, Local_19[iLocal_86 /*13*/], Local_19[iLocal_86 /*13*/].f_2, Local_19[iLocal_86 /*13*/].f_3, 0, 0))
			{
				if (PED::IS_PED_USING_THIS_SCENARIO(iLocal_85, Local_19[iLocal_86 /*13*/]))
				{
					iLocal_91 = Local_19[iLocal_86 /*13*/].f_12;
					iLocal_86++;
					func_19(&uLocal_88);
					if (iLocal_86 < iLocal_87)
					{
						iLocal_18 = 3;
					}
					else
					{
						iLocal_18 = 5;
					}
				}
			}
			break;
		case 5:
			if (func_15())
			{
				iLocal_18 = 7;
				return;
			}
			if (!func_16(&uLocal_88))
			{
				func_17(&uLocal_88, 0);
			}
			if (func_18(&uLocal_88, iLocal_91) && TASK::_PED_IS_IN_SCENARIO_BASE(iLocal_85))
			{
				iLocal_18 = 6;
			}
			break;
		case 6:
			if (func_15())
			{
				iLocal_18 = 7;
				return;
			}
			if (!bLocal_92)
			{
				if (!func_20(iLocal_85, -1.25922E+36f))
				{
					TASK::CLEAR_PED_TASKS(iLocal_85, true, false);
					TASK::TASK_USE_SCENARIO_POINT(iLocal_85, uLocal_93[0], 0, 0, true, false, 0, false, -1f, false);
					PED::SET_PED_KEEP_TASK(iLocal_85, true);
				}
				if (PED::IS_PED_USING_THIS_SCENARIO(iLocal_85, uLocal_93[0]))
				{
					iLocal_18 = 7;
				}
			}
			else
			{
				iLocal_18 = 7;
			}
			break;
		case 7:
			iLocal_13 = 0;
			return;
	}
}

void func_7()
{
}

void func_8()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_9(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_21(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_22(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_23(&iVar0);
	}
}

bool func_12(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_24(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_24(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_24(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_24(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_24(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_24(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_24(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_24(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_13(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("SC_WORLD_HUMAN_STRAW_BROOM_WORKING"):
			switch (iParam0)
			{
				case 0:
					iLocal_91 = 1092616192; /* Float: 10f */
					if (PED::IS_PED_MALE(iLocal_85))
					{
						func_25(&(Local_19[0 /*13*/]), 1.03408E+08f, 4, 1092616192 /* Float: 10f */);
						func_25(&(Local_19[1 /*13*/]), 1.03408E+08f, 4, 1092616192 /* Float: 10f */);
						func_25(&(Local_19[2 /*13*/]), 1.03408E+08f, 4, 1092616192 /* Float: 10f */);
					}
					else
					{
						func_25(&(Local_19[0 /*13*/]), 1.03408E+08f, 5, 1092616192 /* Float: 10f */);
						func_25(&(Local_19[1 /*13*/]), 1.03408E+08f, 5, 1092616192 /* Float: 10f */);
						func_25(&(Local_19[2 /*13*/]), 1.03408E+08f, 5, 1092616192 /* Float: 10f */);
					}
					return true;
				case 1:
					iLocal_91 = 1092616192; /* Float: 10f */
					if (PED::IS_PED_MALE(iLocal_85))
					{
						func_25(&(Local_19[0 /*13*/]), 1.03408E+08f, 1, 1092616192 /* Float: 10f */);
						func_25(&(Local_19[1 /*13*/]), 1.03408E+08f, 1, 1092616192 /* Float: 10f */);
					}
					else
					{
						func_25(&(Local_19[0 /*13*/]), 1.03408E+08f, 0, 1092616192 /* Float: 10f */);
						func_25(&(Local_19[1 /*13*/]), 1.03408E+08f, 0, 1092616192 /* Float: 10f */);
					}
					return true;
			}
			break;
		case joaat("SC_WORLD_HUMAN_PUSH_BROOM_WORKING"):
			switch (iParam0)
			{
				case 0:
					iLocal_91 = 1092616192; /* Float: 10f */
					func_25(&(Local_19[0 /*13*/]), -1.330244E+14f, 3, 1092616192 /* Float: 10f */);
					func_25(&(Local_19[1 /*13*/]), -1.330244E+14f, 3, 1092616192 /* Float: 10f */);
					func_25(&(Local_19[2 /*13*/]), -1.330244E+14f, 3, 1092616192 /* Float: 10f */);
					func_25(&(Local_19[3 /*13*/]), -1.330244E+14f, 3, 1092616192 /* Float: 10f */);
					return true;
				case 1:
					iLocal_91 = 1092616192; /* Float: 10f */
					func_25(&(Local_19[0 /*13*/]), -1.330244E+14f, 4, 1092616192 /* Float: 10f */);
					func_25(&(Local_19[1 /*13*/]), -1.330244E+14f, 4, 1092616192 /* Float: 10f */);
					func_25(&(Local_19[2 /*13*/]), -1.330244E+14f, 4, 1092616192 /* Float: 10f */);
					return true;
			}
			break;
	}
	return false;
}

float func_14(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_26(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

bool func_15()
{
	if (!func_12(Global_33, 0))
	{
		return true;
	}
	if (!func_12(iLocal_85, 0))
	{
		return true;
	}
	if (iLocal_86 <= 0)
	{
		if (!PED::IS_PED_USING_THIS_SCENARIO(iLocal_85, iLocal_16) && !PED::IS_PED_USING_THIS_SCENARIO(iLocal_85, Local_19[iLocal_86 /*13*/]))
		{
			return true;
		}
	}
	else if (iLocal_86 >= iLocal_87)
	{
		if (!bLocal_92)
		{
			if (!PED::IS_PED_USING_THIS_SCENARIO(iLocal_85, Local_19[(iLocal_86 - 1) /*13*/]) && !PED::IS_PED_USING_THIS_SCENARIO(iLocal_85, uLocal_93[0]))
			{
				return true;
			}
		}
	}
	else if (!PED::IS_PED_USING_THIS_SCENARIO(iLocal_85, Local_19[(iLocal_86 - 1) /*13*/]) && !PED::IS_PED_USING_THIS_SCENARIO(iLocal_85, Local_19[iLocal_86 /*13*/]))
	{
		return true;
	}
	return false;
}

bool func_16(var uParam0)
{
	return func_27(*uParam0, 1);
}

void func_17(var uParam0, bool bParam1)
{
	if (bParam1 || !func_16(uParam0))
	{
		func_28(uParam0);
	}
}

bool func_18(var uParam0, float fParam1)
{
	if (!func_16(uParam0))
	{
		return false;
	}
	if (func_29(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_19(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_20(int iParam0, int iParam1)
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

void func_21(int iParam0)
{
}

void func_22(int iParam0)
{
}

void func_23(int iParam0)
{
}

bool func_24(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_25(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_1 = iParam1;
	uParam0->f_2 = func_30(iParam1, iParam2);
	uParam0->f_3 = func_31(iParam1, iParam2);
	uParam0->f_4 = { func_32(iParam1, iParam2) };
	uParam0->f_10 = func_33(iParam1, iParam2);
	uParam0->f_12 = iParam3;
}

float func_26(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_27(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_28(var uParam0)
{
	func_34(uParam0, 0f);
}

float func_29(var uParam0)
{
	if (!func_16(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_35(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_36() - uParam0->f_1);
}

char* func_30(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"):
			if (PED::IS_PED_MALE(iLocal_85))
			{
				switch (iParam1)
				{
					case 0:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_LTURN_90";
					case 1:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_RTURN_90";
					case 4:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_RIGHT";
					case 2:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_BACKRIGHT";
					case 3:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_FRONTRIGHT";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_LTURN_90";
					case 1:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_RTURN_90";
					case 5:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_LEFT";
					case 6:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_BACKLEFT";
					case 7:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_FRONTLEFT";
					default:
						break;
				}
			}
			break;
		case joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"):
			switch (iParam1)
			{
				case 0:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_LTURN_90";
				case 1:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_RTURN_90";
				case 4:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_RIGHT";
				case 2:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_BACKRIGHT";
				case 3:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_FRONTRIGHT";
				default:
					break;
			}
			break;
	}
	return "";
}

char* func_31(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"):
		case joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"):
			switch (iParam1)
			{
				case 0:
					return "BASE_TRANS_LTURN_90";
				case 1:
					return "BASE_TRANS_RTURN_90";
				case 4:
					return "BASE_TRANS_RIGHT";
				case 2:
					return "BASE_TRANS_BACKRIGHT";
				case 3:
					return "BASE_TRANS_FRONTRIGHT";
				case 5:
					return "BASE_TRANS_LEFT";
				case 6:
					return "BASE_TRANS_BACKLEFT";
				case 7:
					return "BASE_TRANS_FRONTLEFT";
				default:
					break;
			}
			break;
	}
	return "";
}

Vector3 func_32(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"):
		case joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"):
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 4:
					return 1057606001, 0f, 0f;
				case 2:
					return 1052957336, -1094525506, 0f;
				case 3:
					return 1052958142, 1052957336, 0f;
				case 5:
					return -1089877647, 0f, 0f;
				case 6:
					return -1094526312, -1094525506, 0f;
				case 7:
					return -1094525506, 1052957336, 0f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_33(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WORLD_HUMAN_PUSH_BROOM_WORKING"):
		case joaat("WORLD_HUMAN_STRAW_BROOM_WORKING"):
			switch (iParam1)
			{
				case 0:
					return 1119092736 /* Float: 90f */;
				case 1:
					return -1028390912 /* Float: -90f */;
				case 4:
					return 0f;
				case 2:
					return 0f;
				case 3:
					return 0f;
				case 5:
					return 0f;
				case 6:
					return 0f;
				case 7:
					return 0f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

void func_34(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_36() - fParam1);
	func_37(uParam0, 1);
	func_38(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_35(var uParam0)
{
	return func_27(*uParam0, 2);
}

float func_36()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

void func_37(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_38(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

