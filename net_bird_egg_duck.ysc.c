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
	vector3 vLocal_16 = { 0f, 0f, 0f };
	vector3 vLocal_19 = { 0f, 0f, 0f };
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24[5] = { 0, 0, 0, 0, 0 };
	float fLocal_30[5] = { 0f, 0f, 0f, 0f, 0f };
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	bool bLocal_41 = false;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = -1;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = -1082130432;
	var uLocal_66 = -1082130432;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 10;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	iLocal_23 = ScriptParam_0;
	iLocal_22 = ScriptParam_0.f_1;
	if (func_1() != -1)
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		if (func_3(func_2(0)) == 7)
		{
			func_4(&uLocal_42);
		}
	}
	if (func_1() == -1)
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		{
			func_4(&uLocal_42);
		}
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_22))
	{
		func_4(&uLocal_42);
	}
	func_5(&uLocal_42, 1.005541E+16f, -0.05602385f, 1.227979E-22f, 5, 2, 0);
	while (func_6(&uLocal_42))
	{
		if (func_7())
		{
			func_4(&uLocal_42);
		}
		if (func_8(&uLocal_42))
		{
			func_4(&uLocal_42);
		}
		func_9(&uLocal_42);
		BUILTIN::WAIT(0);
	}
	func_4(&uLocal_42);
}

int func_1()
{
	return Global_1572887.f_14;
}

struct<2> func_2(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_3(var uParam0, var uParam1)
{
	return uParam0;
}

void func_4(var uParam0)
{
	int iVar0;
	int iVar1;

	func_10(0);
	func_11(&(uParam0->f_14));
	if (iLocal_39 != iVar0)
	{
		TASK::_DELETE_PATCH_OBJECTS_FROM_HERB_COMPOSITES(iLocal_39, false);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_2))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_2));
	}
	iVar1 = 0;
	while (iVar1 < func_12(&(uParam0->f_3)))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_24[iVar1]))
		{
			func_13(iLocal_24[iVar1], iLocal_24[iVar1], 0);
		}
		iVar1++;
	}
	if (func_14(Global_1222312[*uParam0 /*251*/][uParam0->f_13], 2))
	{
		func_15(&(Global_1222312[*uParam0 /*251*/][uParam0->f_13]), 2);
	}
	func_16(&(uParam0->f_14));
	SCRIPTS::_0xE7282390542F570D(iLocal_23);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_5(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	*uParam0 = 5;
	vLocal_16 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_22, true) };
	vLocal_19 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_22, true) };
	uParam0->f_4 = iParam6;
	uParam0->f_13 = iParam5;
	iLocal_40 = fParam3;
	uParam0->f_3 = fParam2;
	uParam0->f_11 = fParam1;
	uParam0->f_12 = iParam4;
}

bool func_6(var uParam0)
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_4(uParam0);
		return false;
	}
	return true;
}

bool func_7()
{
	return false;
}

bool func_8(var uParam0)
{
	switch (uParam0->f_4)
	{
		case 1:
			func_17(uParam0);
			break;
		case 0:
			func_18(uParam0);
			break;
	}
	return false;
}

int func_9(var uParam0)
{
	var uVar0;

	switch (uParam0->f_4)
	{
		case 0:
		case 1:
			if (func_19(uParam0))
			{
				func_10(1);
				func_20(uParam0->f_11, &uVar0);
				func_10(0);
				func_16(&(uParam0->f_14));
				uParam0->f_4 = -1;
				return 1;
			}
			break;
	}
	return 0;
}

void func_10(bool bParam0)
{
	if (bParam0)
	{
		func_21(0, 6);
	}
	else
	{
		func_22(0, 6, 0);
	}
}

void func_11(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_7))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_7);
	}
}

