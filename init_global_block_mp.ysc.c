void __EntryFunction__()
{
	Global_1048624 = -1;
	Global_1048625 = -1;
	Global_1048647 = -1f;
	Global_1049289 = -1;
	Global_1049290 = { -1005884211, -983454925, 1117899981 /* Float: 80.9f */ };
	Global_1049296 = { 0f, 0f, 0f };
	Global_1049300 = -1;
	Global_1049303 = -1;
	Global_1051178 = 255;
	Global_1051179 = -1;
	Global_1051267 = -1;
	Global_1051607 = 1;
	if (SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(4))
	{
		SCRIPTS::_RESTORE_GLOBAL_BLOCK(4);
	}
	else
	{
		SCRIPTS::_STORE_GLOBAL_BLOCK(4);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

