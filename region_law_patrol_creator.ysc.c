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
	int iLocal_16 = 0;
	struct<4> Local_17 = { 0, 0, 0, 0 } ;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	bool bLocal_28 = false;
	bool bLocal_29 = false;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35[5] = { 0, 0, 0, 0, 0 };
	int iLocal_41[5] = { 0, 0, 0, 0, 0 };
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	iLocal_16 = 1;
	uScriptParam_0 = uScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (((((!func_2(PLAYER::PLAYER_ID(), 0, 0, 1) && func_3()) && iLocal_16 < 7) && !func_4()) && !func_5()) && !(func_6() == 8 && (func_7(0, 0, 1) || func_8() == 64)))
	{
		func_9();
		BUILTIN::WAIT(0);
	}
	func_1();
	if (func_10() == 5)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(25000, 35000);
	}
	else if (func_10() >= 3)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(35000, 55000);
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(45000, 55000);
	}
	Global_1939089.f_2 = iVar0;
	Global_1939089.f_1 = MISC::GET_GAME_TIMER();
}

void func_1()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_35)
	{
		if (func_11(iLocal_35[iVar0], 0))
		{
			func_12(&(iLocal_35[iVar0]), 1, 1, 1);
			func_12(&(iLocal_41[iVar0]), 1, 1, 1);
		}
		iVar0++;
	}
	func_13(iLocal_48);
}

int func_2(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_14(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_14 != -1)
	{
		if (iParam0 == Global_1295619.f_5)
		{
			if (!Global_1295619.f_6)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::IS_LAW_INCIDENT_ACTIVE(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 9.534398E+10f)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
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
				return 1;
			}
		}
	}
	return 0;
}

bool func_3()
{
	if (func_16(func_15(), 1))
	{
		return true;
	}
	if (func_17(func_6(), 1))
	{
		return true;
	}
	if (func_18(func_8()))
	{
		return true;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1939089.f_148))
	{
		if (func_19())
		{
			return true;
		}
	}
	return false;
}

bool func_4()
{
	return func_20(1, 255);
}

bool func_5()
{
	return Global_1893611 & 2 != 0;
}

int func_6()
{
	return Global_1896646.f_41;
}

bool func_7(int iParam0, bool bParam1, bool bParam2)
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
		if (func_21())
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
	if (iParam0 == 0 && func_23(func_22(0)))
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
	switch (func_24(func_22(0)))
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

int func_8()
{
	return Global_1893611.f_2;
}

