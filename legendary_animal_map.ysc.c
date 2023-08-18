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
	struct<2> Local_19 = { 0, 0 } ;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 28;
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
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
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
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&Local_19);
	}
	while (!bVar0)
	{
		if (func_2(&Local_19))
		{
			bVar0 = true;
		}
		switch (func_3(&Local_19))
		{
			case 0:
				if (func_4(&Local_19))
				{
					func_5(&Local_19, 1);
				}
				else
				{
					bVar0 = true;
				}
				break;
			case 1:
				switch (func_6(&Local_19))
				{
					case 0:
						if (!func_7(&(Local_19.f_1)))
						{
							func_8(&(Local_19.f_1), 0);
						}
						if (func_9(&(Local_19.f_1)) >= 1092616192)
						{
							bVar0 = true;
						}
						break;
					case 1:
						if (func_7(&(Local_19.f_1)))
						{
							func_10(&(Local_19.f_1));
						}
						func_5(&Local_19, 2);
						break;
					case 2:
						bVar0 = true;
						break;
				}
				break;
			case 2:
				if (func_11(&Local_19))
				{
					func_5(&Local_19, 3);
				}
				break;
			case 3:
				if (!func_12(&Local_19))
				{
					bVar0 = true;
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_19);
}

void func_1(var uParam0)
{
	func_13(&(uParam0->f_4));
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_9))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_9);
	}
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_2(var uParam0)
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		return true;
	}
	if (func_3(uParam0) >= 3)
	{
		if (!TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID()))
		{
			return true;
		}
	}
	return false;
}

int func_3(var uParam0)
{
	return *uParam0;
}

bool func_4(var uParam0)
{
	if (!func_14(&(uParam0->f_4), -4726.099f, 0.0007985434f, 0.0007985434f))
	{
		return false;
	}
	return true;
}

void func_5(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_6(var uParam0)
{
	switch (func_15(&(uParam0->f_4)))
	{
		case 0:
			return 0;
		case 2:
			return 2;
	}
	return 1;
}

bool func_7(var uParam0)
{
	return func_16(*uParam0, 1);
}

void func_8(var uParam0, bool bParam1)
{
	if (bParam1 || !func_7(uParam0))
	{
		func_17(uParam0);
	}
}

float func_9(var uParam0)
{
	if (!func_7(uParam0))
	{
		return 0f;
	}
	if (func_18(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_19() - uParam0->f_1);
}

void func_10(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_11(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_20(&(uParam0->f_4)))
	{
		return false;
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_9))
	{
		uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "DynamicAnimalMap");
		if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_9))
		{
			return false;
		}
	}
	iVar2 = 0;
	while (iVar2 < 28)
	{
		func_21(iVar2, &uVar0, &iVar1);
		uParam0->f_10[iVar2 /*3*/] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_9, func_23(func_22(iVar2)));
		uParam0->f_10[iVar2 /*3*/].f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_10[iVar2 /*3*/], func_23(func_24(iVar2)), func_25(&uVar0, iVar1));
		uParam0->f_10[iVar2 /*3*/].f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_10[iVar2 /*3*/], func_23(func_26(iVar2)), UNLOCK::UNLOCK_IS_UNLOCKED(func_27(&uVar0, iVar1)));
		iVar2++;
	}
	TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), 2.622451E-38f, 5.112149E-07f, 1, 0, -1f);
	return true;
}

bool func_12(var uParam0)
{
	return true;
}

void func_13(var uParam0)
{
	UISTATEMACHINE::UI_STATE_MACHINE_DESTROY_AND_CLEAR(&(uParam0->f_3));
	if (uParam0->f_4 != 0)
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
}

bool func_14(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == 0)
	{
		return false;
	}
	if (iParam2 == 0)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		return false;
	}
	uParam0->f_1 = iParam1;
	uParam0->f_2 = iParam2;
	uParam0->f_3 = iParam3;
	*uParam0 = 1;
	return true;
}

int func_15(var uParam0)
{
	if (!*uParam0)
	{
		return 2;
	}
	if (uParam0->f_4 == 0)
	{
		uParam0->f_4 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(uParam0->f_1);
		if (uParam0->f_4 == 0)
		{
			return 2;
		}
	}
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_4))
	{
		return 0;
	}
	return 1;
}

