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
	var uLocal_17 = 3;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	float fLocal_47 = 0f;
	vector3 vLocal_48 = { 0f, 0f, 0f };
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	fLocal_47 = 3.143621E+27f;
	vLocal_48 = { -1016663284, 1145525812, 1124494082 };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2();
	while (func_3(uScriptParam_0) && func_4())
	{
		func_5();
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	if (func_6(iLocal_45, 0))
	{
		func_7(&iLocal_45);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_46))
	{
		VOLUME::DELETE_VOLUME(iLocal_46);
	}
	LAW::_0x7EF2A2FE38D74456(func_8(7), false);
}

void func_2()
{
	iLocal_46 = VOLUME::CREATE_VOLUME_BOX(-230.0599f, 797.554f, 134.0912f, 0f, 0f, 29.97786f, 3.336159f, 3.371833f, 4.034389f);
	iLocal_44 = 1;
	PED::_RESERVE_AMBIENT_PEDS(1);
}

int func_3(var uParam0)
{
	return 0;
}

int func_4()
{
	float fVar0;

	if (iLocal_44 >= 7)
	{
		return 0;
	}
	fVar0 = func_9(Global_33, vLocal_48, 1);
	if (fVar0 > 1120403456)
	{
		return 0;
	}
	if (func_10(&uLocal_51) > 1123024896)
	{
		return 0;
	}
	return 1;
}

void func_5()
{
	switch (iLocal_44)
	{
		case 1:
			iLocal_44 = 2;
			break;
		case 2:
			STREAMING::REQUEST_MODEL(fLocal_47, false);
			if (STREAMING::HAS_MODEL_LOADED(fLocal_47) && PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
			{
				iLocal_44 = 4;
			}
			break;
		case 4:
			func_11();
			func_12(&uLocal_51);
			iLocal_44 = 5;
			break;
		case 5:
			func_13(iLocal_45, -8.087782E+23f);
			if (!func_6(iLocal_45, 0))
			{
				iLocal_44 = 6;
			}
			break;
		case 6:
			iLocal_44 = 7;
			break;
	}
}

bool func_6(int iParam0, int iParam1)
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
	if (func_14(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_14(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_14(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_14(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_14(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_14(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_14(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_14(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_7(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false);
	}
	PED::DELETE_PED(iParam0);
}

int func_8(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 1;
			break;
		case 6:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 32;
			break;
		case 7:
			iVar0 = 16;
			break;
		case 8:
			iVar0 = 8;
			break;
	}
	return iVar0;
}

float func_9(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_10(var uParam0)
{
	if (!func_15(uParam0))
	{
		return 0f;
	}
	if (func_16(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_17() - uParam0->f_1);
}

void func_11()
{
	int iVar0;

	iLocal_45 = func_18(fLocal_47, vLocal_48, 1120625387, 1, 1, 0, 1, 1, 1, 0, 0);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_45, 1.273709E+12f, 999, true, true, 0, false, 0.5f, 1f, 6.028273E-12f, false, 0f, false);
	PED::SET_PED_DEFENSIVE_AREA_VOLUME(iLocal_45, iLocal_46, false, false, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_45, 263, true);
	PED::SET_PED_CAN_RAGDOLL(iLocal_45, false);
	iVar0 = 160;
	ENTITY::SET_ENTITY_MAX_HEALTH(iLocal_45, iVar0);
	ENTITY::SET_ENTITY_HEALTH(iLocal_45, iVar0, 0);
	func_19(iLocal_45);
}

void func_12(var uParam0)
{
	func_20(uParam0, 0f);
}

void func_13(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		CAM::STOP_GAMEPLAY_HINT(false);
		return;
	}
	else
	{
		if (PAD::IS_CONTROL_PRESSED(2, iParam1))
		{
			CAM::SET_GAMEPLAY_ENTITY_HINT(iParam0, 0f, 0f, 0f, true, -1, 2000, 2000, 0);
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2, iParam1))
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
}

bool func_14(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_15(var uParam0)
{
	return func_21(*uParam0, 1);
}

bool func_16(var uParam0)
{
	return func_21(*uParam0, 2);
}

float func_17()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

int func_18(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_22(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_19(int iParam0)
{
	if (!func_6(iParam0, 0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
	}
	func_23(iParam0);
}

void func_20(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_17() - fParam1);
	func_24(uParam0, 1);
	func_25(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_21(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_22(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
			func_26(iParam0, 0, 1);
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
			func_27(iParam0, 0);
			bVar0 = true;
		}
		func_28(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_23(int iParam0)
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

void func_24(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_25(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_26(int iParam0, bool bParam1, bool bParam2)
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

void func_27(int iParam0, bool bParam1)
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

void func_28(int iParam0, int iParam1)
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