void func_9()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	vector3 vVar6;
	int iVar9;

	if (func_25(&uLocal_32) > 1097859072 && iLocal_16 <= 4)
	{
		iLocal_16 = 6;
	}
	func_26();
	switch (iLocal_16)
	{
		case 1:
			func_27(&uLocal_32);
			PED::_RESERVE_AMBIENT_PEDS(10);
			iLocal_26 = (BUILTIN::CEIL((BUILTIN::TO_FLOAT(func_10()) / 2f)) + MISC::GET_RANDOM_INT_IN_RANGE(0, 2));
			if (iLocal_26 > 5)
			{
				iLocal_26 = 5;
			}
			else if (iLocal_26 <= 0)
			{
				iLocal_26 = 1;
			}
			iVar0 = func_15();
			switch (iVar0)
			{
				case 0:
					fLocal_30 = 3.143621E+27f;
					break;
				case 1:
					fLocal_30 = 3.143621E+27f;
					break;
				case 2:
					fLocal_30 = 3.143621E+27f;
					break;
				case 3:
					fLocal_30 = 3.143621E+27f;
					break;
				case 5:
					fLocal_30 = -1.142578E+25f;
					break;
				default:
					fLocal_30 = 3.143621E+27f;
					break;
			}
			fLocal_31 = -38.67923f;
			iLocal_16 = 2;
			break;
		case 2:
			STREAMING::REQUEST_MODEL(fLocal_30, false);
			STREAMING::REQUEST_MODEL(fLocal_31, false);
			if ((STREAMING::HAS_MODEL_LOADED(fLocal_30) && STREAMING::HAS_MODEL_LOADED(fLocal_31)) && PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
			{
				iLocal_16 = 3;
			}
			break;
		case 3:
			if (func_19())
			{
				iVar2 = 1;
			}
			else
			{
				iVar2 = 14;
			}
			if (func_28(Global_34, &Local_17, &bVar1, iVar2, 1, 180f, 20f, 1117782016 /* Float: 80f */, 1123024896 /* Float: 120f */, 0))
			{
				if (!func_29(Local_17.f_3, 0, 0, 0) && WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(Local_17.f_3, 0, &(Local_17.f_3.f_2)) != 1)
				{
					iLocal_16 = 4;
				}
			}
			else if (bVar1)
			{
				func_30(&Local_17, 1, 0);
			}
			break;
		case 4:
			if (!bLocal_28 && !bLocal_29)
			{
				func_31();
			}
			else if (bLocal_28 && (!bLocal_29 && func_6() != 8))
			{
				func_32();
			}
			else
			{
				iVar4 = 0;
				while (iVar4 < iLocal_35)
				{
					func_33(iLocal_35[iVar4], iLocal_41[iVar4], 0, -1, 1);
					bVar5 = false;
					if (iVar4 == 0)
					{
						if (!PED::DOES_GROUP_EXIST(iLocal_47))
						{
							iLocal_47 = PED::CREATE_GROUP(0);
							PED::SET_GROUP_FORMATION(iLocal_47, 9);
						}
						bVar5 = true;
					}
					if (func_11(iLocal_35[iVar4], 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar3);
						if (func_19())
						{
							iVar0 = func_15();
							if (func_34(iVar0))
							{
								vVar6 = { func_35(Global_38.f_198[iVar0 /*12*/].f_1, (Global_38.f_198[iVar0 /*12*/].f_4 - 3f), 1092616192 /* Float: 10f */) };
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar6, 1.75f, -1, 0.25f, 7602180, 40000f);
							}
							TASK::TASK_STAND_STILL(0, 3000);
						}
						TASK::CLOSE_SEQUENCE_TASK(iVar3);
						TASK::TASK_POLICE(iLocal_35[iVar4], true);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_35[iVar4], iVar3);
						func_36(&(iLocal_35[iVar4]), &iLocal_47, bVar5, 1, 1, 1, 0);
					}
					iVar4++;
				}
				iLocal_16 = 5;
			}
			break;
		case 5:
			iVar9 = 0;
			while (iVar9 < iLocal_35)
			{
				if (func_11(iLocal_35[iVar9], 0) && func_11(Global_33, 0))
				{
					if (func_37(Global_33, iLocal_35[iVar9], 1, 1) > 1130102784)
					{
						iLocal_16 = 6;
						return;
					}
				}
				iVar9++;
			}
			break;
		case 6:
			func_1();
			iLocal_16 = 7;
			break;
	}
}

int func_10()
{
	return func_39(func_38(func_6()));
}