int func_12(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (*uParam0)
		{
			case joaat("PROVISION_VULTURE_EGG"):
				return 1;
			case joaat("PROVISION_LOON_EGG"):
				return 3;
			case joaat("PROVISION_DUCK_EGG"):
				return 5;
			case joaat("PROVISION_GOOSE_EGG"):
				return 4;
			case joaat("PROVISION_HERON_EGG"):
				return 1;
			case joaat("PROVISION_EGRET_EGG"):
				return 1;
			case joaat("PROVISION_EAGLE_EGG"):
				return 1;
			case joaat("PROVISION_HAWK_EGG"):
				return 1;
			case joaat("PROVISION_SPOONBILL_EGG"):
				return 1;
			case joaat("PROVISION_CONDOR_EGG"):
				return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_13(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ITEMSET::IS_ITEMSET_VALID(Global_1296492.f_32) && ITEMSET::IS_IN_ITEMSET(iParam0, Global_1296492.f_32))
	{
		ITEMSET::REMOVE_FROM_ITEMSET(iParam0, Global_1296492.f_32);
	}
	PLAYER::_UNREGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), iParam0);
	PLAYER::_0xDC5E09D012D759C4(iParam0, iParam1, iParam2);
	Var1.f_1 = -1f;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1296492[iVar0 /*2*/]) && Global_1296492[iVar0 /*2*/] == iParam0)
		{
			MISC::COPY_SCRIPT_STRUCT(&(Global_1296492[iVar0 /*2*/]), &Var1, 2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_14(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_15(var uParam0, int iParam1)
{
	func_23(uParam0, iParam1);
}

void func_16(var uParam0)
{
	func_24(uParam0);
	func_25(&(uParam0->f_6), 1);
}

void func_17(var uParam0)
{
	bool bVar0;
	int iVar1;

	if (func_26(uParam0) > 4)
	{
		func_27(&iLocal_38);
	}
	bVar0 = (func_28(uParam0) && !func_19(uParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
	{
		if (!DECORATOR::DECOR_EXIST_ON(iLocal_38, "EggBroken"))
		{
			func_29(&(uParam0->f_14), vLocal_16, bVar0, 1, 1, 0);
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < Global_17418.f_2992.f_1)
		{
			if (uParam0->f_3 == Global_17418.f_2992.f_1[iVar1 /*5*/].f_4)
			{
				if (func_30(Global_34, Global_17418.f_2992.f_1[iVar1 /*5*/].f_1, 1112014848 /* Float: 50f */, 1))
				{
					if (!Global_17418.f_2992.f_1[iVar1 /*5*/])
					{
						Global_17418.f_2992.f_1[iVar1 /*5*/] = 1;
						func_31("COLLECTIBLE_MAP_BIRD_EGG_SHOT", 10000, 0, 0, 0, 1);
					}
				}
			}
			iVar1++;
		}
	}
	if (func_32(Global_1295619.f_3, vLocal_16, 1) < 2f)
	{
		func_33(&(uParam0->f_14.f_5));
	}
	if (func_14(Global_1222312[*uParam0 /*251*/][uParam0->f_13], 4))
	{
		func_34(iLocal_38, 0);
		func_35(uParam0, 9);
		func_15(&(Global_1222312[*uParam0 /*251*/][uParam0->f_13]), 4);
	}
	else if (func_14(Global_1222312[*uParam0 /*251*/][uParam0->f_13], 8))
	{
		func_34(iLocal_38, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
		{
			func_13(iLocal_38, iLocal_38, 0);
		}
		func_35(uParam0, 12);
		func_15(&(Global_1222312[*uParam0 /*251*/][uParam0->f_13]), 8);
	}
	switch (func_26(uParam0))
	{
		case 0:
			func_36(&(uParam0->f_14.f_6), vLocal_16, 1069547520 /* Float: 1.5f */, 1, 319, 0);
			func_37(uParam0);
			func_35(uParam0, 1);
			break;
		case 1:
			if (func_38(uParam0))
			{
				func_35(uParam0, 2);
			}
			break;
		case 2:
			if (func_28(uParam0))
			{
				bLocal_41 = true;
			}
			else
			{
				bLocal_41 = false;
			}
			if (bLocal_41)
			{
				if (func_39(uParam0))
				{
					func_35(uParam0, 3);
				}
			}
			else
			{
				func_35(uParam0, 13);
			}
			break;
		case 3:
			func_35(uParam0, 4);
			break;
		case 4:
			func_40(&(uParam0->f_3));
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
			{
				if (!PLAYER::_IS_EAGLE_EYE_REGISTERED_FOR_ENTITY(PLAYER::PLAYER_ID(), iLocal_38))
				{
					func_41(iLocal_38, iLocal_38, 0);
					MAP::_0x7563CBCA99253D1A(iLocal_38, 3.474616E-32f);
					func_35(uParam0, 5);
				}
			}
			break;
		case 5:
			if (uParam0->f_11 != 3.015216E-20f)
			{
				if (func_42())
				{
					func_13(iLocal_38, iLocal_38, 0);
					func_35(uParam0, 11);
				}
				if (func_32(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), vLocal_16, 0) < 1092616192)
				{
					func_35(uParam0, 6);
				}
			}
			else
			{
				func_35(uParam0, 9);
			}
			break;
		case 6:
			func_35(uParam0, 7);
			break;
		case 7:
			if (func_42())
			{
				func_13(iLocal_38, iLocal_38, 0);
				func_35(uParam0, 11);
			}
			if (func_32(Global_33, vLocal_16, 0) < 1090519040)
			{
				func_35(uParam0, 8);
			}
			break;
		case 8:
			if (func_42())
			{
				func_13(iLocal_38, iLocal_38, 0);
				func_35(uParam0, 11);
			}
			break;
		case 11:
			if (!DECORATOR::DECOR_GET_BOOL(iLocal_38, "EggBroken"))
			{
				func_43(*uParam0, uParam0->f_13, GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
			}
			else
			{
				func_44(*uParam0, uParam0->f_13, GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
			}
			break;
		case 9:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_24[0]))
			{
				ENTITY::_0xF41E2979D5BC5370(iLocal_37);
				iLocal_24[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_37, vLocal_16, false, false, false, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_24[0]))
			{
				if (!TASK::GET_IS_CARRIABLE_ENTITY(iLocal_24[0]))
				{
					if (!uParam0->f_26)
					{
						PHYSICS::ACTIVATE_PHYSICS(iLocal_24[0]);
						TASK::_MAKE_OBJECT_CARRIABLE(iLocal_24[0]);
						func_13(iLocal_38, iLocal_38, 0);
						func_41(iLocal_24[0], iLocal_24[0], 0);
						MAP::_0x7563CBCA99253D1A(iLocal_24[0], 3.474616E-32f);
						ENTITY::_0x5826EFD6D73C4DE5(iLocal_24[0]);
						func_15(&(Global_1222312[*uParam0 /*251*/][uParam0->f_13]), 4);
						uParam0->f_26 = 1;
					}
				}
				else
				{
					TASK::_0x8E1DDE26D270CC5E(iLocal_24[0], 1);
					func_35(uParam0, 10);
				}
				if (uParam0->f_26)
				{
					func_45(uParam0);
				}
			}
			break;
		case 10:
			func_45(uParam0);
			func_35(uParam0, 13);
			break;
		case 12:
			PERSISTENCE::PERSISTENCE_ADD_SCENARIO_LOOTED(iLocal_22);
			MISC::_0x082C043C7AFC3747(iLocal_39, false);
			break;
		case 13:
			break;
	}
}

void func_18(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	bVar0 = (func_28(uParam0) && !func_19(uParam0));
	if (func_46(uParam0, &iLocal_24) > 0)
	{
		func_29(&(uParam0->f_14), vLocal_16, bVar0, 1, 1, 0);
	}
	if (func_32(Global_1295619.f_3, vLocal_16, 1) < 1080033280)
	{
		func_33(&(uParam0->f_14.f_5));
	}
	switch (func_26(uParam0))
	{
		case 0:
			func_36(&(uParam0->f_14.f_6), vLocal_16, 1069547520 /* Float: 1.5f */, 1, 319, 0);
			func_47(&(uParam0->f_14), vLocal_16);
			func_48(uParam0);
			func_35(uParam0, 1);
			break;
		case 1:
			if (func_49(uParam0))
			{
				func_35(uParam0, 2);
			}
			break;
		case 2:
			if (func_28(uParam0))
			{
				bLocal_41 = true;
			}
			else
			{
				bLocal_41 = false;
			}
			if (bLocal_41)
			{
				if (func_50(uParam0))
				{
					func_35(uParam0, 3);
				}
			}
			else
			{
				func_35(uParam0, 13);
			}
			break;
		case 3:
			func_35(uParam0, 4);
			break;
		case 4:
			func_40(&(uParam0->f_3));
			if (func_51(&iLocal_24, &fLocal_30, func_12(&(uParam0->f_3)), vLocal_16, 5f) > 0)
			{
				iVar1 = 0;
				while (iVar1 < func_12(&(uParam0->f_3)))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_24[iVar1]))
					{
						OBJECT::_0x46CBCF0E98A4E156(iLocal_24[iVar1], 1);
						if (!PLAYER::_IS_EAGLE_EYE_REGISTERED_FOR_ENTITY(PLAYER::PLAYER_ID(), iLocal_24[iVar1]))
						{
							func_41(iLocal_24[iVar1], iLocal_24[iVar1], 0);
						}
						MAP::_0x7563CBCA99253D1A(iLocal_24[iVar1], 3.474616E-32f);
					}
					iVar1++;
				}
			}
			iVar2 = TASK::_GET_HERB_COMPOSITE_NUM_ENTITIES(iLocal_39, &(uParam0->f_28));
			if (iVar2 > 0 && iVar2 <= 10)
			{
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[iVar3 /*2*/]))
					{
						OBJECT::_0x46CBCF0E98A4E156(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_28[iVar3 /*2*/]), 1);
						if (!PLAYER::_IS_EAGLE_EYE_REGISTERED_FOR_ENTITY(PLAYER::PLAYER_ID(), uParam0->f_28[iVar3 /*2*/]))
						{
							func_41(uParam0->f_28[iVar3 /*2*/], uParam0->f_28[iVar3 /*2*/], 0);
						}
						MAP::_0x7563CBCA99253D1A(uParam0->f_28[iVar3 /*2*/], 3.474616E-32f);
					}
					iVar3++;
				}
			}
			if (func_46(uParam0, &iLocal_24) == func_12(&(uParam0->f_3)))
			{
				func_35(uParam0, 5);
			}
			break;
		case 5:
			func_35(uParam0, 6);
			break;
		case 6:
			func_35(uParam0, 7);
			break;
		case 7:
			if (func_32(Global_33, vLocal_16, 0) < 1090519040)
			{
				func_35(uParam0, 8);
			}
			break;
		case 8:
			break;
		case 9:
			func_35(uParam0, 11);
			break;
		case 10:
			func_35(uParam0, 13);
			break;
		case 11:
			func_35(uParam0, 13);
			break;
		case 12:
			MISC::_0x082C043C7AFC3747(iLocal_39, false);
			break;
		case 13:
			break;
	}
}