bool func_16(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_17(var uParam0)
{
	func_28(uParam0, 0f);
}

bool func_18(var uParam0)
{
	return func_16(*uParam0, 2);
}

float func_19()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

bool func_20(var uParam0)
{
	if (UISTATEMACHINE::_UIFLOWBLOCK_ENTER(uParam0->f_4, uParam0->f_2))
	{
	}
	else
	{
		return false;
	}
	if (UISTATEMACHINE::UI_STATE_MACHINE_CREATE(uParam0->f_3, uParam0->f_4))
	{
	}
	else
	{
		return false;
	}
	return true;
}

void func_21(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		case 1:
			*uParam1 = 9;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 12;
			*uParam2 = 0;
			break;
		case 3:
			*uParam1 = 10;
			*uParam2 = 0;
			break;
		case 4:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		case 5:
			*uParam1 = 2;
			*uParam2 = 1;
			break;
		case 6:
			*uParam1 = 0;
			*uParam2 = 0;
			break;
		case 7:
			*uParam1 = 5;
			*uParam2 = 0;
			break;
		case 8:
			*uParam1 = 10;
			*uParam2 = 1;
			break;
		case 9:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 10:
			*uParam1 = 13;
			*uParam2 = 1;
			break;
		case 11:
			*uParam1 = 13;
			*uParam2 = 0;
			break;
		case 12:
			*uParam1 = 8;
			*uParam2 = 1;
			break;
		case 13:
			*uParam1 = 3;
			*uParam2 = 1;
			break;
		case 14:
			*uParam1 = 7;
			*uParam2 = 0;
			break;
		case 15:
			*uParam1 = 6;
			*uParam2 = 1;
			break;
		case 16:
			*uParam1 = 12;
			*uParam2 = 1;
			break;
		case 17:
			*uParam1 = 7;
			*uParam2 = 1;
			break;
		case 18:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 19:
			*uParam1 = 6;
			*uParam2 = 0;
			break;
		case 20:
			*uParam1 = 8;
			*uParam2 = 0;
			break;
		case 21:
			*uParam1 = 5;
			*uParam2 = 1;
			break;
		case 22:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		case 23:
			*uParam1 = 3;
			*uParam2 = 0;
			break;
		case 24:
			*uParam1 = 11;
			*uParam2 = 1;
			break;
		case 25:
			*uParam1 = 4;
			*uParam2 = 1;
			break;
		case 26:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
		case 27:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
	}
}

struct<16> func_22(int iParam0)
{
	char cVar0[128];

	StringCopy(&cVar0, "Zone", 128);
	StringIntConCat(&cVar0, iParam0 + 1, 128);
	return cVar0;
}

char* func_23(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

struct<16> func_24(int iParam0)
{
	char cVar0[128];

	StringCopy(&cVar0, "animalType", 128);
	return cVar0;
}

int func_25(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -2.887305E+27f;
				case 1:
					return -1.84926E-20f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1.613592E+35f;
				case 1:
					return 4.12541E+36f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -7.393304E+34f;
				case 1:
					return 6.330083E-37f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 2.251425E+16f;
				case 1:
					return 5.772885E-12f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -17.69105f;
				case 1:
					return -1.961281E+11f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -5.045832E+16f;
				case 1:
					return 4.180983E-24f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -9534888f;
				case 1:
					return 3.854492E+15f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 3.271892E-33f;
				case 1:
					return NaNf;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 6.024914E-24f;
				case 1:
					return -7.9993E-25f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -3.257249E-19f;
				case 1:
					return -0.001087003f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -2.408475E-37f;
				case 1:
					return 6.347765E+31f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return -6.606914E-33f;
				case 1:
					return 1.574381E+36f;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return -2.69681E+13f;
				case 1:
					return -1.539429f;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return -555.2548f;
				case 1:
					return -1.491623E-06f;
				default:
					break;
			}
			break;
	}
	return 0;
}

struct<16> func_26(int iParam0)
{
	char cVar0[128];

	StringCopy(&cVar0, "isVisible", 128);
	return cVar0;
}

int func_27(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -0.5359446f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -1.238678E+11f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -1.281774E-36f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -8180448f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -1701020f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 4.444323E+27f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -1.409571E+11f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -4.925219E+25f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 8.604325E+27f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -9.097312E+09f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 3.959745E-32f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -1.117919E-33f;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1.066113E+11f;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 59.79277f;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_28(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_19() - fParam1);
	func_29(uParam0, 1);
	func_30(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_29(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_30(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

