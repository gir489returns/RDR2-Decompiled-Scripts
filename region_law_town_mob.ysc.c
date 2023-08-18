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
	float fLocal_46 = 0f;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	vector3 vLocal_63 = { 0f, 0f, 0f };
	vector3 vLocal_66 = { 0f, 0f, 0f };
	int iLocal_69 = 0;
	bool bLocal_70 = false;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	bLocal_70 = true;
	iLocal_44 = iScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2();
	while (func_3(iLocal_44) && iLocal_45 != 7)
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	int iVar0;

	LAW::_0x29CD4896ECB66C12();
	PLAYER::SET_POLICE_RADAR_BLIPS(false);
	MISC::ENABLE_DISPATCH_SERVICE(8, false);
	VOLUME::DELETE_VOLUME(iLocal_59);
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		if (func_5(iLocal_49[iVar0], 0))
		{
			func_6(&(iLocal_49[iVar0]), 1, 0, 1);
		}
		iVar0++;
	}
	if (PED::DOES_GROUP_EXIST(iLocal_48))
	{
		PED::REMOVE_GROUP(iLocal_48);
	}
}

void func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iLocal_45 = 1;
	PED::_RESERVE_AMBIENT_PEDS(9);
	switch (iLocal_44)
	{
		case 81:
			vLocal_63 = { -1013648658, 1145298556, 1122677634 };
			iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-266.4598f, 686.257f, 121.6327f, 0f, 0f, 29.92756f, 64.32985f, 90.86015f, 10f, "Main Town");
			iVar1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-301.8687f, 775.7222f, 117.88f, 0f, 0f, 111.0193f, 113.049f, 150.2262f, 41.61763f, "Stockyard");
			iLocal_59 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volTownMob Valentine Agg");
			VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_59, iVar0);
			VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_59, iVar1);
			break;
		case 26:
			vLocal_63 = { -991956814, -1010457703, 1126120659 };
			iLocal_59 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1789.582f, -395.4769f, 153.0447f, 0f, 0f, -30.95195f, 70.53338f, 56.72839f, 31.99624f, "m_volTownMob Strawberry");
			break;
		case 111:
			vLocal_63 = { 1151696732, -995938304, 1117208576 };
			iLocal_59 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1334.686f, -1305.615f, 86f, 0f, 0f, 65.0729f, 82.5293f, 147.408f, 20f, "m_volTownMob Rhodes Agg");
			break;
		default:
			iLocal_59 = func_7(iLocal_44);
			vLocal_63 = { func_8(iLocal_44, 1) };
			break;
	}
	iVar2 = 0;
	func_9(&iVar2, 0);
	func_9(&iVar2, 29);
	COMPANION::_0x3CAAD93FA5B9579A(iLocal_59, 2, iVar2);
}

bool func_3(int iParam0)
{
	return false;
}