bool func_11(int iParam0, int iParam1)
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
	if (func_40(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_40(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_40(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_40(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_40(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_40(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_40(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_40(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_12(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

void func_13(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

int func_14(bool bParam0, bool bParam1, bool bParam2)
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

int func_15()
{
	return Global_1939089.f_4;
}

bool func_16(int iParam0, bool bParam1)
{
	if (!func_34(iParam0))
	{
		return false;
	}
	if (func_41(iParam0, 1) || (bParam1 && func_41(iParam0, 2)))
	{
		return true;
	}
	return false;
}

bool func_17(int iParam0, bool bParam1)
{
	if (!func_42(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_43(iParam0, 8))
		{
			return false;
		}
	}
	if (func_43(iParam0, 1))
	{
		return true;
	}
	return false;
}

bool func_18(int iParam0)
{
	if (!func_44(iParam0))
	{
		return false;
	}
	return func_45(iParam0, 9.403955E-38f);
}

bool func_19()
{
	int iVar0;

	iVar0 = func_15();
	if (!func_34(iVar0))
	{
		return false;
	}
	if (func_46(Global_38.f_198[iVar0 /*12*/].f_1) || Global_38.f_198[iVar0 /*12*/].f_4 < 1f)
	{
		return false;
	}
	if (func_47(Global_33, Global_38.f_198[iVar0 /*12*/].f_1, (Global_38.f_198[iVar0 /*12*/].f_4 + 1092616192), 1, 1))
	{
		return true;
	}
	return false;
}

bool func_20(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_48(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_49())
	{
		return func_48(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_48(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
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
	if (!func_23(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_22(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

bool func_23(struct<2> Param0)
{
	if (!func_50(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_51(Param0))
	{
		return false;
	}
	return true;
}

int func_24(var uParam0, var uParam1)
{
	return uParam0;
}

float func_25(var uParam0)
{
	if (!func_52(uParam0))
	{
		return 0f;
	}
	if (func_53(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_54() - uParam0->f_1);
}

void func_26()
{
	vector3 vVar0;
	struct<13> Var3;

	if (func_6() == 8)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(iLocal_48))
		{
			iLocal_48 = VOLUME::CREATE_VOLUME_AGGREGATE();
			VOLUME::_ADD_SPHERE_VOLUME_TO_VOLUME_AGGREGATE(iLocal_48, 1468.909f, -7225.962f, 86.862f, 0f, 0f, 18f, 748f, 853f, 473f);
		}
		else if (func_11(Global_33, 0))
		{
			if (!func_55(Global_33, iLocal_48, 1, 0))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_49) > 5000)
				{
					iLocal_49 = MISC::GET_GAME_TIMER();
					vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
					Var3.f_8 = -1f;
					Var3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vVar0.z, 0f, -1f, 0f) };
					Var3.f_3 = { PED::GET_PED_BONE_COORDS(Global_33, 21030, 0f, 0f, 0f) };
					Var3.f_7 = 1148846080; /* Float: 1000f */
					Var3.f_12 = 1;
					Var3.f_6 = 1.273709E+12f;
					MISC::FIRE_SINGLE_BULLET(&Var3);
				}
			}
		}
	}
}

void func_27(var uParam0)
{
	func_56(uParam0, 0f);
}

bool func_28(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11)
{
	int iVar0;

	switch (*iParam3)
	{
		case 0:
			if (iParam3->f_2 > 4)
			{
				*bParam4 = 1;
				return false;
			}
			iParam3->f_1 = TASK::_0x74F0209674864CBD();
			func_57(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, fParam7, iParam8, iParam9, iParam10, fParam11);
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
			}
			else
			{
				func_58(&(iParam3->f_1), iParam5, vParam0);
				if (!func_46(iParam3->f_6))
				{
					TASK::_0xCE4E669400E5F8AA(iParam3->f_1, func_59(iParam3->f_6));
				}
				TASK::_0x2B8AF29A78024BD3(iParam3->f_1);
			}
			*iParam3 = 3;
			break;
		case 3:
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = TASK::_0x0365000D8BF86531(&(iParam3->f_1));
			}
			switch (iVar0)
			{
				case 4:
					if (bParam6 && iParam3->f_2 < 4)
					{
						iParam3->f_2++;
						*iParam3 = 0;
					}
					else
					{
						*bParam4 = 1;
					}
					break;
				case 3:
					iParam3->f_3 = { TASK::_0x865732725536EE39(&(iParam3->f_1)) };
					*iParam3 = 4;
					if (!bParam6)
					{
						return true;
					}
					break;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_29(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_46(vParam0))
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

void func_30(var uParam0, bool bParam1, bool bParam2)
{
	uParam0->f_2 = 0;
	if (!bParam2)
	{
		uParam0->f_6 = { 0f, 0f, 0f };
	}
	if (bParam1 && TASK::_0x1AC5A8AB50CFAA33(uParam0->f_1))
	{
		TASK::_0x0365000D8BF86531(&(uParam0->f_1));
	}
	*uParam0 = 0;
}

void func_31()
{
	iLocal_35[iLocal_27] = func_60(fLocal_30, Local_17.f_3, 0, 1, 1, 0, 1, 1, 1, 0, 0);
	func_61(iLocal_35[iLocal_27]);
	iLocal_27++;
	if (iLocal_27 >= iLocal_26)
	{
		iLocal_27 = 0;
		bLocal_28 = true;
	}
}

void func_32()
{
	iLocal_41[iLocal_27] = func_60(fLocal_31, Local_17.f_3, 0, 1, 1, 0, 1, 1, 1, 0, 0);
	iLocal_27++;
	if (iLocal_27 >= iLocal_26)
	{
		bLocal_29 = true;
	}
}

int func_33(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iParam0) != iParam1)
	{
		PED::SET_PED_ONTO_MOUNT(iParam0, iParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, bParam2);
	}
	return 1;
}

bool func_34(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

Vector3 func_35(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_62(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

void func_36(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!PED::DOES_GROUP_EXIST(*iParam1) || PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(*uParam0, 279, bParam3);
	if (bParam2)
	{
		PED::SET_PED_AS_GROUP_LEADER(*uParam0, *iParam1, false);
	}
	else
	{
		PED::SET_PED_AS_GROUP_MEMBER(*uParam0, *iParam1);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 280, bParam4);
		PED::_0xBAD2A311667A50D7(*uParam0, bParam5);
	}
	PED::_0x97C475212B327666(*iParam1, bParam6);
}

float func_37(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

int func_38(int iParam0)
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

int func_39(int iParam0)
{
	if (!func_34(iParam0))
	{
		return 0;
	}
	if (func_41(iParam0, 2))
	{
		return 5;
	}
	if (func_63(iParam0) > 0 && PLAYER::GET_WANTED_LEVEL_THRESHOLD(5) > 0)
	{
		return func_64(func_63(iParam0));
	}
	return 0;
}

bool func_40(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_41(int iParam0, int iParam1)
{
	if (!func_34(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_14 == -1)
	{
		return (Global_38.f_198[iParam0 /*12*/].f_5 && iParam1) != 0;
	}
	return (Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1) != 0;
}

bool func_42(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_43(int iParam0, int iParam1)
{
	if (!func_42(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_14 == -1)
	{
		return (Global_38.f_271[iParam0] && iParam1) != 0;
	}
	return (Global_1072759.f_21335[iParam0] && iParam1) != 0;
}

bool func_44(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_45(int iParam0, float fParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		return (Global_8130[iParam0 /*11*/] && fParam1) != 0;
	}
	return (Global_1072759.f_19611[iParam0 /*11*/] && fParam1) != 0;
}

bool func_46(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_47(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_65(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_48(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_49()
{
	return Global_1102813.f_3672;
}

bool func_50(int iParam0)
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

int func_51(int iParam0)
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

bool func_52(var uParam0)
{
	return func_66(*uParam0, 1);
}

bool func_53(var uParam0)
{
	return func_66(*uParam0, 2);
}

float func_54()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

bool func_55(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

void func_56(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_54() - fParam1);
	func_67(uParam0, 1);
	func_68(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_57(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, float fParam8, float fParam9, float fParam10)
{
	int iVar0;
	int iVar1;

	if (!func_46(vParam2))
	{
		TASK::_0x2064B33F6E6B92D4(*uParam0, vParam2);
	}
	TASK::_0x9B6A58FDB0024F12(*uParam0, iParam7);
	switch (iParam5)
	{
		case 27:
			TASK::_0xB8E3486D107F4194(*uParam0, 1119092736 /* Float: 90f */);
			TASK::_0x827A58CED9D4D5B4(*uParam0, 1127481344 /* Float: 180f */);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
			break;
		case 48:
			TASK::_0x827A58CED9D4D5B4(*uParam0, iParam6);
			break;
		case 42:
			TASK::_0xB8E3486D107F4194(*uParam0, fParam10);
			break;
		default:
			TASK::_0x827A58CED9D4D5B4(*uParam0, iParam6);
			if (fParam10 != 0f)
			{
				TASK::_0xB8E3486D107F4194(*uParam0, fParam10);
			}
			break;
	}
	switch (iParam5)
	{
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 14:
		case 15:
		case 16:
		case 18:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
			TASK::_0xE9225354FB7437A7(*uParam0, 1);
			break;
	}
	switch (iParam5)
	{
		case 12:
		case 13:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 8192);
			break;
	}
	switch (iParam5)
	{
		case 2:
		case 3:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 5);
			break;
	}
	switch (iParam5)
	{
		case 35:
		case 43:
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			break;
	}
	if (fParam8 == -1138501878)
	{
		switch (iParam5)
		{
			case 12:
			case 13:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, ((1117782016 - 1109393408) / 2f));
				TASK::_0xB79817DB31FF72B9(*uParam0, 0f);
				break;
			case 4:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 2.5f);
				break;
			case 5:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
			case 6:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 7:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 8:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 9:
				TASK::_0x954451EA2D2120FB(*uParam0, 12f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 18f);
				break;
			case 10:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 0:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 55f);
				break;
			case 11:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				break;
			case 15:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 40f);
				break;
			case 14:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 16:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 30:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
			case 2:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
			case 18:
				TASK::_0x954451EA2D2120FB(*uParam0, 1f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 20f);
				break;
			case 20:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 21:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 22:
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 23:
			case 24:
			case 25:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 26:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 27:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
			case 28:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 50f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 45f);
				break;
			case 29:
				TASK::_0x954451EA2D2120FB(*uParam0, 15f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 25f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 20f);
				break;
			case 31:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 140f);
				break;
			case 32:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 125f);
				break;
			case 33:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 34:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 35:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 36:
				TASK::_0x2EB977293923C723(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_69(1092616192 /* Float: 10f */, 1109393408 /* Float: 40f */, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 1106247680 /* Float: 30f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_69(1109393408 /* Float: 40f */, 1117782016 /* Float: 80f */, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(1112014848 /* Float: 50f */, 1119092736 /* Float: 90f */, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1097859072 /* Float: 15f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 1106247680 /* Float: 30f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_69(1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(1112014848 /* Float: 50f */, 1117782016 /* Float: 80f */, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1097859072 /* Float: 15f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_69(0f, 1092616192 /* Float: 10f */, 1f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(5f, 1097859072 /* Float: 15f */, 1f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 1109393408 /* Float: 40f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_69(1114636288 /* Float: 60f */, 1123024896 /* Float: 120f */, 1092616192 /* Float: 10f */, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(1120403456 /* Float: 100f */, 1124204544 /* Float: 130f */, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 1101004800 /* Float: 20f */);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1101004800 /* Float: 20f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_69(1092616192 /* Float: 10f */, 1108082688 /* Float: 35f */, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(1103626240 /* Float: 25f */, 1112014848 /* Float: 50f */, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1101004800 /* Float: 20f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 1114636288 /* Float: 60f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_69(1114636288 /* Float: 60f */, 1117782016 /* Float: 80f */, 1092616192 /* Float: 10f */, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(1117126656 /* Float: 75f */, 1119748096 /* Float: 95f */, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x450080DDEDB91258(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 50:
				TASK::_0x2EB977293923C723(*uParam0, 1106247680 /* Float: 30f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_69(1106247680 /* Float: 30f */, 1116471296 /* Float: 70f */, 1092616192 /* Float: 10f */, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(1115815936 /* Float: 65f */, 1119748096 /* Float: 95f */, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x450080DDEDB91258(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 51:
				TASK::_0x2EB977293923C723(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_69(1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(1109393408 /* Float: 40f */, 1112014848 /* Float: 50f */, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1090519040 /* Float: 8f */);
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 52:
				TASK::_0x2EB977293923C723(*uParam0, 0f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(1109393408 /* Float: 40f */, 1120403456 /* Float: 100f */, 1092616192 /* Float: 10f */, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 42:
				TASK::_0x2EB977293923C723(*uParam0, 1112014848 /* Float: 50f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_69(1112014848 /* Float: 50f */, 1116471296 /* Float: 70f */, 1092616192 /* Float: 10f */, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(1115815936 /* Float: 65f */, 1118437376 /* Float: 85f */, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x450080DDEDB91258(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 49:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x450080DDEDB91258(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x2EB977293923C723(*uParam0, 1112014848 /* Float: 50f */);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(1092616192 /* Float: 10f */, 1112014848 /* Float: 50f */, 1092616192 /* Float: 10f */, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_69(1119748096 /* Float: 95f */, 1119092736 /* Float: 90f */, 1117782016 /* Float: 80f */, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_69(1119748096 /* Float: 95f */, 1119092736 /* Float: 90f */, 1117782016 /* Float: 80f */, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(1123680256 /* Float: 125f */, 1122369536 /* Float: 115f */, 1120403456 /* Float: 100f */, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 46:
				iVar0 = func_70(vParam2, 1);
				iVar1 = func_71(vParam2);
				if ((((iVar1 == 15 || iVar1 == 14) || iVar1 == 13) || (iVar1 == 9 && iVar0 == -1)) || (iVar1 == 4 && iVar0 == -1))
				{
					TASK::_0x2EB977293923C723(*uParam0, func_69(1120403456 /* Float: 100f */, 1117782016 /* Float: 80f */, -1063256064 /* Float: -5f */, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, func_69(1120403456 /* Float: 100f */, 1117782016 /* Float: 80f */, -1063256064 /* Float: -5f */, iParam1));
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(1121714176 /* Float: 110f */, 1126170624 /* Float: 160f */, 1095237632 /* Float: 12.5f */, iParam1));
				}
				else
				{
					TASK::_0x2EB977293923C723(*uParam0, func_69(1120403456 /* Float: 100f */, 1116471296 /* Float: 70f */, -1058013184 /* Float: -7.5f */, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, 70f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(1117782016 /* Float: 80f */, 1125515264 /* Float: 150f */, 1099694080 /* Float: 17.5f */, iParam1));
				}
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x450080DDEDB91258(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x19BC99C678FBA139(*uParam0, 2, 0);
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
			case 47:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x450080DDEDB91258(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x2EB977293923C723(*uParam0, 1112014848 /* Float: 50f */);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(1112014848 /* Float: 50f */, 1119092736 /* Float: 90f */, 1092616192 /* Float: 10f */, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
			case 48:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x450080DDEDB91258(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x2EB977293923C723(*uParam0, func_69(1120403456 /* Float: 100f */, 1116471296 /* Float: 70f */, -1058013184 /* Float: -7.5f */, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_69(1125515264 /* Float: 150f */, 1128136704 /* Float: 190f */, 1092616192 /* Float: 10f */, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
			default:
				if (iParam1 == 0)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 1f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 5f);
				}
				else if (iParam1 == 1)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 5f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				}
				else if (iParam1 == 2)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 15f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 35f);
				}
				else
				{
					iParam1 = 3;
					TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
					TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
					TASK::_0x954451EA2D2120FB(*uParam0, 35f);
					if (iParam5 != 19)
					{
						TASK::_0x0F4F6C4CE471259D(*uParam0, 160f);
					}
					else
					{
						TASK::_0x0F4F6C4CE471259D(*uParam0, 65f);
					}
				}
				break;
		}
	}
	else
	{
		TASK::_0x954451EA2D2120FB(*uParam0, fParam8);
		TASK::_0x0F4F6C4CE471259D(*uParam0, fParam9);
	}
}

void func_58(var uParam0, int iParam1, vector3 vParam2)
{
	switch (iParam1)
	{
		case 0:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 1:
		case 19:
		case 20:
		case 45:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 2:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
		case 3:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
		case 4:
		case 5:
		case 6:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 7:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 8:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 9:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 10:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 12:
		case 13:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			TASK::_0xBC3F847AE2C3DC65(*uParam0, 1103626240 /* Float: 25f */);
			TASK::_0x450080DDEDB91258(*uParam0, 1103626240 /* Float: 25f */);
			break;
		case 11:
		case 30:
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 15:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 14:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 53:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 9, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			break;
		case 16:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 5, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 17:
			TASK::_0x2EB977293923C723(*uParam0, 1109393408 /* Float: 40f */);
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 18:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 21:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 22:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 23:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 24:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 25:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 26:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 27:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 74, 0);
			break;
		case 28:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 29:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 12, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 31:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
		case 32:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
		case 33:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 3, 0);
			break;
		case 34:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 35:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			break;
		case 41:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			break;
		case 42:
		case 44:
		case 49:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 50:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 51:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			break;
		case 46:
		case 47:
		case 48:
			if (func_70(vParam2, 1) == 5)
			{
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 53, 1, 0);
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 74, 1, 0);
			}
			else
			{
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			}
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 43:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 5, 0);
			break;
		case 52:
			break;
	}
}

Vector3 func_59(vector3 vParam0)
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

int func_60(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_72(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_61(int iParam0)
{
	LAW::_SET_PED_LAW_BEHAVIOUR(iParam0, 2);
	LAW::_SET_PED_LAW_BEHAVIOUR(iParam0, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 188, true);
	PED::_SET_PED_COMBAT_ATTRIBUTE_HASH(iParam0, 3.191266E-28f);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 39, true);
	TASK::_SET_PED_PATH_MAY_ENTER_DEEP_WATER(iParam0, false);
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iParam0, false);
	WEAPON::GIVE_WEAPON_TO_PED(iParam0, -0.2143914f, 100, true, false, 0, false, 0.5f, 1f, 6.028273E-12f, false, 0f, false);
	WEAPON::GIVE_WEAPON_TO_PED(iParam0, -2.239279E-05f, 100, false, true, 0, false, 0.5f, 1f, 6.028273E-12f, false, 0f, false);
}

Vector3 func_62(vector3 vParam0, float fParam3)
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

int func_63(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	var uVar3;

	if (!func_34(iParam0))
	{
		return -1;
	}
	if (Global_1572887.f_14 == -1)
	{
		return Global_38.f_198[iParam0 /*12*/];
	}
	iVar0 = 0;
	Var1 = { func_73(PLAYER::PLAYER_ID()) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&Var1, &uVar3);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1072759.f_21262[iVar0 /*12*/] = uVar3;
		iVar0++;
	}
	return Global_1072759.f_21262[iParam0 /*12*/];
}

int func_64(int iParam0)
{
	int iVar0;

	iVar0 = 5;
	while (iVar0 >= 1)
	{
		if (iParam0 >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(iVar0))
		{
			return iVar0;
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

float func_65(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_66(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_67(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_68(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_69(int iParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = iParam0;
	fVar0 = (fVar0 + (fParam2 * IntToFloat(iParam3)));
	if (fVar0 > fParam1)
	{
		fVar0 = fParam1;
	}
	return fVar0;
}

int func_70(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_8();
	if (func_44(iVar0))
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[iVar0 /*36*/].f_4) && VOLUME::IS_POINT_IN_VOLUME(Global_1887363[iVar0 /*36*/].f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_74(vParam0, iParam3);
}

int func_71(vector3 vParam0)
{
	return func_75(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

void func_72(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(iParam0, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_76(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_EQUIP_META_PED_OUTFIT_PRESET(iParam0, 0, false);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_77(iParam0, 0);
			bVar0 = true;
		}
		func_78(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

struct<2> func_73(int iParam0)
{
	struct<2> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

int func_74(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_79(vParam0);
	iVar1 = -1;
	if (Global_1893594[iVar0] > 0)
	{
		iVar2 = (Global_1893594[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = Global_1892777[iVar0 /*51*/][iVar2];
			if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[iVar4 /*36*/].f_4))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1887363[iVar4 /*36*/].f_4, vParam0))
				{
					switch (Global_1887363[iVar4 /*36*/].f_21)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BAYOUNWA"):
			return 0;
		case joaat("BIGVALLEY"):
			return 1;
		case joaat("BLUEWATERMARSH"):
			return 2;
		case joaat("CUMBERLAND"):
			return 3;
		case joaat("GREATPLAINS"):
			return 4;
		case joaat("GRIZZLIESEAST"):
			return 6;
		case joaat("GRIZZLIESWEST"):
			return 7;
		case joaat("GUARMAD"):
			return 8;
		case joaat("HEARTLANDS"):
			return 9;
		case joaat("ROANOKE"):
			return 10;
		case joaat("SCARLETTMEADOWS"):
			return 11;
		case joaat("TALLTREES"):
			return 12;
		case joaat("GAPTOOTHRIDGE"):
			return 13;
		case joaat("RIOBRAVO"):
			return 14;
		case joaat("CHOLLASPRINGS"):
			return 15;
		case joaat("HENNIGANSSTEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

void func_76(int iParam0, bool bParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, -8.569155E-24f, 0, true);
	}
	else
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam0, -8.569155E-24f, 1);
	}
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_77(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_EQUIP_META_PED_OUTFIT(iParam0, 1.977859E+07f);
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_78(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_CHAR_EXPRESSION(iParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_CHAR_EXPRESSION(iParam0, 41611, 1f);
	}
}

int func_79(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_80(vParam0, 0f, 0f, 0, 2);
	return func_80(vParam0, Global_1892764[iVar0 /*3*/].f_1, Global_1892764[iVar0 /*3*/].f_2, Global_1892764[iVar0 /*3*/], 4);
}

int func_80(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

