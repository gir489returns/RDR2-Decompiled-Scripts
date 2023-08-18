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
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	struct<126> Var0;
	int iVar127;
	int iVar128;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	Var0.f_5.f_2 = 12;
	Var0.f_5.f_64 = 11;
	Var0.f_5.f_76 = 11;
	Var0.f_124 = 1;
	Var0.f_125 = 1;
	Var0.f_102 = TASK::GET_ITEM_INTERACTION_ITEM_ID(Global_33);
	if (!func_2(Var0.f_102, 0))
	{
		Global_1913429 = 0;
	}
	else
	{
		Global_1913429 = Var0.f_102;
	}
	Var0.f_105 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES(Var0.f_102);
	iVar127 = 0;
	while (iVar127 < Var0.f_105)
	{
		Var0.f_5.f_2[iVar127 /*5*/] = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_TYPE(Var0.f_102, iVar127);
		Var0.f_5.f_2[iVar127 /*5*/].f_2 = Var0.f_5.f_2[iVar127 /*5*/];
		Var0.f_5.f_2[iVar127 /*5*/].f_1 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_NUM_VALUES(Var0.f_102, Var0.f_5.f_2[iVar127 /*5*/].f_2);
		iVar127++;
	}
	Var0.f_108 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@player_journal", 0, "plMain", false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(Var0.f_108);
	Var0.f_116 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(Global_33) && (PED::IS_PED_USING_ANY_SCENARIO(Global_33) && !PED::GET_PED_CONFIG_FLAG(Global_33, 464, true)))
	{
		Var0.f_116 = 1;
	}
	if (func_3(Var0.f_102, -3.485853E-30f))
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_DOCUMENT_FLIP_AVAILABLE", true, -1);
	}
	else
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_DOCUMENT_FLIP_AVAILABLE", false, -1);
	}
	while (!func_4())
	{
		Var0.f_104 = TASK::GET_ITEM_INTERACTION_STATE(Global_33);
		if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(Var0.f_108) && ANIMSCENE::IS_ANIM_SCENE_LOADED(Var0.f_108, true, false)) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(Var0.f_108, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Var0.f_108, Global_34, ENTITY::GET_ENTITY_ROTATION(Global_33, 2), 2);
			ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(Var0.f_108, Global_33, -1);
			ANIMSCENE::START_ANIM_SCENE(Var0.f_108);
		}
		iVar128 = TASK::GET_ITEM_INTERACTION_STATE(Global_33);
		if (iVar128 == -1.66886E-05f || iVar128 == -3800.711f)
		{
			if (Var0.f_105 > 0)
			{
				if (!PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "GENERIC_BOOK_READ_AVAILABLE"))
				{
					PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_BOOK_READ_AVAILABLE", true, -1);
				}
				if (PAD::IS_CONTROL_JUST_RELEASED(0, -7.068217E+21f))
				{
					if (UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(-1.32833E+17f, -2.098171E-25f) != 0)
					{
					}
					else
					{
						func_5(&Var0);
					}
				}
			}
			else if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "GENERIC_BOOK_READ_AVAILABLE"))
			{
				PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_BOOK_READ_AVAILABLE", false, -1);
			}
		}
		else
		{
			if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "GENERIC_BOOK_READ_AVAILABLE"))
			{
				PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_BOOK_READ_AVAILABLE", false, -1);
			}
			if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(-1.32833E+17f))
			{
				UIAPPS::_CLOSE_UIAPP_BY_HASH(-1.32833E+17f);
			}
		}
		BUILTIN::WAIT(0);
	}
	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(iLocal_20))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iLocal_20);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_3(bool bParam0, int iParam1)
{
	if (!func_2(bParam0, 0))
	{
		return func_7(func_6(bParam0), iParam1);
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

bool func_4()
{
	if (Global_1572887.f_14 == 0 && func_8(0, 0))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return true;
	}
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		return true;
	}
	if (!TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33))
	{
		return true;
	}
	if (!func_9())
	{
		return true;
	}
	return false;
}

void func_5(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(iLocal_20))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iLocal_20);
	}
	func_10(uParam0);
	iLocal_20 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iLocal_20, "Generic");
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(uParam0->f_102, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_11(&(uParam0->f_5), iVar2, 1, 1, 0);
					iVar2++;
					break;
				case -641080715:
					func_11(&(uParam0->f_5), iVar2, 3, 1, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

bool func_6(bool bParam0)
{
	return bParam0;
}

int func_7(bool bParam0, int iParam1)
{
	if (!func_12(bParam0, 2))
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

bool func_8(bool bParam0, bool bParam1)
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

bool func_9()
{
	return func_13(1);
}

void func_10(var uParam0)
{
	int iVar0;

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_5.f_63))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_63);
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_5.f_64[iVar0]))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_64[iVar0]);
		}
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_5.f_76[iVar0]))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_76[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_5.f_2)
	{
		uParam0->f_5.f_2[iVar0 /*5*/].f_3 = 0;
		iVar0++;
	}
}

void func_11(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char cVar0[16];

	if (iParam1 >= 11)
	{
		return;
	}
	StringCopy(&cVar0, "textField", 16);
	StringIntConCat(&cVar0, iParam1, 16);
	if (bParam4)
	{
		StringConCat(&cVar0, "Strike", 16);
	}
	uParam0->f_64[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[iParam1], "text", *uParam0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[iParam1], "style", iParam2);
	StringCopy(&cVar0, "divider", 16);
	StringIntConCat(&cVar0, iParam1, 16);
	uParam0->f_76[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_76[iParam1], "isVisible", bParam3);
}

bool func_12(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

bool func_13(int iParam0)
{
	return func_14(iParam0);
}

bool func_14(int iParam0)
{
	return func_15(Global_1940072.f_38, iParam0);
}

bool func_15(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