void func_4()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	switch (iLocal_45)
	{
		case 1:
			if (func_10(Global_33, vLocal_63, 1) < 1120403456)
			{
				iLocal_47 = func_11(0, 2, -1.693837E+33f, 1, 0, 0f, 0f, 0f);
				switch (iLocal_44)
				{
					case 81:
						fLocal_46 = 5.786628E+21f;
						break;
					case 26:
						fLocal_46 = -2.273068E+29f;
						break;
					case 111:
						fLocal_46 = 4.229643E-32f;
						break;
					default:
						fLocal_46 = 5.786628E+21f;
						break;
				}
				iLocal_45 = 2;
			}
			else
			{
				iLocal_45 = 6;
			}
			break;
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_47, false);
			STREAMING::REQUEST_MODEL(fLocal_46, false);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_47) && STREAMING::HAS_MODEL_LOADED(fLocal_46)) && PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
			{
				iLocal_45 = 4;
			}
			break;
		case 4:
			if (func_12())
			{
				func_13();
				func_14(&uLocal_60);
				iLocal_45 = 5;
			}
			else
			{
				iLocal_45 = 6;
			}
			break;
		case 5:
			if (bLocal_70)
			{
				LAW::_0x7EF2A2FE38D74456(func_15(1), true);
			}
			fVar0 = 1125515264; /* Float: 150f */
			iVar3 = 0;
			while (iVar3 < iLocal_49)
			{
				if (func_5(iLocal_49[iVar3], 0))
				{
					iVar2++;
					fVar1 = func_10(iLocal_49[iVar3], Global_34, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
				iVar3++;
			}
			if (iVar2 <= 2)
			{
				bLocal_70 = false;
				LAW::_0x7EF2A2FE38D74456(func_15(1), false);
			}
			if (iVar2 <= 0 || fVar0 >= 1125515264)
			{
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < iLocal_49)
				{
					if (func_5(iLocal_49[iVar3], 0))
					{
						func_16(iLocal_49[iVar3]);
					}
					iVar3++;
				}
				iLocal_45 = 6;
			}
			break;
		case 6:
			iVar4 = 0;
			while (iVar4 < iLocal_49)
			{
				if (func_5(iLocal_49[iVar4], 0))
				{
					func_6(&(iLocal_49[iVar4]), 1, 1, 1);
				}
				iVar4++;
			}
			LAW::_0x7EF2A2FE38D74456(func_15(1), false);
			iLocal_45 = 7;
			break;
	}
}

