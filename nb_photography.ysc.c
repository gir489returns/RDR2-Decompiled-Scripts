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
	struct<59> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 5, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3 } ;
	var uLocal_72 = 0;
	var uLocal_73 = 255;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 255;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 255;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	struct<27> Local_82[32];
	struct<579> Local_947 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 6, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 255, 255, 255, 0, 0, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 1, 0, 0, 1065353216, 0, 1065353216, 1077936128, 1108082688, 1113325568, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_1526 = -1;
	var uLocal_1527 = 0;
	var uLocal_1528 = 1097859072;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 4;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 1;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = -1;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 1;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = -1;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 1;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = -1;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 1;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = -1;
	var uLocal_1565 = -1;
	var uLocal_1566 = 0;
	var uLocal_1567 = 1097859072;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 4;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 1;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = -1;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 1;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = -1;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 1;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = -1;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 1;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = -1;
	var uLocal_1604 = -1;
	var uLocal_1605 = 0;
	var uLocal_1606 = 1097859072;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 4;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 1;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = -1;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 1;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = -1;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 1;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = -1;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 1;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = -1;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = -1;
	var uLocal_1646 = 0;
	float fLocal_1647 = 0f;
	float fLocal_1648 = 0f;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	char* sLocal_1652 = NULL;
	char* sLocal_1653 = NULL;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_1647 = 1f;
	fLocal_1648 = 1f;
	sLocal_1652 = "FACE_HUMAN@GEN_MALE@PORTRAIT";
	sLocal_1653 = "facials@gen_male@portrait";
	iVar0 = iScriptParam_0;
	func_1(iVar0);
	func_2(&iScriptParam_0);
	while (!func_3())
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
	func_9();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 69, 42);
	func_10(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Local_13), 69, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_82, 865, 43);
	func_11(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Local_82[0 /*27*/])), 865, "m_clientData");
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
}

void func_2(bool bParam0)
{
	if (Local_13 == 6)
	{
		return;
	}
	func_13(bParam0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_14();
		func_15();
	}
}

bool func_3()
{
	if (func_16(0, 0))
	{
		return true;
	}
	else if (func_17(Local_947.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_947.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_947.f_12), Local_947.f_9))
	{
		return true;
	}
	else if (Local_947.f_8 == 6)
	{
		return true;
	}
	return false;
}

void func_4()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_22();
	}
	func_23();
}

void func_5()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_24();
		func_25();
	}
	func_26();
	func_27();
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
		if (func_28() == 0)
		{
			if (func_29())
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

void func_9()
{
	func_30();
}

int func_10(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_11(int iParam0, int iParam1, char* sParam2)
{
	return 1;
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

void func_13(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<29> Var3;

	iVar0 = 255;
	MISC::COPY_SCRIPT_STRUCT(&Local_947, bParam0, 5);
	iVar2 = func_31(&bVar1, Local_947.f_1, Local_947.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_947.f_12 = iVar2;
	iVar0 = Global_1207465.f_231.f_1066[iVar2 /*17*/].f_5;
	Var3.f_10 = 30f;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_32(&Var3, Local_947.f_1, Local_947.f_2, Local_947.f_3, iVar0);
	Local_947.f_9 = { func_33(Var3.f_5, 8) };
	Local_947.f_14 = Var3.f_5;
	Local_947.f_15 = { Var3.f_11 };
	Local_947.f_18 = Var3.f_7;
	func_34();
	func_35();
}

void func_14()
{
	func_36();
}

void func_15()
{
	func_37();
	func_38();
	func_39();
}

bool func_16(bool bParam0, bool bParam1)
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

bool func_17(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}
	if (func_40(Global_1051268) && !func_21(Global_1051268, Param0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}
	if (iParam2 != 0 && func_41(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_42(iParam3, 255))
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
	if (func_43())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}
	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_40(Global_1051268))
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

bool func_18()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_19(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

struct<2> func_20(int iParam0)
{
	return Global_1219580.f_1[iParam0 /*10*/].f_4;
}

bool func_21(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_22()
{
	if (Local_13 <= 5)
	{
		func_44();
	}
	switch (Local_13)
	{
		case 0:
			func_45();
			break;
		case 1:
			func_46();
			break;
		case 2:
			func_47();
			break;
		case 3:
			func_48();
			break;
		case 4:
			func_49();
			break;
		case 5:
			func_50();
			break;
	}
}

void func_23()
{
	func_51();
	func_52();
	if (Local_947.f_8 <= 5)
	{
		func_53();
	}
	switch (Local_947.f_8)
	{
		case 0:
			func_54();
			break;
		case 1:
			func_55();
			break;
		case 2:
			func_56();
			break;
		case 3:
			func_57();
			break;
		case 4:
			func_58();
			break;
		case 5:
			func_59();
			break;
	}
}

void func_24()
{
	func_60();
}

void func_25()
{
	if (func_61())
	{
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Local_13.f_3.f_1))
		{
			VOLUME::_RELEASE_LOCK_VOLUME(Local_13.f_3.f_1);
		}
	}
	func_62();
}

void func_26()
{
	func_63();
	func_64();
	func_65();
	func_66();
}

void func_27()
{
	if (Local_947.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_67(Local_947.f_12, 4);
		}
	}
	func_68();
	if (func_69(64))
	{
		func_70(Local_13.f_6);
	}
	func_71();
}

int func_28()
{
	return Global_1572887.f_14;
}

bool func_29()
{
	return Global_1051645.f_8;
}

void func_30()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_13.f_49.f_1[iVar0] = 255;
		iVar0++;
	}
}

int func_31(var uParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	struct<15> Var10;
	int iVar25;
	struct<29> Var26;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_9 = 2;
	Var10 = 2;
	Var10.f_1 = -1;
	Var10.f_5 = -1;
	Var10.f_5.f_1 = -1;
	Var10.f_5.f_3 = -1;
	Var10.f_5.f_4 = -1;
	Var10.f_5.f_5 = -1;
	Var10.f_5.f_6 = -1;
	Var10.f_5.f_6.f_1 = -1;
	Var10.f_5.f_9 = 2;
	Var26.f_10 = 30f;
	Var26.f_15 = 4;
	Var26.f_20 = 4;
	Var26.f_26 = -1;
	Var26.f_28 = 2;
	func_32(&Var26, iParam1, iParam2, -1, 255);
	func_72(&Var0, Var26.f_5);
	iVar25 = func_73(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_74(iVar25) };
		if (Var10 == 2)
		{
			return iVar25;
		}
		else
		{
			*uParam0 = 1;
			return -1;
		}
	}
	return -1;
}

void func_32(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<29> Var0;
	int iVar31;

	Var0.f_10 = 30f;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	MISC::COPY_SCRIPT_STRUCT(bParam0, &Var0, 31);
	iVar31 = 0;
	while (iVar31 < 2)
	{
		bParam0->f_28[iVar31] = 0;
		iVar31++;
	}
	if (iParam4 == 255)
	{
		iParam4 = PLAYER::PLAYER_ID();
	}
	switch (iParam1)
	{
		case 0:
			*bParam0 = 0;
			bParam0->f_1 = 0;
			bParam0->f_2 = 0;
			break;
		case 1:
			func_75(bParam0, iParam2);
			break;
		case 2:
			func_76(bParam0, iParam2);
			break;
		case 3:
			func_77(bParam0, iParam2);
			break;
		case 4:
			func_78(bParam0, iParam2);
			break;
		case 12:
			func_79(bParam0, iParam2);
			break;
		case 6:
			func_80(bParam0, iParam2);
			break;
		case 7:
			func_81(bParam0, iParam2, iParam3);
			break;
		case 5:
			func_82(bParam0, iParam2);
			break;
		case 11:
			func_83(bParam0, iParam2);
			break;
		case 9:
			func_84(bParam0, iParam2, iParam3);
			break;
		case 10:
			func_85(bParam0, iParam2);
			break;
		case 8:
			func_86(bParam0, iParam2);
			break;
		case 13:
			func_87(bParam0, iParam2, iParam4);
			break;
		case 14:
			func_88(bParam0, iParam2, iParam3);
			break;
		case 15:
			func_89(bParam0, iParam2);
			break;
		case 16:
			func_90(bParam0, iParam2, iParam3);
			break;
		case 31:
			func_91(bParam0, iParam2);
			break;
		case 21:
			func_92(bParam0, iParam2);
			break;
		case 28:
			func_93(bParam0, iParam2);
			break;
		case 25:
			func_94(bParam0, iParam2);
			break;
		case 24:
			func_95(bParam0, iParam2);
			break;
		case 22:
			func_96(bParam0, iParam2);
			break;
		case 23:
			func_97(bParam0, iParam2);
			break;
		case 29:
			func_98(bParam0, iParam2);
			break;
		case 26:
			func_99(bParam0, iParam2);
			break;
		case 30:
			func_100(bParam0, iParam2);
			break;
		case 27:
			func_101(bParam0, iParam2);
			break;
		case 32:
			func_102(bParam0, iParam2, iParam3);
			break;
		case 33:
			func_103(bParam0, iParam2, iParam3);
			break;
		case 34:
			func_104(bParam0, iParam2);
			break;
		case 17:
			func_105(bParam0, iParam2);
			break;
		case 18:
			func_106(bParam0, iParam2);
			break;
		case 19:
			func_107(bParam0, iParam2);
			break;
		case 20:
			func_108(bParam0, iParam2);
			break;
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
			func_109(bParam0, iParam1, iParam2);
			break;
		default:
			break;
	}
}

struct<2> func_33(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_111(iParam0, &(Global_1072759.f_573), func_110(iParam1));
			break;
		case 3:
			Var0.f_1 = func_111(iParam0, &(Global_1072759.f_573.f_602), func_110(iParam1));
			break;
		case 4:
			Var0.f_1 = func_111(iParam0, &(Global_1072759.f_573.f_2104), func_110(iParam1));
			break;
		case 5:
			Var0.f_1 = func_111(iParam0, &(Global_1072759.f_573.f_12606), func_110(iParam1));
			break;
		case 6:
			Var0.f_1 = func_111(iParam0, &(Global_1072759.f_573.f_12908), func_110(iParam1));
			break;
		case 7:
			Var0.f_1 = func_111(iParam0, &(Global_1072759.f_573.f_15910), func_110(iParam1));
			break;
		case 8:
			Var0.f_1 = func_111(iParam0, &(Global_1072759.f_573.f_16512), func_110(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_112();
	}
	return Var0;
}

void func_34()
{
	func_113();
	func_114();
	func_115();
	func_116();
	func_117();
}

void func_35()
{
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(3);
	func_118(&(Local_947.f_19.f_12));
	func_119();
	func_120();
	if (!PED::ADD_RELATIONSHIP_GROUP("REL_OREPHT", &(Local_947.f_19.f_45)))
	{
	}
	else
	{
		func_121(3.85186E-34f);
	}
}

void func_36()
{
}

void func_37()
{
}

void func_38()
{
}

void func_39()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_122(&(Local_13.f_58.f_10), iVar0, 3);
		iVar0++;
	}
}

bool func_40(struct<2> Param0)
{
	if (!func_123(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_110(Param0))
	{
		return false;
	}
	return true;
}

bool func_41(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_42(int iParam0, int iParam1)
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

bool func_43()
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
	if (!func_40(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_44()
{
}

void func_45()
{
	int iVar0;
	struct<29> Var1;

	iVar0 = Global_1207465.f_231.f_1066[Local_947.f_12 /*17*/].f_5;
	Var1.f_10 = 30f;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_32(&Var1, Local_947.f_1, Local_947.f_2, Local_947.f_3, iVar0);
	if (!func_124(&Var1, 1))
	{
		func_125(1);
		return;
	}
	Local_13.f_6 = func_126(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(iVar0)));
	func_127(256);
	if (func_128(Local_13.f_6))
	{
		func_129(5);
		func_125(6);
	}
	else
	{
		func_125(1);
	}
}

void func_46()
{
	struct<31> Var0;
	bool bVar31;

	Var0.f_10 = 30f;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_32(&Var0, Local_947.f_1, Local_947.f_2, -1, 255);
	if (func_124(&Var0, 1))
	{
		func_125(2);
		return;
	}
	if (func_130(Var0, &bVar31))
	{
		MISC::CLEAR_AREA(Local_947.f_15, Var0.f_10, 2442122);
		func_125(2);
	}
	else if (bVar31)
	{
		func_129(3);
		func_125(6);
	}
	if (!func_131(Local_13.f_3.f_2))
	{
		func_132(&(Local_13.f_3.f_2));
	}
	else if (func_133(Local_13.f_3.f_2) > 45000)
	{
		func_129(4);
		func_125(6);
	}
}

void func_47()
{
	if (func_134(1, 255))
	{
		if (!func_135(1))
		{
			if (func_136())
			{
				func_127(1);
			}
		}
		else
		{
			func_137();
			func_125(3);
		}
	}
}

void func_48()
{
	bool bVar0;

	if (func_134(2, 255))
	{
		if (!func_135(2))
		{
			bVar0 = true;
			if (!func_138())
			{
				bVar0 = false;
			}
			if (!func_139())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_127(2);
			}
		}
		else
		{
			func_140();
			func_125(4);
		}
	}
}

void func_49()
{
	func_141();
	func_142();
	func_143();
	if (func_144() || Local_13.f_2 != 0)
	{
		func_145();
		func_125(5);
	}
}

void func_50()
{
	if (func_134(4, 255))
	{
		if (func_146())
		{
			func_127(4);
			func_125(6);
		}
	}
}

void func_51()
{
	if (!func_135(256))
	{
		return;
	}
	if (func_135(512))
	{
		if (func_69(64) && func_126(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_70(Local_13.f_6);
			func_147(64);
		}
	}
	else if (!func_69(64))
	{
		if (func_126(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_148(Local_13.f_6, 1, 1);
			func_149(64);
		}
	}
	else if (func_126(PLAYER::PLAYER_ID()) != Local_13.f_6)
	{
		func_70(Local_13.f_6);
		func_147(64);
	}
}

void func_52()
{
	if (!Global_13)
	{
		if (func_134(8192, 255))
		{
			func_150(8192);
		}
	}
	else if (!func_134(8192, 255))
	{
		func_151(8192);
	}
}

void func_53()
{
	func_152();
}

void func_54()
{
	if (Local_13 == 6)
	{
		func_153(6);
	}
	else if (Local_13 > 0)
	{
		func_51();
		func_153(1);
	}
}

void func_55()
{
	if (Local_13 == 6)
	{
		func_153(6);
	}
	else if (Local_13 > 1)
	{
		func_153(2);
	}
}

void func_56()
{
	bool bVar0;
	int iVar1;

	if (!func_134(1, 255))
	{
		bVar0 = true;
		if (!func_154())
		{
			bVar0 = false;
		}
		if (!func_155())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_151(1);
		}
		else
		{
			iVar1 = Global_1901671.f_242.f_70;
			if (!func_131(Local_947.f_11))
			{
				func_132(&(Local_947.f_11));
			}
			if (func_133(Local_947.f_11) >= iVar1)
			{
				func_153(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_156(&(Local_947.f_11));
		func_157();
		func_153(3);
	}
}

void func_57()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_134(2, 255))
	{
		iVar0 = func_158();
		iVar1 = func_159();
		if (iVar0 && iVar1)
		{
			func_151(2);
		}
		else
		{
			iVar2 = Global_1901671.f_242.f_70;
			if (!func_131(Local_947.f_11))
			{
				func_132(&(Local_947.f_11));
			}
			if (func_160(Local_947.f_11) >= iVar2)
			{
				func_153(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_156(&(Local_947.f_11));
		func_161();
		func_162();
		func_163();
		func_164();
		func_153(4);
	}
}

void func_58()
{
	if (Local_13 >= 5)
	{
		func_165();
		func_153(5);
		return;
	}
	func_166();
	func_167();
	func_168();
	func_169();
	func_170();
	func_171();
	func_172();
}

void func_59()
{
	if (!func_134(4, 255))
	{
		if (func_173())
		{
			func_174();
			func_67(Local_947.f_12, 4);
			func_151(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_153(6);
	}
}

void func_60()
{
}

bool func_61()
{
	return (func_135(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
}

void func_62()
{
}

void func_63()
{
	int iVar0;
	int iVar1;

	if (func_61())
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_38[iVar1]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_13.f_38[iVar1]);
				func_175(iVar1);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					func_176(iVar0, "HAS_VOICE");
					func_176(iVar0, "HorseTeamA");
					func_176(iVar0, "HorseTeamB");
					func_176(iVar0, "HorseOwnerTeamA");
					func_176(iVar0, "HorseOwnerTeamB");
					if (!func_177(iVar1, 16))
					{
						PED::_SET_REMOVE_PED_NETWORKED(iVar0, -1);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
			}
			iVar1++;
		}
	}
}

void func_64()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_61())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = 0;
			while (iVar2 < 5)
			{
				if (func_178(iVar1, iVar2))
				{
				}
				else if (func_179(iVar1, iVar2))
				{
					iVar0 = Local_947.f_329[iVar1 /*76*/].f_5[iVar2 /*14*/];
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (func_180(iVar1, iVar2))
						{
							OBJECT::DELETE_OBJECT(&iVar0);
						}
						else
						{
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
						}
					}
				}
				else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar1 /*6*/][iVar2]))
				{
					iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_42[iVar1 /*6*/][iVar2]);
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (func_180(iVar1, iVar2))
						{
							OBJECT::DELETE_OBJECT(&iVar0);
						}
						else
						{
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
						}
					}
				}
				iVar2++;
			}
			iVar1++;
		}
	}
}

void func_65()
{
	func_181(&(Local_947.f_537.f_13));
	if (VOLUME::DOES_VOLUME_EXIST(Local_947.f_537.f_11))
	{
		VOLUME::DELETE_VOLUME(Local_947.f_537.f_11);
	}
}

void func_66()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_183(func_182(iVar0), 1);
		iVar0++;
	}
}

void func_67(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_184(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1217203[iVar0 /*72*/][iParam0]), iParam1);
}

void func_68()
{
	int iVar0;
	bool bVar1;

	if (!func_69(1))
	{
		return;
	}
	if (func_69(4))
	{
		return;
	}
	if (!func_69(2))
	{
		iVar0 = -1;
	}
	else if (!func_69(8))
	{
		iVar0 = 2;
	}
	else if (func_69(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (func_69(32))
	{
		iVar0 = 4;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_185(Local_947.f_9, iVar0, 0, 255, 0);
	func_149(4);
	if (bVar1)
	{
		func_186(Local_947.f_1, Local_947.f_2);
		if (!func_69(256))
		{
			if (iVar0 == 1)
			{
				func_187(Local_947.f_18, 1);
			}
			else
			{
				func_187(Local_947.f_18, 0);
			}
			func_149(256);
		}
		func_188(Local_947.f_18);
	}
	else
	{
		func_187(Local_947.f_18, 2);
	}
}

bool func_69(int iParam0)
{
	return func_189(Local_947.f_7, iParam0);
}

void func_70(int iParam0)
{
	int iVar0;

	if (!func_190(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	Global_1144511[iVar0 /*83*/].f_70 = iParam0;
	Global_1144511[iVar0 /*83*/].f_70.f_2 = 0;
}

void func_71()
{
	int iVar0;

	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (((func_192() && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_PED_SOURCE_OF_DEATH(iVar0)) != PLAYER::PLAYER_PED_ID()) && !func_193(262144))
		{
			func_194(7, Local_947.f_4);
		}
		if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (func_193(262144))
			{
				func_195(0);
			}
		}
	}
	func_196();
	func_197(1);
	func_198();
	func_199();
	func_200();
	if (VOLUME::DOES_VOLUME_EXIST(Local_947.f_19.f_254))
	{
		VOLUME::DELETE_VOLUME(Local_947.f_19.f_254);
	}
	TASK::CLEAR_SEQUENCE_TASK(&(Local_947.f_19.f_164));
}

void func_72(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_33(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_73(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_201(uParam0))
	{
		return -1;
	}
	iVar0 = func_202(uParam0, uParam0->f_9);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar1 == uParam0->f_9)
		{
		}
		else
		{
			iVar0 = func_202(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_74(int iParam0)
{
	struct<15> Var0;

	Var0 = 2;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	if (!func_19(iParam0))
	{
		return Var0;
	}
	return Global_1207465.f_231[iParam0 /*15*/];
}

void func_75(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 7;
	func_203(bParam0, iParam1);
	switch (iParam1)
	{
		case 0:
			bParam0->f_5 = -9.014004E-27f;
			bParam0->f_11 = { 1158047227, 1155008223, 1123710573 };
			break;
		case 1:
			bParam0->f_5 = -5.520074E-18f;
			bParam0->f_11 = { 1158164914, -1043662687, 1112372884 };
			break;
		case 2:
			bParam0->f_5 = -1.289561E+13f;
			bParam0->f_11 = { -997982511, -1002007626, 1114441436 };
			break;
		case 3:
			bParam0->f_5 = -3.198053E-35f;
			bParam0->f_11 = { -997145985, -1021633233, 1118947115 };
			break;
		case 4:
			bParam0->f_5 = -2.764777E-05f;
			bParam0->f_11 = { -995404091, -1006571710, 1123715252 };
			break;
		case 5:
			bParam0->f_5 = 2.06353E+23f;
			bParam0->f_11 = { -998199583, -1007274928, 1120542589 };
			break;
		case 6:
			bParam0->f_5 = 2.336091E+07f;
			bParam0->f_11 = { -1012939165, 1129044142, 1115189962 };
			break;
		case 7:
			bParam0->f_5 = 4.413785E-13f;
			bParam0->f_11 = { -1006603469, 1135384986 /* Float: 345.2f */, 1111987192 };
			break;
		case 8:
			bParam0->f_5 = 3.850579E+15f;
			bParam0->f_11 = { -996518584, -995395355, 1117886349 };
			break;
		case 9:
			bParam0->f_5 = -4.036937E-17f;
			bParam0->f_11 = { -994138817, 1154964357, 1131357929 };
			break;
	}
}

void func_76(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 20;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	func_204(bParam0);
	switch (iParam1)
	{
		case 0:
			func_205(bParam0);
			bParam0->f_5 = 5.413756E-29f;
			bParam0->f_11 = { -990860554, -989563552, 1112583527 };
			break;
		case 1:
			func_205(bParam0);
			bParam0->f_5 = 2.106363E+21f;
			bParam0->f_11 = { 1124617288, 1108172700, 1120571160 };
			break;
		case 2:
			func_205(bParam0);
			bParam0->f_5 = 2.111024E+08f;
			bParam0->f_11 = { -1000099991, 1146566170, 1124510273 };
			break;
		case 3:
			func_205(bParam0);
			bParam0->f_5 = 5.018388E+37f;
			bParam0->f_11 = { 1160662133, 1149675795, 1114109612 };
			break;
		case 4:
			func_205(bParam0);
			bParam0->f_5 = 15.72851f;
			bParam0->f_11 = { 1155202369, -997476443, 1109576938 };
			break;
		case 5:
			func_205(bParam0);
			bParam0->f_5 = 7.778285E-25f;
			bParam0->f_11 = { 1151421903, -1001312602, 1117451139 };
			break;
		case 6:
			func_205(bParam0);
			bParam0->f_5 = 3.906421E-32f;
			bParam0->f_11 = { 1134169754, 1150581207, 1127492786 };
			break;
		case 7:
			func_205(bParam0);
			bParam0->f_5 = -2.006564E+35f;
			bParam0->f_11 = { -992054984, -1016372307, 1127560180 };
			break;
		case 8:
			func_205(bParam0);
			bParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_PLAINS_1");
			bParam0->f_11 = { -996062015, -996972965, 1116777288 };
			break;
		case 9:
			func_205(bParam0);
			bParam0->f_5 = -6.409571f;
			bParam0->f_11 = { -988795329, -993966426, 1125647559 };
			break;
		case 10:
			func_205(bParam0);
			bParam0->f_5 = 1.863479E-14f;
			bParam0->f_11 = { -987084972, -987916189, 1115784641 };
			break;
		case 11:
			func_205(bParam0);
			bParam0->f_5 = 1.021696E+23f;
			bParam0->f_11 = { -980717807, -984844394, 1097381540 };
			break;
		case 12:
			func_205(bParam0);
			bParam0->f_5 = -1.082996E+28f;
			bParam0->f_11 = { -980371346, -987027526, -1052628128 };
			break;
		case 13:
			func_205(bParam0);
			bParam0->f_5 = 1.561827E+30f;
			bParam0->f_11 = { -978226670, -985207032, -1045081746 };
			break;
		case 14:
			func_205(bParam0);
			bParam0->f_5 = -0.02038603f;
			bParam0->f_11 = { -992797751, -988937868, 1110473601 };
			break;
		case 15:
			func_205(bParam0);
			bParam0->f_5 = 8.753591E+18f;
			bParam0->f_11 = { -993346216, 1154188969, 1131149034 };
			break;
		case 16:
			func_205(bParam0);
			bParam0->f_5 = 2.603904E-14f;
			bParam0->f_11 = { 1137847938, 1157405979, 1130787128 };
			break;
		case 17:
			func_205(bParam0);
			bParam0->f_5 = -3.46549E+29f;
			bParam0->f_11 = { -1006543492, 1140802678, 1120695837 };
			break;
		case 18:
			func_205(bParam0);
			bParam0->f_5 = 1.179074E+08f;
			bParam0->f_11 = { 1155396410, 1141414078, 1121272906 };
			break;
		case 19:
			func_205(bParam0);
			bParam0->f_5 = 1.866136E-26f;
			bParam0->f_11 = { 1154059592, -992580426, 1112778641 };
			break;
	}
}

void func_77(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 21;
	bParam0->f_1 = 8;
	bParam0->f_2 = 1;
	func_204(bParam0);
	switch (iParam1)
	{
		case 0:
			func_206(bParam0, 2);
			func_206(bParam0, 3);
			func_206(bParam0, 5);
			bParam0->f_5 = 9.836368E+13f;
			bParam0->f_11 = { 1158463633, 1151850133, 1118379350 };
			break;
		case 1:
			func_206(bParam0, 2);
			func_206(bParam0, 3);
			func_206(bParam0, 5);
			bParam0->f_5 = 543.1066f;
			bParam0->f_11 = { 1158581043, 1154029896, 1118348247 /* Float: 84.32f */ };
			break;
		case 2:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			func_206(bParam0, 2);
			func_206(bParam0, 3);
			func_206(bParam0, 5);
			bParam0->f_5 = 1.269733E-08f;
			bParam0->f_11 = { 1159227851, 1148195910, 1116877134 };
			break;
		case 3:
			func_206(bParam0, 0);
			func_206(bParam0, 2);
			func_206(bParam0, 3);
			func_206(bParam0, 4);
			func_206(bParam0, 5);
			func_206(bParam0, 7);
			bParam0->f_5 = -2.228004E-19f;
			bParam0->f_11 = { 1150112082, 1141895886, 1118655292 };
			break;
		case 4:
			func_206(bParam0, 0);
			func_206(bParam0, 2);
			func_206(bParam0, 3);
			func_206(bParam0, 5);
			func_206(bParam0, 7);
			bParam0->f_5 = -3192329f;
			bParam0->f_11 = { -1002661653, -1010332030, 1109614411 };
			break;
		case 5:
			func_206(bParam0, 0);
			func_206(bParam0, 2);
			func_206(bParam0, 3);
			func_206(bParam0, 5);
			func_206(bParam0, 7);
			bParam0->f_5 = 1.530311E+38f;
			bParam0->f_11 = { -1009953158, -1031815037, 1109596884 };
			break;
		case 6:
			func_206(bParam0, 0);
			func_206(bParam0, 2);
			func_206(bParam0, 4);
			func_206(bParam0, 5);
			func_206(bParam0, 6);
			bParam0->f_5 = 671977.6f;
			bParam0->f_11 = { -989701008, -1021188067, 1129320500 };
			break;
		case 7:
			func_206(bParam0, 0);
			func_206(bParam0, 2);
			func_206(bParam0, 4);
			func_206(bParam0, 5);
			func_206(bParam0, 6);
			bParam0->f_5 = -123672.6f;
			bParam0->f_11 = { -992884296, -1006537328, 1124916724 };
			break;
		case 8:
			func_206(bParam0, 0);
			func_206(bParam0, 2);
			func_206(bParam0, 4);
			func_206(bParam0, 5);
			func_206(bParam0, 6);
			bParam0->f_5 = -5.227074E+13f;
			bParam0->f_11 = { -987492840, -1012276717, 1124978537 };
			break;
		case 9:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			bParam0->f_5 = 3.83512E-24f;
			bParam0->f_11 = { -999840598, -999875151, 1109701978 };
			break;
		case 10:
			func_206(bParam0, 0);
			func_206(bParam0, 2);
			func_206(bParam0, 5);
			func_206(bParam0, 7);
			bParam0->f_5 = -6.19582E+25f;
			bParam0->f_11 = { -1003176727, -992552468, 1109763031 /* Float: 41.41f */ };
			break;
		case 11:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			bParam0->f_5 = -2211.382f;
			bParam0->f_11 = { -997874236, -990907462, 1110008057 };
			break;
		case 12:
			func_206(bParam0, 0);
			func_206(bParam0, 2);
			func_206(bParam0, 3);
			func_206(bParam0, 4);
			func_206(bParam0, 5);
			func_206(bParam0, 6);
			bParam0->f_5 = 5.813065E-27f;
			bParam0->f_11 = { 1154561405, 1152647541, 1125258684 };
			break;
		case 13:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			bParam0->f_5 = -2.743283E+37f;
			bParam0->f_11 = { 1153650150, 1152690073, 1125206209 };
			break;
		case 14:
			func_206(bParam0, 3);
			func_206(bParam0, 4);
			func_206(bParam0, 5);
			func_206(bParam0, 6);
			bParam0->f_5 = 9.295132E-10f;
			bParam0->f_11 = { 1151049129, 1150494730, 1125442231 };
			break;
		case 15:
			func_206(bParam0, 2);
			func_206(bParam0, 3);
			func_206(bParam0, 5);
			func_206(bParam0, 7);
			bParam0->f_5 = -0.0750034f;
			bParam0->f_11 = { 1156634238, -1011536767, 1110045203 };
			break;
		case 16:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			func_206(bParam0, 3);
			func_206(bParam0, 5);
			func_206(bParam0, 7);
			bParam0->f_5 = 0.2697543f;
			bParam0->f_11 = { 1158219730, -1012979473, 1109582991 };
			break;
		case 17:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			func_206(bParam0, 3);
			func_206(bParam0, 5);
			func_206(bParam0, 7);
			bParam0->f_5 = 5.456239E+10f;
			bParam0->f_11 = { 1159104295, -1007338908, 1109635708 };
			break;
		case 18:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			func_206(bParam0, 2);
			func_206(bParam0, 3);
			func_206(bParam0, 5);
			bParam0->f_5 = -1.648444E-05f;
			bParam0->f_11 = { -984958968, -985189821, -1055587094 };
			break;
		case 19:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			bParam0->f_5 = 1.11035E+30f;
			bParam0->f_11 = { -992337834, -986246592, -1052418507 };
			break;
		case 20:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			func_206(bParam0, 2);
			func_206(bParam0, 3);
			func_206(bParam0, 5);
			bParam0->f_5 = 2.464876E+21f;
			bParam0->f_11 = { -992419265, -988502609, 1109731312 };
			break;
	}
}

void func_78(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 11;
	bParam0->f_1 = 1;
	bParam0->f_2 = 2;
	func_204(bParam0);
	bParam0->f_15[0] = -6.738816E-37f;
	switch (iParam1)
	{
		case 0:
			func_205(bParam0);
			bParam0->f_5 = 2.528791E+11f;
			bParam0->f_11 = { -1016809403, 1145965509, 1123457683 };
			break;
		case 1:
			func_205(bParam0);
			bParam0->f_5 = -1.155725E-33f;
			bParam0->f_11 = { 1151292035, -996652760, 1117867160 };
			break;
		case 2:
			func_205(bParam0);
			bParam0->f_5 = 4.112297E-07f;
			bParam0->f_11 = { -999383477, -996775968, 1113200814 };
			break;
		case 3:
			func_205(bParam0);
			bParam0->f_5 = -1.046268E-07f;
			bParam0->f_11 = { -978709429, -986347484, -1115107728 };
			break;
		case 4:
			func_205(bParam0);
			bParam0->f_5 = 2.409888E+18f;
			bParam0->f_11 = { -980764861, -987213526, -1052735701 };
			break;
		case 5:
			func_205(bParam0);
			bParam0->f_5 = -2.574967E+30f;
			bParam0->f_11 = { -984565348, -986491770, -1059165150 };
			break;
		case 6:
			func_205(bParam0);
			bParam0->f_5 = -1.470611E-19f;
			bParam0->f_11 = { 1152287867, -1004483776, 1116534446 };
			break;
		case 7:
			func_205(bParam0);
			bParam0->f_5 = -1.322399E-31f;
			bParam0->f_11 = { 1155070895, -1009556623, 1111263779 };
			break;
		case 8:
			func_205(bParam0);
			bParam0->f_5 = -3.836814E+24f;
			bParam0->f_11 = { 1157058569, -991046472, 1109668318 };
			break;
		case 9:
			func_205(bParam0);
			bParam0->f_5 = -5.760947E+24f;
			bParam0->f_11 = { 1160536058, -997796525, 1110937567 };
			break;
		case 10:
			func_205(bParam0);
			bParam0->f_5 = 1.106632E-33f;
			bParam0->f_11 = { -992197716, -1016202310, 1127610456 };
			break;
	}
}

void func_79(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 15;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_204(bParam0);
	switch (iParam1)
	{
		case 0:
			func_205(bParam0);
			bParam0->f_5 = 3690385f;
			bParam0->f_11 = { 1160614818, 1139258245, 1115848717 };
			break;
		case 1:
			func_205(bParam0);
			bParam0->f_5 = 8.158911E+30f;
			bParam0->f_11 = { 1152555558, -991780903, 1113947856 };
			break;
		case 2:
			func_205(bParam0);
			bParam0->f_5 = 2.669717E-17f;
			bParam0->f_11 = { 1159802443, -1001056348, 1109736240 };
			break;
		case 3:
			func_205(bParam0);
			bParam0->f_5 = -7.255729E-07f;
			bParam0->f_11 = { 1160700391, 1152583160, 1117482104 };
			break;
		case 4:
			func_205(bParam0);
			bParam0->f_5 = 6.041506E+07f;
			bParam0->f_11 = { 1151037068, 1141089509, 1118757017 };
			break;
		case 5:
			func_205(bParam0);
			bParam0->f_5 = -1.38438E-11f;
			bParam0->f_11 = { -1041918727, 1149953882, 1126694549 };
			break;
		case 6:
			func_205(bParam0);
			bParam0->f_5 = 4.212033E-16f;
			bParam0->f_11 = { -1006065924, -1013638573, 1112688063 };
			break;
		case 7:
			func_205(bParam0);
			bParam0->f_5 = 2.536912E+12f;
			bParam0->f_11 = { -995133944, 1136648213, 1120698001 };
			break;
		case 8:
			func_205(bParam0);
			bParam0->f_5 = -2.534091E+12f;
			bParam0->f_11 = { -994262090, -1000541027, 1118925984 };
			break;
		case 9:
			func_205(bParam0);
			bParam0->f_5 = 6.148389E+24f;
			bParam0->f_11 = { -994674669, -990940346, 1112260071 };
			break;
		case 10:
			func_205(bParam0);
			bParam0->f_5 = -7.930857E-27f;
			bParam0->f_11 = { -988127157, -988303389, 1114412365 };
			break;
		case 11:
			func_205(bParam0);
			bParam0->f_5 = 2.27023E-35f;
			bParam0->f_11 = { -985575689, -985274257, -1079057014 };
			break;
		case 12:
			func_205(bParam0);
			bParam0->f_5 = NaNf;
			bParam0->f_11 = { -983148035, -986901517, -1049467415 };
			break;
		case 13:
			func_205(bParam0);
			bParam0->f_5 = -1528.504f;
			bParam0->f_11 = { -980293646, -983061220, 1095283266 };
			break;
		case 14:
			func_205(bParam0);
			bParam0->f_5 = 1.014443E-13f;
			bParam0->f_11 = { -979217442, -986431844, 1075102750 };
			break;
	}
}

void func_80(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 16;
	bParam0->f_1 = 2;
	bParam0->f_2 = 8;
	func_207(bParam0, iParam1);
	switch (iParam1)
	{
		case 0:
			func_206(bParam0, 0);
			bParam0->f_5 = -4.776145E+35f;
			bParam0->f_11 = { 1140422199, 1150609617, 1127448684 };
			break;
		case 1:
			func_206(bParam0, 1);
			bParam0->f_5 = -5.717982E-16f;
			bParam0->f_11 = { 1122352497, 1149842964, 1127348306 };
			break;
		case 2:
			func_206(bParam0, 0);
			bParam0->f_5 = 1.479809E-33f;
			bParam0->f_11 = { 1158544398, -1008974965, 1109608434 };
			break;
		case 3:
			func_206(bParam0, 1);
			bParam0->f_5 = -1.539734E+36f;
			bParam0->f_11 = { 1157239438, -1007056794, 1109661975 };
			break;
		case 4:
			func_206(bParam0, 0);
			bParam0->f_5 = -1.203898E-08f;
			bParam0->f_11 = { 1158659316, -1000302158, 1109667175 };
			break;
		case 5:
			func_206(bParam0, 1);
			bParam0->f_5 = 2.760309E+36f;
			bParam0->f_11 = { 1158943917, -1003981380, 1109751992 };
			break;
		case 6:
			func_206(bParam0, 0);
			bParam0->f_5 = -1.209803E+10f;
			bParam0->f_11 = { 1153395345, 1153784522, 1125345306 };
			break;
		case 7:
			func_206(bParam0, 1);
			bParam0->f_5 = -3.374709E-37f;
			bParam0->f_11 = { 1147949926, 1150210383, 1125350172 };
			break;
		case 8:
			func_206(bParam0, 0);
			bParam0->f_5 = -3201.431f;
			bParam0->f_11 = { -997404924, 1145821314, 1122717347 };
			break;
		case 9:
			func_206(bParam0, 1);
			bParam0->f_5 = 8.817295E-33f;
			bParam0->f_11 = { -989790972, 1147786383, 1125323950 };
			break;
		case 10:
			func_206(bParam0, 0);
			bParam0->f_5 = -1.197698E+14f;
			bParam0->f_11 = { -993610239, -994956749, 1117827845 };
			break;
		case 11:
			func_206(bParam0, 1);
			bParam0->f_5 = -5.118974E+24f;
			bParam0->f_11 = { -1000106720, -991758352, 1115085186 };
			break;
		case 12:
			func_206(bParam0, 0);
			bParam0->f_5 = 6.017953E+25f;
			bParam0->f_11 = { -987225687, -986396153, 1115781541 };
			break;
		case 13:
			func_206(bParam0, 1);
			bParam0->f_5 = -5.803788E-28f;
			bParam0->f_11 = { -986306439, -987762824, 1115073303 };
			break;
		case 14:
			func_206(bParam0, 0);
			bParam0->f_5 = -5.365581E-31f;
			bParam0->f_11 = { -980546023, -983195925, 1099892030 };
			break;
		case 15:
			func_206(bParam0, 1);
			bParam0->f_5 = -3.021498E-30f;
			bParam0->f_11 = { -980187462, -984494082 /* Float: -3357f */, 1091166483 };
			break;
	}
}

void func_81(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 12;
	bParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			func_206(bParam0, 2);
			func_206(bParam0, 9);
			func_206(bParam0, 10);
			func_206(bParam0, 11);
			func_208(bParam0, iParam2);
			bParam0->f_5 = 5.128504E-15f;
			bParam0->f_11 = { 1139431610, 1114658544, 1124498253 };
			break;
		case 1:
			func_206(bParam0, 1);
			func_206(bParam0, 2);
			func_206(bParam0, 8);
			func_206(bParam0, 9);
			func_206(bParam0, 10);
			func_206(bParam0, 11);
			func_208(bParam0, iParam2);
			bParam0->f_5 = 791.1281f;
			bParam0->f_11 = { -1010017488, 1125782274, 1109614988 };
			break;
		case 2:
			func_206(bParam0, 1);
			func_206(bParam0, 2);
			func_206(bParam0, 3);
			func_206(bParam0, 4);
			func_206(bParam0, 5);
			func_206(bParam0, 6);
			func_206(bParam0, 9);
			func_206(bParam0, 10);
			func_206(bParam0, 11);
			func_208(bParam0, iParam2);
			bParam0->f_5 = -0.0004251206f;
			bParam0->f_11 = { -990825227, -995587373, 1121168922 };
			break;
		case 3:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			func_206(bParam0, 2);
			func_206(bParam0, 9);
			func_206(bParam0, 10);
			func_206(bParam0, 11);
			func_208(bParam0, iParam2);
			bParam0->f_5 = -8619264f;
			bParam0->f_11 = { -990216659, -989404632, 1113123743 };
			break;
		case 4:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			func_206(bParam0, 2);
			func_206(bParam0, 9);
			func_206(bParam0, 10);
			func_206(bParam0, 11);
			func_208(bParam0, iParam2);
			bParam0->f_5 = -0.005462102f;
			bParam0->f_11 = { -996210888, 1120072685, 1116540769 };
			break;
		case 5:
			func_206(bParam0, 1);
			func_206(bParam0, 2);
			func_206(bParam0, 3);
			func_206(bParam0, 4);
			func_206(bParam0, 7);
			func_206(bParam0, 8);
			func_206(bParam0, 9);
			func_206(bParam0, 10);
			func_206(bParam0, 11);
			func_208(bParam0, iParam2);
			bParam0->f_5 = -2.245529E+29f;
			bParam0->f_11 = { -988615224, -1011630570, 1125105495 };
			break;
		case 6:
			func_206(bParam0, 1);
			func_206(bParam0, 2);
			func_206(bParam0, 3);
			func_206(bParam0, 6);
			func_206(bParam0, 7);
			func_206(bParam0, 9);
			func_206(bParam0, 10);
			func_206(bParam0, 11);
			func_208(bParam0, iParam2);
			bParam0->f_5 = -4.391075E+18f;
			bParam0->f_11 = { -992405448, 1134109594, 1121469791 };
			break;
		case 7:
			func_206(bParam0, 1);
			func_206(bParam0, 2);
			func_206(bParam0, 4);
			func_206(bParam0, 5);
			func_206(bParam0, 6);
			func_206(bParam0, 9);
			func_206(bParam0, 10);
			func_206(bParam0, 11);
			func_208(bParam0, iParam2);
			bParam0->f_5 = -2.699646E+09f;
			bParam0->f_11 = { -979688450, -984318406, 1090462878 };
			break;
		case 8:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			func_206(bParam0, 2);
			func_206(bParam0, 9);
			func_206(bParam0, 10);
			func_206(bParam0, 11);
			func_208(bParam0, iParam2);
			bParam0->f_5 = -1.638996E+35f;
			bParam0->f_11 = { -989262621, -986861661, 1116341763 };
			break;
		case 9:
			func_206(bParam0, 1);
			func_206(bParam0, 2);
			func_206(bParam0, 5);
			func_206(bParam0, 9);
			func_206(bParam0, 10);
			func_206(bParam0, 11);
			func_208(bParam0, iParam2);
			bParam0->f_5 = 1.589723E-25f;
			bParam0->f_11 = { -980428461, -987179279, -1054740411 };
			break;
	}
}

void func_82(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 21;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_204(bParam0);
	switch (iParam1)
	{
		case 0:
			func_205(bParam0);
			bParam0->f_5 = -5.854213E-18f;
			bParam0->f_11 = { 1152747524, -992746571, 1115811584 };
			break;
		case 1:
			func_205(bParam0);
			bParam0->f_5 = 4.557484E-23f;
			bParam0->f_11 = { 1150382492, -1012793061, 1120024280 };
			break;
		case 2:
			func_205(bParam0);
			bParam0->f_5 = 4.01839E+37f;
			bParam0->f_11 = { 1160225193, 1146526876, 1118555495 };
			break;
		case 3:
			func_205(bParam0);
			bParam0->f_5 = 5.824172E-31f;
			bParam0->f_11 = { 1151593125, 1150549473, 1125619200 };
			break;
		case 4:
			func_205(bParam0);
			bParam0->f_5 = 5.430638E-08f;
			bParam0->f_11 = { 1109653594, 1155703308, 1128104303 };
			break;
		case 5:
			func_205(bParam0);
			bParam0->f_5 = 2.382815E-29f;
			bParam0->f_11 = { 1121706451, 1151354930, 1127238337 };
			break;
		case 6:
			func_205(bParam0);
			bParam0->f_5 = 2.897605E-21f;
			bParam0->f_11 = { -994747520, 1154664578, 1132413098 };
			break;
		case 7:
			func_205(bParam0);
			bParam0->f_5 = -2.927825E+12f;
			bParam0->f_11 = { 1116066881, -1008809581, 1116753124 };
			break;
		case 8:
			func_205(bParam0);
			bParam0->f_5 = 3.772562E+33f;
			bParam0->f_11 = { -992722651, 1136545533, 1121200712 };
			break;
		case 9:
			func_205(bParam0);
			bParam0->f_5 = 1.272773E+27f;
			bParam0->f_11 = { -990114947, -1000118817, 1118426030 };
			break;
		case 10:
			func_205(bParam0);
			bParam0->f_5 = 4.63641E+15f;
			bParam0->f_11 = { -995474709, -996248581, 1118099174 };
			break;
		case 11:
			func_205(bParam0);
			bParam0->f_5 = -0.1827223f;
			bParam0->f_11 = { -988213038, -994689497, 1125430392 };
			break;
		case 12:
			func_205(bParam0);
			bParam0->f_5 = -2.482818E+25f;
			bParam0->f_11 = { -993858852, -990816433, 1112274782 };
			break;
		case 13:
			func_205(bParam0);
			bParam0->f_5 = 2.143608f;
			bParam0->f_11 = { -992178631, -987112374, 1115373995 };
			break;
		case 14:
			func_205(bParam0);
			bParam0->f_5 = 1.36093E+11f;
			bParam0->f_11 = { -989271882, -989231971, 1115740351 };
			break;
		case 15:
			func_205(bParam0);
			bParam0->f_5 = 4.013596E+22f;
			bParam0->f_11 = { -986762200, -985373528, 1086075133 };
			break;
		case 16:
			func_205(bParam0);
			bParam0->f_5 = 2.682644E+25f;
			bParam0->f_11 = { -985238862, -988404666, 1102433228 };
			break;
		case 17:
			func_205(bParam0);
			bParam0->f_5 = 1.035866E+21f;
			bParam0->f_11 = { -981211932, -987225547, 1059637386 };
			break;
		case 18:
			func_205(bParam0);
			bParam0->f_5 = 1.368246E-33f;
			bParam0->f_11 = { -980900620, -984833824, 1101141922 };
			break;
		case 19:
			func_205(bParam0);
			bParam0->f_5 = 1.311447E+15f;
			bParam0->f_11 = { -978679968, -983651352, -1045894686 };
			break;
		case 20:
			func_205(bParam0);
			bParam0->f_5 = 7.540535E-37f;
			bParam0->f_11 = { -977985082, -987389357, -1048217424 };
			break;
	}
}

void func_83(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	func_204(bParam0);
	func_209(bParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_205(bParam0);
			bParam0->f_5 = -2.304212E-21f;
			bParam0->f_11 = { 1148175340, 1136654365, 1121850609 };
			break;
		case 1:
			func_205(bParam0);
			bParam0->f_5 = -2.163551E-07f;
			bParam0->f_11 = { 1152856182, -1001569757, 1112077029 };
			break;
		case 2:
			func_205(bParam0);
			bParam0->f_5 = 8.612687E+30f;
			bParam0->f_11 = { -997766499, -1003605937, 1116542494 };
			break;
		case 3:
			func_205(bParam0);
			bParam0->f_5 = -2.993282E+36f;
			bParam0->f_11 = { -994648458, -990823555, 1111600320 };
			break;
		case 4:
			func_205(bParam0);
			bParam0->f_5 = 1.481728E+24f;
			bParam0->f_11 = { -979639716, -982260342, -1123641291 };
			break;
		case 5:
			func_205(bParam0);
			bParam0->f_5 = 0.01074426f;
			bParam0->f_11 = { -986896496, -986216424, 1115795354 };
			break;
		case 6:
			func_205(bParam0);
			bParam0->f_5 = -6.736074E-18f;
			bParam0->f_11 = { -996723831, -991787701, 1114960149 };
			break;
		case 7:
			func_205(bParam0);
			bParam0->f_5 = 1.163363E-22f;
			bParam0->f_11 = { -992649275, -1005503634, 1125510675 };
			break;
		case 8:
			func_205(bParam0);
			bParam0->f_5 = 1.052811E-10f;
			bParam0->f_11 = { 1145618525, -1005440328, 1117693265 };
			break;
		case 9:
			func_205(bParam0);
			bParam0->f_5 = 1.748911E+21f;
			bParam0->f_11 = { 1155418000, -992449668, 1111562786 };
			break;
	}
}

void func_84(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 12;
	bParam0->f_1 = 4;
	bParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_210(bParam0, iParam2);
			bParam0->f_5 = 1.854114E+09f;
			bParam0->f_11 = { -997137488, 1137085242, 1114766128 };
			break;
		case 1:
			func_210(bParam0, iParam2);
			bParam0->f_5 = -6.807417E-16f;
			bParam0->f_11 = { -996160647, 1133622801, 1117344917 };
			break;
		case 2:
			func_210(bParam0, iParam2);
			bParam0->f_5 = -6.2312E-08f;
			bParam0->f_11 = { -995399437, 1133360297, 1118569942 };
			break;
		case 3:
			func_210(bParam0, iParam2);
			bParam0->f_5 = -3.003877E-37f;
			bParam0->f_11 = { -997476867, 1137399507, 1113422063 };
			break;
		case 4:
			func_210(bParam0, iParam2);
			bParam0->f_5 = 2.880072E-29f;
			bParam0->f_11 = { -996079017, 1125417039, 1116705443 };
			break;
		case 5:
			func_210(bParam0, iParam2);
			bParam0->f_5 = 8.670444E+18f;
			bParam0->f_11 = { -993128883, -1025132724, 1126829287 };
			break;
		case 6:
			func_210(bParam0, iParam2);
			bParam0->f_5 = 1.065102E+27f;
			bParam0->f_11 = { -997775860, -1010137639, 1120012245 };
			break;
		case 7:
			func_210(bParam0, iParam2);
			bParam0->f_5 = 3.879419E+31f;
			bParam0->f_11 = { 1129240415, -1020633724, 1124239173 };
			break;
		case 8:
			func_210(bParam0, iParam2);
			bParam0->f_5 = 8.235938E+25f;
			bParam0->f_11 = { -1004843341, 1127929951, 1109727406 };
			break;
		case 9:
			func_210(bParam0, iParam2);
			bParam0->f_5 = 1.792932E-19f;
			bParam0->f_11 = { 1110541179, 1136795179, 1124193318 };
			break;
		case 10:
			func_210(bParam0, iParam2);
			bParam0->f_5 = 9.895492E+15f;
			bParam0->f_11 = { 1144798960, -1033341947, 1126016477 };
			break;
		case 11:
			func_210(bParam0, iParam2);
			bParam0->f_5 = -2.926217E-34f;
			bParam0->f_11 = { 1145859682, 1141741071, 1122287761 };
			break;
	}
}

void func_85(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 20;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_204(bParam0);
	switch (iParam1)
	{
		case 0:
			func_205(bParam0);
			bParam0->f_5 = -1.916865E+25f;
			bParam0->f_11 = { -989814252, -988032438, 1115557402 };
			break;
		case 1:
			func_205(bParam0);
			bParam0->f_5 = 5.481727E+08f;
			bParam0->f_11 = { -994006196, -988681787, 1110206545 };
			break;
		case 2:
			func_205(bParam0);
			bParam0->f_5 = -70.68216f;
			bParam0->f_11 = { -984086977, -988977810, 1015351744 };
			break;
		case 3:
			func_205(bParam0);
			bParam0->f_5 = 3.920366E+24f;
			bParam0->f_11 = { -983073949, -983522409, 1110753891 };
			break;
		case 4:
			func_205(bParam0);
			bParam0->f_5 = -1.284236E-09f;
			bParam0->f_11 = { -993676893, -993064731, 1117586734 };
			break;
		case 5:
			func_205(bParam0);
			bParam0->f_5 = 6.689618E-31f;
			bParam0->f_11 = { -996505258, -997469797, 1116285923 };
			break;
		case 6:
			func_205(bParam0);
			bParam0->f_5 = 1.261534f;
			bParam0->f_11 = { -996277247, -1002353267, 1119333330 };
			break;
		case 7:
			func_205(bParam0);
			bParam0->f_5 = -4.792435E+22f;
			bParam0->f_11 = { -995044497, -1016449446, 1120302095 };
			break;
		case 8:
			func_205(bParam0);
			bParam0->f_5 = -5.891382E-23f;
			bParam0->f_11 = { -992531234, 1141532263 /* Float: 553.6f */, 1122045003 };
			break;
		case 9:
			func_205(bParam0);
			bParam0->f_5 = 4.285148E+18f;
			bParam0->f_11 = { -1007524280, -1030963963, 1110164746 };
			break;
		case 10:
			func_205(bParam0);
			bParam0->f_5 = -2.152774E+35f;
			bParam0->f_11 = { -1008383298, -1012053816, 1117869252 };
			break;
		case 11:
			func_205(bParam0);
			bParam0->f_5 = -4.120438E+35f;
			bParam0->f_11 = { 1149776553, 1102972358, 1118859600 };
			break;
		case 12:
			func_205(bParam0);
			bParam0->f_5 = 7.080043E-12f;
			bParam0->f_11 = { 1148848228, 1137757089, 1121440001 };
			break;
		case 13:
			func_205(bParam0);
			bParam0->f_5 = 0.0005734964f;
			bParam0->f_11 = { 1144155884, 1102854928, 1125651561 };
			break;
		case 14:
			func_205(bParam0);
			bParam0->f_5 = -2.95344E+10f;
			bParam0->f_11 = { 1115625368, 1149230895, 1128921492 };
			break;
		case 15:
			func_205(bParam0);
			bParam0->f_5 = -8.519349E-14f;
			bParam0->f_11 = { 1136088416, 1152390468, 1127157629 };
			break;
		case 16:
			func_205(bParam0);
			bParam0->f_5 = -6.511829E+17f;
			bParam0->f_11 = { 1155481063, 1153318988, 1125852394 };
			break;
		case 17:
			func_205(bParam0);
			bParam0->f_5 = 7.159146E-31f;
			bParam0->f_11 = { 1151328826, 1150391732, 1125466165 };
			break;
		case 18:
			func_205(bParam0);
			bParam0->f_5 = -0.0003355019f;
			bParam0->f_11 = { 1157867338, 1129291248, 1116823860 };
			break;
		case 19:
			func_205(bParam0);
			bParam0->f_5 = 3518021f;
			bParam0->f_11 = { 1160198343, 1127479094, 1113101642 };
			break;
	}
}

void func_86(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 9;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	func_204(bParam0);
	bParam0->f_10 = 1114636288; /* Float: 60f */
	switch (iParam1)
	{
		case 0:
			func_205(bParam0);
			bParam0->f_5 = 0.0005758301f;
			bParam0->f_11 = { 1153648607, -989860561, 1111318751 };
			break;
		case 1:
			func_205(bParam0);
			bParam0->f_5 = -17030.08f;
			bParam0->f_11 = { 1152155222, -992737288, 1116059878 };
			break;
		case 2:
			func_205(bParam0);
			bParam0->f_5 = -5.323573E+13f;
			bParam0->f_11 = { 1154135704, -993113154, 1113595852 };
			break;
		case 3:
			func_205(bParam0);
			bParam0->f_5 = -9.14138E+21f;
			bParam0->f_11 = { 1153178567, -994590515, 1116652531 };
			break;
		case 4:
			func_205(bParam0);
			bParam0->f_5 = -1.558658E+30f;
			bParam0->f_11 = { 1149720044, -996262068, 1116152319 };
			break;
		case 5:
			func_205(bParam0);
			bParam0->f_5 = 3.547867E+31f;
			bParam0->f_11 = { 1143646282, -998764357, 1112649420 };
			break;
		case 6:
			func_205(bParam0);
			bParam0->f_5 = -5.639034E-38f;
			bParam0->f_11 = { 1144058230, -1000510924, 1111559286 };
			break;
		case 7:
			func_205(bParam0);
			bParam0->f_5 = -2.603637E-21f;
			bParam0->f_11 = { 1146873879, -1006208396, 1118835253 };
			break;
		case 8:
			func_205(bParam0);
			bParam0->f_5 = -6.531104E-13f;
			bParam0->f_11 = { 1149047964, -1010487362, 1119149678 };
			break;
	}
}

void func_87(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 1;
	bParam0->f_1 = 6;
	bParam0->f_2 = 1;
	func_204(bParam0);
	func_209(bParam0, 1);
	func_209(bParam0, 4);
	func_209(bParam0, 8);
	func_209(bParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_205(bParam0);
			bParam0->f_5 = -4.117585E-20f;
			bParam0->f_11 = { func_211(func_126(iParam2)) };
			break;
	}
}

void func_88(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 5;
	bParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_212(bParam0, iParam2);
			bParam0->f_5 = -4.144115E-32f;
			bParam0->f_11 = { -1012024832, 1144600400, 1122560233 };
			break;
		case 1:
			func_212(bParam0, iParam2);
			bParam0->f_5 = 1.159463E-07f;
			bParam0->f_11 = { -1011592405, 1145963032, 1122432036 };
			break;
		case 2:
			func_212(bParam0, iParam2);
			bParam0->f_5 = -1.15123E+13f;
			bParam0->f_11 = { 1161352091, 1141055007, 1110354478 };
			break;
		case 3:
			func_212(bParam0, iParam2);
			bParam0->f_5 = -4.764357E+21f;
			bParam0->f_11 = { 1161428522, 1141263967, 1110028140 };
			break;
		case 4:
			func_212(bParam0, iParam2);
			bParam0->f_5 = 2.851511E-33f;
			bParam0->f_11 = { 1152685125, -995016853, 1117549030 };
			break;
		case 5:
			func_212(bParam0, iParam2);
			bParam0->f_5 = 2.691375E-18f;
			bParam0->f_11 = { 1152271722, -994976941, 1117647735 };
			break;
		case 6:
			func_212(bParam0, iParam2);
			bParam0->f_5 = -8.662306E+07f;
			bParam0->f_11 = { 1161511505, 1151924702, 1110169294 };
			break;
		case 7:
			func_212(bParam0, iParam2);
			bParam0->f_5 = -5.357437E+16f;
			bParam0->f_11 = { 1161182181, 1150942838, 1110331674 };
			break;
		case 8:
			func_212(bParam0, iParam2);
			bParam0->f_5 = -1.278147E+09f;
			bParam0->f_11 = { -1001364507, -993985196, 1114538613 };
			Jump @507; //curOff = 463
			func_212(bParam0, iParam2);
			bParam0->f_5 = -2.465434E+17f;
			bParam0->f_11 = { -998315786, -997302732, 1113690370 };
		}

void func_89(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 1;
	*bParam0 = 12;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_204(bParam0);
	switch (iParam1)
	{
		case 0:
			func_205(bParam0);
			bParam0->f_5 = 2.848424E+38f;
			bParam0->f_11 = { 1158286001, -1011910128, 1109783478 };
			break;
		case 1:
			func_205(bParam0);
			bParam0->f_5 = 4.950299E+31f;
			bParam0->f_11 = { 1155054987, -1003099378, 1109629233 };
			break;
		case 2:
			func_205(bParam0);
			bParam0->f_5 = 2.368803E-22f;
			bParam0->f_11 = { -990018183, 1137892770, 1123441718 };
			break;
		case 3:
			func_205(bParam0);
			bParam0->f_5 = -4.61136E+32f;
			bParam0->f_11 = { 1131335818, 1151032549, 1127862573 };
			break;
		case 4:
			func_205(bParam0);
			bParam0->f_5 = 0.9061007f;
			bParam0->f_11 = { 1143046242, 1151540655, 1128361925 };
			break;
		case 5:
			func_205(bParam0);
			bParam0->f_5 = -1.810033E+29f;
			bParam0->f_11 = { 1138457552, 1146079004, 1125234016 };
			break;
		case 6:
			func_205(bParam0);
			bParam0->f_5 = -0.0002372616f;
			bParam0->f_11 = { -1006079803, 1136971576, 1118700516 };
			break;
		case 7:
			func_205(bParam0);
			bParam0->f_5 = -2.273169E+07f;
			bParam0->f_11 = { 1149130670, 1149553230, 1126102794 };
			break;
		case 8:
			func_205(bParam0);
			bParam0->f_5 = 3.949332E+16f;
			bParam0->f_11 = { 1158357864, -1015502465, 1110060066 };
			break;
		case 9:
			func_205(bParam0);
			bParam0->f_5 = -6.086829E+07f;
			bParam0->f_11 = { 1159753291, -1030868474, 1111840077 };
			break;
		case 10:
			func_205(bParam0);
			bParam0->f_5 = 2.206825E-28f;
			bParam0->f_11 = { 1152229966, -989246687, 1111577251 };
			break;
		case 11:
			func_205(bParam0);
			bParam0->f_5 = 1.03376E-22f;
			bParam0->f_11 = { 1147320836, -998849882, 1113839370 /* Float: 56.96f */ };
			break;
	}
}

void func_90(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 15;
	bParam0->f_1 = 2;
	bParam0->f_2 = 4;
	func_213(bParam0, iParam2);
	switch (iParam1)
	{
		case 0:
			bParam0->f_5 = -8.240641f;
			bParam0->f_11 = { 1160773263, -996614562, 1111104160 };
			break;
		case 1:
			bParam0->f_5 = -2.133177E-08f;
			bParam0->f_11 = { 1159898907, -996093376, 1112344284 };
			break;
		case 2:
			bParam0->f_5 = -3.522412E-21f;
			bParam0->f_11 = { 1160139780, -996781261, 1112612091 };
			break;
		case 3:
			bParam0->f_5 = -9.385189E-33f;
			bParam0->f_11 = { 1160505455, -996751008, 1111589310 };
			break;
		case 4:
			bParam0->f_5 = 6.306923E+32f;
			bParam0->f_11 = { 1159605792, -997217284, 1111754067 };
			break;
		case 5:
			bParam0->f_5 = 1.74872E+24f;
			bParam0->f_11 = { 1160357417, -996531233, 1111797793 };
			break;
		case 6:
			bParam0->f_5 = -7.354034E+10f;
			bParam0->f_11 = { 1160051872, -995023864, 1110802694 };
			break;
		case 7:
			bParam0->f_5 = -204.3683f;
			bParam0->f_11 = { 1160311874, -996925759, 1112241603 };
			break;
		case 8:
			bParam0->f_5 = -3.486445E-08f;
			bParam0->f_11 = { 1160632394, -996158104, 1111078732 };
			break;
		case 9:
			bParam0->f_5 = -7.297855E-22f;
			bParam0->f_11 = { 1159860898, -996741247, 1112620715 };
			break;
		case 10:
			bParam0->f_5 = 353.0674f;
			bParam0->f_11 = { 1160175944, -997513355, 1111897407 };
			break;
		case 11:
			bParam0->f_5 = -6.366626E-31f;
			bParam0->f_11 = { 1159405928, -994625864, 1110753988 };
			break;
		case 12:
			bParam0->f_5 = -0.3776834f;
			bParam0->f_11 = { -1002048438, -995892453, 1110081012 };
			break;
		case 13:
			bParam0->f_5 = -5.704767E+10f;
			bParam0->f_11 = { -1002259038, -996310237, 1110086255 };
			break;
		case 14:
			bParam0->f_5 = 1.236228E-14f;
			bParam0->f_11 = { -1001197103, -996125378, 1110012959 };
			break;
	}
}

void func_91(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 15;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -0.8817953f;
	if (iParam1 < 5)
	{
		bParam0->f_20[0] = 4.27551E+12f;
		bParam0->f_27 = 18;
	}
	else
	{
		bParam0->f_20[0] = -3.665985E+37f;
		bParam0->f_27 = 8;
	}
	func_204(bParam0);
	switch (iParam1)
	{
		case 0:
			func_214(bParam0, iParam1);
			bParam0->f_5 = -5.322689E+14f;
			bParam0->f_11 = { 1158061201, -992888888, 1109541939 };
			break;
		case 1:
			func_214(bParam0, iParam1);
			bParam0->f_5 = -4.244014E+24f;
			bParam0->f_11 = { 1158203738, -993561462, 1109548335 };
			break;
		case 2:
			func_214(bParam0, iParam1);
			bParam0->f_5 = -2.455464E-06f;
			bParam0->f_11 = { 1157752578, -992748284, 1109574183 };
			break;
		case 3:
			func_214(bParam0, iParam1);
			bParam0->f_5 = -8059160f;
			bParam0->f_11 = { 1157705048, -992155204, 1109424420 };
			break;
		case 4:
			func_214(bParam0, iParam1);
			bParam0->f_5 = -1.142636E-18f;
			bParam0->f_11 = { 1157970814, -991349475, 1109415349 };
			break;
		case 5:
			func_214(bParam0, iParam1);
			bParam0->f_5 = 2.602319E-24f;
			bParam0->f_11 = { 1158207949, -1004305669, 1109540943 };
			break;
		case 6:
			func_214(bParam0, iParam1);
			bParam0->f_5 = -1.098314E-10f;
			bParam0->f_11 = { 1158709142, -1006060415, 1109540943 };
			break;
		case 7:
			func_214(bParam0, iParam1);
			bParam0->f_5 = -1.790267f;
			bParam0->f_11 = { 1158301428, -1005197425, 1109540943 };
			break;
		case 8:
			func_214(bParam0, iParam1);
			bParam0->f_5 = -3.506853E+11f;
			bParam0->f_11 = { 1158550900, -1003652067, 1109540943 };
			break;
		case 9:
			func_214(bParam0, iParam1);
			bParam0->f_5 = 8.968142E+11f;
			bParam0->f_11 = { 1158720140, -1005197527, 1109540943 };
			break;
		case 10:
			func_214(bParam0, iParam1);
			bParam0->f_5 = -1.055209E+16f;
			bParam0->f_11 = { 1160600510, -1004983139, 1109559581 };
			break;
		case 11:
			func_214(bParam0, iParam1);
			bParam0->f_5 = -225603.3f;
			bParam0->f_11 = { 1160708629, -1003110233, 1109553735 };
			break;
		case 12:
			func_214(bParam0, iParam1);
			bParam0->f_5 = -2.767887E-05f;
			bParam0->f_11 = { 1160405518, -1004165304, 1109531899 };
			break;
		case 13:
			func_214(bParam0, iParam1);
			bParam0->f_5 = -1.401141E-16f;
			bParam0->f_11 = { 1160340020, -1006263429, 1109554627 };
			break;
		case 14:
			func_214(bParam0, iParam1);
			bParam0->f_5 = -5.535239E+22f;
			bParam0->f_11 = { 1160413896, -1008062097, 1109596412 };
			break;
	}
}

void func_92(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 13;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 8.004635E-22f;
	if (iParam1 > 7)
	{
		bParam0->f_27 = 18;
		bParam0->f_20[0] = 4.27551E+12f;
	}
	else
	{
		bParam0->f_27 = 1;
		bParam0->f_20[0] = 1.124298E+33f;
	}
	switch (iParam1)
	{
		case 0:
			func_215(bParam0, iParam1);
			bParam0->f_5 = -2.038598E+37f;
			bParam0->f_11 = { -992608256 /* Float: -1712f */, 1143013376 /* Float: 644f */, 1123391898 /* Float: 122.8f */ };
			break;
		case 1:
			func_215(bParam0, iParam1);
			bParam0->f_5 = -9.659467E+26f;
			bParam0->f_11 = { -987852390, 1146452378 /* Float: 853.9f */, 1125941248 /* Float: 156.5f */ };
			break;
		case 2:
			func_215(bParam0, iParam1);
			bParam0->f_5 = -8.923116E+15f;
			bParam0->f_11 = { -987960525, 1140968653 /* Float: 519.2f */, 1124859904 /* Float: 140f */ };
			break;
		case 3:
			func_215(bParam0, iParam1);
			bParam0->f_5 = 176098.3f;
			bParam0->f_11 = { -990905958, 1144768102 /* Float: 751.1f */, 1125548032 /* Float: 150.5f */ };
			break;
		case 4:
			func_215(bParam0, iParam1);
			bParam0->f_5 = -9.05571E+28f;
			bParam0->f_11 = { -990057264, 1143319567, 1123007883 };
			break;
		case 5:
			func_215(bParam0, iParam1);
			bParam0->f_5 = -1.786527E-35f;
			bParam0->f_11 = { -988268782, 1146028892, 1124790790 };
			break;
		case 6:
			func_215(bParam0, iParam1);
			bParam0->f_5 = -4.511086E-25f;
			bParam0->f_11 = { -988056648, 1137647573, 1125402359 };
			break;
		case 7:
			func_215(bParam0, iParam1);
			bParam0->f_5 = -5.512158E-19f;
			bParam0->f_11 = { -987680690, 1135288051, 1125486979 };
			break;
		case 8:
			func_215(bParam0, iParam1);
			bParam0->f_5 = -0.001709003f;
			bParam0->f_11 = { -995344834, 1132765728, 1117548970 };
			break;
		case 9:
			func_215(bParam0, iParam1);
			bParam0->f_5 = -5.630045E+34f;
			bParam0->f_11 = { -996727087, 1126975655, 1109523798 };
			break;
		case 10:
			func_215(bParam0, iParam1);
			bParam0->f_5 = 1.106593E-18f;
			bParam0->f_11 = { -997693950, -1038792419, 1109531191 };
			break;
		case 11:
			func_215(bParam0, iParam1);
			bParam0->f_5 = -4.837103E+08f;
			bParam0->f_11 = { -1000809505, 1141231781, 1114093833 };
			break;
		case 12:
			func_215(bParam0, iParam1);
			bParam0->f_5 = -2.169674E-36f;
			bParam0->f_11 = { -1002040451, 1143064686, 1118902642 };
			break;
	}
}

void func_93(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 1.825672E+26f;
	if (iParam1 < 5)
	{
		bParam0->f_20[0] = -7.232669E-38f;
		bParam0->f_20[1] = -3.665985E+37f;
		bParam0->f_27 = 0;
	}
	else
	{
		bParam0->f_20[0] = -7.232669E-38f;
		bParam0->f_20[1] = -3.665985E+37f;
		bParam0->f_27 = 18;
	}
	func_204(bParam0);
	switch (iParam1)
	{
		case 0:
			func_206(bParam0, 2);
			func_206(bParam0, 3);
			bParam0->f_5 = -8.612918E+14f;
			bParam0->f_11 = { -988725982, -1008850803, 1125072214 };
			break;
		case 1:
			func_206(bParam0, 2);
			func_206(bParam0, 3);
			bParam0->f_5 = -274406f;
			bParam0->f_11 = { -988464002, -1012496948, 1125049277 };
			break;
		case 2:
			func_206(bParam0, 2);
			func_206(bParam0, 3);
			bParam0->f_5 = NaNf;
			bParam0->f_11 = { -987502590, -1012179590, 1124960272 };
			break;
		case 3:
			func_206(bParam0, 2);
			func_206(bParam0, 3);
			bParam0->f_5 = -5.418765E-15f;
			bParam0->f_11 = { -986938083, -1029981707, 1125637043 };
			break;
		case 4:
			func_206(bParam0, 2);
			func_206(bParam0, 3);
			bParam0->f_5 = -4.266224E-27f;
			bParam0->f_11 = { -988930966, -1007885147, 1124752530 };
			break;
		case 5:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			bParam0->f_5 = -980838.1f;
			bParam0->f_11 = { 1159267230, 1141537636, 1115958804 /* Float: 66.09f */ };
			break;
		case 6:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			bParam0->f_5 = 9.562718E+30f;
			bParam0->f_11 = { 1158487625, 1132486158, 1110351780 };
			break;
		case 7:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			bParam0->f_5 = 2.717809E+31f;
			bParam0->f_11 = { 1158761782, 1147136169, 1116686923 };
			break;
		case 8:
			func_206(bParam0, 1);
			bParam0->f_5 = -9.354164E+14f;
			bParam0->f_11 = { 1159003386, 1149732085, 1118559705 };
			break;
		case 9:
			func_206(bParam0, 1);
			bParam0->f_5 = 3.485359E-26f;
			bParam0->f_11 = { 1159063676, 1145135174, 1116079378 };
			break;
	}
}

void func_94(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 3.134018E-27f;
	func_204(bParam0);
	if (iParam1 > 4)
	{
		bParam0->f_20[0] = 1.124298E+33f;
		bParam0->f_27 = 18;
	}
	else
	{
		bParam0->f_20[0] = 4.27551E+12f;
		bParam0->f_27 = 9;
	}
	switch (iParam1)
	{
		case 0:
			func_206(bParam0, 0);
			bParam0->f_5 = -120.0375f;
			bParam0->f_11 = { -991423617, 1155620198, 1131040276 };
			break;
		case 1:
			func_206(bParam0, 0);
			bParam0->f_5 = -2.660786E+15f;
			bParam0->f_11 = { -991714079, 1153682243, 1131138698 };
			break;
		case 2:
			func_206(bParam0, 0);
			bParam0->f_5 = 1.184275E-30f;
			bParam0->f_11 = { -989767363, 1155701240, 1131810272 };
			break;
		case 3:
			func_206(bParam0, 0);
			bParam0->f_5 = -2.187653E+19f;
			bParam0->f_11 = { -990805961, 1158058868, 1134648430 };
			break;
		case 4:
			func_206(bParam0, 0);
			bParam0->f_5 = 7.970961E-07f;
			bParam0->f_11 = { -992277732, 1156836304, 1132740906 };
			break;
		case 5:
			func_206(bParam0, 1);
			bParam0->f_5 = 3.86703E+21f;
			bParam0->f_11 = { 1148176957, 1142602926, 1120107626 };
			break;
		case 6:
			func_206(bParam0, 1);
			bParam0->f_5 = 9.622145E+12f;
			bParam0->f_11 = { 1148782335, 1140850721, 1120049798 };
			break;
		case 7:
			func_206(bParam0, 1);
			bParam0->f_5 = -7.549088E+09f;
			bParam0->f_11 = { 1150806073, 1141598568, 1118713020 };
			break;
		case 8:
			func_206(bParam0, 1);
			bParam0->f_5 = -14.39795f;
			bParam0->f_11 = { 1151102691, 1135372616, 1119368577 };
			break;
		case 9:
			func_206(bParam0, 1);
			bParam0->f_5 = -2.34765E-12f;
			bParam0->f_11 = { 1147420824, 1122179167, 1122539930 /* Float: 116.3f */ };
			break;
	}
}

void func_95(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 11;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -3.239727E-28f;
	func_204(bParam0);
	if (iParam1 > 5)
	{
		bParam0->f_20[0] = -3.665985E+37f;
		bParam0->f_27 = 9;
	}
	else
	{
		bParam0->f_20[0] = 1.124298E+33f;
		bParam0->f_27 = 18;
	}
	switch (iParam1)
	{
		case 0:
			func_206(bParam0, 0);
			bParam0->f_5 = -2.380014E-24f;
			bParam0->f_11 = { -995552140, -987798002, 1117123733 };
			break;
		case 1:
			func_206(bParam0, 0);
			bParam0->f_5 = -1.78623E+10f;
			bParam0->f_11 = { -990956493, -989177591, 1109931275 };
			break;
		case 2:
			func_206(bParam0, 0);
			bParam0->f_5 = 4.690053E-36f;
			bParam0->f_11 = { -992330680, -988459800, 1110132785 };
			break;
		case 3:
			func_206(bParam0, 1);
			bParam0->f_5 = 1.948744E+32f;
			bParam0->f_11 = { -993582233, -988610888, 1110185843 };
			break;
		case 4:
			func_206(bParam0, 1);
			bParam0->f_5 = 8.647611E+23f;
			bParam0->f_11 = { -991882023, -993157580, 1119974693 };
			break;
		case 5:
			func_206(bParam0, 1);
			bParam0->f_5 = -6.423808E-24f;
			bParam0->f_11 = { -993294617, -990711368, 1112058652 };
			break;
		case 6:
			func_206(bParam0, 2);
			bParam0->f_5 = -1.791026E-06f;
			bParam0->f_11 = { 1159248741, -1046889733, 1110236227 };
			break;
		case 7:
			func_206(bParam0, 2);
			bParam0->f_5 = 7.396245E+34f;
			bParam0->f_11 = { 1160363664, -1023361339, 1109921550 };
			break;
		case 8:
			func_206(bParam0, 2);
			bParam0->f_5 = 7.494099E-32f;
			bParam0->f_11 = { 1158921326, 1095914802, 1109741326 };
			break;
		case 9:
			func_206(bParam0, 2);
			bParam0->f_5 = 1.342886E+08f;
			bParam0->f_11 = { 1158886759, -1015588513, 1109801723 };
			break;
		case 10:
			func_206(bParam0, 2);
			bParam0->f_5 = 1.503919E+19f;
			bParam0->f_11 = { 1159894572, -1017870706, 1110384627 };
			break;
	}
}

void func_96(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 20;
	bParam0->f_1 = 4;
	bParam0->f_2 = 2;
	bParam0->f_28[0] = 1.777506E-22f;
	switch (iParam1)
	{
		case 0:
			func_216(bParam0, iParam1);
			bParam0->f_5 = 0.0009226644f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977418783, -983523996, -1064595096 };
			break;
		case 1:
			func_216(bParam0, iParam1);
			bParam0->f_5 = 400348.8f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977155092, -983077929, -1064761630 };
			break;
		case 2:
			func_216(bParam0, iParam1);
			bParam0->f_5 = 1.816392E+09f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978445599, -982307471, -1040579926 };
			break;
		case 3:
			func_216(bParam0, iParam1);
			bParam0->f_5 = 2.952954E+17f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977323950, -982706913, -1039934161 };
			break;
		case 4:
			func_216(bParam0, iParam1);
			bParam0->f_5 = 3.670386E+30f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977549271, -982846915, -1043804979 /* Float: -25.1f */ };
			break;
		case 5:
			func_216(bParam0, iParam1);
			bParam0->f_5 = -8.686904E-11f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977780292, -982630996, -1040579874 };
			break;
		case 6:
			func_216(bParam0, iParam1);
			bParam0->f_5 = 2.642126E-14f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -976830080, -984312220, -1049936318 };
			break;
		case 7:
			func_216(bParam0, iParam1);
			bParam0->f_5 = -1.378686E-16f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977072919, -984193168, 1069253919 /* Float: 1.465f */ };
			break;
		case 8:
			func_216(bParam0, iParam1);
			bParam0->f_5 = -1.230984E-26f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977380271, -984323986, 1099912027 };
			break;
		case 9:
			func_216(bParam0, iParam1);
			bParam0->f_5 = -6.553197E-35f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977456769, -983523121, -1063541906 };
			break;
		case 10:
			func_216(bParam0, iParam1);
			bParam0->f_5 = 8.637232E-13f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978366554, -982756861, -1044300772 };
			break;
		case 11:
			func_216(bParam0, iParam1);
			bParam0->f_5 = 1.752292E-11f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978254555, -983655521, -1044299645 };
			break;
		case 12:
			func_216(bParam0, iParam1);
			bParam0->f_5 = 1.670123f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977954760, -982722422, -1042385260 };
			break;
		case 13:
			func_216(bParam0, iParam1);
			bParam0->f_5 = -0.602618f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977759215, -983824648, -1044300169 };
			break;
		case 14:
			func_216(bParam0, iParam1);
			bParam0->f_5 = -1.833368E+12f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978071834, -984716182, -1044299435 };
			break;
		case 15:
			func_216(bParam0, iParam1);
			bParam0->f_5 = 3.26606E+37f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -999665125, -991067580, 1112228039 };
			break;
		case 16:
			func_216(bParam0, iParam1);
			bParam0->f_5 = -5.374648E+10f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { -997944773, -992452114, 1117191947 };
			break;
		case 17:
			func_216(bParam0, iParam1);
			bParam0->f_5 = -1.878287E+19f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -998009571, -992010712, 1115281487 };
			break;
		case 18:
			func_216(bParam0, iParam1);
			bParam0->f_5 = 2.573031E-25f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { -999292823, -993021026, 1116192584 };
			break;
		case 19:
			func_216(bParam0, iParam1);
			bParam0->f_5 = -1772.994f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -995724411, -991128144, 1114745707 };
			break;
	}
}

void func_97(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 15;
	bParam0->f_1 = 5;
	bParam0->f_2 = 2;
	bParam0->f_28[0] = 4.242694E-36f;
	switch (iParam1)
	{
		case 0:
			func_217(bParam0, iParam1);
			bParam0->f_5 = 3.918093E+24f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1153029020, -989478362, 1111263331 };
			break;
		case 1:
			func_217(bParam0, iParam1);
			bParam0->f_5 = -1.092243E-15f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1152320247, -989371098, 1111316916 };
			break;
		case 2:
			func_217(bParam0, iParam1);
			bParam0->f_5 = 1.756841E+34f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1150925192, -989638649, 1113899821 };
			break;
		case 3:
			func_217(bParam0, iParam1);
			bParam0->f_5 = 0.01141832f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1149342358, -989449118, 1110418915 };
			break;
		case 4:
			func_217(bParam0, iParam1);
			bParam0->f_5 = 2.219954E+08f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1150606075, -989156405, 1113924200 };
			break;
		case 5:
			func_217(bParam0, iParam1);
			bParam0->f_5 = 0.0009091725f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1158499475, -1011192224, 1109620320 };
			break;
		case 6:
			func_217(bParam0, iParam1);
			bParam0->f_5 = 7.177287E+13f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1154223442, -1004918764, 1110145185 };
			break;
		case 7:
			func_217(bParam0, iParam1);
			bParam0->f_5 = -2.752983E-12f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157954043, -1000154145, 1109563592 };
			break;
		case 8:
			func_217(bParam0, iParam1);
			bParam0->f_5 = -0.0005524897f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157428810, -998356438, 1110022501 };
			break;
		case 9:
			func_217(bParam0, iParam1);
			bParam0->f_5 = NaNf;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157816127, -1002908413, 1109728847 };
			break;
		case 10:
			func_217(bParam0, iParam1);
			bParam0->f_5 = 25235.61f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1158183074, -1017816200, 1110843877 };
			break;
		case 11:
			func_217(bParam0, iParam1);
			bParam0->f_5 = 9.829717E-32f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { 1158191810, -1037171163, 1112596493 };
			break;
		case 12:
			func_217(bParam0, iParam1);
			bParam0->f_5 = 1.242477E-37f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1159264072, -1034149534, 1110360116 };
			break;
		case 13:
			func_217(bParam0, iParam1);
			bParam0->f_5 = -1.672978E-23f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { 1155861872, -1013011186, 1110889726 };
			break;
		case 14:
			func_217(bParam0, iParam1);
			bParam0->f_5 = -3.673748E-34f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1156223241, -1008548397, 1110250488 };
			break;
	}
}

void func_98(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 6;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 6.995461E-38f;
	func_204(bParam0);
	if (iParam1 < 5)
	{
		bParam0->f_20[0] = 1.124298E+33f;
		bParam0->f_20[1] = -7.232669E-38f;
		bParam0->f_27 = 0;
	}
	else
	{
		bParam0->f_20[0] = 1.124298E+33f;
		bParam0->f_20[1] = -3.665985E+37f;
		bParam0->f_27 = 9;
	}
	switch (iParam1)
	{
		case 0:
			func_206(bParam0, 3);
			func_206(bParam0, 4);
			func_206(bParam0, 5);
			bParam0->f_5 = -4.286879E+09f;
			bParam0->f_11 = { -987243245, -987194041, 1116719088 };
			break;
		case 1:
			func_206(bParam0, 3);
			func_206(bParam0, 4);
			func_206(bParam0, 5);
			bParam0->f_5 = -1899.75f;
			bParam0->f_11 = { -986605684, -986590464, 1118613838 };
			break;
		case 2:
			func_206(bParam0, 3);
			func_206(bParam0, 4);
			func_206(bParam0, 5);
			bParam0->f_5 = 3.146079E+11f;
			bParam0->f_11 = { -985776553, -989418570, 1114616784 };
			break;
		case 3:
			func_206(bParam0, 3);
			func_206(bParam0, 4);
			func_206(bParam0, 5);
			bParam0->f_5 = 6.593053E+11f;
			bParam0->f_11 = { -987375265, -989464530, 1117252747 };
			break;
		case 4:
			func_206(bParam0, 3);
			func_206(bParam0, 4);
			func_206(bParam0, 5);
			bParam0->f_5 = -1.312522E-18f;
			bParam0->f_11 = { -985019226, -988272544, 1104503741 };
			break;
		case 5:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			func_206(bParam0, 2);
			bParam0->f_5 = 2.867698E+08f;
			bParam0->f_11 = { -996986113, -1002752333, 1116184379 };
			break;
		case 6:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			func_206(bParam0, 2);
			bParam0->f_5 = -6.92375E-06f;
			bParam0->f_11 = { -992414219, -1004726909, 1125195750 };
			break;
		case 7:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			func_206(bParam0, 2);
			bParam0->f_5 = -3.40923E+18f;
			bParam0->f_11 = { -993747441, -1012637008, 1126210594 };
			break;
		case 8:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			func_206(bParam0, 2);
			bParam0->f_5 = 1.232282E+31f;
			bParam0->f_11 = { -994642775, -1007637411, 1124203803 };
			break;
		case 9:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			func_206(bParam0, 2);
			bParam0->f_5 = 2.032195E-23f;
			bParam0->f_11 = { -994132108, -1000009956, 1118852848 };
			break;
	}
}

void func_99(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 20;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -1.631132E+22f;
	if (iParam1 < 10)
	{
		bParam0->f_20[0] = -7.232669E-38f;
		bParam0->f_20[1] = -3.665985E+37f;
		bParam0->f_27 = 57;
	}
	else
	{
		bParam0->f_20[0] = -7.232669E-38f;
		bParam0->f_20[1] = -3.665985E+37f;
		bParam0->f_27 = 57;
	}
	switch (iParam1)
	{
		case 0:
			func_218(bParam0, iParam1);
			bParam0->f_5 = 3.646808E-23f;
			bParam0->f_11 = { 1150683855, -1005713036, 1116128910 };
			break;
		case 1:
			func_218(bParam0, iParam1);
			bParam0->f_5 = -7.877037E+07f;
			bParam0->f_11 = { 1150993217, -1006063437, 1116018901 };
			break;
		case 2:
			func_218(bParam0, iParam1);
			bParam0->f_5 = -1.005039E-10f;
			bParam0->f_11 = { 1151451230, -1004746306, 1114369085 };
			break;
		case 3:
			func_218(bParam0, iParam1);
			bParam0->f_5 = -1.785908E+20f;
			bParam0->f_11 = { 1151746969, -1003404036, 1115786943 };
			break;
		case 4:
			func_218(bParam0, iParam1);
			bParam0->f_5 = 3.983027E+21f;
			bParam0->f_11 = { 1150468175, -1006492490, 1116347446 };
			break;
		case 5:
			func_218(bParam0, iParam1);
			bParam0->f_5 = 9.595287E-17f;
			bParam0->f_11 = { 1142739862, -998127987, 1109931092 };
			break;
		case 6:
			func_218(bParam0, iParam1);
			bParam0->f_5 = 4.824729E-06f;
			bParam0->f_11 = { 1143530648, -997446161, 1112212583 };
			break;
		case 7:
			func_218(bParam0, iParam1);
			bParam0->f_5 = -2.555951E-17f;
			bParam0->f_11 = { 1145558704, -996876822, 1110177926 };
			break;
		case 8:
			func_218(bParam0, iParam1);
			bParam0->f_5 = -1.385647E-16f;
			bParam0->f_11 = { 1144808753, -998900395, 1111449194 };
			break;
		case 9:
			func_218(bParam0, iParam1);
			bParam0->f_5 = 5765001;
			bParam0->f_11 = { 1144681982, -997458662, 1113462643 };
			break;
		case 10:
			func_218(bParam0, iParam1);
			bParam0->f_5 = -3.727919E+33f;
			bParam0->f_11 = { -999235848, 1158407363, 1135288923 };
			break;
		case 11:
			func_218(bParam0, iParam1);
			bParam0->f_5 = 2.834275E-37f;
			bParam0->f_11 = { -997616521, 1157762749, 1136059217 };
			break;
		case 12:
			func_218(bParam0, iParam1);
			bParam0->f_5 = -2.125516E+37f;
			bParam0->f_11 = { -996725295, 1159158302, 1134227512 };
			break;
		case 13:
			func_218(bParam0, iParam1);
			bParam0->f_5 = -6.073288E+28f;
			bParam0->f_11 = { -996139521, 1159254566, 1134068335 };
			break;
		case 14:
			func_218(bParam0, iParam1);
			bParam0->f_5 = -9.716002E+15f;
			bParam0->f_11 = { -995651811, 1158654911, 1134189992 };
			break;
		case 15:
			func_218(bParam0, iParam1);
			bParam0->f_5 = -2.14266E-06f;
			bParam0->f_11 = { -997133115, 1158828474, 1134675008 };
			break;
		case 16:
			func_218(bParam0, iParam1);
			bParam0->f_5 = -5.611622E-15f;
			bParam0->f_11 = { -995741939, 1158524377, 1134203093 };
			break;
		case 17:
			func_218(bParam0, iParam1);
			bParam0->f_5 = -8.89924E-28f;
			bParam0->f_11 = { -996781341, 1158214044, 1135003058 };
			break;
		case 18:
			func_218(bParam0, iParam1);
			bParam0->f_5 = -2.426253E-36f;
			bParam0->f_11 = { -997034512, 1158656755, 1134669408 };
			break;
		case 19:
			func_218(bParam0, iParam1);
			bParam0->f_5 = 2.138536f;
			bParam0->f_11 = { -995210082, 1159048551, 1134176138 };
			break;
	}
}

void func_100(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -1.451719E-37f;
	func_204(bParam0);
	if (iParam1 < 5)
	{
		bParam0->f_20[0] = 4.27551E+12f;
		bParam0->f_27 = 18;
	}
	else
	{
		bParam0->f_20[0] = 1.124298E+33f;
		bParam0->f_27 = 0;
	}
	switch (iParam1)
	{
		case 0:
			func_206(bParam0, 2);
			func_206(bParam0, 3);
			bParam0->f_5 = 1.556235f;
			bParam0->f_11 = { 1161021582, 1158174346, 1125959447 };
			break;
		case 1:
			func_206(bParam0, 2);
			func_206(bParam0, 3);
			bParam0->f_5 = -3.54697E+20f;
			bParam0->f_11 = { 1160742329, 1158620392, 1125895471 };
			break;
		case 2:
			func_206(bParam0, 2);
			func_206(bParam0, 3);
			bParam0->f_5 = -7.010831E+29f;
			bParam0->f_11 = { 1158759424, 1158020974, 1129532155 };
			break;
		case 3:
			func_206(bParam0, 2);
			func_206(bParam0, 3);
			bParam0->f_5 = 0.5552369f;
			bParam0->f_11 = { 1161021582, 1158174346, 1125959447 };
			break;
		case 4:
			func_206(bParam0, 2);
			func_206(bParam0, 3);
			bParam0->f_5 = 5.641576E-08f;
			bParam0->f_11 = { 1159436980, 1158518524, 1127193084 };
			break;
		case 5:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			bParam0->f_5 = -0.2321862f;
			bParam0->f_11 = { -999341769, 1153549610, 1131245824 };
			break;
		case 6:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			bParam0->f_5 = -1.205842E+25f;
			bParam0->f_11 = { -998248058, 1153643433, 1131245044 };
			break;
		case 7:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			bParam0->f_5 = -3.072352E+30f;
			bParam0->f_11 = { -998853848, 1154255222, 1131245044 };
			break;
		case 8:
			func_206(bParam0, 1);
			bParam0->f_5 = -1.409052E+17f;
			bParam0->f_11 = { -1000688253, 1153133963, 1131787328 };
			break;
		case 9:
			func_206(bParam0, 1);
			bParam0->f_5 = 5.022592E+20f;
			bParam0->f_11 = { -999960935, 1152995163, 1131748019 };
			break;
	}
}

void func_101(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 25;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -4.400322E+15f;
	if (iParam1 < 10)
	{
		bParam0->f_20[0] = -7.232669E-38f;
		bParam0->f_20[1] = 4.27551E+12f;
		bParam0->f_27 = 18;
	}
	else
	{
		bParam0->f_20[0] = 4.27551E+12f;
		bParam0->f_27 = 57;
	}
	switch (iParam1)
	{
		case 0:
			func_219(bParam0, iParam1);
			bParam0->f_5 = -6.309624E-30f;
			bParam0->f_11 = { 1154364192, 1151788160, 1125180460 };
			break;
		case 1:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 7.606064E+25f;
			bParam0->f_11 = { 1154869233, 1152846377, 1125278476 };
			break;
		case 2:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 2.218614E+17f;
			bParam0->f_11 = { 1153706225, 1152094345, 1125190297 };
			break;
		case 3:
			func_219(bParam0, iParam1);
			bParam0->f_5 = -1.157902E+13f;
			bParam0->f_11 = { 1152541464, 1154788643, 1128653927 };
			break;
		case 4:
			func_219(bParam0, iParam1);
			bParam0->f_5 = -2.208555E-05f;
			bParam0->f_11 = { 1153908388, 1154337653, 1125090682 };
			break;
		case 5:
			func_219(bParam0, iParam1);
			bParam0->f_5 = -6.017928E-08f;
			bParam0->f_11 = { 1154735909, 1155106681, 1128038151 };
			break;
		case 6:
			func_219(bParam0, iParam1);
			bParam0->f_5 = -1.237041E-16f;
			bParam0->f_11 = { 1153040328, 1149590831, 1127637621 };
			break;
		case 7:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 5.533065E-30f;
			bParam0->f_11 = { 1152335237, 1151709616, 1126430749 };
			break;
		case 8:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 9885199;
			bParam0->f_11 = { 1155699398, 1150631311, 1129836629 };
			break;
		case 9:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 9.559201E+09f;
			bParam0->f_11 = { 1156747148, 1152229918, 1127341831 };
			break;
		case 10:
			func_219(bParam0, iParam1);
			bParam0->f_5 = -4.436288E-35f;
			bParam0->f_11 = { 1124022813, 1155799348, 1128746117 };
			break;
		case 11:
			func_219(bParam0, iParam1);
			bParam0->f_5 = -1.112515E-34f;
			bParam0->f_11 = { 1126222909, 1155178095, 1128302759 };
			break;
		case 12:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 8.374794E+15f;
			bParam0->f_11 = { 1124085524, 1156180820, 1128849369 };
			break;
		case 13:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 1.249266E+27f;
			bParam0->f_11 = { 1127834989, 1155794550, 1128809025 };
			break;
		case 14:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 4.025592E+09f;
			bParam0->f_11 = { 1128547897, 1155183043, 1128488488 };
			break;
		case 15:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 1.084824E-19f;
			bParam0->f_11 = { 1131359109, 1156530293, 1129108052 };
			break;
		case 16:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 2.098147E-10f;
			bParam0->f_11 = { 1140864727, 1156629084, 1128739524 };
			break;
		case 17:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 3.394846E-38f;
			bParam0->f_11 = { 1134731044, 1156432553, 1128796586 };
			break;
		case 18:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 1.905542E-27f;
			bParam0->f_11 = { 1135884150, 1155955537, 1127818507 };
			break;
		case 19:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 346.6985f;
			bParam0->f_11 = { 1140660978, 1156284065, 1128919446 };
			break;
		case 20:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 5.304888E+32f;
			bParam0->f_11 = { 1132321512, 1154821639, 1127963630 };
			break;
		case 21:
			func_219(bParam0, iParam1);
			bParam0->f_5 = -1.086162E-34f;
			bParam0->f_11 = { 1134575491, 1155073307, 1128286637 };
			break;
		case 22:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 8.374264E+35f;
			bParam0->f_11 = { -1041303234, 1154911538, 1127437946 };
			break;
		case 23:
			func_219(bParam0, iParam1);
			bParam0->f_5 = -1.348186E-11f;
			bParam0->f_11 = { -1046114730, 1154224028, 1126303511 };
			break;
		case 24:
			func_219(bParam0, iParam1);
			bParam0->f_5 = -2.126682E-19f;
			bParam0->f_11 = { 1139806290, 1157718932, 1131095196 };
			break;
	}
}

void func_102(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;

	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 3;
	bParam0->f_2 = 2;
	bParam0->f_7 = 2;
	bParam0->f_28[0] = -6.410587E+31f;
	bVar0 = iParam1 >= 5;
	if (!bVar0)
	{
		bParam0->f_20[0] = 1.124298E+33f;
		bParam0->f_27 = 1;
	}
	else
	{
		bParam0->f_20[0] = -3.665985E+37f;
		bParam0->f_27 = 1;
	}
	func_220(bParam0, iParam1, iParam2);
	switch (iParam1)
	{
		case 0:
			bParam0->f_5 = -8.485796E-24f;
			bParam0->f_11 = { 1132641849, -1005864187, 1114940268 };
			break;
		case 1:
			bParam0->f_5 = -2.34139E-33f;
			bParam0->f_11 = { 1139713409, -1014549655, 1125059997 };
			break;
		case 2:
			bParam0->f_5 = 7.108457E+35f;
			bParam0->f_11 = { 1127372406, -1019166966, 1123884849 };
			break;
		case 3:
			bParam0->f_5 = 9.424543E+32f;
			bParam0->f_11 = { -1022746812, -1045739062, 1119759685 };
			break;
		case 4:
			bParam0->f_5 = 2.14284E+19f;
			bParam0->f_11 = { 1145380361, -1011643053, 1118834350 };
			break;
		case 5:
			bParam0->f_5 = 7.742558E+18f;
			bParam0->f_11 = { -989618530, -993044008, 1124809462 };
			break;
		case 6:
			bParam0->f_5 = 2.403053E+11f;
			bParam0->f_11 = { -988729976, -993469028, 1125354812 };
			break;
		case 7:
			bParam0->f_5 = -4.366903E-09f;
			bParam0->f_11 = { -988712577, -995155559, 1125018469 };
			break;
		case 8:
			bParam0->f_5 = 9.101715E-25f;
			bParam0->f_11 = { -990212108, -995766511, 1122424082 };
			break;
		case 9:
			bParam0->f_5 = 9.554399E-36f;
			bParam0->f_11 = { -987869409, -995083456, 1125213686 };
			break;
	}
}

void func_103(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 3;
	bParam0->f_2 = 2;
	bParam0->f_7 = 2;
	bParam0->f_28[0] = 0.0004024806f;
	if (iParam1 < 5)
	{
		bParam0->f_20[0] = -3.665985E+37f;
		bParam0->f_20[1] = 1.124298E+33f;
		bParam0->f_27 = 57;
	}
	else
	{
		bParam0->f_20[0] = 1.124298E+33f;
		bParam0->f_20[1] = -7.232669E-38f;
		bParam0->f_27 = 57;
	}
	func_221(bParam0, iParam1, iParam2);
	switch (iParam1)
	{
		case 0:
			bParam0->f_5 = -1.847485E+37f;
			bParam0->f_11 = { -979847736, -983254584, 1102849880 };
			break;
		case 1:
			bParam0->f_5 = -2.051303E-29f;
			bParam0->f_11 = { -983064392, -983656830, 1111283728 };
			break;
		case 2:
			bParam0->f_5 = -8.891987E-14f;
			bParam0->f_11 = { -981869006, -982910158, 1109234549 };
			break;
		case 3:
			bParam0->f_5 = -0.002836091f;
			bParam0->f_11 = { -980572006, -982838118, 1096614098 };
			break;
		case 4:
			bParam0->f_5 = 1.590995E-26f;
			bParam0->f_11 = { -981324875, -983440745, 1111891876 };
			break;
		case 5:
			bParam0->f_5 = -1.540604E-29f;
			bParam0->f_11 = { 1154057929, 1157898625, 1134404600 };
			break;
		case 6:
			bParam0->f_5 = 6.382076E+10f;
			bParam0->f_11 = { 1156246072, 1157637798, 1132918646 };
			break;
		case 7:
			bParam0->f_5 = 1.774902E+24f;
			bParam0->f_11 = { 1153322754, 1158221229, 1135011758 };
			break;
		case 8:
			bParam0->f_5 = -8.16591E+23f;
			bParam0->f_11 = { 1143828549, 1158343595, 1130284253 };
			break;
		case 9:
			bParam0->f_5 = -0.0002165433f;
			bParam0->f_11 = { 1144859700, 1157515820, 1132803552 };
			break;
	}
}

void func_104(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	bParam0->f_7 = 2;
	bParam0->f_28[0] = -1.997944E+24f;
	func_204(bParam0);
	if (iParam1 < 5)
	{
		bParam0->f_27 = 24;
		bParam0->f_20[0] = -1.674072E+32f;
	}
	else
	{
		bParam0->f_27 = 24;
		bParam0->f_20[0] = 3.441672E-37f;
		bParam0->f_20[1] = -6.738816E-37f;
	}
	switch (iParam1)
	{
		case 0:
			bParam0->f_5 = -4.178853E+33f;
			bParam0->f_11 = { 1138874207, 1149483180, 1128618223 };
			func_206(bParam0, 0);
			break;
		case 1:
			bParam0->f_5 = 1.370795E+25f;
			bParam0->f_11 = { 1141419185, 1147851535, 1126274761 };
			func_206(bParam0, 0);
			break;
		case 2:
			bParam0->f_5 = 9.042136E+19f;
			bParam0->f_11 = { -1022449556, 1150936087, 1126466414 };
			func_206(bParam0, 0);
			break;
		case 3:
			bParam0->f_5 = 2.160843E+11f;
			bParam0->f_11 = { 1137552143, 1151738464, 1127506903 };
			func_206(bParam0, 0);
			break;
		case 4:
			bParam0->f_5 = -3.011542E-17f;
			bParam0->f_11 = { 1139597577, 1149032461, 1127027612 };
			func_206(bParam0, 0);
			break;
		case 5:
			bParam0->f_5 = -4.446832E-24f;
			bParam0->f_11 = { -981235030, -987276933, 1085129989 };
			func_206(bParam0, 1);
			break;
		case 6:
			bParam0->f_5 = -4.622995E+21f;
			bParam0->f_11 = { -981130001, -988364378, 1102909800 };
			func_206(bParam0, 1);
			break;
		case 7:
			bParam0->f_5 = -1.802733E+33f;
			bParam0->f_11 = { -980393105, -987348890, -1061350801 };
			func_206(bParam0, 1);
			break;
		case 8:
			bParam0->f_5 = 1.967467f;
			bParam0->f_11 = { -980903801, -985394196, -1071267185 /* Float: -2.59f */ };
			func_206(bParam0, 1);
			break;
		case 9:
			bParam0->f_5 = -7.983214E+29f;
			bParam0->f_11 = { -981449811, -989801596, 1083838982 };
			func_206(bParam0, 1);
			break;
	}
}

void func_105(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 11;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_204(bParam0);
	switch (iParam1)
	{
		case 0:
			func_205(bParam0);
			bParam0->f_5 = -2.764938E+31f;
			bParam0->f_11 = { -987648316, -1014741896, 1126279879 };
			break;
		case 1:
			func_205(bParam0);
			bParam0->f_5 = -3.932373E-38f;
			bParam0->f_11 = { -987684123, 1136819136, 1125408578 };
			break;
		case 2:
			func_205(bParam0);
			bParam0->f_5 = -4.217522E-34f;
			bParam0->f_11 = { -989247175, 1139436460, 1122968220 };
			break;
		case 3:
			func_205(bParam0);
			bParam0->f_5 = 4.754441E-35f;
			bParam0->f_11 = { -993221014, -994236548, 1118131821 };
			break;
		case 4:
			func_205(bParam0);
			bParam0->f_5 = 5.129355E-24f;
			bParam0->f_11 = { -1001499710, -991846804, 1114382349 };
			break;
		case 5:
			func_205(bParam0);
			bParam0->f_5 = 277.6303f;
			bParam0->f_11 = { 1155489095, 1153867170, 1126659935 };
			break;
		case 6:
			func_205(bParam0);
			bParam0->f_5 = 7.336496E+37f;
			bParam0->f_11 = { 1156906141, 1152215046, 1127467319 };
			break;
		case 7:
			func_205(bParam0);
			bParam0->f_5 = 3.488513E-14f;
			bParam0->f_11 = { 1142908396, 1157838665, 1130235875 };
			break;
		case 8:
			func_205(bParam0);
			bParam0->f_5 = -3.891272E+29f;
			bParam0->f_11 = { 1151470150, 1150367213, 1125524301 };
			break;
		case 9:
			func_205(bParam0);
			bParam0->f_5 = 2.633142E+37f;
			bParam0->f_11 = { -989641739, -995386273, 1124039697 };
			break;
		case 10:
			func_205(bParam0);
			bParam0->f_5 = -6.725374E-15f;
			bParam0->f_11 = { -989212607, -993655646, 1125410037 };
			break;
	}
}

void func_106(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_204(bParam0);
	switch (iParam1)
	{
		case 0:
			func_205(bParam0);
			bParam0->f_5 = -9.677925E+28f;
			bParam0->f_11 = { -997542154, 1157860159, 1135917033 };
			break;
		case 1:
			func_205(bParam0);
			bParam0->f_5 = 1.15976E+21f;
			bParam0->f_11 = { -981047785, -984131167, 1107628138 };
			break;
		case 2:
			func_205(bParam0);
			bParam0->f_5 = -1.475104E+12f;
			bParam0->f_11 = { -982288543, -988035027, -1053212300 };
			break;
		case 3:
			func_205(bParam0);
			bParam0->f_5 = -5.826799E-05f;
			bParam0->f_11 = { -989272033, -986500208, 1103839767 };
			break;
		case 4:
			func_205(bParam0);
			bParam0->f_5 = -104.3275f;
			bParam0->f_11 = { -989708727, -995061336, 1124326316 };
			break;
		case 5:
			func_205(bParam0);
			bParam0->f_5 = -214.0117f;
			bParam0->f_11 = { -1000315293, 1141241518, 1114173656 };
			break;
		case 6:
			func_205(bParam0);
			bParam0->f_5 = 4.977976E-28f;
			bParam0->f_11 = { 1133271944, 1132722864, 1122092791 };
			break;
		case 7:
			func_205(bParam0);
			bParam0->f_5 = 2.99861E+07f;
			bParam0->f_11 = { 1153532590, 1151951645, 1125256770 };
			break;
		case 8:
			func_205(bParam0);
			bParam0->f_5 = -54188.87f;
			bParam0->f_11 = { 1160105939, 1150595099, 1122854935 };
			break;
		case 9:
			func_205(bParam0);
			bParam0->f_5 = -1482332f;
			bParam0->f_11 = { 1153213250, -989636818, 1110786284 };
			break;
	}
}

void func_107(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 7;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_204(bParam0);
	switch (iParam1)
	{
		case 0:
			func_205(bParam0);
			bParam0->f_5 = -1.026791E+10f;
			bParam0->f_11 = { -994349899, -1005945697, 1124323804 };
			break;
		case 1:
			func_205(bParam0);
			bParam0->f_5 = -2.105499E+09f;
			bParam0->f_11 = { -992210537, 1132875754, 1122853826 };
			break;
		case 2:
			func_205(bParam0);
			bParam0->f_5 = -1.206049E-09f;
			bParam0->f_11 = { -986930676, -1021440920, 1125574076 };
			break;
		case 3:
			func_205(bParam0);
			bParam0->f_5 = -1.383321E-18f;
			bParam0->f_11 = { -1003232130, -1002620434, 1111966032 };
			break;
		case 4:
			func_206(bParam0, 0);
			func_206(bParam0, 2);
			bParam0->f_5 = -1.482653E+35f;
			bParam0->f_11 = { 1148051879, -996406306, 1113029141 };
			break;
		case 5:
			func_206(bParam0, 0);
			func_206(bParam0, 2);
			bParam0->f_5 = 2.080852E-36f;
			bParam0->f_11 = { 1149765967, -995011794, 1113468586 };
			break;
		case 6:
			func_206(bParam0, 0);
			func_206(bParam0, 2);
			bParam0->f_5 = 5.81204E-20f;
			bParam0->f_11 = { 1151415856, -993495414, 1115716307 };
			break;
	}
}

void func_108(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 8;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_222(bParam0, iParam1);
			bParam0->f_5 = -6.868404E+23f;
			bParam0->f_11 = { -989719630, -986879604, 1117463288 };
			break;
		case 1:
			func_222(bParam0, iParam1);
			bParam0->f_5 = -0.02577076f;
			bParam0->f_11 = { -988991611, -986448994, 1103674055 };
			break;
		case 2:
			func_222(bParam0, iParam1);
			bParam0->f_5 = -2.063277E-28f;
			bParam0->f_11 = { -986263483, -986898915, 1119832166 };
			break;
		case 3:
			func_222(bParam0, iParam1);
			bParam0->f_5 = 6.326727E-20f;
			bParam0->f_11 = { -987396588, -986047399, 1117313263 };
			break;
		case 4:
			func_222(bParam0, iParam1);
			bParam0->f_5 = -3.354263E+31f;
			bParam0->f_11 = { -988725571, -989745785, 1118847028 };
			break;
		case 5:
			func_222(bParam0, iParam1);
			bParam0->f_5 = -1.882589E-31f;
			bParam0->f_11 = { -984090304, -988968142, 1083628218 };
			break;
		case 6:
			func_222(bParam0, iParam1);
			bParam0->f_5 = 2.757583E+32f;
			bParam0->f_11 = { -983575685, -983290305, -1051860245 };
			break;
		case 7:
			func_222(bParam0, iParam1);
			bParam0->f_5 = -3.447738E-37f;
			bParam0->f_11 = { -979094448, -981654036, -1066910142 };
			break;
	}
}

void func_109(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam1)
	{
		case 35:
			bParam0->f_8 = -1.07135E+22f;
			break;
		case 36:
			bParam0->f_8 = 50.20924f;
			break;
		case 37:
			bParam0->f_8 = 3.224022E-15f;
			break;
		case 38:
			bParam0->f_8 = 1.124335E-06f;
			break;
		case 39:
			bParam0->f_8 = 0.001659534f;
			break;
		case 40:
			bParam0->f_8 = -3.304058E+27f;
			break;
		case 41:
			bParam0->f_8 = -7.373806E+33f;
			break;
		case 42:
			bParam0->f_8 = 2.287571E+19f;
			break;
		case 43:
			bParam0->f_8 = 6.454911E-26f;
			break;
		case 44:
			bParam0->f_8 = -4.007869E-37f;
			break;
		case 45:
			bParam0->f_8 = -6.391861E-27f;
			break;
		case 46:
			bParam0->f_8 = 5.878796E-06f;
			break;
	}
	iVar0 = func_223(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	if ((iParam1 == 41 || iParam1 == 42) || iParam1 == 40)
	{
		bParam0->f_7 = 1;
	}
	else if (iParam1 == 43)
	{
		bParam0->f_7 = 2;
	}
	else if (iParam1 == 44)
	{
		bParam0->f_7 = 3;
	}
	else if (iParam1 == 45 || iParam1 == 46)
	{
		bParam0->f_7 = 4;
	}
	*bParam0 = func_224(iVar0);
	bParam0->f_1 = 0;
	bParam0->f_6 = 2;
	func_209(bParam0, 32);
	if (iParam2 != -1)
	{
		bParam0->f_9 = func_226(func_225(iVar0), iParam2);
		bParam0->f_15[0] = func_227(func_225(iVar0), iParam2);
		bParam0->f_5 = func_228(iVar0, iParam2);
		bParam0->f_11 = { func_229(iVar0, iParam2) };
	}
}

int func_110(int iParam0)
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

int func_111(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if ((*uParam1)[iVar2 /*3*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if ((*uParam1)[iVar2 /*3*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

struct<2> func_112()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_113()
{
	int iVar0;
	int iVar1;

	NETWORK::RESERVE_NETWORK_MISSION_PEDS(3);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Local_82[iVar1 /*27*/].f_4.f_2[iVar0] = -1f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_114()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 5)
		{
			if (func_179(iVar1, iVar2))
			{
				Jump @49; //curOff = 37
			}
			else
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar0);
}

void func_115()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_230(&iVar2);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_232(func_182(iVar0), func_231(func_182(iVar0)));
		Local_947.f_578[iVar0 /*39*/] = func_231(func_182(iVar0));
		if (bVar3)
		{
			func_122(&(Local_82[iVar2 /*27*/].f_24.f_1), iVar0, 3);
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 32)
			{
				func_122(&(Local_82[iVar1 /*27*/].f_24.f_1), iVar0, 3);
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_116()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	func_233(&(Local_947.f_406), &(Local_947.f_406.f_32));
	bVar2 = true;
	if (!func_230(&iVar1))
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_13.f_49.f_5[iVar0] = 0;
			Local_13.f_49.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			Local_82[iVar1 /*27*/].f_10.f_9[iVar0] = 0;
		}
		iVar0++;
	}
	func_234(&(Local_947.f_406.f_78), 8, -1);
	if (bVar2)
	{
		func_234(&(Local_82[iVar1 /*27*/].f_10), 8, -1);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			func_234(&(Local_82[iVar3 /*27*/].f_10), 8, -1);
			iVar3++;
		}
	}
}

void func_117()
{
}

void func_118(var uParam0)
{
	func_235(uParam0, 0);
	func_236(uParam0, 0);
	func_237(uParam0, 1);
	func_238(uParam0, 1);
	func_239(uParam0, 0);
	func_240(uParam0, 1);
	func_241(uParam0, 1, 1, 1);
}

void func_119()
{
	switch (func_242())
	{
		case 0:
			func_243(0, -2.218688E-32f);
			func_244(0, -7.466854E+14f, -2.852687E-33f);
			func_243(1, func_245(0.003839614f, 1));
			break;
		case 1:
		case 2:
			if (func_246() == 2)
			{
				func_243(0, 1.945464E+14f);
				func_244(0, -7588.292f, 1.518408E+14f);
			}
			else
			{
				func_243(0, 1.263548E+23f);
				func_244(0, -0.02234646f, 3.131609E+22f);
			}
			func_243(1, 2.470416E+25f);
			break;
		case 3:
			if (func_246() == 2)
			{
				func_243(0, 1.945464E+14f);
				func_244(0, -7588.292f, 1.518408E+14f);
			}
			else
			{
				func_243(0, -2.218688E-32f);
				func_244(0, -7.466854E+14f, -2.852687E-33f);
			}
			func_243(1, func_245(0.003839614f, 1));
			func_243(2, -0.0308907f);
			func_121(4194304);
			break;
		case 4:
			if (func_246() == 2)
			{
				func_243(0, 1.945464E+14f);
				func_244(0, -7588.292f, 1.518408E+14f);
			}
			else
			{
				func_243(0, -2.218688E-32f);
				func_244(0, -7.466854E+14f, -2.852687E-33f);
			}
			func_243(1, func_245(0.003839614f, 1));
			func_243(2, -2.366586E-32f);
			func_121(8388608);
			break;
		case 5:
			if (func_246() == 2)
			{
				func_243(0, 1.945464E+14f);
				func_244(0, -7588.292f, 1.518408E+14f);
			}
			else
			{
				func_243(0, -2.218688E-32f);
				func_244(0, -7.466854E+14f, -2.852687E-33f);
			}
			func_243(1, func_245(0.003839614f, 1));
			func_243(2, 1.059505E-35f);
			func_121(2.350989E-38f);
			break;
		case 6:
			if (func_246() == 2)
			{
				func_243(0, 1.945464E+14f);
				func_244(0, -7588.292f, 1.518408E+14f);
			}
			else
			{
				func_243(0, -2.218688E-32f);
				func_244(0, -7.466854E+14f, -2.852687E-33f);
			}
			func_243(1, func_245(0.003839614f, 1));
			func_243(2, 1.103265E-21f);
			func_121(9.403955E-38f);
			break;
		case 7:
			if (func_246() == 2)
			{
				func_243(0, 1.945464E+14f);
				func_244(0, -7588.292f, 1.518408E+14f);
			}
			else
			{
				func_243(0, -2.218688E-32f);
				func_244(0, -7.466854E+14f, -2.852687E-33f);
			}
			func_243(1, func_245(0.003839614f, 1));
			func_243(2, -0.006625873f);
			func_121(1.504633E-36f);
			break;
		case 8:
			func_243(0, 1.263548E+23f);
			func_244(0, -0.02234646f, 3.131609E+22f);
			func_243(1, func_245(0.003839614f, 1));
			func_243(2, 1.572265E-34f);
			break;
		case 9:
		case 10:
		case 11:
			func_243(0, 1.263548E+23f);
			func_244(0, -0.02234646f, 3.131609E+22f);
			func_243(1, func_245(0.003839614f, 1));
			break;
		default:
			break;
	}
	switch (func_247())
	{
		case 0:
			func_248(0, 1139465319, 1114569310, 1124569127, 1117276078 /* Float: 76.14f */, 1);
			func_248(1, 1139668481, 1113184451, 1124531306, 1127481344 /* Float: 180f */, 1);
			break;
		case 1:
			func_248(0, -1009999672, 1125825197, 1109865398, 1124960829, 1);
			func_248(1, -1010139016, 1125705148, 1109776372, -1035555308, 1);
			func_248(2, -1009762003, 1125358758, 1109393408 /* Float: 40f */, 0f, 1);
			break;
		case 2:
			func_248(0, -990834242, -995584680, 1121141732, 1100475269 /* Float: 18.99f */, 1);
			func_248(1, -990779906, -995548241, 1121318902, -1035101798 /* Float: -51.4f */, 1);
			if (func_193(4194304))
			{
				func_248(2, -990785389, -995922413, 1121227305, -1034268180, 1);
			}
			else if (func_193(8388608))
			{
				func_248(2, -990785389, -995922413, 1121227305, -1034268180, 1);
			}
			else if (func_193(2.350989E-38f))
			{
				func_248(2, -990785389, -995922413, 1121227305, -1034268180, 1);
			}
			else if (func_193(9.403955E-38f))
			{
				func_248(2, -990785389, -995922413, 1121227305, -1034268180, 1);
			}
			else if (func_193(1.504633E-36f))
			{
				func_248(2, -990785389, -995922413, 1121227305, -1034268180, 1);
			}
			break;
		case 3:
			func_248(0, -990216659, -989404632, 1113123743, -1022965842, 1);
			func_248(1, -990206918, -989452073, 1113621109, -1036708741, 1);
			break;
		case 4:
			func_248(0, -996133641, 1121845219, 1116573783, -1031700480, 1);
			func_248(1, -996178917, 1120974411, 1116554666, -1028191683, 1);
			break;
		case 5:
			func_248(0, -988615224, -1011630570, 1125105495, 1120254034 /* Float: 98.86f */, 1);
			func_248(1, -988599555, -1012030648, 1125162886, 1119291965 /* Float: 91.52f */, 1);
			if (func_193(4194304))
			{
				func_248(2, -988479882, -1011270706, 1124934174, 1120645939, 1);
			}
			else if (func_193(8388608))
			{
				func_248(2, -988479882, -1011270706, 1124934174, 1120645939, 1);
			}
			else if (func_193(2.350989E-38f))
			{
				func_248(2, -988479882, -1011270706, 1124934174, 1120645939, 1);
			}
			else if (func_193(9.403955E-38f))
			{
				func_248(2, -988479882, -1011270706, 1124934174, 1120645939, 1);
			}
			else if (func_193(1.504633E-36f))
			{
				func_248(2, -988479882, -1011270706, 1124934174, 1120645939, 1);
			}
			else
			{
				func_248(2, -988389858, -1010884336, 1124434223, 0f, 1);
			}
			break;
		case 6:
			func_248(0, -992405448, 1134109594, 1121469791, -1022606705, 1);
			func_248(1, -992466920, 1134032606, 1121368589, -1022246912, 1);
			if (func_193(4194304))
			{
				func_248(2, -992495554, 1133278420, 1121713522, 1124251075, 1);
			}
			else if (func_193(8388608))
			{
				func_248(2, -992495554, 1133278420, 1121713522, 1124251075, 1);
			}
			else if (func_193(2.350989E-38f))
			{
				func_248(2, -992495554, 1133278420, 1121713522, 1124251075, 1);
			}
			else if (func_193(9.403955E-38f))
			{
				func_248(2, -992495554, 1133278420, 1121713522, 1124251075, 1);
			}
			else if (func_193(1.504633E-36f))
			{
				func_248(2, -992495554, 1133278420, 1121713522, 1124251075, 1);
			}
			break;
		case 7:
			func_248(0, -979688450, -984318406, 1090462878, -1023813878, 1);
			func_248(1, -979685751, -984270098, 1090572245, -1021128868, 1);
			if (func_193(4194304))
			{
				func_248(2, -979745611, -984282418, 1093101326, -1033914286, 1);
			}
			else if (func_193(8388608))
			{
				func_248(2, -979745611, -984282418, 1093101326, -1033914286, 1);
			}
			else if (func_193(2.350989E-38f))
			{
				func_248(2, -979745611, -984282418, 1093101326, -1033914286, 1);
			}
			else if (func_193(9.403955E-38f))
			{
				func_248(2, -979745611, -984282418, 1093101326, -1033914286, 1);
			}
			else if (func_193(1.504633E-36f))
			{
				func_248(2, -979745611, -984282418, 1093101326, -1033914286, 1);
			}
			break;
		case 8:
			func_248(0, -989262621, -986861661, 1116341763, -1021384458, 1);
			func_248(1, -989236611, -986848646, 1116338493, -1021128868, 1);
			break;
		case 9:
			func_248(0, -980428461, -987179279, -1054740411, 1079529964 /* Float: 3.38f */, 1);
			func_248(1, -980444044, -987159045, -1053677123, 1084772844 /* Float: 5.26f */, 1);
			if (func_193(4194304))
			{
				func_248(2, -980429106, -987353516, -1064449343, -1034443817, 1);
			}
			else if (func_193(8388608))
			{
				func_248(2, -980429106, -987353516, -1064449343, -1034443817, 1);
			}
			else if (func_193(2.350989E-38f))
			{
				func_248(2, -980429106, -987353516, -1064449343, -1034443817, 1);
			}
			else if (func_193(9.403955E-38f))
			{
				func_248(2, -980429106, -987353516, -1064449343, -1034443817, 1);
			}
			else if (func_193(1.504633E-36f))
			{
				func_248(2, -980429106, -987353516, -1064449343, -1034443817, 1);
			}
			break;
		default:
			break;
	}
}

void func_120()
{
	switch (func_242())
	{
		case 8:
			func_249(0, -8.900454E+36f);
			func_250(0, 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1, 0);
			func_249(2, -4.130397E-19f);
			func_250(2, 1f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1, 0);
			func_249(1, 1.76488E-20f);
			switch (func_247())
			{
				case 1:
					func_250(1, -1052036301 /* Float: -12.7f */, -1119040307 /* Float: -0.05f */, -1095552205 /* Float: -0.35f */, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1, 0);
					break;
				case 5:
					func_250(1, -1037424394, -1048371528, -1070596096 /* Float: -2.75f */, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1, 0);
					break;
				default:
					func_250(1, 0f, 1f, -1f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1, 0);
					break;
			}
			func_249(3, 6.912139E-25f);
			func_250(3, -1f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1, 0);
			func_249(4, -1.887249E+28f);
			func_250(4, -1f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1, 0);
			break;
	}
}

void func_121(int iParam0)
{
	func_251(&(Local_947.f_19.f_10), iParam0);
}

void func_122(int* iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam2;
	iVar1 = iParam1 * 2;
	if (MISC::IS_BIT_SET(iVar0, 0))
	{
		MISC::SET_BIT(iParam0, iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, iVar1);
	}
	if (MISC::IS_BIT_SET(iVar0, 1))
	{
		MISC::SET_BIT(iParam0, iVar1 + 1);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, iVar1 + 1);
	}
}

bool func_123(int iParam0)
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

bool func_124(var uParam0, int iParam1)
{
	return func_252(uParam0->f_25, iParam1);
}

void func_125(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

int func_126(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1144511[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

void func_127(int iParam0)
{
	if (!func_135(iParam0))
	{
		func_251(&(Local_13.f_1), iParam0);
	}
}

bool func_128(int iParam0)
{
	if (!func_190(iParam0))
	{
		return false;
	}
	return (func_253(iParam0) && Global_1141317[iParam0 /*27*/].f_18.f_1 != 0);
}

void func_129(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

bool func_130(struct<31> Param0, var uParam31)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Local_13.f_3.f_1))
	{
		return true;
	}
	if (func_254(Local_947.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(Local_13.f_3))
	{
		if (VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(Local_947.f_15, Param0.f_10, false, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam31 = 1;
			return false;
		}
		func_255(&uVar1, Param0);
		Local_13.f_3 = VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&uVar1);
		func_151(128);
	}
	else if (!func_134(128, 255))
	{
		Local_13.f_3.f_1 = func_256(Param0);
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Local_13.f_3.f_1))
		{
			return true;
		}
		return false;
	}
	iVar0 = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(Local_13.f_3);
	switch (iVar0)
	{
		case 3:
			Local_13.f_3.f_1 = VOLUME::_0x351D71B8B72B858B(Local_13.f_3);
			return true;
		case 4:
			Local_13.f_3 = 0;
			return false;
		default:
			break;
	}
	return false;
}

bool func_131(int iParam0)
{
	return iParam0 != 0;
}

void func_132(var uParam0)
{
	*uParam0 = Global_1295619.f_16;
}

int func_133(int iParam0)
{
	return (Global_1295619.f_16 - iParam0) * 1000;
}

bool func_134(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_230(&iParam1))
		{
			return false;
		}
	}
	return func_189(Local_82[iParam1 /*27*/], iParam0);
}

bool func_135(int iParam0)
{
	return func_189(Local_13.f_1, iParam0);
}

bool func_136()
{
	return true;
}

void func_137()
{
}

bool func_138()
{
	return true;
}

bool func_139()
{
	bool bVar0;

	if (!func_257(&bVar0))
	{
		if (bVar0)
		{
			func_258();
		}
		return false;
	}
	if (!func_259(&bVar0))
	{
		if (bVar0)
		{
			func_258();
		}
		return false;
	}
	return true;
}

void func_140()
{
}

void func_141()
{
	if (!func_135(32) && func_260(32))
	{
		func_127(32);
	}
	if (!func_135(64) && func_260(64))
	{
		func_127(64);
	}
	if (!func_135(16) && func_261(16))
	{
		func_127(16);
	}
	if ((!func_135(2048) && func_260(2048)) && !func_260(4096))
	{
		func_127(2048);
	}
}

void func_142()
{
	bool bVar0;

	if (!bVar0 && func_135(16))
	{
		func_129(1);
		return;
	}
	if (func_135(2048) && !func_260(4096))
	{
		func_129(6);
		return;
	}
}

void func_143()
{
	func_262();
}

bool func_144()
{
	if (func_263())
	{
		return true;
	}
	func_264();
	func_265();
	func_266();
	switch (Local_13.f_7)
	{
		case 0:
			func_267();
			break;
		case 1:
			func_268();
			break;
		case 2:
			func_269();
			break;
		case 3:
			func_270();
			break;
		case 4:
			func_271();
			break;
		case 5:
			func_272();
			break;
		case 6:
			func_273();
			break;
		case 7:
			func_274();
			break;
		case 8:
			func_275();
			break;
		case 9:
			func_276();
			break;
		case 10:
			func_277();
			break;
		case 11:
			func_278();
			break;
		case 12:
			func_279();
			break;
		case 13:
			func_280();
			break;
		case 14:
			func_281();
			break;
		case 15:
			func_282();
			break;
		case 16:
			func_283();
			break;
		case 17:
			func_284();
			break;
		case 18:
			func_285();
			break;
		case 19:
			func_286();
			break;
		case 20:
			func_287();
			break;
		case 21:
			func_288();
			break;
		case 22:
			func_289();
			break;
		case 25:
			func_290();
			break;
		case 23:
			func_291();
			break;
		case 24:
			func_292();
			break;
		case 26:
			func_293();
			break;
		case 27:
			func_294();
			break;
		case 28:
			func_295();
			break;
		case 29:
			func_296();
			break;
		case 30:
			func_297();
			break;
		case 31:
			func_298();
			break;
		case 32:
			func_299();
			break;
		case 33:
			func_300();
			break;
		case 34:
			func_301();
			break;
		case 35:
			func_302();
			break;
		case 36:
			func_303();
			break;
		case 37:
			func_304();
			break;
		case 38:
			func_305();
			break;
		case 39:
			func_306();
			break;
		case 40:
			func_307();
			break;
		case 41:
			func_308();
			break;
		case 42:
			func_309();
			break;
		case 43:
			func_310();
			break;
		case 44:
			func_311();
			break;
		case 45:
			func_312();
			break;
		case 47:
			func_313();
			break;
		case 48:
			func_314();
			break;
		case 49:
			func_315();
			break;
		case 50:
			func_316();
			break;
		case 51:
			func_317();
			break;
		case 52:
			func_318();
			break;
		case 53:
			func_319();
			break;
		case 54:
			func_320();
			break;
		case 55:
			func_321();
			break;
		case 56:
			func_322();
			break;
		case 57:
			func_323();
			break;
		case 58:
			func_324();
			break;
		case 59:
			func_325();
			break;
		case 60:
			func_326();
			break;
		case 61:
			func_327();
			break;
		case 62:
			func_328();
			break;
		case 63:
			func_329();
			break;
		case 64:
			func_330();
			break;
		case 65:
			func_331();
			break;
		case 66:
			func_332();
			break;
		case 67:
			func_333();
			break;
		case 68:
			func_334();
			break;
		case 69:
			func_335();
			break;
		case 70:
			func_336();
			break;
		case 71:
			func_337();
			break;
		case 72:
			func_338();
			break;
		case 73:
			func_339();
			break;
		case 74:
			func_340();
			break;
	}
	switch (Local_13.f_7.f_1)
	{
		case 0:
			func_341();
			break;
		case 1:
			func_342();
			break;
		case 2:
			func_343();
			break;
		case 3:
			func_344();
			break;
		case 4:
			func_345();
			break;
		case 5:
			func_346();
			break;
		case 6:
			func_347();
			break;
		case 7:
			func_348();
			break;
	}
	return false;
}

void func_145()
{
}

bool func_146()
{
	int iVar0;

	iVar0 = func_191(0);
	if (((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || func_349(iVar0, 2.40763E-20f)) || func_349(iVar0, 3.034861E-30f))
	{
		return true;
	}
	return false;
}

void func_147(int iParam0)
{
	if (func_69(iParam0))
	{
		func_350(&(Local_947.f_7), iParam0);
	}
}

int func_148(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_190(iParam0))
	{
		return 0;
	}
	iVar0 = func_351(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	Global_1144511[iVar1 /*83*/].f_70 = iParam0;
	Global_1144511[iVar1 /*83*/].f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_352(&(Global_1144511[iVar1 /*83*/].f_70.f_1), 1);
	}
	else
	{
		func_353(&(Global_1144511[iVar1 /*83*/].f_70.f_1), 1);
	}
	return 1;
}

void func_149(int iParam0)
{
	if (!func_69(iParam0))
	{
		func_251(&(Local_947.f_7), iParam0);
	}
}

void func_150(int iParam0)
{
	if (func_189(Local_82[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/], iParam0))
	{
		func_350(&(Local_82[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/]), iParam0);
	}
}

void func_151(int iParam0)
{
	if (!func_134(iParam0, 255))
	{
		func_251(&(Local_82[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/]), iParam0);
	}
}

void func_152()
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
				func_354(iVar0);
				break;
			case -1315570756:
				func_355(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_356(iVar0);
		iVar0++;
	}
}

void func_153(int iParam0)
{
	if (Local_947.f_8 != iParam0)
	{
		Local_947.f_8 = iParam0;
	}
}

bool func_154()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	sVar0 = "OREPHT";
	sVar1 = "OREPAUD";
	switch (Local_947.f_19.f_11)
	{
		case 0:
			Local_947.f_19.f_11 = 1;
			break;
		case 1:
			if (HUD::_DOES_TEXT_BLOCK_EXIST(sVar0))
			{
				HUD::TEXT_BLOCK_REQUEST(sVar0);
				if (HUD::TEXT_BLOCK_IS_LOADED(sVar0))
				{
					Local_947.f_19.f_11 = 2;
				}
				else
				{
					return false;
				}
			}
			else
			{
				Local_947.f_19.f_11 = 2;
			}
			if (HUD::_DOES_TEXT_BLOCK_EXIST(sVar1))
			{
				HUD::TEXT_BLOCK_REQUEST(sVar1);
				if (HUD::TEXT_BLOCK_IS_LOADED(sVar1))
				{
					Local_947.f_19.f_11 = 2;
				}
				else
				{
					return false;
				}
			}
			else
			{
				Local_947.f_19.f_11 = 2;
			}
			break;
		case 2:
			iVar4 = 0;
			while (iVar4 <= 11)
			{
				STREAMING::REQUEST_ANIM_DICT(func_357(iVar4));
				if (!STREAMING::HAS_ANIM_DICT_LOADED(func_357(iVar4)))
				{
					return false;
				}
				else if (iVar4 == 11)
				{
					Local_947.f_19.f_11 = 3;
				}
				iVar4++;
			}
			break;
		case 3:
			switch (func_242())
			{
				case 8:
					if (func_360(func_358(0), &(Local_947.f_19.f_246), &(Local_13.f_7.f_26), 64, func_359(0)))
					{
						Local_947.f_19.f_11 = 6;
					}
					break;
				default:
					Local_947.f_19.f_11 = 6;
					break;
			}
			break;
		case 5:
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				iVar3 = func_361(iVar2);
				if (iVar3 != 0)
				{
					if (!STREAMING::_REQUEST_SCENARIO_TYPE(iVar3, 15, 0, 0))
					{
						return false;
					}
					if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(iVar3, false))
					{
						return false;
					}
				}
				iVar2++;
			}
			func_362();
			Local_947.f_19.f_11 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_155()
{
	bool bVar0;

	bVar0 = false;
	if (!func_363())
	{
		bVar0 = true;
	}
	if (!func_364())
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_156(var uParam0)
{
	*uParam0 = 0;
}

void func_157()
{
}

int func_158()
{
	return 1;
}

int func_159()
{
	bool bVar0;

	if (!func_365())
	{
		if (bVar0)
		{
		}
		return 0;
	}
	return 1;
}

int func_160(int iParam0)
{
	return (iParam0 - Global_1295619.f_16) * 1000;
}

void func_161()
{
	if (!func_69(1))
	{
		func_366(Local_947.f_9);
		func_149(1);
	}
}

void func_162()
{
	func_367();
	func_368();
}

void func_163()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		func_369(&iVar1, 0);
		func_370(iVar1);
		switch (func_242())
		{
			case 0:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				PED::_REQUEST_PED_EMOTIONAL_PRESET(iVar1, "DEFAULT_SHOCKED");
				if (func_246() == 2)
				{
					func_371(&(Local_947.f_19.f_53), iVar1, "RE005_FEMALE2", 0);
				}
				else
				{
					func_371(&(Local_947.f_19.f_53), iVar1, "RE005_MALE2", 0);
				}
				break;
			case 2:
			case 9:
				if (func_246() == 2)
				{
					func_371(&(Local_947.f_19.f_53), iVar1, "RE005_FEMALE2", 0);
					WEAPON::GIVE_WEAPON_TO_PED(iVar1, 2.574461E-25f, 100, false, true, 0, false, 0.5f, 1f, 6.028273E-12f, false, 0f, false);
				}
				else
				{
					func_371(&(Local_947.f_19.f_53), iVar1, "RE005_FEMALE3", 0);
					WEAPON::GIVE_WEAPON_TO_PED(iVar1, 2.574461E-25f, 100, false, true, 0, false, 0.5f, 1f, 6.028273E-12f, false, 0f, false);
				}
				break;
			case 1:
			case 10:
			case 11:
				if (func_246() == 2)
				{
					func_371(&(Local_947.f_19.f_53), iVar1, "RE005_FEMALE2", 0);
				}
				else
				{
					func_371(&(Local_947.f_19.f_53), iVar1, "RE005_FEMALE3", 0);
				}
				break;
			case 8:
				func_371(&(Local_947.f_19.f_53), iVar1, "RE005_FEMALE3", 0);
				if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_26))
					{
						Local_947.f_19.f_246 = NETWORK::_NET_TO_ANIM_SCENE(Local_13.f_7.f_26);
						if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_947.f_19.f_246))
						{
						}
					}
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13.f_7.f_26))
				{
					func_372();
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_947.f_19.f_246, func_373(4), 0f, 0f, func_374(4), 2);
					ANIMSCENE::START_ANIM_SCENE(Local_947.f_19.f_246);
				}
				break;
			default:
				break;
		}
	}
	iVar2 = func_191(2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !PED::IS_PED_DEAD_OR_DYING(iVar2, true))
	{
		func_375(iVar2);
		func_376(2, 0);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
		{
			switch (func_242())
			{
				case 8:
					PED::_SET_PED_QUALITY(iVar2, 2);
					break;
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					PED::_SET_PED_QUALITY(iVar2, 2);
					if (func_193(3.85186E-34f))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar2, Local_947.f_19.f_45);
					}
					iVar0 = func_361(4);
					if (iVar0 != 0)
					{
						TASK::TASK_START_SCENARIO_IN_PLACE_HASH(iVar2, iVar0, 0, false, 0, -1f, false);
					}
					break;
			}
		}
	}
	iVar3 = func_191(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !PED::IS_PED_DEAD_OR_DYING(iVar3, true))
	{
		func_377(&iVar3, 0);
		func_378(1, 3f);
	}
}

void func_164()
{
	func_379();
}

void func_165()
{
}

void func_166()
{
	float fVar0;

	if (func_254(Local_947.f_15))
	{
		return;
	}
	if (func_192())
	{
		return;
	}
	if (func_380(Local_947.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_947.f_15);
		if (fVar0 < 1128792064)
		{
			func_151(4096);
		}
		else if (fVar0 < 1137180672)
		{
			func_150(4096);
			func_151(2048);
		}
		else
		{
			func_150(4096);
			func_150(2048);
		}
	}
}

void func_167()
{
	func_381();
	func_382();
	func_383();
	func_384();
	func_385();
	func_386();
}

void func_168()
{
	if (func_387())
	{
		func_151(8);
	}
	else
	{
		func_150(8);
	}
}

void func_169()
{
	func_388(Local_13.f_7);
	func_389(Local_13.f_7.f_1);
	func_390();
	func_391();
	func_392();
	func_393();
	func_394(0, 0);
	func_395();
	func_396();
	func_397();
	switch (Local_947.f_19)
	{
		case 0:
			func_398();
			break;
		case 1:
			func_399();
			break;
		case 2:
			func_400();
			break;
		case 3:
			func_401();
			break;
		case 4:
			func_402();
			break;
		case 5:
			func_403();
			break;
		case 6:
			func_404();
			break;
		case 7:
			func_405();
			break;
		case 8:
			func_406();
			break;
		case 9:
			func_407();
			break;
		case 10:
			func_408();
			break;
		case 11:
			func_409();
			break;
		case 12:
			func_410();
			break;
		case 13:
			func_411();
			break;
		case 14:
			func_412();
			break;
		case 15:
			func_413();
			break;
		case 16:
			func_414();
			break;
		case 17:
			func_415();
			break;
		case 18:
			func_416();
			break;
		case 19:
			func_417();
			break;
		case 20:
			func_418();
			break;
		case 21:
			func_419();
			break;
		case 22:
			func_420();
			break;
		case 25:
			func_421();
			break;
		case 23:
			func_422();
			break;
		case 24:
			func_423();
			break;
		case 26:
			func_424();
			break;
		case 27:
			func_425();
			break;
		case 28:
			func_426();
			break;
		case 29:
			func_427();
			break;
		case 30:
			func_428();
			break;
		case 31:
			func_429();
			break;
		case 32:
			func_430();
			break;
		case 33:
			func_431();
			break;
		case 35:
			func_432();
			break;
		case 34:
			func_433();
			break;
		case 36:
			func_434();
			break;
		case 37:
			func_435();
			break;
		case 38:
			func_436();
			break;
		case 39:
			func_437();
			break;
		case 40:
			func_438();
			break;
		case 41:
			func_439();
			break;
		case 42:
			func_440();
			break;
		case 43:
			func_441();
			break;
		case 44:
			func_442();
			break;
		case 45:
			func_443();
			break;
		case 47:
			func_444();
			break;
		case 48:
			func_445();
			break;
		case 49:
			func_446();
			break;
		case 50:
			func_447();
			break;
		case 51:
			func_448();
			break;
		case 52:
			func_449();
			break;
		case 53:
			func_450();
			break;
		case 54:
			func_451();
			break;
		case 55:
			func_452();
			break;
		case 56:
			func_453();
			break;
		case 57:
			func_454();
			break;
		case 58:
			func_455();
			break;
		case 59:
			func_456();
			break;
		case 60:
			func_457();
			break;
		case 61:
			func_458();
			break;
		case 62:
			func_459();
			break;
		case 63:
			func_460();
			break;
		case 64:
			func_461();
			break;
		case 65:
			func_462();
			break;
		case 66:
			func_463();
			break;
		case 67:
			func_464();
			break;
		case 68:
			func_465();
			break;
		case 69:
			func_466();
			break;
		case 70:
			func_467();
			break;
		case 71:
			func_468();
			break;
		case 72:
			func_469();
			break;
		case 73:
			func_470();
			break;
		case 74:
			func_471();
			break;
	}
	switch (Local_947.f_19.f_1)
	{
		case 0:
			func_472();
			break;
		case 1:
			func_473();
			break;
		case 2:
			func_474();
			break;
		case 3:
			func_475();
			break;
		case 4:
			func_476();
			break;
		case 5:
			func_477();
			break;
		case 6:
			func_478();
			break;
		case 7:
			func_479();
			break;
	}
}

void func_170()
{
	if (!func_134(8, 255))
	{
		func_151(16);
	}
	else
	{
		func_150(16);
	}
}

void func_171()
{
	int iVar0;

	Local_947.f_6 = -1;
	Local_947.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_947.f_5 = (Local_947.f_5 || Local_82[iVar0 /*27*/]);
			Local_947.f_6 = (Local_947.f_6 && Local_82[iVar0 /*27*/]);
		}
		iVar0++;
	}
}

void func_172()
{
	if ((func_69(1024) && !func_134(16384, 255)) && !(SAVE::SAVEGAME_IS_SAVE_PENDING() || func_480(&Global_0, 1)))
	{
		func_151(16384);
	}
}

bool func_173()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (!func_481(2f, 255))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_PED_SOURCE_OF_DEATH(iVar0));
				iVar2 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
				iVar3 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
				if ((iVar1 == PLAYER::PLAYER_PED_ID() || (ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar1 == iVar2)) || (ENTITY::DOES_ENTITY_EXIST(iVar3) && iVar1 == iVar3))
				{
					if (!func_193(131072))
					{
						func_195(1);
					}
				}
				else if (!func_193(262144) && func_192())
				{
					func_194(7, Local_947.f_4);
				}
				func_482(2f);
			}
		}
		else if (func_192())
		{
			func_194(7, Local_947.f_4);
			func_482(2f);
		}
	}
	else if (func_192())
	{
		func_194(7, Local_947.f_4);
		func_482(2f);
	}
	func_483();
	func_196();
	func_197(0);
	func_198();
	func_199();
	func_200();
	if (VOLUME::DOES_VOLUME_EXIST(Local_947.f_19.f_254))
	{
		VOLUME::DELETE_VOLUME(Local_947.f_19.f_254);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_947.f_19.f_246))
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_947.f_19.f_246))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_947.f_19.f_246);
		}
	}
	TASK::CLEAR_SEQUENCE_TASK(&(Local_947.f_19.f_164));
	return true;
}

void func_174()
{
	func_484();
}

void func_175(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST(Local_947.f_274.f_7[iParam0 /*11*/].f_1))
	{
		MAP::REMOVE_BLIP(&(Local_947.f_274.f_7[iParam0 /*11*/].f_1));
	}
}

bool func_176(int iParam0, char* sParam1)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, sParam1))
	{
		return true;
	}
	return DECORATOR::DECOR_REMOVE(iParam0, sParam1);
}

bool func_177(int iParam0, int iParam1)
{
	return func_189(Local_947.f_274.f_7[iParam0 /*11*/].f_2, iParam1);
}

bool func_178(int iParam0, int iParam1)
{
	return func_189(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 1024);
}

bool func_179(int iParam0, int iParam1)
{
	return func_189(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 8);
}

bool func_180(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_947.f_329[iParam0 /*76*/].f_4, iParam1);
}

void func_181(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(uParam0[iVar0 /*9*/])->f_7 = 0f;
		(uParam0[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

int func_182(int iParam0)
{
	return iParam0;
}

void func_183(int iParam0, bool bParam1)
{
	int iVar0;

	func_485(iParam0, 8);
	if (!func_486(iParam0, 1))
	{
		return;
	}
	iVar0 = func_487(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(iVar0))
		{
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 130, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 315, false);
		}
	}
	func_488(iParam0, bParam1);
	func_485(iParam0, 1);
}

bool func_184(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1217203[iParam1 /*72*/][iParam0], iParam2);
}

void func_185(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;

	iVar0 = func_490(func_489(Param0));
	iVar1 = func_491(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265213.f_122484.f_80.f_12;
		func_492(Param0, &Var2, iParam2);
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

void func_186(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_493(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_494(iVar0);
}

void func_187(int iParam0, int iParam1)
{
	func_132(&(Global_1260791.f_3351[iParam0]));
	switch (iParam1)
	{
		case 0:
			Global_1260791.f_3357[iParam0] = func_495(iParam0);
			break;
		case 1:
			Global_1260791.f_3357[iParam0] = func_496(iParam0);
			break;
		case 2:
			Global_1260791.f_3357[iParam0] = func_497(iParam0);
			break;
	}
}

void func_188(int iParam0)
{
	struct<2> Var0;
	int iVar2;

	if (!func_18())
	{
		return;
	}
	if (iParam0 == 0)
	{
		return;
	}
	Var0 = { func_498(iParam0) };
	if (!STATS::STAT_ID_IS_VALID(&Var0))
	{
		return;
	}
	iVar2 = Global_1295619.f_16;
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

bool func_189(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_190(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

int func_191(int iParam0)
{
	return Local_947.f_274.f_7[iParam0 /*11*/];
}

bool func_192()
{
	return (func_135(32) || func_134(32, 255));
}

bool func_193(int iParam0)
{
	return func_189(Local_947.f_19.f_10, iParam0);
}

void func_194(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_499(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_500(iVar0, iParam0);
}

void func_195(bool bParam0)
{
	if (!func_193(131072))
	{
		if (!func_501(2, 255))
		{
			if (bParam0 || func_193(262144))
			{
				func_502(-3.582313E-31f, 0, 0);
				func_121(131072);
				func_503(7, Local_947.f_4);
			}
		}
	}
}

void func_196()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_242() != 8)
	{
		return;
	}
	iVar0 = func_191(2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (func_504())
			{
				if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iVar0, Local_947.f_19.f_246) || !ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(Local_947.f_19.f_246, func_505(2)))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_947.f_19.f_246, func_505(2), iVar0);
				}
			}
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar0))
			{
				ENTITY::DETACH_ENTITY(iVar0, true, true);
				PHYSICS::ACTIVATE_PHYSICS(iVar0);
			}
		}
	}
	iVar1 = func_506(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			if (func_504())
			{
				if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iVar1, Local_947.f_19.f_246) || !ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(Local_947.f_19.f_246, func_507(0)))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_947.f_19.f_246, func_507(0), iVar1);
				}
			}
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
			{
				ENTITY::DETACH_ENTITY(iVar1, true, true);
				PHYSICS::ACTIVATE_PHYSICS(iVar1);
			}
		}
	}
	iVar2 = func_506(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
		{
			if (func_504())
			{
				if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iVar2, Local_947.f_19.f_246) || !ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(Local_947.f_19.f_246, func_507(1)))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_947.f_19.f_246, func_507(1), iVar2);
				}
			}
		}
	}
}

void func_197(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		AUDIO::STOP_PED_SPEAKING(iVar0, false);
		if (func_508(8388608))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 6, false);
			func_509(8388608);
		}
		if (func_508(4194304))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 169, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 340, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 137, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 26, false);
			func_509(4194304);
		}
		if (!PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			iVar1 = func_191(1);
			iVar2 = 6;
			if (func_508(2))
			{
				iVar1 = PED::GET_MOUNT(iVar0);
				iVar2 = 3;
			}
			if (func_510(0))
			{
				iVar2 = 3;
			}
			if (bParam0)
			{
				TASK::CLEAR_PED_TASKS(iVar0, true, false);
			}
			if (bParam0 || func_511(iVar0, 2.40763E-20f, 1, 0))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && func_512(0, 1) < 1116471296)
				{
					TASK::TASK_FLEE_COORD(iVar0, func_513(0), iVar2, 0, -1f, -1, iVar1);
				}
				else
				{
					TASK::TASK_FLEE_COORD(iVar0, func_513(0), iVar2, 0, -1f, -1, 0);
				}
			}
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
	}
	if (func_193(3.85186E-34f))
	{
		PED::REMOVE_RELATIONSHIP_GROUP(Local_947.f_19.f_45);
		func_514(3.85186E-34f);
	}
}

void func_198()
{
	int iVar0;

	iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		AITRANSPORT::_SET_AI_CAN_USE_TRANSPORT(iVar0, false);
	}
}

void func_199()
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (iVar0 != 255)
	{
		if (func_481(8388608, iVar0))
		{
			PLAYER::SET_PLAYER_CONTROL(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()), true, 0, false);
			TASK::CLEAR_PED_TASKS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID())), true, false);
			func_515(8388608);
		}
	}
}

void func_200()
{
	if (Local_947.f_19.f_247 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_947.f_19.f_247);
		Local_947.f_19.f_247 = 0;
	}
	if (Local_947.f_19.f_248 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_947.f_19.f_248);
		Local_947.f_19.f_248 = 0;
	}
	if (Local_947.f_19.f_249 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_947.f_19.f_249);
		Local_947.f_19.f_249 = 0;
	}
}

bool func_201(var uParam0)
{
	if (func_40(*uParam0))
	{
		return true;
	}
	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
		{
			return true;
		}
		if (uParam0->f_4 != -1)
		{
			return true;
		}
		if (uParam0->f_5 != -1)
		{
			return true;
		}
	}
	return false;
}

int func_202(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_516(iParam1);
	iVar1 = ((iVar0 + Global_1207465.f_3[iParam1]) - 1);
	if (Global_1207465.f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_517(iParam1)) - 1);
	}
	bVar2 = func_40(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_21(Global_1207465.f_231[iVar6 /*15*/].f_5, *uParam0))
			{
				return iVar6;
			}
		}
		if (bVar3)
		{
			if (Global_1207465.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1207465.f_231[iVar6 /*15*/].f_5.f_3 == uParam0->f_3)
			{
				return iVar6;
			}
		}
		if (bVar4)
		{
			if (Global_1207465.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1207465.f_231[iVar6 /*15*/].f_5.f_4 == uParam0->f_4)
			{
				return iVar6;
			}
		}
		if (bVar5)
		{
			if (Global_1207465.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1207465.f_231[iVar6 /*15*/].f_5.f_5 == uParam0->f_5)
			{
				return iVar6;
			}
		}
		iVar6++;
	}
	return -1;
}

void func_203(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_518(bParam0);
			break;
		case 1:
			func_518(bParam0);
			break;
		case 2:
			func_518(bParam0);
			break;
		case 3:
			func_519(bParam0);
			break;
		case 4:
			func_518(bParam0);
			break;
		case 5:
			func_518(bParam0);
			break;
		case 6:
			func_519(bParam0);
			break;
		case 7:
			func_519(bParam0);
			break;
		case 8:
			func_519(bParam0);
			break;
		case 9:
			func_518(bParam0);
			break;
		default:
			func_205(bParam0);
			func_204(bParam0);
			break;
	}
}

void func_204(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (bParam0->f_2 - 1))
	{
		func_520(bParam0, iVar0);
		iVar0++;
	}
}

void func_205(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (bParam0->f_1 - 1))
	{
		func_206(bParam0, iVar0);
		iVar0++;
	}
}

void func_206(bool bParam0, int iParam1)
{
	MISC::SET_BIT(&(bParam0->f_3), iParam1);
}

void func_207(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 8:
		case 10:
		case 12:
		case 14:
			func_521(bParam0);
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
		case 11:
		case 13:
		case 15:
			func_522(bParam0);
			break;
		default:
			func_205(bParam0);
			func_204(bParam0);
			break;
	}
}

void func_208(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_520(bParam0, 0);
			break;
		case 1:
		case 2:
			func_520(bParam0, 1);
			func_520(bParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_520(bParam0, 0);
			func_520(bParam0, 2);
			break;
		case 8:
			func_520(bParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_520(bParam0, 1);
			break;
		default:
			func_204(bParam0);
			break;
	}
}

void func_209(bool bParam0, int iParam1)
{
	func_352(&(bParam0->f_25), iParam1);
}

void func_210(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_523(bParam0);
			break;
		case 1:
			func_524(bParam0);
			break;
		case 2:
			func_525(bParam0);
			break;
		case 3:
			func_526(bParam0);
			break;
		default:
			func_205(bParam0);
			func_204(bParam0);
			break;
	}
}

Vector3 func_211(int iParam0)
{
	if (!func_190(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1141317[iParam0 /*27*/].f_20;
}

void func_212(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_527(bParam0);
			break;
		case 1:
		case 2:
			func_528(bParam0);
			break;
		case 3:
		case 4:
			func_529(bParam0);
			break;
		default:
			func_204(bParam0);
			break;
	}
	func_205(bParam0);
}

void func_213(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_520(bParam0, 0);
			func_520(bParam0, 2);
			break;
		case 1:
			func_520(bParam0, 1);
			func_520(bParam0, 3);
			break;
		default:
			func_205(bParam0);
			func_204(bParam0);
			break;
	}
}

void func_214(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_206(bParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_206(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_206(bParam0, 0);
			break;
		default:
			func_206(bParam0, 0);
			break;
	}
	func_204(bParam0);
}

void func_215(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_206(bParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_206(bParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_206(bParam0, 2);
			break;
		default:
			func_205(bParam0);
			break;
	}
	func_204(bParam0);
}

void func_216(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_206(bParam0, 0);
			func_520(bParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_206(bParam0, 1);
			func_520(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_206(bParam0, 2);
			func_520(bParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_206(bParam0, 3);
			func_520(bParam0, 0);
			break;
	}
}

void func_217(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_206(bParam0, 0);
			func_520(bParam0, 0);
			break;
		case 2:
			func_206(bParam0, 1);
			func_520(bParam0, 0);
			break;
		case 3:
		case 4:
			func_206(bParam0, 2);
			func_520(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_206(bParam0, 3);
			func_520(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_206(bParam0, 4);
			func_520(bParam0, 1);
			break;
	}
}

void func_218(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_206(bParam0, 3);
			break;
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
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			func_206(bParam0, 2);
			break;
		default:
			func_205(bParam0);
			break;
	}
	func_204(bParam0);
}

void func_219(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_206(bParam0, 3);
			break;
		case 10:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 20:
		case 21:
		case 24:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			func_206(bParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			break;
		default:
			func_205(bParam0);
			break;
	}
	func_204(bParam0);
}

void func_220(bool bParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_520(bParam0, 0);
			func_206(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_520(bParam0, 1);
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			func_206(bParam0, 2);
			break;
		default:
			func_520(bParam0, 0);
			func_206(bParam0, 0);
			break;
	}
}

void func_221(bool bParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_520(bParam0, 0);
			func_206(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_520(bParam0, 1);
			func_206(bParam0, 0);
			func_206(bParam0, 1);
			break;
		default:
			func_520(bParam0, 0);
			func_206(bParam0, 0);
			break;
	}
}

void func_222(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_204(bParam0);
			func_205(bParam0);
			break;
		default:
			func_204(bParam0);
			func_205(bParam0);
			break;
	}
}

int func_223(int iParam0)
{
	return Global_1260791.f_3432[iParam0];
}

int func_224(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1245159[iParam0 /*5*/].f_3;
}

int func_225(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/];
}

var func_226(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_530(&Var1, iParam0) && func_531(&Var1, iParam1))
	{
		func_532(Var1, 16.1929f, &uVar0, 0);
	}
	return uVar0;
}

int func_227(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_530(&Var1, iParam0) && func_531(&Var1, iParam1))
	{
		func_532(Var1, -12.40885f, &iVar0, 0);
	}
	return iVar0;
}

int func_228(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_533(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/];
}

Vector3 func_229(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_533(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/].f_3;
}

bool func_230(int iParam0)
{
	*iParam0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!func_534(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

int func_231(int iParam0)
{
	return Local_13.f_58[iParam0 /*3*/];
}

void func_232(int iParam0, var uParam1)
{
	if (iParam0 != 0)
	{
		return;
	}
	if (!func_535(255))
	{
		func_376(iParam0, 0);
		return;
	}
	switch (func_536(uParam1))
	{
		case 0:
			func_376(iParam0, 0);
			break;
		case 1:
			func_376(iParam0, 1);
			func_537(iParam0, 0, "GREET_POS", -9.436069E+32f, 0, 1, 0, -1, 0);
			func_537(iParam0, 1, "GREET_NEG", 1.121045E-15f, 0, 1, 0, -1, 0);
			break;
		case 2:
			func_376(iParam0, 1);
			if (func_538(2, 255))
			{
				func_537(iParam0, 0, "GREET_POS", -9.436069E+32f, 0, 1, 0, -1, 1);
				func_537(iParam0, 1, "GREET_NEG", 1.121045E-15f, 0, 1, 0, -1, 1);
			}
			else
			{
				func_537(iParam0, 0, "GREET_POS", -9.436069E+32f, 0, 1, 0, -1, 0);
				func_537(iParam0, 1, "GREET_NEG", 1.121045E-15f, 0, 1, 0, -1, 0);
			}
			break;
		case 3:
			func_376(iParam0, 1);
			func_537(iParam0, 0, "NB_PHOTOGRAPHY_ILO_POSE", -9.436069E+32f, 0, 1, 0, -1, 0);
			func_537(iParam0, 1, "NB_PHOTOGRAPHY_ILO_STEP", 1.121045E-15f, 0, 1, 0, -1, 0);
			break;
		case 4:
			func_376(iParam0, 1);
			func_539(iParam0, 0, 0, 1);
			func_539(iParam0, 1, 0, 1);
			break;
		case 5:
			func_376(iParam0, 0);
			func_540(iParam0, 0);
			func_540(iParam0, 1);
			break;
	}
}

void func_233(var uParam0, var uParam1)
{
	func_118(uParam0);
	func_541(uParam0);
	func_542(uParam0, 1);
	func_543(uParam1);
	func_541(uParam1);
	func_544(uParam1);
	func_545(uParam1, 1);
	func_546(uParam1, 1);
	func_547(uParam0, 2000);
}

int func_234(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	if (!func_548(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_549(Var0.f_2, 10);
		iVar5 = iVar4 ^ -1;
		(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
		if (iParam2 != 0)
		{
			(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
		}
		return 1;
	}
	iVar4 = func_549(Var0.f_2, (32 - Var0.f_2));
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0] = ((*uParam0)[Var0] && iVar5);
	(*uParam0)[Var0] = ((*uParam0)[Var0] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
	iVar4 = func_549(0, Var0.f_3 + 1);
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_RIGHT(iParam2, (32 - Var0.f_3)) && iVar4));
	return 1;
}

void func_235(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_350(&(uParam0->f_2), 16384);
	}
	else
	{
		func_251(&(uParam0->f_2), 16384);
	}
}

void func_236(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_350(&(uParam0->f_2), 2048);
	}
	else
	{
		func_251(&(uParam0->f_2), 2048);
	}
}

void func_237(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_350(&(uParam0->f_2), 256);
	}
	else
	{
		func_251(&(uParam0->f_2), 256);
	}
}

void func_238(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_251(uParam0, 16);
	}
	else
	{
		func_350(uParam0, 1.504633E-36f);
		func_350(uParam0, 16);
	}
}

void func_239(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_350(&(uParam0->f_2), 128);
	}
	else
	{
		func_251(&(uParam0->f_2), 128);
	}
}

void func_240(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_251(uParam0, 256);
	}
	else
	{
		func_350(uParam0, 256);
	}
}

void func_241(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_251(uParam0, 2.524355E-29f);
	}
	else
	{
		func_350(uParam0, 2.524355E-29f);
	}
	if (!bParam2)
	{
		func_251(uParam0, 2f);
	}
	else
	{
		func_350(uParam0, 2f);
	}
	if (!bParam3)
	{
		func_251(uParam0, 1.084202E-19f);
	}
	else
	{
		func_350(uParam0, 1.084202E-19f);
	}
}

int func_242()
{
	return func_550();
}

void func_243(int iParam0, float fParam1)
{
	Local_947.f_274.f_7[iParam0 /*11*/].f_3 = fParam1;
}

void func_244(int iParam0, float fParam1, float fParam2)
{
	switch (func_247())
	{
		case 4:
		case 5:
		case 6:
			func_551(iParam0, fParam1);
			break;
		default:
			func_551(iParam0, fParam2);
			break;
	}
}

float func_245(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case joaat("HORSE_CLASS_RIDING"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(2.869977E+14f, 0, -0.000127636f, bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_DRAFT"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-4.09657E+36f, 0, -0.000127636f, bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_RACE"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-7.883585E+32f, 0, -0.000127636f, bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_WAR"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-2.063335E-35f, 0, -0.000127636f, bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_WORK"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(0.001860607f, 0, -0.000127636f, bParam1, false, 0f, 0f, 0f);
		default:
			break;
	}
	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(2.869977E+14f, 0, -0.000127636f, true, false, 0f, 0f, 0f);
}

int func_246()
{
	switch (Local_947.f_4)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		default:
			break;
	}
	return -1;
}

int func_247()
{
	return Local_947.f_2;
}

void func_248(int iParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	Local_947.f_274.f_7[iParam0 /*11*/].f_6 = { vParam1 };
	Local_947.f_274.f_7[iParam0 /*11*/].f_5 = iParam4;
	if (bParam5)
	{
		func_251(&(Local_947.f_274.f_7[iParam0 /*11*/].f_2), 2);
	}
	else
	{
		func_350(&(Local_947.f_274.f_7[iParam0 /*11*/].f_2), 2);
	}
}

void func_249(int iParam0, float fParam1)
{
	func_552(0, iParam0, fParam1);
}

void func_250(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	if (bParam6)
	{
		func_553(iParam0);
	}
	func_554(0, iParam0, vParam1, fParam4, iParam5);
}

void func_251(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_252(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_253(int iParam0)
{
	int iVar0;

	if (!func_190(iParam0))
	{
		return false;
	}
	iVar0 = func_555(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_254(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_255(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -2.405123E+15f;
	uParam0->f_7 = Param1.f_5;
}

int func_256(struct<31> Param0)
{
	var uVar0;

	func_255(&uVar0, Param0);
	return VOLUME::_FIND_VOLUME_LOCK_REQUEST_ID_WITH_ARGS(&uVar0);
}

bool func_257(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		*uParam0 = 1;
		return false;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (func_177(iVar2, 4))
		{
		}
		else
		{
			if (!bVar0)
			{
				if (!func_556(iVar2, uParam0, &bVar1))
				{
					if (*uParam0)
					{
						return false;
					}
					if (bVar1)
					{
						bVar0 = true;
					}
				}
			}
			if (func_557(iVar2))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_38[iVar2]))
				{
					if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_38[iVar2]))
					{
						NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_38[iVar2]);
					}
				}
			}
		}
		iVar2++;
	}
	if (bVar0)
	{
		return false;
	}
	return true;
}

void func_258()
{
	func_129(2);
}

bool func_259(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	float fVar14;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	vector3 vVar27;

	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		*bParam0 = 1;
		return false;
	}
	bVar3 = false;
	vVar4 = { 0f, 0f, 0f };
	vVar7 = { 0f, 0f, 0f };
	vVar10 = { Local_947.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 1119092736);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			iVar2 = func_558(iVar0, iVar1);
			if (func_179(iVar0, iVar1))
			{
			}
			else if (func_178(iVar0, iVar1))
			{
			}
			else if (MISC::IS_BIT_SET(Local_947.f_329[iVar0 /*76*/].f_2, iVar1))
			{
				if (func_559(iVar0, iVar1))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar0 /*6*/][iVar1]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_42[iVar0 /*6*/][iVar1]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_42[iVar0 /*6*/][iVar1]);
						}
					}
				}
			}
			else
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar0 /*6*/][iVar1]))
				{
					if (!func_560(iVar0, iVar1))
					{
						vVar7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar10, 0f, func_561(iVar0, iVar1)) };
					}
					else
					{
						vVar7 = { func_561(iVar0, iVar1) };
					}
					if (func_562(iVar0, iVar1))
					{
						if (!func_563(&vVar7, 1, 10, 0, 0))
						{
							bVar3 = true;
						}
						else
						{
							if (func_564(iVar0, iVar1))
							{
								iVar13 = PED::_CREATE_META_PED_ASSET(Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_3, vVar7, 0f, 0f, 0f, true, false, false);
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									Local_13.f_42[iVar0 /*6*/][iVar1] = NETWORK::OBJ_TO_NET(iVar13);
									if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar0 /*6*/][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
								}
							}
							else if (func_565(iVar0, iVar1))
							{
								iVar13 = WEAPON::_CREATE_WEAPON_OBJECT(Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_5, Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_4, func_561(iVar0, iVar1), true, 1f);
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									Local_13.f_42[iVar0 /*6*/][iVar1] = NETWORK::OBJ_TO_NET(iVar13);
									if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar0 /*6*/][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
									else
									{
										NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_13.f_42[iVar0 /*6*/][iVar1], true);
									}
								}
							}
							else if (iVar2 == 0)
							{
								Jump @1091; //curOff = 577
							}
							else if (!func_566(&(Local_13.f_42[iVar0 /*6*/][iVar1]), iVar2, vVar7, 1, 0))
							{
								*bParam0 = 1;
								return false;
							}
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar0 /*6*/][iVar1]))
							{
								iVar13 = NETWORK::NET_TO_OBJ(Local_13.f_42[iVar0 /*6*/][iVar1]);
								if (func_559(iVar0, iVar1))
								{
									if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar0 /*6*/][iVar1]))
									{
										if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_42[iVar0 /*6*/][iVar1]))
										{
											NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_42[iVar0 /*6*/][iVar1]);
										}
									}
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
									return false;
								}
								MISC::SET_BIT(&(Local_947.f_329[iVar0 /*76*/].f_2), iVar1);
								if (func_567(iVar0, iVar1))
								{
									TASK::_MAKE_OBJECT_CARRIABLE(iVar13);
									GRAPHICS::SET_PICKUP_LIGHT(iVar13, true);
								}
								if (func_568(iVar0, iVar1))
								{
									ENTITY::_SET_ENTITY_LIGHTS_ENABLED(iVar13, true);
								}
								if (func_569(iVar0, iVar1))
								{
									ENTITY::SET_ENTITY_VISIBLE(iVar13, false);
								}
								else
								{
									ENTITY::_SET_ENTITY_FADE_IN(iVar13);
								}
								if (func_562(iVar0, iVar1))
								{
									ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar13, false);
								}
								vVar4 = { func_570(iVar0, iVar1) };
								if (!func_254(vVar4))
								{
									if (vVar4.x == 0f && vVar4.y == 0f)
									{
										if (vVar4.z != 0f)
										{
											ENTITY::SET_ENTITY_HEADING(iVar13, vVar4.z);
										}
									}
									else
									{
										ENTITY::SET_ENTITY_ROTATION(iVar13, vVar4, 2, true);
										if (!func_571(iVar0, iVar1, 32))
										{
											MISC::GET_MODEL_DIMENSIONS(iVar2, &vVar15, &vVar18);
											vVar21 = { vVar18 - vVar15 * Vector(1056964608, 1056964608, 1056964608) };
											vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, MISC::ABSF(func_572(vVar4.x)), MISC::ABSF(func_572(vVar4.y))) };
											vVar27 = { func_573(vVar24) * vVar21 };
											ENTITY::SET_ENTITY_COORDS(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
										}
									}
								}
								if (func_574(iVar0, iVar1))
								{
									func_575(iVar0, iVar1, 1);
								}
								if (func_576(iVar0, iVar1))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(iVar13, true);
								}
								bVar3 = true;
							}
							else
							{
								iVar1++;
							}
							iVar0++;
							if (bVar3)
							{
								return false;
							}
							return true;
						}
					}
				}
			}
		}
	}
}

bool func_260(int iParam0)
{
	return func_189(Local_947.f_5, iParam0);
}

bool func_261(int iParam0)
{
	return func_189(Local_947.f_6, iParam0);
}

void func_262()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_577(&(Local_13.f_58[iVar0 /*3*/]), func_182(iVar0));
		iVar0++;
	}
}

bool func_263()
{
	int iVar0;
	int iVar1;

	if (Local_13.f_7 == 75)
	{
		return true;
	}
	iVar0 = func_191(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (func_578())
		{
			iVar1 = func_191(2);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_264()
{
	if (func_501(1024, 255))
	{
		return;
	}
	if (func_579())
	{
		switch (func_242())
		{
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				if (((!func_508(64) && !func_508(512)) && func_510(2)) && !func_580())
				{
					func_581(512);
					func_582(23);
				}
				if (func_510(0))
				{
					func_583(1, 0, 0);
					func_584();
					func_581(1024);
					func_582(74);
				}
				break;
			case 2:
				if (func_508(2))
				{
					func_581(1024);
				}
				else
				{
					func_583(1, 0, 0);
					func_584();
					func_581(1024);
					func_582(74);
				}
				break;
			default:
				func_583(1, 0, 0);
				func_584();
				func_581(1024);
				func_582(74);
				break;
		}
	}
}

void func_265()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_191(0);
	fVar5 = 1148829696; /* Float: 999f */
	fVar6 = 1148829696; /* Float: 999f */
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	bVar8 = false;
	iVar7 = 0;
	while (iVar7 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar7);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
			iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
			if (!func_535(iVar7))
			{
			}
			else if (func_538(2, iVar7))
			{
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !PED::IS_PED_DEAD_OR_DYING(iVar3, true))
			{
				fVar4 = func_585(0, iVar7, 1);
				if (fVar4 != 0f)
				{
					if (fVar4 < fVar5)
					{
						fVar5 = fVar4;
						Local_13.f_7.f_20 = iVar2;
					}
					if ((PED::IS_PED_ON_MOUNT(iVar3) && fVar4 < 1112014848) && (fVar4 < fVar6 || !NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_23)))
					{
						bVar8 = true;
						fVar6 = fVar4;
						Local_13.f_7.f_23 = iVar2;
					}
				}
			}
		}
		iVar7++;
	}
	if (!bVar8)
	{
		Local_13.f_7.f_23 = 255;
	}
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
	{
	}
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_23))
	{
	}
}

void func_266()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	float fVar7;

	iVar1 = 255;
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_21))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_7.f_21))
		{
			iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_13.f_7.f_21);
			if (func_534(iVar5, 1))
			{
				if (func_535(iVar5))
				{
					iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_21);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !PED::IS_PED_DEAD_OR_DYING(iVar2, true))
					{
						fVar4 = -3.273909E-18f;
						if (WEAPON::GET_CURRENT_PED_WEAPON(iVar2, &fVar4, false, 0, false))
						{
							if (func_586(fVar4))
							{
								func_587(16);
								return;
							}
						}
					}
				}
			}
		}
	}
	Local_13.f_7.f_21 = 255;
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar3);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			if (func_535(iVar3))
			{
				iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
				iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !PED::IS_PED_DEAD_OR_DYING(iVar2, true))
				{
					fVar4 = -3.273909E-18f;
					if (WEAPON::GET_CURRENT_PED_WEAPON(iVar2, &fVar4, false, 0, false))
					{
						if (func_586(fVar4))
						{
							iVar6 = func_191(0);
							fVar7 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar6, true, false), ENTITY::GET_ENTITY_COORDS(iVar2, true, false));
							if (fVar7 < 1106247680)
							{
								func_587(16);
								Local_13.f_7.f_21 = iVar1;
								return;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	func_588(16);
}

void func_267()
{
	if (func_589(0, 0))
	{
		switch (func_242())
		{
			case 8:
				func_582(48);
				break;
			default:
				func_582(1);
				break;
		}
	}
}

void func_268()
{
	if (func_192())
	{
		func_582(2);
		return;
	}
	if (func_590(1.084202E-19f))
	{
		func_582(71);
		return;
	}
	if (func_591(0, 1097859072 /* Float: 15f */, 0, 1) < 1)
	{
		func_592(0, 1115815936 /* Float: 65f */, 5000, 0, 0, 1, 2, -1, -1, -1, 1, -1);
	}
	else if (func_591(0, 1108082688 /* Float: 35f */, 0, 1) < 2)
	{
		func_592(0, 1115815936 /* Float: 65f */, 10000, 0, 176, 177, 178, 179, -1, -1, 0, -1);
	}
}

void func_269()
{
	int iVar0;

	func_593();
	if (func_508(64))
	{
		func_582(25);
		return;
	}
	iVar0 = func_191(0);
	if ((func_349(iVar0, -2.703646E+07f) || func_349(iVar0, -0.001425525f)) || !func_349(iVar0, 0.002842281f))
	{
		func_582(3);
	}
}

void func_270()
{
	int iVar0;
	var uVar1;
	int iVar2;
	vector3 vVar3;

	func_593();
	if (func_594())
	{
		func_587(512);
		func_582(72);
		return;
	}
	if (func_508(64))
	{
		func_582(25);
		return;
	}
	iVar0 = func_191(0);
	if ((func_595(3) || func_595(5)) || func_595(4))
	{
		func_596(&(Local_13.f_7.f_12));
		switch (func_242())
		{
			case 1:
			case 2:
				vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
				iVar2 = func_597(&uVar1, vVar3, 1103626240 /* Float: 25f */, 0, 1);
				if (iVar2 > 0)
				{
					func_582(5);
				}
				else
				{
					func_582(4);
				}
				break;
			default:
				func_582(5);
				break;
		}
	}
}

void func_271()
{
	int iVar0;
	var uVar1;
	int iVar2;
	vector3 vVar3;

	func_593();
	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
		iVar2 = func_597(&uVar1, vVar3, 1103626240 /* Float: 25f */, 0, 1);
		if (iVar2 > 0)
		{
			if (!func_598(1))
			{
				func_599(0, 0, 108, 0);
			}
		}
		else
		{
			func_592(0, 1115815936 /* Float: 65f */, 5000, 0, 104, 105, 106, 107, -1, -1, 1, -1);
		}
		if (func_595(107))
		{
			func_582(9);
		}
		else if (func_595(108))
		{
			func_582(5);
		}
	}
}

void func_272()
{
	int iVar0;
	int iVar1;

	func_593();
	if (func_594())
	{
		func_587(512);
		func_582(72);
		return;
	}
	if (func_508(64))
	{
		func_582(25);
		return;
	}
	iVar0 = func_191(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!AUDIO::_IS_PED_IN_ANY_CONVERSATION(iVar0, false))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) < 1092616192)
			{
				func_596(&(Local_13.f_7.f_12));
				func_582(6);
			}
			else
			{
				func_592(0, 1115815936 /* Float: 65f */, 5000, 0, 3, 7, 8, -1, -1, -1, 0, -1);
			}
		}
	}
}

void func_273()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	if (func_508(64))
	{
		func_582(25);
		return;
	}
	if (func_594())
	{
		func_587(512);
		func_582(71);
		return;
	}
	if (func_595(9))
	{
		if (func_231(0) != 1)
		{
			func_589(0, 1);
		}
	}
	if (func_590(1))
	{
		if (func_589(0, 0))
		{
			func_582(8);
		}
	}
	else if (func_590(2))
	{
		if (func_589(0, 2))
		{
			iVar4 = func_191(0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && !PED::IS_PED_DEAD_OR_DYING(iVar4, true))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(iVar4, false, false) };
			}
			else
			{
				vVar0 = { Local_947.f_15 };
			}
			iVar3 = func_600(vVar0, 1103626240 /* Float: 25f */);
			if (func_601(2) > 1)
			{
				func_582(9);
			}
			else if (iVar3 > 2)
			{
				func_587(256);
				func_582(7);
			}
			else if (iVar3 > 1)
			{
				func_587(128);
				func_582(7);
			}
			else
			{
				func_582(9);
			}
		}
	}
}

void func_274()
{
	if (func_508(64))
	{
		func_582(25);
		return;
	}
	if (func_594())
	{
		func_587(512);
		func_582(71);
		return;
	}
	if (func_590(1))
	{
		if (func_589(0, 0))
		{
			func_582(8);
		}
	}
	else if (func_590(4) || func_601(2) > 1)
	{
		if (func_589(0, 0))
		{
			func_582(9);
		}
	}
}

void func_275()
{
	func_596(&(Local_13.f_7.f_12));
	if (func_601(2) > 0)
	{
		return;
	}
	switch (func_242())
	{
		case 0:
			func_582(10);
			break;
		case 1:
		case 2:
			func_582(31);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_582(10);
			break;
		case 9:
		case 10:
		case 11:
			func_582(62);
			break;
		default:
			func_582(31);
			break;
	}
}

void func_276()
{
	if (func_595(35))
	{
		switch (func_242())
		{
			case 0:
				func_582(21);
				break;
			case 1:
			case 2:
				func_582(41);
				break;
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				func_582(21);
				break;
			case 9:
			case 10:
			case 11:
				func_582(68);
				break;
			default:
				func_582(21);
				break;
		}
	}
	func_599(0, 0, 35, 0);
}

void func_277()
{
	if (func_508(64))
	{
		func_582(25);
		return;
	}
	if (func_595(34))
	{
		if (func_602(64))
		{
			func_582(11);
		}
	}
	else if (func_603(Local_13.f_7.f_10, 1500))
	{
		func_599(0, 0, 34, 0);
	}
}

void func_278()
{
	int iVar0;
	vector3 vVar1;

	if (func_508(64))
	{
		func_582(25);
		return;
	}
	iVar0 = func_191(0);
	switch (func_242())
	{
		case 0:
			vVar1 = { func_373(0) };
			break;
		default:
			vVar1 = { func_373(3) };
			break;
	}
	if (BUILTIN::VDIST(vVar1, ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) < 2f)
	{
		if (func_589(0, 3))
		{
			func_582(12);
		}
	}
}

void func_279()
{
	int iVar0;

	if (func_594())
	{
		func_587(512);
		func_582(71);
		return;
	}
	if (func_231(0) != 3)
	{
		func_589(0, 3);
	}
	if (Local_13.f_7.f_18 > func_604())
	{
		func_581(64);
	}
	iVar0 = func_242();
	if (iVar0 == 0 && func_605())
	{
		func_582(19);
	}
	else if (func_508(64))
	{
		func_582(25);
	}
	else if (func_590(2048))
	{
		if (func_589(0, 0))
		{
			func_587(1);
			func_582(13);
		}
	}
	else if (func_590(8))
	{
		if (func_589(0, 4))
		{
			func_587(2);
			func_582(13);
		}
	}
	else if (func_590(16))
	{
		if (func_589(0, 4))
		{
			Local_13.f_7.f_18++;
			func_587(4);
			func_582(13);
		}
	}
}

void func_280()
{
	if (func_508(64))
	{
		func_582(25);
		return;
	}
	if (func_606(1))
	{
		func_588(1);
		func_582(18);
	}
	else if (func_606(2))
	{
		if (!func_590(8))
		{
			func_588(2);
			func_362();
			func_582(14);
		}
	}
	else if (func_606(4))
	{
		if (!func_590(16))
		{
			func_588(4);
			func_582(16);
		}
	}
}

void func_281()
{
	int iVar0;

	if (func_508(64))
	{
		func_582(25);
		return;
	}
	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_508(2.524355E-29f))
		{
			func_582(15);
		}
	}
}

void func_282()
{
	int iVar0;
	int iVar1;

	if (func_508(64))
	{
		func_582(25);
		return;
	}
	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_508(2.524355E-29f))
		{
			if (func_589(0, 3))
			{
				iVar1 = func_607();
				func_608(iVar1);
				func_582(12);
			}
		}
	}
}

void func_283()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	if (func_508(64))
	{
		func_582(25);
		return;
	}
	iVar0 = func_191(0);
	if (func_349(iVar0, -2.793181E-34f))
	{
		vVar1 = { func_373(1) };
		vVar4 = { func_373(0) };
		if (func_578())
		{
			vVar1 = { func_513(2) };
			vVar4 = { func_373(3) };
		}
		Local_13.f_7.f_27 = { func_573(vVar1 - vVar4) + vVar1 };
		func_582(17);
	}
}

void func_284()
{
	int iVar0;
	int iVar1;

	iVar0 = func_242();
	iVar1 = func_191(0);
	if (iVar0 == 0 && func_605())
	{
		func_582(19);
	}
	else if (func_508(64))
	{
		func_582(25);
	}
	else if (!func_349(iVar1, -2.793181E-34f))
	{
		if (!func_508(1.084202E-19f))
		{
			if (func_589(0, 3))
			{
				func_582(12);
			}
		}
	}
}

void func_285()
{
	if (func_508(64))
	{
		func_582(25);
		return;
	}
	if (func_508(8192))
	{
		func_582(20);
	}
}

void func_286()
{
	int iVar0;

	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!func_610(func_609(86)))
		{
			if (!func_595(87))
			{
				func_599(0, 0, 87, 0);
			}
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_582(22);
	}
}

void func_287()
{
	if (func_508(64))
	{
		func_582(25);
		return;
	}
	if (func_590(1.084202E-19f))
	{
		func_582(71);
		return;
	}
	if (func_590(2.350989E-38f))
	{
		func_582(72);
	}
}

void func_288()
{
	int iVar0;

	if (func_508(64))
	{
		func_582(25);
		return;
	}
	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_603(Local_13.f_7.f_10, 1500))
		{
			func_599(0, 0, 35, 0);
		}
	}
	if (func_595(35))
	{
		func_582(22);
	}
}

void func_289()
{
	int iVar0;

	if (func_508(64))
	{
		func_582(25);
		return;
	}
	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!func_349(iVar0, -2.793181E-34f))
		{
			func_582(72);
		}
	}
}

void func_290()
{
	int iVar0;
	int iVar1;

	func_589(0, 0);
	iVar0 = func_191(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_581(512);
		func_582(28);
		return;
	}
	else
	{
		if (func_508(32768) && func_512(0, 2) > func_611())
		{
			if (!func_595(97) && !func_595(98))
			{
				if (!func_606(131072))
				{
					func_587(131072);
					func_583(1, 0, 0);
				}
				func_592(0, 1115815936 /* Float: 65f */, 4000, 0, 97, 98, -1, -1, -1, -1, 1, -1);
			}
		}
		else
		{
			func_592(0, 1115815936 /* Float: 65f */, 4000, 0, 94, 95, 96, -1, -1, -1, 0, -1);
		}
		if (func_349(iVar0, 2.40763E-20f))
		{
			func_582(30);
			return;
		}
	}
	iVar1 = func_191(2);
	if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true)) || func_349(iVar1, 2.40763E-20f)) || func_512(0, 2) > 1120403456)
	{
		func_581(512);
		func_582(26);
	}
}

void func_291()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_191(2);
	iVar1 = func_191(0);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || func_349(iVar0, 2.40763E-20f))
	{
		iVar2 = 1;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true)) || func_349(iVar1, 8.088558E+37f))
	{
		iVar3 = 1;
	}
	func_612();
	if (func_603(Local_13.f_7.f_10, 2000))
	{
		func_581(4096);
	}
	if (iVar2 && iVar3)
	{
		func_582(24);
	}
}

void func_292()
{
	if (func_595(99) || func_603(Local_13.f_7.f_10, 10000))
	{
		if (func_603(Local_13.f_7.f_10, 5000))
		{
			func_582(72);
		}
	}
	func_612();
}

void func_293()
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = func_191(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_582(28);
	}
	else
	{
		fVar2 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
		if (func_603(Local_13.f_7.f_10, 2000))
		{
			if (fVar2 < 1090519040 || func_603(Local_13.f_7.f_10, 10000))
			{
				func_582(27);
			}
		}
	}
}

void func_294()
{
	if (func_595(88))
	{
		func_582(72);
	}
	else
	{
		func_599(0, 0, 88, 0);
	}
}

void func_295()
{
	int iVar0;

	iVar0 = func_191(2);
	if (((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || func_349(iVar0, 2.40763E-20f)) || func_349(iVar0, 102.1545f))
	{
		func_582(29);
	}
}

void func_296()
{
	int iVar0;

	iVar0 = func_191(2);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || func_591(2, 1125515264 /* Float: 150f */, 0, 1) < 1)
	{
		func_582(75);
	}
}

void func_297()
{
	func_589(0, 0);
	if (func_512(0, 2) < func_611() || !func_508(32768))
	{
		func_592(0, 1115815936 /* Float: 65f */, 4000, 0, 94, 95, 96, -1, -1, -1, 0, -1);
	}
}

void func_298()
{
	int iVar0;

	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_603(Local_13.f_7.f_10, 1500))
		{
			func_599(0, 0, 34, 0);
		}
	}
	if (func_595(34) && func_602(64))
	{
		func_582(32);
	}
}

void func_299()
{
	int iVar0;

	if (func_594())
	{
		func_587(512);
		func_582(71);
		return;
	}
	iVar0 = func_191(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_582(33);
	}
	if (func_508(1))
	{
	}
	else
	{
		func_582(33);
	}
}

void func_300()
{
	int iVar0;

	if (func_594())
	{
		func_587(512);
		func_582(71);
		return;
	}
	iVar0 = func_191(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_582(34);
		return;
	}
	if (func_508(1))
	{
		func_582(32);
		return;
	}
	if (func_349(iVar0, 6.915501E+28f))
	{
		func_582(34);
	}
}

void func_301()
{
	int iVar0;

	if (func_594())
	{
		func_587(512);
		func_582(71);
		return;
	}
	if (func_508(1))
	{
		func_582(32);
		return;
	}
	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_FULLY_ON_MOUNT(iVar0, true))
		{
			switch (func_242())
			{
				case 1:
					func_596(&(Local_13.f_7.f_12));
					func_582(35);
					break;
				case 2:
					func_582(43);
					break;
			}
			return;
		}
	}
}

void func_302()
{
	int iVar0;

	if (func_594())
	{
		func_587(512);
		func_582(71);
		return;
	}
	if (func_508(1))
	{
		func_582(32);
		return;
	}
	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			if (func_590(2048))
			{
				if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 1036831949)
				{
					func_582(36);
				}
				else
				{
					func_582(38);
				}
				return;
			}
		}
		else
		{
			func_582(32);
			return;
		}
	}
}

void func_303()
{
	int iVar0;

	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!PED::IS_PED_ON_MOUNT(iVar0))
		{
			func_582(37);
		}
	}
}

void func_304()
{
	int iVar0;

	iVar0 = func_191(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_582(38);
		return;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Local_947.f_19.f_155) || PED::IS_PED_DEAD_OR_DYING(Local_947.f_19.f_155, true)) || ((!func_613(Local_947.f_19.f_155, 0.1457215f) && !PED::IS_PED_ON_MOUNT(iVar0)) && func_603(Local_13.f_7.f_10, 5000)))
	{
		func_582(38);
		return;
	}
	if (func_603(Local_13.f_7.f_10, 10000))
	{
		func_582(38);
	}
}

void func_305()
{
	func_587(2048);
	func_582(39);
}

void func_306()
{
	if (func_590(1.084202E-19f))
	{
		func_582(71);
		return;
	}
	if (func_590(2.350989E-38f))
	{
		func_582(40);
	}
}

void func_307()
{
	int iVar0;

	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!PED::IS_PED_ON_MOUNT(iVar0))
		{
			func_582(72);
		}
	}
}

void func_308()
{
	int iVar0;

	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_603(Local_13.f_7.f_10, 1500))
		{
			func_599(0, 0, 35, 0);
		}
	}
	if (func_595(35))
	{
		func_582(42);
	}
}

void func_309()
{
	func_582(72);
}

void func_310()
{
	int iVar0;

	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_349(iVar0, 2.40763E-20f))
		{
			func_582(44);
		}
	}
}

void func_311()
{
	int iVar0;

	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!PED::IS_PED_ON_MOUNT(iVar0))
		{
			func_582(45);
		}
	}
}

void func_312()
{
	int iVar0;

	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_349(iVar0, 2.40763E-20f))
		{
			func_582(47);
		}
	}
}

void func_313()
{
	int iVar0;

	iVar0 = func_191(0);
	if ((func_614(0) || !ENTITY::DOES_ENTITY_EXIST(iVar0)) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_582(75);
		return;
	}
}

void func_314()
{
	if (func_192())
	{
		func_582(49);
	}
}

void func_315()
{
	if (func_615(262144))
	{
		func_582(50);
	}
}

void func_316()
{
	if (func_615(524288))
	{
		func_582(51);
	}
}

void func_317()
{
	if (func_616(1))
	{
		func_582(52);
	}
}

void func_318()
{
	if (func_508(65536) && func_615(1048576))
	{
		func_582(53);
	}
	else if (func_508(131072))
	{
		func_582(58);
	}
}

void func_319()
{
	if (func_594())
	{
		if (func_589(0, 0))
		{
			func_587(512);
			func_582(58);
			return;
		}
	}
	if (func_595(9))
	{
		if (func_231(0) != 1)
		{
			func_589(0, 1);
		}
	}
	if (func_590(1))
	{
		if (func_589(0, 0))
		{
			func_582(54);
		}
	}
	else if (func_590(2))
	{
		if (func_589(0, 0))
		{
			func_582(55);
		}
	}
	else if (func_508(131072))
	{
		func_582(58);
	}
}

void func_320()
{
	func_596(&(Local_13.f_7.f_12));
	if (func_602(64))
	{
		func_582(56);
	}
}

void func_321()
{
	func_582(58);
}

void func_322()
{
	func_582(57);
}

void func_323()
{
	if (func_594())
	{
		if (func_589(0, 0))
		{
			func_587(512);
			func_582(58);
			return;
		}
	}
	if (func_590(2048))
	{
		func_582(58);
	}
}

void func_324()
{
	if (func_616(3))
	{
		func_582(59);
	}
}

void func_325()
{
	int iVar0;
	int iVar1;

	if (func_590(2048))
	{
		iVar0 = func_617();
		if (!func_595(iVar0))
		{
			if (!func_598(1))
			{
				func_599(0, 4, iVar0, 0);
			}
		}
	}
	else if (func_590(2))
	{
		if (!func_595(35))
		{
			if (!func_598(1))
			{
				func_599(0, 0, 35, 0);
			}
		}
	}
	iVar1 = func_191(0);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true)) || !func_504())
	{
		func_587(1024);
		if (func_606(512))
		{
			func_582(71);
		}
		else if (func_580())
		{
			func_582(60);
		}
		else
		{
			func_582(61);
		}
	}
}

void func_326()
{
	if (func_590(1.084202E-19f))
	{
		func_582(71);
		return;
	}
	if (func_590(2.350989E-38f))
	{
		func_582(61);
	}
}

void func_327()
{
	func_582(72);
}

void func_328()
{
	if (!func_595(34))
	{
		if (func_603(Local_13.f_7.f_10, 1500))
		{
			func_599(0, 0, 34, 0);
		}
	}
	if (func_595(34) && func_602(64))
	{
		func_582(63);
	}
}

void func_329()
{
	int iVar0;
	int iVar1;

	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!AUDIO::_IS_PED_IN_ANY_CONVERSATION(iVar0, false))
		{
			switch (func_242())
			{
				case 9:
					if (!func_595(131))
					{
						func_599(0, 0, 131, 0);
					}
					break;
				case 10:
					if (!func_595(133))
					{
						func_599(0, 0, 133, 0);
					}
					break;
				case 11:
					if (!func_595(135))
					{
						func_599(0, 0, 135, 0);
					}
					break;
			}
		}
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_373(5)) < 5f && ((func_595(131) || func_595(133)) || func_595(135)))
		{
			iVar1 = func_242();
			switch (iVar1)
			{
				case 10:
					func_587(4096);
					break;
				case 11:
					func_587(8192);
					break;
			}
			func_582(64);
		}
	}
}

void func_330()
{
	func_582(65);
}

void func_331()
{
	if (func_594())
	{
		func_587(512);
		func_582(71);
		return;
	}
	if (func_590(2048))
	{
		func_582(66);
	}
}

void func_332()
{
	if (func_580())
	{
		func_588(4096);
		if (func_242() == 11)
		{
			func_582(67);
		}
		else
		{
			func_582(69);
		}
	}
}

void func_333()
{
	int iVar0;

	iVar0 = func_191(0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && !PED::IS_PED_LASSOED(iVar0)) && !PED::IS_PED_HOGTIED(iVar0))
	{
		func_588(8192);
		func_587(16384);
		func_582(69);
	}
	if (func_595(173))
	{
		func_588(8192);
	}
}

void func_334()
{
	int iVar0;

	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_603(Local_13.f_7.f_10, 1500))
		{
			func_599(0, 0, 35, 0);
		}
	}
	if (func_595(35))
	{
		func_582(70);
	}
}

void func_335()
{
	if (func_590(1.084202E-19f))
	{
		func_582(71);
		return;
	}
	if (func_590(2.350989E-38f))
	{
		func_582(70);
	}
}

void func_336()
{
	func_582(72);
}

void func_337()
{
	if (func_231(0) != 0)
	{
		func_589(0, 0);
	}
	if (((func_595(72) || func_595(73)) || func_595(174)) || func_595(175))
	{
		func_582(72);
	}
}

void func_338()
{
	int iVar0;
	int iVar1;

	if (func_231(0) != 5)
	{
		func_589(0, 5);
	}
	if (func_508(64))
	{
		func_582(25);
		return;
	}
	if (func_512(0, 1) > 1116471296)
	{
		func_587(0f);
	}
	iVar0 = func_191(0);
	iVar1 = func_191(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true)) || (PED::IS_PED_ON_MOUNT(iVar0) && PED::GET_MOUNT(iVar0) == iVar1)) || func_606(0f))
		{
			func_582(73);
		}
	}
}

void func_339()
{
	int iVar0;

	if (func_231(0) != 5)
	{
		func_589(0, 5);
	}
	if (func_508(64))
	{
		func_582(25);
		return;
	}
	if (func_614(0))
	{
		func_582(75);
		return;
	}
	iVar0 = func_191(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_ON_MOUNT(iVar0)) && !func_606(0f))
	{
		func_582(72);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && !func_510(0))
	{
		if (func_618(1092616192 /* Float: 10f */, 128, 0))
		{
			func_592(0, 1092616192 /* Float: 10f */, 10000, 0, 101, 102, 103, -1, -1, -1, 0, -1);
		}
		else if (func_619(1092616192 /* Float: 10f */, 2048, 4096))
		{
			if (func_590(512) || func_590(1024))
			{
				func_592(0, 1092616192 /* Float: 10f */, 10000, 0, 25, 26, 27, -1, -1, -1, 0, -1);
			}
			else if (func_590(256))
			{
				func_592(0, 1092616192 /* Float: 10f */, 10000, 0, 28, 29, 30, -1, -1, -1, 0, -1);
			}
		}
		else if (func_619(1092616192 /* Float: 10f */, 8192, 0) || func_619(1092616192 /* Float: 10f */, 128, 0))
		{
			func_592(0, 1092616192 /* Float: 10f */, 10000, 0, 31, 32, 33, -1, -1, -1, 0, -1);
		}
	}
}

void func_340()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (func_231(0) != 5)
	{
		func_589(0, 5);
	}
	iVar0 = func_191(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		func_582(75);
	}
	else
	{
		if (func_614(0))
		{
			func_582(75);
			return;
		}
		bVar2 = true;
		if (func_595(79))
		{
			bVar2 = false;
		}
		if (PED::IS_PED_HOGTIED(iVar0) || PED::IS_PED_LASSOED(iVar0))
		{
			func_592(0, 1115815936 /* Float: 65f */, 4000, 3, 79, 80, 81, 74, 75, 76, bVar2, -1);
		}
		else if (func_595(79) && !func_595(82))
		{
			func_599(0, 3, 82, 0);
		}
		else if (func_590(1048576))
		{
			func_592(0, 1115815936 /* Float: 65f */, 4000, 3, 77, 74, 75, 76, -1, -1, 1, -1);
		}
		else
		{
			func_592(0, 1115815936 /* Float: 65f */, 4000, 3, 74, 75, 76, -1, -1, -1, bVar2, -1);
		}
	}
}

void func_341()
{
	if (func_590(2048))
	{
		switch (func_242())
		{
			case 1:
				if (func_606(2048))
				{
					func_620(1);
				}
				break;
			case 8:
				if (func_606(1024))
				{
					func_620(1);
				}
				break;
			case 11:
				if (func_606(16384))
				{
					func_620(1);
				}
				break;
			default:
				func_620(1);
				break;
		}
	}
}

void func_342()
{
	if (!func_621() || func_603(Local_13.f_7.f_10, 20000))
	{
		func_620(6);
		return;
	}
	if (func_508(64) || func_510(0))
	{
		func_620(6);
		return;
	}
	if (func_603(Local_13.f_7.f_10, 1000))
	{
		func_620(2);
	}
}

void func_343()
{
	int iVar0;

	if (!func_621() || func_603(Local_13.f_7.f_10, 20000))
	{
		func_620(6);
		return;
	}
	if (func_508(64) || func_510(0))
	{
		func_620(6);
		return;
	}
	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!PED::IS_PED_ON_MOUNT(iVar0) || func_349(iVar0, 5.999514E-21f))
		{
			func_620(3);
		}
	}
}

void func_344()
{
	int iVar0;
	int iVar1;

	if (!func_621() || func_603(Local_13.f_7.f_10, 20000))
	{
		func_620(6);
		return;
	}
	if (func_508(64) || func_510(0))
	{
		func_620(6);
		return;
	}
	iVar0 = func_617();
	if (!func_595(iVar0))
	{
		if (!func_598(1))
		{
			func_599(0, 4, iVar0, 0);
		}
	}
	iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_13.f_7.f_22);
	if (func_622(0, 1075838976 /* Float: 2.5f */, iVar1, 0))
	{
		func_587(262144);
		func_620(4);
	}
	else if (!func_622(0, 1106247680 /* Float: 30f */, iVar1, 0))
	{
		func_620(6);
	}
}

void func_345()
{
	if (!func_621())
	{
		func_620(6);
		return;
	}
	if (func_508(64) || func_510(0))
	{
		func_620(6);
		return;
	}
	if (func_603(Local_13.f_7.f_13, 9000))
	{
		func_620(7);
		return;
	}
	if (!func_595(71))
	{
		if (!func_598(1))
		{
			func_599(0, 4, 71, 0);
		}
	}
	if (func_595(71) && func_590(4194304))
	{
		if (func_603(Local_13.f_7.f_13, 6000))
		{
			func_587(262144);
			func_620(5);
		}
	}
}

void func_346()
{
	int iVar0;

	if (!func_621() || func_603(Local_13.f_7.f_10, 20000))
	{
		func_620(7);
		return;
	}
	if (func_508(64) || func_510(0))
	{
		func_620(6);
		return;
	}
	if (!func_598(1))
	{
		func_599(0, 4, func_623(), 0);
	}
	iVar0 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!func_613(iVar0, -0.001425525f) || ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iVar0, func_357(7), func_624(7)) > 1063675494)
		{
			func_620(7);
		}
	}
}

void func_347()
{
}

void func_348()
{
	func_482(2.350989E-38f);
}

bool func_349(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_350(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_351(int iParam0)
{
	if (!func_190(iParam0))
	{
		return 0;
	}
	if (!func_253(iParam0))
	{
		return 0;
	}
	return Global_1141317[iParam0 /*27*/].f_18.f_1;
}

void func_352(var uParam0, int iParam1)
{
	func_625(uParam0, iParam1);
}

void func_353(var uParam0, int iParam1)
{
	func_626(uParam0, iParam1);
}

void func_354(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 185:
			if (func_627(&Var0, iParam0))
			{
				func_628(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_355(int iParam0)
{
	struct<6> Var0;
	int iVar32;
	int iVar33;
	var uVar34;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 32))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_1))
	{
		return;
	}
	iVar32 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	if (!PED::IS_PED_A_PLAYER(iVar32))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0))
	{
		return;
	}
	iVar33 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if (PED::IS_PED_DEAD_OR_DYING(iVar33, true))
	{
		return;
	}
	uVar34 = Var0.f_5;
}

void func_356(int iParam0)
{
	vector3 vVar0;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	if (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0) != 3.74883E+11f)
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 10))
	{
		return;
	}
	uVar10 = vVar0.x;
	iVar11 = uVar10;
	iVar12 = vVar0.z;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar12))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar12))
	{
		return;
	}
	iVar13 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar12);
	if (ENTITY::IS_ENTITY_DEAD(iVar13) || PED::IS_PED_INJURED(iVar13))
	{
		return;
	}
	if (iVar13 != func_191(1))
	{
		return;
	}
	switch (iVar11)
	{
		case 11:
		case 33:
			func_482(3.85186E-34f);
			break;
		default:
			return;
	}
}

char* func_357(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mech_loco_m@generic@reaction@avoid@unarmed@soft@walk_backwards";
		case 1:
			return "script_re@photography";
		case 2:
			return "script_re@photography";
		case 3:
			return "script_re@photography";
		case 4:
			return "script_re@photography";
		case 5:
			return "script_re@photography";
		case 6:
			return "script_re@photography";
		case 7:
			return "script_mp@common@handovers@satchel";
		case 8:
			return "script_mp@common@handovers@satchel";
		case 9:
			return "MECH_LOCO_F@GENERIC@REACTION@HANDSUP@UNARMED@NORMAL";
		case 10:
			return "MECH_LOCO_F@GENERIC@REACTION@HANDSUP@UNARMED@NORMAL";
		case 11:
			return "MECH_LOCO_F@GENERIC@REACTION@HANDSUP@UNARMED@NORMAL";
		default:
			break;
	}
	return "";
}

char* func_358(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@beat@wilderness@photography@fishing@fishing";
		default:
			break;
	}
	return "script@beat@wilderness@photography@fishing@fishing";
}

char* func_359(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_INITIAL";
		case 1:
			return "PBL_CATCH";
		case 2:
			return "PBL_IDLE";
		case 3:
			return "PBL_KEEP";
		default:
			break;
	}
	return "";
}

bool func_360(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam2))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam0, iParam3, sParam4, true, true);
			}
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(*uParam1))
				{
					if (!NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(*uParam1))
					{
						return false;
					}
				}
				if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam1, false) && !ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, false, false))
					{
						ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
					}
					return false;
				}
				else
				{
					*uParam2 = NETWORK::_ANIM_SCENE_TO_NET(*uParam1);
				}
			}
			return false;
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam2))
	{
		return false;
	}
	*uParam1 = NETWORK::_NET_TO_ANIM_SCENE(*uParam2);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		return false;
	}
	return true;
}

int func_361(int iParam0)
{
	switch (func_242())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -0.03024206f;
				case 1:
					return 4.874238E+36f;
				case 2:
					return 1.315808E+30f;
				case 3:
					return 5.186376E+13f;
				default:
					break;
			}
			break;
		case 3:
			switch (func_246())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1.901343E+17f;
						case 1:
							return 4.874238E+36f;
						case 2:
							return -0.03024206f;
						case 3:
							return 5.186376E+13f;
						case 4:
							return -3.474282E-25f;
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return 1.901343E+17f;
						case 1:
							return 4.874238E+36f;
						case 2:
							return 1.315808E+30f;
						case 3:
							return 5.186376E+13f;
						case 4:
							return -3.474282E-25f;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (func_246())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1.901343E+17f;
						case 1:
							return 4.874238E+36f;
						case 2:
							return -0.03024206f;
						case 3:
							return 5.186376E+13f;
						case 4:
							return -0.000280575f;
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return 1.901343E+17f;
						case 1:
							return 4.874238E+36f;
						case 2:
							return 1.315808E+30f;
						case 3:
							return 5.186376E+13f;
						case 4:
							return -0.000280575f;
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			switch (func_246())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1.901343E+17f;
						case 1:
							return 4.874238E+36f;
						case 2:
							return -0.03024206f;
						case 3:
							return 5.186376E+13f;
						case 4:
							return -0.0002093209f;
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return 1.901343E+17f;
						case 1:
							return 4.874238E+36f;
						case 2:
							return 1.315808E+30f;
						case 3:
							return 5.186376E+13f;
						case 4:
							return -0.0002093209f;
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (func_246())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1.901343E+17f;
						case 1:
							return 4.874238E+36f;
						case 2:
							return -0.03024206f;
						case 3:
							return 5.186376E+13f;
						case 4:
							return -2.702134E+22f;
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return 1.901343E+17f;
						case 1:
							return 4.874238E+36f;
						case 2:
							return 1.315808E+30f;
						case 3:
							return 5.186376E+13f;
						case 4:
							return -2.702134E+22f;
						default:
							break;
					}
					break;
			}
			break;
		case 7:
			switch (func_246())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1.901343E+17f;
						case 1:
							return 4.874238E+36f;
						case 2:
							return -0.03024206f;
						case 3:
							return 5.186376E+13f;
						case 4:
							return 7.48757E+37f;
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return 1.901343E+17f;
						case 1:
							return 4.874238E+36f;
						case 2:
							return 1.315808E+30f;
						case 3:
							return 5.186376E+13f;
						case 4:
							return 7.48757E+37f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			switch (iParam0)
			{
				case 0:
					return -0.03024206f;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_362()
{
	Local_13.f_7.f_19++;
	if (Local_13.f_7.f_19 < 1 || Local_13.f_7.f_19 > 3)
	{
		Local_13.f_7.f_19 = 1;
	}
}

bool func_363()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (MISC::IS_BIT_SET(Local_947.f_274.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_629(iVar0);
			if (iVar2 == 0)
			{
				Jump @132; //curOff = 54
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_947.f_274.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_947.f_274.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @132; //curOff = 112
				}
				else
				{
					MISC::SET_BIT(&(Local_947.f_274.f_3), iVar0);
				}
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return false;
	}
	return true;
}

bool func_364()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	bVar2 = false;
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (MISC::IS_BIT_SET(Local_947.f_329[iVar0 /*76*/].f_1, iVar1))
			{
			}
			else
			{
				iVar3 = func_558(iVar0, iVar1);
				if (func_630(iVar1))
				{
					if (Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_6 == 0 || !PED::_IS_META_PED_ASSET_VALID(Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_6))
					{
						Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_6 = PED::_REQUEST_META_PED_ASSET_BUNDLE(Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_3, 0);
						bVar2 = true;
					}
					else if (!PED::_HAS_META_PED_ASSET_LOADED(Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_6))
					{
						bVar2 = true;
					}
					else if (!MISC::IS_BIT_SET(Local_947.f_329[iVar0 /*76*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_947.f_329[iVar0 /*76*/].f_1), iVar1);
					}
				}
				else if (func_631(iVar1))
				{
					WEAPON::_REQUEST_WEAPON_ASSET(Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_5, -1, false);
					if (!WEAPON::_HAS_WEAPON_ASSET_LOADED(Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_5))
					{
						bVar2 = true;
					}
					else if (!MISC::IS_BIT_SET(Local_947.f_329[iVar0 /*76*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_947.f_329[iVar0 /*76*/].f_1), iVar1);
					}
				}
				else if (iVar3 == 0)
				{
					Jump @468; //curOff = 360
				}
				else
				{
					if (!MISC::IS_BIT_SET(Local_947.f_329[iVar0 /*76*/], iVar1))
					{
						STREAMING::REQUEST_MODEL(iVar3, false);
						MISC::SET_BIT(&(Local_947.f_329[iVar0 /*76*/]), iVar1);
					}
					if (!STREAMING::HAS_MODEL_LOADED(iVar3))
					{
						bVar2 = true;
						Jump @468; //curOff = 422
					}
					else if (!MISC::IS_BIT_SET(Local_947.f_329[iVar0 /*76*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_947.f_329[iVar0 /*76*/].f_1), iVar1);
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	if (bVar2)
	{
		return false;
	}
	return true;
}

bool func_365()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	float fVar14;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	vector3 vVar27;

	bVar3 = false;
	vVar4 = { 0f, 0f, 0f };
	vVar7 = { 0f, 0f, 0f };
	vVar10 = { Local_947.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 1119092736);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			iVar2 = func_558(iVar0, iVar1);
			if (func_178(iVar0, iVar1))
			{
			}
			else if (!func_179(iVar0, iVar1))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (MISC::IS_BIT_SET(Local_947.f_329[iVar0 /*76*/].f_2, iVar1))
					{
						if (func_559(iVar0, iVar1))
						{
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar0 /*6*/][iVar1]))
							{
								if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_42[iVar0 /*6*/][iVar1]))
								{
									NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_42[iVar0 /*6*/][iVar1]);
								}
							}
						}
					}
				}
			}
			else if (MISC::IS_BIT_SET(Local_947.f_329[iVar0 /*76*/].f_2, iVar1))
			{
			}
			else
			{
				if (!func_560(iVar0, iVar1))
				{
					vVar7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar10, 0f, func_561(iVar0, iVar1)) };
				}
				else
				{
					vVar7 = { func_561(iVar0, iVar1) };
				}
				if (func_562(iVar0, iVar1))
				{
					if (!func_563(&vVar7, 1, 10, 0, 0))
					{
						bVar3 = true;
					}
					else
					{
						if (func_564(iVar0, iVar1))
						{
							iVar13 = PED::_CREATE_META_PED_ASSET(Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_3, vVar7, 0f, 0f, 0f, false, false, false);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
							{
								return false;
							}
						}
						else if (func_565(iVar0, iVar1))
						{
							iVar13 = WEAPON::_CREATE_WEAPON_OBJECT(Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_5, Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_4, func_561(iVar0, iVar1), true, 1f);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
							{
								return false;
							}
						}
						else if (iVar2 == 0)
						{
							Jump @837; //curOff = 451
						}
						else
						{
							iVar13 = OBJECT::CREATE_OBJECT(iVar2, vVar7, false, true, false, false, true);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
							{
								return false;
							}
						}
						MISC::SET_BIT(&(Local_947.f_329[iVar0 /*76*/].f_2), iVar1);
						if (func_567(iVar0, iVar1))
						{
							TASK::_MAKE_OBJECT_CARRIABLE(iVar13);
							GRAPHICS::SET_PICKUP_LIGHT(iVar13, true);
						}
						if (func_568(iVar0, iVar1))
						{
							ENTITY::_SET_ENTITY_LIGHTS_ENABLED(iVar13, true);
						}
						if (func_569(iVar0, iVar1))
						{
							ENTITY::SET_ENTITY_VISIBLE(iVar13, false);
						}
						else
						{
							ENTITY::_SET_ENTITY_FADE_IN(iVar13);
						}
						if (func_562(iVar0, iVar1))
						{
							ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar13, false);
						}
						vVar4 = { func_570(iVar0, iVar1) };
						if (!func_254(vVar4))
						{
							if (vVar4.x == 0f && vVar4.y == 0f)
							{
								if (vVar4.z != 0f)
								{
									ENTITY::SET_ENTITY_HEADING(iVar13, vVar4.z);
								}
							}
							else
							{
								ENTITY::SET_ENTITY_ROTATION(iVar13, vVar4, 2, true);
								if (!func_571(iVar0, iVar1, 32))
								{
									MISC::GET_MODEL_DIMENSIONS(iVar2, &vVar15, &vVar18);
									vVar21 = { vVar18 - vVar15 * Vector(1056964608, 1056964608, 1056964608) };
									vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, MISC::ABSF(func_572(vVar4.x)), MISC::ABSF(func_572(vVar4.y))) };
									vVar27 = { func_573(vVar24) * vVar21 };
									ENTITY::SET_ENTITY_COORDS(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
								}
							}
						}
						Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/] = iVar13;
						if (func_574(iVar0, iVar1))
						{
							func_575(iVar0, iVar1, 1);
						}
						bVar3 = true;
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					if (bVar3)
					{
						return false;
					}
					return true;
				}
			}
		}
	}
}

void func_366(struct<2> Param0)
{
	if (func_491(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_491(Param0)))
	{
		STATS::_0x99230691875FC218(func_489(Param0), func_491(Param0), Global_34);
	}
}

void func_367()
{
	int iVar0;
	int iVar1;

	if (!func_230(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_632(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_368()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 5)
		{
			if (func_179(iVar1, iVar2))
			{
			}
			else if (func_178(iVar1, iVar2))
			{
			}
			else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar1 /*6*/][iVar2]))
			{
				iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_42[iVar1 /*6*/][iVar2]);
				Local_947.f_329[iVar1 /*76*/].f_5[iVar2 /*14*/] = iVar0;
				if (func_559(iVar1, iVar2))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar1 /*6*/][iVar2]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_42[iVar1 /*6*/][iVar2]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_42[iVar1 /*6*/][iVar2]);
						}
					}
				}
				if (func_567(iVar1, iVar2))
				{
					TASK::_MAKE_OBJECT_CARRIABLE(iVar0);
					GRAPHICS::SET_PICKUP_LIGHT(iVar0, true);
				}
			}
			else if (0 != func_558(iVar1, iVar2))
			{
			}
			iVar2++;
		}
		iVar1++;
	}
}

void func_369(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
	}
	else
	{
		func_633(&(Local_947.f_406), *iParam0, iParam1);
	}
}

void func_370(int iParam0)
{
	if (Local_947.f_19.f_247 == 0)
	{
		Local_947.f_19.f_247 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(func_634(), iParam0, -1f, 20f, 30f, -1f, -1f, 180f, false, false, -1, -1);
	}
}

void func_371(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_635(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

void func_372()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_947.f_19.f_246, func_505(0), func_191(0), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_947.f_19.f_246, func_505(2), func_191(2), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_947.f_19.f_246, func_507(0), func_506(0), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_947.f_19.f_246, func_507(1), func_506(1), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_947.f_19.f_246, func_507(2), func_506(2), 0);
}

Vector3 func_373(int iParam0)
{
	switch (func_247())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1139245096, 1115212989, 1124463916;
				case 1:
					return 1139131571, 1115639904, 1124465436;
				case 6:
					return 1139599110, 1114133451, 1124525446;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 4:
					return -1009852727, 1126221188, 1109552359;
				case 6:
					return -1010119784, 1125965295, 1109931107;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 3:
					return -990815320, -995692672, 1121239144;
				case 6:
					return -990836405, -995561870, 1121134105;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -990178075, -989379772, 1112859867;
				case 1:
					return -990176757, -989357355, 1112681711;
				case 6:
					return -990214622, -989404737, 1113148888;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -996275429, 1122348901, 1116555265;
				case 1:
					return -996328950, 1122605063, 1116527226;
				case 6:
					return -996108346, 1121765163, 1116573284;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 3:
					return -988575521, -1011543022, 1125160878;
				case 4:
					return -988479882, -1011270706, 1124934174;
				case 6:
					return -988630250, -1011620564, 1125101953;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 3:
					return -992437937, 1133907792, 1121434035;
				case 6:
					return -992401469, 1134250372, 1121458879;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 3:
					return -979704591, -984293852, 1090528886;
				case 6:
					return -979684973, -984342523, 1090090592;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -989282513, -986812716, 1116276806;
				case 1:
					return -989305440, -986807860, 1116159362;
				case 6:
					return -989261640, -986879119, 1116366218;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 3:
					return -980428915, -987216581, -1058279732;
				case 6:
					return -980421273, -987169277, -1053975904;
				default:
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 2:
			return func_513(0);
		case 5:
			return func_513(0);
		default:
			break;
	}
	return func_513(0);
}

float func_374(int iParam0)
{
	switch (func_247())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -1025984430;
				case 2:
					return -1025984430;
				case 5:
					return -1025984430;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					return 1110562570 /* Float: 44.46f */;
				case 5:
					return 1110562570 /* Float: 44.46f */;
				case 4:
					return 1125222973;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 3:
					return -1038580449;
				case 2:
					return -1021485384;
				case 5:
					return -1021485384;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 1086618337 /* Float: 6.14f */;
				case 2:
					return -1031916749;
				case 5:
					return -1031916749;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 1121067991;
				case 2:
					return 1119324733 /* Float: 91.77f */;
				case 5:
					return 1121067991;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 3:
					return -1029680660;
				case 2:
					return -1028014735;
				case 5:
					return -1028014735;
				case 4:
					return 1122729984;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 3:
					return -1035390157 /* Float: -50.3f */;
				case 2:
					return 1122922660;
				case 5:
					return 1122922660;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 3:
					return 1118841078 /* Float: 88.08f */;
				case 2:
					return -1071518843 /* Float: -2.53f */;
				case 5:
					return -1071518843 /* Float: -2.53f */;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return 1117148938 /* Float: 75.17f */;
				case 2:
					return 1121128284;
				case 5:
					return 1117148938 /* Float: 75.17f */;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 3:
					return 1127128760;
				case 2:
					return 1127128760;
				case 5:
					return 1127128760;
				default:
					break;
			}
			break;
	}
	return 0f;
}

void func_375(int iParam0)
{
	if (Local_947.f_19.f_248 == 0)
	{
		Local_947.f_19.f_248 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(func_636(), iParam0, -1f, 25f, 35f, -1f, -1f, 180f, false, false, -1, -1);
	}
}

void func_376(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!func_486(iParam0, 4))
		{
			func_637(iParam0, 4);
		}
	}
	else if (func_486(iParam0, 4))
	{
		func_485(iParam0, 4);
	}
}

void func_377(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
	}
	else
	{
		func_638(&(Local_947.f_406), *iParam0, iParam1);
	}
}

void func_378(int iParam0, float fParam1)
{
	if (fParam1 > 0f)
	{
		Local_947.f_578[iParam0 /*39*/].f_2 = fParam1;
	}
}

void func_379()
{
	int iVar0;
	struct<13> Var1;

	Var1.f_6 = 1f;
	Var1.f_7 = 1f;
	Var1.f_8 = 1f;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_640(func_639(iVar0), &Var1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var1))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var1))
				{
				}
				else
				{
					EVENT::_SET_EVENT_TRACKER_FOR_PED(Var1, "MpRandomEvent", 1);
					func_641(&(Local_947.f_406), Var1);
					func_642(func_639(iVar0));
				}
				iVar0++;
			}
		}
	}
}

bool func_380(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_643(iParam0, 12648.71f) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return false;
	}
	if (iVar2 != 0 && (Global_1295619.f_16 - iVar2) < iParam1)
	{
		return true;
	}
	return false;
}

void func_381()
{
	func_644();
	func_645();
	func_646();
}

void func_382()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_647(iVar0, bVar1, iVar2);
		func_648(iVar0, bVar1, iVar2);
		func_649(iVar0, bVar1, iVar2);
		func_650(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_383()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	if (!func_230(&iVar3))
	{
		return;
	}
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	bVar8 = false;
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() != Local_947.f_274.f_54)
	{
		bVar8 = true;
		Local_947.f_274.f_54 = !Local_947.f_274.f_54;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar7 = false;
		if (Local_947.f_274.f_41 >= 3)
		{
			Local_947.f_274.f_41 = 0;
		}
		iVar0 = Local_947.f_274.f_41;
		Local_947.f_274.f_41++;
		iVar9 = func_651(iVar0);
		iVar1 = Local_947.f_274.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_177(iVar9, 4))
		{
			func_632(iVar9, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (Local_82[iVar3 /*27*/].f_4.f_2[iVar0] > -1f)
			{
				Local_82[iVar3 /*27*/].f_4.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_947.f_274.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_947.f_274.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_947.f_274.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_947.f_274.f_42), iVar0);
			}
		}
		else
		{
			bVar7 = func_652(iVar2, iVar1, iVar0, iVar3);
		}
		if (MISC::IS_BIT_SET(Local_947.f_274.f_42, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				MISC::CLEAR_BIT(&(Local_947.f_274.f_42), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				MISC::SET_BIT(&(Local_947.f_274.f_42), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET(Local_82[iVar3 /*27*/].f_4.f_1, iVar0))
				{
					MISC::SET_BIT(&(Local_82[iVar3 /*27*/].f_4.f_1), iVar0);
				}
				func_653(&(Local_947.f_274.f_43[iVar0 /*3*/]));
			}
		}
		if (MISC::IS_BIT_SET(Local_82[iVar3 /*27*/].f_4.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_654(&(Local_947.f_274.f_43[iVar0 /*3*/])) || func_655(&(Local_947.f_274.f_43[iVar0 /*3*/]), 1056964608 /* Float: 0.5f */))))
			{
				func_656(&(Local_947.f_274.f_43[iVar0 /*3*/]));
				MISC::CLEAR_BIT(&(Local_82[iVar3 /*27*/].f_4.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_177(iVar9, 256))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, Local_947.f_274.f_54, false, 256);
		}
		if (func_177(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_657(iVar9))
						{
							if (!func_556(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_658(iVar9, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if ((NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) && !func_177(iVar9, 8))
			{
				if (!func_657(iVar9))
				{
					PED::FADE_AND_DESTROY_PED(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_947.f_274.f_42 != 0)
	{
		if (!func_659(1, 255))
		{
			func_660(1);
		}
	}
	else if (func_659(1, 255))
	{
		func_661(1);
	}
}

void func_384()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<13> Var5;
	int iVar18;
	var uVar19;
	int iVar20;
	var uVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	int iVar33;

	Var5.f_6 = 1f;
	Var5.f_7 = 1f;
	Var5.f_8 = 1f;
	Var5.f_9 = 1;
	Var5.f_12 = 8;
	iVar20 = 255;
	if (!func_230(&iVar25))
	{
		return;
	}
	func_662();
	bVar27 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar26, true, 0, false);
	bVar28 = (bVar27 && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()));
	if ((bVar27 && bVar28) && WEAPON::IS_WEAPON_A_GUN(iVar26))
	{
		Local_947.f_406.f_64 = 0;
		Local_82[iVar25 /*27*/].f_10.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	bVar29 = (bVar28 && (iVar26 == -9.675868E-11f || iVar26 == 5.763438E+22f));
	bVar30 = false;
	while (iVar22 < 1)
	{
		if (Local_947.f_406.f_125 >= 3)
		{
			Local_947.f_406.f_125 = 0;
		}
		iVar1 = Local_947.f_406.f_125;
		Local_947.f_406.f_125++;
		iVar22++;
		iVar18 = func_639(iVar1);
		if (!func_663(iVar18))
		{
		}
		else if (func_664(iVar18, &Var5))
		{
			if (func_665(&Var5, iVar18))
			{
				if (func_666(&(Local_82[iVar25 /*27*/].f_10), 8, iVar1))
				{
					func_667(&(Local_82[iVar25 /*27*/].f_10), 8, iVar1);
				}
			}
			else if (!func_666(&(Local_82[iVar25 /*27*/].f_10), 8, iVar1))
			{
				func_668(&(Local_82[iVar25 /*27*/].f_10), 8, iVar1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Var5))
			{
			}
			else
			{
				func_669(iVar18);
				if (func_670(iVar18))
				{
					if (func_671(iVar18))
					{
						if (!func_672(iVar18))
						{
							func_673(iVar18);
						}
					}
					if (func_674(iVar18))
					{
						func_675(iVar18);
					}
				}
				else
				{
					if (func_676(iVar18))
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Var5) && !ENTITY::IS_ENTITY_DEAD(Var5)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							PED::SET_PED_RESET_FLAG(Var5, 42, true);
						}
					}
					if (!func_677(Var5))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							func_641(&(Local_947.f_406), Var5);
						}
					}
					if (!func_678(iVar18, 255))
					{
						bVar2 = false;
						iVar3 = 0;
						if (func_679(iVar18))
						{
							bVar2 = true;
							iVar3 = 1;
						}
						else if (func_680(iVar18, iVar25))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (func_681(Var5, Var5.f_1, &(Local_947.f_406), &iVar4, 0, Var5.f_2))
						{
							switch (iVar4)
							{
								case 256:
									if (!MISC::IS_BIT_SET(Local_947.f_406.f_64, iVar18))
									{
										bVar2 = true;
										MISC::SET_BIT(&(Local_947.f_406.f_64), iVar18);
									}
									break;
								case 8:
									if (bVar27)
									{
										if (!WEAPON::_IS_WEAPON_LASSO(iVar26) && !TASK::GET_IS_PED_AIMING_IN_THE_AIR(PLAYER::PLAYER_PED_ID()))
										{
											bVar2 = true;
										}
									}
									break;
								default:
									bVar2 = true;
									break;
							}
						}
						else if ((bVar29 && Var5.f_2 <= 1067450368) && func_682(PLAYER::PLAYER_PED_ID(), Var5, 0.707f) == 0)
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else
						{
							if (!bVar2)
							{
								if (func_683(iVar18, &Var5, iVar25))
								{
									iVar4 = 4;
									bVar2 = true;
									MISC::SET_BIT(&(Local_947.f_406.f_64), iVar18);
								}
							}
							if (!bVar2)
							{
								bVar30 = true;
								if (!func_684(iVar18) || !EVENT::_0x83D43F0FD5276E4D(Var5, 1))
								{
									bVar30 = false;
									if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
									{
										EVENT::_SET_EVENT_TRACKER_FOR_PED(Var5, "MpRandomEvent", 1);
										func_642(iVar18);
									}
								}
								if (bVar30)
								{
									iVar31 = EVENT::_EVENT_GET_RECENT_EVENT(Var5, 1, 1);
									if (iVar31 != 0)
									{
										iVar32 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(Var5, iVar31, 1, 1);
										if (ENTITY::DOES_ENTITY_EXIST(iVar32) && ENTITY::IS_ENTITY_A_PED(iVar32))
										{
											iVar33 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar32);
											if (PED::IS_PED_A_PLAYER(iVar33) && iVar33 == PLAYER::PLAYER_PED_ID())
											{
												switch (iVar31)
												{
													case joaat("EVENT_SHOT_FIRED"):
														if (func_685(iVar18, &Var5))
														{
															iVar4 = 256;
															bVar2 = true;
															MISC::SET_BIT(&(Local_947.f_406.f_64), iVar18);
														}
														break;
													case joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"):
													case joaat("EVENT_SHOT_FIRED_WHIZZED_BY"):
														if (!Local_947.f_406.f_2 & 4 != 0)
														{
															iVar4 = 4;
															bVar2 = true;
														}
														break;
												}
											}
										}
										EVENT::_0x1A5C5D350068A673(Var5, 1);
									}
								}
								if (!bVar2)
								{
									if (func_686(iVar18, &Var5, iVar25))
									{
										iVar4 = 256;
										bVar2 = true;
										MISC::SET_BIT(&(Local_947.f_406.f_64), iVar18);
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_687(iVar18, iVar4, iVar3))
							{
							}
							else
							{
								if (func_666(&(Local_82[iVar25 /*27*/].f_10), 8, iVar1))
								{
									func_667(&(Local_82[iVar25 /*27*/].f_10), 8, iVar1);
								}
								func_688(iVar18, 1);
								if (func_510(iVar18))
								{
									if (!func_689(iVar18, 255))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
										{
											if (!func_690(iVar18))
											{
											}
											else
											{
												func_691(iVar18);
												func_692(iVar18);
												Jump @1396; //curOff = 1201
												if (func_693(iVar18))
												{
												}
												else if (iVar23 < 2)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
													{
														iVar24 = 0;
														while (iVar24 < 2)
														{
															if (Local_947.f_406.f_127[iVar18] >= 32)
															{
																iVar0 = 0;
																Local_947.f_406.f_127[iVar18] = 0;
															}
															else
															{
																iVar0 = Local_947.f_406.f_127[iVar18];
																Local_947.f_406.f_127[iVar18]++;
															}
															iVar24++;
															if (func_694(iVar0, &uVar21, &iVar20, &uVar19))
															{
																if (!func_695(iVar18, iVar20))
																{
																	if (func_678(iVar18, iVar0))
																	{
																		if (!func_696(iVar18, uVar21, iVar20, uVar19))
																		{
																		}
																		else
																		{
																			func_697(iVar18, iVar20);
																		}
																	}
																}
															}
														}
														iVar23++;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_385()
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;

	fVar0 = func_698();
	if (Local_947.f_537.f_4)
	{
		return;
	}
	if (!func_230(&iVar1))
	{
		return;
	}
	if (func_189(Local_82[iVar1 /*27*/].f_23, 1))
	{
		Local_947.f_537.f_4 = 1;
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (func_699(iVar2, 0))
	{
		return;
	}
	fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), Local_947.f_15);
	fVar4 = Local_947.f_537.f_9;
	fVar5 = Local_947.f_537.f_10;
	if (func_189(Local_947.f_537.f_12, 2))
	{
		bVar6 = false;
		fVar7 = ENTITY::GET_ENTITY_SPEED(iVar2);
		fVar8 = (fVar0 * (1f / Local_947.f_537.f_7));
		if (fVar7 > 0f)
		{
			if (func_700(Local_947.f_15, iVar2))
			{
				bVar6 = true;
			}
		}
		if (bVar6)
		{
			if (Local_947.f_537.f_6 < 1f)
			{
				Local_947.f_537.f_6 = (Local_947.f_537.f_6 + fVar8);
				if (Local_947.f_537.f_6 > 1f)
				{
					Local_947.f_537.f_6 = 1f;
				}
			}
		}
		else if (Local_947.f_537.f_6 > 0f)
		{
			Local_947.f_537.f_6 = (Local_947.f_537.f_6 - fVar8);
			if (Local_947.f_537.f_6 < 0f)
			{
				Local_947.f_537.f_6 = 0f;
			}
		}
		fVar9 = ((fVar7 * Local_947.f_537.f_5) * Local_947.f_537.f_6);
		fVar4 = (fVar4 + fVar9);
		fVar5 = (fVar5 + fVar9);
	}
	if (fVar3 <= fVar4)
	{
		func_251(&(Local_82[iVar1 /*27*/].f_23), 1);
	}
	else if (VOLUME::DOES_VOLUME_EXIST(Local_947.f_537.f_11) && ENTITY::IS_ENTITY_IN_VOLUME(iVar2, Local_947.f_537.f_11, false, 0))
	{
		func_251(&(Local_82[iVar1 /*27*/].f_23), 1);
	}
	else if (Local_947.f_537 > 0)
	{
		iVar10 = 0;
		while (iVar10 < 3)
		{
			func_701(&(Local_947.f_537.f_13[iVar10 /*9*/]), fVar5, 4f, 0, 0, 0, 0, 1);
			iVar10++;
		}
		if (func_702(&(Local_947.f_537.f_13), Local_947.f_537, Local_947.f_537.f_8))
		{
			func_251(&(Local_82[iVar1 /*27*/].f_23), 1);
		}
	}
	if (func_189(Local_82[iVar1 /*27*/].f_23, 1))
	{
		Local_947.f_537.f_4 = 1;
	}
}

void func_386()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_703(&(Local_13.f_58[iVar0 /*3*/]), &(Local_947.f_578[iVar0 /*39*/]), func_182(iVar0));
		iVar0++;
	}
}

bool func_387()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::UNLOCK_IS_UNLOCKED(Local_947.f_14))
	{
		return false;
	}
	if (func_704())
	{
		return false;
	}
	if (func_705(PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	return true;
}

void func_388(int iParam0)
{
	if (Local_947.f_19 != iParam0)
	{
		Local_947.f_19 = iParam0;
	}
}

void func_389(int iParam0)
{
	if (Local_947.f_19.f_1 != iParam0)
	{
		Local_947.f_19.f_1 = iParam0;
	}
}

void func_390()
{
	int iVar0;

	Local_947.f_19.f_250 = -1;
	Local_947.f_19.f_251 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_947.f_19.f_251 = (Local_947.f_19.f_251 || Local_82[iVar0 /*27*/].f_1);
			Local_947.f_19.f_250 = (Local_947.f_19.f_250 && Local_82[iVar0 /*27*/].f_1);
		}
		iVar0++;
	}
}

void func_391()
{
	int iVar0;

	Local_947.f_19.f_252 = -1;
	Local_947.f_19.f_253 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_947.f_19.f_253 = (Local_947.f_19.f_253 || Local_82[iVar0 /*27*/].f_1.f_1);
			Local_947.f_19.f_252 = (Local_947.f_19.f_252 && Local_82[iVar0 /*27*/].f_1.f_1);
		}
		iVar0++;
	}
}

void func_392()
{
	int iVar0;
	float fVar1;
	char* sVar2;

	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(PLAYER::INT_TO_PLAYERINDEX(NETWORK::PARTICIPANT_ID_TO_INT())))
	{
		return;
	}
	if (!func_481(64, 255))
	{
		return;
	}
	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar0 != 0)
	{
		return;
	}
	fVar1 = BUILTIN::VDIST(Local_947.f_15, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false));
	if (fVar1 > 1112014848)
	{
		return;
	}
	if (!func_193(1))
	{
		func_707(func_706(), 10000, 0, 0, 0, 1);
		func_121(1);
		return;
	}
	else if (!func_193(2))
	{
		func_707(func_708(), 10000, 0, 0, 0, 1);
		func_121(2);
		return;
	}
	if (func_606(1048576) && !func_193(4))
	{
		sVar2 = func_709(1048576);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_707(sVar2, 10000, 0, 0, 0, 1);
			func_121(4);
			return;
		}
	}
	else if (func_606(2097152) && !func_193(8))
	{
		sVar2 = func_709(2097152);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_707(sVar2, 10000, 0, 0, 0, 1);
			func_121(8);
			return;
		}
	}
	else if (func_606(4194304) && !func_193(16))
	{
		sVar2 = func_709(4194304);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_707(sVar2, 10000, 0, 0, 0, 1);
			func_121(16);
			return;
		}
	}
	else if (func_606(8388608) && !func_193(32))
	{
		sVar2 = func_709(8388608);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_707(sVar2, 10000, 0, 0, 0, 1);
			func_121(32);
			return;
		}
	}
	else if (func_606(2.350989E-38f) && !func_193(64))
	{
		sVar2 = func_709(2.350989E-38f);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_707(sVar2, 10000, 0, 0, 0, 1);
			func_121(64);
			return;
		}
	}
	else if (func_606(9.403955E-38f) && !func_193(128))
	{
		sVar2 = func_709(9.403955E-38f);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_707(sVar2, 10000, 0, 0, 0, 1);
			func_121(128);
			return;
		}
	}
	else if (func_606(1.504633E-36f) && !func_193(256))
	{
		sVar2 = func_709(1.504633E-36f);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_707(sVar2, 10000, 0, 0, 0, 1);
			func_121(256);
			return;
		}
	}
	else if (func_606(3.85186E-34f) && !func_193(512))
	{
		sVar2 = func_709(3.85186E-34f);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_707(sVar2, 10000, 0, 0, 0, 1);
			func_121(512);
			return;
		}
	}
	else if (func_606(2.524355E-29f) && !func_193(1024))
	{
		sVar2 = func_709(2.524355E-29f);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_707(sVar2, 10000, 0, 0, 0, 1);
			func_121(1024);
			return;
		}
	}
	else if (func_606(1.084202E-19f) && !func_193(2048))
	{
		sVar2 = func_709(1.084202E-19f);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_707(sVar2, 10000, 0, 0, 0, 1);
			func_121(2048);
			return;
		}
	}
	else if (func_606(2f) && !func_193(4096))
	{
		sVar2 = func_709(2f);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_707(sVar2, 10000, 0, 0, 0, 1);
			func_121(4096);
			return;
		}
	}
}

void func_393()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;

	if (!func_578())
	{
		return;
	}
	if ((func_508(64) || func_508(512)) || func_508(256))
	{
		return;
	}
	iVar0 = func_191(0);
	iVar1 = func_191(2);
	iVar2 = PLAYER::GET_PLAYER_PED(func_710(2, 0, 1, 1));
	if ((((((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || !ENTITY::DOES_ENTITY_EXIST(iVar1)) || ENTITY::IS_ENTITY_DEAD(iVar1)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) || !ENTITY::DOES_ENTITY_EXIST(iVar2)) || ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		return;
	}
	if (Local_13.f_7.f_18 > func_604() || func_512(0, 2) < func_611())
	{
		iVar3 = 4;
	}
	else if (Local_13.f_7.f_18 > func_711())
	{
		iVar3 = 3;
	}
	else if (Local_13.f_7.f_18 > func_712())
	{
		iVar3 = 2;
	}
	else if (Local_13.f_7.f_18 > func_713())
	{
		iVar3 = 1;
	}
	iVar4 = func_714(2, 0, 1, 1);
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
	{
		fVar5 = func_715(iVar4, 2, 0);
		if (fVar5 != 0f)
		{
			iVar6 = func_716(fVar5);
			if (iVar6 > iVar3)
			{
				iVar3 = iVar6;
				if (iVar3 == 4)
				{
					func_581(32768);
				}
			}
		}
	}
	switch (Local_947.f_19.f_2)
	{
		case 0:
			Local_947.f_19.f_2 = 1;
			break;
		case 1:
			switch (iVar3)
			{
				case 1:
					Local_947.f_19.f_2 = 2;
					break;
				case 2:
					Local_947.f_19.f_2 = 3;
					break;
				case 3:
					Local_947.f_19.f_2 = 4;
					break;
				case 4:
					Local_947.f_19.f_2 = 5;
					break;
			}
			break;
		case 2:
			switch (iVar3)
			{
				case 2:
					Local_947.f_19.f_2 = 3;
					break;
				case 3:
					Local_947.f_19.f_2 = 4;
					break;
				case 4:
					Local_947.f_19.f_2 = 5;
					break;
			}
			if (func_511(iVar1, -2.703646E+07f, 1, 0))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, iVar0, -1, -1f, -1f, -1f);
			}
			break;
		case 3:
			switch (iVar3)
			{
				case 3:
					Local_947.f_19.f_2 = 4;
					break;
				case 4:
					Local_947.f_19.f_2 = 5;
					break;
			}
			if (func_511(iVar1, -1.021733E-11f, 1, 0))
			{
				TASK::TASK_COMBAT_ANIMAL_WARN(iVar1, iVar0, 0);
			}
			break;
		case 4:
			switch (iVar3)
			{
				case 4:
					Local_947.f_19.f_2 = 5;
					break;
			}
			if (func_511(iVar1, -6.075089E-32f, 1, 0))
			{
				TASK::TASK_AMBIENT_ANIMAL_STALK(iVar1, iVar0, 0);
			}
			break;
		case 5:
			func_581(64);
			break;
	}
}

void func_394(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		func_637(iParam0, 16);
	}
	else
	{
		func_485(iParam0, 16);
	}
}

void func_395()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	if (Local_13.f_7.f_21 == 255 || Local_13.f_7.f_21 != PLAYER::PLAYER_ID())
	{
		if (VOLUME::DOES_VOLUME_EXIST(Local_947.f_19.f_254))
		{
			VOLUME::DELETE_VOLUME(Local_947.f_19.f_254);
		}
		func_509(2f);
		func_515(16384);
		func_515(32768);
		func_515(65536);
		func_515(131072);
		func_515(262144);
		return;
	}
	iVar0 = func_191(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_509(2f);
		func_515(16384);
		func_515(32768);
		func_515(65536);
		func_515(131072);
		func_515(262144);
		return;
	}
	if (func_717())
	{
		func_581(2f);
	}
	else if (func_501(2f, 255))
	{
		func_509(2f);
	}
	vVar1 = { PED::GET_PED_BONE_COORDS(iVar0, 21030, 0f, 0f, 0f) };
	if (func_718(vVar1, 1045220557 /* Float: 0.2f */, 1061997773 /* Float: 0.8f */, 1036831949 /* Float: 0.1f */, 1063675494 /* Float: 0.9f */))
	{
		func_482(32768);
	}
	else
	{
		func_515(32768);
	}
	if (func_481(32768, 255))
	{
		if (func_719(iVar0))
		{
			func_515(32768);
		}
	}
	iVar4 = func_242();
	iVar5 = func_191(2);
	if (iVar4 == 1)
	{
		iVar5 = PED::GET_MOUNT(iVar0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar5) && !PED::IS_PED_DEAD_OR_DYING(iVar5, true))
	{
		vVar6 = { PED::GET_PED_BONE_COORDS(iVar5, 21030, 0f, 0f, 0f) };
		if (func_718(vVar6, 1036831949 /* Float: 0.1f */, 1063675494 /* Float: 0.9f */, 1036831949 /* Float: 0.1f */, 1063675494 /* Float: 0.9f */))
		{
			func_482(65536);
		}
		else
		{
			func_515(65536);
		}
	}
	else
	{
		func_482(65536);
	}
	if (func_720() || ENTITY::IS_ENTITY_ON_SCREEN(PLAYER::PLAYER_PED_ID()))
	{
		func_482(16384);
	}
	else
	{
		func_515(16384);
	}
	if (func_721())
	{
		iVar9 = 0;
		while (iVar9 < 32)
		{
			if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Local_13.f_7.f_7), iVar9))
			{
				if (iVar9 != NETWORK::PARTICIPANT_ID_TO_INT())
				{
					iVar11++;
				}
			}
			if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Local_13.f_7.f_6), iVar9))
			{
				iVar12 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar9);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar12))
				{
					iVar13 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar12);
					iVar14 = PLAYER::GET_PLAYER_PED(iVar13);
					if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_DEAD_OR_DYING(iVar14, true))
					{
						vVar1 = { PED::GET_PED_BONE_COORDS(iVar14, 21030, 0f, 0f, 0f) };
						if (func_718(vVar1, 1045220557 /* Float: 0.2f */, 1061997773 /* Float: 0.8f */, 1036831949 /* Float: 0.1f */, 1063675494 /* Float: 0.9f */))
						{
							iVar10++;
						}
					}
				}
			}
			iVar9++;
		}
		if (iVar10 < iVar11 || iVar10 == 0)
		{
			if (iVar11 > 1)
			{
				func_515(131072);
				func_515(262144);
			}
			else
			{
				func_515(131072);
				func_482(262144);
			}
		}
		else
		{
			func_482(131072);
			func_482(262144);
		}
	}
	else
	{
		func_482(131072);
		func_482(262144);
	}
}

void func_396()
{
	int iVar0;
	char[] cVar1[8];

	if (func_481(0f, 255))
	{
		return;
	}
	iVar0 = 180;
	while (Local_947.f_19.f_151 < iVar0)
	{
		cVar1 = func_609(Local_947.f_19.f_151);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar1))
		{
			AUDIO::_CLEAR_CONVERSATION_HISTORY_FOR_SCRIPTED_CONVERSATION(cVar1);
		}
		Local_947.f_19.f_151++;
		if (Local_947.f_19.f_151 > (iVar0 - 1))
		{
			func_482(0f);
		}
	}
}

void func_397()
{
	switch (Local_947.f_19)
	{
		case 0:
			return;
		case 1:
			return;
		case 48:
			return;
		default:
			break;
	}
	if (func_585(0, 255, 1) < 1106247680)
	{
		func_722();
	}
}

void func_398()
{
}

void func_399()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;

	iVar0 = func_191(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	if (!func_535(255))
	{
		func_723(0);
		return;
	}
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
	fVar5 = BUILTIN::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
	switch (func_242())
	{
		case 9:
		case 10:
		case 11:
			if (func_538(8, 255))
			{
				func_723(0);
			}
			else
			{
				func_724(125f);
			}
			break;
		default:
			func_724(125f);
			break;
	}
	if (fVar5 < 1108082688)
	{
		switch (func_242())
		{
			case 9:
			case 10:
			case 11:
				if (func_591(0, 1108082688 /* Float: 35f */, 1, 1) > 1)
				{
					PED::SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT(iVar0, vVar2, 1, false);
					func_722();
				}
				else
				{
					if (Local_947.f_19.f_161 == 0)
					{
						func_725(&(Local_947.f_19.f_161));
					}
					else if ((NETWORK::GET_TIME_DIFFERENCE(Local_947.f_19.f_161, NETWORK::GET_NETWORK_TIME_ACCURATE()) + Local_947.f_19.f_163) > 60000)
					{
						func_482(1.084202E-19f);
					}
					iVar6 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID()))
					{
						if (iVar6 == 0)
						{
							if (!func_538(8, 255))
							{
								func_707("NB_PHOTOGRAPHY_H_MORE_FS", 10000, 0, 0, 0, 1);
								func_726(8);
							}
							else if (!func_538(16, 255))
							{
								if (func_595(179) || (NETWORK::GET_TIME_DIFFERENCE(Local_947.f_19.f_161, NETWORK::GET_NETWORK_TIME_ACCURATE()) + Local_947.f_19.f_163) > 30000)
								{
									func_707("NB_PHOTOGRAPHY_H_RETURN_FS", 10000, 0, 0, 0, 1);
									func_726(16);
								}
							}
						}
					}
					if (func_591(0, 1097859072 /* Float: 15f */, 0, 1) > 0)
					{
						func_727(100);
					}
				}
				break;
			default:
				PED::SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT(iVar0, vVar2, 1, false);
				func_722();
				break;
		}
	}
	else
	{
		if (Local_947.f_19.f_161 != 0)
		{
			Local_947.f_19.f_163 = (Local_947.f_19.f_163 + NETWORK::GET_TIME_DIFFERENCE(Local_947.f_19.f_161, NETWORK::GET_NETWORK_TIME_ACCURATE()));
			Local_947.f_19.f_161 = 0;
		}
		func_728(8);
		func_728(16);
	}
	func_729();
}

void func_400()
{
	int iVar0;

	func_730();
	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_724(125f);
		func_727(100);
		func_732(func_731());
	}
}

void func_401()
{
	int iVar0;
	int iVar1;
	float fVar2;

	func_724(125f);
	func_730();
	func_727(100);
	func_732(func_731());
	iVar0 = func_191(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (PLAYER::PLAYER_PED_ID() != iVar1)
	{
		return;
	}
	if (!func_535(255))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 1))
		{
			fVar2 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
			if (fVar2 < 1103626240)
			{
				if (func_733(7, Local_947.f_4) || func_734(7, Local_947.f_4))
				{
					if (!func_595(5))
					{
						if (!func_598(1))
						{
							func_599(0, 0, 5, 0);
						}
					}
				}
				else if (func_735(7, Local_947.f_4))
				{
					if (!func_595(4))
					{
						if (!func_598(1))
						{
							func_599(0, 0, 4, 0);
						}
					}
				}
				else if (!func_595(3))
				{
					if (!func_598(1))
					{
						func_599(0, 0, 3, 0);
					}
				}
			}
		}
	}
}

void func_402()
{
	func_724(125f);
	func_730();
	func_727(100);
	func_732(-1);
}

void func_403()
{
	int iVar0;
	int iVar1;

	func_724(125f);
	func_730();
	iVar0 = func_191(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) < 1097859072)
	{
		func_727(100);
		func_732(func_736());
	}
	else
	{
		func_727(100);
		func_732(func_737());
	}
}

void func_404()
{
	int iVar0;

	func_727(100);
	func_732(-1);
	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_724(125f);
		func_592(0, 1115815936 /* Float: 65f */, 5000, 0, 9, 10, 11, -1, -1, -1, 1, -1);
	}
}

void func_405()
{
	int iVar0;

	func_727(100);
	func_732(-1);
	if ((NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20) && PLAYER::PLAYER_ID() == Local_13.f_7.f_20) && func_538(2, 255))
	{
		func_482(4);
		return;
	}
	if (func_601(2) > 1)
	{
		return;
	}
	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_724(125f);
		if (func_606(256))
		{
			func_592(0, 1115815936 /* Float: 65f */, 5000, 0, 14, 15, -1, -1, -1, -1, 1, -1);
		}
		else
		{
			func_592(0, 1115815936 /* Float: 65f */, 5000, 0, 12, 13, -1, -1, -1, -1, 1, -1);
		}
	}
}

void func_406()
{
	func_728(2);
}

void func_407()
{
	func_723(0);
	func_728(2);
}

void func_408()
{
	func_482(64);
	func_581(2048);
}

void func_409()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	func_738();
	func_739();
	iVar0 = func_191(0);
	switch (func_242())
	{
		case 0:
			vVar1 = { func_373(0) };
			fVar4 = func_374(0);
			break;
		default:
			vVar1 = { func_373(3) };
			fVar4 = func_374(3);
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_511(iVar0, 2.446422E-13f, 1, 0))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, vVar1, 1f, -1, 0.25f, 0, fVar4);
		}
	}
}

void func_410()
{
	int iVar0;

	func_740();
	func_509(2.524355E-29f);
	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_741())
		{
			func_742();
			func_482(2048);
		}
		if (Local_13.f_7.f_10 != 0)
		{
			if (!func_595(16))
			{
				if (!func_598(1))
				{
					if (func_595(16))
					{
						func_596(&(Local_13.f_7.f_10));
					}
					else
					{
						func_599(0, 0, 16, 0);
					}
				}
			}
			else
			{
				func_743();
			}
		}
		else
		{
			func_596(&(Local_13.f_7.f_10));
		}
		func_744(iVar0);
	}
}

void func_411()
{
	func_515(8);
	func_515(16);
}

void func_412()
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_745();
	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_738();
		if (!func_598(1))
		{
			if (func_603(Local_13.f_7.f_9, 1000))
			{
				iVar1 = func_607();
				if (!func_595(iVar1))
				{
					func_599(0, 0, iVar1, 0);
				}
			}
		}
		if (func_349(iVar0, 0.002842281f))
		{
			iVar2 = func_361(func_746());
			if (iVar2 == 0 || (PED::IS_PED_USING_SCENARIO_HASH(iVar0, iVar2) && TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 0)))
			{
				func_581(2.524355E-29f);
			}
		}
	}
}

void func_413()
{
	int iVar0;
	int iVar1;

	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_738();
		if (func_349(iVar0, 0.002842281f))
		{
			iVar1 = func_361(func_746());
			if (iVar1 == 0 || (PED::IS_PED_USING_SCENARIO_HASH(iVar0, iVar1) && TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 0)))
			{
				func_581(2.524355E-29f);
			}
		}
	}
}

void func_414()
{
	int iVar0;

	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_738();
		if (func_744(iVar0))
		{
			if (func_511(iVar0, -2.793181E-34f, 1, 0))
			{
				TASK::TASK_PLAY_ANIM(iVar0, func_357(0), func_624(0), 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
			}
		}
	}
}

void func_415()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;

	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!func_508(1.084202E-19f))
		{
			func_738();
			if (!func_598(1))
			{
				func_592(0, 1115815936 /* Float: 65f */, 5000, 0, 83, 84, 85, -1, -1, -1, 0, -1);
			}
		}
		if (func_242() == 0)
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (func_349(iVar0, -2.793181E-34f))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_357(0), func_624(0), 1))
					{
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iVar0, func_357(0), func_624(0)) > 1056964608)
						{
							TASK::STOP_ANIM_TASK(iVar0, func_357(0), func_624(0), -4f);
						}
					}
				}
			}
		}
		if (!func_578())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (func_508(1.084202E-19f))
				{
					if (Local_947.f_19.f_162 == 0)
					{
						func_725(&(Local_947.f_19.f_162));
					}
					if (func_603(Local_947.f_19.f_162, 200))
					{
						PED::SET_PED_TO_RAGDOLL(iVar0, 2000, 5000, 0, false, false, 0);
						vVar1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar0) };
						ENTITY::APPLY_FORCE_TO_ENTITY(iVar0, 3, -vVar1 * Vector(1061158912, 1061158912, 1061158912), 0f, 0f, 0f, PED::_0xC5303F460A40D21D(iVar0, 21030), false, false, true, false, true);
					}
				}
				else if (!PED::IS_PED_RAGDOLL(iVar0))
				{
					vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
					vVar7 = { func_373(1) };
					if (vVar4.z < vVar7.z || BUILTIN::VDIST(vVar4, Local_13.f_7.f_27) < (BUILTIN::VDIST(vVar4, vVar7) + 1048576000))
					{
						if (!func_595(86))
						{
							func_599(0, 0, 86, 1);
						}
						func_581(1.084202E-19f);
					}
				}
			}
		}
	}
}

void func_416()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_747();
	func_748();
	if (!func_578())
	{
		func_581(8192);
	}
	else if (!func_508(8192))
	{
		iVar0 = func_191(2);
		iVar1 = func_191(0);
		iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (func_749())
				{
					if (func_511(iVar0, 2.40763E-20f, 1, 0) && !func_349(iVar0, 2.40763E-20f))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
						{
							TASK::TASK_SMART_FLEE_PED(iVar0, iVar1, 500f, -1, 0, 3f, 0);
							func_581(8192);
							func_581(256);
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !PED::IS_PED_DEAD_OR_DYING(iVar2, true))
						{
							TASK::TASK_SMART_FLEE_PED(iVar0, iVar2, 500f, -1, 0, 3f, 0);
							func_581(8192);
							func_581(256);
						}
					}
				}
				else if (func_349(iVar0, -6.075089E-32f) || func_349(iVar0, -1.187542E-13f))
				{
					func_581(8192);
					func_581(256);
				}
				else
				{
					iVar3 = func_361(4);
					if (iVar3 != 0)
					{
						TASK::TASK_START_SCENARIO_IN_PLACE_HASH(iVar0, iVar3, 0, false, 0, -1f, false);
					}
					func_581(8192);
					func_581(256);
				}
			}
		}
	}
}

void func_417()
{
	int iVar0;

	func_747();
	func_515(64);
	func_195(0);
	iVar0 = func_191(0);
	func_750(iVar0);
}

void func_418()
{
	func_747();
	func_515(64);
	func_751();
}

void func_419()
{
	int iVar0;

	iVar0 = func_191(0);
	func_747();
	func_723(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_511(iVar0, 2.446422E-13f, 1, 0))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, func_513(0), 1f, -1, 0.25f, 0, func_752(0));
		}
	}
}

void func_420()
{
}

void func_421()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;

	func_482(64);
	func_515(4096);
	func_753(125f);
	iVar0 = func_191(0);
	iVar1 = func_191(2);
	iVar2 = func_191(1);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && ENTITY::DOES_ENTITY_EXIST(iVar1)) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (func_511(iVar0, 2.40763E-20f, 1, 0))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar1, 500f, -1, 0, 3f, 0);
				}
			}
		}
		else if (func_511(iVar0, 3.034861E-30f, 1, 0))
		{
			TASK::CLEAR_SEQUENCE_TASK(&(Local_947.f_19.f_164));
			TASK::_0x23767D80C7EED7C6(&(Local_947.f_19.f_164), -1.027063E-17f);
			vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
			if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
			{
				PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(0, vVar3, 3);
			}
			else
			{
				TASK::TASK_STAND_STILL(0, 750);
				TASK::TASK_REACT(0, iVar1, vVar3, "DEFAULT_SHOCKED", 3f, 0f, 4);
			}
			TASK::TASK_SMART_FLEE_PED(0, iVar1, 500f, -1, 0, 2f, iVar2);
			TASK::CLOSE_SEQUENCE_TASK(Local_947.f_19.f_164);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				TASK::TASK_PERFORM_SEQUENCE(iVar0, Local_947.f_19.f_164);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_750(iVar0);
	}
	if (!func_193(2.524355E-29f))
	{
		if (func_193(3.85186E-34f))
		{
			func_121(2.524355E-29f);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, Local_947.f_19.f_45, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, Local_947.f_19.f_45, 3.397268E+19f);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		if (func_680(2, 255))
		{
			func_581(16384);
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			if (func_511(iVar1, -1.187542E-13f, 1, 0))
			{
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iVar1, 100f, 0, 0);
			}
		}
	}
	else
	{
		func_581(128);
	}
	iVar6 = PLAYER::PLAYER_PED_ID();
	iVar7 = PLAYER::INT_TO_PLAYERINDEX(NETWORK::PARTICIPANT_ID_TO_INT());
	if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar7))
	{
		if (!func_193(262144))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar6, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) < 1106247680)
			{
				func_121(262144);
			}
		}
	}
}

void func_422()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar0 = func_191(2);
	iVar1 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (func_511(iVar0, 2.40763E-20f, 1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar1, 500f, -1, 0, 3f, 0);
				}
				else
				{
					vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
					TASK::TASK_SMART_FLEE_COORD(iVar0, vVar2, 500f, -1, 0, 3f);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_24))
			{
				iVar5 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_24);
				if (ENTITY::DOES_ENTITY_EXIST(iVar5))
				{
					if (func_511(iVar1, 8.088558E+37f, 1, 0))
					{
						TASK::TASK_REACT(iVar1, iVar5, 0f, 0f, 0f, "DEFAULT_SHOCKED", 2000f, 1000f, 4);
					}
				}
			}
			else if (func_501(4096, 255))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (func_511(iVar1, 8.088558E+37f, 1, 0))
					{
						TASK::TASK_REACT(iVar1, iVar0, 0f, 0f, 0f, "DEFAULT_SHOCKED", 2000f, 1000f, 4);
					}
				}
				else if (func_511(iVar1, 8.088558E+37f, 1, 0))
				{
					TASK::TASK_REACT(iVar1, 0, ENTITY::GET_ENTITY_COORDS(iVar1, false, false), "DEFAULT_SHOCKED", 2000f, 1000f, 4);
				}
			}
		}
	}
}

void func_423()
{
	int iVar0;

	if (!func_598(1))
	{
		func_599(0, 0, 99, 0);
	}
	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!func_349(iVar0, 8.088558E+37f))
		{
			func_754(-1);
			func_755();
		}
	}
}

void func_424()
{
	int iVar0;
	int iVar1;

	func_581(128);
	func_509(64);
	func_175(2);
	iVar0 = func_191(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (func_603(Local_13.f_7.f_10, 2000))
	{
		if (func_501(16384, 255))
		{
			func_756();
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (func_511(iVar0, 672823.8f, 1, 0))
			{
				TASK::TASK_GO_TO_ENTITY(iVar0, iVar1, -1, 5f, 2f, 2f, 0);
			}
		}
	}
}

void func_425()
{
	int iVar0;

	func_175(2);
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(NETWORK::PARTICIPANT_ID_TO_INT());
	if (func_757(2, iVar0))
	{
		func_756();
	}
}

void func_426()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	func_195(0);
	func_753(125f);
	func_509(64);
	iVar0 = func_191(2);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
		switch (func_242())
		{
			case 3:
			case 5:
				if (func_511(iVar0, 102.1545f, 1, 0))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iVar0, vVar2, 100f, 0, 16);
				}
				break;
			default:
				if (func_511(iVar0, 2.40763E-20f, 1, 0))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar1, 100f, -1, 0, 3f, 0);
				}
				break;
		}
	}
}

void func_427()
{
	func_195(0);
	func_753(125f);
}

void func_428()
{
	int iVar0;
	int iVar1;

	func_753(125f);
	func_723(0);
	iVar0 = func_191(0);
	iVar1 = func_191(2);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (func_511(iVar0, 2.40763E-20f, 1, 0))
			{
				TASK::TASK_SMART_FLEE_PED(iVar0, iVar1, 500f, -1, 0, 3f, 0);
			}
		}
	}
}

void func_429()
{
	func_482(64);
}

void func_430()
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;

	func_758(2, 1092616192 /* Float: 10f */, 1092616192 /* Float: 10f */, 1f);
	iVar0 = func_714(0, 0, 1, 1);
	if (iVar0 == NETWORK::PARTICIPANT_ID())
	{
		vVar2 = { func_373(2) };
		iVar5 = func_597(&uVar1, vVar2, 1092616192 /* Float: 10f */, 0, 0);
		if (iVar5 < 1)
		{
			func_581(1);
		}
		else
		{
			func_509(1);
			return;
		}
	}
	else
	{
		func_509(1);
	}
	iVar6 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar6) && !PED::IS_PED_DEAD_OR_DYING(iVar6, true))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar6, true, false), func_373(2)) > 5f)
		{
			if (func_511(iVar6, 2.446422E-13f, 1, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar6, func_373(2), 1f, -1, 0.25f, 0, func_374(2));
			}
		}
		else
		{
			func_759();
			func_760();
		}
		func_592(0, 1115815936 /* Float: 65f */, 5000, 0, 109, 110, 111, -1, -1, -1, 1, 112);
	}
}

void func_431()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;

	func_747();
	iVar0 = func_191(0);
	iVar2 = func_714(0, 0, 1, 1);
	if (iVar2 == NETWORK::PARTICIPANT_ID())
	{
		vVar3 = { func_373(2) };
		iVar6 = func_597(&iVar1, vVar3, 1092616192 /* Float: 10f */, 0, 0);
		if (iVar6 < 1)
		{
			func_581(1);
			return;
		}
		else
		{
			func_509(1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		Local_947.f_19.f_155 = iVar1;
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_947.f_19.f_155))
		{
			AITRANSPORT::_SET_AI_CAN_USE_TRANSPORT(Local_947.f_19.f_155, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_947.f_19.f_155) && !PED::IS_PED_DEAD_OR_DYING(Local_947.f_19.f_155, true))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_947.f_19.f_155, true, false), func_373(2)) < 1101004800)
			{
				if (PED::_GET_RIDER_OF_MOUNT(Local_947.f_19.f_155, true) == 0)
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_947.f_19.f_155))
					{
						AITRANSPORT::_SET_AI_CAN_USE_TRANSPORT(Local_947.f_19.f_155, true);
					}
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (func_511(iVar0, 6.915501E+28f, 1, 0))
						{
							TASK::TASK_MOUNT_ANIMAL(iVar0, Local_947.f_19.f_155, -1, -1, 1f, 1, 0, 0);
							return;
						}
					}
				}
				else
				{
					func_759();
					func_760();
					func_592(0, 1115815936 /* Float: 65f */, 5000, 0, 113, 114, 115, -1, -1, -1, 1, 116);
				}
			}
		}
	}
}

void func_432()
{
	int iVar0;
	float fVar1;
	int iVar2;

	func_743();
	func_747();
	if (func_741())
	{
		func_742();
		func_482(2048);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_947.f_19.f_155) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_947.f_19.f_155)) && PED::IS_PED_DEAD_OR_DYING(Local_947.f_19.f_155, true))
	{
		func_581(1);
		return;
	}
	func_740();
	iVar0 = func_191(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		fVar1 = func_761(0, func_373(2));
		iVar2 = PED::GET_MOUNT(iVar0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && TASK::_0xAC5045AB7F1A34FD(iVar2)) && fVar1 > (1092616192 + 5f))
		{
			func_482(1.084202E-19f);
		}
		else if (fVar1 > 6f)
		{
			if (func_511(iVar0, 2.446422E-13f, 1, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, func_373(2), 1.5f, -1, 0.5f, 0, 40000f);
			}
		}
		else
		{
			func_762(-1);
		}
	}
}

void func_433()
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;

	func_738();
	func_739();
	iVar0 = func_714(0, 0, 1, 1);
	if (iVar0 == NETWORK::PARTICIPANT_ID())
	{
		vVar2 = { func_373(2) };
		iVar5 = func_597(&uVar1, vVar2, (1092616192 + 2f), 0, 0);
		if (iVar5 < 1)
		{
			func_581(1);
			return;
		}
	}
	iVar6 = func_191(0);
	if ((ENTITY::DOES_ENTITY_EXIST(Local_947.f_19.f_155) && !PED::IS_PED_DEAD_OR_DYING(Local_947.f_19.f_155, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_947.f_19.f_155))
	{
		AITRANSPORT::_SET_AI_CAN_USE_TRANSPORT(Local_947.f_19.f_155, true);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iVar6) && !PED::IS_PED_DEAD_OR_DYING(iVar6, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar6))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_947.f_19.f_155) && !PED::IS_PED_DEAD_OR_DYING(Local_947.f_19.f_155, true))
		{
			fVar7 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_947.f_19.f_155, false, false), func_373(2));
			if (fVar7 > 1101004800)
			{
				func_581(1);
				return;
			}
			iVar8 = PED::_GET_RIDER_OF_MOUNT(Local_947.f_19.f_155, true);
			if (iVar8 != 0 && iVar8 != iVar6)
			{
				func_581(1);
				return;
			}
			if (func_511(iVar6, 6.915501E+28f, 1, 0))
			{
				TASK::TASK_MOUNT_ANIMAL(iVar6, Local_947.f_19.f_155, -1, -1, 1f, 1, 0, 0);
			}
		}
		else
		{
			func_581(1);
		}
	}
}

void func_434()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_191(0);
	iVar1 = PED::GET_MOUNT(iVar0);
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
	if (((((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && ENTITY::DOES_ENTITY_EXIST(iVar1)) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && ENTITY::DOES_ENTITY_EXIST(iVar3)) && !PED::IS_PED_DEAD_OR_DYING(iVar3, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			if (func_511(iVar1, 0.1457215f, 1, 0))
			{
				TASK::TASK_HORSE_ACTION(iVar1, 2, 0, 0);
				func_599(0, 0, 117, 0);
			}
		}
	}
}

void func_435()
{
}

void func_436()
{
}

void func_437()
{
	int iVar0;

	func_515(64);
	if (!func_481(4096, 255))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_947.f_19.f_155) && !PED::IS_PED_DEAD_OR_DYING(Local_947.f_19.f_155, true))
		{
			iVar0 = PLAYER::PLAYER_PED_ID();
			if (PED::_GET_ACTIVE_ANIMAL_OWNER(Local_947.f_19.f_155) == iVar0 || (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_25) && Local_13.f_7.f_25 == PLAYER::PLAYER_ID()))
			{
				func_482(4096);
			}
		}
	}
}

void func_438()
{
	int iVar0;

	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			if (func_511(iVar0, 5.999514E-21f, 1, 0))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iVar0, 1, 0, 0, 0, 0);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_947.f_19.f_155))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_947.f_19.f_155))
		{
			AITRANSPORT::_SET_AI_CAN_USE_TRANSPORT(Local_947.f_19.f_155, false);
		}
	}
}

void func_439()
{
	int iVar0;

	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_511(iVar0, 2.446422E-13f, 1, 0))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, func_513(0), 1f, -1, 0.25f, 0, func_752(0));
		}
	}
}

void func_440()
{
	int iVar0;

	iVar0 = func_191(0);
	if (func_511(iVar0, 8.333317E-06f, 1, 0))
	{
		TASK::TASK_WANDER_IN_AREA(iVar0, func_513(0), 5f, 10f, 20f, 0);
	}
}

void func_441()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_581(2);
	func_747();
	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
		if (iVar1 != 2.271855E+07f)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, 2.271855E+07f);
		}
		if (!PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_750(iVar0);
		}
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			if (func_511(iVar0, 2.40763E-20f, 1, 0))
			{
				if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
				{
					iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						TASK::TASK_SMART_FLEE_PED(iVar0, iVar2, 500f, -1, 0, 2f, 0);
					}
					else
					{
						TASK::TASK_SMART_FLEE_COORD(iVar0, func_373(2), 500f, -1, 272, 2f);
					}
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iVar0, func_373(2), 500f, -1, 272, 2f);
				}
			}
		}
	}
	if (!func_590(9.403955E-38f))
	{
		iVar3 = func_191(1);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar3) && !PED::IS_PED_DEAD_OR_DYING(iVar3, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar3))
		{
			func_482(9.403955E-38f);
			PED::SET_PED_CONFIG_FLAG(iVar3, 467, true);
		}
	}
}

void func_442()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;

	func_747();
	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
		if (iVar1 != 2.271855E+07f)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, 2.271855E+07f);
		}
		if (!PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
		}
		if (func_511(iVar0, 2.40763E-20f, 1, 0))
		{
			if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
			{
				iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar2, 500f, -1, 0, 3f, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iVar0, func_373(2), 500f, -1, 2.424533E-38f, 3f);
				}
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(iVar0, func_373(2), 500f, -1, 2.424533E-38f, 3f);
			}
		}
		iVar3 = PED::GET_MOUNT(iVar0);
		iVar4 = PLAYER::PLAYER_ID();
		iVar5 = PLAYER::GET_PLAYER_PED(iVar4);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !PED::IS_PED_DEAD_OR_DYING(iVar3, true))
		{
			if (!TASK::_0xAC5045AB7F1A34FD(iVar3))
			{
				iVar6 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_13.f_7.f_20);
				fVar7 = 1148829696; /* Float: 999f */
				if (iVar6 != 255)
				{
					fVar7 = func_585(0, iVar6, 1);
				}
				if (func_510(0) && fVar7 < 1103626240)
				{
					func_592(0, 1115815936 /* Float: 65f */, 4000, 0, 125, 126, 127, 118, 119, 120, 0, -1);
				}
				else if (func_595(118) && fVar7 < 1097859072)
				{
					func_592(0, 1115815936 /* Float: 65f */, 4000, 0, 121, 122, 123, 118, 119, 120, 0, -1);
				}
				else
				{
					func_592(0, 1115815936 /* Float: 65f */, 4000, 0, 118, 119, 120, -1, -1, -1, 0, -1);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar5) && !PED::IS_PED_DEAD_OR_DYING(iVar5, true))
			{
				if (TASK::_IS_PED_LEADING_HORSE(iVar5) && TASK::_GET_LED_HORSE_FROM_PED(iVar5) == iVar3)
				{
					TASK::TASK_STOP_LEADING_HORSE(iVar5);
				}
				if (PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iVar4) == iVar3 || Local_13.f_7.f_25 == iVar4)
				{
					if (func_763(iVar5))
					{
						if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), ENTITY::GET_ENTITY_COORDS(iVar5, false, false)) < 1112014848)
						{
							func_581(4);
						}
					}
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar3))
				{
					if (func_508(4))
					{
						if (func_511(iVar3, 0.1457215f, 1, 0))
						{
							TASK::TASK_HORSE_ACTION(iVar3, 2, 0, 0);
							func_599(0, 0, 124, 0);
						}
					}
				}
			}
		}
	}
}

void func_443()
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_764();
	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
		if (iVar1 != 2.271855E+07f)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, 2.271855E+07f);
		}
		if (!PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
		}
		if (func_511(iVar0, 2.40763E-20f, 1, 0))
		{
			if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
			{
				iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar2, 500f, -1, 0, 3f, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iVar0, func_373(2), 500f, -1, 272, 3f);
				}
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(iVar0, func_373(2), 500f, -1, 272, 3f);
			}
		}
	}
}

void func_444()
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_764();
	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
		if (iVar1 != 2.271855E+07f)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, 2.271855E+07f);
		}
		if (!PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
		}
		if (func_511(iVar0, 2.40763E-20f, 1, 0))
		{
			if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
			{
				iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar2, 500f, -1, 0, 3f, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iVar0, func_373(2), 500f, -1, 272, 3f);
				}
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(iVar0, func_373(2), 500f, -1, 272, 3f);
			}
		}
		if (PED::IS_PED_HOGTIED(iVar0) || PED::IS_PED_LASSOED(iVar0))
		{
			func_592(0, 1115815936 /* Float: 65f */, 4000, 3, 79, 80, 81, 74, 75, 76, 1, -1);
		}
		else if (func_595(79) && !func_595(82))
		{
			func_599(0, 3, 82, 0);
		}
		else
		{
			func_592(0, 1115815936 /* Float: 65f */, 4000, 3, 74, 75, 76, -1, -1, -1, !func_595(79), -1);
		}
	}
}

void func_445()
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = func_191(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!func_535(255))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		fVar2 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
		func_724(125f);
		if (fVar2 < 1108082688)
		{
			func_722();
		}
		func_592(0, 1115815936 /* Float: 65f */, 5000, 0, 0, 1, 2, -1, -1, -1, 1, -1);
	}
}

void func_446()
{
	int iVar0;

	func_765(1);
	if (!func_766("BOOL_INITIAL"))
	{
		func_767("BOOL_INITIAL");
	}
	if (func_504())
	{
		if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(Local_947.f_19.f_246, "REEL_SLOW", true))
		{
			func_581(262144);
		}
	}
	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_750(iVar0);
	}
}

void func_447()
{
	if (!func_766("BOOL_REEL_SLOW"))
	{
		func_767("BOOL_REEL_SLOW");
	}
	if (func_504())
	{
		if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(Local_947.f_19.f_246, "REEL_FAST", true))
		{
			func_581(524288);
		}
	}
}

void func_448()
{
	func_599(0, 0, 129, 0);
	if (func_765(1))
	{
		if (func_595(129))
		{
			func_768(1);
		}
	}
}

void func_449()
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = func_191(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!func_595(130))
		{
			func_599(0, 0, 130, 0);
		}
		if (!func_501(65536, 255))
		{
			if (func_535(255))
			{
				fVar2 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
				if (fVar2 < 1092616192)
				{
					func_581(65536);
				}
			}
		}
	}
	if (func_504())
	{
		if (func_616(2))
		{
			if (!func_501(1048576, 255))
			{
				func_581(1048576);
			}
		}
		else if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(Local_947.f_19.f_246, "Idle", true))
		{
			if (func_769() > 1055286886)
			{
				if (func_765(2))
				{
					func_768(2);
				}
			}
		}
	}
	if (func_603(Local_13.f_7.f_10, 120000))
	{
		func_581(131072);
	}
}

void func_450()
{
	int iVar0;

	func_727(100);
	func_732(-1);
	if ((func_595(3) || func_595(5)) || func_595(4))
	{
		func_592(0, 1115815936 /* Float: 65f */, 5000, 0, 9, 10, 11, -1, -1, -1, 1, -1);
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (PLAYER::PLAYER_PED_ID() != iVar0)
	{
		return;
	}
	if (func_733(7, Local_947.f_4) || func_734(7, Local_947.f_4))
	{
		if (!func_595(5))
		{
			if (!func_598(1))
			{
				func_599(0, 0, 5, 0);
			}
		}
	}
	else if (func_735(7, Local_947.f_4))
	{
		if (!func_595(4))
		{
			if (!func_598(1))
			{
				func_599(0, 0, 4, 0);
			}
		}
	}
	else if (!func_595(3))
	{
		if (!func_598(1))
		{
			func_599(0, 0, 3, 0);
		}
	}
}

void func_451()
{
	func_482(64);
}

void func_452()
{
	func_723(0);
}

void func_453()
{
}

void func_454()
{
	func_740();
	func_762(-1);
	func_743();
	if (func_741())
	{
		func_742();
		func_482(2048);
	}
}

void func_455()
{
	func_768(3);
}

void func_456()
{
	int iVar0;
	vector3 vVar1;

	if (func_590(2048))
	{
		func_621();
		func_770(1);
		func_771();
	}
	if (func_606(512))
	{
		if (func_481(128, 255))
		{
			if (!func_595(73) && !func_595(72))
			{
				iVar0 = func_191(0);
				vVar1 = { func_513(0) };
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
				{
					vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
				}
				if (func_600(vVar1, 1108082688 /* Float: 35f */) > 1)
				{
					func_599(0, 0, 73, 0);
				}
				else
				{
					func_599(0, 0, 72, 0);
				}
			}
		}
		else if (func_715(NETWORK::PARTICIPANT_ID(), 0, 1) < 1108082688)
		{
			func_482(128);
		}
	}
	func_772();
}

void func_457()
{
	func_515(64);
}

void func_458()
{
}

void func_459()
{
	func_482(64);
}

void func_460()
{
	int iVar0;

	func_738();
	func_739();
	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_373(5)) > 4f)
		{
			if (func_511(iVar0, 2.446422E-13f, 1, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, func_373(5), 1f, -1, 0.25f, 0, func_374(5));
			}
		}
	}
}

void func_461()
{
}

void func_462()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	if (func_741())
	{
		func_742();
		func_482(2048);
	}
	func_740();
	func_743();
	iVar0 = func_191(0);
	iVar9 = 0;
	switch (func_242())
	{
		case 11:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				if (!func_501(4194304, 255))
				{
					PED::SET_PED_CONFIG_FLAG(iVar0, 169, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 340, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 137, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 26, true);
					func_581(4194304);
				}
				if (!func_501(2097152, 255))
				{
					AUDIO::STOP_PED_SPEAKING(iVar0, true);
					func_581(2097152);
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					if (!func_508(8388608))
					{
						PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
						func_581(8388608);
					}
				}
			}
			func_762(-1);
			if (Local_13.f_7.f_14 != 0)
			{
				iVar9 = NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_14, NETWORK::GET_NETWORK_TIME_ACCURATE());
			}
			if ((iVar9 + Local_13.f_7.f_17) > 15000)
			{
				if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20) && Local_13.f_7.f_20 == NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()))
				{
					func_482(1.504633E-36f);
				}
			}
			break;
		case 9:
			if (func_501(1.504633E-36f, 255))
			{
				if (func_585(0, 255, 1) > (3f + 1f))
				{
					func_773(&(Local_947.f_406), 500);
					func_547(&(Local_947.f_406), 4000);
					func_509(1.504633E-36f);
				}
			}
			else if (func_585(0, 255, 1) < 1080033280)
			{
				func_773(&(Local_947.f_406), 8000);
				func_547(&(Local_947.f_406), 8000);
				func_581(1.504633E-36f);
			}
			if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && !func_508(4194304))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 26, true);
				func_581(4194304);
			}
			if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, false, 0, false))
			{
				if (iVar1 == -3.273909E-18f)
				{
					if (func_511(iVar0, 3.269911E-13f, 1, 0))
					{
						iVar2 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
						WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iVar2, false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(iVar0, 1, 1, 0, 0);
					}
				}
				else if (!func_501(9.403955E-38f, 255))
				{
					if (func_744(iVar0))
					{
						func_581(9.403955E-38f);
					}
				}
				else if (func_511(iVar0, 1564270f, 1, 0))
				{
					vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar0) };
					func_573(vVar6);
					vVar6 = { vVar6 * Vector(1103626240, 1103626240, 1103626240) };
					vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) + vVar6 };
					vVar3 = { vVar3 + Vector(1103626240, 0f, 0f) };
					TASK::TASK_AIM_GUN_AT_COORD(iVar0, vVar3, -1, false, true);
				}
			}
			break;
		case 10:
			if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && !func_508(4194304))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 26, true);
				func_581(4194304);
			}
			func_774(Local_13.f_7.f_21, 2.350989E-38f, 9, 10);
			break;
	}
}

void func_463()
{
	func_773(&(Local_947.f_406), 500);
	func_547(&(Local_947.f_406), 1000);
}

void func_464()
{
	int iVar0;

	if (func_595(173) && !func_598(1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20) && Local_13.f_7.f_20 == NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()))
		{
			func_482(1.504633E-36f);
		}
	}
	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (PED::IS_PED_LASSOED(iVar0) || PED::IS_PED_HOGTIED(iVar0))
		{
			func_592(0, 1115815936 /* Float: 65f */, 5000, 0, 168, 169, 170, 171, 172, 173, 1, -1);
		}
	}
}

void func_465()
{
	int iVar0;

	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_511(iVar0, 2.446422E-13f, 1, 0))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, func_513(0), 1f, -1, 0.25f, 0, func_752(0));
		}
	}
}

void func_466()
{
	int iVar0;

	func_515(64);
	iVar0 = func_191(0);
	if (!func_481(4096, 255) && !func_481(2048, 255))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) < 3f)
		{
			func_482(4096);
		}
	}
}

void func_467()
{
	func_775();
}

void func_468()
{
	int iVar0;
	vector3 vVar1;

	func_515(4096);
	func_515(2048);
	iVar0 = func_191(0);
	vVar1 = { func_513(0) };
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	}
	if (func_715(NETWORK::PARTICIPANT_ID(), 0, 1) < 1108082688)
	{
		func_482(128);
	}
	if (func_606(32768))
	{
		func_599(0, 0, 174, 0);
	}
	else if (func_606(65536))
	{
		func_599(0, 0, 175, 0);
	}
	else if (func_600(vVar1, 1108082688 /* Float: 35f */) > 1)
	{
		func_599(0, 0, 73, 0);
	}
	else
	{
		func_599(0, 0, 72, 0);
	}
}

void func_469()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_747();
	func_775();
	func_776();
	func_777();
	func_778();
	func_751();
	iVar0 = func_191(0);
	iVar1 = func_191(1);
	func_723(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		iVar2 = func_242();
		if (iVar2 == 10)
		{
			if (func_508(2.350989E-38f) && func_349(iVar0, 3.034861E-30f))
			{
				func_482(2097152);
				TASK::TASK_PLAY_ANIM(iVar0, func_357(11), func_624(11), 4f, -4f, 2000, 24, 0f, false, 0, false, 0, false);
			}
		}
		else if (iVar2 == 9)
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar3, false, 0, false))
			{
				if (iVar3 != -3.273909E-18f)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iVar0, -3.273909E-18f, false, 0, false, false);
					TASK::TASK_SWAP_WEAPON(iVar0, 1, 1, 0, 0);
				}
			}
		}
	}
	if (func_511(iVar0, 6.915501E+28f, 1, 0) && ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		TASK::TASK_MOUNT_ANIMAL(iVar0, iVar1, -1, -1, 1f, 1033, 0, 0);
	}
}

void func_470()
{
	int iVar0;

	func_775();
	func_776();
	func_777();
	func_778();
	func_751();
	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (func_511(iVar0, -1.225639E-21f, 1, 0))
			{
				TASK::TASK_MOVE_IN_TRAFFIC(iVar0, 1f, 6152, 0);
			}
			if (func_508(8388608))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 6, false);
				func_509(8388608);
			}
			if (func_508(4194304))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 169, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 340, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 137, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 26, false);
				func_509(4194304);
			}
		}
	}
}

void func_471()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	func_199();
	func_747();
	func_723(0);
	func_751();
	func_779();
	func_196();
	if (func_606(262144) && !func_678(0, 255))
	{
		func_776();
	}
	if (func_501(2, 255))
	{
		if (func_678(0, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			func_780();
		}
	}
	iVar0 = func_191(0);
	iVar1 = func_191(1);
	iVar2 = func_242();
	bVar3 = true;
	bVar4 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && PED::IS_PED_FULLY_ON_MOUNT(iVar0, true))
		{
			if (TASK::_IS_PED_LEADING_HORSE(PLAYER::PLAYER_PED_ID()) && TASK::_GET_LED_HORSE_FROM_PED(PLAYER::PLAYER_PED_ID()) == iVar1)
			{
				TASK::TASK_STOP_LEADING_HORSE(PLAYER::PLAYER_PED_ID());
			}
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (!func_481(2097152, 255))
			{
				switch (iVar2)
				{
					case 10:
						if (func_508(2.350989E-38f))
						{
							TASK::CLEAR_PED_TASKS(iVar0, true, false);
						}
						break;
					case 9:
						if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar5, false, 0, false))
						{
							if (iVar5 != -3.273909E-18f)
							{
								WEAPON::MAKE_PED_DROP_WEAPON(iVar0, false, 0, true, false);
							}
						}
						break;
				}
				func_482(2097152);
			}
			if (!func_501(2097152, 255))
			{
				if (PED::IS_PED_HOGTIED(iVar0))
				{
					AUDIO::STOP_PED_SPEAKING(iVar0, true);
					func_581(2097152);
				}
			}
			if (func_508(8388608))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 6, false);
				func_509(8388608);
			}
			if (func_508(4194304))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 169, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 340, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 137, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 26, false);
				func_509(4194304);
			}
			if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true)) || PED::GET_MOUNT(iVar0) == iVar1) || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) > 1112014848)
			{
				bVar3 = false;
				iVar1 = 0;
			}
			if (iVar2 == 8)
			{
				if (func_504())
				{
					if (!ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(Local_947.f_19.f_246, func_505(0)))
					{
						bVar4 = true;
					}
				}
			}
		}
		if (func_511(iVar0, 3.034861E-30f, 1, 0) || !func_501(8, 255))
		{
			TASK::CLEAR_SEQUENCE_TASK(&(Local_947.f_19.f_164));
			TASK::_0x23767D80C7EED7C6(&(Local_947.f_19.f_164), -58092.91f);
			if (bVar4)
			{
				TASK::TASK_PLAY_ANIM(0, func_357(11), func_624(11), 4f, -8f, 300, 24, 0f, false, 0, false, 0, false);
			}
			if (bVar3)
			{
				TASK::TASK_MOUNT_ANIMAL(0, iVar1, -1, -1, 2f, 8, 0, 0);
			}
			TASK::TASK_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 3, 0, -1f, -1, iVar1);
			TASK::CLOSE_SEQUENCE_TASK(Local_947.f_19.f_164);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				TASK::TASK_PERFORM_SEQUENCE(iVar0, Local_947.f_19.f_164);
				func_581(8);
				PED::SET_PED_KEEP_TASK(iVar0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
	}
	iVar6 = func_191(2);
	if (func_578())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar6) && !PED::IS_PED_DEAD_OR_DYING(iVar6, true))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar6))
			{
				if (!func_510(2))
				{
					if (func_511(iVar6, 2.40763E-20f, 1, 0))
					{
						TASK::TASK_FLEE_COORD(iVar6, ENTITY::GET_ENTITY_COORDS(iVar6, false, false), 3, 0, -1f, -1, 0);
						PED::SET_PED_KEEP_TASK(iVar6, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar6, false);
					}
				}
			}
		}
	}
}

void func_472()
{
}

void func_473()
{
	func_770(0);
}

void func_474()
{
	int iVar0;

	func_770(0);
	iVar0 = func_191(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			if (func_511(iVar0, 5.999514E-21f, 1, 0))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iVar0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_475()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_770(0);
	iVar0 = func_191(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
	if ((((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && ENTITY::DOES_ENTITY_EXIST(iVar1)) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		if (!func_349(iVar0, 5.999514E-21f))
		{
			iVar2 = func_242();
			if (iVar2 == 10)
			{
				if (func_508(2.350989E-38f) && func_349(iVar0, 3.034861E-30f))
				{
					func_482(2097152);
					TASK::TASK_PLAY_ANIM(iVar0, func_357(11), func_624(11), 4f, -4f, 2000, 24, 0f, false, 0, false, 0, false);
				}
			}
			else if (iVar2 == 9)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar3, false, 0, false))
				{
					if (iVar3 != -3.273909E-18f)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iVar0, -3.273909E-18f, false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(iVar0, 1, 1, 0, 0);
					}
				}
			}
			if (func_511(iVar0, 672823.8f, 1, 0))
			{
				TASK::TASK_GO_TO_ENTITY(iVar0, iVar1, -1, (1075838976 / 2f), 1f, 2f, 0);
			}
		}
	}
}

void func_476()
{
	int iVar0;
	int iVar1;

	iVar0 = func_191(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID()) && NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()) == Local_13.f_7.f_22)
	{
		func_781(0);
		if (func_771())
		{
			if (func_511(iVar1, -0.001425525f, 1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
				{
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar1, func_357(7), func_624(7), iVar0, -1, 4f, -2f, 8, 0f, false, false, -1f, 0, 0, -1f);
				}
			}
		}
	}
	if ((((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && ENTITY::DOES_ENTITY_EXIST(iVar1)) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		if (func_511(iVar0, -0.001425525f, 1, 0))
		{
			func_482(4194304);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar0, iVar1, 0, -1f, -1f, -1f);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar0, func_357(8), func_624(8), iVar1, -1, 4f, -2f, 8, 0f, false, false, -1f, 0, 0, -1f);
		}
	}
}

void func_477()
{
}

void func_478()
{
	if (!func_508(64))
	{
		func_482(1.084202E-19f);
	}
	func_199();
	func_482(2.350989E-38f);
}

void func_479()
{
	if (!func_481(2.524355E-29f, 255))
	{
		if (!func_510(0))
		{
			if (func_481(2048, 255) || func_481(4096, 255))
			{
				func_782(7, Local_947.f_4);
				func_783(7, Local_947.f_4);
				func_482(2.524355E-29f);
			}
		}
	}
	func_199();
	func_482(2.350989E-38f);
}

bool func_480(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_481(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (iParam1 == 255 && !func_230(&iParam1))
	{
		return false;
	}
	return func_189(Local_82[iParam1 /*27*/].f_1, iParam0);
}

void func_482(int iParam0)
{
	int iVar0;

	if (!func_230(&iVar0))
	{
		return;
	}
	func_251(&(Local_82[iVar0 /*27*/].f_1), iParam0);
}

void func_483()
{
	if (func_508(2))
	{
		if (func_784(0))
		{
			func_785(1);
		}
	}
}

void func_484()
{
	int iVar0;
	struct<13> Var1;

	Var1.f_6 = 1f;
	Var1.f_7 = 1f;
	Var1.f_8 = 1f;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_640(func_639(iVar0), &Var1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var1))
			{
				EVENT::_EVENT_FLUSH_ALL_EVENT_TRACKERS(Var1);
			}
		}
		iVar0++;
	}
}

void func_485(int iParam0, int iParam1)
{
	func_350(&(Local_947.f_578[iParam0 /*39*/].f_5), iParam1);
}

bool func_486(int iParam0, int iParam1)
{
	return func_189(Local_947.f_578[iParam0 /*39*/].f_5, iParam1);
}

int func_487(int iParam0)
{
	return func_191(iParam0);
}

void func_488(int iParam0, bool bParam1)
{
	int iVar0;
	struct<8> Var1;

	Var1.f_4 = 1;
	Var1.f_7 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_786(Local_947.f_578[iParam0 /*39*/].f_6[iVar0 /*8*/]))
		{
			func_787(&(Local_947.f_578[iParam0 /*39*/].f_6[iVar0 /*8*/]), 1, 1);
			if (bParam1)
			{
				MISC::COPY_SCRIPT_STRUCT(&(Local_947.f_578[iParam0 /*39*/].f_6[iVar0 /*8*/]), &Var1, 8);
			}
		}
		iVar0++;
	}
	func_485(iParam0, 2);
}

int func_489(var uParam0, var uParam1)
{
	return uParam0;
}

int func_490(int iParam0)
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

int func_491(struct<2> Param0)
{
	return func_788(Param0);
}

void func_492(struct<2> Param0, int iParam2, int iParam3)
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
	switch (func_489(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_790(func_789(Param0));
			if ((iVar4 == -1 && iParam3 == 2) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2.332405E-23f) == 0)
			{
				iVar5 = 0;
				while (iVar5 <= 112)
				{
					if (func_225(iVar5) == func_789(Param0))
					{
						iVar4 = iVar5;
					}
					else
					{
						iVar5++;
					}
				}
			}
			iVar6 = func_791(iVar4);
			if (!func_792(iVar6, 0))
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

int func_493(int iParam0, int iParam1)
{
	int iVar0;
	struct<29> Var1;
	int iVar32;
	int iVar33;

	Var1.f_10 = 30f;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	iVar33 = 1;
	while (iVar33 <= 46)
	{
		iVar32 = iVar33;
		if (iVar32 == iParam0)
		{
			return (iVar0 + iParam1);
		}
		else
		{
			func_32(&Var1, iVar32, -1, -1, 255);
			iVar0 = (iVar0 + Var1);
		}
		iVar33++;
	}
	return -1;
}

void func_494(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_793(&Var0);
}

var func_495(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901671.f_242.f_59;
		default:
			break;
	}
	return Global_1901671.f_242.f_55;
}

var func_496(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901671.f_242.f_61;
		default:
			break;
	}
	return Global_1901671.f_242.f_57;
}

var func_497(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901671.f_242.f_60;
		default:
			break;
	}
	return Global_1901671.f_242.f_56;
}

struct<2> func_498(int iParam0)
{
	struct<2> Var0;

	switch (iParam0)
	{
		case 1:
			return func_794(-1.11244E+21f);
		case 2:
			return func_794(-0.03766548f);
		case 3:
			return func_794(20967.98f);
		case 4:
			return func_794(20967.98f);
	}
	return Var0;
}

int func_499(int iParam0, int iParam1)
{
	if (!func_795(iParam0, iParam1))
	{
		return -1;
	}
	return (iParam1 + (8 + func_796(iParam0)));
}

void func_500(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_643(iParam1, 8.746343E-07f) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iVar2, iParam0))
	{
		return;
	}
	MISC::CLEAR_BIT(&iVar2, iParam0);
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

bool func_501(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (iParam1 == 255 && !func_230(&iParam1))
	{
		return false;
	}
	return func_189(Local_82[iParam1 /*27*/].f_1.f_1, iParam0);
}

void func_502(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_28() != 0)
	{
		return;
	}
	if (func_797())
	{
		return;
	}
	if (PED::_IS_ANIMAL_CONTROLLED_BY_A_PLAYER(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_798(iParam0, 1) < 0)
	{
		return;
	}
	if (func_798(iParam0, 1) >= 106)
	{
		return;
	}
	if (!bParam1)
	{
		if (!Global_1149417.f_3876.f_2[func_798(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	Global_1149417.f_3876.f_2[func_798(iParam0, 1) /*4*/].f_2++;
	if (!bParam2)
	{
		return;
	}
	if (Global_1295619.f_11 != Global_1295619)
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 0;
	Var0.f_5 = iParam0;
	Var0.f_6 = bParam1;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295619.f_149[iVar8]))
		{
		}
		else if (!GANG::_NETWORK_IS_GANG_MEMBER(Global_1295619.f_10, Global_1295619.f_149[iVar8]))
		{
		}
		else if (Global_1295619.f_149[iVar8] == Global_1295619.f_5)
		{
		}
		else
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar7, Global_1295619.f_149[iVar8]);
		}
		iVar8++;
	}
	func_799(&Var0, uVar7);
}

void func_503(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_499(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_800(iVar0, iParam0);
}

bool func_504()
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_947.f_19.f_246) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_947.f_19.f_246, false))
	{
		return true;
	}
	return false;
}

char* func_505(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Female";
		case 2:
			return "Fish";
		default:
			break;
	}
	return "Female";
}

var func_506(int iParam0)
{
	return func_801(0, iParam0);
}

char* func_507(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "POLE";
		case 1:
			return "BOBBER";
		case 2:
			return "RAG";
		default:
			break;
	}
	return "POLE";
}

bool func_508(int iParam0)
{
	return func_189(Local_947.f_19.f_253, iParam0);
}

void func_509(int iParam0)
{
	int iVar0;

	if (!func_230(&iVar0))
	{
		return;
	}
	func_350(&(Local_82[iVar0 /*27*/].f_1.f_1), iParam0);
}

bool func_510(int iParam0)
{
	return func_666(&(Local_947.f_406.f_78), 1, iParam0);
}

bool func_511(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam2 && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return false;
	}
	if (!bParam3 && func_349(iParam0, iParam1))
	{
		return false;
	}
	if (iParam1 == -2.815016E-26f && PED::IS_PED_BEING_JACKED(iParam0))
	{
		return false;
	}
	return true;
}

float func_512(int iParam0, int iParam1)
{
	return BUILTIN::VDIST(func_802(iParam0), func_802(iParam1));
}

Vector3 func_513(int iParam0)
{
	return Local_947.f_274.f_7[iParam0 /*11*/].f_6;
}

void func_514(int iParam0)
{
	func_350(&(Local_947.f_19.f_10), iParam0);
}

void func_515(int iParam0)
{
	int iVar0;

	if (!func_230(&iVar0))
	{
		return;
	}
	func_350(&(Local_82[iVar0 /*27*/].f_1), iParam0);
}

int func_516(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 3;
		case 2:
			return 35;
		case 3:
			return 55;
		default:
			break;
	}
	return 0;
}

int func_517(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			if (Global_1207465.f_3[iParam0] * 2 <= 32)
			{
				return Global_1207465.f_3[iParam0] * 2;
			}
			return 32;
		case 2:
			if (Global_1207465.f_3[iParam0] * 2 <= 20)
			{
				return Global_1207465.f_3[iParam0] * 2;
			}
			return 20;
		case 3:
			if (Global_1207465.f_3[iParam0] * 2 <= 16)
			{
				return Global_1207465.f_3[iParam0] * 2;
			}
			return 16;
		default:
			break;
	}
	return 0;
}

void func_518(bool bParam0)
{
	func_206(bParam0, 0);
	func_206(bParam0, 1);
	func_206(bParam0, 3);
	func_204(bParam0);
}

void func_519(bool bParam0)
{
	func_205(bParam0);
	func_803(bParam0, 0, 3);
}

void func_520(bool bParam0, int iParam1)
{
	MISC::SET_BIT(&(bParam0->f_4), iParam1);
}

void func_521(bool bParam0)
{
	func_206(bParam0, 0);
	func_520(bParam0, 0);
	func_520(bParam0, 1);
	func_520(bParam0, 4);
	func_520(bParam0, 5);
}

void func_522(bool bParam0)
{
	func_206(bParam0, 1);
	func_520(bParam0, 2);
	func_520(bParam0, 3);
	func_520(bParam0, 6);
	func_520(bParam0, 7);
	func_209(bParam0, 2);
}

void func_523(bool bParam0)
{
	func_206(bParam0, 0);
	func_520(bParam0, 0);
	func_520(bParam0, 1);
	func_520(bParam0, 2);
}

void func_524(bool bParam0)
{
	func_206(bParam0, 1);
	func_204(bParam0);
}

void func_525(bool bParam0)
{
	func_206(bParam0, 2);
	func_520(bParam0, 3);
}

void func_526(bool bParam0)
{
	func_206(bParam0, 3);
	func_520(bParam0, 4);
}

void func_527(bool bParam0)
{
	func_520(bParam0, 0);
	func_520(bParam0, 1);
}

void func_528(bool bParam0)
{
	func_520(bParam0, 2);
	func_520(bParam0, 3);
}

void func_529(bool bParam0)
{
	func_520(bParam0, 4);
	func_520(bParam0, 5);
}

bool func_530(bool bParam0, int iParam1)
{
	*bParam0 = Global_1245159.f_9818;
	bParam0->f_2 = 1.013984E-23f;
	bParam0->f_3 = iParam1;
	return (DATAFILE::PARSEDDATA_IS_FILE_LOADED(*bParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0));
}

bool func_531(bool bParam0, int iParam1)
{
	bParam0->f_2 = 5.658121E-27f;
	bParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_532(vector3 vParam0, int iParam3, var uParam4, float fParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = fParam5;
	uVar0 = *iParam6;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_533(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (Global_1245159[iParam0 /*5*/].f_4 + iParam1);
}

bool func_534(int iParam0, bool bParam1)
{
	if (iParam0 > -1 && iParam0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (!bParam1)
		{
			return true;
		}
		return NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0));
	}
	return false;
}

bool func_535(int iParam0)
{
	return func_134(8, iParam0);
}

int func_536(int iParam0)
{
	return iParam0;
}

void func_537(int iParam0, int iParam1, char* sParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2 = sParam2;
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_3 = fParam3;
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_6 = iParam4;
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_4 = iParam5;
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_5 = iParam6;
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_7 = iParam7;
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1 = iParam8;
	if (func_804(iParam0))
	{
		func_805(iParam0, iParam1, 16);
	}
}

bool func_538(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (iParam1 == 255 && !func_230(&iParam1))
	{
		return false;
	}
	return func_189(Local_82[iParam1 /*27*/].f_1.f_2, iParam0);
}

void func_539(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2))
	{
		return;
	}
	if (!bParam2)
	{
		func_805(iParam0, iParam1, 1);
	}
	else
	{
		func_806(iParam0, iParam1, 1);
	}
	if (bParam3 && func_804(iParam0))
	{
		func_807(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/], bParam2, 1, 1);
	}
}

void func_540(int iParam0, int iParam1)
{
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2 = "";
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_3 = 0;
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_6 = 0;
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_4 = 1;
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_5 = 0;
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_7 = -1;
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1 = 0;
	if (func_786(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/]))
	{
		func_787(&(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/]), 1, 1);
	}
}

void func_541(var uParam0)
{
	func_235(uParam0, 0);
	func_236(uParam0, 0);
	func_237(uParam0, 0);
	func_239(uParam0, 0);
	func_241(uParam0, 1, 1, 1);
}

void func_542(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_350(&(uParam0->f_2), 4);
	}
	else
	{
		func_251(&(uParam0->f_2), 4);
	}
}

void func_543(var uParam0)
{
	func_809(uParam0, (func_808(uParam0) - 6f));
	func_810(uParam0, 1);
}

void func_544(var uParam0)
{
	func_811(uParam0, 1);
	func_812(uParam0, 1);
	func_813(uParam0, 1);
}

void func_545(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_350(&(uParam0->f_2), 131072);
	}
	else
	{
		func_251(&(uParam0->f_2), 131072);
	}
}

void func_546(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_251(uParam0, 4);
	}
	else
	{
		func_350(uParam0, 4);
	}
}

void func_547(var uParam0, int iParam1)
{
	uParam0->f_19 = iParam1;
}

bool func_548(int iParam0, var uParam1)
{
	int iVar0;

	*uParam1 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam0 * 10) * 1023410176));
	uParam1->f_2 = (iParam0 * 10 % 32);
	iVar0 = (32 - uParam1->f_2);
	if (iVar0 < 10)
	{
		uParam1->f_1 = *uParam1 + 1;
		uParam1->f_3 = (9 - iVar0);
	}
	else
	{
		uParam1->f_1 = *uParam1;
		uParam1->f_3 = uParam1->f_2 + 9;
	}
	return (((*uParam1 > -1 && uParam1->f_1 > -1) && *uParam1 < 3) && uParam1->f_1 < 3);
}

int func_549(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 31);
	iVar0 = BUILTIN::SHIFT_RIGHT(iVar0, (31 - iParam1));
	iVar0 ^= -1;
	iVar0 = BUILTIN::SHIFT_LEFT(iVar0, iParam0);
	return iVar0;
}

var func_550()
{
	return Local_947.f_3;
}

void func_551(int iParam0, float fParam1)
{
	Local_947.f_274.f_7[iParam0 /*11*/].f_4 = fParam1;
}

void func_552(int iParam0, int iParam1, float fParam2)
{
	Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_2 = fParam2;
}

void func_553(int iParam0)
{
	func_814(0, iParam0);
}

void func_554(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6)
{
	Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_7 = { vParam2 };
	Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_10 = { 0f, 0f, fParam5 };
	Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_13 = iParam6;
}

int func_555(int iParam0)
{
	if (!func_190(iParam0))
	{
		return 0;
	}
	return Global_1142409.f_1[iParam0 /*63*/].f_3;
}

bool func_556(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_947.f_15 };
	iVar7 = 0;
	iVar8 = func_629(iParam0);
	iVar9 = func_815(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_38[iParam0]))
		{
			iVar9 = func_815(iParam0);
			fVar0 = func_752(iParam0);
			if (!func_189(Local_947.f_274.f_7[iParam0 /*11*/].f_2, 2))
			{
				vVar1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar4, 0f, func_513(iParam0)) };
			}
			else
			{
				vVar1 = { func_513(iParam0) };
			}
			if (!func_816(&(Local_13.f_38[iParam0]), iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_IS_THIS_MODEL_A_HORSE(iVar8)), 1, 1))
			{
				*iParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(Local_13.f_38[iParam0]);
				if (ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
					ENTITY::_SET_ENTITY_FADE_IN(iVar7);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar7, true);
					PED::SET_PED_CONFIG_FLAG(iVar7, 178, false);
					if (PED::IS_PED_HUMAN(iVar7))
					{
						WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iVar7, false);
						WEAPON::_0x431240A58484D5D0(iVar7, false);
						WEAPON::_0x45E57FDD531C9477(iVar7, false);
					}
					if (iVar9 != 0)
					{
						PED::_EQUIP_META_PED_OUTFIT(iVar7, iVar9);
						PED::_UPDATE_PED_VARIATION(iVar7, func_177(iParam0, 1), true, true, true, false);
					}
					else if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (PED::IS_PED_READY_TO_RENDER(iVar7))
						{
						}
						func_817(iVar7, 1);
					}
					if (func_818(iParam0))
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
					}
					if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (func_819(iParam0))
						{
							if (func_818(iParam0))
							{
							}
						}
						else
						{
							PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
						}
					}
					if (func_557(iParam0))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_38[iParam0]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_38[iParam0]);
						}
					}
					*bParam2 = 1;
					return false;
				}
				else
				{
					*iParam1 = 1;
				}
			}
		}
		else if (PED::IS_PED_READY_TO_RENDER(NETWORK::NET_TO_PED(Local_13.f_38[iParam0])))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_557(int iParam0)
{
	return func_177(iParam0, 128);
}

int func_558(int iParam0, int iParam1)
{
	return Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_2;
}

bool func_559(int iParam0, int iParam1)
{
	return func_189(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 64);
}

bool func_560(int iParam0, int iParam1)
{
	return func_189(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 16);
}

Vector3 func_561(int iParam0, int iParam1)
{
	return Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_7;
}

bool func_562(int iParam0, int iParam1)
{
	return Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_13;
}

bool func_563(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_820(*uParam0, 0f, 0f, 0f))
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

bool func_564(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_947.f_329[iParam0 /*76*/].f_3, iParam1);
}

bool func_565(int iParam0, int iParam1)
{
	return func_189(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 1);
}

bool func_566(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED())
	{
		return false;
	}
	if (!func_821(iParam1))
	{
		return false;
	}
	*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, vParam2, true, bParam5, false, false, true));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam5)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return true;
	}
	return false;
}

bool func_567(int iParam0, int iParam1)
{
	return func_189(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 2);
}

bool func_568(int iParam0, int iParam1)
{
	return func_189(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 4);
}

bool func_569(int iParam0, int iParam1)
{
	return func_189(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 128);
}

Vector3 func_570(int iParam0, int iParam1)
{
	return Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_10;
}

bool func_571(int iParam0, int iParam1, int iParam2)
{
	return func_189(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, iParam2);
}

float func_572(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 1135869952);
	}
	else if (fParam0 >= 1135869952)
	{
		fVar0 = (fVar0 - 1135869952);
	}
	return fVar0;
}

Vector3 func_573(vector3 vParam0)
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

bool func_574(int iParam0, int iParam1)
{
	return func_189(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 256);
}

void func_575(int iParam0, int iParam1, bool bParam2)
{
	ENTITY::FREEZE_ENTITY_POSITION(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/], bParam2);
}

bool func_576(int iParam0, int iParam1)
{
	return func_189(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 512);
}

void func_577(var uParam0, int iParam1)
{
	switch (uParam0->f_2)
	{
		case 0:
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_1))
			{
				uParam0->f_2 = 1;
			}
			break;
		case 1:
			if (!func_822(iParam1))
			{
			}
			else
			{
				uParam0->f_2 = 2;
			}
			break;
		case 2:
			if (func_823(iParam1))
			{
			}
			else
			{
				uParam0->f_1 = 255;
				*uParam0 = func_825(iParam1, func_824(Local_13.f_58.f_10, iParam1), func_231(iParam1));
				func_122(&(Local_13.f_58.f_10), iParam1, 3);
				uParam0->f_2 = 0;
			}
			break;
	}
}

bool func_578()
{
	switch (func_242())
	{
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return true;
		default:
			break;
	}
	return false;
}

bool func_579()
{
	return (func_135(64) || func_134(64, 255));
}

bool func_580()
{
	return ((func_590(256) || func_590(512)) || func_590(1024));
}

void func_581(int iParam0)
{
	int iVar0;

	if (!func_230(&iVar0))
	{
		return;
	}
	func_251(&(Local_82[iVar0 /*27*/].f_1.f_1), iParam0);
}

void func_582(int iParam0)
{
	if (Local_13.f_7 != iParam0)
	{
		func_596(&(Local_13.f_7.f_10));
		Local_13.f_7 = iParam0;
	}
}

void func_583(bool bParam0, bool bParam1, bool bParam2)
{
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(bParam0, bParam1, bParam2);
}

void func_584()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar0 = func_191(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
		{
			iVar1 = func_826(0);
			if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
			{
				iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar2, true, false) };
					PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(iVar0, vVar3, 3);
				}
			}
		}
	}
}

float func_585(int iParam0, int iParam1, bool bParam2)
{
	if (!func_534(iParam1, 0))
	{
		if (!func_230(&iParam1))
		{
			return 0f;
		}
	}
	if (bParam2)
	{
		if (Local_82[iParam1 /*27*/].f_4.f_2[iParam0] < 0f)
		{
			return 0f;
		}
	}
	return Local_82[iParam1 /*27*/].f_4.f_2[iParam0];
}

bool func_586(int iParam0)
{
	if (iParam0 == -230.1699f || iParam0 == 5.402792E-27f)
	{
		return true;
	}
	return false;
}

void func_587(int iParam0)
{
	func_251(&(Local_13.f_7.f_30), iParam0);
}

void func_588(int iParam0)
{
	func_350(&(Local_13.f_7.f_30), iParam0);
}

bool func_589(int iParam0, int iParam1)
{
	return func_827(iParam0, iParam1);
}

bool func_590(int iParam0)
{
	return func_189(Local_947.f_19.f_251, iParam0);
}

int func_591(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!bParam3 || func_535(iVar0))
			{
				if (!bParam2 || func_828(iVar0))
				{
					if (func_622(iParam0, fParam1, iVar0, 0))
					{
						iVar1++;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_592(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = func_191(iParam0);
	iVar3 = 255;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	switch (iParam3)
	{
		case 0:
			iVar3 = Local_13.f_7.f_20;
			break;
		case 1:
			if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_21))
			{
				iVar3 = Local_13.f_7.f_21;
			}
			else
			{
				iVar3 = Local_13.f_7.f_20;
			}
			break;
		case 2:
			iVar3 = func_710(2, 1120272384 /* Float: 99f */, 1, 1);
			break;
		case 3:
			iVar3 = func_830(0, 119896, 1120272384 /* Float: 99f */, 1, 1);
			break;
		case 4:
			iVar3 = Local_13.f_7.f_22;
			break;
		case -1:
		case 5:
			iParam3 = 5;
			iVar1 = iVar0;
			break;
	}
	if (iVar1 == 0)
	{
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
		{
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
			{
				iVar1 = PLAYER::GET_PLAYER_PED(iVar3);
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
	}
	if (func_598(1))
	{
		return;
	}
	if (Local_13.f_7.f_9 != 0)
	{
		if (!func_606(32) || Local_13.f_7.f_15 < 1)
		{
			func_831(&(Local_13.f_7.f_15), iParam2);
			func_587(32);
			func_596(&(Local_13.f_7.f_9));
		}
		iVar4 = Local_13.f_7.f_15;
		if (bParam10 && !func_595(iParam4))
		{
			iVar4 = 1500;
		}
		if (func_603(Local_13.f_7.f_9, iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
			if (iVar5 != 255)
			{
				if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar3) || func_622(0, fParam1, iVar5, 1))
				{
					if (!func_595(iParam4))
					{
						func_599(iParam0, iParam3, iParam4, 0);
					}
					else if (!func_595(iParam5))
					{
						func_599(iParam0, iParam3, iParam5, 0);
					}
					else if (iParam6 != -1 && !func_595(iParam6))
					{
						func_599(iParam0, iParam3, iParam6, 0);
					}
					else if (iParam7 != -1 && !func_595(iParam7))
					{
						func_599(iParam0, iParam3, iParam7, 0);
					}
					else if (iParam8 != -1 && !func_595(iParam8))
					{
						func_599(iParam0, iParam3, iParam8, 0);
					}
					else if (iParam9 != -1 && !func_595(iParam9))
					{
						func_599(iParam0, iParam3, iParam9, 0);
					}
					else if (iParam11 != -1)
					{
						func_832(iParam11);
					}
				}
			}
		}
	}
	else
	{
		func_596(&(Local_13.f_7.f_9));
	}
}

void func_593()
{
	if (Local_13.f_7.f_11 == 0)
	{
		func_596(&(Local_13.f_7.f_11));
		func_831(&(Local_13.f_7.f_16), 12000);
		return;
	}
	if (func_590(524288))
	{
		func_596(&(Local_13.f_7.f_11));
		func_831(&(Local_13.f_7.f_16), 12000);
	}
}

bool func_594()
{
	int iVar0;

	if (func_590(1.084202E-19f))
	{
		return true;
	}
	if (Local_13.f_7.f_12 == 0)
	{
		func_596(&(Local_13.f_7.f_12));
	}
	if (func_603(Local_13.f_7.f_12, 100000))
	{
		if (!func_603(Local_13.f_7.f_9, 10000))
		{
			return false;
		}
		iVar0 = func_191(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (AUDIO::_IS_PED_IN_ANY_CONVERSATION(iVar0, true))
			{
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_595(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 - iVar1 * 32);
	return MISC::IS_BIT_SET(Local_947.f_19.f_46[iVar1], iVar2);
}

void func_596(var uParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

int func_597(var uParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	int iVar13;

	iVar3 = func_191(1);
	fVar7 = fParam4;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar5 = ENTITY::_GET_ENTITIES_NEAR_POINT(vParam1, fParam4, iVar0, 1);
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (!ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			if (func_833(iVar2))
			{
				iVar8 = PED::_GET_VEHICLE_DRAFT_HORSE_IS_ATTACHED_TO(iVar2);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar8))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || iVar2 != iVar3)
					{
						if (!bParam5 || PED::_GET_RIDER_OF_MOUNT(iVar2, false) == 0)
						{
							bVar9 = false;
							if (!bParam6)
							{
								bVar9 = true;
							}
							if (!bVar9)
							{
								iVar10 = func_191(0);
								if (ENTITY::DOES_ENTITY_EXIST(iVar10) && !PED::IS_PED_DEAD_OR_DYING(iVar10, true))
								{
									if (func_834(iVar10, iVar2, 0, fParam4, 0))
									{
										bVar9 = true;
									}
								}
							}
							if (bVar9)
							{
								fVar11 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, false, false), vParam1);
								if (fVar11 < 1112014848 && fVar11 < fVar7)
								{
									fVar7 = fVar11;
									*uParam0 = iVar2;
									iVar12 = PED::_GET_RIDER_OF_MOUNT(*uParam0, true);
									if (ENTITY::DOES_ENTITY_EXIST(iVar12))
									{
										iVar13 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar12);
										if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar13))
										{
											Local_13.f_7.f_25 = iVar13;
										}
									}
								}
								iVar6++;
							}
						}
					}
				}
			}
		}
		iVar4++;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar6;
}

bool func_598(bool bParam0)
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

void func_599(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<15> Var0;

	Var0 = { func_835(2.074977E-25f) };
	Var0.f_11 = iParam0;
	Var0.f_12 = iParam1;
	Var0.f_13 = iParam2;
	if (bParam3)
	{
		Var0.f_14 = 1;
	}
	else
	{
		Var0.f_14 = -1;
	}
	func_836(&Var0);
}

int func_600(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
		{
			if (func_535(iVar0))
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
				if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
				{
					iVar4 = PLAYER::GET_PLAYER_PED(iVar3);
					if (ENTITY::DOES_ENTITY_EXIST(iVar4) && !PED::IS_PED_DEAD_OR_DYING(iVar4, true))
					{
						if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar4, true, false), vParam0) < fParam3)
						{
							iVar1++;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_601(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_189(Local_82[iVar0 /*27*/].f_1.f_2, iParam0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_602(int iParam0)
{
	return func_189(Local_947.f_19.f_250, iParam0);
}

bool func_603(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam0 != 0)
	{
		if (NETWORK::GET_TIME_DIFFERENCE(iParam0, iVar0) > iParam1)
		{
			return true;
		}
	}
	return false;
}

int func_604()
{
	switch (func_242())
	{
		case 3:
			return 1;
		case 4:
			return 3;
		case 5:
			return 3;
		case 6:
			return 3;
		case 7:
			return 3;
		default:
			break;
	}
	return 4;
}

bool func_605()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;

	iVar0 = func_191(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar4 = { func_373(1) };
	fVar7 = (vVar4.z - vVar1.z);
	if (fVar7 > 5f)
	{
		return true;
	}
	return false;
}

bool func_606(int iParam0)
{
	return func_189(Local_13.f_7.f_30, iParam0);
}

int func_607()
{
	int iVar0;

	iVar0 = Local_13.f_7.f_19;
	switch (iVar0)
	{
		case 1:
			return 21;
		case 2:
			return 22;
		case 3:
			return 23;
		default:
			break;
	}
	return 21;
}

void func_608(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 - iVar1 * 32);
	MISC::CLEAR_BIT(&(Local_947.f_19.f_46[iVar1]), iVar2);
}

char[] func_609(int iParam0)
{
	switch (func_242())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "OREPHT_CL_IDLE";
				case 1:
					return "OREPHT_CL_IDLE";
				case 2:
					return "OREPHT_CL_IDLE";
				case 3:
					return "OREPHT_CL_CALL1";
				case 4:
					return "OREPHT_CL_CAL1M";
				case 5:
					return "OREPHT_CL_CAL1A";
				case 6:
					return "OREPHT_CL_CAL1R";
				case 7:
					return "OREPHT_CL_CALL2";
				case 8:
					return "OREPHT_CL_CALL2";
				case 9:
					return "OREPHT_CL_OFFR1";
				case 10:
					return "OREPHT_CL_OFFR2";
				case 11:
					return "OREPHT_CL_OFFR3";
				case 16:
					return "OREPHT_CL_TODO";
				case 21:
					return "OREPHT_CL_POSE1";
				case 22:
					return "OREPHT_CL_POSE2";
				case 23:
					return "OREPHT_CL_POSE3";
				case 24:
					return "OREPHT_CL_POSE4";
				case 83:
					return "OREPHT_CL_BACK1";
				case 84:
					return "OREPHT_CL_BACK1";
				case 85:
					return "OREPHT_CL_BACK1";
				case 86:
					return "OREPHT_CL_FALL";
				case 87:
					return "OREPHT_CL_SCRM";
				default:
					break;
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (func_246() == 2)
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_DA_IDLE";
					case 1:
						return "OREPHT_DA_IDLE";
					case 2:
						return "OREPHT_DA_IDLE";
					case 3:
						return "OREPHT_DA_CALL1";
					case 4:
						return "OREPHT_DA_CAL1M";
					case 5:
						return "OREPHT_DA_CAL1A";
					case 6:
						return "OREPHT_DA_CAL1R";
					case 7:
						return "OREPHT_DA_CALL2";
					case 8:
						return "OREPHT_DA_CALL2";
					case 9:
						return "OREPHT_DA_OFFR1";
					case 10:
						return "OREPHT_DA_OFFR2";
					case 11:
						return "OREPHT_DA_OFFR3";
					case 16:
						return "OREPHT_DA_TODO";
					case 48:
						return "OREPHT_DA_PHFRM";
					case 49:
						return "OREPHT_DA_PHFRM";
					case 50:
						return "OREPHT_DA_PHFRM";
					case 21:
						return "OREPHT_DH_POSE1";
					case 22:
						return "OREPHT_DH_POSE2";
					case 23:
						return "OREPHT_DH_POSE3";
					case 24:
						return "OREPHT_DH_POSE4";
					case 83:
						return "OREPHT_DA_BACK1";
					case 84:
						return "OREPHT_DA_BACK1";
					case 85:
						return "OREPHT_DA_BACK1";
					case 88:
						return "OREPHT_DA_SAVED";
					case 89:
						return "OREPHT_DA_OFFRB";
					case 90:
						return "OREPHT_DA_OFFRK";
					case 91:
						return "OREPHT_DA_OFFRO";
					case 92:
						return "OREPHT_DA_OFFRC";
					case 93:
						return "OREPHT_DA_OFFRW";
					case 94:
						return "OREPHT_DA_ATTCK";
					case 95:
						return "OREPHT_DA_ATTCK";
					case 96:
						return "OREPHT_DA_ATTCK";
					case 97:
						return "OREPHT_DA_PLCLS";
					case 98:
						return "OREPHT_DA_PLCLS";
					case 99:
						return "OREPHT_DA_PLSCR";
					case 100:
						return "OREPHT_DA_PLSCR";
					case 101:
						return "OREPHT_DA_SVRD1";
					case 102:
						return "OREPHT_DA_SVRD2";
					case 103:
						return "OREPHT_DA_SVRD3";
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_AN_IDLE";
					case 1:
						return "OREPHT_AN_IDLE";
					case 2:
						return "OREPHT_AN_IDLE";
					case 3:
						return "OREPHT_AN_CALL1";
					case 4:
						return "OREPHT_AN_CAL1M";
					case 5:
						return "OREPHT_AN_CAL1A";
					case 6:
						return "OREPHT_AN_CAL1R";
					case 7:
						return "OREPHT_AN_CALL2";
					case 8:
						return "OREPHT_AN_CALL2";
					case 9:
						return "OREPHT_AN_OFFR1";
					case 10:
						return "OREPHT_AN_OFFR2";
					case 11:
						return "OREPHT_AN_OFFR3";
					case 16:
						return "OREPHT_AN_TODO";
					case 48:
						return "OREPHT_AN_PHFRM";
					case 49:
						return "OREPHT_AN_PHFRM";
					case 50:
						return "OREPHT_AN_PHFRM";
					case 21:
						return "OREPHT_CL_POSE1";
					case 22:
						return "OREPHT_CL_POSE2";
					case 23:
						return "OREPHT_CL_POSE3";
					case 24:
						return "OREPHT_CL_POSE4";
					case 83:
						return "OREPHT_AN_BACK1";
					case 84:
						return "OREPHT_AN_BACK1";
					case 85:
						return "OREPHT_AN_BACK1";
					case 88:
						return "OREPHT_AN_SAVED";
					case 89:
						return "OREPHT_AN_OFFRB";
					case 90:
						return "OREPHT_AN_OFFRK";
					case 91:
						return "OREPHT_AN_OFFRO";
					case 92:
						return "OREPHT_AN_OFFRC";
					case 93:
						return "OREPHT_AN_OFFRW";
					case 94:
						return "OREPHT_AN_ATTCK";
					case 95:
						return "OREPHT_AN_ATTCK";
					case 96:
						return "OREPHT_AN_ATTCK";
					case 97:
						return "OREPHT_AN_PLCLS";
					case 98:
						return "OREPHT_AN_PLCLS";
					case 99:
						return "OREPHT_AN_PLSCR";
					case 100:
						return "OREPHT_AN_PLSCR";
					case 101:
						return "OREPHT_AN_SVRD1";
					case 102:
						return "OREPHT_AN_SVRD2";
					case 103:
						return "OREPHT_AN_SVRD3";
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_246() == 2)
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_DH_IDLE";
					case 1:
						return "OREPHT_DH_IDLE";
					case 2:
						return "OREPHT_DH_IDLE";
					case 9:
						return "OREPHT_DH_OFFR1";
					case 10:
						return "OREPHT_DH_OFFR2";
					case 11:
						return "OREPHT_DH_OFFR3";
					case 21:
						return "OREPHT_DH_POSE1";
					case 22:
						return "OREPHT_DH_POSE2";
					case 23:
						return "OREPHT_DH_POSE3";
					case 24:
						return "OREPHT_DH_POSE4";
					case 104:
						return "OREPHT_DH_WHER1";
					case 105:
						return "OREPHT_DH_WHER2";
					case 106:
						return "OREPHT_DH_WHER3";
					case 107:
						return "OREPHT_DH_NOHR";
					case 108:
						return "OREPHT_DH_YAYHR";
					case 48:
						return "OREPHT_DH_PHFRM";
					case 49:
						return "OREPHT_DH_PHFRM";
					case 50:
						return "OREPHT_DH_PHFRM";
					case 109:
						return "OREPHT_DH_HTCH1";
					case 110:
						return "OREPHT_DH_HTCH2";
					case 111:
						return "OREPHT_DH_HTCH3";
					case 113:
						return "OREPHT_DH_DMNT1";
					case 114:
						return "OREPHT_DH_DMNT2";
					case 115:
						return "OREPHT_DH_DMNT3";
					case 117:
						return "OREPHT_DH_REAR";
					case 77:
						return "OREPHT_DS_AGGDK";
					case 78:
						return "OREPHT_DS_AGGDK";
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_HR_IDLE";
					case 1:
						return "OREPHT_HR_IDLE";
					case 2:
						return "OREPHT_HR_IDLE";
					case 9:
						return "OREPHT_HR_OFFR1";
					case 10:
						return "OREPHT_HR_OFFR2";
					case 11:
						return "OREPHT_HR_OFFR3";
					case 12:
						return "OREPHT_FS_OFFR4";
					case 13:
						return "OREPHT_FS_OFFR4";
					case 14:
						return "OREPHT_FS_OFFR5";
					case 15:
						return "OREPHT_FS_OFFR5";
					case 17:
						return "OREPHT_FS_WAIT";
					case 18:
						return "OREPHT_FS_WAIT";
					case 19:
						return "OREPHT_FS_WAIT";
					case 21:
						return "OREPHT_HR_POSE1";
					case 22:
						return "OREPHT_HR_POSE2";
					case 23:
						return "OREPHT_HR_POSE3";
					case 24:
						return "OREPHT_HR_POSE4";
					case 104:
						return "OREPHT_HR_WHER1";
					case 105:
						return "OREPHT_HR_WHER2";
					case 106:
						return "OREPHT_HR_WHER3";
					case 107:
						return "OREPHT_HR_NOHR";
					case 108:
						return "OREPHT_HR_YAYHR";
					case 48:
						return "OREPHT_HR_PHFRM";
					case 49:
						return "OREPHT_HR_PHFRM";
					case 50:
						return "OREPHT_HR_PHFRM";
					case 109:
						return "OREPHT_HR_HTCH1";
					case 110:
						return "OREPHT_HR_HTCH2";
					case 111:
						return "OREPHT_HR_HTCH3";
					case 113:
						return "OREPHT_HR_DMNT1";
					case 114:
						return "OREPHT_HR_DMNT2";
					case 115:
						return "OREPHT_HR_DMNT3";
					case 117:
						return "OREPHT_HR_REAR";
					case 77:
						return "OREPHT_FS_AGGDK";
					case 78:
						return "OREPHT_FS_AGGDK";
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_246() == 2)
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_DH_IDLE";
					case 1:
						return "OREPHT_DH_IDLE";
					case 2:
						return "OREPHT_DH_IDLE";
					case 9:
						return "OREPHT_DH_OFFR1";
					case 10:
						return "OREPHT_DH_OFFR2";
					case 11:
						return "OREPHT_DH_OFFR3";
					case 21:
						return "OREPHT_DH_POSE1";
					case 22:
						return "OREPHT_DH_POSE2";
					case 23:
						return "OREPHT_DH_POSE3";
					case 24:
						return "OREPHT_DH_POSE4";
					case 104:
						return "OREPHT_DH_WHER1";
					case 105:
						return "OREPHT_DH_WHER2";
					case 106:
						return "OREPHT_DH_WHER3";
					case 107:
						return "OREPHT_DH_NOHR";
					case 108:
						return "OREPHT_DH_YAYHR";
					case 48:
						return "OREPHT_DH_PHFRM";
					case 49:
						return "OREPHT_DH_PHFRM";
					case 50:
						return "OREPHT_DH_PHFRM";
					case 109:
						return "OREPHT_DH_HTCH1";
					case 110:
						return "OREPHT_DH_HTCH2";
					case 111:
						return "OREPHT_DH_HTCH3";
					case 113:
						return "OREPHT_DH_DMNT1";
					case 114:
						return "OREPHT_DH_DMNT2";
					case 115:
						return "OREPHT_DH_DMNT3";
					case 117:
						return "OREPHT_DH_REAR";
					case 118:
						return "OREPHT_DT_TNT1";
					case 119:
						return "OREPHT_DT_TNT2";
					case 120:
						return "OREPHT_DT_TNT3";
					case 121:
						return "OREPHT_DT_CHS1";
					case 122:
						return "OREPHT_DT_CHS1";
					case 123:
						return "OREPHT_DT_CHS1";
					case 124:
						return "OREPHT_DT_THRN1";
					case 125:
						return "OREPHT_DT_AGATK";
					case 126:
						return "OREPHT_DT_AGATK";
					case 127:
						return "OREPHT_DT_AGATK";
					case 82:
						return "OREPHT_DT_FLEE";
					case 77:
						return "OREPHT_DS_AGGDK";
					case 78:
						return "OREPHT_DS_AGGDK";
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_HR_IDLE";
					case 1:
						return "OREPHT_HR_IDLE";
					case 2:
						return "OREPHT_HR_IDLE";
					case 9:
						return "OREPHT_HR_OFFR1";
					case 10:
						return "OREPHT_HR_OFFR2";
					case 11:
						return "OREPHT_HR_OFFR3";
					case 12:
						return "OREPHT_FS_OFFR4";
					case 13:
						return "OREPHT_FS_OFFR4";
					case 14:
						return "OREPHT_FS_OFFR5";
					case 15:
						return "OREPHT_FS_OFFR5";
					case 17:
						return "OREPHT_FS_WAIT";
					case 18:
						return "OREPHT_FS_WAIT";
					case 19:
						return "OREPHT_FS_WAIT";
					case 21:
						return "OREPHT_HR_POSE1";
					case 22:
						return "OREPHT_HR_POSE2";
					case 23:
						return "OREPHT_HR_POSE3";
					case 24:
						return "OREPHT_HR_POSE4";
					case 104:
						return "OREPHT_HR_WHER1";
					case 105:
						return "OREPHT_HR_WHER2";
					case 106:
						return "OREPHT_HR_WHER3";
					case 107:
						return "OREPHT_HR_NOHR";
					case 108:
						return "OREPHT_HR_YAYHR";
					case 109:
						return "OREPHT_HR_HTCH1";
					case 110:
						return "OREPHT_HR_HTCH2";
					case 111:
						return "OREPHT_HR_HTCH3";
					case 113:
						return "OREPHT_HR_DMNT1";
					case 114:
						return "OREPHT_HR_DMNT2";
					case 115:
						return "OREPHT_HR_DMNT3";
					case 117:
						return "OREPHT_HR_REAR";
					case 118:
						return "OREPHT_ST_TNT1";
					case 119:
						return "OREPHT_ST_TNT2";
					case 120:
						return "OREPHT_ST_TNT3";
					case 121:
						return "OREPHT_ST_CHS1";
					case 122:
						return "OREPHT_ST_CHS1";
					case 123:
						return "OREPHT_ST_CHS1";
					case 124:
						return "OREPHT_ST_THRN1";
					case 125:
						return "OREPHT_ST_AGATK";
					case 126:
						return "OREPHT_ST_AGATK";
					case 127:
						return "OREPHT_ST_AGATK";
					case 82:
						return "OREPHT_ST_FLEE";
					case 77:
						return "OREPHT_FS_AGGDK";
					case 78:
						return "OREPHT_FS_AGGDK";
					default:
						break;
				}
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return "OREPHT_FH_IDLE";
				case 1:
					return "OREPHT_FH_IDLE";
				case 2:
					return "OREPHT_FH_IDLE";
				case 128:
					return "OREPHT_FH_REEL";
				case 129:
					return "OREPHT_FH_WHOO";
				case 130:
					return "OREPHT_FH_CATCH";
				case 9:
					return "OREPHT_FH_OFFR1";
				case 10:
					return "OREPHT_FH_OFFR2";
				case 11:
					return "OREPHT_FH_OFFR3";
				case 48:
					return "OREPHT_FH_PHFRM";
				case 49:
					return "OREPHT_FH_PHFRM";
				case 50:
					return "OREPHT_FH_PHFRM";
				default:
					break;
			}
			break;
		case 9:
		case 10:
		case 11:
			switch (iParam0)
			{
				case 0:
					return "OREPHT_GN_IDLE";
				case 1:
					return "OREPHT_GN_IDLE";
				case 2:
					return "OREPHT_GN_IDLE";
				case 9:
					return "OREPHT_GN_OFFR1";
				case 10:
					return "OREPHT_GN_OFFR2";
				case 11:
					return "OREPHT_GN_OFFR3";
				case 131:
					return "OREPHT_GN_TDUP1";
				case 132:
					return "OREPHT_GN_TDUP2";
				case 133:
					return "OREPHT_GN_TDAT1";
				case 134:
					return "OREPHT_GN_TDAT2";
				case 135:
					return "OREPHT_GN_TDHG1";
				case 136:
					return "OREPHT_GN_TDHG2";
				case 137:
					return "OREPHT_GN_GTHR1";
				case 138:
					return "OREPHT_GN_GTHR1";
				case 139:
					return "OREPHT_GN_GTHR1";
				case 140:
					return "OREPHT_GN_GTHR2";
				case 141:
					return "OREPHT_GN_GTHR2";
				case 142:
					return "OREPHT_GN_GTHR2";
				case 144:
					return "OREPHT_GN_NOCAM";
				case 145:
					return "OREPHT_GN_NOCAM";
				case 146:
					return "OREPHT_GN_NOCAM";
				case 147:
					return "OREPHT_GN_PSEUP";
				case 148:
					return "OREPHT_GN_PSEUP";
				case 149:
					return "OREPHT_GN_PSEUP";
				case 150:
					return "OREPHT_GN_PSEAT";
				case 151:
					return "OREPHT_GN_PSEAT";
				case 152:
					return "OREPHT_GN_PSEAT";
				case 154:
					return "OREPHT_GN_PSHOG";
				case 155:
					return "OREPHT_GN_PSHOG";
				case 156:
					return "OREPHT_GN_PSHOG";
				case 158:
					return "OREPHT_GN_PHFR1";
				case 159:
					return "OREPHT_GN_PHFR1";
				case 160:
					return "OREPHT_GN_PHFR1";
				case 161:
					return "OREPHT_GN_PHFR2";
				case 162:
					return "OREPHT_GN_PHFR2";
				case 163:
					return "OREPHT_GN_PHFR2";
				case 165:
					return "OREPHT_GN_HOGCR";
				case 166:
					return "OREPHT_GN_HOGCR";
				case 167:
					return "OREPHT_GN_HOGCR";
				case 168:
					return "OREPHT_GN_HOGCT";
				case 169:
					return "OREPHT_GN_HOGCT";
				case 170:
					return "OREPHT_GN_HOGCT";
				case 171:
					return "OREPHT_GN_HOGRL";
				case 172:
					return "OREPHT_GN_HOGRL";
				case 173:
					return "OREPHT_GN_HOGRL";
				case 174:
					return "OREPHT_GN_NOPED";
				case 175:
					return "OREPHT_GN_NOPSE";
				default:
					break;
			}
			break;
	}
	if (func_246() == 2)
	{
		switch (iParam0)
		{
			case 3:
				return "OREPHT_DA_CALL1";
			case 4:
				return "OREPHT_DA_CAL1M";
			case 5:
				return "OREPHT_DA_CAL1A";
			case 6:
				return "OREPHT_DA_CAL1R";
			case 7:
				return "OREPHT_DA_CALL2";
			case 8:
				return "OREPHT_DA_CALL2";
			case 34:
				return "OREPHT_DS_ACCPT";
			case 35:
				return "OREPHT_DS_DECLN";
			case 12:
				return "OREPHT_DS_OFFR4";
			case 13:
				return "OREPHT_DS_OFFR4";
			case 14:
				return "OREPHT_DS_OFFR5";
			case 15:
				return "OREPHT_DS_OFFR5";
			case 36:
				return "OREPHT_DS_PHCAM";
			case 37:
				return "OREPHT_DS_PHCAM";
			case 38:
				return "OREPHT_DS_PHCAM";
			case 40:
				return "OREPHT_DS_PHFAR";
			case 41:
				return "OREPHT_DS_PHFAR";
			case 42:
				return "OREPHT_DS_PHFAR";
			case 44:
				return "OREPHT_DS_PHFRM";
			case 45:
				return "OREPHT_DS_PHFRM";
			case 46:
				return "OREPHT_DS_PHFRM";
			case 52:
				return "OREPHT_DS_PHCLS";
			case 53:
				return "OREPHT_DS_PHCLS";
			case 54:
				return "OREPHT_DS_PHCLS";
			case 17:
				return "OREPHT_DS_WAIT";
			case 18:
				return "OREPHT_DS_WAIT";
			case 19:
				return "OREPHT_DS_WAIT";
			case 59:
				return "OREPHT_DS_PHWAT";
			case 60:
				return "OREPHT_DS_PHWAT";
			case 61:
				return "OREPHT_DS_PHWAT";
			case 56:
				return "OREPHT_DS_PHRDY";
			case 57:
				return "OREPHT_DS_PHRDY";
			case 58:
				return "OREPHT_DS_PHRDY";
			case 62:
				return "OREPHT_DS_PHNOW";
			case 63:
				return "OREPHT_DS_PHNOW";
			case 64:
				return "OREPHT_DS_PHNOW";
			case 65:
				return "OREPHT_DS_PHBAD";
			case 68:
				return "OREPHT_DS_PHRWB";
			case 66:
				return "OREPHT_DS_PHOK";
			case 69:
				return "OREPHT_DS_PHRWO";
			case 67:
				return "OREPHT_DS_PHGOD";
			case 70:
				return "OREPHT_DS_PHRWG";
			case 71:
				return "OREPHT_DS_FILM";
			case 25:
				return "OREPHT_DS_RIDE1";
			case 26:
				return "OREPHT_DS_RIDE2";
			case 27:
				return "OREPHT_DS_RIDE3";
			case 28:
				return "OREPHT_DS_RIDB1";
			case 29:
				return "OREPHT_DS_RIDB2";
			case 30:
				return "OREPHT_DS_RIDB3";
			case 31:
				return "OREPHT_DS_FAIL1";
			case 32:
				return "OREPHT_DS_FAIL2";
			case 33:
				return "OREPHT_DS_FAIL3";
			case 72:
				return "OREPHT_DS_ANNOY";
			case 73:
				return "OREPHT_DS_ANPOS";
			case 74:
				return "OREPHT_DS_AGGRO";
			case 75:
				return "OREPHT_DS_AGGRO";
			case 76:
				return "OREPHT_DS_AGGRO";
			case 77:
				return "OREPHT_DS_AGGHR";
			case 78:
				return "OREPHT_DS_AGGHR";
			case 79:
				return "OREPHT_DS_HOGTD";
			case 80:
				return "OREPHT_DS_HOGTD";
			case 81:
				return "OREPHT_DS_HOGTD";
			case 82:
				return "OREPHT_DS_HOGUT";
			default:
				break;
		}
	}
	switch (func_242())
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			switch (iParam0)
			{
				case 34:
					return "OREPHT_TS_ACCPT";
				case 35:
					return "OREPHT_TS_DECLN";
				case 12:
					return "OREPHT_TS_OFFR4";
				case 13:
					return "OREPHT_TS_OFFR4";
				case 14:
					return "OREPHT_TS_OFFR5";
				case 15:
					return "OREPHT_TS_OFFR5";
				case 36:
					return "OREPHT_TS_PHCAM";
				case 37:
					return "OREPHT_TS_PHCAM";
				case 38:
					return "OREPHT_TS_PHCAM";
				case 40:
					return "OREPHT_TS_PHFAR";
				case 41:
					return "OREPHT_TS_PHFAR";
				case 42:
					return "OREPHT_TS_PHFAR";
				case 44:
					return "OREPHT_TS_PHFRM";
				case 45:
					return "OREPHT_TS_PHFRM";
				case 46:
					return "OREPHT_TS_PHFRM";
				case 52:
					return "OREPHT_TS_PHCLS";
				case 53:
					return "OREPHT_TS_PHCLS";
				case 54:
					return "OREPHT_TS_PHCLS";
				case 17:
					return "OREPHT_TS_WAIT";
				case 18:
					return "OREPHT_TS_WAIT";
				case 19:
					return "OREPHT_TS_WAIT";
				case 59:
					return "OREPHT_TS_PHWAT";
				case 60:
					return "OREPHT_TS_PHWAT";
				case 61:
					return "OREPHT_TS_PHWAT";
				case 56:
					return "OREPHT_TS_PHRDY";
				case 57:
					return "OREPHT_TS_PHRDY";
				case 58:
					return "OREPHT_TS_PHRDY";
				case 62:
					return "OREPHT_TS_PHNOW";
				case 63:
					return "OREPHT_TS_PHNOW";
				case 64:
					return "OREPHT_TS_PHNOW";
				case 65:
					return "OREPHT_TS_PHBAD";
				case 68:
					return "OREPHT_TS_PHRWB";
				case 66:
					return "OREPHT_TS_PHOK";
				case 69:
					return "OREPHT_TS_PHRWO";
				case 67:
					return "OREPHT_TS_PHGOD";
				case 70:
					return "OREPHT_TS_PHRWG";
				case 71:
					return "OREPHT_TS_FILM";
				case 25:
					return "OREPHT_TS_RIDE1";
				case 26:
					return "OREPHT_TS_RIDE2";
				case 27:
					return "OREPHT_TS_RIDE3";
				case 28:
					return "OREPHT_TS_RIDB1";
				case 29:
					return "OREPHT_TS_RIDB2";
				case 30:
					return "OREPHT_TS_RIDB3";
				case 31:
					return "OREPHT_TS_FAIL1";
				case 32:
					return "OREPHT_TS_FAIL2";
				case 33:
					return "OREPHT_TS_FAIL3";
				case 72:
					return "OREPHT_TS_ANNOY";
				case 73:
					return "OREPHT_TS_ANPOS";
				case 74:
					return "OREPHT_TS_AGGRO";
				case 75:
					return "OREPHT_TS_AGGRO";
				case 76:
					return "OREPHT_TS_AGGRO";
				case 77:
					return "OREPHT_TS_AGGHR";
				case 78:
					return "OREPHT_TS_AGGHR";
				case 79:
					return "OREPHT_TS_HOGTD";
				case 80:
					return "OREPHT_TS_HOGTD";
				case 81:
					return "OREPHT_TS_HOGTD";
				case 82:
					return "OREPHT_TS_HOGUT";
				default:
					break;
			}
			break;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 11:
			switch (iParam0)
			{
				case 3:
					return "OREPHT_FS_CALL1";
				case 4:
					return "OREPHT_FS_CAL1M";
				case 5:
					return "OREPHT_FS_CAL1A";
				case 6:
					return "OREPHT_FS_CAL1R";
				case 7:
					return "OREPHT_FS_CALL2";
				case 8:
					return "OREPHT_FS_CALL2";
				case 34:
					return "OREPHT_FS_ACCPT";
				case 35:
					return "OREPHT_FS_DECLN";
				case 12:
					return "OREPHT_FS_OFFR4";
				case 13:
					return "OREPHT_FS_OFFR4";
				case 14:
					return "OREPHT_FS_OFFR5";
				case 15:
					return "OREPHT_FS_OFFR5";
				case 36:
					return "OREPHT_FS_PHCAM";
				case 37:
					return "OREPHT_FS_PHCAM";
				case 38:
					return "OREPHT_FS_PHCAM";
				case 40:
					return "OREPHT_FS_PHFAR";
				case 41:
					return "OREPHT_FS_PHFAR";
				case 42:
					return "OREPHT_FS_PHFAR";
				case 44:
					return "OREPHT_FS_PHFRM";
				case 45:
					return "OREPHT_FS_PHFRM";
				case 46:
					return "OREPHT_FS_PHFRM";
				case 52:
					return "OREPHT_FS_PHCLS";
				case 53:
					return "OREPHT_FS_PHCLS";
				case 54:
					return "OREPHT_FS_PHCLS";
				case 17:
					return "OREPHT_FS_WAIT";
				case 18:
					return "OREPHT_FS_WAIT";
				case 19:
					return "OREPHT_FS_WAIT";
				case 59:
					return "OREPHT_FS_PHWAT";
				case 60:
					return "OREPHT_FS_PHWAT";
				case 61:
					return "OREPHT_FS_PHWAT";
				case 56:
					return "OREPHT_FS_PHRDY";
				case 57:
					return "OREPHT_FS_PHRDY";
				case 58:
					return "OREPHT_FS_PHRDY";
				case 62:
					return "OREPHT_FS_PHNOW";
				case 63:
					return "OREPHT_FS_PHNOW";
				case 64:
					return "OREPHT_FS_PHNOW";
				case 65:
					return "OREPHT_FS_PHBAD";
				case 68:
					return "OREPHT_FS_PHRWB";
				case 66:
					return "OREPHT_FS_PHOK";
				case 69:
					return "OREPHT_FS_PHRWO";
				case 67:
					return "OREPHT_FS_PHGOD";
				case 70:
					return "OREPHT_FS_PHRWG";
				case 71:
					return "OREPHT_FS_FILM";
				case 25:
					return "OREPHT_FS_RIDE1";
				case 26:
					return "OREPHT_FS_RIDE2";
				case 27:
					return "OREPHT_FS_RIDE3";
				case 28:
					return "OREPHT_FS_RIDB1";
				case 29:
					return "OREPHT_FS_RIDB2";
				case 30:
					return "OREPHT_FS_RIDB3";
				case 31:
					return "OREPHT_FS_FAIL1";
				case 32:
					return "OREPHT_FS_FAIL2";
				case 33:
					return "OREPHT_FS_FAIL3";
				case 72:
					return "OREPHT_FS_ANNOY";
				case 73:
					return "OREPHT_FS_ANPOS";
				case 74:
					return "OREPHT_FS_AGGRO";
				case 75:
					return "OREPHT_FS_AGGRO";
				case 76:
					return "OREPHT_FS_AGGRO";
				case 77:
					return "OREPHT_FS_AGGHR";
				case 78:
					return "OREPHT_FS_AGGHR";
				case 79:
					return "OREPHT_FS_HOGTD";
				case 80:
					return "OREPHT_FS_HOGTD";
				case 81:
					return "OREPHT_FS_HOGTD";
				case 82:
					return "OREPHT_FS_HOGUT";
				case 176:
					return "PLAYER_LOITERING";
				case 177:
					return "BLOCKED_GENERIC";
				case 178:
					return "INSULT_RESPONSE";
				case 179:
					return "GET_OUT";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_610(char* sParam0)
{
	if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam0) && AUDIO::IS_SCRIPTED_CONVERSATION_PLAYING(sParam0))
	{
		return true;
	}
	return false;
}

float func_611()
{
	switch (func_242())
	{
		case 3:
			return 1092616192 /* Float: 10f */;
		case 4:
			return 1092616192 /* Float: 10f */;
		case 5:
			return 1092616192 /* Float: 10f */;
		case 6:
			return 1092616192 /* Float: 10f */;
		case 7:
			return 1092616192 /* Float: 10f */;
		default:
			break;
	}
	return 1092616192 /* Float: 10f */;
}

void func_612()
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_24))
	{
		iVar0 = func_826(2);
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			Local_13.f_7.f_24 = iVar0;
		}
	}
}

bool func_613(int iParam0, int iParam1)
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

bool func_614(int iParam0)
{
	int iVar0;

	iVar0 = func_191(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return true;
	}
	if (func_761(0, func_513(0)) > 1120403456)
	{
		return true;
	}
	if (func_591(0, 1120403456 /* Float: 100f */, 0, 1) < 1)
	{
		return true;
	}
	return false;
}

bool func_615(int iParam0)
{
	return func_189(Local_947.f_19.f_252, iParam0);
}

bool func_616(int iParam0)
{
	char* sVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_947.f_19.f_246))
	{
		return false;
	}
	sVar0 = func_359(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return false;
	}
	return ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_947.f_19.f_246, sVar0);
}

int func_617()
{
	if (func_590(512))
	{
		return 66;
	}
	if (func_590(1024))
	{
		return 67;
	}
	return 65;
}

bool func_618(float fParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_585(0, iVar0, 1) < fParam0)
			{
				if (func_501(iParam1, iVar0))
				{
					return true;
				}
				else if (iParam2 != 0 && func_501(iParam2, iVar0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_619(float fParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_585(0, iVar0, 1) < fParam0)
			{
				if (func_481(iParam1, iVar0))
				{
					return true;
				}
				else if (iParam2 != 0 && func_481(iParam2, iVar0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_620(int iParam0)
{
	func_596(&(Local_13.f_7.f_13));
	if (Local_13.f_7.f_1 != iParam0)
	{
		Local_13.f_7.f_1 = iParam0;
	}
}

bool func_621()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Local_13.f_7.f_22 != 255)
	{
		iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
		{
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_13.f_7.f_22);
			if (func_534(iVar2, 1) && func_535(iVar2))
			{
				return true;
			}
			else
			{
				Local_13.f_7.f_22 = 255;
			}
		}
		else
		{
			Local_13.f_7.f_22 = 255;
		}
	}
	if (Local_13.f_7.f_22 == 255)
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)))
			{
				if (func_481(2048, iVar3))
				{
					if (func_535(iVar3))
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
						if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
						{
							iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
							if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
							{
								Local_13.f_7.f_22 = iVar0;
								return true;
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	Local_13.f_7.f_22 = 255;
	return false;
}

bool func_622(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!func_534(iParam2, 0))
	{
		if (!func_230(&iParam2))
		{
			return false;
		}
	}
	fVar0 = Local_82[iParam2 /*27*/].f_4.f_2[iParam0];
	if (fVar0 <= 0f)
	{
		if (bParam3)
		{
			iVar1 = func_191(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam2));
				if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
				{
					fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), func_837(iVar2));
					if (fVar0 < 0f)
					{
						return false;
					}
					Local_82[iParam2 /*27*/].f_4.f_2[iParam0] = fVar0;
				}
			}
		}
		return false;
	}
	return fVar0 <= fParam1;
}

int func_623()
{
	if (func_590(512))
	{
		return 69;
	}
	if (func_590(1024))
	{
		return 70;
	}
	return 68;
}

char* func_624(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "move";
		case 1:
			return "FRONT_BKN";
		case 2:
			return "FRONT_BKN";
		case 3:
			return "FRONT_CO";
		case 4:
			return "FRONT_CO";
		case 5:
			return "CALLOVER_N";
		case 6:
			return "CALLOVER_N";
		case 7:
			return "give_recieve_letter_plyr";
		case 8:
			return "give_recieve_letter_mp";
		case 9:
			return "intro";
		case 10:
			return "loop";
		case 11:
			return "outro";
		default:
			break;
	}
	return "";
}

void func_625(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_626(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_627(var uParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, uParam0, 15))
	{
		return false;
	}
	if (uParam0->f_4.f_1 != Local_947.f_1)
	{
		return false;
	}
	if (uParam0->f_4 != Local_947)
	{
		return false;
	}
	if (uParam0->f_4.f_2 != Local_947.f_2)
	{
		return false;
	}
	if (uParam0->f_4.f_3 != Local_947.f_3)
	{
		return false;
	}
	return true;
}

void func_628(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;

	iVar3 = 255;
	bVar7 = false;
	switch (uParam0->f_9)
	{
		case 377515857:
			iVar0 = uParam0->f_11;
			iVar1 = func_191(iVar0);
			if (uParam0->f_12 == -1)
			{
				iVar4 = iVar1;
			}
			else
			{
				iVar6 = uParam0->f_12;
				switch (iVar6)
				{
					case 0:
						iVar3 = Local_13.f_7.f_20;
						break;
					case 1:
						iVar3 = Local_13.f_7.f_21;
						break;
					case 5:
						iVar4 = iVar1;
						break;
				}
				if (iVar4 == 0)
				{
					if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
					{
						iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
						{
							iVar4 = PLAYER::GET_PLAYER_PED(iVar3);
						}
						else
						{
							iVar4 = iVar1;
						}
					}
					else
					{
						iVar4 = iVar1;
					}
				}
			}
			iVar5 = uParam0->f_13;
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
			{
				if (uParam0->f_12 == -1)
				{
				}
				if (uParam0->f_14 != -1)
				{
					bVar7 = true;
				}
				if (func_838(iVar1, iVar4, iVar5, 0, bVar7))
				{
					if (func_839(iVar5))
					{
						func_840(4.811317E+29f, iVar1, 1);
					}
					Local_947.f_19.f_152 = iVar0;
					Local_947.f_19.f_153 = iVar5;
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						func_588(32);
					}
				}
			}
			break;
	}
}

int func_629(int iParam0)
{
	return Local_947.f_274.f_7[iParam0 /*11*/].f_3;
}

bool func_630(int iParam0)
{
	return func_564(0, iParam0);
}

bool func_631(int iParam0)
{
	return func_565(0, iParam0);
}

void func_632(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = func_629(iParam0);
	bVar3 = func_534(iParam1, 1);
	if (!MISC::IS_BIT_SET(Local_947.f_274.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_38[iParam0]))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_13.f_38[iParam0]);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return;
			}
			Local_947.f_274.f_7[iParam0 /*11*/] = iVar1;
			if (bVar3)
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar1) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					Local_82[iParam1 /*27*/].f_4.f_2[iParam0] = -1f;
				}
				else
				{
					Local_82[iParam1 /*27*/].f_4.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
				}
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (func_557(iParam0))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_38[iParam0]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_38[iParam0]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_38[iParam0]);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_841(iVar1, 1f, 0);
					sVar0 = func_842(iParam0);
					if (!MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sVar0))
					{
						func_843(iVar1, sVar0, 1);
					}
				}
				if (func_818(iParam0))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
				}
				if (PED::_IS_THIS_MODEL_A_HORSE(iVar2))
				{
					if (func_819(iParam0))
					{
						if (func_818(iParam0))
						{
						}
					}
					else
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
					}
				}
				MISC::SET_BIT(&(Local_947.f_274.f_5), iParam0);
				if (bParam2)
				{
					func_844(iParam0);
				}
			}
		}
	}
}

void func_633(var uParam0, int iParam1, int iParam2)
{
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		default:
			break;
	}
}

float func_634()
{
	int iVar0;

	iVar0 = func_242();
	switch (iVar0)
	{
		case 3:
			return -6.244152E-06f;
		case 4:
			return -6.244152E-06f;
		case 5:
			return -6.244152E-06f;
		case 6:
			return -6.244152E-06f;
		case 7:
			return -6.244152E-06f;
		default:
			break;
	}
	return 3.70038E-33f;
}

bool func_635(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &((uParam0[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&((uParam0[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

float func_636()
{
	int iVar0;

	iVar0 = func_242();
	switch (iVar0)
	{
		case 3:
			return -6.244152E-06f;
		case 4:
			return -6.244152E-06f;
		case 5:
			return -6.244152E-06f;
		case 6:
			return -6.244152E-06f;
		case 7:
			return -6.244152E-06f;
		default:
			break;
	}
	return 3.70038E-33f;
}

void func_637(int iParam0, int iParam1)
{
	func_251(&(Local_947.f_578[iParam0 /*39*/].f_5), iParam1);
}

void func_638(var uParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		default:
			break;
	}
}

int func_639(int iParam0)
{
	return iParam0;
}

bool func_640(int iParam0, var uParam1)
{
	uParam1->f_1 = 0;
	*uParam1 = func_191(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		uParam1->f_2 = func_585(iParam0, 255, 1);
		if (uParam1->f_2 < 0f)
		{
			uParam1->f_2 = 0f;
		}
		return true;
	}
	return false;
}

void func_641(var uParam0, int iParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, true);
	EVENT::_SET_EVENT_TRACKER_FOR_PED(iParam1, "SpAggroDefault", 0);
	DECORATOR::DECOR_SET_BOOL(iParam1, "UsesTracker", true);
}

void func_642(int iParam0)
{
	int iVar0;

	if (!func_230(&iVar0))
	{
		return;
	}
	func_668(&(Local_82[iVar0 /*27*/].f_10), 0, iParam0);
}

struct<2> func_643(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_845(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_846(iParam1, iVar4) };
	if (!STATS::STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_644()
{
	Local_947.f_274.f_6 = 0;
	Local_947.f_274.f_2 = 0;
	Local_947.f_274.f_1 = -1;
}

void func_645()
{
	int iVar0;

	func_234(&(Local_947.f_406.f_78), 2, 0);
	func_234(&(Local_947.f_406.f_78), 1, 0);
	func_234(&(Local_947.f_406.f_78), 4, 0);
	func_234(&(Local_947.f_406.f_78), 5, 0);
	func_234(&(Local_947.f_406.f_78), 8, -1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Local_947.f_406.f_66[iVar0]));
		SCRIPTS::_SET_ALL_PLAYER_BITS(&(Local_947.f_406.f_74[iVar0]));
		SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Local_947.f_406.f_70[iVar0]));
		func_847(iVar0);
		iVar0++;
	}
}

void func_646()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar1 = 0;
	iVar2 = func_848(0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar2))
	{
		func_849();
	}
	else
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
	}
	bVar3 = false;
	Local_947.f_578.f_118 = 0;
	Local_947.f_578.f_119 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!bVar3 && ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (func_850(func_182(iVar0), iVar1))
			{
				bVar3 = true;
			}
		}
		iVar0++;
	}
	if (!bVar3)
	{
		func_849();
	}
}

void func_647(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_947.f_274.f_2 = (Local_947.f_274.f_2 || Local_82[iParam0 /*27*/].f_4);
		Local_947.f_274.f_1 = (Local_947.f_274.f_1 && Local_82[iParam0 /*27*/].f_4);
		Local_947.f_274.f_6 = (Local_947.f_274.f_6 || Local_82[iParam0 /*27*/].f_4.f_1);
	}
}

void func_648(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		func_851(&(Local_947.f_406.f_78), &(Local_82[iParam0 /*27*/].f_10), 2);
		func_851(&(Local_947.f_406.f_78), &(Local_82[iParam0 /*27*/].f_10), 1);
		func_851(&(Local_947.f_406.f_78), &(Local_82[iParam0 /*27*/].f_10), 4);
		func_851(&(Local_947.f_406.f_78), &(Local_82[iParam0 /*27*/].f_10), 5);
		func_851(&(Local_947.f_406.f_78), &(Local_82[iParam0 /*27*/].f_10), 6);
		func_851(&(Local_947.f_406.f_78), &(Local_82[iParam0 /*27*/].f_10), 7);
		func_851(&(Local_947.f_406.f_78), &(Local_82[iParam0 /*27*/].f_10), 0);
		func_851(&(Local_947.f_406.f_78), &(Local_82[iParam0 /*27*/].f_10), 3);
		func_852(&(Local_947.f_406.f_78), &(Local_82[iParam0 /*27*/].f_10), 8);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			SCRIPTS::_0xFFDDF802279BE128(&(Local_82[iParam0 /*27*/].f_10.f_5[iVar0]), &(Local_947.f_406.f_66[iVar0]), &(Local_947.f_406.f_66[iVar0]));
			SCRIPTS::_0xFFDDF802279BE128(&(Local_82[iParam0 /*27*/].f_10.f_5[iVar0]), &(Local_947.f_406.f_66[iVar0]), &(Local_947.f_406.f_70[iVar0]));
			SCRIPTS::_0xE4ABE20DCE7C7CFE(&(Local_82[iParam0 /*27*/].f_10.f_5[iVar0]), &(Local_947.f_406.f_66[iVar0]), &(Local_947.f_406.f_74[iVar0]));
			func_853(func_639(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_649(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 && iParam2 != iParam0)
	{
		Local_82[iParam2 /*27*/].f_23 = (Local_82[iParam2 /*27*/].f_23 || Local_82[iParam0 /*27*/].f_23);
	}
}

void func_650(int iParam0, bool bParam1, int iParam2)
{
	if (!bParam1)
	{
		return;
	}
	Local_947.f_578.f_118 = (Local_947.f_578.f_118 || Local_82[iParam0 /*27*/].f_24.f_2);
	Local_947.f_578.f_119 = (Local_947.f_578.f_119 && Local_82[iParam0 /*27*/].f_24.f_2);
	func_854(iParam0);
}

int func_651(int iParam0)
{
	return iParam0;
}

int func_652(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	Local_82[iParam3 /*27*/].f_4.f_2[iParam2] = fVar0;
	if (fVar0 > Local_947.f_274.f_7[iParam2 /*11*/].f_9)
	{
		return 0;
	}
	return 1;
}

void func_653(var uParam0)
{
	func_855(uParam0, 0f);
}

bool func_654(var uParam0)
{
	return func_856(*uParam0, 1);
}

bool func_655(var uParam0, float fParam1)
{
	if (!func_654(uParam0))
	{
		return false;
	}
	if (func_857(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_656(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_657(int iParam0)
{
	return true;
}

void func_658(int iParam0, int iParam1)
{
	func_350(&(Local_947.f_274.f_7[iParam0 /*11*/].f_2), iParam1);
}

bool func_659(int iParam0, int iParam1)
{
	if (!func_534(iParam1, 0))
	{
		if (!func_230(&iParam1))
		{
			return false;
		}
	}
	return func_189(Local_82[iParam1 /*27*/].f_4, iParam0);
}

void func_660(int iParam0)
{
	int iVar0;

	if (!func_230(&iVar0))
	{
		return;
	}
	func_251(&(Local_82[iVar0 /*27*/].f_4), iParam0);
}

void func_661(int iParam0)
{
	int iVar0;

	if (!func_230(&iVar0))
	{
		return;
	}
	func_350(&(Local_82[iVar0 /*27*/].f_4), iParam0);
}

void func_662()
{
	int iVar0;
	struct<13> Var1;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	Var1.f_6 = 1f;
	Var1.f_7 = 1f;
	Var1.f_8 = 1f;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	if (!func_230(&iVar15))
	{
		return;
	}
	iVar16 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar16))
	{
		return;
	}
	iVar17 = PLAYER::GET_PLAYER_PED(iVar16);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar14 = func_639(iVar0);
		if (!func_663(iVar14))
		{
		}
		else if (!func_664(iVar14, &Var1))
		{
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(Var1) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Var1, true, false), 4f, true))
			{
				MISC::SET_BIT(&(Local_947.f_406.f_65), iVar14);
			}
			if (func_680(iVar14, iVar15))
			{
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Var1, iVar17, false, false))
			{
				func_858(iVar14);
				func_859(iVar14);
			}
		}
		iVar0++;
	}
}

bool func_663(int iParam0)
{
	return !func_666(&(Local_947.f_406.f_78), 5, iParam0);
}

bool func_664(int iParam0, var uParam1)
{
	if (!MISC::IS_BIT_SET(Local_947.f_406.f_122, iParam0))
	{
		return false;
	}
	*uParam1 = Local_947.f_406.f_82[iParam0 /*13*/];
	uParam1->f_1 = Local_947.f_406.f_82[iParam0 /*13*/].f_1;
	uParam1->f_2 = Local_947.f_406.f_82[iParam0 /*13*/].f_2;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_665(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!func_860(iParam1))
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
		if (uParam0->f_2 <= 1103626240 && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) >= 4f)
		{
			if (PED::IS_PED_IN_COVER(iVar0, false, false) || PED::IS_PED_GOING_INTO_COVER(iVar0))
			{
			}
			else
			{
				return true;
			}
		}
	}
	if (func_861(*uParam0, &(Local_947.f_406.f_32), &uVar1, uParam0->f_2))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0))
	{
		return true;
	}
	return false;
}

bool func_666(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (iParam2 < 0 || iParam2 >= 10)
	{
		return false;
	}
	if (!func_548(iParam1, &Var0))
	{
		return false;
	}
	if (Var0 == Var0.f_1)
	{
		return MISC::IS_BIT_SET((*uParam0)[Var0], (Var0.f_2 + iParam2));
	}
	iVar4 = (32 - Var0.f_2);
	if (iParam2 < iVar4)
	{
		return MISC::IS_BIT_SET((*uParam0)[Var0], (Var0.f_2 + iParam2));
	}
	return MISC::IS_BIT_SET((*uParam0)[Var0.f_1], (Var0.f_3 - (iParam2 - iVar4)));
}

int func_667(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_548(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		MISC::CLEAR_BIT(uParam0[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	iVar4 = (32 - Var0.f_2);
	if (iParam2 < iVar4)
	{
		MISC::CLEAR_BIT(uParam0[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	MISC::CLEAR_BIT(uParam0[Var0.f_1], (Var0.f_3 - (iParam2 - iVar4)));
	return 1;
}

int func_668(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_548(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		MISC::SET_BIT(uParam0[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	iVar4 = (32 - Var0.f_2);
	if (iParam2 < iVar4)
	{
		MISC::SET_BIT(uParam0[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	MISC::SET_BIT(uParam0[Var0.f_1], (Var0.f_3 - (iParam2 - iVar4)));
	return 1;
}

void func_669(int iParam0)
{
}

bool func_670(int iParam0)
{
	return func_666(&(Local_947.f_406.f_78), 4, iParam0);
}

bool func_671(int iParam0)
{
	int iVar0;

	if (!func_230(&iVar0))
	{
		return false;
	}
	return func_666(&(Local_82[iVar0 /*27*/].f_10), 4, iParam0);
}

bool func_672(int iParam0)
{
	return SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(Local_947.f_406.f_70[iParam0]));
}

void func_673(int iParam0)
{
	int iVar0;

	if (!func_230(&iVar0))
	{
		return;
	}
	func_667(&(Local_82[iVar0 /*27*/].f_10), 4, iParam0);
}

bool func_674(int iParam0)
{
	int iVar0;

	if (!func_230(&iVar0))
	{
		return false;
	}
	return SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(Local_82[iVar0 /*27*/].f_10.f_5[iParam0]));
}

void func_675(int iParam0)
{
	int iVar0;

	if (!func_230(&iVar0))
	{
		return;
	}
	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Local_82[iVar0 /*27*/].f_10.f_5[iParam0]));
}

bool func_676(int iParam0)
{
	return func_666(&(Local_947.f_406.f_78), 6, iParam0);
}

bool func_677(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!EVENT::_0x83D43F0FD5276E4D(iParam0, 0))
	{
		return false;
	}
	return true;
}

bool func_678(int iParam0, int iParam1)
{
	if (!func_534(iParam1, 0))
	{
		if (!func_230(&iParam1))
		{
			return false;
		}
	}
	return func_666(&(Local_82[iParam1 /*27*/].f_10), 1, iParam0);
}

bool func_679(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!func_535(255))
	{
		return false;
	}
	if (func_481(1.504633E-36f, 255))
	{
		return true;
	}
	if (func_481(3.85186E-34f, 255))
	{
		func_482(1048576);
		return true;
	}
	if (func_501(3.85186E-34f, 255))
	{
		if (func_603(Local_947.f_19.f_159, 500))
		{
			func_509(3.85186E-34f);
		}
	}
	iVar0 = func_191(iParam0);
	switch (func_862(iParam0))
	{
		case 0:
			iVar1 = ENTITY::_0xEF2D9ED7CE684F08(iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (iVar1 == PLAYER::PLAYER_PED_ID())
				{
					func_482(1.504633E-36f);
				}
			}
			if (!func_606(8192))
			{
				if (PED::_GET_LASSOER_OF_PED(iVar0))
				{
					vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
					if (Global_1940186.f_40 == 1284.666f)
					{
						if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar2, 1284.666f, 2f, true))
						{
							func_482(1.504633E-36f);
						}
					}
				}
			}
			break;
		case 1:
			if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && TASK::_IS_PED_LEADING_HORSE(PLAYER::PLAYER_PED_ID())) && TASK::_GET_LED_HORSE_FROM_PED(PLAYER::PLAYER_PED_ID()) == iVar0)
			{
				func_482(3.85186E-34f);
			}
			break;
	}
	return false;
}

bool func_680(int iParam0, int iParam1)
{
	if (!func_534(iParam1, 0))
	{
		if (!func_230(&iParam1))
		{
			return false;
		}
	}
	if (!func_863(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		return false;
	}
	return func_666(&(Local_82[iParam1 /*27*/].f_10), 3, iParam0);
}

bool func_681(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_6)
	{
		func_864(uParam2, 1, iVar0);
	}
	if (!Global_1940186.f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_13 = fParam5;
		}
		else
		{
			uParam2->f_13 = BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_2 & 128 != 0)
		{
			if (func_865(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_866(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940186.f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_867(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_866(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (func_868(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_866(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_869(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_866(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940186.f_20 && func_870(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_866(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940186.f_19)
		{
			if (func_871(uParam2, 1f))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_872(Global_33, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_866(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_873(Global_33, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_866(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940186.f_23) < 300)
			{
				if (func_874(Global_33, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_866(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (func_874(Global_33, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_866(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940186.f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_875(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_866(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940186.f_19 || uParam2->f_13 < 1101004800)
			{
				if (func_876(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_866(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940186.f_24 || Global_1940186.f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_877(uParam2, 4000))
				{
					if ((func_878(iParam0, Global_1940186.f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_879(uParam2, iParam0)) && func_880(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_866(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_878(iParam0, Global_1940186.f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_879(uParam2, iParam0)) && func_880(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_866(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (Global_1940186.f_34 == 0)
			{
				if (Global_1940186.f_35 != 0)
				{
					if (func_881(iParam0, Global_1940186.f_35))
					{
						func_882();
						*iParam3 = 2;
						func_866(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 1092616192)
			{
				if (func_883(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_884() - uParam2->f_10) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_882();
						*iParam3 = 2;
						func_866(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1940186.f_36 != 0)
			{
				if (func_885())
				{
					if (func_881(iParam0, Global_1940186.f_36))
					{
						func_882();
						*iParam3 = 2;
						func_866(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_886(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_866(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (func_887(uParam2, iParam0))
		{
			*iParam3 = 1048576;
			func_866(iParam0, uParam2, *iParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_888(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_866(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_889(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_866(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_890(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_866(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 1094713344)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_891(uParam2, 4000))
				{
					if (func_892(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_866(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_893(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_5 = 0;
					func_866(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_894(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_866(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_682(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_895(iParam0, vVar0, fParam2);
}

int func_683(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar4;

	if (!func_896(iParam0, iParam1, iParam2, 0))
	{
		return 0;
	}
	func_897(&iVar4, iParam1->f_12);
	func_899(Local_947.f_274.f_7[iParam0 /*11*/], &uVar0, iParam1->f_3, func_898(iParam1), iParam1->f_9, iParam1->f_10, iParam1->f_11, 0, 0);
	return func_900(&iVar4, &uVar0);
}

bool func_684(int iParam0)
{
	int iVar0;

	if (!func_230(&iVar0))
	{
		return false;
	}
	return func_666(&(Local_82[iVar0 /*27*/].f_10), 0, iParam0);
}

bool func_685(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(Local_947.f_406.f_64, iParam0))
	{
		return false;
	}
	if (func_189(Local_947.f_406.f_2, 256))
	{
		return false;
	}
	if (iParam1->f_2 < 0f || iParam1->f_2 > IntToFloat(func_901(&(Local_947.f_406))))
	{
		return false;
	}
	return true;
}

bool func_686(int iParam0, int iParam1, int iParam2)
{
	if (!func_685(iParam0, iParam1))
	{
		return false;
	}
	if (Local_82[iParam2 /*27*/].f_10.f_4 != 0 && NETWORK::GET_TIME_DIFFERENCE(Local_82[iParam2 /*27*/].f_10.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
	{
		return true;
	}
	return false;
}

bool func_687(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!func_192())
	{
		func_722();
	}
	if (func_481(1.504633E-36f, 255) || func_481(3.85186E-34f, 255))
	{
		if (!func_579())
		{
			func_902(0);
		}
		return true;
	}
	switch (func_862(iParam0))
	{
		case 0:
			switch (func_242())
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					if (func_508(64))
					{
						if ((!func_508(128) || Local_947.f_19.f_159 == 0) || NETWORK::GET_TIME_DIFFERENCE(Local_947.f_19.f_159, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
						{
							if (func_508(128))
							{
								if (Local_947.f_19.f_159 == 0)
								{
									Local_947.f_19.f_159 = NETWORK::GET_NETWORK_TIME_ACCURATE();
								}
							}
							if (!func_903(iParam1, 0, 0, 0, 0))
							{
								return false;
							}
						}
					}
					else if ((func_508(16) || func_508(32)) || func_501(2048, 255))
					{
						if (Local_947.f_19.f_159 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_947.f_19.f_159, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
						{
							if (Local_947.f_19.f_159 == 0)
							{
								Local_947.f_19.f_159 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
							if (!func_903(iParam1, 0, 1, 0, 0) || iParam1 == 256)
							{
								return false;
							}
						}
					}
					break;
				case 10:
					if (iParam1 == 8)
					{
						if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
						{
							func_581(3.85186E-34f);
						}
						else
						{
							func_509(3.85186E-34f);
						}
					}
					if (func_606(4096))
					{
						Local_947.f_19.f_159 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					}
					if ((!func_606(4096) || Local_947.f_19.f_159 == 0) || NETWORK::GET_TIME_DIFFERENCE(Local_947.f_19.f_159, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
					{
						if (!func_903(iParam1, 1, 0, 0, 0) && iParam1 != 1024)
						{
							return false;
						}
					}
					break;
				case 11:
					if (func_606(8192))
					{
						Local_947.f_19.f_159 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					}
					if ((!func_606(8192) || Local_947.f_19.f_159 == 0) || NETWORK::GET_TIME_DIFFERENCE(Local_947.f_19.f_159, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
					{
						if (func_606(8192))
						{
							switch (iParam1)
							{
								case 2:
								case 4:
								case 8:
									if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, false, 0, false))
									{
										if ((iVar0 == 3.594275E+35f || iVar0 == -2.676379E+14f) || iVar0 == 1284.666f)
										{
											return false;
										}
									}
									break;
							}
						}
						if (!func_903(iParam1, 1, 1, 0, 0) && iParam1 != 1024)
						{
							return false;
						}
					}
					break;
				case 2:
					if (func_501(2, 255))
					{
						if (iParam1 == 1024)
						{
							return false;
						}
					}
					break;
			}
			if (iParam1 == 1024)
			{
				func_502(4454179f, 0, 0);
				func_482(1048576);
			}
			break;
		case 2:
			if (func_501(64, 255))
			{
				return false;
			}
			break;
		case 1:
			if (!func_903(iParam1, 0, 0, 0, 0))
			{
				return false;
			}
			func_482(1048576);
			break;
	}
	if (!func_579())
	{
		func_902(0);
	}
	return true;
}

void func_688(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_230(&iVar0))
	{
		return;
	}
	func_668(&(Local_82[iVar0 /*27*/].f_10), 1, iParam0);
	if (bParam1)
	{
		Local_82[iVar0 /*27*/].f_10.f_9[iParam0] = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

bool func_689(int iParam0, int iParam1)
{
	if (!func_534(iParam1, 0))
	{
		if (!func_230(&iParam1))
		{
			return false;
		}
	}
	return func_666(&(Local_82[iParam1 /*27*/].f_10), 2, iParam0);
}

bool func_690(int iParam0)
{
	return true;
}

void func_691(int iParam0)
{
}

void func_692(int iParam0)
{
	int iVar0;

	if (!func_230(&iVar0))
	{
		return;
	}
	func_668(&(Local_82[iVar0 /*27*/].f_10), 2, iParam0);
}

bool func_693(int iParam0)
{
	var uVar0;

	SCRIPTS::_SET_ALL_PLAYER_BITS(&uVar0);
	SCRIPTS::_0x64F765D9A1F8F02C(&uVar0, &(Local_947.f_406.f_74[iParam0]), &uVar0);
	return !SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uVar0);
}

bool func_694(int iParam0, var uParam1, int iParam2, var uParam3)
{
	*uParam1 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(*uParam1))
	{
		return false;
	}
	*iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX(*uParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(*iParam2))
	{
		return false;
	}
	*uParam3 = PLAYER::GET_PLAYER_PED(*iParam2);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam3))
	{
		return false;
	}
	return true;
}

bool func_695(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Local_947.f_406.f_66[iParam0]), iParam1);
}

bool func_696(int iParam0, var uParam1, int iParam2, var uParam3)
{
	return true;
}

void func_697(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return;
	}
	if (!func_230(&iVar0))
	{
		return;
	}
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Local_82[iVar0 /*27*/].f_10.f_5[iParam0]), iParam1);
}

float func_698()
{
	int iVar0;
	float fVar1;

	if (Local_947.f_537.f_3 == 0)
	{
		Local_947.f_537.f_3 = MISC::GET_GAME_TIMER();
		return 1023410176;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	fVar1 = (BUILTIN::TO_FLOAT((iVar0 - Local_947.f_537.f_3)) * 981668463);
	Local_947.f_537.f_3 = iVar0;
	return fVar1;
}

bool func_699(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return true;
}

bool func_700(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_904(vVar0, vParam0) > func_904(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_701(var uParam0, float fParam1, float fParam2, int iParam3, float fParam4, bool bParam5, float fParam6, bool bParam7)
{
	float fVar0;
	bool bVar1;

	fParam2 = fParam2;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_6) || (bParam7 && ENTITY::IS_ENTITY_DEAD(uParam0->f_6)))
	{
		return 0;
	}
	if (bParam5)
	{
		fVar0 = (fParam6 * fParam6);
	}
	else
	{
		fVar0 = BUILTIN::VDIST2(Global_34, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	}
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_IS_PED_VISIBILITY_TRACKED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_905(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = ENTITY::_IS_TRACKED_ENTITY_VISIBLE(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
					{
						fVar0 = BUILTIN::VDIST2(Global_34, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (func_906(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_907() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_702(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*9*/])->f_6) && (uParam0[iVar0 /*9*/])->f_7 > 0f) && ENTITY::IS_ENTITY_ON_SCREEN((uParam0[iVar0 /*9*/])->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + (uParam0[iVar0 /*9*/])->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return false;
	}
	if (fVar2 < fParam2)
	{
		return false;
	}
	func_181(uParam0);
	return true;
}

void func_703(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	iVar0 = func_487(iParam2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_908(iParam2))
		{
			func_488(iParam2, 0);
		}
		return;
	}
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	if (uParam0->f_2 != uParam1->f_1)
	{
		uParam1->f_1 = uParam0->f_2;
	}
	if (uParam1->f_1 == 0 && *uParam0 != *uParam1)
	{
		func_232(iParam2, *uParam0);
		func_909(*uParam1, *uParam0);
		*uParam1 = *uParam0;
	}
	func_910(iParam2);
	switch (uParam1->f_1)
	{
		case 0:
			if (!func_486(iParam2, 1))
			{
				return;
			}
			if (func_804(iParam2))
			{
				if (!func_908(iParam2))
				{
					func_911(iParam2);
				}
				if (func_486(iParam2, 16))
				{
					PAD::DISABLE_CONTROL_ACTION(0, -2.834345E-08f, false);
					PAD::DISABLE_CONTROL_ACTION(0, 3.360757E-18f, false);
				}
				bVar3 = MISC::IS_BIT_SET(Local_82[iVar1 /*27*/].f_24, iParam2);
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (func_912(iParam2, iVar2, 16))
					{
						func_913(iParam2, iVar2, 1);
					}
					bVar4 = (func_912(iParam2, iVar2, 1) || bVar3);
					bVar5 = func_912(iParam2, iVar2, 8);
					bVar6 = (bVar4 || bVar5);
					if (!bVar6)
					{
						if (func_912(iParam2, iVar2, 4))
						{
							if (func_914() < Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/].f_7)
							{
								bVar6 = true;
							}
						}
					}
					if (bVar5)
					{
						func_806(iParam2, iVar2, 8);
					}
					if (!func_786(Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/]))
					{
					}
					else if (func_915(Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/], 0))
					{
						if (bVar6)
						{
							func_807(Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/], 0, 1, 1);
						}
						else
						{
							if (!func_230(&iVar1))
							{
							}
							else
							{
								if (func_916(Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/], 1))
								{
									if (!func_917(iParam2, iVar2, func_231(iParam2)))
									{
										Jump @583; //curOff = 513
									}
									else
									{
										MISC::SET_BIT(&(Local_82[iVar1 /*27*/].f_24), iParam2);
										func_122(&(Local_82[iVar1 /*27*/].f_24.f_1), iParam2, iVar2);
									}
								}
								Jump @583; //curOff = 551
								if (!bVar6)
								{
									func_807(Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/], 1, 1, 1);
								}
							}
							iVar2++;
							Jump @611; //curOff = 592
							if (func_908(iParam2))
							{
								func_488(iParam2, 0);
							}
							Jump @924; //curOff = 611
							iVar2 = 0;
							while (iVar2 < 4)
							{
								if (!func_786(Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/]))
								{
								}
								else if (func_915(Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/], 0))
								{
									func_807(Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/], 0, 1, 1);
								}
								iVar2++;
							}
							if (!MISC::IS_BIT_SET(Local_82[iVar1 /*27*/].f_24.f_2, iParam2))
							{
								func_918(iParam2, func_824(Local_13.f_58.f_10, iParam2));
								MISC::SET_BIT(&(Local_82[iVar1 /*27*/].f_24.f_2), iParam2);
							}
							Jump @924; //curOff = 760
							iVar2 = 0;
							while (iVar2 < 4)
							{
								if (!func_786(Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/]))
								{
								}
								else if (func_915(Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/], 0))
								{
									func_807(Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/], 0, 1, 1);
								}
								iVar2++;
							}
							if (MISC::IS_BIT_SET(Local_82[iVar1 /*27*/].f_24.f_2, iParam2))
							{
								MISC::CLEAR_BIT(&(Local_82[iVar1 /*27*/].f_24.f_2), iParam2);
								MISC::CLEAR_BIT(&(Local_82[iVar1 /*27*/].f_24), iParam2);
								func_122(&(Local_82[iVar1 /*27*/].f_24.f_1), iParam2, 3);
							}
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_704()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

bool func_705(int iParam0)
{
	var uVar0;
	int iVar1;

	if (func_919(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

char* func_706()
{
	int iVar0;
	int iVar1;

	iVar0 = func_242();
	iVar1 = func_246();
	switch (iVar1)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					return "NB_PHOTOGRAPHY_H_CAMERA_CLIFF";
				case 3:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
				case 4:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
				case 5:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
				case 6:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
				case 7:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
				default:
					break;
			}
			return "NB_PHOTOGRAPHY_H_CAMERA_CLIFF";
		case 1:
			switch (iVar0)
			{
				case 1:
					return "NB_PHOTOGRAPHY_H_CAMERA_HORSE";
				case 2:
					return "NB_PHOTOGRAPHY_H_CAMERA_HORSE";
				case 8:
					return "NB_PHOTOGRAPHY_H_CAMERA_FISH";
				case 10:
					return "NB_PHOTOGRAPHY_H_CAMERA_GANG";
				case 9:
					return "NB_PHOTOGRAPHY_H_CAMERA_GANG";
				case 11:
					return "NB_PHOTOGRAPHY_H_CAMERA_HOGTIED";
				default:
					break;
			}
			return "NB_PHOTOGRAPHY_H_CAMERA_HORSE";
		case 2:
			switch (iVar0)
			{
				case 3:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
				case 4:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
				case 5:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
				case 6:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
				case 7:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
				case 1:
					return "NB_PHOTOGRAPHY_H_CAMERA_HORSE_DS";
				case 2:
					return "NB_PHOTOGRAPHY_H_CAMERA_HORSE_DS";
				default:
					break;
			}
			return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
	}
	switch (iVar0)
	{
		case 0:
			return "NB_PHOTOGRAPHY_H_CAMERA_CLIFF";
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
		case 1:
			return "NB_PHOTOGRAPHY_H_CAMERA_HORSE";
		case 2:
			return "NB_PHOTOGRAPHY_H_CAMERA_HORSE";
		case 8:
			return "NB_PHOTOGRAPHY_H_CAMERA_FISH";
		case 10:
			return "NB_PHOTOGRAPHY_H_CAMERA_GANG";
		case 9:
			return "NB_PHOTOGRAPHY_H_CAMERA_GANG";
		case 11:
			return "NB_PHOTOGRAPHY_H_CAMERA_HOGTIED";
	}
	return "NB_PHOTOGRAPHY_H_CAMERA_CLIFF";
}

int func_707(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

char* func_708()
{
	int iVar0;

	iVar0 = func_246();
	switch (iVar0)
	{
		case 0:
			return "NB_PHOTOGRAPHY_H_REWARD_TS";
		case 1:
			return "NB_PHOTOGRAPHY_H_REWARD_FS";
		case 2:
			if (func_578())
			{
				return "NB_PHOTOGRAPHY_H_REWARD_ANIMAL_DS";
			}
			else
			{
				return "NB_PHOTOGRAPHY_H_REWARD_HORSE_DS";
			}
			break;
	}
	return "NB_PHOTOGRAPHY_H_REWARD_TS";
}

char* func_709(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_242();
	iVar1 = func_246();
	iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID());
	switch (iVar1)
	{
		case 0:
			switch (iParam0)
			{
				case 1048576:
					return "NB_PHOTOGRAPHY_H_CAMERA";
				case 2097152:
					return "NB_PHOTOGRAPHY_H_PHOTO";
				case 536870912:
					return "NB_PHOTOGRAPHY_H_TOO_CLOSE";
				case 1073741824:
					return "NB_PHOTOGRAPHY_H_TOO_FAR";
				case 4194304:
					if (func_578())
					{
						return "NB_PHOTOGRAPHY_H_FRAME_ANIMAL_TS";
					}
					else if (iVar0 == 0)
					{
						return "NB_PHOTOGRAPHY_H_FRAME_CLIFF_TS";
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 1048576:
					return "NB_PHOTOGRAPHY_H_CAMERA";
				case 2097152:
					return "NB_PHOTOGRAPHY_H_PHOTO";
				case 8388608:
					return "NB_PHOTOGRAPHY_H_FRAME_GANG_FS";
				case 16777216:
					return "NB_PHOTOGRAPHY_H_HORSE_FS";
				case 33554432:
					return "NB_PHOTOGRAPHY_H_DISMOUNT_FS";
				case 268435456:
					return "NB_PHOTOGRAPHY_H_HOGTIE";
				case 536870912:
					return "NB_PHOTOGRAPHY_H_TOO_CLOSE";
				case 1073741824:
					return "NB_PHOTOGRAPHY_H_TOO_FAR";
				case 4194304:
					if (func_721())
					{
						return "NB_PHOTOGRAPHY_H_FRAME_GANG_FS";
					}
					else if (iVar0 == 8)
					{
						return "NB_PHOTOGRAPHY_H_FRAME_FISH_FS";
					}
					else if (iVar0 == 1 || iVar0 == 2)
					{
						return "NB_PHOTOGRAPHY_H_FRAME_HORSE_FS";
					}
					break;
				case 67108864:
					if ((NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2) && NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_21)) && iVar2 == Local_13.f_7.f_21)
					{
						return "NB_PHOTOGRAPHY_H_GATHER_CAMERAMAN";
					}
					else
					{
						return "NB_PHOTOGRAPHY_H_GATHER";
					}
					break;
				case 134217728:
					if ((NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2) && NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_21)) && iVar2 == Local_13.f_7.f_21)
					{
						return "NB_PHOTOGRAPHY_H_GUNS_CAMERAMAN";
					}
					else if (iVar0 == 9)
					{
						return "NB_PHOTOGRAPHY_H_GUNSUP";
					}
					else if (iVar0 == 10)
					{
						return "NB_PHOTOGRAPHY_H_GUNSAIMED";
					}
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1048576:
					return "NB_PHOTOGRAPHY_H_CAMERA";
				case 2097152:
					return "NB_PHOTOGRAPHY_H_PHOTO";
				case 16777216:
					return "NB_PHOTOGRAPHY_H_HORSE_DS";
				case 33554432:
					return "NB_PHOTOGRAPHY_H_DISMOUNT_DS";
				case 536870912:
					return "NB_PHOTOGRAPHY_H_TOO_CLOSE";
				case 1073741824:
					return "NB_PHOTOGRAPHY_H_TOO_FAR";
				case 4194304:
					if (func_578())
					{
						return "NB_PHOTOGRAPHY_H_FRAME_ANIMAL_DS";
					}
					else if (iVar0 == 1 || iVar0 == 2)
					{
						return "NB_PHOTOGRAPHY_H_FRAME_HORSE_DS";
					}
					break;
			}
			break;
	}
	return "";
}

int func_710(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_947.f_274.f_7[iParam0 /*11*/]))
		{
			return 255;
		}
	}
	iVar1 = -1;
	bVar2 = fParam1 > 0f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
		{
		}
		else if (Local_82[iVar0 /*27*/].f_4.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam3 && !func_535(iVar0))
		{
		}
		else if (iVar1 != -1 && Local_82[iVar0 /*27*/].f_4.f_2[iParam0] > Local_82[iVar1 /*27*/].f_4.f_2[iParam0])
		{
		}
		else if (bVar2 && Local_82[iVar0 /*27*/].f_4.f_2[iParam0] > fParam1)
		{
		}
		else
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 32)
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
	}
	return 255;
}

int func_711()
{
	switch (func_242())
	{
		case 5:
			return 2;
		case 7:
			return 2;
		default:
			break;
	}
	return 99;
}

int func_712()
{
	switch (func_242())
	{
		case 3:
			return 0;
		case 4:
			return 2;
		case 5:
			return 2;
		case 6:
			return 2;
		case 7:
			return 2;
		default:
			break;
	}
	return 4;
}

int func_713()
{
	switch (func_242())
	{
		case 3:
			return 0;
		case 4:
			return 1;
		case 5:
			return 1;
		case 6:
			return 1;
		case 7:
			return 1;
		default:
			break;
	}
	return 4;
}

int func_714(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_710(iParam0, fParam1, bParam2, bParam3);
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	}
	return 255;
}

float func_715(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iParam0))
		{
			return 0f;
		}
	}
	return Local_82[iParam0 /*27*/].f_4.f_2[iParam1];
}

int func_716(float fParam0)
{
	if (fParam0 < func_611())
	{
		return 4;
	}
	if (fParam0 < func_920())
	{
		return 2;
	}
	if (fParam0 < func_921())
	{
		return 1;
	}
	return 0;
}

bool func_717()
{
	return func_922(1);
}

bool func_718(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	int iVar2;

	iVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (iVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

bool func_719(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	iVar0 = PLAYER::PLAYER_PED_ID();
	vVar1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	fVar7 = func_923((func_585(0, 255, 1) * 1064514355), 0f, 1101004800 /* Float: 20f */);
	vVar8 = { func_573(vVar4 - vVar1) };
	vVar11 = { vVar1 + vVar8 * Vector(fVar7, fVar7, fVar7) / Vector(2f, 2f, 2f) };
	vVar14 = { func_924(vVar8, 0f, 0f, 1f) };
	if (!VOLUME::DOES_VOLUME_EXIST(Local_947.f_19.f_254))
	{
		Local_947.f_19.f_254 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar11, vVar14, fVar7, 1f, 2f, "PHOTO_CAM_VOL");
	}
	VOLUME::SET_VOLUME_COORDS(Local_947.f_19.f_254, vVar11);
	VOLUME::SET_VOLUME_ROTATION(Local_947.f_19.f_254, vVar14);
	VOLUME::SET_VOLUME_SCALE(Local_947.f_19.f_254, fVar7, 1f, 1.75f);
	if (!func_538(32, 255))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
		func_726(32);
	}
	if (PED::_IS_PED_VISIBILITY_TRACKED(iParam0))
	{
		if (!PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(iParam0, 0.75f))
		{
			return true;
		}
		if (!PED::IS_TRACKED_PED_VISIBLE(iParam0))
		{
			return true;
		}
	}
	if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
	{
		return true;
	}
	iVar17 = ITEMSET::CREATE_ITEMSET(true);
	iVar18 = ENTITY::_GET_ENTITIES_IN_VOLUME(Local_947.f_19.f_254, iVar17, 1);
	iVar21 = func_242();
	iVar19 = 0;
	while (iVar19 < iVar18)
	{
		iVar20 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar19, iVar17));
		if (ENTITY::DOES_ENTITY_EXIST(iVar20))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar20))
			{
				iVar22 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar20);
				if ((!func_720() || iVar22 != iVar0) && iVar22 != iParam0)
				{
					iVar23 = PED::GET_MOUNT(iParam0);
					if (iVar23 == 0 || iVar23 != iVar22)
					{
						if (iVar21 == 8)
						{
							iVar24 = func_191(2);
						}
						if (iVar24 == 0 || iVar24 != iVar22)
						{
							ITEMSET::_CLEAR_ITEMSET(iVar17);
							ITEMSET::DESTROY_ITEMSET(iVar17);
							return true;
						}
					}
				}
			}
		}
		iVar19++;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar17);
	ITEMSET::DESTROY_ITEMSET(iVar17);
	return false;
}

bool func_720()
{
	return Global_1958668;
}

bool func_721()
{
	switch (func_242())
	{
		case 9:
		case 10:
		case 11:
			return true;
		default:
			break;
	}
	return false;
}

void func_722()
{
	int iVar0;

	if (!func_134(32, 255))
	{
		func_925(Local_947.f_1, Local_947.f_3);
		if (!func_134(1024, 255))
		{
			func_926(Local_947.f_1);
			func_151(1024);
		}
		iVar0 = func_493(Local_947.f_1, Local_947.f_2);
		func_927(iVar0);
		func_928(iVar0);
		func_149(2);
		func_929(Local_947.f_9);
		func_930(Local_947.f_1);
		func_931(Local_947.f_1, Local_947.f_2, Local_947.f_3);
		if (func_932(Local_947.f_1))
		{
			func_933(0, 3.031687E-09f);
			func_149(1024);
		}
		func_151(32);
	}
}

void func_723(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(Local_947.f_19.f_3[iParam0 /*2*/]))
	{
		return;
	}
	MAP::REMOVE_BLIP(&(Local_947.f_19.f_3[iParam0 /*2*/]));
}

void func_724(float fParam0)
{
	int iVar0;
	float fVar1;

	if (!func_535(255))
	{
		func_723(0);
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_513(0));
	if (fVar1 < fParam0)
	{
		func_934(0, 0);
	}
	else
	{
		func_723(0);
	}
}

void func_725(var uParam0)
{
	*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

void func_726(int iParam0)
{
	int iVar0;

	if (!func_230(&iVar0))
	{
		return;
	}
	func_251(&(Local_82[iVar0 /*27*/].f_1.f_2), iParam0);
}

void func_727(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
	{
		return;
	}
	func_935(Local_13.f_7.f_20, iParam0);
}

void func_728(int iParam0)
{
	int iVar0;

	if (!func_230(&iVar0))
	{
		return;
	}
	func_350(&(Local_82[iVar0 /*27*/].f_1.f_2), iParam0);
}

void func_729()
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar0 = func_191(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	if (func_511(iVar0, 0.002842281f, 1, 0))
	{
		iVar1 = func_361(0);
		sVar2 = func_936(0);
		if (iVar1 != 0)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE_HASH(iVar0, iVar1, 0, false, 0, -1f, false);
			}
			else
			{
				TASK::TASK_START_SCENARIO_IN_PLACE_HASH(iVar0, iVar1, 0, false, MISC::GET_HASH_KEY(sVar2), -1f, false);
			}
		}
	}
}

void func_730()
{
	if (func_481(524288, 255) && !func_603(Local_13.f_7.f_11, Local_13.f_7.f_16))
	{
		func_515(524288);
	}
}

int func_731()
{
	return 6;
}

void func_732(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
	{
		return;
	}
	func_937(Local_13.f_7.f_20, iParam0);
}

bool func_733(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_499(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return false;
	}
	return func_938(iVar0, iParam0);
}

bool func_734(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_795(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = func_939(iParam1);
	return func_938(iVar0, iParam0);
}

bool func_735(int iParam0, int iParam1)
{
	if (!func_795(iParam0, iParam1))
	{
		return false;
	}
	return func_938(iParam1, iParam0);
}

int func_736()
{
	return 2;
}

int func_737()
{
	return 4;
}

void func_738()
{
	if (func_741())
	{
		if ((func_610(func_609(56)) || func_610(func_609(57))) || func_610(func_609(58)))
		{
			return;
		}
		func_583(1, 0, 0);
		if (!func_595(56))
		{
			func_599(0, 0, 56, 0);
		}
		else if (!func_595(57))
		{
			func_599(0, 0, 57, 0);
		}
		else if (!func_595(58))
		{
			func_599(0, 0, 58, 0);
		}
	}
}

void func_739()
{
	if (!func_598(1))
	{
		if (!func_595(59))
		{
			if (func_603(Local_13.f_7.f_9, 5000))
			{
				func_599(0, 0, 59, 0);
			}
		}
	}
}

void func_740()
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_21))
	{
		func_727(100);
		return;
	}
	func_935(Local_13.f_7.f_21, 100);
}

bool func_741()
{
	int iVar0;

	if (func_585(0, 255, 1) > 1112014848)
	{
		return false;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if ((DECORATOR::DECOR_EXIST_ON(iVar0, "camera_takingPic") && DECORATOR::DECOR_GET_BOOL(iVar0, "camera_takingPic")) || func_508(2f))
		{
			return true;
		}
	}
	return false;
}

void func_742()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	iVar0 = func_191(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_482(256);
		return;
	}
	iVar1 = PED::GET_MOUNT(iVar0);
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar19 = 255;
	if (func_719(iVar0))
	{
		iVar8 -= 5;
	}
	else
	{
		iVar8 = (iVar8 + func_940(iVar0));
	}
	if (func_941(iVar0, iVar2, 0))
	{
		iVar8++;
	}
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar2, true, false) };
	if (func_942(vVar4))
	{
		iVar9 = (iVar9 + -1);
	}
	else if (func_943(vVar4))
	{
		iVar9 = (iVar9 + -1);
	}
	else
	{
		iVar9++;
	}
	iVar20 = func_242();
	switch (iVar20)
	{
		case 0:
			vVar4 = { func_373(1) };
			fVar7 = BUILTIN::VDIST(vVar4, ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
			if (fVar7 < 2f)
			{
				iVar10 += 3;
			}
			else if (fVar7 < 4f)
			{
				iVar10 += 2;
			}
			else
			{
				iVar10 = iVar10;
			}
			break;
		case 1:
		case 2:
			iVar11 = (iVar11 + func_940(iVar1));
			if (func_941(iVar1, iVar2, 0))
			{
				iVar11++;
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			iVar3 = func_191(2);
			iVar12 = (iVar12 + func_940(iVar3));
			if (func_941(iVar3, iVar2, 0))
			{
				iVar12++;
			}
			if (Local_13.f_7.f_18 >= func_944())
			{
				iVar12 += 3;
			}
			else if (Local_13.f_7.f_18 >= func_945())
			{
				iVar12 += 2;
			}
			else
			{
				iVar12 = iVar12;
			}
			break;
		case 8:
			iVar3 = func_191(2);
			iVar12 = (iVar12 + func_940(iVar3));
			break;
		case 9:
		case 10:
		case 11:
			uVar15 = func_946(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 0f, 0f, 0f, 3f, 3f, 3f, -2.19652E+23f, 0, 8);
			iVar16 = SCRIPTS::COUNT_PLAYER_BITS(&uVar15);
			if (iVar16 == 0)
			{
				iVar13 = -10;
			}
			else
			{
				iVar17 = 0;
				while (iVar17 < 32)
				{
					if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&uVar15, iVar17))
					{
						iVar19 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
						iVar18 = PLAYER::GET_PLAYER_PED(iVar19);
						if (!ENTITY::IS_ENTITY_DEAD(iVar18))
						{
							iVar13 = (iVar13 + func_940(iVar18));
							switch (iVar20)
							{
								case 9:
									if (!WEAPON::IS_PED_ARMED(iVar18, 4) || (!PLAYER::IS_PLAYER_FREE_AIMING(iVar19) && !NETWORK::NETWORK_IS_AIM_CAM_ACTIVE(iVar19)))
									{
									}
									else
									{
										iVar13++;
									}
									break;
								case 10:
									if (!func_501(3.85186E-34f, iVar17) && (!WEAPON::IS_PED_ARMED(iVar18, 4) || (!PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar19, iVar0, false) && !PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar19, iVar0))))
									{
									}
									else
									{
										iVar13++;
									}
									break;
								case 11:
									if (PED::IS_PED_HOGTIED(iVar0))
									{
										iVar13++;
									}
									else
									{
										iVar13 = -10;
									}
									if (func_941(iVar18, iVar2, 0))
									{
										iVar13++;
									}
									break;
							}
						}
					}
					iVar17++;
				}
			}
			break;
	}
	iVar14 = (iVar14 + (((((iVar8 + iVar9) + iVar10) + iVar11) + iVar12) + iVar13));
	iVar21 = 7;
	iVar22 = 4;
	switch (iVar20)
	{
		case 0:
			iVar21 = 7;
			iVar22 = 4;
			break;
		case 1:
		case 2:
			iVar21 = 7;
			iVar22 = 4;
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			iVar21 = 9;
			iVar22 = 6;
			break;
		case 8:
			iVar21 = 6;
			iVar22 = 4;
			break;
		case 9:
		case 10:
		case 11:
			iVar21 = 7;
			iVar22 = 4;
			break;
	}
	if (!func_481(2048, 255))
	{
		if (iVar14 >= iVar21)
		{
			func_482(1024);
			func_515(512);
			func_515(256);
		}
		else if (iVar14 >= iVar22)
		{
			func_482(512);
			func_515(1024);
			func_515(256);
		}
		else
		{
			func_482(256);
			func_515(1024);
			func_515(512);
		}
	}
}

void func_743()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	int iVar13;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = func_242();
	iVar1 = func_191(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		return;
	}
	if (iVar0 == 11)
	{
		if (PED::IS_PED_LASSOED(iVar1) && !PED::IS_PED_HOGTIED(iVar1))
		{
			func_592(0, 1115815936 /* Float: 65f */, 5000, 0, 154, 155, 156, -1, -1, -1, 0, 157);
			return;
		}
		iVar2 = ENTITY::GET_CARRIABLE_ENTITY_STATE(iVar1);
		switch (iVar2)
		{
			case 4:
			case 5:
			case 7:
			case 8:
				func_592(0, 1115815936 /* Float: 65f */, 5000, 0, 165, 166, 167, -1, -1, -1, 0, -1);
				if (func_595(167))
				{
					if (Local_13.f_7.f_14 == 0)
					{
						func_596(&(Local_13.f_7.f_14));
					}
				}
				return;
			default:
				break;
		}
	}
	if (Local_13.f_7.f_14 != 0)
	{
		Local_13.f_7.f_17 = (Local_13.f_7.f_17 + NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_14, NETWORK::GET_NETWORK_TIME_ACCURATE()));
		Local_13.f_7.f_14 = 0;
	}
	if (func_578())
	{
		if (func_947())
		{
			return;
		}
	}
	Local_13.f_7.f_6 = func_946(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 0f, 0f, 0f, 3f, 3f, 3f, -2.19652E+23f, 0, 8);
	iVar3 = SCRIPTS::COUNT_PLAYER_BITS(&(Local_13.f_7.f_6));
	Local_13.f_7.f_7 = func_946(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 0f, 0f, 0f, 1106247680 /* Float: 30f */, 1106247680 /* Float: 30f */, 1106247680 /* Float: 30f */, -2.19652E+23f, 0, 8);
	iVar4 = SCRIPTS::COUNT_PLAYER_BITS(&(Local_13.f_7.f_7));
	if (func_721())
	{
		if (iVar3 < 1)
		{
			func_587(32768);
			if (iVar4 > 2)
			{
				func_592(0, 1115815936 /* Float: 65f */, 5000, 1, 140, 141, 142, -1, -1, -1, 0, 143);
				return;
			}
			else
			{
				func_592(0, 1115815936 /* Float: 65f */, 5000, 1, 137, 138, 139, -1, -1, -1, 0, 143);
				return;
			}
		}
	}
	func_588(32768);
	if (iVar0 == 10 || iVar0 == 9)
	{
		bVar6 = false;
		iVar8 = 255;
		iVar5 = 0;
		while (iVar5 < 32)
		{
			if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Local_13.f_7.f_6), iVar5))
			{
				iVar8 = PLAYER::INT_TO_PLAYERINDEX(iVar5);
				iVar7 = PLAYER::GET_PLAYER_PED(iVar8);
				if (!ENTITY::IS_ENTITY_DEAD(iVar7) && Local_13.f_7.f_21 != iVar8)
				{
					switch (iVar0)
					{
						case 9:
							if (WEAPON::IS_PED_ARMED(iVar7, 4) && ((PLAYER::IS_PLAYER_FREE_AIMING(iVar8) || NETWORK::NETWORK_IS_AIM_CAM_ACTIVE(iVar8)) || TASK::GET_IS_PED_AIMING_IN_THE_AIR(iVar7)))
							{
								bVar6 = true;
							}
							else
							{
								Jump @687; //curOff = 620
								if (func_501(3.85186E-34f, iVar5) || (WEAPON::IS_PED_ARMED(iVar7, 4) && (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar8, iVar1, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar8, iVar1))))
								{
									bVar6 = true;
								}
								else
								{
									iVar5++;
								}
							}
							if (!bVar6)
							{
								func_587(65536);
								switch (iVar0)
								{
									case 9:
										func_592(0, 1115815936 /* Float: 65f */, 5000, 0, 147, 148, 149, -1, -1, -1, 0, 153);
										break;
									case 10:
										func_592(0, 1115815936 /* Float: 65f */, 5000, 0, 150, 151, 152, -1, -1, -1, 0, 153);
										break;
								}
								return;
							}
							func_750(iVar1);
							func_588(65536);
							if (iVar0 == 11)
							{
								if (!PED::IS_PED_HOGTIED(iVar1))
								{
									func_592(0, 1115815936 /* Float: 65f */, 5000, 0, 154, 155, 156, -1, -1, -1, 0, 157);
									return;
								}
								func_750(iVar1);
							}
							if (!func_606(16))
							{
								if ((iVar0 == 10 || iVar0 == 9) || iVar0 == 11)
								{
									func_592(0, 1115815936 /* Float: 65f */, 5000, 0, 144, 145, 146, -1, -1, -1, 0, 39);
								}
								else
								{
									func_592(0, 1115815936 /* Float: 65f */, 5000, 0, 36, 37, 38, -1, -1, -1, 0, 39);
								}
								return;
							}
							iVar9 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_21);
							if (iVar9 == 0)
							{
								return;
							}
							vVar10 = { ENTITY::GET_ENTITY_COORDS(iVar9, false, false) };
							if (func_942(vVar10))
							{
								func_592(0, 1115815936 /* Float: 65f */, 5000, 1, 52, 53, 54, -1, -1, -1, 0, 55);
								return;
							}
							else if (func_943(vVar10))
							{
								func_592(0, 1115815936 /* Float: 65f */, 5000, 1, 40, 41, 42, -1, -1, -1, 0, 43);
								return;
							}
							if (!func_590(32768))
							{
								func_592(0, 1115815936 /* Float: 65f */, 5000, 1, 44, 45, 46, -1, -1, -1, 0, 47);
								return;
							}
							if (func_721())
							{
								if (!func_590(262144))
								{
									func_592(0, 1115815936 /* Float: 65f */, 5000, 1, 161, 162, 163, -1, -1, -1, 0, 164);
									return;
								}
								else if (!func_590(131072))
								{
									func_592(0, 1115815936 /* Float: 65f */, 5000, 1, 158, 159, 160, -1, -1, -1, 0, 164);
									return;
								}
							}
							if ((func_578() || iVar0 == 1) || iVar0 == 8)
							{
								if (!func_590(65536))
								{
									iVar13 = 48;
									switch (iVar0)
									{
										case 3:
											iVar13 = 89;
											break;
										case 4:
											iVar13 = 90;
											break;
										case 5:
											iVar13 = 91;
											break;
										case 6:
											iVar13 = 92;
											break;
										case 7:
											iVar13 = 93;
											break;
									}
									func_592(0, 1115815936 /* Float: 65f */, 5000, 1, iVar13, 48, 49, 50, -1, -1, 0, 51);
									return;
								}
							}
							func_592(0, 1115815936 /* Float: 65f */, 5000, 1, 62, 63, 64, 17, 18, 19, 0, 20);
							default:
								break;
					}
				}
			}
		}
	}
}

bool func_744(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	vVar3 = { func_373(1) };
	vVar6 = { func_373(0) };
	if (func_578())
	{
		vVar3 = { func_513(2) };
		vVar6 = { func_373(3) };
	}
	else if (func_242() == 9)
	{
		vVar3 = { func_373(5) };
		vVar6 = { func_373(6) };
	}
	vVar0 = { func_573(vVar6 - vVar3) * Vector(1092616192, 1092616192, 1092616192) + vVar6 };
	if (!func_948(iParam0, vVar0, 1064514355 /* Float: 0.95f */))
	{
		if (func_511(iParam0, 2.239952E+14f, 1, 0))
		{
			TASK::TASK_TURN_PED_TO_FACE_COORD(iParam0, vVar0, -1);
		}
	}
	else
	{
		if (func_242() != 9)
		{
			if (Local_13.f_7.f_19 != -1)
			{
				if (func_511(iParam0, 0.002842281f, 1, 0))
				{
					func_745();
				}
			}
		}
		return true;
	}
	return false;
}

void func_745()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;

	if (Local_13.f_7.f_19 == -1)
	{
		return;
	}
	iVar0 = func_191(0);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	iVar1 = func_746();
	iVar2 = func_361(iVar1);
	sVar3 = func_936(iVar1);
	if (!PED::IS_PED_USING_SCENARIO_HASH(iVar0, iVar2))
	{
		if (iVar2 != 0)
		{
			PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(iVar0);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE_HASH(iVar0, iVar2, 0, true, 0, -1f, false);
			}
			else
			{
				TASK::TASK_START_SCENARIO_IN_PLACE_HASH(iVar0, iVar2, 0, true, MISC::GET_HASH_KEY(sVar3), -1f, false);
			}
		}
	}
}

int func_746()
{
	return Local_13.f_7.f_19;
}

void func_747()
{
	if (MAP::DOES_BLIP_EXIST(Local_947.f_19.f_154))
	{
		func_949(&(Local_947.f_19.f_154));
	}
}

void func_748()
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_22))
	{
		func_727(5000);
		return;
	}
	func_935(Local_13.f_7.f_22, 5000);
}

bool func_749()
{
	float fVar0;

	fVar0 = 0f;
	switch (func_242())
	{
		case 3:
			fVar0 = 1045220557; /* Float: 0.2f */
			break;
		case 4:
			fVar0 = 1063675494; /* Float: 0.9f */
			break;
		case 5:
			fVar0 = 1045220557; /* Float: 0.2f */
			break;
		case 6:
			fVar0 = 1058642330; /* Float: 0.6f */
			break;
		case 7:
			fVar0 = 1058642330; /* Float: 0.6f */
			break;
	}
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < fVar0;
}

void func_750(int iParam0)
{
	if (Local_947.f_19.f_249 == 0)
	{
		Local_947.f_19.f_249 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(func_950(), iParam0, -1f, 35f, 50f, -1f, -1f, 180f, false, false, -1, -1);
	}
}

void func_751()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_578())
	{
		return;
	}
	iVar0 = func_191(2);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (func_349(iVar0, 2.40763E-20f))
	{
		return;
	}
	if (func_349(iVar0, -1.187542E-13f) || func_349(iVar0, -6.075089E-32f))
	{
		if (func_512(0, 2) < func_611())
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_581(64);
				func_582(25);
			}
		}
		return;
	}
	iVar1 = func_714(2, func_611(), 1, 1);
	if (func_951(iVar1))
	{
		if (!func_193(2.524355E-29f))
		{
			if (func_193(3.85186E-34f))
			{
				func_121(2.524355E-29f);
				iVar2 = func_191(0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, Local_947.f_19.f_45, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2));
				}
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, Local_947.f_19.f_45, 3.397268E+19f);
			}
		}
		if (func_511(iVar0, -1.187542E-13f, 1, 0))
		{
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iVar0, 100f, 0, 0);
		}
	}
	if (func_510(2))
	{
		if (func_511(iVar0, 2.40763E-20f, 1, 0))
		{
			iVar3 = func_826(2);
			if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
			{
				iVar4 = PLAYER::GET_PLAYER_PED(iVar3);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4) && !PED::IS_PED_DEAD_OR_DYING(iVar4, true))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar4, 500f, -1, 0, 3f, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iVar0, func_513(2), 500f, -1, 0, 3f);
				}
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(iVar0, func_513(2), 500f, -1, 0, 3f);
			}
		}
	}
}

float func_752(int iParam0)
{
	return Local_947.f_274.f_7[iParam0 /*11*/].f_5;
}

void func_753(float fParam0)
{
	float fVar0;

	if (!func_952(2) || func_953(2, 0))
	{
		func_723(2);
		return;
	}
	if (!func_535(255))
	{
		func_723(2);
		return;
	}
	fVar0 = func_585(2, 255, 1);
	if (fVar0 < fParam0 && fVar0 != 0f)
	{
		if (!func_954(2))
		{
			func_955(2, 4.085619E-09f, 4.185971E-18f, 0, "NB_PHOTOGRAPHY_BLIP_NAME_ANIMAL");
		}
	}
	else
	{
		func_175(2);
	}
}

void func_754(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_24))
	{
		func_732(-1);
		return;
	}
	func_937(Local_13.f_7.f_24, iParam0);
}

void func_755()
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_24))
	{
		func_727(100);
		return;
	}
	func_935(Local_13.f_7.f_24, 100);
}

void func_756()
{
	if (func_606(512))
	{
		return;
	}
	if (!func_193(16384))
	{
		if ((!func_193(32768) && !func_193(65536)) && !func_193(131072))
		{
			func_121(16384);
		}
	}
}

bool func_757(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return func_680(iParam0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam1));
	}
	return false;
}

void func_758(int iParam0, vector3 vParam1)
{
	if (MAP::DOES_BLIP_EXIST(Local_947.f_19.f_154))
	{
		return;
	}
	if (!func_535(255))
	{
		return;
	}
	Local_947.f_19.f_154 = MAP::_BLIP_ADD_FOR_AREA(3681776f, func_373(iParam0), vParam1, 0);
	MAP::BLIP_ADD_MODIFIER(Local_947.f_19.f_154, 1.096965E+22f);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_947.f_19.f_154, "NB_PHOTOGRAPHY_BLIP_NAME_OBJ");
}

void func_759()
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_23))
	{
		func_937(Local_13.f_7.f_23, -1);
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_947.f_19.f_155) || ENTITY::IS_ENTITY_DEAD(Local_947.f_19.f_155))
	{
		func_732(-1);
		return;
	}
	iVar0 = PED::_GET_RIDER_OF_MOUNT(Local_947.f_19.f_155, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_732(-1);
		return;
	}
	iVar1 = 255;
	if (PED::IS_PED_A_PLAYER(iVar0))
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
	{
		func_732(-1);
		return;
	}
	func_937(iVar1, -1);
}

void func_760()
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_23))
	{
		func_727(100);
		return;
	}
	func_935(Local_13.f_7.f_23, 100);
}

float func_761(int iParam0, vector3 vParam1)
{
	return BUILTIN::VDIST(func_802(iParam0), vParam1);
}

void func_762(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_21))
	{
		func_732(-1);
		return;
	}
	func_937(Local_13.f_7.f_21, iParam0);
}

bool func_763(int iParam0)
{
	return PED::GET_PED_CONFIG_FLAG(iParam0, 161, false);
}

void func_764()
{
	func_785(1);
}

bool func_765(int iParam0)
{
	char* sVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_947.f_19.f_246))
	{
		return false;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_947.f_19.f_246))
	{
		return false;
	}
	sVar0 = func_359(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(Local_947.f_19.f_246, sVar0))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(Local_947.f_19.f_246, sVar0))
		{
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_947.f_19.f_246, sVar0);
		}
		return false;
	}
	return true;
}

bool func_766(char* sParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_947.f_19.f_246))
	{
		return false;
	}
	return ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_947.f_19.f_246, sParam0);
}

void func_767(char* sParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_947.f_19.f_246))
	{
		return;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_947.f_19.f_246))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_947.f_19.f_246, sParam0, true, true);
}

void func_768(int iParam0)
{
	char* sVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_947.f_19.f_246))
	{
		return;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_947.f_19.f_246))
	{
		return;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_947.f_19.f_246))
	{
		return;
	}
	sVar0 = func_359(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(Local_947.f_19.f_246, sVar0))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(Local_947.f_19.f_246, sVar0))
		{
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_947.f_19.f_246, sVar0);
		}
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Local_947.f_19.f_246, sVar0, true);
}

float func_769()
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_947.f_19.f_246))
	{
		return -1f;
	}
	return ANIMSCENE::GET_ANIM_SCENE_PHASE(Local_947.f_19.f_246);
}

void func_770(bool bParam0)
{
	int iVar0;
	char* sVar1;

	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID()))
	{
		return;
	}
	if (NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()) != Local_13.f_7.f_22)
	{
		return;
	}
	if (func_538(4, 255))
	{
		return;
	}
	if (!bParam0)
	{
		if (!func_603(Local_13.f_7.f_13, 2000))
		{
			return;
		}
	}
	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar0 != 0)
	{
		return;
	}
	switch (func_246())
	{
		case 0:
			sVar1 = "NB_PHOTOGRAPHY_H_FILM_TS";
			break;
		case 1:
			sVar1 = "NB_PHOTOGRAPHY_H_FILM_FS";
			break;
		case 2:
			sVar1 = "NB_PHOTOGRAPHY_H_FILM_DS";
			break;
	}
	func_707(sVar1, 10000, 0, 0, 0, 1);
	func_726(4);
}

bool func_771()
{
	int iVar0;
	int iVar1;

	if ((Local_13.f_7.f_22 == 255 || !NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID())) || NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()) != Local_13.f_7.f_22)
	{
		return false;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
	if (func_603(Local_13.f_7.f_10, 2000))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, false, 0, false))
			{
				if (iVar1 != -3.273909E-18f)
				{
					if (func_511(iVar0, 3.269911E-13f, 1, 0))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iVar0, -3.273909E-18f, false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(iVar0, 1, 0, 0, 0);
					}
				}
				else
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_772()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_947.f_19.f_246))
	{
		return;
	}
	iVar0 = func_191(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -183.778f))
	{
		iVar1 = func_191(2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iVar1, Local_947.f_19.f_246))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_947.f_19.f_246, func_505(2), iVar1);
				}
				PED::DELETE_PED(&iVar1);
			}
		}
		iVar2 = func_506(2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iVar2, Local_947.f_19.f_246))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_947.f_19.f_246, func_507(2), iVar2);
				}
				OBJECT::DELETE_OBJECT(&iVar2);
			}
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -3.680554f))
	{
		iVar3 = func_506(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar3))
			{
				if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iVar3, Local_947.f_19.f_246))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_947.f_19.f_246, func_507(0), iVar3);
				}
				OBJECT::DELETE_OBJECT(&iVar3);
			}
		}
	}
}

void func_773(var uParam0, int iParam1)
{
	uParam0->f_20 = iParam1;
}

void func_774(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;

	iVar0 = func_191(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		iParam0 = Local_13.f_7.f_20;
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return;
		}
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	bVar2 = false;
	bVar3 = ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_357(iParam3), func_624(iParam3), 1);
	bVar4 = ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_357(iParam2), func_624(iParam2), 1);
	if (!bVar3 && !bVar4)
	{
		func_509(iParam1);
		bVar2 = true;
	}
	if (bVar4)
	{
		bVar2 = true;
	}
	if (Local_947.f_19.f_156 != iParam0 && bVar3)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		Local_947.f_19.f_156 = iParam0;
		if (bVar3)
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar0, func_357(iParam3), func_624(iParam3), PLAYER::GET_PLAYER_PED(Local_947.f_19.f_156), -1, 4f, -2f, 25, 0f, false, false, -1f, 0, 0, -1f);
		}
		else if (bVar4)
		{
			fVar5 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iVar0, func_357(iParam2), func_624(iParam2));
			if (fVar5 > 1060320051)
			{
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar0, func_357(iParam3), func_624(iParam3), PLAYER::GET_PLAYER_PED(Local_947.f_19.f_156), -1, 4f, -2f, 25, 0f, false, false, -1f, 0, 0, -1f);
			}
		}
		else
		{
			func_581(iParam1);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar0, func_357(iParam2), func_624(iParam2), PLAYER::GET_PLAYER_PED(Local_947.f_19.f_156), 2000, 4f, -4f, 24, 0f, false, false, -1f, 0, 0, -1f);
		}
	}
}

void func_775()
{
	if (func_606(512))
	{
		return;
	}
	if (!func_193(8192))
	{
		if ((!func_193(32768) && !func_193(65536)) && !func_193(131072))
		{
			if (func_481(2048, 255) || func_481(4096, 255))
			{
				func_502(9.503152E+28f, 0, 0);
				func_121(8192);
			}
		}
	}
}

void func_776()
{
	bool bVar0;

	if (func_606(512))
	{
		return;
	}
	if (!func_193(524288))
	{
		if ((!func_193(32768) && !func_193(65536)) && !func_193(131072))
		{
			if (func_481(2048, 255) || func_481(4096, 255))
			{
				bVar0 = 2.95582E+10f;
				if (func_590(512))
				{
					bVar0 = 8.307482E-11f;
				}
				else if (func_590(1024))
				{
					bVar0 = -6.882499E+35f;
				}
				if (func_956(bVar0, 0, 255, 0, 0))
				{
					func_121(524288);
				}
			}
		}
	}
}

void func_777()
{
	if (func_481(2048, 255) || func_481(4096, 255))
	{
		func_957();
	}
}

void func_778()
{
	if (func_481(2048, 255) || func_481(4096, 255))
	{
		func_785(1);
	}
}

void func_779()
{
	if (func_678(0, 255) || func_680(0, 255))
	{
		func_902(0);
		func_958(7, Local_947.f_4);
	}
}

void func_780()
{
	if (!func_193(131072))
	{
		if (!func_501(2, 255))
		{
			func_502(-4.615115E-09f, 0, 0);
			func_121(65536);
		}
	}
}

void func_781(bool bParam0)
{
	if ((Local_13.f_7.f_22 == 255 || !NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID())) || NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()) != Local_13.f_7.f_22)
	{
		return;
	}
	if (bParam0)
	{
		if (func_481(8388608, 255))
		{
			PLAYER::SET_PLAYER_CONTROL(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()), true, 256, false);
			func_515(8388608);
		}
	}
	else if (!func_481(8388608, 255))
	{
		PLAYER::SET_PLAYER_CONTROL(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()), false, 256, false);
		func_482(8388608);
	}
}

void func_782(int iParam0, int iParam1)
{
	if (!func_795(iParam0, iParam1))
	{
		return;
	}
	func_800(iParam1, iParam0);
}

void func_783(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_795(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_939(iParam1);
	func_500(iVar0, iParam0);
}

bool func_784(int iParam0)
{
	return MISC::IS_BIT_SET(Local_947.f_406.f_123, iParam0);
}

void func_785(bool bParam0)
{
	if (!func_69(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_69(256))
		{
			func_187(Local_947.f_18, 0);
			func_149(256);
		}
	}
	func_149(16);
}

bool func_786(int iParam0)
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

void func_787(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_786(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_959(*uParam0);
	if (Global_1951897[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_960(iVar0);
	*uParam0 = 0;
}

int func_788(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_961(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_789(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_961(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_790(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_530(&Var1, iParam0))
	{
		iVar0 = ((func_962() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_791(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/].f_2;
}

bool func_792(int iParam0, int iParam1)
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

void func_793(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_1051645.f_16[15] == 0 || !SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[15]))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 8, 10, Global_1051645.f_16[15]);
	func_963(uParam0, uParam0->f_1);
}

struct<2> func_794(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

bool func_795(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_796(iParam0) - 1))
	{
		return false;
	}
	return true;
}

int func_796(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 4;
		case 4:
			return 2;
		default:
			break;
	}
	return 8;
}

bool func_797()
{
	if (func_28() != 0)
	{
		return true;
	}
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(-2.454324E-14f))
	{
		return true;
	}
	if (Global_1149417.f_3876.f_1 & 2 != 0)
	{
		return true;
	}
	if (Global_1149417.f_3876.f_1 & 4 != 0)
	{
		return true;
	}
	if (!NETWORK::HAS_NETWORK_TIME_STARTED())
	{
		return true;
	}
	return false;
}

int func_798(int iParam0, int iParam1)
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

void func_799(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 188;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 7, &uParam1);
}

void func_800(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_643(iParam1, 8.746343E-07f) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return;
	}
	if (MISC::IS_BIT_SET(iVar2, iParam0))
	{
		return;
	}
	MISC::SET_BIT(&iVar2, iParam0);
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

var func_801(int iParam0, int iParam1)
{
	return Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/];
}

Vector3 func_802(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(Local_947.f_274.f_7[iParam0 /*11*/], true, false);
}

void func_803(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	if (iParam2 < iParam1)
	{
		iParam2 = (bParam0->f_2 - 1);
	}
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		func_520(bParam0, iVar0);
		iVar0++;
	}
}

bool func_804(int iParam0)
{
	if (Local_947.f_578.f_120 == iParam0)
	{
		return true;
	}
	return false;
}

void func_805(int iParam0, int iParam1, int iParam2)
{
	func_251(&(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1), iParam2);
}

void func_806(int iParam0, int iParam1, int iParam2)
{
	func_350(&(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1), iParam2);
}

void func_807(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_786(iParam0))
	{
		return;
	}
	iVar0 = func_959(iParam0);
	if (bParam1)
	{
		func_964(iParam0, 4);
		if (bParam3)
		{
			func_965(iVar0, 1);
		}
		func_966(iVar0, 1);
	}
	else
	{
		func_967(iParam0, 4);
		func_966(iVar0, 0);
	}
}

float func_808(var uParam0)
{
	return uParam0->f_26;
}

void func_809(var uParam0, float fParam1)
{
	uParam0->f_27 = fParam1;
}

void func_810(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_251(uParam0, 1);
	}
	else
	{
		func_350(uParam0, 1);
	}
}

void func_811(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_251(uParam0, 512);
	}
	else
	{
		func_350(uParam0, 512);
	}
}

void func_812(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_251(uParam0, 2);
	}
	else
	{
		func_350(uParam0, 2);
	}
}

void func_813(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_251(uParam0, 8);
	}
	else
	{
		func_350(uParam0, 8);
	}
}

void func_814(int iParam0, int iParam1)
{
	func_251(&(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1), 16);
}

int func_815(int iParam0)
{
	return Local_947.f_274.f_7[iParam0 /*11*/].f_4;
}

bool func_816(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;

	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return false;
		}
	}
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return false;
	}
	if (NETWORK::NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED())
	{
		return false;
	}
	if (!func_821(iParam1))
	{
		return false;
	}
	iVar0 = func_968(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam9)
		{
			WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(iVar0, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(iParam1));
		}
		if (bParam10)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
		}
		if (bParam6)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return true;
	}
	return false;
}

void func_817(int iParam0, bool bParam1)
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

bool func_818(int iParam0)
{
	return func_177(iParam0, 32);
}

bool func_819(int iParam0)
{
	return func_177(iParam0, 64);
}

bool func_820(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_821(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_822(int iParam0)
{
	return MISC::IS_BIT_SET(Local_947.f_578.f_119, iParam0);
}

bool func_823(int iParam0)
{
	return MISC::IS_BIT_SET(Local_947.f_578.f_118, iParam0);
}

int func_824(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = iParam1 * 2;
	if (MISC::IS_BIT_SET(iParam0, iVar1))
	{
		MISC::SET_BIT(&iVar0, 0);
	}
	if (MISC::IS_BIT_SET(iParam0, iVar1 + 1))
	{
		MISC::SET_BIT(&iVar0, 1);
	}
	return iVar0;
}

var func_825(int iParam0, int iParam1, var uParam2)
{
	return uParam2;
}

int func_826(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_49.f_1[iParam0]))
	{
	}
	if (Local_13.f_49.f_5[iParam0] == 0)
	{
		return 255;
	}
	return Local_13.f_49.f_1[iParam0];
}

int func_827(int iParam0, int iParam1)
{
	if (func_969(iParam0))
	{
		return 0;
	}
	if (Local_13.f_58[iParam0 /*3*/] == iParam1)
	{
		return 1;
	}
	Local_13.f_58[iParam0 /*3*/] = iParam1;
	return 1;
}

bool func_828(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102813.f_16;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return Global_1101558[iParam0 /*38*/].f_16;
}

bool func_829(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)))
	{
		return false;
	}
	if (PLAYER::IS_PLAYER_DEAD(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0))))
	{
		return false;
	}
	return func_695(iParam1, NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)));
}

int func_830(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (bParam3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_947.f_274.f_7[iParam0 /*11*/]))
		{
			return 255;
		}
	}
	iVar1 = -1;
	bVar2 = fParam2 > 0f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
		{
		}
		else if (Local_82[iVar0 /*27*/].f_4.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam4 && !func_535(iVar0))
		{
		}
		else if (iVar1 != -1 && Local_82[iVar0 /*27*/].f_4.f_2[iParam0] > Local_82[iVar1 /*27*/].f_4.f_2[iParam0])
		{
		}
		else if (bVar2 && Local_82[iVar0 /*27*/].f_4.f_2[iParam0] > fParam2)
		{
		}
		else
		{
			Stack.Push(iVar0);
			Stack.Push(iParam0);
			Call_Loc(iParam1);
			if (!StackVal)
			{
			}
			else
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 32)
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
	}
	return 255;
}

void func_831(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 - 1250);
	iVar1 = iParam1 + 1250;
	*uParam0 = MISC::GET_RANDOM_INT_IN_RANGE(iVar0, iVar1);
}

void func_832(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 39:
			iVar0 = 1048576;
			break;
		case 20:
			iVar0 = 2097152;
			break;
		case 47:
			iVar0 = 4194304;
			break;
		case 51:
			iVar0 = 4194304;
			break;
		case 112:
			iVar0 = 2.350989E-38f;
			break;
		case 116:
			iVar0 = 9.403955E-38f;
			break;
		case 143:
			iVar0 = 1.504633E-36f;
			break;
		case 153:
			iVar0 = 3.85186E-34f;
			break;
		case 157:
			iVar0 = 2.524355E-29f;
			break;
		case 164:
			iVar0 = 8388608;
			break;
		case 55:
			iVar0 = 1.084202E-19f;
			break;
		case 43:
			iVar0 = 2f;
			break;
	}
	if (iVar0 != 0)
	{
		func_587(iVar0);
	}
}

bool func_833(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_834(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_941(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_970(iParam0, iParam1, fParam3, 1, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::CAN_PED_SEE_PED_CACHED(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false) == 1;
	}
	return PED::CAN_PED_SEE_ENTITY(iParam0, iParam1, bParam2, false) == 1;
}

struct<15> func_835(float fParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	MISC::COPY_SCRIPT_STRUCT(&(Var0.f_4), &Local_947, 5);
	Var0.f_9 = fParam0;
	Var0 = 185;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

void func_836(var uParam0)
{
	func_972(uParam0, func_971(4, 117));
}

Vector3 func_837(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

bool func_838(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!bParam4 && AUDIO::_IS_PED_IN_ANY_CONVERSATION(iParam0, true))
	{
		return false;
	}
	if (bParam4)
	{
		func_583(1, 0, 0);
	}
	if (func_973(iParam2))
	{
		if (!func_974(iParam0, func_609(iParam2), -8.9485E-06f, iParam1, 1, 0, 0, 1))
		{
			return false;
		}
	}
	else if (!func_976(&(Local_947.f_19.f_53), func_975(func_609(iParam2)), 0, -1, 0, 0))
	{
		return false;
	}
	if (!bParam3)
	{
		func_977(iParam2);
	}
	func_596(&(Local_13.f_7.f_9));
	return true;
}

bool func_839(int iParam0)
{
	if (!func_535(255))
	{
		return false;
	}
	switch (iParam0)
	{
		case 3:
			return true;
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return true;
		case 128:
			return true;
		case 129:
			return true;
		case 130:
			return true;
		default:
			break;
	}
	return false;
}

void func_840(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(iParam0, iParam1);
}

void func_841(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_923(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2))));
		ENTITY::SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

var func_842(int iParam0)
{
	return Local_947.f_274.f_7[iParam0 /*11*/].f_10;
}

void func_843(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
			AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
		}
	}
}

void func_844(int iParam0)
{
}

int func_845(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -4.965126E+35f;
		case 2:
			return 8.168326E+07f;
		case 14:
			return 1.620656E+33f;
		case 4:
			return 1.244255E+11f;
		case 5:
			return 9.428104E+32f;
		case 6:
			return -3.8492E+32f;
		case 7:
			return -4.777519E-18f;
		case 8:
			return 3.851762E+09f;
		case 9:
			return 6.790077E-13f;
		case 10:
			return joaat("NET_BEAT_TREE_MAP");
		case 11:
			return -1.157693E+32f;
		case 12:
			return -1.338171E-17f;
		case 13:
			return 4.652846E+25f;
		case 3:
			return 1.196945f;
		case 15:
			return -2.378889E+11f;
		case 16:
			return 8.906811E-29f;
		case 17:
			return 23624.72f;
		case 18:
			return 5.653363E-14f;
		case 19:
			return 8.253E+18f;
		case 20:
			return 3.013693E+08f;
		case 31:
			return -1.53937E-17f;
		case 21:
			return -1.101959E-07f;
		case 28:
			return -1.452968E+38f;
		case 25:
			return 2.671046E+27f;
		case 24:
			return -1.027782E-21f;
		case 32:
			return -6.556114E+11f;
		case 22:
			return -1.11631E-37f;
		case 29:
			return -4.074666E-33f;
		case 26:
			return -1.084153E+21f;
		case 30:
			return -3.581337E-11f;
		case 27:
			return -1.713659E-35f;
		case 33:
			return -1.560962E+29f;
		case 34:
			return -2.264373E-35f;
		case 23:
			return 1.091982E-29f;
		default:
			break;
	}
	return 0;
}

struct<2> func_846(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_847(int iParam0)
{
	if (!func_640(func_639(iParam0), &(Local_947.f_406.f_82[iParam0 /*13*/])))
	{
		MISC::CLEAR_BIT(&(Local_947.f_406.f_122), iParam0);
		return;
	}
	MISC::SET_BIT(&(Local_947.f_406.f_122), iParam0);
}

int func_848(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar0, bParam0, bParam1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					return iVar0;
				}
			}
		}
	}
	return 0;
}

void func_849()
{
	if (Local_947.f_578.f_120 < 0)
	{
		return;
	}
	func_488(func_182(Local_947.f_578.f_120), 0);
	Local_947.f_578.f_120 = -1;
	func_978(func_182(Local_947.f_578.f_120));
}

bool func_850(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_487(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (iParam1 == iVar0)
	{
		if (Local_947.f_578.f_120 != iParam0)
		{
			func_849();
			func_911(iParam0);
			Local_947.f_578.f_120 = iParam0;
			func_979(iParam0);
		}
		return true;
	}
	return false;
}

int func_851(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_548(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_549(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_549(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
	iVar4 = func_549(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] || (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

int func_852(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_548(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_549(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_549(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
	iVar4 = func_549(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] && (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

void func_853(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (func_666(&(Local_82[iParam1 /*27*/].f_10), 1, iParam0))
	{
		if (Local_82[iParam1 /*27*/].f_10.f_9[iParam0] == 0)
		{
			return;
		}
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return;
		}
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_49.f_1[iParam0]))
		{
			if (Local_13.f_49.f_1[iParam0] == iVar0)
			{
				return;
			}
		}
		if (Local_13.f_49.f_5[iParam0] == 0 || NETWORK::IS_TIME_MORE_THAN(Local_82[iParam1 /*27*/].f_10.f_9[iParam0], Local_13.f_49.f_5[iParam0]))
		{
			Local_13.f_49.f_1[iParam0] = iVar0;
			Local_13.f_49.f_5[iParam0] = Local_82[iParam1 /*27*/].f_10.f_9[iParam0];
		}
	}
}

void func_854(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar1 = 255;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Local_13.f_58[iVar0 /*3*/].f_2 != 0)
		{
		}
		else if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_58[iVar0 /*3*/].f_1))
		{
		}
		else if (!MISC::IS_BIT_SET(Local_82[iParam0 /*27*/].f_24, iVar0))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0));
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				Jump @155; //curOff = 109
			}
			else
			{
				Local_13.f_58[iVar0 /*3*/].f_1 = iVar1;
				func_122(&(Local_13.f_58.f_10), iVar0, func_824(Local_82[iParam0 /*27*/].f_24.f_1, iVar0));
			}
		}
		iVar0++;
	}
}

void func_855(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_907() - fParam1);
	func_980(uParam0, 1);
	func_981(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_856(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_857(var uParam0)
{
	if (!func_654(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_982(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_907() - uParam0->f_1);
}

void func_858(int iParam0)
{
	int iVar0;

	if (!func_230(&iVar0))
	{
		return;
	}
	func_668(&(Local_82[iVar0 /*27*/].f_10), 3, iParam0);
}

void func_859(int iParam0)
{
	int iVar0;
	int iVar1;

	if (0 == iParam0)
	{
		if (func_606(8192))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, false, 0, false))
			{
				if (iVar0 == 3.594275E+35f || iVar0 == -2.676379E+14f)
				{
					func_983(iParam0);
					func_984(iParam0);
					iVar1 = func_191(iParam0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar1);
					}
				}
			}
		}
	}
}

bool func_860(int iParam0)
{
	return func_666(&(Local_947.f_406.f_78), 7, iParam0);
}

bool func_861(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_6)
	{
		func_864(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_13 = fParam3;
	}
	else
	{
		uParam1->f_13 = BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1940186.f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1940186.f_24 || Global_1940186.f_25)
		{
			if (!uParam1->f_2 & 2 != 0)
			{
				if (func_877(uParam1, 4000))
				{
					if ((func_878(iParam0, Global_1940186.f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_879(uParam1, iParam0)) && func_880(uParam1, iParam0))
					{
						func_882();
						*uParam2 = 2;
						func_866(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 2 != 0)
		{
			if (uParam1->f_13 < 4f)
			{
				if (func_877(uParam1, 4000))
				{
					if ((func_878(iParam0, Global_1940186.f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_879(uParam1, iParam0)) && func_880(uParam1, iParam0))
					{
						func_882();
						*uParam2 = 2;
						func_866(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			else if (Global_1940186.f_35 != 0)
			{
				if (Global_1940186.f_34 == 0)
				{
					if (func_881(iParam0, Global_1940186.f_35))
					{
						func_882();
						*uParam2 = 2;
						func_866(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			if (Global_1940186.f_36 != 0)
			{
				if (func_885())
				{
					if (func_881(iParam0, Global_1940186.f_36))
					{
						func_882();
						*uParam2 = 2;
						func_866(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (Global_1940186.f_19)
		{
			if (func_871(uParam1, 1f))
			{
				if (!uParam1->f_2 & 4 != 0)
				{
					if (func_872(Global_33, iParam0, uParam1))
					{
						func_882();
						*uParam2 = 4;
						func_866(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_2 & 256 != 0)
				{
					if (func_873(Global_33, iParam0, uParam1))
					{
						func_882();
						*uParam2 = 256;
						func_866(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 131072 != 0)
		{
			if (func_985(iParam0, uParam1))
			{
				func_882();
				*uParam2 = 131072;
				func_866(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_986(iParam0, uParam1))
			{
				func_882();
				*uParam2 = 262144;
				func_866(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

int func_862(int iParam0)
{
	return iParam0;
}

bool func_863(int iParam0)
{
	if (iParam0 == 255)
	{
		return false;
	}
	return NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iParam0);
}

void func_864(var uParam0, bool bParam1, int iParam2)
{
	func_987(iParam2);
	if (Global_1572887.f_14 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		{
			return;
		}
		if (Global_1940186.f_6)
		{
			return;
		}
	}
	else
	{
		if (!Global_1295619.f_6)
		{
			return;
		}
		if (Global_1295619.f_7)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_11 = 0;
	}
	uParam0->f_6 = iParam2;
	if (Global_1572887.f_14 == -1)
	{
		uParam0->f_14 = Global_1940186.f_38;
	}
	else
	{
		uParam0->f_14 = func_988(0);
	}
	switch (uParam0->f_7)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!(*uParam0 && 9.403955E-38f) != 0)
				{
					if (uParam0->f_14 == -7.135455E-16f)
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_33))
						{
							func_251(uParam0, 9.403955E-38f);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_989(1, 1))
						{
							func_251(uParam0, 9.403955E-38f);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_33) && (!func_989(1, 1) || *uParam0 & 8192 != 0))
				{
					func_350(uParam0, 9.403955E-38f);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_2 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
		{
			if (func_990(uParam0))
			{
				uParam0->f_16 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else if (uParam0->f_16 != 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(uParam0->f_16, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_15))
				{
					uParam0->f_15 = 0;
					uParam0->f_16 = 0;
				}
			}
		}
	}
	uParam0->f_7++;
	if (uParam0->f_7 >= 4)
	{
		uParam0->f_7 = 0;
		uParam0->f_8++;
		if (uParam0->f_8 > 4)
		{
			uParam0->f_8 = 0;
		}
	}
	func_991(uParam0);
}

bool func_865(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_EVENT_GET_RECENT_EVENT(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case joaat("EVENT_ACQUAINTANCE_PED_DEAD"):
		case joaat("EVENT_PED_SEEN_DEAD_PED"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("EVENT_DEAD_PED_FOUND"):
			iVar1 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return false;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return false;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1940186.f_27)
			{
				return false;
			}
			if (iVar2 == Global_1940186.f_26)
			{
				return false;
			}
			if (!func_992(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_993(iParam0, iVar2) <= func_994(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_866(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_903(iParam2, 1, 1, 1, 0))
	{
		func_251(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_995(uParam1, 1);
	func_996();
}

bool func_867(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1118437376; /* Float: 85f */
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_997(iParam0, !(*uParam1 && 2.524355E-29f) != 0, !(*uParam1 && 1.084202E-19f) != 0, !(*uParam1 && 2f) != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				iVar0 = 1119748096; /* Float: 95f */
			}
			else if (uParam1->f_13 < 1097859072)
			{
				iVar0 = 1119092736; /* Float: 90f */
			}
			fVar1 = func_998(uParam1);
			if (func_999(uParam1, iParam0, iVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_3);
				iVar3 = func_1000(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_995(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 1080033280)
					{
						if (iVar2 > func_1001(uParam1))
						{
							func_995(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_868(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	iVar0 = 1118437376; /* Float: 85f */
	if (func_1002(iParam1, !(*uParam2 && 2.524355E-29f) != 0, !(*uParam2 && 1.084202E-19f) != 0, !(*uParam2 && 2f) != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			iVar0 = 1119748096; /* Float: 95f */
		}
		else if (uParam2->f_13 < 1097859072)
		{
			iVar0 = 1119092736; /* Float: 90f */
		}
		fVar1 = func_998(uParam2);
		if (func_999(uParam2, iParam0, iVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_3 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_3) > func_1000(uParam2)
				{
					func_995(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_869(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return false;
	}
	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	if (Global_1940186.f_34 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1940186.f_34, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_992(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_4) > func_1000(uParam1)
		{
			fVar3 = func_998(uParam1);
			if (uParam1->f_13 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_33, -1f, fVar3, -1f, -1f) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_870(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_1003(bParam1, bParam2, bParam3);
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

bool func_871(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_884();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1148846080))
	{
		return true;
	}
	return false;
}

bool func_872(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_1004(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1940186.f_40) || Global_1940186.f_40 == -3.273909E-18f)
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1940186.f_40) && WEAPON::_0xEA522F991E120D45(Global_1940186.f_40))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1940186.f_40) || Global_1940186.f_40 == -3.273909E-18f) || (WEAPON::IS_WEAPON_VALID(Global_1940186.f_40) && WEAPON::_IS_WEAPON_SILENT(Global_1940186.f_40)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= fVar2)
		{
			if (func_880(uParam2, iParam1))
			{
				func_995(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_873(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_13 < IntToFloat(func_901(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1940186.f_40) && !WEAPON::_IS_WEAPON_SILENT(Global_1940186.f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_33, &uVar0))
		{
			if (func_880(uParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1f)
				{
					func_995(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_874(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_1005(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(3.742873E-31f, vVar0, uParam2->f_24))
				{
					func_995(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(0.0001224924f, vVar0, uParam2->f_30))
				{
					func_995(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-14195.47f, vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, -7.135455E-16f, uParam2->f_29, &vVar4, false, false);
					if (func_1006(iParam1, vVar0, vVar4))
					{
						func_995(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(3.742873E-31f, vVar0, uParam2->f_24))
				{
					func_995(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-14195.47f, vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, -7.135455E-16f, uParam2->f_29, &vVar7, false, false);
					if (func_1006(iParam1, vVar0, vVar7))
					{
						func_995(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-2.836409E+16f, vVar0, 15f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-3.67506E+12f, vVar0, 15f))
	{
		return true;
	}
	return false;
}

bool func_875(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1940186.f_33)
	{
		if (!func_992(iParam0, uParam1, Global_1940186.f_28[iVar0]) || iParam0 == Global_1940186.f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_1007(Global_1940186.f_28[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false), vVar9);
			if (func_833(Global_1940186.f_28[iVar0]))
			{
				if (fVar1 < 1108082688)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1940186.f_28[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1940186.f_28[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						uParam1->f_11 = iParam0;
						return true;
					}
				}
			}
			if (func_1008(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_1009(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_1010(uParam1, iParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_876(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_EVENT_GET_RECENT_EVENT(*iParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_877(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_884();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_878(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true, true) || DECORATOR::DECOR_EXIST_ON(iParam0, "DamagedByPlayer"))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, true, true))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), true, true))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_1011(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_1012(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_GET_PED_GRAPPLER(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::GET_PED_IS_GRAPPLING(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_879(var uParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_6))
		{
		}
	}
	else if (uParam0->f_6 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_880(var uParam0, int iParam1)
{
	if (func_1013(uParam0))
	{
		return true;
	}
	if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(iParam1, 400))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_33) != 0)
	{
		return true;
	}
	if (WEAPON::_IS_TARGET_PED_CONSTRAINED_BY_PED_USING_BOLAS(Global_33, iParam1))
	{
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return true;
	}
	return false;
}

bool func_881(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
		{
			return true;
		}
		if (func_1014(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_882()
{
}

bool func_883(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_33);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_1015(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_884();
			return true;
		}
		else if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_1016(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_10 = func_884();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

int func_884()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_885()
{
	if (Global_1940186.f_36 == 0)
	{
		return false;
	}
	if (Global_1940186.f_36 == Global_1940186.f_34)
	{
		return false;
	}
	if (Global_1940186.f_37 <= 0)
	{
		return false;
	}
	if ((func_884() - Global_1940186.f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_886(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = func_994(uParam0);
	if (uParam0->f_13 > func_808(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_1017(iParam1);
	iVar1 = func_1018(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || PED::CAN_PED_SEE_PED_CACHED(iParam1, Global_33, false) == 1) || PED::CAN_PED_SEE_PED_CACHED(iParam1, uParam0->f_15, false) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_887(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;

	if (!Global_1940186.f_50)
	{
		return false;
	}
	if (!uParam0->f_1 & 1 != 0)
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (func_682(iVar0, iParam1, 0.707f) != 0)
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar7 = func_1019(vVar1, vVar4);
	fVar8 = MISC::ABSF((vVar1.z - vVar4.z));
	if (fVar8 >= 2f)
	{
		return false;
	}
	if (fVar7 > uParam0->f_31)
	{
		return false;
	}
	return true;
}

int func_888(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_13 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_1020(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_889(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if ((*uParam1 && 1.504633E-36f) != 0)
	{
		return true;
	}
	if (Global_1940186.f_18)
	{
		return true;
	}
	if ((*uParam1 && 9.403955E-38f) != 0)
	{
		if (func_1021(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_33, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17)) && PED::CAN_PED_SEE_ENTITY(iParam0, Global_33, true, false) == 1)
		{
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_33);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true)) || Global_1940186.f_24)
	{
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_33, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!func_677(iParam0))
	{
		return false;
	}
	iVar1 = EVENT::_EVENT_GET_RECENT_EVENT(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case joaat("EVENT_SHOCKING_SEEN_PED_ROBBED"):
		case joaat("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("EVENT_SHOCKING_MOUNT_STOLEN"):
			if (func_1022(uParam1))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar2 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_33)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			return true;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_33, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17))
				{
					if (!func_1023(uParam1, iParam0))
					{
						if (func_1016(iVar4, Global_34, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
		case joaat("EVENT_SHOCKING_SEEN_MELEE_ACTION"):
			iVar2 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (!PED::IS_PED_A_PLAYER(iVar4) || !PED::IS_PED_A_PLAYER(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, iVar4, -1f, -1f, -1f, -1f) || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, iVar5, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar5, 17))
				{
					return true;
				}
			}
			EVENT::_0x1A5C5D350068A673(iParam0, 0);
			return false;
	}
	return false;
}

bool func_890(int iParam0, var uParam1)
{
	if (!func_1024(0))
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_33, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_891(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_884();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_892(int iParam0, var uParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

int func_893(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_884();
	}
	else if (func_884() - uParam1->f_5) > func_1025(uParam1)
	{
		return func_1026(iParam0, uParam1, 0, -1f);
	}
	return 0;
}

bool func_894(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_33 == iVar1 || Global_1940186.f_34 == iVar1)
	{
		return true;
	}
	return false;
}

int func_895(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_1027(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_1028(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_896(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (func_189(Local_947.f_406.f_2, 4))
	{
		return false;
	}
	if (!MISC::IS_BIT_SET(Local_947.f_406.f_65, iParam0))
	{
		return false;
	}
	MISC::CLEAR_BIT(&(Local_947.f_406.f_65), iParam0);
	if (!bParam3 && Local_82[iParam2 /*27*/].f_10.f_4 == 0)
	{
		return false;
	}
	if (!bParam3 && NETWORK::GET_TIME_DIFFERENCE(Local_82[iParam2 /*27*/].f_10.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 750)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_OCCLUDED(*iParam1))
	{
		return false;
	}
	if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), *iParam1, 17))
	{
		return false;
	}
	iVar0 = func_1029(PLAYER::PLAYER_PED_ID(), 0, 1, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0) || !((WEAPON::IS_WEAPON_A_GUN(iVar0) || func_1030(iVar0)) || WEAPON::_IS_WEAPON_THROWABLE(iVar0)))
	{
		return false;
	}
	if (WEAPON::_GET_MAX_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID()) < iParam1->f_2)
	{
		return false;
	}
	return true;
}

void func_897(int* iParam0, var uParam1)
{
	GRAPHICS::GET_SCREEN_RESOLUTION(iParam0, &(iParam0->f_1));
	*iParam0 = (*iParam0 / 2);
	iParam0->f_1 = (iParam0->f_1 / 2);
	iParam0->f_2 = uParam1;
}

Vector3 func_898(int iParam0)
{
	return iParam0->f_6, iParam0->f_7, iParam0->f_8;
}

int func_899(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	vector3 vVar25;
	vector3 vVar28;
	vector3 vVar31;
	int iVar34;
	int iVar35;
	vector3 vVar36;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	int iVar45;
	int iVar46;

	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = 0;
	uParam1->f_3 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return 0;
	}
	MISC::GET_MODEL_DIMENSIONS(iVar0, &vVar1, &vVar4);
	vVar7 = { vVar4 - vVar1 * Vector(1056964608, 1056964608, 1056964608) };
	if (bParam8)
	{
		vVar7.x = ((func_1031(iParam0) * 1056964608) + vParam5.x);
		vVar7.f_1 = ((func_1032(iParam0) * 1056964608) + vParam5.y);
		vVar7.f_2 = ((func_1033(iParam0) * 1056964608) + vParam5.z);
	}
	vVar10 = { func_573(func_1034(CAM::GET_RENDERING_CAM())) };
	vVar13 = { func_1035(vVar10, 0f, 0f, 1f) };
	vVar16 = { func_1035(vVar13, vVar10) };
	vVar19 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + vParam2 };
	vVar22 = { vVar19 - vVar7 * vVar13 + vVar7 * vVar16 };
	vVar25 = { vVar19 + vVar7 * vVar13 + vVar7 * vVar16 };
	vVar28 = { vVar19 - vVar7 * vVar13 - vVar7 * vVar16 };
	vVar31 = { vVar19 + vVar7 * vVar13 - vVar7 * vVar16 };
	GRAPHICS::GET_SCREEN_RESOLUTION(&iVar34, &iVar35);
	vVar36 = { BUILTIN::TO_FLOAT(iVar34), BUILTIN::TO_FLOAT(iVar35), 0f };
	bVar39 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar19, &vVar19, &(vVar19.f_1));
	bVar40 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar22, &vVar22, &(vVar22.f_1));
	bVar41 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar25, &vVar25, &(vVar25.f_1));
	bVar42 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar28, &vVar28, &(vVar28.f_1));
	bVar43 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar31, &vVar31, &(vVar31.f_1));
	bVar44 = (((bVar40 || bVar41) || bVar42) || bVar43);
	if (bVar39)
	{
		vVar19 = { vVar19 * vVar36 };
	}
	if (bVar40)
	{
		vVar22 = { vVar22 * vVar36 };
	}
	if (bVar41)
	{
		vVar25 = { vVar25 * vVar36 };
	}
	if (bVar42)
	{
		vVar28 = { vVar28 * vVar36 };
	}
	if (bVar43)
	{
		vVar31 = { vVar31 * vVar36 };
	}
	iVar45 = (iParam9 / 2);
	iVar46 = (iParam10 / 2);
	if (!bVar39 && !bVar44)
	{
		return 0;
	}
	else if (bVar39 && !bVar44)
	{
		*uParam1 = 0;
		uParam1->f_1 = 0;
		uParam1->f_2 = iVar34;
		uParam1->f_3 = iVar35;
	}
	else if (!bVar44)
	{
		return 0;
	}
	else if (bVar40)
	{
		if (!bVar41)
		{
			uParam1->f_2 = (iParam9 + (iVar34 - BUILTIN::FLOOR(vVar22.x)));
		}
		else
		{
			uParam1->f_2 = (iParam9 + BUILTIN::FLOOR((func_1036((!bVar43 || vVar25.x < vVar31.x), vVar25.x, vVar31.x) - vVar22.x)));
		}
		if (uParam1->f_2 < 1)
		{
			uParam1->f_2 = 0;
			return 0;
		}
		if (bVar42)
		{
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_1036((!bVar43 || vVar28.y > vVar31.y), vVar28.y, vVar31.y) - vVar22.y)));
		}
		else
		{
			uParam1->f_3 = (iParam10 + (iVar35 - BUILTIN::FLOOR(vVar22.y)));
		}
		if (uParam1->f_3 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
		*uParam1 = (BUILTIN::FLOOR(vVar22.x) - iVar45);
		uParam1->f_1 = (BUILTIN::FLOOR(vVar22.y) - iVar46);
	}
	else if (bVar41)
	{
		if (bVar43)
		{
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_1036(vVar28.y > vVar31.y, vVar28.y, vVar31.y) - vVar25.y)));
		}
		else
		{
			uParam1->f_3 = (iParam10 + (iVar35 - BUILTIN::FLOOR(vVar25.y)));
		}
		if (uParam1->f_3 < 1)
		{
			uParam1->f_3 = 0;
			return 0;
		}
		uParam1->f_2 = (iParam9 + BUILTIN::FLOOR(func_1036((!bVar43 || vVar25.x > vVar31.x), vVar25.x, vVar31.x)));
		if (uParam1->f_2 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
		*uParam1 = 0;
		uParam1->f_1 = (BUILTIN::FLOOR(vVar25.y) - iVar46);
	}
	else if (bVar42)
	{
		if (bVar43)
		{
			uParam1->f_2 = (iParam9 + BUILTIN::FLOOR((vVar31.x - vVar28.x)));
			if (uParam1->f_2 < 1)
			{
				uParam1->f_2 = 0;
				return 0;
			}
		}
		else
		{
			uParam1->f_2 = (iParam9 + (iVar34 - BUILTIN::FLOOR(vVar28.x)));
			if (uParam1->f_2 < 1)
			{
				uParam1->f_2 = 0;
				return 0;
			}
		}
		uParam1->f_3 = (iParam10 + BUILTIN::FLOOR(vVar28.y));
		if (uParam1->f_3 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
		*uParam1 = (BUILTIN::FLOOR(vVar28.x) - iVar45);
		uParam1->f_1 = 0;
	}
	else if (bVar43)
	{
		*uParam1 = 0;
		uParam1->f_1 = 0;
		uParam1->f_2 = (iParam9 + BUILTIN::FLOOR(vVar31.x));
		uParam1->f_3 = (iParam10 + BUILTIN::FLOOR(vVar28.y));
		if (uParam1->f_2 < 1 || uParam1->f_3 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_900(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = (uParam1->f_2 / 2);
	iVar1 = (uParam1->f_3 / 2);
	iVar2 = (*uParam1 + iVar0);
	iVar3 = (uParam1->f_1 + iVar1);
	iVar4 = MISC::ABSI((*iParam0 - iVar2));
	iVar5 = MISC::ABSI((iParam0->f_1 - iVar3));
	if (iVar4 > (iVar0 + iParam0->f_2) || iVar5 > (iVar1 + iParam0->f_2))
	{
		return 0;
	}
	if (iVar4 <= iVar0 || iVar5 <= iVar1)
	{
		return 1;
	}
	iVar6 = (iVar4 - iVar0);
	iVar7 = (iVar5 - iVar1);
	iVar6 = (iVar6 * iVar6);
	iVar7 = (iVar7 * iVar7);
	if (iVar6 + iVar7) <= (iParam0->f_2 * iParam0->f_2)
	{
		return 1;
	}
	return 0;
}

int func_901(var uParam0)
{
	return uParam0->f_23;
}

void func_902(bool bParam0)
{
	int iVar0;

	if (!func_134(64, 255))
	{
		iVar0 = func_493(Local_947.f_1, Local_947.f_2);
		func_927(iVar0);
		if (!func_134(1024, 255))
		{
			func_151(1024);
		}
		func_928(iVar0);
		if (bParam0)
		{
			func_958(Local_947.f_1, Local_947.f_4);
		}
		func_151(64);
	}
}

bool func_903(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

float func_904(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_905(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
	{
		return false;
	}
	return true;
}

bool func_906(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_905(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_907() - 1017370378);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

float func_907()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

bool func_908(int iParam0)
{
	if (func_486(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_909(var uParam0, var uParam1)
{
}

void func_910(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_487(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!func_1037(iParam0))
	{
		func_183(iParam0, 0);
		return;
	}
	else if (func_486(iParam0, 8))
	{
		func_183(iParam0, 0);
	}
	bVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_837(PLAYER::PLAYER_ID())) <= Local_947.f_578[iParam0 /*39*/].f_2;
	if (bVar1 != func_486(iParam0, 1))
	{
		func_183(iParam0, 0);
		if (bVar1)
		{
			if (!MISC::REGISTER_INTERACTION_LOCKON_PROMPT(iVar0, Local_947.f_578[iParam0 /*39*/].f_3, Local_947.f_578[iParam0 /*39*/].f_2, 0f, Local_947.f_578[iParam0 /*39*/].f_4, 0f, 0f, 0, false, 3))
			{
			}
			else
			{
				if (func_804(iParam0))
				{
					func_911(iParam0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(Local_947.f_578[iParam0 /*39*/].f_3))
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iVar0, MISC::GET_HASH_KEY(Local_947.f_578[iParam0 /*39*/].f_3));
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_PED_CONFIG_FLAG(iVar0, 130, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 178, false);
					PED::SET_PED_CONFIG_FLAG(iVar0, 297, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 315, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 301, false);
				}
				func_637(iParam0, 1);
			}
		}
	}
}

void func_911(int iParam0)
{
	int iVar0;

	if (func_908(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_913(iParam0, iVar0, 1);
		iVar0++;
	}
	func_637(iParam0, 2);
}

bool func_912(int iParam0, int iParam1, int iParam2)
{
	return func_189(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1, iParam2);
}

void func_913(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam2)
	{
		func_787(&(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/]), 1, 1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2))
	{
		return;
	}
	if (Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_3 == 0)
	{
	}
	iVar0 = func_487(iParam0);
	iVar1 = func_1038(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2, Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_3, iVar0, Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_4, Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_5, 0, 0, Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_6, 1.6f, 570, 4000, 10, 2f, 0, 8.750548E+22f, 0, 0);
	iVar2 = func_959(iVar1);
	func_1039(iVar1, 18, 0, 1);
	func_1039(iVar1, 17, 0, 1);
	HUD::_UI_PROMPT_SET_GROUP(Global_1951897[iVar2 /*23*/].f_3, HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iVar0), 0);
	if (func_912(iParam0, iParam1, 2))
	{
		func_1040(iVar1, Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2, Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_7, 1);
	}
	if (!func_912(iParam0, iParam1, 1))
	{
		if (func_912(iParam0, iParam1, 4))
		{
			if (func_914() < Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_7)
			{
				if (func_915(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/], 0))
				{
					func_807(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/], 0, 1, 1);
				}
			}
			else if (!func_915(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/], 0))
			{
				func_807(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/], 1, 1, 1);
			}
		}
	}
	else
	{
		func_807(iVar1, 0, 1, 1);
	}
	func_806(iParam0, iParam1, 16);
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/] = iVar1;
}

int func_914()
{
	if (func_28() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_915(int iParam0, bool bParam1)
{
	if (bParam1 && !func_786(iParam0))
	{
		return false;
	}
	return !func_1041(iParam0, 4);
}

bool func_916(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_786(iParam0))
	{
		return false;
	}
	iVar0 = func_959(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_917(int iParam0, int iParam1, int iParam2)
{
	return true;
}

void func_918(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_191(iParam0);
	switch (func_536(func_231(iParam0)))
	{
		case 1:
			if (func_1042(iParam0) == PLAYER::PLAYER_ID())
			{
				switch (iParam1)
				{
					case 0:
						func_1043(0, 1);
						func_482(4096);
						func_482(1);
						func_726(1);
						func_1044();
						func_1045(0, 0, -2.077572E+09f, 1, 1, 0, 0);
						break;
					case 1:
						func_1043(0, 1);
						func_482(2);
						func_726(2);
						func_482(8192);
						func_1044();
						func_1045(0, 0, -2.573254E+15f, 1, 1, 0, 0);
						break;
				}
			}
			break;
		case 2:
			if (func_1042(iParam0) == PLAYER::PLAYER_ID())
			{
				switch (iParam1)
				{
					case 0:
						func_1043(0, 1);
						func_482(4096);
						func_482(1);
						func_726(1);
						func_1044();
						func_1045(0, 0, -2.077572E+09f, 1, 1, 0, 0);
						break;
					case 1:
						func_1043(0, 1);
						func_482(4);
						func_726(2);
						func_482(8192);
						func_1044();
						func_1045(0, 0, -2.573254E+15f, 1, 1, 0, 0);
						break;
				}
			}
			break;
		case 3:
			if (func_1042(iParam0) == PLAYER::PLAYER_ID())
			{
				switch (iParam1)
				{
					case 0:
						func_1043(0, 1);
						func_482(4096);
						func_482(8);
						func_1044();
						func_1045(0, 0, -2.573254E+15f, 1, 1, 0, 0);
						break;
					case 1:
						func_1043(0, 1);
						func_482(4096);
						func_121(262144);
						func_482(16);
						func_1044();
						func_974(PLAYER::PLAYER_PED_ID(), "SILENT_PLAYER_MOVE_BACK", 1.818904E-28f, iVar0, 1, 0, 0, 1);
						break;
				}
			}
			break;
	}
}

bool func_919(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;

	if (bParam3)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return false;
		}
	}
	iVar0 = iParam0;
	if (Global_1297553[iVar0 /*87*/].f_1 == -1)
	{
		return false;
	}
	*uParam1 = Global_1297553[iVar0 /*87*/].f_1;
	*uParam2 = Global_1297553[iVar0 /*87*/].f_3;
	return true;
}

float func_920()
{
	switch (func_242())
	{
		case 3:
			return 1098907648 /* Float: 16f */;
		case 4:
			return 1098907648 /* Float: 16f */;
		case 5:
			return 1098907648 /* Float: 16f */;
		case 6:
			return 1098907648 /* Float: 16f */;
		case 7:
			return 1098907648 /* Float: 16f */;
		default:
			break;
	}
	return 1098907648 /* Float: 16f */;
}

float func_921()
{
	switch (func_242())
	{
		case 3:
			return 1103626240 /* Float: 25f */;
		case 4:
			return 1103626240 /* Float: 25f */;
		case 5:
			return 1103626240 /* Float: 25f */;
		case 6:
			return 1103626240 /* Float: 25f */;
		case 7:
			return 1103626240 /* Float: 25f */;
		default:
			break;
	}
	return 1103626240 /* Float: 25f */;
}

bool func_922(int iParam0)
{
	return func_252(Global_1300338, iParam0);
}

float func_923(float fParam0, float fParam1, float fParam2)
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

Vector3 func_924(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;

	vVar0 = { func_573(vParam0) };
	vVar3 = { func_1035(func_1035(vVar0, func_573(vParam3)), vVar0) };
	fVar6 = MISC::ATAN2(vVar0.y, vVar0.x);
	fVar7 = -MISC::ATAN2(vVar0.z, BUILTIN::SQRT(((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y))));
	vVar8 = { -vVar0.y, vVar0.x, 0f };
	vVar11 = { func_1035(vVar8, vVar0) };
	fVar14 = (MISC::ATAN2((func_904(vVar8, vVar3) / BUILTIN::VMAG(vVar8)), (func_904(vVar11, vVar3) / BUILTIN::VMAG(vVar11))) + 1127481344);
	return fVar14, fVar7, fVar6;
}

void func_925(int iParam0, int iParam1)
{
	struct<29> Var0;
	struct<2> Var31;
	int iVar33;

	Var0.f_10 = 30f;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_32(&Var0, iParam0, -1, -1, 255);
	Var31 = { func_643(iParam0, 1.309684E+10f) };
	if (!STATS::STAT_ID_GET_INT(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar33, iParam1);
	if (!func_124(&Var0, 4) && func_1046(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var31, iVar33, true))
	{
	}
	Global_1257494[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_58[iParam0] = iVar33;
}

void func_926(int iParam0)
{
	func_1047(iParam0);
}

void func_927(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;
	int iVar33;
	struct<2> Var34;
	int iVar36;
	struct<2> Var37;

	if (func_131(Global_1260791[iParam0 /*4*/]))
	{
		return;
	}
	func_1048(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 30f;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_32(&Var2, iVar0, iVar1, -1, 255);
	func_132(&(Global_1260791[iParam0 /*4*/]));
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_794(2.053409E-33f) };
		STATS::STAT_ID_SET_INT(&Var34, iVar33, true);
		Var34 = { func_794(3.713784E-31f) };
		STATS::STAT_ID_SET_INT(&Var34, Global_1295619.f_16, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_794(5.118777E-05f) };
		STATS::STAT_ID_SET_INT(&Var37, iVar36, true);
		Var37 = { func_794(5.331718E-07f) };
		STATS::STAT_ID_SET_INT(&Var37, Global_1295619.f_16, true);
	}
}

void func_928(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_793(&Var0);
}

void func_929(struct<2> Param0)
{
	struct<32> Var0;

	if (func_491(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_491(Param0)))
	{
	}
	else
	{
		STATS::STATSTRACKER_DEED_STARTED(func_491(Param0), Global_265213.f_122484.f_80.f_12);
		if (func_1049(Param0, &Var0))
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

void func_930(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_643(iParam0, -2.211749E-26f) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
}

void func_931(int iParam0, int iParam1, int iParam2)
{
	struct<29> Var0;
	int iVar31;

	Var0.f_10 = 30f;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	iVar31 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar31 > -1 && iVar31 < 32)
	{
		func_32(&Var0, iParam0, iParam1, iParam2, 255);
		if (Var0.f_7 < 5 && Var0.f_7 >= 0)
		{
			Global_1257494[iVar31 /*103*/].f_97[Var0.f_7] = 0;
		}
	}
}

bool func_932(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return true;
		default:
			break;
	}
	return false;
}

int func_933(bool bParam0, float fParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102813.f_16)
	{
		return 0;
	}
	if (!func_1050())
	{
		return 0;
	}
	if (!func_18())
	{
		return 0;
	}
	Global_0 = fParam1;
	if (bParam0)
	{
		func_1051(&Global_0, 8);
	}
	func_1051(&Global_0, 1);
	return 1;
}

void func_934(int iParam0, int iParam1)
{
	if (!func_535(255))
	{
		func_723(iParam0);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_947.f_19.f_3[iParam0 /*2*/]))
	{
		Local_947.f_19.f_3[iParam0 /*2*/] = MAP::BLIP_ADD_FOR_ENTITY(-4.450028E+35f, func_191(0));
		switch (func_242())
		{
			case 0:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				if (func_246() == 2)
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_947.f_19.f_3[iParam0 /*2*/], "NB_PHOTOGRAPHY_BLIP_NAME_DS");
				}
				else
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_947.f_19.f_3[iParam0 /*2*/], "NB_PHOTOGRAPHY_BLIP_NAME_TS");
				}
				break;
			case 1:
			case 2:
			case 8:
			case 9:
			case 10:
			case 11:
				if (func_246() == 2)
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_947.f_19.f_3[iParam0 /*2*/], "NB_PHOTOGRAPHY_BLIP_NAME_DS");
				}
				else
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_947.f_19.f_3[iParam0 /*2*/], "NB_PHOTOGRAPHY_BLIP_NAME_FS");
				}
				break;
			default:
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_947.f_19.f_3[iParam0 /*2*/], "NB_PHOTOGRAPHY_BLIP_NAME_TS");
				break;
		}
	}
	if (iParam1 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(Local_947.f_19.f_3[iParam0 /*2*/], 3.959886E-05f);
	}
}

void func_935(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_191(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_947.f_19.f_157))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return;
		}
		if (Local_947.f_19.f_157 != iParam0)
		{
			Local_947.f_19.f_157 = iParam0;
		}
		func_1052(&(Local_947.f_19.f_221), PLAYER::GET_PLAYER_PED(Local_947.f_19.f_157), 0, iParam1, 2, 1, 2, 1, 0, 0, 0, 0);
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iVar1, &(Local_947.f_19.f_221));
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return;
		}
		Local_947.f_19.f_157 = iParam0;
		func_1052(&(Local_947.f_19.f_221), PLAYER::GET_PLAYER_PED(Local_947.f_19.f_157), 0, iParam1, 2, 1, 2, 1, 0, 0, 0, 0);
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iVar1, &(Local_947.f_19.f_221));
	}
}

char* func_936(int iParam0)
{
	switch (func_242())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "WORLD_HUMAN_WAITING_IMPATIENT_MALE_D";
				case 1:
					return "WORLD_HUMAN_STAND_WAITING_MALE_B";
				case 2:
					return "WORLD_HUMAN_STERNGUY_IDLES_MALE_A";
				case 3:
					return "AMB_CAMP_WORLD_CAMP_FIRE_SIT_GROUND_MALE_A";
				default:
					break;
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			switch (func_246())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return "WORLD_HUMAN_CROUCH_INSPECT_FEMALE_A";
						case 1:
							return "WORLD_HUMAN_STAND_WAITING_FEMALE_A";
						case 2:
							return "WORLD_HUMAN_WAITING_IMPATIENT_FEMALE_A";
						case 3:
							return "WORLD_CAMP_FIRE_SIT_GROUND_FEMALE_A";
						case 4:
							return "";
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return "WORLD_HUMAN_CROUCH_INSPECT_MALE_C";
						case 1:
							return "WORLD_HUMAN_STAND_WAITING_MALE_B";
						case 2:
							return "WORLD_HUMAN_STERNGUY_IDLES_MALE_A";
						case 3:
							return "AMB_CAMP_WORLD_CAMP_FIRE_SIT_GROUND_MALE_A";
						case 4:
							return "";
						default:
							break;
					}
					break;
			}
			break;
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			switch (iParam0)
			{
				case 0:
					return "WORLD_HUMAN_WAITING_IMPATIENT_FEMALE_A";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_937(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = func_191(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
	{
		return;
	}
	if (Local_947.f_19.f_156 == iParam0 && func_349(iVar1, -2.703646E+07f))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_947.f_19.f_156))
	{
		if ((Local_947.f_19.f_160 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_947.f_19.f_160, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 3000) || !func_349(iVar1, -2.703646E+07f))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				return;
			}
			if (iParam1 != -1)
			{
				if (func_603(Local_13.f_7.f_11, Local_13.f_7.f_16))
				{
					func_482(524288);
					Local_947.f_19.f_156 = iParam0;
					Local_947.f_19.f_160 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					sVar2 = func_1053(iParam1);
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar1, func_357(iParam1), func_624(iParam1), PLAYER::GET_PLAYER_PED(Local_947.f_19.f_156), -1, 4f, -2f, 8, 0f, false, false, -1f, sVar2, 0, -1f);
				}
				else if (Local_947.f_19.f_156 != iParam0)
				{
					Local_947.f_19.f_156 = iParam0;
					Local_947.f_19.f_160 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, PLAYER::GET_PLAYER_PED(Local_947.f_19.f_156), -1, -1f, -1f, -1f);
				}
			}
			else
			{
				Local_947.f_19.f_156 = iParam0;
				Local_947.f_19.f_160 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, PLAYER::GET_PLAYER_PED(Local_947.f_19.f_156), -1, -1f, -1f, -1f);
			}
		}
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return;
		}
		Local_947.f_19.f_156 = iParam0;
		Local_947.f_19.f_160 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		if (iParam1 != -1)
		{
			func_482(524288);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar1, func_357(iParam1), func_624(iParam1), PLAYER::GET_PLAYER_PED(Local_947.f_19.f_156), -1, 4f, -2f, 8, 0f, false, false, -1f, 0, 0, -1f);
		}
		else
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, PLAYER::GET_PLAYER_PED(Local_947.f_19.f_156), -1, -1f, -1f, -1f);
		}
	}
}

bool func_938(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_643(iParam1, 8.746343E-07f) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return false;
	}
	return MISC::IS_BIT_SET(iVar2, iParam0);
}

int func_939(int iParam0)
{
	return iParam0 + 8;
}

int func_940(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || PED::IS_PED_DEAD_OR_DYING(iParam0, true))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 1045220557; /* Float: 0.2f */
	iVar2 = 1061997773; /* Float: 0.8f */
	iVar3 = 1036831949; /* Float: 0.1f */
	iVar4 = 1063675494; /* Float: 0.9f */
	vVar5 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
	if (func_718(vVar5, iVar1, iVar2, iVar3, iVar4))
	{
		iVar0++;
	}
	iVar1 = 1053609165; /* Float: 0.4f */
	iVar2 = 1058642330; /* Float: 0.6f */
	iVar3 = 1050253722; /* Float: 0.3f */
	iVar4 = 1060320051; /* Float: 0.7f */
	if (func_718(vVar5, iVar1, iVar2, iVar3, iVar4))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_941(int iParam0, int iParam1, float fParam2)
{
	return func_948(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

bool func_942(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_191(0);
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), vParam0) < 5f)
	{
		return true;
	}
	return false;
}

bool func_943(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_191(0);
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), vParam0) > 1101004800)
	{
		return true;
	}
	return false;
}

int func_944()
{
	switch (func_242())
	{
		case 3:
			return 1;
		case 4:
			return 3;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		default:
			break;
	}
	return 1;
}

int func_945()
{
	switch (func_242())
	{
		case 3:
			return 0;
		case 4:
			return 2;
		case 5:
			return 1;
		case 6:
			return 2;
		case 7:
			return 1;
		default:
			break;
	}
	return 0;
}

var func_946(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_1054() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1055());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1055());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1055());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_1056(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_1057(iVar2))
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
				if (iVar9 & 8192 != 0 && func_1058(iVar2) != 1)
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
					if (!func_1059(iVar10))
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

bool func_947()
{
	int iVar0;

	iVar0 = 1098907648; /* Float: 16f */
	switch (func_242())
	{
		case 3:
			iVar0 = 1098907648; /* Float: 16f */
			break;
		case 4:
			iVar0 = 1098907648; /* Float: 16f */
			break;
		case 5:
			iVar0 = 1098907648; /* Float: 16f */
			break;
		case 6:
			iVar0 = 1098907648; /* Float: 16f */
			break;
		case 7:
			iVar0 = 1098907648; /* Float: 16f */
			break;
	}
	if (func_1060(2, iVar0, 1))
	{
		func_592(0, 1115815936 /* Float: 65f */, 5000, 2, 97, 98, -1, -1, -1, -1, 0, -1);
		return true;
	}
	return false;
}

bool func_948(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_949(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

float func_950()
{
	int iVar0;

	iVar0 = func_242();
	switch (iVar0)
	{
		case 0:
			return 6.467834E-14f;
		case 1:
			return 3.70038E-33f;
		case 2:
			return 6.467834E-14f;
		case 3:
			return -1.718269E-05f;
		case 4:
			return -6.244152E-06f;
		case 5:
			return -1.718269E-05f;
		case 6:
			return -1.718269E-05f;
		case 7:
			return -1.718269E-05f;
		case 8:
			return 3.70038E-33f;
		case 9:
			return -0.01946904f;
		case 10:
			return -0.01946904f;
		case 11:
			return 6.467834E-14f;
		default:
			break;
	}
	return 3.70038E-33f;
}

bool func_951(int iParam0)
{
	return func_1061(iParam0);
}

bool func_952(int iParam0)
{
	return ENTITY::DOES_ENTITY_EXIST(Local_947.f_274.f_7[iParam0 /*11*/]);
}

bool func_953(int iParam0, bool bParam1)
{
	if (!bParam1 || func_952(iParam0))
	{
		return ENTITY::IS_ENTITY_DEAD(Local_947.f_274.f_7[iParam0 /*11*/]);
	}
	return false;
}

bool func_954(int iParam0)
{
	return MAP::DOES_BLIP_EXIST(Local_947.f_274.f_7[iParam0 /*11*/].f_1);
}

void func_955(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	int iVar0;

	func_175(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_947.f_274.f_7[iParam0 /*11*/]))
	{
		return;
	}
	iVar0 = MAP::BLIP_ADD_FOR_ENTITY(iParam1, Local_947.f_274.f_7[iParam0 /*11*/]);
	if (iParam2 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(iVar0, iParam2);
	}
	if (iParam3 != 0)
	{
		MAP::SET_BLIP_SPRITE(iVar0, iParam3, true);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, sParam4);
	}
	Local_947.f_274.f_7[iParam0 /*11*/].f_1 = iVar0;
}

int func_956(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_1062(bParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_957()
{
	if (!func_69(2))
	{
		return;
	}
	func_149(8);
}

void func_958(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_795(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_939(iParam1);
	func_800(iVar0, iParam0);
}

int func_959(int iParam0)
{
	return iParam0;
}

void func_960(int iParam0)
{
	if (!func_1063(iParam0))
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

bool func_961(struct<2> Param0, bool bParam2)
{
	if (!func_40(Param0))
	{
		return false;
	}
	func_1064(bParam2);
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

int func_962()
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

void func_963(var uParam0, var uParam1)
{
}

void func_964(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_965(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_1041(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_966(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_967(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

int func_968(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	return iVar0;
}

bool func_969(int iParam0)
{
	return Local_13.f_58[iParam0 /*3*/].f_2 > 0;
}

bool func_970(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (bParam4)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
		{
			return true;
		}
	}
	else if (func_1065(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

var func_971(int iParam0, int iParam1)
{
	return func_946(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

void func_972(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 41, &uParam1);
}

bool func_973(int iParam0)
{
	switch (iParam0)
	{
		case 176:
			return true;
		case 177:
			return true;
		case 178:
			return true;
		case 179:
			return true;
		default:
			break;
	}
	return false;
}

bool func_974(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = fParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_1066(iParam0, &Var0);
}

Vector3 func_975(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_976(var uParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	return func_1067(uParam0, &Global_1051270, vParam1, iParam4, iParam5, bParam6, iParam7);
}

void func_977(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 - iVar1 * 32);
	MISC::SET_BIT(&(Local_947.f_19.f_46[iVar1]), iVar2);
}

void func_978(int iParam0)
{
}

void func_979(int iParam0)
{
}

void func_980(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_981(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_982(var uParam0)
{
	return func_856(*uParam0, 2);
}

void func_983(int iParam0)
{
	int iVar0;

	if (!func_230(&iVar0))
	{
		return;
	}
	func_668(&(Local_82[iVar0 /*27*/].f_10), 4, iParam0);
}

void func_984(int iParam0)
{
	int iVar0;

	if (!func_230(&iVar0))
	{
		return;
	}
	func_667(&(Local_82[iVar0 /*27*/].f_10), 3, iParam0);
}

bool func_985(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;

	fVar0 = func_1068(uParam1);
	if (uParam1->f_13 > (fVar0 + 5f))
	{
		return false;
	}
	if (!PED::_IS_PED_VISIBILITY_TRACKED(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (uParam1->f_13 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_1069(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		bVar3 = uParam1->f_1 & 2 != false;
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_33, -1f, fVar2, -1f, fVar1) && PED::CAN_PED_SEE_ENTITY(iParam0, Global_33, true, bVar3) == 1)
		{
			return true;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1940186.f_38))
		{
			if (WEAPON::_IS_WEAPON_LANTERN(Global_1940186.f_38) || WEAPON::_IS_WEAPON_TORCH(Global_1940186.f_38))
			{
				if (uParam1->f_13 <= 5f)
				{
					if (func_1070())
					{
						if (PED::IS_PED_FACING_PED(Global_33, iParam0, 110f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_986(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	if (func_1071(iParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::GET_PED_CROUCH_MOVEMENT(Global_33) || PED::IS_PED_IN_COVER(Global_33, false, false)) || PED::IS_PED_GOING_INTO_COVER(Global_33)) || *uParam1 & 2097152 != 0)
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (PED::_0x0EA9EACBA3B01601(Global_33, iParam0, bVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4f)
	{
		if (*uParam1 & 512 != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_33, false, false) || PED::IS_PED_GOING_INTO_COVER(Global_33))
			{
				return false;
			}
			if (PED::GET_PED_CROUCH_MOVEMENT(Global_33) || ((PED::GET_PED_BLACKBOARD_SCRIPT_FLOAT(Global_33, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 1090519040) && *uParam1 & 2097152 != 0))
			{
				return false;
			}
		}
		if (PED::GET_PED_BLACKBOARD_SCRIPT_FLOAT(Global_33, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 1090519040)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

void func_987(int iParam0)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;

	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1940186.f_32);
	Global_1940186.f_21 = func_1072();
	if (Global_1940186.f_21)
	{
		Global_1940186.f_22 = MISC::GET_GAME_TIMER();
	}
	bVar1 = false;
	if (WEAPON::IS_WEAPON_VALID(Global_1940186.f_38))
	{
		bVar1 = true;
		if (PED::IS_PED_SHOOTING(Global_33))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_33, &uVar2))
			{
			}
			else
			{
				uVar2 = Global_1940186.f_38;
			}
			Global_1940186.f_40 = uVar2;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_1073(&(Global_1940186.f_28), &(Global_1940186.f_33));
			Global_1940186.f_32 = iParam0;
			break;
		case 1:
			Global_1940186.f_24 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1940186.f_24)
			{
				if (bVar1 && WEAPON::_IS_WEAPON_LASSO(Global_1940186.f_38))
				{
					Global_1940186.f_24 = PED::_GET_LASSO_TARGET(Global_33) != 0;
				}
				if (Global_1940186.f_40 == 1284.666f)
				{
					Global_1940186.f_24 = WEAPON::_0x46D42883E873C1D7(Global_33) > 0;
				}
			}
			break;
		case 2:
			bVar3 = WEAPON::IS_WEAPON_VALID(Global_1940186.f_40);
			if (bVar3 && WEAPON::_IS_WEAPON_LASSO(Global_1940186.f_40))
			{
				Global_1940186.f_19 = 0;
			}
			else
			{
				if (bVar3 && WEAPON::_IS_WEAPON_SILENT(Global_1940186.f_40))
				{
					Global_1940186.f_19 = PED::TIME_SINCE_PED_LAST_SHOT(Global_33) <= 3f;
				}
				else
				{
					Global_1940186.f_19 = PED::TIME_SINCE_PED_LAST_SHOT(Global_33) <= 1f;
				}
				if (Global_1940186.f_19)
				{
					Global_1940186.f_23 = MISC::GET_FRAME_COUNT();
				}
			}
			break;
		default:
			Global_1940186.f_32 = iParam0 + 1;
			break;
	}
	Global_19 |= 4;
}

var func_988(int iParam0)
{
	return Global_1102813.f_3695[iParam0 /*3*/];
}

bool func_989(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_1074(bParam0, &iVar0, &iVar1))
	{
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
			{
				return false;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && PED::GET_PED_CONFIG_FLAG(iVar1, 6, false))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

bool func_990(var uParam0)
{
	int iVar0;

	iVar0 = Global_1940186.f_34;
	if (func_28() == -1)
	{
		if (Global_1940186.f_34 == 0)
		{
			iVar0 = func_1075(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1940186.f_34) || !Global_1956862.f_1716[4])
	{
		iVar0 = func_1075(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_1018(iVar0) == -1)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
	{
		return false;
	}
	uParam0->f_15 = iVar0;
	return true;
}

void func_991(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_1076(uParam0);
	}
}

bool func_992(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_1018(iParam2);
	}
	else
	{
		iVar1 = func_1017(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_1018(iParam0);
	}
	else
	{
		iVar0 = func_1017(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_189(*uParam1, 8388608))
	{
		return true;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case joaat("REL_CIVMALE"):
		case joaat("REL_RE_VICTIM"):
		case joaat("REL_CIVNATIVE"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_COP"):
		case joaat("REL_CIVFEMALE"):
			switch (iVar3)
			{
				case joaat("REL_CIVMALE"):
				case joaat("REL_RE_VICTIM"):
				case joaat("REL_CIVNATIVE"):
				case joaat("REL_CIVFEMALE"):
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_993(int iParam0, int iParam1)
{
	return func_1014(iParam0, iParam1, 1, 1);
}

float func_994(var uParam0)
{
	return uParam0->f_29;
}

void func_995(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_251(uParam0, 3.85186E-34f);
	}
	else
	{
		func_350(uParam0, 3.85186E-34f);
	}
}

void func_996()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_997(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if ((WEAPON::_IS_WEAPON_LASSO(Global_1940186.f_38) || 1284.666f == Global_1940186.f_38) && Global_1940186.f_21)
	{
	}
	else if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return false;
		}
	}
	if (Global_1940186.f_34 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1940186.f_34, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_1014(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::IS_PED_ARMED(iVar0, 4)) || (bParam2 && WEAPON::IS_PED_ARMED(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_1077(iVar0, 0)))
		{
			if (func_1078(iParam0, 1053609165 /* Float: 0.4f */, 1058642330 /* Float: 0.6f */, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */))
			{
				return true;
			}
		}
	}
	return false;
}

float func_998(var uParam0)
{
	return uParam0->f_18;
}

bool func_999(var uParam0, int iParam1, int iParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_189(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_33, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_33, 17))
		{
			return true;
		}
	}
	return false;
}

int func_1000(var uParam0)
{
	return uParam0->f_19;
}

int func_1001(var uParam0)
{
	return uParam0->f_20;
}

bool func_1002(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::IS_PED_ARMED(iVar0, 4)) || (bParam2 && WEAPON::IS_PED_ARMED(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_1077(iVar0, 0)))
		{
			if (func_718(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 1053609165 /* Float: 0.4f */, 1058642330 /* Float: 0.6f */, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */))
			{
				return true;
			}
		}
	}
	return false;
}

int func_1003(bool bParam0, bool bParam1, bool bParam2)
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

float func_1004(var uParam0)
{
	return uParam0->f_25;
}

int func_1005(var uParam0)
{
	int iVar0;

	switch (uParam0->f_8)
	{
		case 0:
			switch (uParam0->f_7)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_7)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_7)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_7)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_7)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if ((*uParam0 && 2.350989E-38f) != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_1006(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_948(iParam0, vParam4, 1056964608 /* Float: 0.5f */))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

int func_1007(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1940186.f_38 == -3.273909E-18f)
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1940186.f_40))
		{
			if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1940186.f_40) || WEAPON::IS_WEAPON_BOW(Global_1940186.f_40))
			{
				return 1;
			}
		}
	}
	if (func_1079(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_1008(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_1071(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_1009(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_1071(iParam1))
		{
			return false;
		}
	}
	fVar0 = 1092616192; /* Float: 10f */
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_1010(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_1080(uParam0);
	if (func_1071(iParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_1940186.f_28[iParam3], 17))
		{
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_1940186.f_28[iParam3], -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1011(int iParam0, int iParam1)
{
	if (!TASK::_IS_PED_LEADING_HORSE(iParam0))
	{
		return false;
	}
	*iParam1 = TASK::_GET_LED_HORSE_FROM_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return false;
	}
	if (!PED::CAN_PED_BE_MOUNTED(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_1012(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (WEAPON::_IS_TARGET_PED_CONSTRAINED_BY_PED_USING_BOLAS(iParam0, iParam1))
	{
		return true;
	}
	if (!WEAPON::_IS_WEAPON_LASSO(func_1081(iParam0, 1, 0, 0)) && !func_1081(iParam0, 1, 0, 0) == 1284.666f)
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_1013(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_1014(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_1015(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_1016(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_1016(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_1017(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_1018(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

float func_1019(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_1020(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1940186.f_34 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true, true))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1940186.f_34, true, true))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_1011(Global_33, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_1014(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_1014(iParam0, Global_1940186.f_34, 0, 1) < 1075838976)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1940186.f_34, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_1021(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_1074(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_33, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17))
				{
					if (!bParam2 || !func_1023(uParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_33, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17))
			{
				if (!bParam2 || !func_1023(uParam1, iVar1))
				{
					if (func_1016(iVar1, Global_34, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_1022(var uParam0)
{
	return func_189(*uParam0, 131072);
}

bool func_1023(var uParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case joaat("REL_GANG_ODRISCOLL"):
		case joaat("REL_GANG_SKINNER_BROTHERS"):
		case joaat("REL_GUNSLINGERS"):
		case joaat("REL_GANG_CREOLE"):
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
		case joaat("REL_GANG_MURFREE_BROOD"):
		case joaat("REL_CRIMINALS"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_1024(int iParam0)
{
	return false;
}

int func_1025(var uParam0)
{
	return uParam0->f_22;
}

int func_1026(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_5 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_13;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_33, 90f))
	{
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_33, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1069547520)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_33))
		{
			return 1;
		}
	}
	return 0;
}

float func_1027(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_1028(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_1029(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_1030(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

float func_1031(int iParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	fVar0 = -971228160; /* Float: -9999f */
	fVar1 = 1176255488; /* Float: 9999f */
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_1082(vVar2.x, fVar0);
	fVar1 = func_1069(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_1082(vVar2.x, fVar0);
	fVar1 = func_1069(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_1082(vVar2.x, fVar0);
	fVar1 = func_1069(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_1082(vVar2.x, fVar0);
	fVar1 = func_1069(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_1082(vVar2.x, fVar0);
	fVar1 = func_1069(vVar2.x, fVar1);
	return (fVar0 - fVar1);
}

float func_1032(int iParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	fVar0 = -971228160; /* Float: -9999f */
	fVar1 = 1176255488; /* Float: 9999f */
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_1082(vVar2.y, fVar0);
	fVar1 = func_1069(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_1082(vVar2.y, fVar0);
	fVar1 = func_1069(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_1082(vVar2.y, fVar0);
	fVar1 = func_1069(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_1082(vVar2.y, fVar0);
	fVar1 = func_1069(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_1082(vVar2.y, fVar0);
	fVar1 = func_1069(vVar2.y, fVar1);
	return (fVar0 - fVar1);
}

float func_1033(int iParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	fVar0 = -971228160; /* Float: -9999f */
	fVar1 = 1176255488; /* Float: 9999f */
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_1082(vVar2.z, fVar0);
	fVar1 = func_1069(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_1082(vVar2.z, fVar0);
	fVar1 = func_1069(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_1082(vVar2.z, fVar0);
	fVar1 = func_1069(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_1082(vVar2.z, fVar0);
	fVar1 = func_1069(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_1082(vVar2.z, fVar0);
	fVar1 = func_1069(vVar2.z, fVar1);
	return (fVar0 - fVar1);
}

Vector3 func_1034(int iParam0)
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
	return func_573((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_1035(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_1036(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_1037(int iParam0)
{
	return !func_486(iParam0, 4);
}

int func_1038(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_1041(iVar0, 2))
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
				func_1083(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1f, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_1039(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_786(iParam0))
	{
		return;
	}
	iVar0 = func_959(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1951897[iVar0 /*23*/].f_3, iParam1, bParam2);
}

void func_1040(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_786(iParam0))
	{
		return;
	}
	iVar0 = func_959(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1951897[iVar0 /*23*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

bool func_1041(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

int func_1042(int iParam0)
{
	return Local_13.f_58[iParam0 /*3*/].f_1;
}

void func_1043(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_182(iVar0);
		func_539(iVar1, 0, bParam0, bParam1);
		func_539(iVar1, 1, bParam0, bParam1);
		func_539(iVar1, 2, bParam0, bParam1);
		iVar0++;
	}
}

void func_1044()
{
	func_957();
}

void func_1045(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (PED::IS_PED_CARRYING_SOMETHING(iVar0))
	{
		return;
	}
	if (func_1029(iVar0, 0, 1, 0) != -3.273909E-18f)
	{
		return;
	}
	TASK::_TASK_PLAY_EMOTE(iVar0, iParam0, iParam1, iParam2, bParam3, bParam4, bParam5, bParam6, false);
}

int func_1046(int iParam0)
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

void func_1047(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1295619.f_16;
	Var1 = { func_643(iParam0, 12648.71f) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_1048(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;

	Var2.f_10 = 30f;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	iVar1 = 1;
	while (iVar1 <= 46)
	{
		*iParam1 = iVar1;
		func_32(&Var2, *iParam1, -1, -1, 255);
		iVar0 = (iVar0 + Var2);
		if (iVar0 >= iParam0)
		{
			iVar0 = (iVar0 - Var2);
			*iParam2 = 0;
			while (*iParam2 <= (Var2 - 1))
			{
				if (iVar0 == iParam0)
				{
					return 1;
				}
				iVar0++;
				*iParam2++;
			}
		}
		iVar1++;
	}
	return 0;
}

bool func_1049(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_961(Param0, &vVar0);
	if (func_1084(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

bool func_1050()
{
	return !Global_1572887.f_10;
}

void func_1051(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1052(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam4)
	{
		case 0:
			iVar2 = 1;
			iVar0 = 1;
			iVar3 = 1;
			iVar1 = 1;
			break;
		case 1:
			iVar2 = 2;
			iVar0 = 2;
			iVar3 = 2;
			iVar1 = 2;
			break;
		case 2:
			iVar2 = 3;
			iVar0 = 3;
			iVar3 = 3;
			iVar1 = 3;
			break;
		case 3:
			iVar2 = 4;
			iVar0 = 4;
			iVar3 = 3;
			iVar1 = 3;
			break;
	}
	if (bParam8)
	{
		iVar3 = 0;
	}
	if (bParam9)
	{
		iVar1 = 0;
	}
	uParam0->f_3 = iParam1;
	uParam0->f_7 = iParam3;
	uParam0->f_5 = iParam10;
	uParam0->f_6 = iParam11;
	uParam0->f_8 = iVar0;
	uParam0->f_13 = iParam5;
	uParam0->f_14 = iParam6;
	uParam0->f_15 = iParam6;
	uParam0->f_23 = iVar3;
	uParam0->f_24 = iVar3;
	uParam0->f_16 = iVar1;
	uParam0->f_9 = iParam7;
	uParam0->f_10 = iParam7;
	uParam0->f_11 = iParam7;
	switch (iParam2)
	{
		case 0:
			uParam0->f_4 = 21030;
			uParam0->f_17 = iVar2;
			uParam0->f_18 = iVar2;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			break;
		case 1:
			uParam0->f_4 = 21030;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			uParam0->f_17 = 0;
			uParam0->f_18 = 0;
			break;
	}
}

char* func_1053(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RightArmOnly_filter";
		case 2:
			return "RightArmOnly_filter";
		case 3:
			return "RightArmOnly_filter";
		case 4:
			return "RightArmOnly_filter";
		case 5:
			return "LeftArmOnly_filter";
		case 6:
			return "LeftArmOnly_filter";
		default:
			break;
	}
	return "";
}

int func_1054()
{
	return Global_1051645.f_12;
}

char* func_1055()
{
	return "unnamed";
}

int func_1056(int iParam0)
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

bool func_1057(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_1085(36, iParam0);
}

int func_1058(int iParam0)
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

bool func_1059(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_1086(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_1087(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

bool func_1060(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!bParam2 || func_535(iVar0))
			{
				if (func_622(iParam0, fParam1, iVar0, 0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_1061(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		return 0;
	}
	return 1;
}

int func_1062(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_1088(iParam2, -3.005759E+25f);
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
	func_1089(uParam1, bParam0, Var3);
	return 1;
}

bool func_1063(int iParam0)
{
	return func_1041(iParam0, 2);
}

void func_1064(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

float func_1065(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_1066(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_1067(var uParam0, var uParam1, vector3 vParam2, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&vParam2))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&vParam2);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_1090(vParam2, uParam0, uParam1);
		if (bParam7)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&vParam2, true, true, bParam8);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&vParam2, true, true, bParam8);
		}
		if (bParam5)
		{
			AUDIO::_0x40CA665AB9D8D505(&vParam2, iParam6);
		}
	}
	return bVar0;
}

float func_1068(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_808(uParam0);
	}
	if (GRAPHICS::_GET_MODIFIED_VISIBILITY_DISTANCE() > 1062551421)
	{
		return func_1091(uParam0);
	}
	return func_808(uParam0);
}

float func_1069(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_1070()
{
	int iVar0;
	int iVar1;

	iVar0 = func_1093(func_1092());
	iVar1 = func_1094(func_1092());
	if (iVar0 >= 21)
	{
		return true;
	}
	else if (iVar0 < 5)
	{
		return true;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return true;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return true;
		}
	}
	return false;
}

bool func_1071(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return false;
	}
	iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (((((((((iVar0 == -1.657435E-22f || iVar0 == 2.81552E+22f) || iVar0 == 3.025941E+25f) || iVar0 == 7.594647E-28f) || iVar0 == -6.591612E+25f) || iVar0 == 5.846906E-16f) || iVar0 == -0.7710786f) || iVar0 == 3.572616E-37f) || iVar0 == 1.229294E-26f) || iVar0 == -3.037554E-34f)
	{
		return true;
	}
	if (iVar0 == -3.037554E-34f || iVar0 == 14.24763f)
	{
		iVar0 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(iParam0);
		if (iVar0 == 0.0004269964f)
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_1072()
{
	if (func_1095())
	{
		return false;
	}
	if (Global_1572887.f_14 == -1)
	{
		if (Global_1940186.f_38 == 3.594275E+35f)
		{
			return PAD::IS_CONTROL_PRESSED(0, 3.101329E-34f);
		}
		return PED::GET_PED_RESET_FLAG(Global_33, 311);
	}
	else
	{
		return Global_1956862.f_1716[3];
	}
	return false;
}

void func_1073(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN((*uParam0)[iVar1]) && !(DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

bool func_1074(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1940186.f_26))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1940186.f_26))
		{
			*iParam1 = Global_1940186.f_26;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1940186.f_27))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1940186.f_27))
		{
			if (PED::IS_PED_HOGTIED(Global_1940186.f_27) || ENTITY::IS_ENTITY_DEAD(Global_1940186.f_27))
			{
				*iParam2 = Global_1940186.f_27;
				iVar0 = 1;
			}
		}
	}
	if (Global_1940186.f_24 && !PED::IS_PED_INJURED(Global_33))
	{
		iVar1 = PED::_GET_LASSO_TARGET(Global_33);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_1075(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, -4.980293E+32f) && !PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar1, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_7 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1940186.f_6)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_33);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_GET_LASSO_TARGET(Global_33);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_1076(var uParam0)
{
	int iVar0;

	if (Global_1940186.f_32 == 0)
	{
		func_350(uParam0, 1.504633E-36f);
		iVar0 = 0;
		while (iVar0 < Global_1940186.f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1940186.f_28[iVar0]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1940186.f_28[iVar0]))
				{
					func_251(uParam0, 1.504633E-36f);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_1077(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_1078(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_718(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam1, iParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_1079(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(iParam0, -3.273909E-18f, iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1940186.f_38))
			{
				if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1940186.f_38) || Global_1940186.f_38 == -4.550719E+16f)
				{
					if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(iParam0, Global_1940186.f_38, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

float func_1080(var uParam0)
{
	return uParam0->f_28;
}

float func_1081(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_1082(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_1083(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_965(iParam0, 1);
	func_966(iParam0, 1);
	func_967(iParam0, 128);
}

bool func_1084(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_1096(iParam0))
	{
		return false;
	}
	if (func_1097(iParam0, uParam1, &uVar0))
	{
		func_1098(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_1085(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1099(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_1100())
	{
		return func_1099(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_1099(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_1086(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_1087(int iParam0)
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
		func_1101(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_1102(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

void func_1088(int iParam0, int iParam1)
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

void func_1089(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_1103(uParam0))
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

void func_1090(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (uParam3->f_97 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0 /*4*/]))
		{
		}
		else if (ENTITY::IS_ENTITY_DEAD((*uParam3)[iVar0 /*4*/]))
		{
		}
		else if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(&uParam0, (*uParam3)[iVar0 /*4*/], 0))
		{
		}
		else
		{
			AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, (*uParam3)[iVar0 /*4*/], &((uParam3[iVar0 /*4*/])->f_1));
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 <= ((uParam4[iVar0 /*14*/])->f_13 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam4[iVar0 /*14*/])[iVar1 /*4*/]) && !ENTITY::IS_ENTITY_DEAD((*uParam4[iVar0 /*14*/])[iVar1 /*4*/]))
				{
					iVar2 = (*uParam3)[iVar0 /*4*/];
					iVar3 = (*uParam4[iVar0 /*14*/])[iVar1 /*4*/];
					AUDIO::_0xA2323A2EAE32A290(iVar2, iVar3, &((uParam4[iVar0 /*14*/][iVar1 /*4*/])->f_1));
				}
				iVar1++;
				iVar1++;
			}
		}
		iVar0++;
	}
}

var func_1091(var uParam0)
{
	return uParam0->f_27;
}

int func_1092()
{
	return Global_1902565;
}

int func_1093(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_1094(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

bool func_1095()
{
	switch (Global_1940186.f_38)
	{
		case joaat("WEAPON_MELEE_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS"):
		case joaat("WEAPON_MELEE_LANTERN_ELECTRIC"):
		case joaat("WEAPON_MELEE_DAVY_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS_IMPROVED"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_1096(int iParam0)
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

bool func_1097(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = 1.841357E+10f;
	bParam2->f_3 = func_1104(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_1098(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	bParam1->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam1);
	uParam2->f_3 = func_1105(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_1106(iVar0);
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
			uParam2->f_5 = func_1107(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_1108(iVar0);
		}
		bParam1->f_2 = 4.168656E-33f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	}
	else if (*uParam2 == 7)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_1109(iVar0);
		}
	}
	else
	{
		bParam1->f_2 = 3.190274E+20f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), bParam1);
	}
	bParam1->f_2 = 1.006963E+34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_7 = func_1110(iVar0);
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

bool func_1099(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_1100()
{
	return Global_1102813.f_3672;
}

void func_1101(int iParam0)
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
	func_1102(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_1102(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_1103(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1104(int iParam0)
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

int func_1105(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_1111(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_1106(int iParam0)
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

int func_1107(int iParam0)
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

int func_1108(int iParam0)
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

int func_1109(int iParam0)
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

int func_1110(int iParam0)
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

bool func_1111(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_1112(iParam0, uParam1, &uVar0))
	{
		func_1113(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_1112(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = -0.3074162f;
	bParam2->f_3 = func_1104(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_1113(bool bParam0, int iParam1, var uParam2)
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