bool func_19(var uParam0)
{
	if (uParam0->f_4 == 0)
	{
		if (func_32(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_5, 1) <= 1f)
		{
			return (func_52(uParam0) || func_53(uParam0));
		}
	}
	return (func_52(uParam0) || func_53(uParam0));
}

int func_20(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	func_54(&Var0, 2.95884E+10f);
	return func_55(iParam0, &Var0, uParam1, 0, 0);
}

void func_21(int iParam0, int iParam1)
{
	if (!func_56(iParam0, iParam1))
	{
		MISC::SET_BIT(&(Global_1072759.f_22475.f_417[iParam0 /*12*/]), iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_57();
	}
}

void func_22(int iParam0, int iParam1, bool bParam2)
{
	if (func_56(iParam0, iParam1) && (!bParam2 || Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		MISC::CLEAR_BIT(&(Global_1072759.f_22475.f_417[iParam0 /*12*/]), iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = 0;
		func_57();
	}
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_24(var uParam0)
{
	if (uParam0->f_4 != -1)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
		AUDIO::RELEASE_SOUND_ID(uParam0->f_4);
		PAD::STOP_CONTROL_SHAKE(0);
		uParam0->f_4 = -1;
	}
	AUDIO::_RELEASE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman");
}

void func_25(int iParam0, int iParam1)
{
	if (func_58(iParam0))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);
	}
}

int func_26(var uParam0)
{
	return uParam0->f_1;
}

void func_27(int iParam0)
{
	if (func_59(*iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (!DECORATOR::DECOR_EXIST_ON(*iParam0, "EggBroken"))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(*iParam0))
				{
					if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(*iParam0, -2.231397E+18f, 10000) || func_60())
					{
						DECORATOR::DECOR_SET_BOOL(*iParam0, "EggBroken", false);
					}
					else
					{
						DECORATOR::DECOR_SET_BOOL(*iParam0, "EggBroken", true);
						func_61(818, 1);
					}
				}
			}
		}
	}
}