bool func_5(int iParam0, int iParam1)
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
	if (func_17(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_17(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_17(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_17(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_17(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_17(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_17(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_17(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_6(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

int func_7(int iParam0)
{
	if (!func_18(iParam0))
	{
		return 0;
	}
	return Global_1887363[iParam0 /*36*/].f_4;
}

Vector3 func_8(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { 0f, 0f, 0f };
	if (!func_18(iParam0))
	{
		return vVar0;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[iParam0 /*36*/].f_4))
	{
		vVar0 = { VOLUME::GET_VOLUME_COORDS(Global_1887363[iParam0 /*36*/].f_4) };
		if (bParam1)
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

void func_9(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

float func_10(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_11(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, vector3 vParam5)
{
	if (!func_19(iParam0))
	{
		return 0;
	}
	if (func_20(iParam0) == -1)
	{
		return 0;
	}
	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(func_20(iParam0), iParam1, iParam2, bParam3, bParam4, vParam5);
}

bool func_12()
{
	float fVar0;

	if (!func_21(iLocal_44, &vLocal_66, fLocal_46))
	{
		return false;
	}
	fVar0 = BUILTIN::VDIST2(Global_34, vLocal_66);
	if (fVar0 > 1176256512)
	{
		return false;
	}
	if (fVar0 < 1150885888)
	{
		return false;
	}
	if (CAM::IS_SPHERE_VISIBLE(vLocal_66, 2f) || !ENTITY::WOULD_ENTITY_BE_OCCLUDED(fLocal_46, vLocal_66, true))
	{
		return false;
	}
	iLocal_69 = VOLUME::CREATE_VOLUME_CYLINDER(vLocal_66, 0f, 0f, 0f, 3f, 3f, 3f);
	func_22(iLocal_69, 0, 0, 0, 0, 0);
	func_23(iLocal_69, 0);
	return true;
}

void func_13()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;

	if (!PED::DOES_GROUP_EXIST(iLocal_48))
	{
		iLocal_48 = PED::CREATE_GROUP(1);
		PED::SET_GROUP_FORMATION_SPACING(iLocal_48, 5f, 1f, 2f);
		PED::SET_GROUP_FORMATION(iLocal_48, 8);
		PED::_0x89E59DBD15E21177(iLocal_48, 0);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		vVar1 = { func_24(vLocal_66, 3f, 1f) };
		if (iVar0 == 0)
		{
			iLocal_49[iVar0] = func_25(fLocal_46, vVar1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f), 1, 1, 0, 1, 1, 1, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[iVar0], 1, false);
			PED::SET_COMBAT_FLOAT(iLocal_49[iVar0], 48, 8f);
			if (UNLOCK::UNLOCK_IS_UNLOCKED(9.67248E+27f))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_49[iVar0], 9.67248E+27f, 999, true, true, 0, false, 0.5f, 1f, 6.028273E-12f, false, 0f, false);
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_49[iVar0], -1.91869E+32f, 999, true, true, 0, false, 0.5f, 1f, 6.028273E-12f, false, 0f, false);
			}
		}
		else
		{
			iLocal_49[iVar0] = func_25(iLocal_47, vVar1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f), 1, 1, 0, 1, 1, 1, 0, 0);
			if (func_5(iLocal_49[iVar0], 0))
			{
				if ((iVar0 % 4) == 0 && (func_27(func_26()) >= 22 || func_27(func_26()) <= 4))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_49[iVar0], 2.574461E-25f, 999, true, true, 0, false, 0.5f, 1f, 6.028273E-12f, false, 0f, false);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_49[iVar0], 2.080198E+24f, 999, true, false, 1, false, 0.5f, 1f, 6.028273E-12f, false, 0f, false);
				}
				else
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_49[iVar0], -1.91869E+32f, 999, true, true, 0, false, 0.5f, 1f, 6.028273E-12f, false, 0f, false);
				}
			}
		}
		if (func_5(iLocal_49[iVar0], 0))
		{
			PED::SET_PED_DEFENSIVE_AREA_VOLUME(iLocal_49[iVar0], iLocal_59, false, false, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[iVar0], 0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[iVar0], 58, true);
			PED::_0x815C0074A1BC0D93(iLocal_49[iVar0], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_49[iVar0], 1.028787E+20f);
			PED::REGISTER_TARGET(iLocal_49[iVar0], Global_33, true);
			PED::SET_PED_ACCURACY(iLocal_49[iVar0], 60);
			PED::SET_PED_CONFIG_FLAG(iLocal_49[iVar0], 279, true);
			if (iVar0 == 0)
			{
				PED::SET_PED_AS_GROUP_LEADER(iLocal_49[iVar0], iLocal_48, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_49[iVar0], 155, true);
				COMPANION::_ACTIVATE_COMPANION_ANALYSIS(iLocal_48);
				COMPANION::_SET_COMPANION_ACTIVITY(iLocal_48, -1.662483E-09f);
			}
			else
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_49[iVar0], iLocal_48);
				PED::SET_PED_CONFIG_FLAG(iLocal_49[iVar0], 156, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_49[iVar0], 152, true);
			}
			iVar4 = MAP::BLIP_ADD_FOR_ENTITY(4.085619E-09f, iLocal_49[iVar0]);
			MAP::BLIP_ADD_MODIFIER(iVar4, 1.041392E+37f);
			MAP::BLIP_ADD_MODIFIER(iVar4, 5.968156f);
			PED::_0x1E017404784AA6A3(iLocal_49[iVar0], 0.007061281f);
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_49[iVar0], 2);
			PED::SET_PED_COMBAT_RANGE(iLocal_49[iVar0], 1);
			PED::_SET_PED_COMBAT_BEHAVIOUR(iLocal_49[iVar0], 1.703578E+34f);
			iVar5 = 0;
			func_28(&iVar5, 15);
			func_28(&iVar5, 16);
			COMPANION::_ADD_COMPANION_FLAG(iLocal_49[iVar0], iVar5);
		}
		iVar0++;
	}
}

void func_14(var uParam0)
{
	func_29(uParam0, 0f);
}

int func_15(int iParam0)
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

void func_16(int iParam0)
{
	if (!func_5(Global_33, 0))
	{
		return;
	}
	if (!func_5(iParam0, 0))
	{
		return;
	}
	TASK::TASK_SMART_FLEE_PED(iParam0, Global_33, 500f, -1, 0, 3f, 0);
	func_30(iParam0);
	func_6(&iParam0, 1, 1, 1);
}