bool func_28(var uParam0)
{
	struct<5> Var0;

	Var0 = { func_62(uParam0->f_3, 0, 1) };
	if (func_63(uParam0->f_3, &Var0, 1, 0, 0, -1, 0))
	{
		return false;
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_22))
	{
		if (PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED(iLocal_22))
		{
			return false;
		}
	}
	return true;
}

void func_29(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (!func_64(Global_1222308))
	{
		if ((MISC::GET_FRAME_COUNT() % 30) == 0 || uParam0->f_10 == -1f)
		{
			uParam0->f_10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_1222308, vParam1, true);
		}
		if (uParam0->f_10 <= 5f)
		{
			bVar0 = true;
		}
	}
	bVar1 = func_65(uParam0, bParam4, bVar0);
	if (!bVar1)
	{
		if (uParam0->f_8)
		{
			uParam0->f_8 = 0;
		}
	}
	if (uParam0->f_11 < 8)
	{
		uParam0->f_11++;
	}
	else
	{
		uParam0->f_11 = 0;
	}
	if (!uParam0->f_8)
	{
		if (uParam0->f_11 == 0)
		{
			uParam0->f_8 = 1;
		}
		return;
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0 || uParam0->f_9 == -1f)
	{
		uParam0->f_9 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vParam1, true);
	}
	fVar2 = 1092616192; /* Float: 10f */
	fVar2 = (fVar2 * (1f + func_66()));
	switch (*uParam0)
	{
		case 0:
			if (uParam0->f_9 < fVar2)
			{
				if (bParam5)
				{
					if (AUDIO::PREPARE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman", false))
					{
						uParam0->f_4 = AUDIO::GET_SOUND_ID();
						if (Global_1940186.f_38 != -8.284301E+07f)
						{
							AUDIO::_PLAY_SOUND_FROM_POSITION_WITH_ID(uParam0->f_4, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", false, 0, bParam6);
						}
						func_67(uParam0, 1);
					}
				}
				else
				{
					func_67(uParam0, 1);
				}
			}
			break;
		case 1:
			iVar3 = BUILTIN::FLOOR((1140457472 * ((fVar2 - uParam0->f_9) / fVar2)));
			iVar4 = BUILTIN::FLOOR((1132462080 * ((fVar2 - uParam0->f_9) / fVar2)));
			if (iVar3 < 0)
			{
				iVar3 = MISC::ABSI(iVar3);
			}
			if (iVar3 > 9999)
			{
				iVar3 = 9999;
			}
			if (uParam0->f_9 < 3f && bParam7)
			{
				func_68(250);
			}
			PAD::SET_CONTROL_SHAKE(0, iVar3, iVar4);
			func_69(&(uParam0->f_1));
			func_67(uParam0, 2);
			break;
		case 2:
			if ((uParam0->f_9 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_24(uParam0);
				}
				func_67(uParam0, 0);
			}
			else if (func_70(&(uParam0->f_1)) >= 2f)
			{
				func_67(uParam0, 1);
			}
			else if (uParam0->f_9 < 3f && bParam7)
			{
				func_68(250);
			}
			break;
	}
}

bool func_30(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

int func_31(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

float func_32(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_33(var uParam0)
{
	if (AUDIO::PREPARE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman", false))
	{
		if (HUD::UI_PROMPT_IS_CONTROL_ACTION_ACTIVE(5.822005E-15f))
		{
			if (!*uParam0)
			{
				AUDIO::PLAY_SOUND_FRONTEND("collectible_found", "RDRO_Collectible_Sounds_Travelling_Saleswoman", true, 0);
				*uParam0 = 1;
			}
		}
		else if (*uParam0)
		{
			*uParam0 = 0;
		}
	}
}

void func_34(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!bParam1)
		{
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + Vector(869711765, 0f, 0f), 1, true, -2.231397E+18f, 0, false, false, -1f, false);
		}
		else
		{
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + Vector(869711765, 0f, 0f), 1, true, -1.91869E+32f, 0, false, false, -1f, false);
		}
	}
}

void func_35(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_36(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_58(iParam0))
	{
		*iParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_58(iParam0))
		{
		}
	}
}

void func_37(var uParam0)
{
	STREAMING::REQUEST_MODEL(iLocal_36, false);
	STREAMING::REQUEST_MODEL(iLocal_37, false);
}

bool func_38(var uParam0)
{
	if (STREAMING::HAS_MODEL_LOADED(iLocal_36) && STREAMING::HAS_MODEL_LOADED(iLocal_37))
	{
		return true;
	}
	return false;
}

bool func_39(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_38))
	{
		iLocal_38 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_36, vLocal_19, false, true, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_38))
	{
		return false;
	}
	return true;
}

void func_40(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (*uParam0)
		{
			case joaat("PROVISION_VULTURE_EGG"):
				fLocal_30[iVar0] = -3.816071E+17f;
				break;
			case joaat("PROVISION_LOON_EGG"):
				fLocal_30[iVar0] = 7.333329E-12f;
				break;
			case joaat("PROVISION_DUCK_EGG"):
				fLocal_30[iVar0] = -74098.65f;
				break;
			case joaat("PROVISION_GOOSE_EGG"):
				fLocal_30[iVar0] = 4.746679E+11f;
				break;
			case joaat("PROVISION_EAGLE_EGG"):
				fLocal_30[iVar0] = -1.231544E-32f;
				break;
			case joaat("PROVISION_EGRET_EGG"):
				fLocal_30[iVar0] = 1.017927E-13f;
				break;
			case joaat("PROVISION_HAWK_EGG"):
				fLocal_30[iVar0] = 0.002023749f;
				break;
			case joaat("PROVISION_CONDOR_EGG"):
				fLocal_30[iVar0] = 2.665481E-18f;
				break;
			case joaat("PROVISION_HERON_EGG"):
				fLocal_30[iVar0] = 2.320561E-30f;
				break;
			case joaat("PROVISION_SPOONBILL_EGG"):
				fLocal_30[iVar0] = -2.621828E+09f;
				break;
		}
		iVar0++;
	}
}

int func_41(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1296492.f_32))
	{
		Global_1296492.f_32 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam0, Global_1296492.f_32))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_1296492.f_32);
	}
	if (!func_71(iParam0))
	{
		PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), iParam0, false);
		PLAYER::_0x6ECFC621A168424C(iParam0, iParam1, iParam2, 0f);
		PLAYER::_EAGLE_EYE_SET_CUSTOM_DISTANCE(iParam0, 500f);
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1296492[iVar0 /*2*/]))
		{
			Global_1296492[iVar0 /*2*/] = iParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_42()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
	{
		return DECORATOR::DECOR_EXIST_ON(iLocal_38, "EggBroken");
	}
	return false;
}

void func_43(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<7> Var1;
	struct<19> Var8;

	iVar0 = func_72(0, 8);
	Var1.f_4 = 1;
	Var1 = 42;
	Var1.f_5 = uParam0;
	Var1.f_6 = uParam1;
	Var8.f_12 = -1;
	Var8.f_12.f_1 = -1;
	Var8.f_14 = 255;
	Var8.f_15 = 255;
	Var8.f_14 = Global_1295619.f_149[Global_1295619];
	Var8 = 0;
	Var8.f_1 = PLAYER::GET_PLAYER_INDEX();
	Var8.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_74(Var8, func_73(Global_34, 0f, 0f, 0f, 1125515264 /* Float: 150f */, 1125515264 /* Float: 150f */, 1125515264 /* Float: 150f */, -2.19652E+23f, 0, 8), 0, 0);
	func_75(&Var1, &iVar0);
}

void func_44(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<7> Var1;
	struct<19> Var8;

	iVar0 = func_72(0, 8);
	Var1.f_4 = 1;
	Var1 = 43;
	Var1.f_5 = uParam0;
	Var1.f_6 = uParam1;
	Var8.f_12 = -1;
	Var8.f_12.f_1 = -1;
	Var8.f_14 = 255;
	Var8.f_15 = 255;
	Var8.f_14 = Global_1295619.f_149[Global_1295619];
	Var8 = 0;
	Var8.f_1 = PLAYER::GET_PLAYER_INDEX();
	Var8.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_74(Var8, func_73(Global_34, 0f, 0f, 0f, 1125515264 /* Float: 150f */, 1125515264 /* Float: 150f */, 1125515264 /* Float: 150f */, -2.19652E+23f, 0, 8), 0, 0);
	func_75(&Var1, &iVar0);
}

void func_45(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iLocal_24[0]))
	{
		if (!uParam0->f_27)
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_24[0], true, false) };
			vVar3 = { vVar0 };
			if (func_76(&vVar3, 50, 10, 0, 0))
			{
				if (MISC::ABSF((vVar3.z - vVar0.z)) <= 1020054733)
				{
					PHYSICS::SET_DAMPING(iLocal_24[0], 0, 100000f);
					PHYSICS::SET_DAMPING(iLocal_24[0], 4, 100000f);
					uParam0->f_27 = 1;
				}
			}
		}
		else
		{
			vVar6 = { ENTITY::GET_ENTITY_VELOCITY(iLocal_24[0], -1) };
			vVar9 = { vVar6 };
			vVar9 = { vVar9 * Vector(1061158912, 1061158912, 1061158912) };
			if (MISC::ABSF(vVar6.x) < vVar9.x)
			{
				vVar9.x = vVar6.x;
			}
			if (MISC::ABSF(vVar6.y) < vVar9.y)
			{
				vVar9.f_1 = vVar6.y;
			}
			if (MISC::ABSF(vVar6.z) < vVar9.z)
			{
				vVar9.f_2 = vVar6.z;
			}
			if (func_30(vVar9, 0f, 0f, 0f, 1028443341 /* Float: 0.05f */, 1))
			{
				vVar9 = { 0f, 0f, 0f };
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_24[0], true);
			}
			else
			{
				ENTITY::SET_ENTITY_VELOCITY(iLocal_24[0], vVar9);
			}
		}
	}
}

int func_46(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < func_12(&(uParam0->f_3)))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_47(var uParam0, vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_7))
	{
		uParam0->f_7 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, 0f, 0f, 0f, 2f, 2f, 2f, "colleactable restriction volume");
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_7, 6, 0, 0, -1, -1, 0);
	}
}

void func_48(var uParam0)
{
	TASK::_REQUEST_HERB_COMPOSITE_ASSET(iLocal_40);
}

bool func_49(var uParam0)
{
	if (TASK::ARE_COMPOSITE_LOOTABLE_ENTITY_DEF_ASSETS_LOADED(iLocal_40))
	{
		return true;
	}
	return false;
}