bool func_17(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_18(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_19(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

int func_20(int iParam0)
{
	int iVar0;

	if (!func_19(iParam0))
	{
		return -1;
	}
	iVar0 = func_32(func_31());
	if (iVar0 != 1 && iVar0 != 2)
	{
		return Global_1900443[iParam0];
	}
	return Global_1900426[iParam0];
}

bool func_21(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0[4];
	bool bVar13;
	float fVar14;
	int iVar15;
	float fVar16;

	bVar13 = false;
	switch (iParam0)
	{
		case 81:
			vVar0[0 /*3*/] = { -1012119834, 1144423830, 1122552001 };
			vVar0[1 /*3*/] = { -1014198783, 1146345089, 1122848434 };
			vVar0[2 /*3*/] = { -1011569069, 1145722280, 1122369523 };
			vVar0[3 /*3*/] = { -1016296912, 1143975289, 1122045670 };
			break;
		case 26:
			vVar0[0 /*3*/] = { -992206180, -1010335895, 1125832432 };
			vVar0[1 /*3*/] = { -991928193, -1011391015, 1126193332 };
			vVar0[2 /*3*/] = { -991603415, -1009202161, 1126068571 };
			vVar0[3 /*3*/] = { -991915059, -1008721530, 1125918048 };
			break;
		case 111:
			vVar0[0 /*3*/] = { 1151571638, -996320486, 1117304377 };
			vVar0[1 /*3*/] = { 1151643769, -995955168, 1117158428 };
			vVar0[2 /*3*/] = { 1151881542, -995533239, 1117452449 };
			vVar0[3 /*3*/] = { 1152305333, -995864006, 1117343606 };
			break;
		default:
			*uParam1 = { func_8(iParam0, 1) };
			return false;
	}
	*uParam1 = { vVar0[0 /*3*/] };
	fVar14 = 1232348144;
	iVar15 = 0;
	while (iVar15 < 4)
	{
		if (!CAM::IS_SPHERE_VISIBLE(vVar0[iVar15 /*3*/], 2f) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(iParam2, vVar0[iVar15 /*3*/], true))
		{
			fVar16 = BUILTIN::VDIST2(Global_34, vVar0[iVar15 /*3*/]);
			if (bVar13)
			{
				bVar13 = false;
				*uParam1 = { vVar0[iVar15 /*3*/] };
				fVar16 = fVar14;
			}
			else if (fVar16 < fVar14 && !fVar16 < 1150885888)
			{
				*uParam1 = { vVar0[iVar15 /*3*/] };
				fVar16 = fVar14;
			}
		}
		else if (iVar15 == 0)
		{
			bVar13 = true;
		}
		iVar15++;
	}
	return true;
}

void func_22(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::_CLEAR_VOLUME_AREA(iParam0, iVar0);
}

void func_23(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 512;
	if (iParam1 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam1 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam1 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam1 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam1 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	MISC::_CLEAR_VOLUME_AREA(iParam0, iVar0);
}

Vector3 func_24(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_33(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

int func_25(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_34(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_26()
{
	return Global_1902565;
}

int func_27(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

void func_28(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

void func_29(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_35() - fParam1);
	func_36(uParam0, 1);
	func_37(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_30(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	func_38(&iVar0);
}

int func_31()
{
	return Global_1893611.f_2;
}

int func_32(int iParam0)
{
	if (!func_18(iParam0))
	{
		return 0;
	}
	return Global_1887363[iParam0 /*36*/].f_21;
}

Vector3 func_33(vector3 vParam0, float fParam3)
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

void func_34(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
			func_39(iParam0, 0, 1);
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
			func_40(iParam0, 0);
			bVar0 = true;
		}
		func_41(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

float func_35()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

void func_36(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_37(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_38(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_39(int iParam0, bool bParam1, bool bParam2)
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

void func_40(int iParam0, bool bParam1)
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

void func_41(int iParam0, int iParam1)
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