bool func_50(var uParam0)
{
	var uVar0;

	if (!ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		if (bLocal_41)
		{
			iLocal_39 = TASK::_CREATE_HERB_COMPOSITES(iLocal_40, vLocal_16, 0f, 0, &uVar0, -1);
		}
		else
		{
			iLocal_39 = TASK::_CREATE_HERB_COMPOSITES(iLocal_40, vLocal_16, 0f, 1, &uVar0, -1);
		}
		return true;
	}
	return false;
}

int func_51(int iParam0, float fParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	iVar1 = func_77(iParam0, fParam1, iVar0, iParam2);
	func_78(iVar0);
	return iVar1;
}

int func_52(var uParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 9.878974E-36f))
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_22))
		{
			PERSISTENCE::PERSISTENCE_ADD_SCENARIO_LOOTED(iLocal_22);
		}
		func_79(*uParam0, uParam0->f_13, GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
		return 1;
	}
	return 0;
}

int func_53(var uParam0)
{
	if (func_14(Global_1222312[*uParam0 /*251*/][uParam0->f_13], 2))
	{
		return 1;
	}
	return 0;
}

void func_54(var uParam0, int iParam1)
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

int func_55(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
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
	func_80(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_81(uParam2, iParam0, Var1);
	return 1;
}

bool func_56(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
}

void func_57()
{
	SCRIPTS::_SET_ALL_PLAYER_BITS(&(Global_1072759.f_21353.f_260));
}

bool func_58(int iParam0)
{
	if (*iParam0 == 0)
	{
		return false;
	}
	return *iParam0 != -1;
}

bool func_59(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			switch (iVar0)
			{
				case joaat("MP005_S_BDEG_EAGLENEST01X"):
				case joaat("MP005_S_BDEG_CONDORNEST01X"):
				case joaat("MP005_S_BDEG_SPOONBILLNEST01X"):
				case joaat("MP005_S_BDEG_HERONNEST01X"):
				case joaat("MP005_S_BDEG_EGRETNEST01X"):
				case 990159072:
					return true;
			}
		}
	}
	return false;
}

bool func_60()
{
	int iVar0;

	if (func_83(func_82(Global_33, 1, 0, 0)))
	{
		iVar0 = WEAPON::_GET_CURRENT_PED_WEAPON_AMMO_TYPE(Global_33, WEAPON::_GET_PED_WEAPON_OBJECT(Global_33, true));
		if (iVar0 == -5.415317E-11f)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

void func_61(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_84(iParam0, &iVar0, &iVar1);
	if (!func_85(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_86(iVar0, iVar1);
}

struct<5> func_62(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_87(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_88(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_89(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_90(bParam1) };
			if (bParam2 && func_91(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_92(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_92(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_93(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_94(bParam1) };
			switch (func_95(bParam0))
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
			if (func_96(bParam0, -2.580501E-27f))
			{
				Var0 = { func_89(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_96(bParam0, -4.220332E-15f))
			{
				Var0 = { func_89(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_89(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_96(bParam0, -3.171238E-21f))
			{
				Var0 = { func_89(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_97(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_96(bParam0, -3.171238E-21f))
			{
				Var0 = { func_89(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

bool func_63(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, float fParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_98(&bParam0);
	if (!func_99(bParam0, 0) && !func_101(func_100(bParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_102(bParam0, -3.294982E+22f) == 0)
	{
		bParam3 = true;
	}
	if (func_103(bParam0) && WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		Var0 = { func_90(0) };
		Var4.f_9 = -5.45926E-19f;
		if (!func_92(bParam0, &Var0, 6.282013E+23f, 0, 0))
		{
			return false;
		}
		else if (func_93(bParam0, &Var4, 6.282013E+23f))
		{
			return false;
		}
		if (func_91(bParam0, 1))
		{
			if (!func_92(bParam0, &Var0, -3.587391E+15f, 0, 0))
			{
				return false;
			}
			else if (func_93(bParam0, &Var4, -3.587391E+15f))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_104(bParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_105(bParam0, *uParam1, uParam1->f_4, bParam4, bParam3, fParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_64(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_65(var uParam0, bool bParam1, bool bParam2)
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_106(-4.629755E-24f, 0, 0, 0) <= 0)
			{
				return 0;
			}
			break;
		case 1:
			if (func_107(0))
			{
				return 0;
			}
			break;
		case 2:
			if (func_108())
			{
				return 0;
			}
			break;
		case 3:
			if (Global_1048576)
			{
				return 0;
			}
			break;
		case 4:
			if (func_109())
			{
				return 0;
			}
			break;
		case 5:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				return 0;
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Global_33) && TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
			{
				return 0;
			}
			break;
		case 7:
			if (!bParam1 && *uParam0 == 0)
			{
				return 0;
			}
			break;
		case 8:
			if (bParam2 && *uParam0 == 0)
			{
				return 0;
			}
			break;
		default:
			uParam0->f_11 = 0;
			break;
	}
	return 1;
}

float func_66()
{
	return Global_1156096.f_2169[89 /*205*/].f_201;
}

void func_67(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_68(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
}

void func_69(var uParam0)
{
	func_110(uParam0, 0f);
}

float func_70(var uParam0)
{
	if (!func_111(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_112(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_113() - uParam0->f_1);
}

bool func_71(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar13;
	int iVar14;
	int iVar15;

	if (func_114() == 0)
	{
		return false;
	}
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(func_114()))
	{
		return false;
	}
	Var0 = func_114();
	Var0.f_2 = 0;
	Var0.f_3 = 0;
	Var0.f_4 = 0;
	Var0.f_1 = 0;
	iVar13 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar14 = 0;
	while (iVar14 < 30)
	{
		Var0.f_1 = 0;
		Var0.f_3 = iVar14;
		Var0.f_2 = 0;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 1;
			if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&uVar5, &Var0))
			{
				iVar15 = MISC::GET_HASH_KEY(&uVar5);
				if (iVar13 == iVar15)
				{
					return true;
				}
			}
		}
		iVar14++;
	}
	return false;
}

var func_72(int iParam0, int iParam1)
{
	return func_73(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

var func_73(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_115() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_116());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_116());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_116());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_117(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_118(iVar2))
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
				if (iVar9 & 8192 != 0 && func_119(iVar2) != 1)
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
					if (!func_120(iVar10))
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

void func_74(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
{
	struct<21> Var0;

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam19))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!bParam20)
	{
		if (Param0.f_18)
		{
			if (bParam21)
			{
				Var0.f_12 = -1;
				Var0.f_12.f_1 = -1;
				Var0.f_14 = 255;
				Var0.f_15 = 255;
				Var0.f_20 = -1;
				Var0 = { Param0 };
				Var0.f_19 = uParam19;
				Var0.f_20 = Param0.f_2;
				func_121(&(Global_1072759.f_22981), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 5, &uParam19);
}

void func_75(var uParam0, int* iParam1)
{
	if (SCRIPTS::_IS_ANY_PLAYER_BIT_SET(iParam1))
	{
		uParam0->f_1 = Global_1295619.f_149[Global_1295619];
		SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 22, iParam1);
	}
}

bool func_76(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_122(*uParam0, 0f, 0f, 0f))
	{
		return true;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bParam4)
	{
		vVar4 = { *uParam0 };
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

int func_77(int iParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_GET_ENTITIES_IN_VOLUME(iParam2, iVar0, 3);
	if (iVar6 >= iParam3)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *fParam1)
			{
				if ((*fParam1)[iVar5] == 0)
				{
					(*iParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *fParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar2) == (*fParam1)[iVar5])
				{
					(*iParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *fParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

void func_78(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_79(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<7> Var1;
	struct<19> Var8;

	if (iParam2 == 0)
	{
		iParam2 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	}
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam2))
	{
	}
	iVar0 = func_123(iParam2);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&iVar0, PLAYER::PLAYER_ID());
	Var1.f_4 = 1;
	Var1 = 41;
	Var1.f_5 = uParam0;
	Var1.f_6 = uParam1;
	Var8.f_12 = -1;
	Var8.f_12.f_1 = -1;
	Var8.f_14 = 255;
	Var8.f_15 = 255;
	Var8.f_14 = Global_1295619.f_149[Global_1295619];
	Var8 = 0;
	Var8.f_1 = PLAYER::GET_PLAYER_INDEX();
	Var8.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_74(Var8, func_73(Global_34, 0f, 0f, 0f, 1133903872 /* Float: 300f */, 1133903872 /* Float: 300f */, 1133903872 /* Float: 300f */, -2.19652E+23f, 0, 8), 0, 0);
	func_75(&Var1, &iVar0);
}

void func_80(var uParam0)
{
	func_54(uParam0, 8.505438E-34f);
	if (func_124() == 3.272964E+34f)
	{
		func_54(uParam0, 8.967694E-17f);
	}
	else
	{
		func_54(uParam0, 1.721179E-28f);
	}
}

void func_81(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_125(uParam0))
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

float func_82(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_83(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

void func_84(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_85(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_126(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_127(iParam0))
	{
		return false;
	}
	if (func_128(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_129(iParam0, 1)) || func_130(32768))
	{
		if (!func_129(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_131())
	{
		return false;
	}
	return true;
}

void func_86(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

struct<4> func_87(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_132(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_89(2.982335E+09f, func_133(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_89(2.982335E+09f, func_133(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_89(2.982335E+09f, func_133(), -5.45926E-19f, bParam0);
}

int func_88(bool bParam0)
{
	vector3 vVar0;

	if (!func_99(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_89(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_99(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_132(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_90(bool bParam0)
{
	int iVar0;

	iVar0 = func_132(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_89(8.681942E-06f, func_87(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_89(8.681942E-06f, func_87(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_89(8.681942E-06f, func_87(bParam0), -1.942248E+12f, 0);
}

int func_91(bool bParam0, bool bParam1)
{
	if (func_95(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_134();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_92(bool bParam0, var uParam1, float fParam2, bool bParam3, float fParam4)
{
	return func_105(bParam0, *uParam1, fParam2, bParam3, 1, fParam4) > 0;
}

bool func_93(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_135(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_94(bool bParam0)
{
	int iVar0;

	iVar0 = func_132(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_89(3.507197E-29f, func_87(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_89(3.507197E-29f, func_87(bParam0), 12999093, 0);
}

int func_95(bool bParam0)
{
	struct<2> Var0;

	if (!func_99(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_96(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_95(bParam0);
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
			if (func_136(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_97(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_137(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_98(bool bParam0)
{
	if (!func_99(*bParam0, 0))
	{
		return 0;
	}
	if (!func_138(*bParam0))
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

bool func_99(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_100(bool bParam0)
{
	return bParam0;
}

bool func_101(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

int func_102(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_101(func_100(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

bool func_103(bool bParam0)
{
	return func_88(bParam0) == -3.265313E+23f;
}

int func_104(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_99(bParam0, 0))
	{
		if (func_101(func_100(bParam0), 2))
		{
			return -1;
		}
		return 0;
	}
	if (func_88(bParam0) == 5.407193E-38f)
	{
		return -1;
	}
	if (!bParam2 && func_102(bParam0, -3.294982E+22f) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(bParam0, uParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_132(bParam3), bParam0);
}

int func_105(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_99(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_102(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_89(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_132(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_132(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

int func_106(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_99(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_88(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_139(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_140(bParam0, 0);
	}
	if (func_102(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_132(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_141(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_132(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

bool func_107(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

bool func_108()
{
	return func_142() != -1;
}

bool func_109()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

void func_110(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_113() - fParam1);
	func_143(uParam0, 1);
	func_144(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_111(var uParam0)
{
	return func_145(*uParam0, 1);
}

bool func_112(var uParam0)
{
	return func_145(*uParam0, 2);
}

float func_113()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

int func_114()
{
	return Global_1072759.f_28418[47 /*4*/].f_3;
}

int func_115()
{
	return Global_1051645.f_12;
}

char* func_116()
{
	return "unnamed";
}

int func_117(int iParam0)
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

bool func_118(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_146(36, iParam0);
}

int func_119(int iParam0)
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

bool func_120(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_147(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_148(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

int func_121(var uParam0, struct<21> Param1)
{
	if (!func_149(uParam0))
	{
		return 0;
	}
	uParam0->f_2[*uParam0 /*21*/] = { Param1 };
	*uParam0++;
	return 1;
}

bool func_122(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_123(int iParam0)
{
	struct<2> Var0[7];
	var uVar15;
	int iVar16;
	int iVar17;
	int iVar18;

	iVar16 = GANG::_NETWORK_GET_GANG_MEMBERS(iParam0, &Var0);
	if (iVar16 == 0)
	{
		return uVar15;
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 <= (iVar16 - 1))
	{
		iVar18 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar17 /*2*/]));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar18))
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar15, iVar18);
		}
		iVar17++;
	}
	return uVar15;
}

int func_124()
{
	return Global_1953279.f_1;
}

bool func_125(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_126(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_127(int iParam0)
{
	if (func_129(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_128(int iParam0)
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

bool func_129(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_130(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_131()
{
	if (!func_150())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

int func_132(bool bParam0)
{
	if (func_1() == -1)
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

struct<4> func_133()
{
	struct<4> Var0;

	return Var0;
}

int func_134()
{
	if (func_151(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_135(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_132(0);
	*iParam1 = { func_89(bParam0, func_90(0), fParam3, 0) };
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

bool func_136(bool bParam0, int iParam1, int iParam2)
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

int func_137(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_132(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

bool func_138(bool bParam0)
{
	return func_152(bParam0, 5.168749E+07f);
}

bool func_139(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_99(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_88(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_152(bParam0, 9.811189E+11f))
	{
		func_153(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

int func_140(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_154(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_155(&Var0, func_90(0));
	}
	if (!func_156(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_157(iVar18);
	return iVar19;
}

struct<4> func_141(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_62(bParam0, bParam1, 0) };
	return func_89(bParam0, Var0, Var0.f_4, bParam1);
}

int func_142()
{
	return Global_1149157.f_137;
}

void func_143(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_144(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_145(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_146(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_158(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_159())
	{
		return func_158(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_158(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_147(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_148(int iParam0)
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
		func_160(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_161(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

bool func_149(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

bool func_150()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

int func_151(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_162(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_132(bParam1), iParam0, bParam3);
}

int func_152(bool bParam0, int iParam1)
{
	if (!func_99(bParam0, 0))
	{
		return func_163(func_100(bParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 104.1169f))
	{
		return 1;
	}
	return 0;
}

void func_153(bool bParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = 2.868836E+26f;
			*uParam2 = 1.33835E+22f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = -6.44427E+07f;
			*uParam2 = 1.33835E+22f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = -1.5597E+17f;
			*uParam2 = 984456.8f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = -1.340805E-26f;
			*uParam2 = -1.163197E-36f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = -0.0004557966f;
			*uParam2 = 5.999469E+31f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = -7.543728E-18f;
			*uParam2 = 5.999469E+31f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = -4.09862E-21f;
			*uParam2 = 6.597174E-09f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = -1.78904E-16f;
			*uParam2 = -1.54477E-12f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = -4.051864E-08f;
			*uParam2 = 4.104352E-31f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = 6.371044E+11f;
			*uParam2 = 4.104352E-31f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = -2.04749E+08f;
			*uParam2 = 1.48591E+21f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = 3.971968E-06f;
			*uParam2 = 3.147558E+28f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = -9.057481E+30f;
			*uParam2 = -1.339106E-09f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = 2.184573E-20f;
			*uParam2 = -1.339106E-09f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = -9.738313E+24f;
			*uParam2 = -1.21702E+18f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = 39255.64f;
			*uParam2 = 1.256526E-30f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = 0.0001116685f;
			*uParam2 = -2.686844E-29f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = -1.441753E-05f;
			*uParam2 = -2.686844E-29f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = -8.900574E-37f;
			*uParam2 = 1.249562E-27f;
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = -4.758429E+16f;
			*uParam2 = 4.067655E+37f;
			break;
	}
}

struct<18> func_154(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_155(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_156(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_132(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_157(int iParam0)
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

bool func_158(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_159()
{
	return Global_1102813.f_3672;
}

void func_160(int iParam0)
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
	func_161(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_161(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_162(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_163(bool bParam0, int iParam1)
{
	if (!func_101(bParam0, 2))
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

