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
	float fLocal_13 = 0f;
	int iLocal_14 = 0;
	var uLocal_15[4] = { 0, 0, 0, 0 };
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	bool bLocal_30 = false;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	struct<403> Local_37 = { 0, 0, 1, 0, 0, 0, 0, -1, -1, -1, 4, 255, 0, -1, -1, -1, 255, 0, -1, -1, -1, 255, 0, -1, -1, -1, 255, 0, -1, -1, -1, 255, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, -1, 0 } ;
	struct<5> Local_440[32];
	struct<12> Local_601[32];
	struct<38> Local_986[32];
	struct<1486> Local_2203 = { 0, 4, 0, 0, 0, 0, -1, 0, 255, 0, 0, 0, 0, 0, 4, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, 20, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, 20, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 10, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 10, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 5, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 24, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 1 } ;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 14;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755 = 0;
	var uLocal_3756 = 0;
	var uLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = 0;
	var uLocal_3765 = 0;
	var uLocal_3766 = 0;
	var uLocal_3767 = 0;
	var uLocal_3768 = 0;
	var uLocal_3769 = 0;
	var uLocal_3770 = 0;
	var uLocal_3771 = 0;
	var uLocal_3772 = 0;
	var uLocal_3773 = 0;
	var uLocal_3774 = 0;
	var uLocal_3775 = 0;
	var uLocal_3776 = 0;
	var uLocal_3777 = 0;
	var uLocal_3778 = 0;
	var uLocal_3779 = 0;
	var uLocal_3780 = 0;
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = 0;
	var uLocal_3787 = 0;
	var uLocal_3788 = 0;
	var uLocal_3789 = 0;
	var uLocal_3790 = 0;
	var uLocal_3791 = 0;
	var uLocal_3792 = 0;
	var uLocal_3793 = 0;
	var uLocal_3794 = 0;
	var uLocal_3795 = 0;
	var uLocal_3796 = 0;
	var uLocal_3797 = 0;
	var uLocal_3798 = 0;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = 0;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 0;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = 0;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	var uLocal_3817 = 0;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	var uLocal_3824 = 0;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	var uLocal_3828 = 0;
	var uLocal_3829 = 0;
	var uLocal_3830 = 0;
	var uLocal_3831 = 0;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 0;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = 0;
	var uLocal_3853 = 0;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 0;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865 = 0;
	var uLocal_3866 = 0;
	var uLocal_3867 = 0;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = 1097859072;
	var uLocal_3875 = 1101004800;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 0;
	var uLocal_3888 = 0;
	var uLocal_3889 = 0;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 0;
	var uLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	var uLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	var uLocal_3913 = 4;
	var uLocal_3914 = 0;
	var uLocal_3915 = 0;
	var uLocal_3916 = 0;
	var uLocal_3917 = 0;
	var uLocal_3918 = 0;
	var uLocal_3919 = 0;
	var uLocal_3920 = 0;
	var uLocal_3921 = 0;
	var uLocal_3922 = 0;
	var uLocal_3923 = 0;
	var uLocal_3924 = 0;
	var uLocal_3925 = 0;
	var uLocal_3926 = 0;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 0;
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = 0;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 1000;
	var uLocal_3981 = 15;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = 0;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = 0;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038 = 0;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = 0;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 30;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 0;
	var uLocal_4095 = 0;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 75;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 0;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = 0;
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
	var uLocal_4167 = 0;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 0;
	var uLocal_4171 = 0;
	var uLocal_4172 = 0;
	var uLocal_4173 = 0;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 0;
	var uLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = 0;
	var uLocal_4180 = 0;
	var uLocal_4181 = 3;
	var uLocal_4182 = 0;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 75;
	var uLocal_4186 = 2;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 2;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 2;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	var uLocal_4195 = 2;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 2;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 2;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 2;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 2;
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 2;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 2;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 2;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 2;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 2;
	var uLocal_4223 = 0;
	var uLocal_4224 = 0;
	var uLocal_4225 = 2;
	var uLocal_4226 = 0;
	var uLocal_4227 = 0;
	var uLocal_4228 = 2;
	var uLocal_4229 = 0;
	var uLocal_4230 = 0;
	var uLocal_4231 = 2;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 2;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = 2;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 2;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 2;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 2;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 2;
	var uLocal_4250 = 0;
	var uLocal_4251 = 0;
	var uLocal_4252 = 2;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 2;
	var uLocal_4256 = 0;
	var uLocal_4257 = 0;
	var uLocal_4258 = 2;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 2;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 2;
	var uLocal_4265 = 0;
	var uLocal_4266 = 0;
	var uLocal_4267 = 2;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 2;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 2;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 2;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 2;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 2;
	var uLocal_4283 = 0;
	var uLocal_4284 = 0;
	var uLocal_4285 = 2;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 2;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 2;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = 2;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 2;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 2;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 2;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 2;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 2;
	var uLocal_4310 = 0;
	var uLocal_4311 = 0;
	var uLocal_4312 = 2;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 2;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 2;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 2;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 2;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 2;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 2;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 2;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 2;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 2;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 2;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 2;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 2;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = 2;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 2;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 2;
	var uLocal_4358 = 0;
	var uLocal_4359 = 0;
	var uLocal_4360 = 2;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 2;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 2;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 2;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 2;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 2;
	var uLocal_4376 = 0;
	var uLocal_4377 = 0;
	var uLocal_4378 = 2;
	var uLocal_4379 = 0;
	var uLocal_4380 = 0;
	var uLocal_4381 = 2;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 2;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 2;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 2;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 2;
	var uLocal_4394 = 0;
	var uLocal_4395 = 0;
	var uLocal_4396 = 2;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 2;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 2;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 2;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = 2;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 32;
	var uLocal_4412 = 2;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 2;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
	var uLocal_4418 = 2;
	var uLocal_4419 = 0;
	var uLocal_4420 = 0;
	var uLocal_4421 = 2;
	var uLocal_4422 = 0;
	var uLocal_4423 = 0;
	var uLocal_4424 = 2;
	var uLocal_4425 = 0;
	var uLocal_4426 = 0;
	var uLocal_4427 = 2;
	var uLocal_4428 = 0;
	var uLocal_4429 = 0;
	var uLocal_4430 = 2;
	var uLocal_4431 = 0;
	var uLocal_4432 = 0;
	var uLocal_4433 = 2;
	var uLocal_4434 = 0;
	var uLocal_4435 = 0;
	var uLocal_4436 = 2;
	var uLocal_4437 = 0;
	var uLocal_4438 = 0;
	var uLocal_4439 = 2;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 2;
	var uLocal_4443 = 0;
	var uLocal_4444 = 0;
	var uLocal_4445 = 2;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 2;
	var uLocal_4449 = 0;
	var uLocal_4450 = 0;
	var uLocal_4451 = 2;
	var uLocal_4452 = 0;
	var uLocal_4453 = 0;
	var uLocal_4454 = 2;
	var uLocal_4455 = 0;
	var uLocal_4456 = 0;
	var uLocal_4457 = 2;
	var uLocal_4458 = 0;
	var uLocal_4459 = 0;
	var uLocal_4460 = 2;
	var uLocal_4461 = 0;
	var uLocal_4462 = 0;
	var uLocal_4463 = 2;
	var uLocal_4464 = 0;
	var uLocal_4465 = 0;
	var uLocal_4466 = 2;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 2;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 2;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 2;
	var uLocal_4476 = 0;
	var uLocal_4477 = 0;
	var uLocal_4478 = 2;
	var uLocal_4479 = 0;
	var uLocal_4480 = 0;
	var uLocal_4481 = 2;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 2;
	var uLocal_4485 = 0;
	var uLocal_4486 = 0;
	var uLocal_4487 = 2;
	var uLocal_4488 = 0;
	var uLocal_4489 = 0;
	var uLocal_4490 = 2;
	var uLocal_4491 = 0;
	var uLocal_4492 = 0;
	var uLocal_4493 = 2;
	var uLocal_4494 = 0;
	var uLocal_4495 = 0;
	var uLocal_4496 = 2;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 2;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 2;
	var uLocal_4503 = 0;
	var uLocal_4504 = 0;
	var uLocal_4505 = 2;
	var uLocal_4506 = 0;
	var uLocal_4507 = 0;
	var uLocal_4508 = 4;
	var uLocal_4509 = 2;
	var uLocal_4510 = 0;
	var uLocal_4511 = 0;
	var uLocal_4512 = 2;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 2;
	var uLocal_4516 = 0;
	var uLocal_4517 = 0;
	var uLocal_4518 = 2;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = 0;
	var uLocal_4522 = 0;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = 0;
	var uLocal_4535 = 0;
	var uLocal_4536 = 0;
	var uLocal_4537 = 0;
	var uLocal_4538 = 0;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 24;
	var uLocal_4551 = 0;
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
	var uLocal_4559 = 0;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = 0;
	var uLocal_4564 = 0;
	var uLocal_4565 = 0;
	var uLocal_4566 = 0;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 0;
	var uLocal_4579 = 0;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = 0;
	var uLocal_4594 = 0;
	var uLocal_4595 = 0;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = 0;
	var uLocal_4607 = 0;
	var uLocal_4608 = 0;
	var uLocal_4609 = 0;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
	var uLocal_4619 = 0;
	var uLocal_4620 = 0;
	var uLocal_4621 = 0;
	var uLocal_4622 = 0;
	var uLocal_4623 = 0;
	var uLocal_4624 = 0;
	var uLocal_4625 = 0;
	var uLocal_4626 = 0;
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = 0;
	var uLocal_4633 = 0;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = 0;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = 0;
	var uLocal_4643 = 0;
	var uLocal_4644 = 0;
	var uLocal_4645 = 0;
	var uLocal_4646 = 0;
	var uLocal_4647 = 0;
	var uLocal_4648 = 24;
	var uLocal_4649 = 3;
	var uLocal_4650 = 0;
	var uLocal_4651 = 0;
	var uLocal_4652 = 0;
	var uLocal_4653 = 0;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = 0;
	var uLocal_4659 = 0;
	var uLocal_4660 = 0;
	var uLocal_4661 = 0;
	var uLocal_4662 = 0;
	var uLocal_4663 = 3;
	var uLocal_4664 = 0;
	var uLocal_4665 = 0;
	var uLocal_4666 = 0;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 0;
	var uLocal_4673 = 0;
	var uLocal_4674 = 0;
	var uLocal_4675 = 0;
	var uLocal_4676 = 0;
	var uLocal_4677 = 3;
	var uLocal_4678 = 0;
	var uLocal_4679 = 0;
	var uLocal_4680 = 0;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 0;
	var uLocal_4686 = 0;
	var uLocal_4687 = 0;
	var uLocal_4688 = 0;
	var uLocal_4689 = 0;
	var uLocal_4690 = 0;
	var uLocal_4691 = 3;
	var uLocal_4692 = 0;
	var uLocal_4693 = 0;
	var uLocal_4694 = 0;
	var uLocal_4695 = 0;
	var uLocal_4696 = 0;
	var uLocal_4697 = 0;
	var uLocal_4698 = 0;
	var uLocal_4699 = 0;
	var uLocal_4700 = 0;
	var uLocal_4701 = 0;
	var uLocal_4702 = 0;
	var uLocal_4703 = 0;
	var uLocal_4704 = 0;
	var uLocal_4705 = 3;
	var uLocal_4706 = 0;
	var uLocal_4707 = 0;
	var uLocal_4708 = 0;
	var uLocal_4709 = 0;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 0;
	var uLocal_4713 = 0;
	var uLocal_4714 = 0;
	var uLocal_4715 = 0;
	var uLocal_4716 = 0;
	var uLocal_4717 = 0;
	var uLocal_4718 = 0;
	var uLocal_4719 = 3;
	var uLocal_4720 = 0;
	var uLocal_4721 = 0;
	var uLocal_4722 = 0;
	var uLocal_4723 = 0;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 0;
	var uLocal_4730 = 0;
	var uLocal_4731 = 0;
	var uLocal_4732 = 0;
	var uLocal_4733 = 3;
	var uLocal_4734 = 0;
	var uLocal_4735 = 0;
	var uLocal_4736 = 0;
	var uLocal_4737 = 0;
	var uLocal_4738 = 0;
	var uLocal_4739 = 0;
	var uLocal_4740 = 0;
	var uLocal_4741 = 0;
	var uLocal_4742 = 0;
	var uLocal_4743 = 0;
	var uLocal_4744 = 0;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 3;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 0;
	var uLocal_4758 = 0;
	var uLocal_4759 = 0;
	var uLocal_4760 = 0;
	var uLocal_4761 = 3;
	var uLocal_4762 = 0;
	var uLocal_4763 = 0;
	var uLocal_4764 = 0;
	var uLocal_4765 = 0;
	var uLocal_4766 = 0;
	var uLocal_4767 = 0;
	var uLocal_4768 = 0;
	var uLocal_4769 = 0;
	var uLocal_4770 = 0;
	var uLocal_4771 = 0;
	var uLocal_4772 = 0;
	var uLocal_4773 = 0;
	var uLocal_4774 = 0;
	var uLocal_4775 = 3;
	var uLocal_4776 = 0;
	var uLocal_4777 = 0;
	var uLocal_4778 = 0;
	var uLocal_4779 = 0;
	var uLocal_4780 = 0;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = 0;
	var uLocal_4785 = 0;
	var uLocal_4786 = 0;
	var uLocal_4787 = 0;
	var uLocal_4788 = 0;
	var uLocal_4789 = 3;
	var uLocal_4790 = 0;
	var uLocal_4791 = 0;
	var uLocal_4792 = 0;
	var uLocal_4793 = 0;
	var uLocal_4794 = 0;
	var uLocal_4795 = 0;
	var uLocal_4796 = 0;
	var uLocal_4797 = 0;
	var uLocal_4798 = 0;
	var uLocal_4799 = 0;
	var uLocal_4800 = 0;
	var uLocal_4801 = 0;
	var uLocal_4802 = 0;
	var uLocal_4803 = 3;
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	var uLocal_4806 = 0;
	var uLocal_4807 = 0;
	var uLocal_4808 = 0;
	var uLocal_4809 = 0;
	var uLocal_4810 = 0;
	var uLocal_4811 = 0;
	var uLocal_4812 = 0;
	var uLocal_4813 = 0;
	var uLocal_4814 = 0;
	var uLocal_4815 = 0;
	var uLocal_4816 = 0;
	var uLocal_4817 = 3;
	var uLocal_4818 = 0;
	var uLocal_4819 = 0;
	var uLocal_4820 = 0;
	var uLocal_4821 = 0;
	var uLocal_4822 = 0;
	var uLocal_4823 = 0;
	var uLocal_4824 = 0;
	var uLocal_4825 = 0;
	var uLocal_4826 = 0;
	var uLocal_4827 = 0;
	var uLocal_4828 = 0;
	var uLocal_4829 = 0;
	var uLocal_4830 = 0;
	var uLocal_4831 = 3;
	var uLocal_4832 = 0;
	var uLocal_4833 = 0;
	var uLocal_4834 = 0;
	var uLocal_4835 = 0;
	var uLocal_4836 = 0;
	var uLocal_4837 = 0;
	var uLocal_4838 = 0;
	var uLocal_4839 = 0;
	var uLocal_4840 = 0;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 0;
	var uLocal_4844 = 0;
	var uLocal_4845 = 3;
	var uLocal_4846 = 0;
	var uLocal_4847 = 0;
	var uLocal_4848 = 0;
	var uLocal_4849 = 0;
	var uLocal_4850 = 0;
	var uLocal_4851 = 0;
	var uLocal_4852 = 0;
	var uLocal_4853 = 0;
	var uLocal_4854 = 0;
	var uLocal_4855 = 0;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 3;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = 0;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 3;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = 0;
	var uLocal_4877 = 0;
	var uLocal_4878 = 0;
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 0;
	var uLocal_4887 = 3;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = 0;
	var uLocal_4892 = 0;
	var uLocal_4893 = 0;
	var uLocal_4894 = 0;
	var uLocal_4895 = 0;
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = 0;
	var uLocal_4901 = 3;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = 0;
	var uLocal_4906 = 0;
	var uLocal_4907 = 0;
	var uLocal_4908 = 0;
	var uLocal_4909 = 0;
	var uLocal_4910 = 0;
	var uLocal_4911 = 0;
	var uLocal_4912 = 0;
	var uLocal_4913 = 0;
	var uLocal_4914 = 0;
	var uLocal_4915 = 3;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 0;
	var uLocal_4920 = 0;
	var uLocal_4921 = 0;
	var uLocal_4922 = 0;
	var uLocal_4923 = 0;
	var uLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 3;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
	var uLocal_4933 = 0;
	var uLocal_4934 = 0;
	var uLocal_4935 = 0;
	var uLocal_4936 = 0;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 3;
	var uLocal_4944 = 0;
	var uLocal_4945 = 0;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = 0;
	var uLocal_4952 = 0;
	var uLocal_4953 = 0;
	var uLocal_4954 = 0;
	var uLocal_4955 = 0;
	var uLocal_4956 = 0;
	var uLocal_4957 = 3;
	var uLocal_4958 = 0;
	var uLocal_4959 = 0;
	var uLocal_4960 = 0;
	var uLocal_4961 = 0;
	var uLocal_4962 = 0;
	var uLocal_4963 = 0;
	var uLocal_4964 = 0;
	var uLocal_4965 = 0;
	var uLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 0;
	var uLocal_4969 = 0;
	var uLocal_4970 = 0;
	var uLocal_4971 = 3;
	var uLocal_4972 = 0;
	var uLocal_4973 = 0;
	var uLocal_4974 = 0;
	var uLocal_4975 = 0;
	var uLocal_4976 = 0;
	var uLocal_4977 = 0;
	var uLocal_4978 = 0;
	var uLocal_4979 = 0;
	var uLocal_4980 = 0;
	var uLocal_4981 = 0;
	var uLocal_4982 = 0;
	var uLocal_4983 = 0;
	var uLocal_4984 = 0;
	var uLocal_4985 = 3;
	var uLocal_4986 = 0;
	var uLocal_4987 = 0;
	var uLocal_4988 = 0;
	var uLocal_4989 = 3;
	var uLocal_4990 = 0;
	var uLocal_4991 = 0;
	var uLocal_4992 = 0;
	var uLocal_4993 = 2;
	var uLocal_4994 = 0;
	var uLocal_4995 = 0;
	var uLocal_4996 = 0;
	var uLocal_4997 = 0;
	var uLocal_4998 = 0;
	var uLocal_4999 = 0;
	var uLocal_5000 = 2;
	var uLocal_5001 = 0;
	var uLocal_5002 = 0;
	var uLocal_5003 = 4;
	var uLocal_5004 = 0;
	var uLocal_5005 = 0;
	var uLocal_5006 = 0;
	var uLocal_5007 = 0;
	var uLocal_5008 = 4;
	var uLocal_5009 = 0;
	var uLocal_5010 = 0;
	var uLocal_5011 = 0;
	var uLocal_5012 = 0;
	var uLocal_5013 = 2;
	var uLocal_5014 = 0;
	var uLocal_5015 = 0;
	var uLocal_5016 = 2;
	var uLocal_5017 = 0;
	var uLocal_5018 = 0;
	var uLocal_5019 = 75;
	var uLocal_5020 = -1;
	var uLocal_5021 = -1;
	var uLocal_5022 = -1;
	var uLocal_5023 = -1;
	var uLocal_5024 = -1;
	var uLocal_5025 = -1;
	var uLocal_5026 = -1;
	var uLocal_5027 = -1;
	var uLocal_5028 = -1;
	var uLocal_5029 = -1;
	var uLocal_5030 = -1;
	var uLocal_5031 = -1;
	var uLocal_5032 = -1;
	var uLocal_5033 = -1;
	var uLocal_5034 = -1;
	var uLocal_5035 = -1;
	var uLocal_5036 = -1;
	var uLocal_5037 = -1;
	var uLocal_5038 = -1;
	var uLocal_5039 = -1;
	var uLocal_5040 = -1;
	var uLocal_5041 = -1;
	var uLocal_5042 = -1;
	var uLocal_5043 = -1;
	var uLocal_5044 = -1;
	var uLocal_5045 = -1;
	var uLocal_5046 = -1;
	var uLocal_5047 = -1;
	var uLocal_5048 = -1;
	var uLocal_5049 = -1;
	var uLocal_5050 = -1;
	var uLocal_5051 = -1;
	var uLocal_5052 = -1;
	var uLocal_5053 = -1;
	var uLocal_5054 = -1;
	var uLocal_5055 = -1;
	var uLocal_5056 = -1;
	var uLocal_5057 = -1;
	var uLocal_5058 = -1;
	var uLocal_5059 = -1;
	var uLocal_5060 = -1;
	var uLocal_5061 = -1;
	var uLocal_5062 = -1;
	var uLocal_5063 = -1;
	var uLocal_5064 = -1;
	var uLocal_5065 = -1;
	var uLocal_5066 = -1;
	var uLocal_5067 = -1;
	var uLocal_5068 = -1;
	var uLocal_5069 = -1;
	var uLocal_5070 = -1;
	var uLocal_5071 = -1;
	var uLocal_5072 = -1;
	var uLocal_5073 = -1;
	var uLocal_5074 = -1;
	var uLocal_5075 = -1;
	var uLocal_5076 = -1;
	var uLocal_5077 = -1;
	var uLocal_5078 = -1;
	var uLocal_5079 = -1;
	var uLocal_5080 = -1;
	var uLocal_5081 = -1;
	var uLocal_5082 = -1;
	var uLocal_5083 = -1;
	var uLocal_5084 = -1;
	var uLocal_5085 = -1;
	var uLocal_5086 = -1;
	var uLocal_5087 = -1;
	var uLocal_5088 = -1;
	var uLocal_5089 = -1;
	var uLocal_5090 = -1;
	var uLocal_5091 = -1;
	var uLocal_5092 = -1;
	var uLocal_5093 = -1;
	var uLocal_5094 = -1;
	var uLocal_5095 = -1;
	var uLocal_5096 = -1;
	var uLocal_5097 = -1;
	var uLocal_5098 = -1;
	var uLocal_5099 = -1;
	var uLocal_5100 = -1;
	var uLocal_5101 = -1;
	var uLocal_5102 = -1;
	var uLocal_5103 = -1;
	var uLocal_5104 = -1;
	var uLocal_5105 = -1;
	var uLocal_5106 = -1;
	var uLocal_5107 = -1;
	var uLocal_5108 = -1;
	var uLocal_5109 = -1;
	var uLocal_5110 = -1;
	var uLocal_5111 = -1;
	var uLocal_5112 = -1;
	var uLocal_5113 = -1;
	var uLocal_5114 = -1;
	var uLocal_5115 = -1;
	var uLocal_5116 = -1;
	var uLocal_5117 = -1;
	var uLocal_5118 = -1;
	var uLocal_5119 = -1;
	var uLocal_5120 = -1;
	var uLocal_5121 = -1;
	var uLocal_5122 = -1;
	var uLocal_5123 = -1;
	var uLocal_5124 = -1;
	var uLocal_5125 = -1;
	var uLocal_5126 = -1;
	var uLocal_5127 = -1;
	var uLocal_5128 = -1;
	var uLocal_5129 = -1;
	var uLocal_5130 = -1;
	var uLocal_5131 = -1;
	var uLocal_5132 = -1;
	var uLocal_5133 = -1;
	var uLocal_5134 = -1;
	var uLocal_5135 = -1;
	var uLocal_5136 = -1;
	var uLocal_5137 = -1;
	var uLocal_5138 = -1;
	var uLocal_5139 = -1;
	var uLocal_5140 = -1;
	var uLocal_5141 = -1;
	var uLocal_5142 = -1;
	var uLocal_5143 = -1;
	var uLocal_5144 = -1;
	var uLocal_5145 = -1;
	var uLocal_5146 = -1;
	var uLocal_5147 = -1;
	var uLocal_5148 = -1;
	var uLocal_5149 = -1;
	var uLocal_5150 = -1;
	var uLocal_5151 = -1;
	var uLocal_5152 = -1;
	var uLocal_5153 = -1;
	var uLocal_5154 = -1;
	var uLocal_5155 = -1;
	var uLocal_5156 = -1;
	var uLocal_5157 = -1;
	var uLocal_5158 = -1;
	var uLocal_5159 = -1;
	var uLocal_5160 = -1;
	var uLocal_5161 = -1;
	var uLocal_5162 = -1;
	var uLocal_5163 = -1;
	var uLocal_5164 = -1;
	var uLocal_5165 = -1;
	var uLocal_5166 = -1;
	var uLocal_5167 = -1;
	var uLocal_5168 = -1;
	var uLocal_5169 = -1;
	var uLocal_5170 = 20;
	var uLocal_5171 = -1;
	var uLocal_5172 = -1;
	var uLocal_5173 = -1;
	var uLocal_5174 = -1;
	var uLocal_5175 = -1;
	var uLocal_5176 = -1;
	var uLocal_5177 = -1;
	var uLocal_5178 = -1;
	var uLocal_5179 = -1;
	var uLocal_5180 = -1;
	var uLocal_5181 = -1;
	var uLocal_5182 = -1;
	var uLocal_5183 = -1;
	var uLocal_5184 = -1;
	var uLocal_5185 = -1;
	var uLocal_5186 = -1;
	var uLocal_5187 = -1;
	var uLocal_5188 = -1;
	var uLocal_5189 = -1;
	var uLocal_5190 = -1;
	var uLocal_5191 = -1;
	var uLocal_5192 = -1;
	var uLocal_5193 = -1;
	var uLocal_5194 = -1;
	var uLocal_5195 = -1;
	var uLocal_5196 = -1;
	var uLocal_5197 = -1;
	var uLocal_5198 = -1;
	var uLocal_5199 = -1;
	var uLocal_5200 = -1;
	var uLocal_5201 = -1;
	var uLocal_5202 = -1;
	var uLocal_5203 = -1;
	var uLocal_5204 = -1;
	var uLocal_5205 = -1;
	var uLocal_5206 = -1;
	var uLocal_5207 = -1;
	var uLocal_5208 = -1;
	var uLocal_5209 = -1;
	var uLocal_5210 = -1;
	var uLocal_5211 = 75;
	var uLocal_5212 = 0;
	var uLocal_5213 = 0;
	var uLocal_5214 = 0;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = 0;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 0;
	var uLocal_5222 = 0;
	var uLocal_5223 = 0;
	var uLocal_5224 = 0;
	var uLocal_5225 = 0;
	var uLocal_5226 = 0;
	var uLocal_5227 = 0;
	var uLocal_5228 = 0;
	var uLocal_5229 = 0;
	var uLocal_5230 = 0;
	var uLocal_5231 = 0;
	var uLocal_5232 = 0;
	var uLocal_5233 = 0;
	var uLocal_5234 = 0;
	var uLocal_5235 = 0;
	var uLocal_5236 = 0;
	var uLocal_5237 = 0;
	var uLocal_5238 = 0;
	var uLocal_5239 = 0;
	var uLocal_5240 = 0;
	var uLocal_5241 = 0;
	var uLocal_5242 = 0;
	var uLocal_5243 = 0;
	var uLocal_5244 = 0;
	var uLocal_5245 = 0;
	var uLocal_5246 = 0;
	var uLocal_5247 = 0;
	var uLocal_5248 = 0;
	var uLocal_5249 = 0;
	var uLocal_5250 = 0;
	var uLocal_5251 = 0;
	var uLocal_5252 = 0;
	var uLocal_5253 = 0;
	var uLocal_5254 = 0;
	var uLocal_5255 = 0;
	var uLocal_5256 = 0;
	var uLocal_5257 = 0;
	var uLocal_5258 = 0;
	var uLocal_5259 = 0;
	var uLocal_5260 = 0;
	var uLocal_5261 = 0;
	var uLocal_5262 = 0;
	var uLocal_5263 = 0;
	var uLocal_5264 = 0;
	var uLocal_5265 = 0;
	var uLocal_5266 = 0;
	var uLocal_5267 = 0;
	var uLocal_5268 = 0;
	var uLocal_5269 = 0;
	var uLocal_5270 = 0;
	var uLocal_5271 = 0;
	var uLocal_5272 = 0;
	var uLocal_5273 = 0;
	var uLocal_5274 = 0;
	var uLocal_5275 = 0;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	var uLocal_5279 = 0;
	var uLocal_5280 = 0;
	var uLocal_5281 = 0;
	var uLocal_5282 = 0;
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 32;
	var uLocal_5288 = 0;
	var uLocal_5289 = 0;
	var uLocal_5290 = 0;
	var uLocal_5291 = 0;
	var uLocal_5292 = 0;
	var uLocal_5293 = 0;
	var uLocal_5294 = 0;
	var uLocal_5295 = 0;
	var uLocal_5296 = 0;
	var uLocal_5297 = 0;
	var uLocal_5298 = 0;
	var uLocal_5299 = 0;
	var uLocal_5300 = 0;
	var uLocal_5301 = 0;
	var uLocal_5302 = 0;
	var uLocal_5303 = 0;
	var uLocal_5304 = 0;
	var uLocal_5305 = 0;
	var uLocal_5306 = 0;
	var uLocal_5307 = 0;
	var uLocal_5308 = 0;
	var uLocal_5309 = 0;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	var uLocal_5315 = 0;
	var uLocal_5316 = 0;
	var uLocal_5317 = 0;
	var uLocal_5318 = 0;
	var uLocal_5319 = 0;
	var uLocal_5320 = 75;
	var uLocal_5321 = 0;
	var uLocal_5322 = 0;
	var uLocal_5323 = 0;
	var uLocal_5324 = 0;
	var uLocal_5325 = 0;
	var uLocal_5326 = 0;
	var uLocal_5327 = 0;
	var uLocal_5328 = 0;
	var uLocal_5329 = 0;
	var uLocal_5330 = 0;
	var uLocal_5331 = 0;
	var uLocal_5332 = 0;
	var uLocal_5333 = 0;
	var uLocal_5334 = 0;
	var uLocal_5335 = 0;
	var uLocal_5336 = 0;
	var uLocal_5337 = 0;
	var uLocal_5338 = 0;
	var uLocal_5339 = 0;
	var uLocal_5340 = 0;
	var uLocal_5341 = 0;
	var uLocal_5342 = 0;
	var uLocal_5343 = 0;
	var uLocal_5344 = 0;
	var uLocal_5345 = 0;
	var uLocal_5346 = 0;
	var uLocal_5347 = 0;
	var uLocal_5348 = 0;
	var uLocal_5349 = 0;
	var uLocal_5350 = 0;
	var uLocal_5351 = 0;
	var uLocal_5352 = 0;
	var uLocal_5353 = 0;
	var uLocal_5354 = 0;
	var uLocal_5355 = 0;
	var uLocal_5356 = 0;
	var uLocal_5357 = 0;
	var uLocal_5358 = 0;
	var uLocal_5359 = 0;
	var uLocal_5360 = 0;
	var uLocal_5361 = 0;
	var uLocal_5362 = 0;
	var uLocal_5363 = 0;
	var uLocal_5364 = 0;
	var uLocal_5365 = 0;
	var uLocal_5366 = 0;
	var uLocal_5367 = 0;
	var uLocal_5368 = 0;
	var uLocal_5369 = 0;
	var uLocal_5370 = 0;
	var uLocal_5371 = 0;
	var uLocal_5372 = 0;
	var uLocal_5373 = 0;
	var uLocal_5374 = 0;
	var uLocal_5375 = 0;
	var uLocal_5376 = 0;
	var uLocal_5377 = 0;
	var uLocal_5378 = 0;
	var uLocal_5379 = 0;
	var uLocal_5380 = 0;
	var uLocal_5381 = 0;
	var uLocal_5382 = 0;
	var uLocal_5383 = 0;
	var uLocal_5384 = 0;
	var uLocal_5385 = 0;
	var uLocal_5386 = 0;
	var uLocal_5387 = 0;
	var uLocal_5388 = 0;
	var uLocal_5389 = 0;
	var uLocal_5390 = 0;
	var uLocal_5391 = 0;
	var uLocal_5392 = 0;
	var uLocal_5393 = 0;
	var uLocal_5394 = 0;
	var uLocal_5395 = 0;
	var uLocal_5396 = 32;
	var uLocal_5397 = 0;
	var uLocal_5398 = 0;
	var uLocal_5399 = 0;
	var uLocal_5400 = 0;
	var uLocal_5401 = 0;
	var uLocal_5402 = 0;
	var uLocal_5403 = 0;
	var uLocal_5404 = 0;
	var uLocal_5405 = 0;
	var uLocal_5406 = 0;
	var uLocal_5407 = 0;
	var uLocal_5408 = 0;
	var uLocal_5409 = 0;
	var uLocal_5410 = 0;
	var uLocal_5411 = 0;
	var uLocal_5412 = 0;
	var uLocal_5413 = 0;
	var uLocal_5414 = 0;
	var uLocal_5415 = 0;
	var uLocal_5416 = 0;
	var uLocal_5417 = 0;
	var uLocal_5418 = 0;
	var uLocal_5419 = 0;
	var uLocal_5420 = 0;
	var uLocal_5421 = 0;
	var uLocal_5422 = 0;
	var uLocal_5423 = 0;
	var uLocal_5424 = 0;
	var uLocal_5425 = 0;
	var uLocal_5426 = 0;
	var uLocal_5427 = 0;
	var uLocal_5428 = 0;
	var uLocal_5429 = 10;
	var uLocal_5430 = 0;
	var uLocal_5431 = 0;
	var uLocal_5432 = 0;
	var uLocal_5433 = 0;
	var uLocal_5434 = 0;
	var uLocal_5435 = 0;
	var uLocal_5436 = 0;
	var uLocal_5437 = 0;
	var uLocal_5438 = 0;
	var uLocal_5439 = 0;
	var uLocal_5440 = 0;
	var uLocal_5441 = 0;
	var uLocal_5442 = 0;
	var uLocal_5443 = 0;
	var uLocal_5444 = 0;
	var uLocal_5445 = 0;
	var uLocal_5446 = 0;
	var uLocal_5447 = 0;
	var uLocal_5448 = 0;
	var uLocal_5449 = 0;
	var uLocal_5450 = 0;
	var uLocal_5451 = 0;
	var uLocal_5452 = 0;
	var uLocal_5453 = 0;
	var uLocal_5454 = 0;
	var uLocal_5455 = 0;
	var uLocal_5456 = 0;
	var uLocal_5457 = 0;
	var uLocal_5458 = 0;
	var uLocal_5459 = 0;
	var uLocal_5460 = 0;
	var uLocal_5461 = 0;
	var uLocal_5462 = 0;
	var uLocal_5463 = 0;
	var uLocal_5464 = 0;
	var uLocal_5465 = 0;
	var uLocal_5466 = 0;
	var uLocal_5467 = 0;
	var uLocal_5468 = 0;
	var uLocal_5469 = 0;
	var uLocal_5470 = 0;
	var uLocal_5471 = 0;
	var uLocal_5472 = 0;
	var uLocal_5473 = 0;
	var uLocal_5474 = 0;
	var uLocal_5475 = 0;
	var uLocal_5476 = 0;
	var uLocal_5477 = 0;
	var uLocal_5478 = 0;
	var uLocal_5479 = 0;
	var uLocal_5480 = 75;
	var uLocal_5481 = 0;
	var uLocal_5482 = 0;
	var uLocal_5483 = 0;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 0;
	var uLocal_5488 = 0;
	var uLocal_5489 = 0;
	var uLocal_5490 = 0;
	var uLocal_5491 = 0;
	var uLocal_5492 = 0;
	var uLocal_5493 = 0;
	var uLocal_5494 = 0;
	var uLocal_5495 = 0;
	var uLocal_5496 = 0;
	var uLocal_5497 = 0;
	var uLocal_5498 = 0;
	var uLocal_5499 = 0;
	var uLocal_5500 = 0;
	var uLocal_5501 = 0;
	var uLocal_5502 = 0;
	var uLocal_5503 = 0;
	var uLocal_5504 = 0;
	var uLocal_5505 = 0;
	var uLocal_5506 = 0;
	var uLocal_5507 = 0;
	var uLocal_5508 = 0;
	var uLocal_5509 = 0;
	var uLocal_5510 = 0;
	var uLocal_5511 = 0;
	var uLocal_5512 = 0;
	var uLocal_5513 = 0;
	var uLocal_5514 = 0;
	var uLocal_5515 = 0;
	var uLocal_5516 = 0;
	var uLocal_5517 = 0;
	var uLocal_5518 = 0;
	var uLocal_5519 = 0;
	var uLocal_5520 = 0;
	var uLocal_5521 = 0;
	var uLocal_5522 = 0;
	var uLocal_5523 = 0;
	var uLocal_5524 = 0;
	var uLocal_5525 = 0;
	var uLocal_5526 = 0;
	var uLocal_5527 = 0;
	var uLocal_5528 = 0;
	var uLocal_5529 = 0;
	var uLocal_5530 = 0;
	var uLocal_5531 = 0;
	var uLocal_5532 = 0;
	var uLocal_5533 = 0;
	var uLocal_5534 = 0;
	var uLocal_5535 = 0;
	var uLocal_5536 = 0;
	var uLocal_5537 = 0;
	var uLocal_5538 = 0;
	var uLocal_5539 = 0;
	var uLocal_5540 = 0;
	var uLocal_5541 = 0;
	var uLocal_5542 = 0;
	var uLocal_5543 = 0;
	var uLocal_5544 = 0;
	var uLocal_5545 = 0;
	var uLocal_5546 = 0;
	var uLocal_5547 = 0;
	var uLocal_5548 = 0;
	var uLocal_5549 = 0;
	var uLocal_5550 = 0;
	var uLocal_5551 = 0;
	var uLocal_5552 = 0;
	var uLocal_5553 = 0;
	var uLocal_5554 = 0;
	var uLocal_5555 = 0;
	var uLocal_5556 = 0;
	var uLocal_5557 = 0;
	var uLocal_5558 = 0;
	var uLocal_5559 = 0;
	var uLocal_5560 = 0;
	var uLocal_5561 = 0;
	var uLocal_5562 = 0;
	var uLocal_5563 = 0;
	var uLocal_5564 = 0;
	var uLocal_5565 = 0;
	var uLocal_5566 = 0;
	var uLocal_5567 = 0;
	var uLocal_5568 = 0;
	var uLocal_5569 = 0;
	var uLocal_5570 = 0;
	var uLocal_5571 = 0;
	var uLocal_5572 = 0;
	var uLocal_5573 = 0;
	var uLocal_5574 = 0;
	var uLocal_5575 = 0;
	var uLocal_5576 = 0;
	var uLocal_5577 = 0;
	var uLocal_5578 = 0;
	var uLocal_5579 = 0;
	var uLocal_5580 = 0;
	var uLocal_5581 = 0;
	var uLocal_5582 = 0;
	var uLocal_5583 = 0;
	var uLocal_5584 = 0;
	var uLocal_5585 = 0;
	var uLocal_5586 = 0;
	var uLocal_5587 = 0;
	var uLocal_5588 = 0;
	var uLocal_5589 = 0;
	var uLocal_5590 = 0;
	var uLocal_5591 = 0;
	var uLocal_5592 = 0;
	var uLocal_5593 = 0;
	var uLocal_5594 = 0;
	var uLocal_5595 = 0;
	var uLocal_5596 = 0;
	var uLocal_5597 = 0;
	var uLocal_5598 = 0;
	var uLocal_5599 = 0;
	var uLocal_5600 = 0;
	var uLocal_5601 = 0;
	var uLocal_5602 = 0;
	var uLocal_5603 = 0;
	var uLocal_5604 = 0;
	var uLocal_5605 = 0;
	var uLocal_5606 = 0;
	var uLocal_5607 = 0;
	var uLocal_5608 = 0;
	var uLocal_5609 = 0;
	var uLocal_5610 = 0;
	var uLocal_5611 = 0;
	var uLocal_5612 = 0;
	var uLocal_5613 = 0;
	var uLocal_5614 = 0;
	var uLocal_5615 = 0;
	var uLocal_5616 = 0;
	var uLocal_5617 = 0;
	var uLocal_5618 = 0;
	var uLocal_5619 = 0;
	var uLocal_5620 = 0;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = 0;
	var uLocal_5624 = 0;
	var uLocal_5625 = 0;
	var uLocal_5626 = 0;
	var uLocal_5627 = 0;
	var uLocal_5628 = 0;
	var uLocal_5629 = 0;
	var uLocal_5630 = 0;
	var uLocal_5631 = 75;
	var uLocal_5632 = 0;
	var uLocal_5633 = 0;
	var uLocal_5634 = 0;
	var uLocal_5635 = 0;
	var uLocal_5636 = 0;
	var uLocal_5637 = 0;
	var uLocal_5638 = 0;
	var uLocal_5639 = 0;
	var uLocal_5640 = 0;
	var uLocal_5641 = 0;
	var uLocal_5642 = 0;
	var uLocal_5643 = 0;
	var uLocal_5644 = 0;
	var uLocal_5645 = 0;
	var uLocal_5646 = 0;
	var uLocal_5647 = 0;
	var uLocal_5648 = 0;
	var uLocal_5649 = 0;
	var uLocal_5650 = 0;
	var uLocal_5651 = 0;
	var uLocal_5652 = 0;
	var uLocal_5653 = 0;
	var uLocal_5654 = 0;
	var uLocal_5655 = 0;
	var uLocal_5656 = 0;
	var uLocal_5657 = 0;
	var uLocal_5658 = 0;
	var uLocal_5659 = 0;
	var uLocal_5660 = 0;
	var uLocal_5661 = 0;
	var uLocal_5662 = 0;
	var uLocal_5663 = 0;
	var uLocal_5664 = 0;
	var uLocal_5665 = 0;
	var uLocal_5666 = 0;
	var uLocal_5667 = 0;
	var uLocal_5668 = 0;
	var uLocal_5669 = 0;
	var uLocal_5670 = 0;
	var uLocal_5671 = 0;
	var uLocal_5672 = 0;
	var uLocal_5673 = 0;
	var uLocal_5674 = 0;
	var uLocal_5675 = 0;
	var uLocal_5676 = 0;
	var uLocal_5677 = 0;
	var uLocal_5678 = 0;
	var uLocal_5679 = 0;
	var uLocal_5680 = 0;
	var uLocal_5681 = 0;
	var uLocal_5682 = 0;
	var uLocal_5683 = 0;
	var uLocal_5684 = 0;
	var uLocal_5685 = 0;
	var uLocal_5686 = 0;
	var uLocal_5687 = 0;
	var uLocal_5688 = 0;
	var uLocal_5689 = 0;
	var uLocal_5690 = 0;
	var uLocal_5691 = 0;
	var uLocal_5692 = 0;
	var uLocal_5693 = 0;
	var uLocal_5694 = 0;
	var uLocal_5695 = 0;
	var uLocal_5696 = 0;
	var uLocal_5697 = 0;
	var uLocal_5698 = 0;
	var uLocal_5699 = 0;
	var uLocal_5700 = 0;
	var uLocal_5701 = 0;
	var uLocal_5702 = 0;
	var uLocal_5703 = 0;
	var uLocal_5704 = 0;
	var uLocal_5705 = 0;
	var uLocal_5706 = 0;
	var uLocal_5707 = 0;
	var uLocal_5708 = 0;
	var uLocal_5709 = 0;
	var uLocal_5710 = 0;
	var uLocal_5711 = 0;
	var uLocal_5712 = 0;
	var uLocal_5713 = 0;
	var uLocal_5714 = 0;
	var uLocal_5715 = 0;
	var uLocal_5716 = 0;
	var uLocal_5717 = 0;
	var uLocal_5718 = 0;
	var uLocal_5719 = 0;
	var uLocal_5720 = 0;
	var uLocal_5721 = 0;
	var uLocal_5722 = 0;
	var uLocal_5723 = 0;
	var uLocal_5724 = 0;
	var uLocal_5725 = 0;
	var uLocal_5726 = 0;
	var uLocal_5727 = 0;
	var uLocal_5728 = 0;
	var uLocal_5729 = 0;
	var uLocal_5730 = 0;
	var uLocal_5731 = 0;
	var uLocal_5732 = 0;
	var uLocal_5733 = 0;
	var uLocal_5734 = 0;
	var uLocal_5735 = 0;
	var uLocal_5736 = 0;
	var uLocal_5737 = 0;
	var uLocal_5738 = 0;
	var uLocal_5739 = 0;
	var uLocal_5740 = 0;
	var uLocal_5741 = 0;
	var uLocal_5742 = 0;
	var uLocal_5743 = 0;
	var uLocal_5744 = 0;
	var uLocal_5745 = 0;
	var uLocal_5746 = 0;
	var uLocal_5747 = 0;
	var uLocal_5748 = 0;
	var uLocal_5749 = 0;
	var uLocal_5750 = 0;
	var uLocal_5751 = 0;
	var uLocal_5752 = 0;
	var uLocal_5753 = 0;
	var uLocal_5754 = 0;
	var uLocal_5755 = 0;
	var uLocal_5756 = 0;
	var uLocal_5757 = 0;
	var uLocal_5758 = 0;
	var uLocal_5759 = 0;
	var uLocal_5760 = 0;
	var uLocal_5761 = 0;
	var uLocal_5762 = 0;
	var uLocal_5763 = 0;
	var uLocal_5764 = 0;
	var uLocal_5765 = 0;
	var uLocal_5766 = 0;
	var uLocal_5767 = 0;
	var uLocal_5768 = 0;
	var uLocal_5769 = 0;
	var uLocal_5770 = 0;
	var uLocal_5771 = 0;
	var uLocal_5772 = 0;
	var uLocal_5773 = 0;
	var uLocal_5774 = 0;
	var uLocal_5775 = 0;
	var uLocal_5776 = 0;
	var uLocal_5777 = 0;
	var uLocal_5778 = 0;
	var uLocal_5779 = 0;
	var uLocal_5780 = 0;
	var uLocal_5781 = 0;
	var uLocal_5782 = 32;
	var uLocal_5783 = 0;
	var uLocal_5784 = 0;
	var uLocal_5785 = 0;
	var uLocal_5786 = 0;
	var uLocal_5787 = 0;
	var uLocal_5788 = 0;
	var uLocal_5789 = 0;
	var uLocal_5790 = 0;
	var uLocal_5791 = 0;
	var uLocal_5792 = 0;
	var uLocal_5793 = 0;
	var uLocal_5794 = 0;
	var uLocal_5795 = 0;
	var uLocal_5796 = 0;
	var uLocal_5797 = 0;
	var uLocal_5798 = 0;
	var uLocal_5799 = 0;
	var uLocal_5800 = 0;
	var uLocal_5801 = 0;
	var uLocal_5802 = 0;
	var uLocal_5803 = 0;
	var uLocal_5804 = 0;
	var uLocal_5805 = 0;
	var uLocal_5806 = 0;
	var uLocal_5807 = 0;
	var uLocal_5808 = 0;
	var uLocal_5809 = 0;
	var uLocal_5810 = 0;
	var uLocal_5811 = 0;
	var uLocal_5812 = 0;
	var uLocal_5813 = 0;
	var uLocal_5814 = 0;
	var uLocal_5815 = 0;
	var uLocal_5816 = 0;
	var uLocal_5817 = 0;
	var uLocal_5818 = 0;
	var uLocal_5819 = 0;
	var uLocal_5820 = 0;
	var uLocal_5821 = 0;
	var uLocal_5822 = 0;
	var uLocal_5823 = 0;
	var uLocal_5824 = 0;
	var uLocal_5825 = 0;
	var uLocal_5826 = 0;
	var uLocal_5827 = 0;
	var uLocal_5828 = 0;
	var uLocal_5829 = 0;
	var uLocal_5830 = 0;
	var uLocal_5831 = 0;
	var uLocal_5832 = 0;
	var uLocal_5833 = 0;
	var uLocal_5834 = 0;
	var uLocal_5835 = 0;
	var uLocal_5836 = 0;
	var uLocal_5837 = 0;
	var uLocal_5838 = 0;
	var uLocal_5839 = 0;
	var uLocal_5840 = 0;
	var uLocal_5841 = 0;
	var uLocal_5842 = 0;
	var uLocal_5843 = 0;
	var uLocal_5844 = 0;
	var uLocal_5845 = 0;
	var uLocal_5846 = 0;
	var uLocal_5847 = 0;
	var uLocal_5848 = 0;
	var uLocal_5849 = 0;
	var uLocal_5850 = 0;
	var uLocal_5851 = 0;
	var uLocal_5852 = 0;
	var uLocal_5853 = 0;
	var uLocal_5854 = 0;
	var uLocal_5855 = 0;
	var uLocal_5856 = 0;
	var uLocal_5857 = 0;
	var uLocal_5858 = 0;
	var uLocal_5859 = 0;
	var uLocal_5860 = 0;
	var uLocal_5861 = 0;
	var uLocal_5862 = 0;
	var uLocal_5863 = 0;
	var uLocal_5864 = 623901053;
	var uLocal_5865 = 6;
	var uLocal_5866 = 0;
	var uLocal_5867 = 0;
	var uLocal_5868 = 0;
	var uLocal_5869 = 0;
	var uLocal_5870 = 0;
	var uLocal_5871 = 0;
	var uLocal_5872 = 0;
	var uLocal_5873 = 0;
	var uLocal_5874 = 0;
	var uLocal_5875 = 0;
	var uLocal_5876 = 0;
	var uLocal_5877 = 0;
	var uLocal_5878 = 0;
	var uLocal_5879 = 1048576000;
	var uLocal_5880 = 1092616192;
	var uLocal_5881 = -1082130432;
	var uLocal_5882 = -1082130432;
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 0;
	var uLocal_5891 = 0;
	var uLocal_5892 = 0;
	var uLocal_5893 = 4;
	var uLocal_5894 = 0;
	var uLocal_5895 = 0;
	var uLocal_5896 = -1;
	var uLocal_5897 = -1;
	var uLocal_5898 = 0;
	var uLocal_5899 = -1;
	var uLocal_5900 = -1;
	var uLocal_5901 = -1;
	var uLocal_5902 = -1;
	var uLocal_5903 = 0;
	var uLocal_5904 = 0;
	var uLocal_5905 = 0;
	var uLocal_5906 = 0;
	var uLocal_5907 = -1;
	var uLocal_5908 = 255;
	var uLocal_5909 = 0;
	var uLocal_5910 = 0;
	var uLocal_5911 = 0;
	var uLocal_5912 = 0;
	var uLocal_5913 = 0;
	var uLocal_5914 = 0;
	var uLocal_5915 = 0;
	var uLocal_5916 = 0;
	var uLocal_5917 = 0;
	var uLocal_5918 = 0;
	var uLocal_5919 = 0;
	var uLocal_5920 = -1;
	var uLocal_5921 = 0;
	var uLocal_5922 = 0;
	var uLocal_5923 = 0;
	var uLocal_5924 = 0;
	var uLocal_5925 = 0;
	var uLocal_5926 = 0;
	var uLocal_5927 = -1;
	var uLocal_5928 = -1;
	var uLocal_5929 = 0;
	var uLocal_5930 = -1;
	var uLocal_5931 = -1;
	var uLocal_5932 = -1;
	var uLocal_5933 = -1;
	var uLocal_5934 = 0;
	var uLocal_5935 = 0;
	var uLocal_5936 = 0;
	var uLocal_5937 = 0;
	var uLocal_5938 = -1;
	var uLocal_5939 = 255;
	var uLocal_5940 = 0;
	var uLocal_5941 = 0;
	var uLocal_5942 = 0;
	var uLocal_5943 = 0;
	var uLocal_5944 = 0;
	var uLocal_5945 = 0;
	var uLocal_5946 = 0;
	var uLocal_5947 = 0;
	var uLocal_5948 = 0;
	var uLocal_5949 = 0;
	var uLocal_5950 = 0;
	var uLocal_5951 = -1;
	var uLocal_5952 = 0;
	var uLocal_5953 = 0;
	var uLocal_5954 = 0;
	var uLocal_5955 = 0;
	var uLocal_5956 = 0;
	var uLocal_5957 = 0;
	var uLocal_5958 = -1;
	var uLocal_5959 = -1;
	var uLocal_5960 = 0;
	var uLocal_5961 = -1;
	var uLocal_5962 = -1;
	var uLocal_5963 = -1;
	var uLocal_5964 = -1;
	var uLocal_5965 = 0;
	var uLocal_5966 = 0;
	var uLocal_5967 = 0;
	var uLocal_5968 = 0;
	var uLocal_5969 = -1;
	var uLocal_5970 = 255;
	var uLocal_5971 = 0;
	var uLocal_5972 = 0;
	var uLocal_5973 = 0;
	var uLocal_5974 = 0;
	var uLocal_5975 = 0;
	var uLocal_5976 = 0;
	var uLocal_5977 = 0;
	var uLocal_5978 = 0;
	var uLocal_5979 = 0;
	var uLocal_5980 = 0;
	var uLocal_5981 = 0;
	var uLocal_5982 = -1;
	var uLocal_5983 = 0;
	var uLocal_5984 = 0;
	var uLocal_5985 = 0;
	var uLocal_5986 = 0;
	var uLocal_5987 = 0;
	var uLocal_5988 = 0;
	var uLocal_5989 = -1;
	var uLocal_5990 = -1;
	var uLocal_5991 = 0;
	var uLocal_5992 = -1;
	var uLocal_5993 = -1;
	var uLocal_5994 = -1;
	var uLocal_5995 = -1;
	var uLocal_5996 = 0;
	var uLocal_5997 = 0;
	var uLocal_5998 = 0;
	var uLocal_5999 = 0;
	var uLocal_6000 = -1;
	var uLocal_6001 = 255;
	var uLocal_6002 = 0;
	var uLocal_6003 = 0;
	var uLocal_6004 = 0;
	var uLocal_6005 = 0;
	var uLocal_6006 = 0;
	var uLocal_6007 = 0;
	var uLocal_6008 = 0;
	var uLocal_6009 = 0;
	var uLocal_6010 = 0;
	var uLocal_6011 = 0;
	var uLocal_6012 = 0;
	var uLocal_6013 = -1;
	var uLocal_6014 = 0;
	var uLocal_6015 = 0;
	var uLocal_6016 = 0;
	var uLocal_6017 = 0;
	var uLocal_6018 = 20;
	var uLocal_6019 = 0;
	var uLocal_6020 = 0;
	var uLocal_6021 = -1;
	var uLocal_6022 = -1;
	var uLocal_6023 = 0;
	var uLocal_6024 = -1;
	var uLocal_6025 = -1;
	var uLocal_6026 = -1;
	var uLocal_6027 = -1;
	var uLocal_6028 = 0;
	var uLocal_6029 = 0;
	var uLocal_6030 = 0;
	var uLocal_6031 = 0;
	var uLocal_6032 = -1;
	var uLocal_6033 = 255;
	var uLocal_6034 = 0;
	var uLocal_6035 = 0;
	var uLocal_6036 = 0;
	var uLocal_6037 = 0;
	var uLocal_6038 = 0;
	var uLocal_6039 = 0;
	var uLocal_6040 = 0;
	var uLocal_6041 = 0;
	var uLocal_6042 = 0;
	var uLocal_6043 = 0;
	var uLocal_6044 = 0;
	var uLocal_6045 = -1;
	var uLocal_6046 = 0;
	var uLocal_6047 = 0;
	var uLocal_6048 = 0;
	var uLocal_6049 = 0;
	var uLocal_6050 = 0;
	var uLocal_6051 = 0;
	var uLocal_6052 = -1;
	var uLocal_6053 = -1;
	var uLocal_6054 = 0;
	var uLocal_6055 = -1;
	var uLocal_6056 = -1;
	var uLocal_6057 = -1;
	var uLocal_6058 = -1;
	var uLocal_6059 = 0;
	var uLocal_6060 = 0;
	var uLocal_6061 = 0;
	var uLocal_6062 = 0;
	var uLocal_6063 = -1;
	var uLocal_6064 = 255;
	var uLocal_6065 = 0;
	var uLocal_6066 = 0;
	var uLocal_6067 = 0;
	var uLocal_6068 = 0;
	var uLocal_6069 = 0;
	var uLocal_6070 = 0;
	var uLocal_6071 = 0;
	var uLocal_6072 = 0;
	var uLocal_6073 = 0;
	var uLocal_6074 = 0;
	var uLocal_6075 = 0;
	var uLocal_6076 = -1;
	var uLocal_6077 = 0;
	var uLocal_6078 = 0;
	var uLocal_6079 = 0;
	var uLocal_6080 = 0;
	var uLocal_6081 = 0;
	var uLocal_6082 = 0;
	var uLocal_6083 = -1;
	var uLocal_6084 = -1;
	var uLocal_6085 = 0;
	var uLocal_6086 = -1;
	var uLocal_6087 = -1;
	var uLocal_6088 = -1;
	var uLocal_6089 = -1;
	var uLocal_6090 = 0;
	var uLocal_6091 = 0;
	var uLocal_6092 = 0;
	var uLocal_6093 = 0;
	var uLocal_6094 = -1;
	var uLocal_6095 = 255;
	var uLocal_6096 = 0;
	var uLocal_6097 = 0;
	var uLocal_6098 = 0;
	var uLocal_6099 = 0;
	var uLocal_6100 = 0;
	var uLocal_6101 = 0;
	var uLocal_6102 = 0;
	var uLocal_6103 = 0;
	var uLocal_6104 = 0;
	var uLocal_6105 = 0;
	var uLocal_6106 = 0;
	var uLocal_6107 = -1;
	var uLocal_6108 = 0;
	var uLocal_6109 = 0;
	var uLocal_6110 = 0;
	var uLocal_6111 = 0;
	var uLocal_6112 = 0;
	var uLocal_6113 = 0;
	var uLocal_6114 = -1;
	var uLocal_6115 = -1;
	var uLocal_6116 = 0;
	var uLocal_6117 = -1;
	var uLocal_6118 = -1;
	var uLocal_6119 = -1;
	var uLocal_6120 = -1;
	var uLocal_6121 = 0;
	var uLocal_6122 = 0;
	var uLocal_6123 = 0;
	var uLocal_6124 = 0;
	var uLocal_6125 = -1;
	var uLocal_6126 = 255;
	var uLocal_6127 = 0;
	var uLocal_6128 = 0;
	var uLocal_6129 = 0;
	var uLocal_6130 = 0;
	var uLocal_6131 = 0;
	var uLocal_6132 = 0;
	var uLocal_6133 = 0;
	var uLocal_6134 = 0;
	var uLocal_6135 = 0;
	var uLocal_6136 = 0;
	var uLocal_6137 = 0;
	var uLocal_6138 = -1;
	var uLocal_6139 = 0;
	var uLocal_6140 = 0;
	var uLocal_6141 = 0;
	var uLocal_6142 = 0;
	var uLocal_6143 = 0;
	var uLocal_6144 = 0;
	var uLocal_6145 = -1;
	var uLocal_6146 = -1;
	var uLocal_6147 = 0;
	var uLocal_6148 = -1;
	var uLocal_6149 = -1;
	var uLocal_6150 = -1;
	var uLocal_6151 = -1;
	var uLocal_6152 = 0;
	var uLocal_6153 = 0;
	var uLocal_6154 = 0;
	var uLocal_6155 = 0;
	var uLocal_6156 = -1;
	var uLocal_6157 = 255;
	var uLocal_6158 = 0;
	var uLocal_6159 = 0;
	var uLocal_6160 = 0;
	var uLocal_6161 = 0;
	var uLocal_6162 = 0;
	var uLocal_6163 = 0;
	var uLocal_6164 = 0;
	var uLocal_6165 = 0;
	var uLocal_6166 = 0;
	var uLocal_6167 = 0;
	var uLocal_6168 = 0;
	var uLocal_6169 = -1;
	var uLocal_6170 = 0;
	var uLocal_6171 = 0;
	var uLocal_6172 = 0;
	var uLocal_6173 = 0;
	var uLocal_6174 = 0;
	var uLocal_6175 = 0;
	var uLocal_6176 = -1;
	var uLocal_6177 = -1;
	var uLocal_6178 = 0;
	var uLocal_6179 = -1;
	var uLocal_6180 = -1;
	var uLocal_6181 = -1;
	var uLocal_6182 = -1;
	var uLocal_6183 = 0;
	var uLocal_6184 = 0;
	var uLocal_6185 = 0;
	var uLocal_6186 = 0;
	var uLocal_6187 = -1;
	var uLocal_6188 = 255;
	var uLocal_6189 = 0;
	var uLocal_6190 = 0;
	var uLocal_6191 = 0;
	var uLocal_6192 = 0;
	var uLocal_6193 = 0;
	var uLocal_6194 = 0;
	var uLocal_6195 = 0;
	var uLocal_6196 = 0;
	var uLocal_6197 = 0;
	var uLocal_6198 = 0;
	var uLocal_6199 = 0;
	var uLocal_6200 = -1;
	var uLocal_6201 = 0;
	var uLocal_6202 = 0;
	var uLocal_6203 = 0;
	var uLocal_6204 = 0;
	var uLocal_6205 = 0;
	var uLocal_6206 = 0;
	var uLocal_6207 = -1;
	var uLocal_6208 = -1;
	var uLocal_6209 = 0;
	var uLocal_6210 = -1;
	var uLocal_6211 = -1;
	var uLocal_6212 = -1;
	var uLocal_6213 = -1;
	var uLocal_6214 = 0;
	var uLocal_6215 = 0;
	var uLocal_6216 = 0;
	var uLocal_6217 = 0;
	var uLocal_6218 = -1;
	var uLocal_6219 = 255;
	var uLocal_6220 = 0;
	var uLocal_6221 = 0;
	var uLocal_6222 = 0;
	var uLocal_6223 = 0;
	var uLocal_6224 = 0;
	var uLocal_6225 = 0;
	var uLocal_6226 = 0;
	var uLocal_6227 = 0;
	var uLocal_6228 = 0;
	var uLocal_6229 = 0;
	var uLocal_6230 = 0;
	var uLocal_6231 = -1;
	var uLocal_6232 = 0;
	var uLocal_6233 = 0;
	var uLocal_6234 = 0;
	var uLocal_6235 = 0;
	var uLocal_6236 = 0;
	var uLocal_6237 = 0;
	var uLocal_6238 = -1;
	var uLocal_6239 = -1;
	var uLocal_6240 = 0;
	var uLocal_6241 = -1;
	var uLocal_6242 = -1;
	var uLocal_6243 = -1;
	var uLocal_6244 = -1;
	var uLocal_6245 = 0;
	var uLocal_6246 = 0;
	var uLocal_6247 = 0;
	var uLocal_6248 = 0;
	var uLocal_6249 = -1;
	var uLocal_6250 = 255;
	var uLocal_6251 = 0;
	var uLocal_6252 = 0;
	var uLocal_6253 = 0;
	var uLocal_6254 = 0;
	var uLocal_6255 = 0;
	var uLocal_6256 = 0;
	var uLocal_6257 = 0;
	var uLocal_6258 = 0;
	var uLocal_6259 = 0;
	var uLocal_6260 = 0;
	var uLocal_6261 = 0;
	var uLocal_6262 = -1;
	var uLocal_6263 = 0;
	var uLocal_6264 = 0;
	var uLocal_6265 = 0;
	var uLocal_6266 = 0;
	var uLocal_6267 = 0;
	var uLocal_6268 = 0;
	var uLocal_6269 = -1;
	var uLocal_6270 = -1;
	var uLocal_6271 = 0;
	var uLocal_6272 = -1;
	var uLocal_6273 = -1;
	var uLocal_6274 = -1;
	var uLocal_6275 = -1;
	var uLocal_6276 = 0;
	var uLocal_6277 = 0;
	var uLocal_6278 = 0;
	var uLocal_6279 = 0;
	var uLocal_6280 = -1;
	var uLocal_6281 = 255;
	var uLocal_6282 = 0;
	var uLocal_6283 = 0;
	var uLocal_6284 = 0;
	var uLocal_6285 = 0;
	var uLocal_6286 = 0;
	var uLocal_6287 = 0;
	var uLocal_6288 = 0;
	var uLocal_6289 = 0;
	var uLocal_6290 = 0;
	var uLocal_6291 = 0;
	var uLocal_6292 = 0;
	var uLocal_6293 = -1;
	var uLocal_6294 = 0;
	var uLocal_6295 = 0;
	var uLocal_6296 = 0;
	var uLocal_6297 = 0;
	var uLocal_6298 = 0;
	var uLocal_6299 = 0;
	var uLocal_6300 = -1;
	var uLocal_6301 = -1;
	var uLocal_6302 = 0;
	var uLocal_6303 = -1;
	var uLocal_6304 = -1;
	var uLocal_6305 = -1;
	var uLocal_6306 = -1;
	var uLocal_6307 = 0;
	var uLocal_6308 = 0;
	var uLocal_6309 = 0;
	var uLocal_6310 = 0;
	var uLocal_6311 = -1;
	var uLocal_6312 = 255;
	var uLocal_6313 = 0;
	var uLocal_6314 = 0;
	var uLocal_6315 = 0;
	var uLocal_6316 = 0;
	var uLocal_6317 = 0;
	var uLocal_6318 = 0;
	var uLocal_6319 = 0;
	var uLocal_6320 = 0;
	var uLocal_6321 = 0;
	var uLocal_6322 = 0;
	var uLocal_6323 = 0;
	var uLocal_6324 = -1;
	var uLocal_6325 = 0;
	var uLocal_6326 = 0;
	var uLocal_6327 = 0;
	var uLocal_6328 = 0;
	var uLocal_6329 = 0;
	var uLocal_6330 = 0;
	var uLocal_6331 = -1;
	var uLocal_6332 = -1;
	var uLocal_6333 = 0;
	var uLocal_6334 = -1;
	var uLocal_6335 = -1;
	var uLocal_6336 = -1;
	var uLocal_6337 = -1;
	var uLocal_6338 = 0;
	var uLocal_6339 = 0;
	var uLocal_6340 = 0;
	var uLocal_6341 = 0;
	var uLocal_6342 = -1;
	var uLocal_6343 = 255;
	var uLocal_6344 = 0;
	var uLocal_6345 = 0;
	var uLocal_6346 = 0;
	var uLocal_6347 = 0;
	var uLocal_6348 = 0;
	var uLocal_6349 = 0;
	var uLocal_6350 = 0;
	var uLocal_6351 = 0;
	var uLocal_6352 = 0;
	var uLocal_6353 = 0;
	var uLocal_6354 = 0;
	var uLocal_6355 = -1;
	var uLocal_6356 = 0;
	var uLocal_6357 = 0;
	var uLocal_6358 = 0;
	var uLocal_6359 = 0;
	var uLocal_6360 = 0;
	var uLocal_6361 = 0;
	var uLocal_6362 = -1;
	var uLocal_6363 = -1;
	var uLocal_6364 = 0;
	var uLocal_6365 = -1;
	var uLocal_6366 = -1;
	var uLocal_6367 = -1;
	var uLocal_6368 = -1;
	var uLocal_6369 = 0;
	var uLocal_6370 = 0;
	var uLocal_6371 = 0;
	var uLocal_6372 = 0;
	var uLocal_6373 = -1;
	var uLocal_6374 = 255;
	var uLocal_6375 = 0;
	var uLocal_6376 = 0;
	var uLocal_6377 = 0;
	var uLocal_6378 = 0;
	var uLocal_6379 = 0;
	var uLocal_6380 = 0;
	var uLocal_6381 = 0;
	var uLocal_6382 = 0;
	var uLocal_6383 = 0;
	var uLocal_6384 = 0;
	var uLocal_6385 = 0;
	var uLocal_6386 = -1;
	var uLocal_6387 = 0;
	var uLocal_6388 = 0;
	var uLocal_6389 = 0;
	var uLocal_6390 = 0;
	var uLocal_6391 = 0;
	var uLocal_6392 = 0;
	var uLocal_6393 = -1;
	var uLocal_6394 = -1;
	var uLocal_6395 = 0;
	var uLocal_6396 = -1;
	var uLocal_6397 = -1;
	var uLocal_6398 = -1;
	var uLocal_6399 = -1;
	var uLocal_6400 = 0;
	var uLocal_6401 = 0;
	var uLocal_6402 = 0;
	var uLocal_6403 = 0;
	var uLocal_6404 = -1;
	var uLocal_6405 = 255;
	var uLocal_6406 = 0;
	var uLocal_6407 = 0;
	var uLocal_6408 = 0;
	var uLocal_6409 = 0;
	var uLocal_6410 = 0;
	var uLocal_6411 = 0;
	var uLocal_6412 = 0;
	var uLocal_6413 = 0;
	var uLocal_6414 = 0;
	var uLocal_6415 = 0;
	var uLocal_6416 = 0;
	var uLocal_6417 = -1;
	var uLocal_6418 = 0;
	var uLocal_6419 = 0;
	var uLocal_6420 = 0;
	var uLocal_6421 = 0;
	var uLocal_6422 = 0;
	var uLocal_6423 = 0;
	var uLocal_6424 = -1;
	var uLocal_6425 = -1;
	var uLocal_6426 = 0;
	var uLocal_6427 = -1;
	var uLocal_6428 = -1;
	var uLocal_6429 = -1;
	var uLocal_6430 = -1;
	var uLocal_6431 = 0;
	var uLocal_6432 = 0;
	var uLocal_6433 = 0;
	var uLocal_6434 = 0;
	var uLocal_6435 = -1;
	var uLocal_6436 = 255;
	var uLocal_6437 = 0;
	var uLocal_6438 = 0;
	var uLocal_6439 = 0;
	var uLocal_6440 = 0;
	var uLocal_6441 = 0;
	var uLocal_6442 = 0;
	var uLocal_6443 = 0;
	var uLocal_6444 = 0;
	var uLocal_6445 = 0;
	var uLocal_6446 = 0;
	var uLocal_6447 = 0;
	var uLocal_6448 = -1;
	var uLocal_6449 = 0;
	var uLocal_6450 = 0;
	var uLocal_6451 = 0;
	var uLocal_6452 = 0;
	var uLocal_6453 = 0;
	var uLocal_6454 = 0;
	var uLocal_6455 = -1;
	var uLocal_6456 = -1;
	var uLocal_6457 = 0;
	var uLocal_6458 = -1;
	var uLocal_6459 = -1;
	var uLocal_6460 = -1;
	var uLocal_6461 = -1;
	var uLocal_6462 = 0;
	var uLocal_6463 = 0;
	var uLocal_6464 = 0;
	var uLocal_6465 = 0;
	var uLocal_6466 = -1;
	var uLocal_6467 = 255;
	var uLocal_6468 = 0;
	var uLocal_6469 = 0;
	var uLocal_6470 = 0;
	var uLocal_6471 = 0;
	var uLocal_6472 = 0;
	var uLocal_6473 = 0;
	var uLocal_6474 = 0;
	var uLocal_6475 = 0;
	var uLocal_6476 = 0;
	var uLocal_6477 = 0;
	var uLocal_6478 = 0;
	var uLocal_6479 = -1;
	var uLocal_6480 = 0;
	var uLocal_6481 = 0;
	var uLocal_6482 = 0;
	var uLocal_6483 = 0;
	var uLocal_6484 = 0;
	var uLocal_6485 = 0;
	var uLocal_6486 = -1;
	var uLocal_6487 = -1;
	var uLocal_6488 = 0;
	var uLocal_6489 = -1;
	var uLocal_6490 = -1;
	var uLocal_6491 = -1;
	var uLocal_6492 = -1;
	var uLocal_6493 = 0;
	var uLocal_6494 = 0;
	var uLocal_6495 = 0;
	var uLocal_6496 = 0;
	var uLocal_6497 = -1;
	var uLocal_6498 = 255;
	var uLocal_6499 = 0;
	var uLocal_6500 = 0;
	var uLocal_6501 = 0;
	var uLocal_6502 = 0;
	var uLocal_6503 = 0;
	var uLocal_6504 = 0;
	var uLocal_6505 = 0;
	var uLocal_6506 = 0;
	var uLocal_6507 = 0;
	var uLocal_6508 = 0;
	var uLocal_6509 = 0;
	var uLocal_6510 = -1;
	var uLocal_6511 = 0;
	var uLocal_6512 = 0;
	var uLocal_6513 = 0;
	var uLocal_6514 = 0;
	var uLocal_6515 = 0;
	var uLocal_6516 = 0;
	var uLocal_6517 = -1;
	var uLocal_6518 = -1;
	var uLocal_6519 = 0;
	var uLocal_6520 = -1;
	var uLocal_6521 = -1;
	var uLocal_6522 = -1;
	var uLocal_6523 = -1;
	var uLocal_6524 = 0;
	var uLocal_6525 = 0;
	var uLocal_6526 = 0;
	var uLocal_6527 = 0;
	var uLocal_6528 = -1;
	var uLocal_6529 = 255;
	var uLocal_6530 = 0;
	var uLocal_6531 = 0;
	var uLocal_6532 = 0;
	var uLocal_6533 = 0;
	var uLocal_6534 = 0;
	var uLocal_6535 = 0;
	var uLocal_6536 = 0;
	var uLocal_6537 = 0;
	var uLocal_6538 = 0;
	var uLocal_6539 = 0;
	var uLocal_6540 = 0;
	var uLocal_6541 = -1;
	var uLocal_6542 = 0;
	var uLocal_6543 = 0;
	var uLocal_6544 = 0;
	var uLocal_6545 = 0;
	var uLocal_6546 = 0;
	var uLocal_6547 = 0;
	var uLocal_6548 = -1;
	var uLocal_6549 = -1;
	var uLocal_6550 = 0;
	var uLocal_6551 = -1;
	var uLocal_6552 = -1;
	var uLocal_6553 = -1;
	var uLocal_6554 = -1;
	var uLocal_6555 = 0;
	var uLocal_6556 = 0;
	var uLocal_6557 = 0;
	var uLocal_6558 = 0;
	var uLocal_6559 = -1;
	var uLocal_6560 = 255;
	var uLocal_6561 = 0;
	var uLocal_6562 = 0;
	var uLocal_6563 = 0;
	var uLocal_6564 = 0;
	var uLocal_6565 = 0;
	var uLocal_6566 = 0;
	var uLocal_6567 = 0;
	var uLocal_6568 = 0;
	var uLocal_6569 = 0;
	var uLocal_6570 = 0;
	var uLocal_6571 = 0;
	var uLocal_6572 = -1;
	var uLocal_6573 = 0;
	var uLocal_6574 = 0;
	var uLocal_6575 = 0;
	var uLocal_6576 = 0;
	var uLocal_6577 = 0;
	var uLocal_6578 = 0;
	var uLocal_6579 = -1;
	var uLocal_6580 = -1;
	var uLocal_6581 = 0;
	var uLocal_6582 = -1;
	var uLocal_6583 = -1;
	var uLocal_6584 = -1;
	var uLocal_6585 = -1;
	var uLocal_6586 = 0;
	var uLocal_6587 = 0;
	var uLocal_6588 = 0;
	var uLocal_6589 = 0;
	var uLocal_6590 = -1;
	var uLocal_6591 = 255;
	var uLocal_6592 = 0;
	var uLocal_6593 = 0;
	var uLocal_6594 = 0;
	var uLocal_6595 = 0;
	var uLocal_6596 = 0;
	var uLocal_6597 = 0;
	var uLocal_6598 = 0;
	var uLocal_6599 = 0;
	var uLocal_6600 = 0;
	var uLocal_6601 = 0;
	var uLocal_6602 = 0;
	var uLocal_6603 = -1;
	var uLocal_6604 = 0;
	var uLocal_6605 = 0;
	var uLocal_6606 = 0;
	var uLocal_6607 = 0;
	var uLocal_6608 = 0;
	var uLocal_6609 = 0;
	var uLocal_6610 = -1;
	var uLocal_6611 = -1;
	var uLocal_6612 = 0;
	var uLocal_6613 = -1;
	var uLocal_6614 = -1;
	var uLocal_6615 = -1;
	var uLocal_6616 = -1;
	var uLocal_6617 = 0;
	var uLocal_6618 = 0;
	var uLocal_6619 = 0;
	var uLocal_6620 = 0;
	var uLocal_6621 = -1;
	var uLocal_6622 = 255;
	var uLocal_6623 = 0;
	var uLocal_6624 = 0;
	var uLocal_6625 = 0;
	var uLocal_6626 = 0;
	var uLocal_6627 = 0;
	var uLocal_6628 = 0;
	var uLocal_6629 = 0;
	var uLocal_6630 = 0;
	var uLocal_6631 = 0;
	var uLocal_6632 = 0;
	var uLocal_6633 = 0;
	var uLocal_6634 = -1;
	var uLocal_6635 = 0;
	var uLocal_6636 = 0;
	var uLocal_6637 = 0;
	var uLocal_6638 = 0;
	var uLocal_6639 = 4;
	var uLocal_6640 = 0;
	var uLocal_6641 = 0;
	var uLocal_6642 = 0;
	var uLocal_6643 = 0;
	var uLocal_6644 = 4;
	var uLocal_6645 = 0;
	var uLocal_6646 = 0;
	var uLocal_6647 = 0;
	var uLocal_6648 = 0;
	var uLocal_6649 = -1;
	var uScriptParam_0 = -1;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_13 = 1.124895E-14f;
	fLocal_28 = 1f;
	fLocal_29 = 1f;
	func_1(&uScriptParam_0);
	while (!func_2())
	{
		func_3();
		if (iLocal_31 >= 0 && iLocal_31 < 32)
		{
			iLocal_36 = MISC::GET_GAME_TIMER();
			func_4();
			func_5();
			func_6();
		}
		else
		{
			iVar0 = MISC::GET_GAME_TIMER();
			if (iLocal_36 == 0)
			{
				iLocal_36 = iVar0;
			}
			else if ((iVar0 - iLocal_36) > 30000)
			{
				CAM::DO_SCREEN_FADE_IN(0);
				func_7();
				SCRIPTS::TERMINATE_THIS_THREAD();
			}
		}
		BUILTIN::WAIT(0);
	}
	func_7();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_8(32, *uParam0);
	func_9();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_10();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_37, 403, 48);
	func_11(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Local_37), 403, "sServerBD");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_440, 161, 49);
	func_12(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Local_440[0 /*5*/])), 161, "sClientBD");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_601, 385, 50);
	func_12(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Local_601[0 /*12*/])), 385, "sCutscenePlayerBD");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_986, 1217, 51);
	func_12(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Local_986[0 /*38*/])), 1217, "sVotingPlayerBD");
	while (!NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA() && !func_2())
	{
		BUILTIN::WAIT(0);
	}
	while (!func_13() && !func_2())
	{
		if (!func_14(&uLocal_34))
		{
			func_15(&uLocal_34, 1, 0);
		}
		BUILTIN::WAIT(0);
	}
}

bool func_2()
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED() && SCRIPTS::_GET_THREAD_EXIT_REASON() == 2)
	{
		func_16(1, 2);
	}
	if (func_17(Global_387940.f_6, Global_387940.f_7))
	{
		return true;
	}
	if (Local_37 == 5)
	{
		return true;
	}
	return false;
}

void func_3()
{
	bLocal_30 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
	iLocal_31 = NETWORK::PARTICIPANT_ID_TO_INT();
}

void func_4()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar0 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar1);
		switch (iVar0)
		{
			case -507840394:
				func_18(iVar1);
				break;
		}
		iVar1++;
	}
}

void func_5()
{
	int iVar0;
	int iVar1;

	if (!bLocal_30)
	{
		return;
	}
	while (iVar0 < 6)
	{
		iVar1 = Local_37;
		switch (Local_37)
		{
			case 0:
				if (func_19(1))
				{
					func_20();
					iVar1 = 1;
				}
				break;
			case 1:
				if (func_19(3))
				{
					iVar1 = 2;
				}
				break;
			case 2:
				if (func_21())
				{
					iVar1 = 3;
				}
				break;
			case 3:
				if (func_19(5))
				{
					iVar1 = 4;
				}
				break;
			case 4:
				iVar1 = 5;
				break;
		}
		if (iVar1 != Local_37)
		{
			Local_37 = iVar1;
			iVar0++;
		}
	else
	{
		}
	else
	{
		}
	}
}

void func_6()
{
	int iVar0;
	int iVar1;

	while (iVar0 < 6)
	{
		iVar1 = Local_440[iLocal_31 /*5*/];
		switch (Local_440[iLocal_31 /*5*/])
		{
			case 0:
				if (func_22())
				{
					iVar1 = 1;
				}
				break;
			case 1:
				if (Local_37 >= 1)
				{
					func_23();
					iVar1 = 2;
				}
				break;
			case 2:
				if (func_24())
				{
					iVar1 = 3;
				}
				break;
			case 3:
				if (Local_37 >= 2)
				{
					iVar1 = 4;
				}
				break;
			case 4:
				if (func_25())
				{
					iVar1 = 5;
				}
				break;
		}
		if (iVar1 != Local_440[iLocal_31 /*5*/])
		{
			Local_440[iLocal_31 /*5*/] = iVar1;
			iVar0++;
		}
	else
	{
		}
	else
	{
		}
	}
}

void func_7()
{
	if (func_26())
	{
		func_27(&Local_2203, 12);
	}
	func_28(&Local_2203, &(Local_601[iLocal_31 /*12*/]));
	func_29();
}

void func_8(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_30();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_9()
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
			func_30();
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
				case 1:
					func_30();
					break;
				case 2:
					func_30();
					break;
				case 4:
					func_30();
					break;
				case 3:
					func_30();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_30();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_30();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_30();
		}
		if (func_31() == 0)
		{
			if (func_32())
			{
				func_30();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_30();
	}
	return 1;
}

void func_10()
{
	int iVar0;

	Local_37.f_402 = 255;
	func_33(&(Local_37.f_2[0 /*33*/]));
	iVar0 = 0;
	while (iVar0 < Local_601)
	{
		func_34(&(Local_601[iVar0 /*12*/]));
		iVar0++;
	}
	func_35(&Local_2203);
}

int func_11(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_12(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

bool func_13()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_36(Global_3407872.f_2338, 8))
	{
		return true;
	}
	if (func_14(&uLocal_34) && func_37(&uLocal_34, 1, 0) > 20000)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_3407872[iVar0 /*2*/])))
		{
		}
		else
		{
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Global_3407872[iVar0 /*2*/])))
			{
				return false;
			}
			iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_3407872[iVar0 /*2*/]));
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
			{
				return false;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
			{
				return false;
			}
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_14(var uParam0)
{
	return uParam0->f_1;
}

void func_15(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

void func_16(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (bParam0)
	{
		func_38(iParam1);
		return;
	}
	if (iParam1 == 2)
	{
		iParam1 = 56;
	}
	iVar0 = iParam1;
	bVar1 = !iVar0 & 4 != false;
	bVar2 = iVar0 & 8 != false;
	bVar3 = iVar0 & 16 != false;
	bVar4 = iVar0 & 32 != false;
	bVar5 = iVar0 & 1024 != false;
	bVar6 = iVar0 & 64 != false;
	func_39(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

bool func_17(bool bParam0, bool bParam1)
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

void func_18(int iParam0)
{
	var uVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &uVar0, 4))
	{
		return;
	}
}

bool func_19(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
		}
		else if (Local_440[iVar0 /*5*/] != iParam0)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_20()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_26())
	{
		return;
	}
	Local_37.f_402 = 255;
	iVar0 = 255;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
		{
			if (Local_440[iVar1 /*5*/].f_3 == 0)
			{
			}
			else
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
				if (iVar3 != GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(iVar3)))
				{
					if (iVar0 == 255)
					{
						iVar0 = iVar2;
					}
				}
				else
				{
					Local_37.f_402 = iVar2;
				}
			}
		}
		iVar1++;
	}
	if (Local_37.f_402 == 255)
	{
		if (iVar0 != 255)
		{
			Local_37.f_402 = iVar0;
		}
	}
	if (Local_37.f_402 != 255)
	{
		Local_37.f_400 = Local_440[Local_37.f_402 /*5*/].f_3;
		Local_37.f_401 = Local_440[Local_37.f_402 /*5*/].f_4;
	}
	if (Local_37.f_401 == -1)
	{
		Local_37.f_400 = 0;
	}
}

bool func_21()
{
	switch (Global_3407872.f_65)
	{
		case 1:
			return func_40();
		default:
			break;
	}
	return true;
	return false;
}

bool func_22()
{
	int iVar0;

	if (!func_26())
	{
		return true;
	}
	if (!func_41())
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(-1.252878E-37f))
	{
		MISC::SET_BIT(&(Local_440[iLocal_31 /*5*/].f_3), 0);
		MISC::SET_BIT(&(Local_440[iLocal_31 /*5*/].f_3), 1);
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(-1.382042E-11f))
	{
		MISC::SET_BIT(&(Local_440[iLocal_31 /*5*/].f_3), 3);
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(-3.177733E+18f))
	{
		MISC::SET_BIT(&(Local_440[iLocal_31 /*5*/].f_3), 2);
	}
	iVar0 = func_43(func_42(), 1);
	if (iVar0 == -1)
	{
		Local_440[iLocal_31 /*5*/].f_3 = 0;
	}
	Local_440[iLocal_31 /*5*/].f_4 = iVar0;
	return true;
}

void func_23()
{
	var uVar0;
	int iVar5;

	if (!func_26())
	{
		return;
	}
	if (!func_44())
	{
		return;
	}
	if (Local_37.f_402 == NETWORK::PARTICIPANT_ID())
	{
		uVar0 = 4;
		func_45(&uVar0);
		func_46(&uVar0);
	}
	if (Global_3407872.f_66 == 2)
	{
		func_47(-1, &(Global_3407872.f_67[0 /*2269*/].f_2057[0 /*26*/].f_17), &(Global_3407872.f_67[0 /*2269*/].f_1622[0 /*3*/]), &(Global_3407872.f_67[0 /*2269*/].f_2057[0 /*26*/].f_16), &(Local_37.f_401));
	}
	else
	{
		iVar5 = 0;
		while (iVar5 < 4)
		{
			func_47(iVar5, &(Global_3407872.f_67[0 /*2269*/].f_2057[iVar5 /*26*/].f_17), &(Global_3407872.f_67[0 /*2269*/].f_1622[iVar5 /*3*/]), &(Global_3407872.f_67[0 /*2269*/].f_2057[iVar5 /*26*/].f_16), &(Local_37.f_401));
			iVar5++;
		}
	}
}

bool func_24()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (!func_26())
	{
		return true;
	}
	if (!func_44())
	{
		return true;
	}
	bVar0 = func_48(255);
	bVar1 = ENTITY::IS_ENTITY_DEAD(Global_33);
	bVar2 = Global_1297394.f_29.f_3 == 2;
	if ((!bVar0 && !bVar1) && bVar2)
	{
		return true;
	}
	return false;
}

bool func_25()
{
	func_49();
	switch (Global_3407872.f_65)
	{
		case 1:
			return func_50();
		default:
			break;
	}
	return true;
	return false;
}

bool func_26()
{
	return (Global_3407872.f_66 == 3 || Global_3407872.f_66 == 2);
}

void func_27(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_28(int* iParam0, var uParam1)
{
	MISC::CLEAR_BIT(&(Global_1958621.f_1), 5);
	Global_1048584 = 0;
	STREAMING::CLEAR_FOCUS();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_51(iParam0))
		{
			NETWORK::NETWORK_SET_LOCAL_PLAYER_PENDING_FAST_INSTANCE_ID(256);
			NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(true);
			NETWORK::_0x6C7E04E9DE451789();
		}
	}
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	if (CAM::DOES_CAM_EXIST(iParam0->f_1478))
	{
		CAM::DESTROY_CAM(iParam0->f_1478, false);
	}
	if (func_52(&(iParam0->f_1485)))
	{
		func_53(&(iParam0->f_1485));
	}
	func_54(&(iParam0->f_1485));
	func_55(iParam0, uParam1);
}

void func_29()
{
	struct<68> Var0;

	Var0 = 32;
	Var0.f_67 = 1;
	Var0.f_67.f_1.f_25 = 4;
	Var0.f_67.f_1.f_25.f_1.f_11 = 2;
	Var0.f_67.f_1.f_25.f_1.f_11.f_1.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_11.f_1.f_13.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_11.f_1.f_34.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_11.f_1.f_34.f_13.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_11 = 2;
	Var0.f_67.f_1.f_25.f_1.f_80.f_11.f_1.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_11.f_1.f_13.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_11.f_1.f_34.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_11.f_1.f_34.f_13.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_80.f_11 = 2;
	Var0.f_67.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_13.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_34.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_80.f_80.f_11 = 2;
	Var0.f_67.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_13.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_5 = -1f;
	Var0.f_67.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1f;
	Var0.f_67.f_1.f_346 = 20;
	Var0.f_67.f_1.f_346.f_1 = -1;
	Var0.f_67.f_1.f_346.f_1.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_67.f_1.f_927 = 20;
	Var0.f_67.f_1.f_927.f_1 = -1;
	Var0.f_67.f_1.f_927.f_1.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1228 = 10;
	Var0.f_67.f_1.f_1228.f_1 = -1;
	Var0.f_67.f_1.f_1228.f_1.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15 = -1;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1379 = 10;
	Var0.f_67.f_1.f_1379.f_1 = -1;
	Var0.f_67.f_1.f_1379.f_1.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15 = -1;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1530 = 1;
	Var0.f_67.f_1.f_1530.f_1 = -1;
	Var0.f_67.f_1.f_1530.f_1.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1530.f_1.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1546 = 5;
	Var0.f_67.f_1.f_1546.f_1 = -1;
	Var0.f_67.f_1.f_1546.f_1.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1546.f_1.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1546.f_1.f_15 = -1;
	Var0.f_67.f_1.f_1546.f_1.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1546.f_1.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1546.f_1.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1546.f_1.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1546.f_1.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1546.f_1.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1546.f_1.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1546.f_1.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1546.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_67.f_1.f_1546.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_67.f_1.f_1546.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_67.f_1.f_1622 = 8;
	Var0.f_67.f_1.f_1648 = 2;
	Var0.f_67.f_1.f_1652 = 4;
	Var0.f_67.f_1.f_1669 = 20;
	Var0.f_67.f_1.f_1830 = 20;
	Var0.f_67.f_1.f_1911 = 10;
	Var0.f_67.f_1.f_1952 = 1;
	Var0.f_67.f_1.f_1957 = 10;
	Var0.f_67.f_1.f_1998 = 5;
	Var0.f_67.f_1.f_2019 = 3;
	Var0.f_67.f_1.f_2044 = 3;
	Var0.f_67.f_1.f_2057 = 8;
	Var0.f_67.f_1.f_2057.f_1.f_21 = 3;
	Var0.f_67.f_1.f_2057.f_1.f_26.f_21 = 3;
	Var0.f_67.f_1.f_2057.f_1.f_26.f_26.f_21 = 3;
	Var0.f_67.f_1.f_2057.f_1.f_26.f_26.f_26.f_21 = 3;
	Var0.f_67.f_1.f_2057.f_1.f_26.f_26.f_26.f_26.f_21 = 3;
	Var0.f_67.f_1.f_2057.f_1.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	Var0.f_67.f_1.f_2057.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	Var0.f_67.f_1.f_2057.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	MISC::COPY_SCRIPT_STRUCT(&Global_3407872, &Var0, 2339);
}

void func_30()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_31()
{
	return Global_1572887.f_14;
}

bool func_32()
{
	return Global_1051645.f_8;
}

void func_33(var uParam0)
{
	func_56(uParam0);
}

void func_34(var uParam0)
{
	func_57(uParam0);
}

void func_35(int iParam0)
{
	func_58(iParam0);
	func_59(&(iParam0->f_1778));
}

bool func_36(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_37(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME());
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(*uParam0, MISC::GET_GAME_TIMER());
}

void func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	ENTITY::SET_ENTITY_VISIBLE(iVar1, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 2, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 3, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 11, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 12, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 1, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 0, true);
	PED::SET_PED_CAN_RAGDOLL(iVar1, true);
	bVar2 = iParam0 & 256 != false;
	if (bVar2)
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 0, false);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 4, false);
	}
	ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
	if (iParam0 & 512 != 0)
	{
	}
	else
	{
		func_60();
	}
	PLAYER::SET_PLAYER_INVINCIBLE(iVar0, false);
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar1, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, true, false);
	}
}

void func_39(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!bParam0)
	{
	}
	if (bParam1)
	{
	}
	if (bParam2)
	{
	}
	if (bParam3)
	{
	}
	if (bParam6)
	{
	}
	if (bParam4)
	{
	}
	if (bParam5)
	{
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = 0;
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		iVar2 = 4;
	}
	if (bParam4)
	{
		iVar2 |= 256;
	}
	if (bParam5)
	{
		iVar2 |= 2048;
	}
	PLAYER::SET_PLAYER_CONTROL(iVar0, false, iVar2, false);
	ENTITY::SET_ENTITY_VISIBLE(iVar1, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 2, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 3, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 11, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 12, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 1, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 0, bParam0);
	if (bParam1)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(iVar0, true);
	}
	if ((!PED::IS_PED_IN_ANY_VEHICLE(iVar1, true) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(iVar1)) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
	{
		if (bParam2)
		{
			ENTITY::SET_ENTITY_COLLISION(iVar1, false, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
		}
	}
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		if (TASK::_0x9FF5F9B24E870748(iVar1))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, false, !bParam6);
		}
	}
}

int func_40()
{
	var uVar0;
	bool bVar33;
	bool bVar34;
	int iVar35;
	int iVar36;

	uVar0 = 32;
	bVar33 = func_63(&(Local_37.f_2[0 /*33*/]), 0, &Local_601, &uVar0, &(Global_3407872.f_67[0 /*2269*/]), &(Local_37.f_61), &Local_986, 9290, 9298);
	while (iVar35 < 6)
	{
		iVar36 = Local_37.f_1;
		switch (Local_37.f_1)
		{
			case 0:
				Local_37.f_397 = { func_64() };
				Local_37.f_397 = 1;
				Local_37.f_397.f_1 = 0;
				iVar36 = 1;
				break;
			case 1:
				if (!func_65(&(Local_37.f_397.f_2), &bVar34))
				{
					return 0;
				}
				if (bVar34)
				{
					iVar36 = 5;
				}
				else
				{
					iVar36 = 2;
				}
				break;
			case 2:
				if (func_66(&(Local_37.f_2[0 /*33*/]), 0, Local_37.f_397, 2, 0))
				{
					iVar36 = 3;
				}
				break;
			case 3:
				if (func_67(1))
				{
					if (func_66(&(Local_37.f_2[0 /*33*/]), 0, Local_37.f_397, 3, 0))
					{
						iVar36 = 4;
					}
				}
				break;
			case 4:
				if (bVar33)
				{
					iVar36 = 5;
				}
				break;
			case 5:
				return 1;
		}
		if (iVar36 != Local_37.f_1)
		{
			Local_37.f_1 = iVar36;
			iVar35++;
		}
	else
	{
		}
	else
	{
		}
	}
	return 0;
}

bool func_41()
{
	return (func_68() && Global_1297182 == 1);
}

int func_42()
{
	return Global_1297182.f_200;
}

int func_43(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return -1;
		}
	}
	return Global_1297553[iParam0 /*87*/].f_5.f_12;
}

bool func_44()
{
	return Local_37.f_401 != -1;
}

void func_45(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = *uParam0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (iVar0 <= iVar1)
		{
		}
		else
		{
			if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_3407872[iVar2 /*2*/])))
			{
			}
			else if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Global_3407872[iVar2 /*2*/])))
			{
			}
			else
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_3407872[iVar2 /*2*/]));
				if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
				{
				}
				else
				{
					(*uParam0)[iVar1] = iVar3;
					iVar1++;
				}
			}
			iVar2++;
		}
	}
}

void func_46(var uParam0)
{
	int iVar0;
	struct<20> Var1;
	var uVar27;
	int iVar28;

	if (Global_1297182.f_1 == 4)
	{
		return;
	}
	func_69(4);
	iVar0 = *uParam0;
	if (iVar0 > 4)
	{
		return;
	}
	func_70(2, 0, 1);
	Var1.f_5 = 255;
	Var1.f_7 = -1;
	Var1.f_9 = 7;
	Var1.f_19 = -1;
	Var1.f_19.f_1 = -1;
	Var1.f_5 = Global_1295619.f_149[Global_1295619];
	Var1.f_4 = 2;
	iVar28 = 0;
	while (iVar28 <= (iVar0 - 1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE((*uParam0)[iVar28]) && (*uParam0)[iVar28] != Global_1295619.f_149[Global_1295619])
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar27, (*uParam0)[iVar28]);
		}
		iVar28++;
	}
	func_71(&Var1, uVar27);
	func_72(0);
}

void func_47(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 3:
			StringCopy(sParam1, "pl_Band", 32);
			break;
		case 2:
			StringCopy(sParam1, "pl_Bar", 32);
			break;
		case 1:
			StringCopy(sParam1, "pl_Cook", 32);
			break;
		case 0:
			StringCopy(sParam1, "pl_Maggie", 32);
			break;
	}
	switch (*uParam4)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 1155427246, -1001867166, 1128003338 };
					*uParam3 = -1022846566;
					break;
				case 1:
					*uParam2 = { 1155514277, -1001616336, 1128031912 };
					*uParam3 = 1105408819; /* Float: 28.4f */
					break;
				case 0:
					*uParam2 = { 1155510999, -1001706971, 1128241404 };
					*uParam3 = -1020225126;
					break;
				case -1:
					*uParam2 = { 1155493282, -1001765388, 1128182252 };
					*uParam3 = -1025913651;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { -997732600, 1143846371, 1117729613 };
					*uParam3 = 1102839808; /* Float: 23.5f */
					break;
				case 1:
					*uParam2 = { -997693458, 1144141465, 1117786708 };
					*uParam3 = -1020559360;
					break;
				case 0:
					*uParam2 = { -997681115, 1144054012, 1118205693 };
					*uParam3 = -1048313856; /* Float: -16.5f */
					break;
				case -1:
					*uParam2 = { -997687837, 1143987028, 1118087414 /* Float: 82.33f */ };
					*uParam3 = 1112329421; /* Float: 51.2f */
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { -986836506, -985709677, -1051371189 };
					*uParam3 = -1042441830; /* Float: -27.7f */
					break;
				case 1:
					*uParam2 = { -986881737, -985771157, -1051827949 };
					*uParam3 = 1124682957; /* Float: 137.3f */
					break;
				case 0:
					*uParam2 = { -986860831, -985762267, -1055179827 };
					*uParam3 = -1031313818; /* Float: -67.7f */
					break;
				case -1:
					*uParam2 = { -986849886, -985749156, -1054233068 };
					*uParam3 = 0f;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 1154080832, 1146183652, 1123065279 };
					*uParam3 = -1025350042;
					break;
				case 1:
					*uParam2 = { 1154210509, 1146022578, 1123122374 };
					*uParam3 = 1112486707; /* Float: 51.8f */
					break;
				case 0:
					*uParam2 = { 1154189503, 1146103154, 1123541359 };
					*uParam3 = -1021758669;
					break;
				case -1:
					*uParam2 = { 1154161639, 1146142687, 1123423093 };
					*uParam3 = -1028980736; /* Float: -85.5f */
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { -991469364, -992390999, 1118387739 };
					*uParam3 = 1114636288; /* Float: 60f */
					break;
				case 1:
					*uParam2 = { -991350135, -992486324, 1118444834 };
					*uParam3 = -1022951424; /* Float: -135f */
					break;
				case 0:
					*uParam2 = { -991366223, -992443832, 1118863819 };
					*uParam3 = 1101004800; /* Float: 20f */
					break;
				case -1:
					*uParam2 = { -991391547, -992420905, 1118745526 };
					*uParam3 = 1118791270; /* Float: 87.7f */
					break;
			}
			break;
	}
}

bool func_48(int iParam0)
{
	return func_73(1, iParam0);
}

void func_49()
{
	char* sVar0;

	if (iLocal_33 == 4)
	{
		return;
	}
	sVar0 = func_74();
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		func_75(4);
		return;
	}
	switch (iLocal_33)
	{
		case 0:
			func_75(1);
			break;
		case 1:
			AUDIO::PREPARE_MUSIC_EVENT(sVar0);
			func_75(2);
			break;
		case 2:
			if (CAM::IS_SCREEN_FADED_IN())
			{
				func_75(3);
			}
			break;
		case 3:
			AUDIO::TRIGGER_MUSIC_EVENT(sVar0);
			func_75(4);
			break;
	}
}

int func_50()
{
	bool bVar0;
	var uVar1;
	int iVar34;
	int iVar35;

	func_76(&(Local_2203.f_1485), 524288, 1);
	uVar1 = 32;
	if (Local_440[iLocal_31 /*5*/].f_2 >= 1)
	{
		bVar0 = func_78(&(Local_37.f_2), 1, &Local_2203, &Local_601, iLocal_31, iLocal_31, &uVar1, &(Local_37.f_61), &Local_986, &(Global_3407872.f_67), 10508, 9298, 0);
	}
	while (iVar34 < 6)
	{
		iVar35 = Local_440[iLocal_31 /*5*/].f_2;
		switch (Local_440[iLocal_31 /*5*/].f_2)
		{
			case 0:
				if (Local_37.f_1 > 4)
				{
					iVar35 = 5;
				}
				else if (Local_37.f_397.f_2 >= 0 && Local_37.f_397.f_2 < 8)
				{
					if (func_79())
					{
						func_80(1);
						func_81(1);
						func_82(1);
						func_83(1);
						func_84(Global_3407872.f_67[0 /*2269*/].f_1622[Local_37.f_397.f_2 /*3*/], Global_3407872.f_67[0 /*2269*/].f_2057[Local_37.f_397.f_2 /*26*/].f_16, 1);
					}
					func_15(&uLocal_34, 1, 0);
					iVar35 = 3;
				}
				break;
			case 3:
				if (func_85(255) != 1 || (func_37(&uLocal_34, 1, 0) > 100 && func_85(255) == 1))
				{
					func_86(&(Global_3407872.f_2338), 4);
					iVar35 = 4;
				}
				break;
			case 4:
				if (func_85(255) == 1)
				{
					iVar35 = 1;
				}
				break;
			case 1:
				if ((func_36(Global_3407872.f_2338, 1) && func_87(&(Local_601[iLocal_31 /*12*/]))) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_2203.f_1485.f_208))
				{
					func_86(&(Local_440[iLocal_31 /*5*/].f_1), 1);
					iVar35 = 2;
				}
				break;
			case 2:
				if (func_88(&(Local_601[iLocal_31 /*12*/])))
				{
					if (!func_36(uLocal_32, 1))
					{
						func_89(0, 0);
						func_86(&uLocal_32, 1);
					}
				}
				if (bVar0)
				{
					iVar35 = 5;
				}
				break;
			case 5:
				return 1;
		}
		if (iVar35 != Local_440[iLocal_31 /*5*/].f_2)
		{
			Local_440[iLocal_31 /*5*/].f_2 = iVar35;
			iVar34++;
		}
	else
	{
		}
	else
	{
		}
	}
	return 0;
}

bool func_51(int* iParam0)
{
	return !func_90(*iParam0, 12);
}

bool func_52(var uParam0)
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_208);
}

void func_53(var uParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_208))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_208);
	}
}

void func_54(bool bParam0)
{
	struct<293> Var0;

	Var0 = 1;
	Var0.f_17 = 14;
	Var0.f_186 = 15f;
	Var0.f_187 = 20f;
	Var0.f_225 = 4;
	Var0.f_292 = 1000;
	MISC::COPY_SCRIPT_STRUCT(bParam0, &Var0, 293);
}

void func_55(int* iParam0, var uParam1)
{
	func_35(iParam0);
	func_34(uParam1);
}

void func_56(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_91(&(uParam0->f_4));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_92(&(uParam0->f_7[iVar0 /*5*/]));
		iVar0++;
	}
	uParam0->f_28 = 255;
	func_93(&(uParam0->f_29));
	func_93(&(uParam0->f_31));
}

void func_57(var uParam0)
{
	*uParam0 = -1;
	func_91(&(uParam0->f_1));
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	func_91(&(uParam0->f_9));
}

void func_58(int iParam0)
{
	func_94(iParam0);
	func_95(0);
	Global_1048584 = 0;
}

void func_59(var uParam0)
{
	func_96(uParam0);
}

void func_60()
{
	if (!Global_1102813.f_16)
	{
		return;
	}
	Global_1072759.f_28644.f_5 = 1;
	AUDIO::_RELEASE_SOUNDSET("rdro_gamemode_transition_sounds");
	AUDIO::_RELEASE_SOUNDSET("rdro_gamemode_generic_sounds");
}

void func_61(var uParam0, var uParam1, var uParam2)
{
}

int func_62(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return 2;
}

int func_63(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;

	iVar0 = *uParam0;
	while (iVar1 < 8)
	{
		switch (*uParam0)
		{
			case 0:
				if (func_97(uParam0))
				{
					iVar0 = 1;
				}
				break;
			case 1:
				if (func_98(uParam0, iParam1, iParam2, uParam3, uParam4))
				{
					iVar0 = 2;
				}
				break;
			case 2:
				if (func_99(uParam0, iParam1, iParam2, uParam3, uParam4))
				{
					iVar0 = 3;
				}
				break;
			case 3:
				if (func_100(uParam0, uParam4, iParam8))
				{
					iVar0 = 4;
				}
				break;
			case 4:
				if (func_101(uParam0, iParam1, uParam4, uParam5, iParam8))
				{
					iVar0 = 5;
				}
				break;
			case 5:
				if (func_102(uParam0, iParam1, iParam2, uParam4))
				{
					iVar0 = 6;
				}
				break;
			case 6:
				if (func_103(uParam0, iParam1, iParam2, uParam5, uParam6, iParam7))
				{
					iVar0 = 7;
				}
				break;
			case 7:
				if (func_104(uParam0, iParam1, iParam2))
				{
					return 1;
				}
				break;
		}
		if (iVar0 != *uParam0)
		{
			*uParam0 = iVar0;
			iVar1++;
		}
	else
	{
		}
	else
	{
		}
	}
	return 0;
}

Vector3 func_64()
{
	vector3 vVar0;

	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	return vVar0;
}

bool func_65(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2[8];
	int iVar11;

	iVar11 = 0;
	if (func_26())
	{
		if (Local_37.f_400 != 0)
		{
			if (Global_3407872.f_66 == 2)
			{
				iVar2[0] = 0;
				iVar1 = 1;
			}
			else
			{
				iVar11 = 0;
				while (iVar11 <= 7)
				{
					if (MISC::IS_BIT_SET(Local_37.f_400, iVar11))
					{
						iVar2[iVar1] = iVar11;
						iVar1++;
					}
					iVar11++;
				}
			}
		}
		else
		{
			iVar1 = 0;
		}
		iVar0 = 8;
	}
	else
	{
		iVar11 = 0;
		while (iVar11 <= 7)
		{
			if (func_105(iVar11, &(Global_3407872.f_67[0 /*2269*/]), Global_3407872.f_2337, &(Local_37.f_36[iVar11 /*3*/])))
			{
				iVar0++;
				if (!Local_37.f_36[iVar11 /*3*/].f_2)
				{
					iVar2[iVar1] = iVar11;
					iVar1++;
				}
			}
			iVar11++;
		}
	}
	if (iVar0 < 8)
	{
		return false;
	}
	if (iVar1 == 0)
	{
		*uParam1 = 1;
		return true;
	}
	*uParam0 = -1;
	if (*uParam0 == -1)
	{
		*uParam0 = iVar2[MISC::GET_RANDOM_INT_IN_RANGE(0, func_106(iVar1, 0, 7))];
	}
	iVar11 = 0;
	while (iVar11 <= 7)
	{
		if (iVar11 != *uParam0 && VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Local_37.f_36[iVar11 /*3*/]))
		{
			VOLUME::_RELEASE_LOCK_VOLUME(Local_37.f_36[iVar11 /*3*/]);
		}
		iVar11++;
	}
	return true;
}

bool func_66(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6)
{
	if (iParam1 < 0 || iParam1 >= 8)
	{
		return false;
	}
	if (!func_107(vParam2, 1))
	{
		return false;
	}
	if (func_108(uParam0))
	{
		return false;
	}
	if (func_109(uParam0->f_4, vParam2) && iParam5 == uParam0->f_2)
	{
		return true;
	}
	uParam0->f_4 = { vParam2 };
	uParam0->f_2 = iParam5;
	uParam0->f_3 = iParam6;
	return true;
}

bool func_67(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
		}
		else if (!func_36(Local_440[iVar0 /*5*/].f_1, iParam0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_68()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_3;
}

void func_69(int iParam0)
{
	Global_1297182.f_1 = iParam0;
}

int func_70(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	Global_1297553[PLAYER::PLAYER_ID() /*87*/].f_5[iParam0] = iParam1;
	return 1;
}

void func_71(var uParam0, var uParam1)
{
	*uParam0 = 13;
	uParam0->f_1 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 26, 15, &uParam1);
}

void func_72(bool bParam0)
{
	func_110(128);
	func_111(1);
	if (bParam0)
	{
		func_110(1024);
	}
}

bool func_73(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_112(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_113())
	{
		return func_112(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_112(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

char* func_74()
{
	if (Global_3407872.f_66 == 1)
	{
		return "MP_BH_MISSION_COMPLETE_MUSIC";
	}
	return "";
}

void func_75(int iParam0)
{
	iLocal_33 = iParam0;
}

void func_76(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
	if (((iParam1 == 512 && bParam2) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_208)) && ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam0->f_208))
	{
		ANIMSCENE::_CLEAR_ANIM_SCENE_WAS_SKIPPED(uParam0->f_208);
	}
}

void func_77(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_86(&(Global_3407872.f_2338), 2);
			break;
		case 7:
			func_114();
			break;
		case 2:
			func_115();
			break;
	}
}

int func_78(var uParam0, int iParam1, int* iParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, bool bParam12)
{
	struct<2> Var0;

	Var0 = 1;
	Var0.f_1.f_25 = 4;
	Var0.f_1.f_25.f_1.f_11 = 2;
	Var0.f_1.f_25.f_1.f_11.f_1.f_5 = -1f;
	Var0.f_1.f_25.f_1.f_11.f_1.f_13.f_5 = -1f;
	Var0.f_1.f_25.f_1.f_11.f_1.f_34.f_5 = -1f;
	Var0.f_1.f_25.f_1.f_11.f_1.f_34.f_13.f_5 = -1f;
	Var0.f_1.f_25.f_1.f_80.f_11 = 2;
	Var0.f_1.f_25.f_1.f_80.f_11.f_1.f_5 = -1f;
	Var0.f_1.f_25.f_1.f_80.f_11.f_1.f_13.f_5 = -1f;
	Var0.f_1.f_25.f_1.f_80.f_11.f_1.f_34.f_5 = -1f;
	Var0.f_1.f_25.f_1.f_80.f_11.f_1.f_34.f_13.f_5 = -1f;
	Var0.f_1.f_25.f_1.f_80.f_80.f_11 = 2;
	Var0.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_5 = -1f;
	Var0.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_13.f_5 = -1f;
	Var0.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_34.f_5 = -1f;
	Var0.f_1.f_25.f_1.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1f;
	Var0.f_1.f_25.f_1.f_80.f_80.f_80.f_11 = 2;
	Var0.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_5 = -1f;
	Var0.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_13.f_5 = -1f;
	Var0.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_5 = -1f;
	Var0.f_1.f_25.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1f;
	Var0.f_1.f_346 = 20;
	Var0.f_1.f_346.f_1 = -1;
	Var0.f_1.f_346.f_1.f_3.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_16.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29 = -1;
	Var0.f_1.f_346.f_1.f_29.f_3.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_16.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29 = -1;
	Var0.f_1.f_346.f_1.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29 = -1;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1f;
	Var0.f_1.f_346.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1f;
	Var0.f_1.f_927 = 20;
	Var0.f_1.f_927.f_1 = -1;
	Var0.f_1.f_927.f_1.f_3.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_9.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15 = -1;
	Var0.f_1.f_927.f_1.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15 = -1;
	Var0.f_1.f_927.f_1.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15 = -1;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_927.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_1228 = 10;
	Var0.f_1.f_1228.f_1 = -1;
	Var0.f_1.f_1228.f_1.f_3.f_5 = -1f;
	Var0.f_1.f_1228.f_1.f_9.f_5 = -1f;
	Var0.f_1.f_1228.f_1.f_15 = -1;
	Var0.f_1.f_1228.f_1.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_1228.f_1.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_1228.f_1.f_15.f_15 = -1;
	Var0.f_1.f_1228.f_1.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_1228.f_1.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_1228.f_1.f_15.f_15.f_15 = -1;
	Var0.f_1.f_1228.f_1.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_1228.f_1.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_1228.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_1228.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_1379 = 10;
	Var0.f_1.f_1379.f_1 = -1;
	Var0.f_1.f_1379.f_1.f_3.f_5 = -1f;
	Var0.f_1.f_1379.f_1.f_9.f_5 = -1f;
	Var0.f_1.f_1379.f_1.f_15 = -1;
	Var0.f_1.f_1379.f_1.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_1379.f_1.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_1379.f_1.f_15.f_15 = -1;
	Var0.f_1.f_1379.f_1.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_1379.f_1.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_1379.f_1.f_15.f_15.f_15 = -1;
	Var0.f_1.f_1379.f_1.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_1379.f_1.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_1379.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_1379.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_1530 = 1;
	Var0.f_1.f_1530.f_1 = -1;
	Var0.f_1.f_1530.f_1.f_3.f_5 = -1f;
	Var0.f_1.f_1530.f_1.f_9.f_5 = -1f;
	Var0.f_1.f_1546 = 5;
	Var0.f_1.f_1546.f_1 = -1;
	Var0.f_1.f_1546.f_1.f_3.f_5 = -1f;
	Var0.f_1.f_1546.f_1.f_9.f_5 = -1f;
	Var0.f_1.f_1546.f_1.f_15 = -1;
	Var0.f_1.f_1546.f_1.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_1546.f_1.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_1546.f_1.f_15.f_15 = -1;
	Var0.f_1.f_1546.f_1.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_1546.f_1.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_1546.f_1.f_15.f_15.f_15 = -1;
	Var0.f_1.f_1546.f_1.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_1546.f_1.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_1546.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_1546.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1f;
	Var0.f_1.f_1546.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1f;
	Var0.f_1.f_1622 = 8;
	Var0.f_1.f_1648 = 2;
	Var0.f_1.f_1652 = 20;
	Var0.f_1.f_2374 = 4;
	Var0.f_1.f_2374.f_1 = 2;
	Var0.f_1.f_2374.f_1.f_3 = 2;
	Var0.f_1.f_2374.f_1.f_3.f_3 = 2;
	Var0.f_1.f_2374.f_1.f_3.f_3.f_3 = 2;
	Var0.f_1.f_2387 = 20;
	func_116(uParam0, iParam1, iParam3[iParam4 /*12*/], (*uParam6)[iParam5], &Var0, uParam9);
	func_117(iParam2);
	if (func_107((iParam3[iParam4 /*12*/])->f_1, 1) && (iParam3[iParam4 /*12*/])->f_1 == 1)
	{
		func_118(uParam0, iParam2, iParam3[iParam4 /*12*/], uParam9);
		return func_119(uParam0, iParam2, iParam3, iParam4, iParam5, uParam7, uParam8, uParam9, iParam10, iParam11, bParam12);
	}
	return 0;
}

bool func_79()
{
	if (func_26())
	{
		return false;
	}
	return true;
}

void func_80(bool bParam0)
{
	if (!bParam0)
	{
		func_120(19);
	}
	else
	{
		func_121(19);
	}
}

void func_81(bool bParam0)
{
	if (!bParam0)
	{
		func_120(18);
	}
	else
	{
		func_121(18);
	}
}

void func_82(bool bParam0)
{
	if (!bParam0)
	{
		func_120(25);
	}
	else
	{
		func_121(25);
	}
}

void func_83(bool bParam0)
{
	if (bParam0)
	{
		func_121(133);
	}
	else
	{
		func_120(133);
	}
}

void func_84(vector3 vParam0, var uParam3, bool bParam4)
{
	if (func_122(vParam0, uParam3))
	{
		func_123(1, bParam4);
	}
}

int func_85(int iParam0)
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

void func_86(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_87(var uParam0)
{
	if (!func_124(uParam0))
	{
		return false;
	}
	if (uParam0->f_8 != 3)
	{
		return false;
	}
	return true;
}

bool func_88(var uParam0)
{
	if (!func_124(uParam0))
	{
		return false;
	}
	return uParam0->f_4 == 10;
}

void func_89(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_125(49);
	}
	if (bParam1)
	{
		func_125(51);
	}
	func_126(48);
	func_125(52);
	func_125(3);
}

bool func_90(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_91(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

void func_92(var uParam0)
{
	*uParam0 = 255;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
}

void func_93(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_94(int iParam0)
{
	int iVar0;

	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iParam0->f_1[iVar0] = -1;
		iVar0++;
	}
	iParam0->f_6 = -1;
	iParam0->f_7 = 0;
	iParam0->f_8 = 255;
	iParam0->f_9 = { 0f, 0f, 0f };
	func_93(&(iParam0->f_12));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_127(&(iParam0->f_14[iVar0 /*21*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_128(&(iParam0->f_99[iVar0 /*20*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_129(&(iParam0->f_500[iVar0 /*13*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_129(&(iParam0->f_761[iVar0 /*13*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_129(&(iParam0->f_892[iVar0 /*13*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_129(&(iParam0->f_1023[iVar0 /*13*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_130(&(iParam0->f_1089[iVar0 /*14*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		func_131(&(iParam0->f_1104[iVar0 /*15*/]));
		iVar0++;
	}
	iParam0->f_1465 = 0;
	iParam0->f_1466 = 0;
	func_93(&(iParam0->f_1467));
	func_93(&(iParam0->f_1469));
	func_93(&(iParam0->f_1471));
	func_93(&(iParam0->f_1473));
	func_132(&(iParam0->f_1475));
	iParam0->f_1478 = 0;
	iParam0->f_1479 = 0;
	iParam0->f_1480 = -1;
	func_93(&(iParam0->f_1481));
	func_93(&(iParam0->f_1483));
	func_133(&(iParam0->f_1485));
}

void func_95(int iParam0)
{
	Global_1048585 = iParam0;
}

void func_96(var uParam0)
{
	int iVar0;

	func_134(uParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_135(&(uParam0->f_1912[iVar0 /*31*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_135(&(uParam0->f_2037[iVar0 /*31*/]));
		iVar0++;
	}
}

bool func_97(var uParam0)
{
	if (!func_107(uParam0->f_4, 1))
	{
		return false;
	}
	if (uParam0->f_2 != 3)
	{
		return false;
	}
	func_136(&(uParam0->f_29), 0, 1);
	return true;
}

bool func_98(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = true;
	bVar1 = NETWORK::_NETWORK_IS_THREAD_ACTIVE(SCRIPTS::GET_ID_OF_THIS_THREAD());
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (bVar1)
		{
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
			{
			}
			else
			{
				Jump @62; //curOff = 50
				if (iVar2 != 0)
				{
				}
				else
				{
					if (!func_137((*uParam3)[iVar2], iParam1, uParam4))
					{
					}
					else if (func_138(uParam0, iParam1, iParam2[iVar2 /*12*/]) && (iParam2[iVar2 /*12*/])->f_4 > 1)
					{
					}
					else
					{
						bVar0 = false;
					}
					else
					{
						iVar2++;
					}
				}
				if (!bVar0)
				{
					return false;
				}
				return true;
			}
		}
	}
}

bool func_99(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (*iParam2 != *uParam3)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_139(&(uParam0->f_7[iVar0 /*5*/]));
		iVar0++;
	}
	if (!NETWORK::_NETWORK_IS_THREAD_ACTIVE(SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		uParam0->f_7[0 /*5*/] = PLAYER::PLAYER_ID();
		uParam0->f_7[0 /*5*/].f_2 = (*uParam3)[0];
		if (func_140(uParam0->f_7[0 /*5*/], iParam2[0 /*12*/], uParam4))
		{
			func_86(&(uParam0->f_7[0 /*5*/].f_1), 1);
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar1 >= 4)
		{
		}
		else
		{
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
			}
			else if (!func_137((*uParam3)[iVar0], iParam1, uParam4))
			{
			}
			else if ((iParam2[iVar0 /*12*/])->f_4 <= 1 || (iParam2[iVar0 /*12*/])->f_4 > 2)
			{
			}
			else
			{
				uParam0->f_7[iVar1 /*5*/] = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				if (func_140(uParam0->f_7[iVar1 /*5*/], iParam2[iVar0 /*12*/], uParam4))
				{
					func_86(&(uParam0->f_7[iVar1 /*5*/].f_1), 1);
				}
				iVar1++;
			}
			iVar0++;
		}
	}
	iVar2 = func_141(uParam0->f_4.f_2);
	if (iVar1 > 1)
	{
		func_142(&(uParam0->f_7), uParam4->f_1622[iVar2 /*3*/]);
	}
	return true;
}

bool func_100(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_7[iVar0 /*5*/] == 255)
		{
		}
		else
		{
			uParam0->f_7[iVar0 /*5*/].f_3 = func_143(PLAYER::GET_PLAYER_PED(uParam0->f_7[iVar0 /*5*/]), uParam1, &iParam2);
		}
		iVar0++;
	}
	return true;
}

bool func_101(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;
	var uVar1[4];
	int iVar6;

	if (!func_36(uParam2->f_19, 256))
	{
		func_144(uParam0, uParam2, iParam4, &uVar1);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar6 = uVar1[iVar0];
			if (iVar6 < 0 || iVar6 >= 4)
			{
			}
			else
			{
				uParam0->f_7[iVar6 /*5*/].f_4 = iVar0;
			}
			iVar0++;
		}
	}
	if (func_145(uParam2))
	{
		if (!func_147(uParam3, func_146(iParam1)))
		{
			func_148(uParam3, func_146(iParam1), 1, 0, 0, 1);
		}
	}
	return true;
}

bool func_102(var uParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_36(uParam3->f_19, 1024);
	iVar1 = 0;
	while (iVar1 < *iParam2)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
		{
		}
		else if (!func_138(uParam0, iParam1, iParam2[iVar1 /*12*/]))
		{
		}
		else if (!bVar0)
		{
			if (func_36((iParam2[iVar1 /*12*/])->f_5, 2))
			{
			}
			else if ((iParam2[iVar1 /*12*/])->f_4 < 8)
			{
				return false;
			}
			iVar1++;
			iVar3 = func_37(&(uParam0->f_29), 0, 1);
			iVar4 = func_149((uParam3->f_21 - iVar3), 350);
			func_15(&(uParam0->f_31), 0, 1);
			func_150(&(uParam0->f_31), iVar4);
			return true;
		}
	}
}

bool func_103(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	func_151(uParam0, uParam3, iParam1, iParam2, uParam4, &iVar0, &iVar1, &iVar3, &iVar2, &iVar5, &iVar4, &iVar6, &iVar7);
	iVar8 = ((iVar7 + iVar6) + iVar4);
	if (func_147(uParam3, func_146(iParam1)))
	{
		if (!func_90(uParam0->f_1, 1))
		{
			if (iVar3 == (iVar0 - iVar8))
			{
				if (iVar3 > 0)
				{
					func_152(uParam3, func_146(iParam1));
				}
				func_27(&(uParam0->f_1), 1);
			}
		}
		else if (!func_90(uParam0->f_1, 2))
		{
			if (iVar1 == 0)
			{
				iVar9 = func_146(iParam1);
				if (func_147(uParam3, iVar9))
				{
					iVar10 = func_153(uParam3, iVar9);
					if (!func_154(uParam3[iVar10 /*37*/]))
					{
						func_155(uParam3, iVar9, -1);
					}
				}
				func_27(&(uParam0->f_1), 2);
			}
		}
	}
	if (!func_90(uParam0->f_1, 4) && func_90(uParam0->f_1, 0))
	{
		func_27(&(uParam0->f_1), 4);
		func_156(iParam5, uParam0, iParam1, 1);
	}
	if (!func_90(uParam0->f_1, 5) && (iVar8 + iVar5) >= iVar0)
	{
		func_27(&(uParam0->f_1), 5);
		func_156(iParam5, uParam0, iParam1, 2);
	}
	if (!func_90(uParam0->f_1, 6) && (iVar8 > 0 || iVar5 >= iVar0))
	{
		func_27(&(uParam0->f_1), 6);
		func_156(iParam5, uParam0, iParam1, 3);
	}
	if (!func_90(uParam0->f_1, 0))
	{
		if (((iVar2 == iVar0 || func_90(uParam0->f_1, 6)) || iVar8 > 0) || iVar5 >= iVar0)
		{
			func_27(&(uParam0->f_1), 0);
			func_156(iParam5, uParam0, iParam1, 0);
		}
	}
	if (iVar0 <= 0)
	{
		return true;
	}
	else if (iVar7 == iVar0)
	{
		return true;
	}
	return false;
}

bool func_104(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
		}
		else if (func_138(uParam0, iParam1, iParam2[iVar0 /*12*/]))
		{
			return false;
		}
		iVar0++;
	}
	func_33(uParam0);
	return true;
}

bool func_105(int iParam0, var uParam1, int iParam2, var uParam3)
{
	vector3 vVar0;
	float fVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<8> Var8;

	if (uParam3->f_2)
	{
		return true;
	}
	if (!MISC::IS_BIT_SET(iParam2, iParam0))
	{
		uParam3->f_2 = 1;
		return true;
	}
	vVar0 = { uParam1->f_1622[iParam0 /*3*/] };
	if (func_157(vVar0))
	{
		uParam3->f_2 = 1;
		return true;
	}
	fVar3 = 1103626240; /* Float: 25f */
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(uParam3->f_1))
	{
		if (VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(vVar0, fVar3, false, 0, 0))
		{
			uParam3->f_2 = 1;
			return true;
		}
		uVar4 = func_158(vVar0, 0f, 0f, 0f, fVar3, fVar3, fVar3, -2.19652E+23f, 0, 8);
		iVar5 = SCRIPTS::COUNT_PLAYER_BITS(&uVar4);
		if (iVar5 > 0)
		{
			iVar7 = 0;
			iVar7 = 0;
			while (iVar7 <= 31)
			{
				if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&uVar4, iVar7))
				{
					iVar6 = PLAYER::INT_TO_PLAYERINDEX(iVar7);
					if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar6) && iVar6 != PLAYER::PLAYER_ID()) && !GANG::_NETWORK_IS_IN_MY_GANG(iVar6))
					{
						uParam3->f_2 = 1;
						return true;
					}
				}
				iVar7++;
			}
		}
		Var8 = { vVar0 };
		Var8.f_4 = fVar3;
		Var8.f_6 = MISC::GET_HASH_KEY("net_ugc_end_flow_transition_online");
		Var8.f_7 = iParam0;
		Var8.f_5 = 0;
		uParam3->f_1 = VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&Var8);
	}
	switch (VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(uParam3->f_1))
	{
		case 3:
			*uParam3 = VOLUME::_0x351D71B8B72B858B(uParam3->f_1);
			return true;
		case 4:
			uParam3->f_1 = 0;
			uParam3->f_2 = 1;
			return true;
		case 0:
			uParam3->f_1 = 0;
			uParam3->f_2 = 1;
			return true;
		default:
			break;
	}
	return false;
}

int func_106(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_107(vector3 vParam0, bool bParam3)
{
	if (vParam0.x == -1)
	{
		return false;
	}
	if (vParam0.y < 0 || vParam0.y >= 8)
	{
		return false;
	}
	if (!bParam3)
	{
		if (vParam0.z < 0 || vParam0.z >= 8)
		{
			return false;
		}
	}
	return true;
}

bool func_108(var uParam0)
{
	if (!func_107(uParam0->f_4, 1))
	{
		return false;
	}
	if (uParam0->f_2 == 3)
	{
		return true;
	}
	if (*uParam0 > 0)
	{
		return true;
	}
	return false;
}

bool func_109(vector3 vParam0, vector3 vParam3)
{
	if (vParam0.x != vParam3.x)
	{
		return false;
	}
	if (vParam0.y != vParam3.y)
	{
		return false;
	}
	if (vParam0.z != vParam3.z)
	{
		return false;
	}
	return true;
}

void func_110(int iParam0)
{
	func_159(&(Global_1297394.f_157), iParam0);
}

void func_111(int iParam0)
{
	func_159(&(Global_1297553[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_86), iParam0);
}

bool func_112(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_113()
{
	return Global_1102813.f_3672;
}

void func_114()
{
	if (Global_3407872.f_66 != 2)
	{
		return;
	}
	func_160(Global_3407872.f_67[0 /*2269*/].f_2057[0 /*26*/]);
	func_111(1024);
}

void func_115()
{
	if (!func_26())
	{
		return;
	}
	func_111(64);
}

void func_116(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (iParam1 < 0 || iParam1 >= 8)
	{
		return;
	}
	if (iParam3 < 0 || iParam3 >= iParam1)
	{
		return;
	}
	if (func_161(uParam2))
	{
		return;
	}
	if (!func_162(uParam0, uParam2, iParam3, uParam4, uParam5))
	{
		return;
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < iParam1)
	{
		vVar2 = { (uParam0[iVar1 /*33*/])->f_4 };
		if (!func_107(vVar2, 1))
		{
		}
		else if ((*uParam0)[iVar1 /*33*/] > 4)
		{
		}
		else
		{
			switch (vVar2.x)
			{
				case 0:
					if (!func_137(iParam3, iVar1, uParam4[vVar2.y /*2411*/]))
					{
					}
					else
					{
						Jump @210; //curOff = 180
						if (!func_137(iParam3, iVar1, uParam5[vVar2.y /*2269*/]))
						{
						}
						else if (iVar0 == -1)
						{
							iVar0 = iVar1;
						}
						else if (iVar1 == iParam3 && iVar0 != iParam3)
						{
						}
					}
					iVar1++;
					if (iVar0 == -1)
					{
					}
					else if (iVar0 >= 0 && iVar0 < *uParam0)
					{
						if (!func_109(uParam2->f_1, (uParam0[iVar0 /*33*/])->f_4))
						{
							uParam2->f_1 = { (uParam0[iVar0 /*33*/])->f_4 };
						}
						if (*uParam2 != iVar0)
						{
							*uParam2 = iVar0;
						}
					}
					default:
						break;
			}
		}
	}
}

void func_117(int* iParam0)
{
	int iVar0;

	iVar0 = func_163();
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		iParam0->f_8 = iVar0;
	}
}

void func_118(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar0 = uParam2->f_8;
	vVar2 = { uParam2->f_1 };
	while (iVar5 < 5)
	{
		switch (uParam2->f_8)
		{
			case 0:
				if (func_164(iParam1, uParam2, uParam3))
				{
					iVar0 = 1;
				}
				break;
			case 1:
				iVar1 = func_165(uParam0[*uParam2 /*33*/], uParam2, uParam3[vVar2.y /*2269*/]);
				if (iVar1 == 1)
				{
					iVar0 = 2;
				}
				else if (iVar1 == 2)
				{
					iVar0 = 0;
				}
				break;
			case 2:
				iVar1 = func_166(uParam0[*uParam2 /*33*/], iParam1, uParam2, uParam3[vVar2.y /*2269*/]);
				if (iVar1 == 1)
				{
					iVar0 = 3;
				}
				else if (iVar1 == 2)
				{
					iVar0 = 4;
				}
				break;
			case 3:
				if (!func_167(uParam0[*uParam2 /*33*/], iParam1, uParam2, uParam3[vVar2.y /*2269*/]))
				{
					iVar0 = 4;
				}
				break;
			case 4:
				func_168(iParam1, uParam2);
				iVar0 = 0;
				break;
		}
		if (iVar0 != uParam2->f_8)
		{
			uParam2->f_8 = iVar0;
			iVar5++;
		}
	else
	{
		}
	else
	{
		}
	}
}

int func_119(var uParam0, int* iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;

	if (iParam3 < 0 || iParam3 >= *iParam2)
	{
		return 0;
	}
	if (iParam4 < 0 || iParam4 >= *iParam2)
	{
		return 0;
	}
	iVar0 = (iParam2[iParam3 /*12*/])->f_4;
	while (iVar1 < 17)
	{
		vVar2 = { (iParam2[iParam3 /*12*/])->f_1 };
		iVar5 = (*iParam2)[iParam3 /*12*/];
		if (func_107(vVar2, 1))
		{
			func_169(uParam0[iVar5 /*33*/], iParam1, iParam2[iParam3 /*12*/], uParam7[vVar2.y /*2269*/], iParam9);
		}
		switch ((iParam2[iParam3 /*12*/])->f_4)
		{
			case 0:
				if (func_170(uParam0, iParam2[iParam3 /*12*/], iParam1))
				{
					iVar0 = 1;
				}
				break;
			case 1:
				if (func_171(iParam2[iParam3 /*12*/], uParam7[vVar2.y /*2269*/], iParam8))
				{
					iVar0 = 16;
				}
				else
				{
					iVar0 = 2;
				}
				break;
			case 2:
				if (func_172(uParam0[iVar5 /*33*/], iParam1, uParam7[vVar2.y /*2269*/], iParam8, iParam9))
				{
					iVar0 = 3;
				}
				break;
			case 3:
				if (func_173())
				{
					iVar0 = 4;
				}
				break;
			case 4:
				if (func_174(iParam1, iParam2[iParam3 /*12*/], uParam7[vVar2.y /*2269*/]))
				{
					iVar0 = 6;
				}
				break;
			case 6:
				if (func_175(iParam1, iParam2[iParam3 /*12*/]))
				{
					iVar0 = 5;
				}
				break;
			case 5:
				if (func_176(iParam1, iParam2[iParam3 /*12*/], uParam7[vVar2.y /*2269*/]))
				{
					iVar0 = 7;
				}
				break;
			case 7:
				iVar6 = func_177(iParam1, iParam2[iParam3 /*12*/], uParam7[vVar2.y /*2269*/]);
				if (iVar6 == 1)
				{
					iVar0 = 8;
				}
				else if (iVar6 == 2)
				{
					iVar0 = 11;
				}
				break;
			case 8:
				if (func_178(uParam0[iVar5 /*33*/]))
				{
					iVar0 = 9;
				}
				break;
			case 9:
				if (func_179(uParam0[iVar5 /*33*/], iParam1, iParam2, iParam3, uParam7[vVar2.y /*2269*/], iParam8, iParam9))
				{
					iVar0 = 10;
				}
				break;
			case 10:
				if (func_180(uParam0[iVar5 /*33*/], iParam1, iParam2[iParam3 /*12*/], uParam5, uParam6, uParam7[vVar2.y /*2269*/], iParam8))
				{
					iVar0 = 11;
				}
				break;
			case 11:
				iVar6 = func_181(uParam0[iVar5 /*33*/], iParam1, iParam2[iParam3 /*12*/]);
				if (iVar6 == 1)
				{
					iVar0 = 13;
				}
				else if (iVar6 == 2)
				{
					iVar0 = 12;
				}
				break;
			case 12:
				if (func_182(uParam0[iVar5 /*33*/], uParam7[vVar2.y /*2269*/]))
				{
					iVar0 = 13;
				}
				break;
			case 13:
				if (func_183(iParam1))
				{
					iVar0 = 14;
				}
				break;
			case 14:
				func_184(uParam0[iVar5 /*33*/], iParam1, uParam7[vVar2.y /*2269*/], iParam8, iParam9);
				iVar0 = 15;
				break;
			case 15:
				if (func_185(iParam1, iParam2[iParam3 /*12*/], uParam7[vVar2.y /*2269*/], 0, bParam10))
				{
					iVar0 = 16;
				}
				break;
			case 16:
				if (func_186(uParam0[iVar5 /*33*/], iParam1, iParam2[iParam3 /*12*/], uParam7[vVar2.y /*2269*/]))
				{
					return 1;
				}
				break;
		}
		if (iVar0 != (iParam2[iParam3 /*12*/])->f_4)
		{
			(iParam2[iParam3 /*12*/])->f_4 = iVar0;
			iVar1++;
		}
	else
	{
		}
	else
	{
		}
	}
	return 0;
}

int func_120(int iParam0)
{
	if (func_187(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_121(int iParam0)
{
	if (func_188(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_122(vector3 vParam0, var uParam3)
{
	if (func_157(vParam0))
	{
		return false;
	}
	if (func_85(255) == 4)
	{
		return false;
	}
	if (func_73(4, 255))
	{
	}
	func_121(4);
	func_189(&(Global_1102813.f_3869));
	Global_1102813.f_3869.f_6 = { vParam0 };
	Global_1102813.f_3869 = uParam3;
	Global_1102813.f_3869.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_190(Global_1102813.f_3869, 36);
	return true;
}

void func_123(bool bParam0, bool bParam1)
{
	if (func_85(255) == 4)
	{
		return;
	}
	if (func_157(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_120(0);
	}
	else
	{
		if (bParam1)
		{
			func_191(0, 0, 0, 1);
		}
		func_121(0);
		func_192(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = -2.19652E+23f;
		func_193(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}
	func_194(Global_1102813.f_3839, 36);
	func_195(Global_1102813.f_3878, 36);
}

bool func_124(var uParam0)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (!func_107(uParam0->f_1, 1))
	{
		return false;
	}
	return true;
}

void func_125(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_196(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1903834.f_496[iVar0]), iVar1);
}

void func_126(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_196(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_1903834.f_496[iVar0]), iVar1);
}

void func_127(var uParam0)
{
	*uParam0 = -1;
	func_128(&(uParam0->f_1));
}

void func_128(var uParam0)
{
	func_129(uParam0);
	func_197(&(uParam0->f_13));
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
}

void func_129(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	func_198(&(uParam0->f_5));
	uParam0->f_10 = 0;
	func_93(&(uParam0->f_11));
}

void func_130(var uParam0)
{
	func_129(uParam0);
	uParam0->f_13 = 0;
}

void func_131(var uParam0)
{
	func_129(uParam0);
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
}

void func_132(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
}

void func_133(var uParam0)
{
	int iVar0;

	*uParam0 = 1;
	func_132(&(uParam0->f_1));
	uParam0->f_4 = 0;
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0f;
	uParam0->f_16 = 0f;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_199(&(uParam0->f_17[iVar0 /*12*/]));
		iVar0++;
	}
	uParam0->f_186 = 1097859072; /* Float: 15f */
	uParam0->f_187 = 1101004800; /* Float: 20f */
	uParam0->f_191 = 0;
	StringCopy(&(uParam0->f_192), "", 128);
	uParam0->f_208 = 0;
	StringCopy(&(uParam0->f_209), "", 64);
	StringCopy(&(uParam0->f_217), "", 64);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_200(&(uParam0->f_225[iVar0 /*9*/]));
		iVar0++;
	}
	uParam0->f_262 = 0;
	uParam0->f_263 = 0;
	uParam0->f_264 = 0;
	uParam0->f_265 = { 0f, 0f, 0f };
	uParam0->f_268 = { 0f, 0f, 0f };
	uParam0->f_271 = 0f;
	uParam0->f_272 = 0;
	uParam0->f_273 = 0f;
	uParam0->f_274 = 0;
	uParam0->f_275 = 0;
	func_201(&(uParam0->f_276));
	uParam0->f_292 = 1000;
}

void func_134(var uParam0)
{
	func_202(uParam0);
	func_203(&(uParam0->f_540));
	func_204(&(uParam0->f_568));
	uParam0->f_1905 = 0;
	uParam0->f_1906 = 0;
	uParam0->f_1907 = 0;
	uParam0->f_1908 = 0;
	uParam0->f_1909 = 0;
	uParam0->f_1910 = 0;
	uParam0->f_1911 = 0;
}

void func_135(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = 0;
	uParam0->f_10 = { 0f, 0f, 0f };
	uParam0->f_13 = -1;
	uParam0->f_14 = 255;
	func_93(&(uParam0->f_15));
	func_93(&(uParam0->f_17));
	func_93(&(uParam0->f_19));
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_26 = -1;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	func_205(&(uParam0->f_29));
}

void func_136(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_137(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 < 0 || iParam0 >= 8)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 8)
	{
		return false;
	}
	if (iParam1 == iParam0)
	{
		return true;
	}
	if (MISC::IS_BIT_SET(uParam2->f_20, iParam0))
	{
		return true;
	}
	return false;
}

bool func_138(var uParam0, int iParam1, var uParam2)
{
	if (!func_206(uParam0))
	{
		return false;
	}
	if (!func_124(uParam2))
	{
		return false;
	}
	if (*uParam2 != iParam1)
	{
		return false;
	}
	if (!func_109(uParam0->f_4, uParam2->f_1))
	{
		return false;
	}
	return true;
}

void func_139(var uParam0)
{
	func_92(uParam0);
}

bool func_140(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_141(uParam1->f_1.f_2);
	if (!func_207(PLAYER::GET_PLAYER_PED(iParam0), uParam2->f_1622[iVar0 /*3*/], BUILTIN::TO_FLOAT(uParam2->f_1)))
	{
		return false;
	}
	return true;
}

int func_141(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 8)
	{
		iParam0 = 0;
	}
	return iParam0;
}

void func_142(var uParam0, vector3 vParam1)
{
	struct<6> Var0;
	int iVar25;
	vector3 vVar26;

	Var0 = 4;
	Var0.f_1.f_1 = 255;
	Var0.f_1.f_1.f_2 = -1;
	Var0.f_1.f_1.f_3 = -1;
	Var0.f_1.f_1.f_4 = -1;
	Var0.f_1.f_6.f_1 = 255;
	Var0.f_1.f_6.f_1.f_2 = -1;
	Var0.f_1.f_6.f_1.f_3 = -1;
	Var0.f_1.f_6.f_1.f_4 = -1;
	Var0.f_1.f_6.f_6.f_1 = 255;
	Var0.f_1.f_6.f_6.f_1.f_2 = -1;
	Var0.f_1.f_6.f_6.f_1.f_3 = -1;
	Var0.f_1.f_6.f_6.f_1.f_4 = -1;
	Var0.f_1.f_6.f_6.f_6.f_1 = 255;
	Var0.f_1.f_6.f_6.f_6.f_1.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_1.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_1.f_4 = -1;
	iVar25 = 0;
	while (iVar25 < *uParam0)
	{
		Var0[iVar25 /*6*/].f_1 = { *(uParam0[iVar25 /*5*/]) };
		Var0[iVar25 /*6*/] = 1203982323;
		if ((*uParam0)[iVar25 /*5*/] == 255)
		{
		}
		else
		{
			vVar26 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED((*uParam0)[iVar25 /*5*/]), false, false) };
			Var0[iVar25 /*6*/] = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar26, vParam1, true);
		}
		iVar25++;
	}
	NETWORK::_0x7E300B5B86AB1D1A(&Var0, Var0, 6, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	iVar25 = 0;
	while (iVar25 < *uParam0)
	{
		MISC::COPY_SCRIPT_STRUCT(uParam0[iVar25 /*5*/], &(Var0[iVar25 /*6*/].f_1), 5);
		iVar25++;
	}
}

int func_143(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	fVar1 = -1f;
	iVar4 = 0;
	switch (uParam1->f_1647)
	{
		case 1:
			iVar5 = 0;
			while (iVar5 < 2)
			{
				fVar6 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), uParam1->f_25[0 /*80*/].f_11[iVar5 /*34*/]);
				if (fVar6 < fVar1 || fVar1 == -1f)
				{
					fVar6 = fVar1;
					iVar0 = iVar5;
				}
				iVar5++;
			}
			return iVar0;
		case 2:
			iVar5 = 0;
			while (iVar5 < 2)
			{
				if (func_208(*iParam2, uParam1->f_1648[iVar5], -4.35669E-18f, &iVar2, &uVar3, &iVar4) != 1)
				{
				}
				else
				{
					iVar7 = MISC::_GET_VOLUME_FROM_INDEXED_ITEM(iVar2);
					if (!VOLUME::DOES_VOLUME_EXIST(iVar7))
					{
					}
					else if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iVar7, false, 0))
					{
						func_209(iVar7);
						return iVar5;
					}
					else
					{
						func_209(iVar7);
					}
				}
				iVar5++;
			}
			break;
	}
	return 0;
}

void func_144(var uParam0, var uParam1, int iParam2, var uParam3)
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

	iVar1 = 0;
	while (iVar1 < 4)
	{
		(*uParam3)[iVar1] = -1;
		if (uParam0->f_7[iVar1 /*5*/] != 255)
		{
			iVar0++;
		}
		iVar1++;
	}
	if (uParam1->f_17 > iVar0)
	{
	}
	iVar2 = uParam1->f_18;
	if (iVar2 <= 0)
	{
		iVar2 = 3;
	}
	iVar2 = func_106(iVar2, 0, iVar0);
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 < iVar2)
	{
		bVar6 = iVar4 >= uParam1->f_17;
		iVar7 = uParam1->f_25[iVar4 /*80*/];
		iVar8 = -1;
		while (iVar8 == -1)
		{
			switch (iVar7)
			{
				case 0:
					iVar8 = func_210(&(uParam0->f_7), iVar3, bVar6);
					break;
				case 1:
					iVar8 = func_211(&(uParam0->f_7), iVar3, bVar6, uParam0->f_28);
					break;
				case 3:
					iVar8 = func_212(&(uParam0->f_7), iVar3, bVar6);
					break;
				case 2:
					iVar8 = func_213(&(uParam0->f_7), iVar3, bVar6, &(uParam1->f_25[iVar4 /*80*/]));
					break;
				case 4:
					iVar8 = func_214(&(uParam0->f_7), iVar3, bVar6, &(uParam1->f_25[iVar4 /*80*/]), iParam2);
					break;
				case 5:
					iVar8 = func_215(&(uParam0->f_7), iVar3, bVar6);
					break;
				case 6:
					iVar8 = func_216(&(uParam0->f_7), iVar3, bVar6, &(uParam1->f_25[iVar4 /*80*/]));
					break;
			}
			if (iVar8 != -1 && uParam0->f_7[iVar8 /*5*/] != 255)
			{
				(*uParam3)[iVar4] = iVar8;
				iVar5++;
				MISC::SET_BIT(&iVar3, iVar8);
				Jump @393; //curOff = 369
			}
			else if (iVar7 != 0)
			{
				iVar7 = 0;
			}
		else
		{
			}
		else
		{
			}
		}
		iVar4++;
	}
	if (iVar5 < uParam1->f_17)
	{
	}
}

bool func_145(var uParam0)
{
	if (func_36(uParam0->f_19, 65536))
	{
		return true;
	}
	return false;
}

int func_146(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 4;
		case 2:
			return 5;
		case 3:
			return 6;
		case 4:
			return 7;
		case 5:
			return 8;
		case 6:
			return 9;
		case 7:
			return 10;
		default:
			break;
	}
	return 0;
}

bool func_147(var uParam0, int iParam1)
{
	return func_153(uParam0, iParam1) > -1;
}

void func_148(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	iVar0 = func_217(uParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	(*uParam0)[iVar0 /*37*/] = iParam1;
	if (bParam2)
	{
		MISC::SET_BIT(&((uParam0[iVar0 /*37*/])->f_2), 6);
	}
	if (bParam3)
	{
		MISC::SET_BIT(&((uParam0[iVar0 /*37*/])->f_2), 7);
	}
	if (bParam4)
	{
		MISC::SET_BIT(&((uParam0[iVar0 /*37*/])->f_2), 8);
	}
	(uParam0[iVar0 /*37*/])->f_1 = iParam5;
}

int func_149(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_150(var uParam0, int iParam1)
{
	*uParam0 = NETWORK::GET_TIME_OFFSET(*uParam0, iParam1);
}

void func_151(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar0 = func_147(uParam1, func_146(iParam2));
	bVar1 = NETWORK::_NETWORK_IS_THREAD_ACTIVE(SCRIPTS::GET_ID_OF_THIS_THREAD());
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (bVar1)
		{
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
			{
			}
			else
			{
				Jump @73; //curOff = 61
				if (iVar2 != 0)
				{
				}
				else
				{
					if (!func_138(uParam0, iParam2, iParam3[iVar2 /*12*/]))
					{
					}
					else
					{
						*iParam5++;
						bVar3 = false;
						if (func_36((iParam3[iVar2 /*12*/])->f_5, 2))
						{
							bVar3 = true;
						}
						if (func_88(iParam3[iVar2 /*12*/]))
						{
							*iParam6++;
							bVar3 = true;
							if (bVar0 && func_218(uParam4[iVar2 /*38*/], func_146(iParam2)))
							{
								*iParam7++;
							}
							if (func_36((iParam3[iVar2 /*12*/])->f_5, 1))
							{
								*iParam10++;
							}
						}
						else if ((iParam3[iVar2 /*12*/])->f_4 == 12)
						{
							*iParam9++;
							bVar3 = true;
						}
						else if (func_219(iParam3[iVar2 /*12*/]))
						{
							*iParam12++;
							bVar3 = true;
						}
						else if (func_220(iParam3[iVar2 /*12*/]))
						{
							*iParam11++;
							bVar3 = true;
						}
						if (bVar3)
						{
							*iParam8++;
						}
					}
					iVar2++;
				}
			}
		}
	}
}

void func_152(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_153(uParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	MISC::SET_BIT(&((uParam0[iVar0 /*37*/])->f_2), 0);
}

int func_153(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if ((*uParam0)[iVar0 /*37*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_154(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_2, 1);
}

void func_155(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_153(uParam0, iParam1);
	}
	if (iParam2 == -1)
	{
		return;
	}
	MISC::SET_BIT(&((uParam0[iParam2 /*37*/])->f_2), 4);
}

void func_156(int iParam0, var uParam1, int iParam2, int iParam3)
{
	Stack.Push(uParam1);
	Stack.Push(iParam2);
	Stack.Push(iParam3);
	Call_Loc(iParam0);
}

bool func_157(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

var func_158(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, var uParam11)
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
	if (func_221() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_222());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_222());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_222());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_223(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_224(iVar2))
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
				if (iVar9 & 8192 != 0 && func_85(iVar2) != 1)
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
					if (!func_225(iVar10))
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

void func_159(var uParam0, int iParam1)
{
	func_226(uParam0, iParam1);
}

void func_160(struct<16> Param0)
{
	Global_1297394.f_140 = { Param0 };
}

bool func_161(var uParam0)
{
	if (!func_124(uParam0))
	{
		return false;
	}
	if (uParam0->f_4 == 0)
	{
		return false;
	}
	return true;
}

bool func_162(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	vector3 vVar0;

	if (!func_107(uParam1->f_1, 1))
	{
		return true;
	}
	else if (*uParam1 < 0 || *uParam1 >= *uParam0)
	{
		return true;
	}
	else if (((iParam2 >= 0 && iParam2 < *uParam0) && iParam2 != *uParam1) && func_107((uParam0[iParam2 /*33*/])->f_4, 1))
	{
		return true;
	}
	else if (!func_109(uParam1->f_1, (uParam0[*uParam1 /*33*/])->f_4))
	{
		return true;
	}
	else
	{
		vVar0 = { uParam1->f_1 };
		switch (vVar0.x)
		{
			case 0:
				if (vVar0.y >= *uParam3 || !func_137(iParam2, *uParam1, uParam3[vVar0.y /*2411*/]))
				{
					return true;
				}
				break;
			case 1:
				if (vVar0.y >= *uParam4 || !func_137(iParam2, *uParam1, uParam4[vVar0.y /*2269*/]))
				{
					return true;
				}
				break;
		}
	}
	return false;
}

int func_163()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 255;
	iVar1 = func_227();
	if (func_228(iVar1))
	{
		return PLAYER::PLAYER_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (PED::IS_PED_A_PLAYER(iVar2))
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
			}
		}
	}
	return iVar0;
}

bool func_164(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	char cVar7[32];
	int iVar11;
	char cVar12[32];

	if (!func_229(uParam1))
	{
		return false;
	}
	iVar0 = uParam1->f_1.f_1;
	iVar1 = func_141(uParam1->f_1.f_2);
	if (!func_230(uParam2[iVar0 /*2269*/], 0))
	{
		return false;
	}
	iParam0->f_1485.f_192 = { (uParam2[iVar0 /*2269*/])->f_2057[iVar1 /*26*/] };
	func_231(&(iParam0->f_1485), 8192);
	func_232(&(iParam0->f_1485), 2);
	func_233(&(iParam0->f_1485.f_264), 1);
	func_231(&(iParam0->f_1485), 2);
	func_234(&(iParam0->f_1485.f_263), 4);
	func_234(&(iParam0->f_1485.f_263), 8388608);
	func_233(&(iParam0->f_1485.f_264), 2048);
	func_233(&(iParam0->f_1485.f_264), 1024);
	if (func_235(144))
	{
		func_234(&(iParam0->f_1485.f_263), 2097152);
	}
	if ((uParam2[iVar0 /*2269*/])->f_2268 > -1)
	{
		iParam0->f_1485.f_292 = (uParam2[iVar0 /*2269*/])->f_2268;
	}
	if (func_36((uParam2[iVar0 /*2269*/])->f_1651, 64))
	{
		func_27(iParam0, 12);
	}
	if (func_36((uParam2[iVar0 /*2269*/])->f_1651, 2))
	{
		vVar2 = { (uParam2[iVar0 /*2269*/])->f_1622[iVar1 /*3*/] };
		fVar5 = (uParam2[iVar0 /*2269*/])->f_2057[iVar1 /*26*/].f_16;
		func_236(&(iParam0->f_1485), vVar2, 0f, 0f, fVar5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam2[iVar0 /*2269*/])->f_2057[iVar1 /*26*/].f_17)))
	{
		func_237(&(iParam0->f_1485), &((uParam2[iVar0 /*2269*/])->f_2057[iVar1 /*26*/].f_17));
	}
	else
	{
		func_232(&(iParam0->f_1485), 1);
	}
	if ((uParam2[iVar0 /*2269*/])->f_2266 >= 0 && (uParam2[iVar0 /*2269*/])->f_2266 < 8)
	{
		iVar6 = (uParam2[iVar0 /*2269*/])->f_2266;
		cVar7 = { (uParam2[iVar0 /*2269*/])->f_2057[iVar6 /*26*/].f_17 };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar7))
		{
			func_238(&(iParam0->f_1485), &cVar7, 1);
		}
	}
	if ((uParam2[iVar0 /*2269*/])->f_2267 >= 0 && (uParam2[iVar0 /*2269*/])->f_2267 < 8)
	{
		iVar11 = (uParam2[iVar0 /*2269*/])->f_2267;
		cVar12 = { (uParam2[iVar0 /*2269*/])->f_2057[iVar11 /*26*/].f_17 };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar12))
		{
			func_238(&(iParam0->f_1485), &cVar12, 1);
		}
	}
	return true;
}

int func_165(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_239(uParam1))
	{
		return 2;
	}
	if (func_240() != 0 && func_227() != func_241())
	{
		return 2;
	}
	if (uParam0->f_2 == 3 || uParam0->f_2 == 2)
	{
		return 1;
	}
	iVar0 = func_141(uParam1->f_9.f_2);
	if (func_242(PLAYER::PLAYER_PED_ID(), uParam2->f_1622[iVar0 /*3*/], 1128792064 /* Float: 200f */, 1, 1))
	{
		return 1;
	}
	return 0;
}

int func_166(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_243(uParam0, iParam1, uParam2, uParam3);
	if (iVar0 == 2)
	{
		return 2;
	}
	iVar1 = func_141(uParam2->f_9.f_2);
	if (!func_244(&(iParam1->f_1485), &(uParam3->f_2057[iVar1 /*26*/]), 1, 1))
	{
		iVar0 = 0;
	}
	else if (func_36(uParam3->f_1651, 2))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam1->f_1485.f_208, uParam3->f_1622[iVar1 /*3*/], 0f, 0f, uParam3->f_2057[iVar1 /*26*/].f_16, 2);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_1485.f_208) || !ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(iParam1->f_1485.f_208, false))
	{
		iVar0 = 0;
	}
	else if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(iParam1->f_1485.f_208, "P_BINOCULARS01x"))
	{
		STREAMING::REQUEST_MODEL(fLocal_13, false);
		if (!STREAMING::HAS_MODEL_LOADED(fLocal_13))
		{
			iVar0 = 0;
		}
	}
	if (iVar0 == 1)
	{
	}
	return iVar0;
}

bool func_167(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (!func_245(iParam1, uParam0, uParam2, uParam3))
	{
		return false;
	}
	iVar0 = func_141(uParam2->f_9.f_2);
	if (uParam2->f_4 < 10)
	{
		if (!func_244(&(iParam1->f_1485), &(uParam3->f_2057[iVar0 /*26*/]), 1, 1))
		{
			return false;
		}
	}
	return true;
}

void func_168(int* iParam0, var uParam1)
{
	func_246(iParam0, 13);
	func_247(iParam0, uParam1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(fLocal_13);
	func_53(&(iParam0->f_1485));
	func_54(&(iParam0->f_1485));
}

void func_169(var uParam0, int* iParam1, var uParam2, var uParam3, int iParam4)
{
	func_248(iParam1, uParam2, uParam3);
	if (uParam2->f_4 >= 3 && uParam2->f_4 <= 11)
	{
		iParam1->f_1466 = func_249(uParam0, iParam1, uParam2, uParam3, iParam4);
	}
}

bool func_170(var uParam0, var uParam1, int* iParam2)
{
	if (!func_107(uParam1->f_1, 1))
	{
		return false;
	}
	if (*uParam1 == -1)
	{
		return false;
	}
	if (!func_109((uParam0[*uParam1 /*33*/])->f_4, uParam1->f_1))
	{
		return false;
	}
	if ((uParam0[*uParam1 /*33*/])->f_2 != 3)
	{
		return false;
	}
	if (func_51(iParam2))
	{
		NETWORK::NETWORK_SET_LOCAL_PLAYER_PENDING_FAST_INSTANCE_ID(7);
	}
	func_60();
	if (SCRIPTS::IS_LOADING_SCREEN_VISIBLE())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	return true;
}

bool func_171(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_141(uParam0->f_1.f_2);
	if (!func_207(PLAYER::PLAYER_PED_ID(), uParam1->f_1622[iVar0 /*3*/], BUILTIN::TO_FLOAT(*uParam1)))
	{
		uParam0->f_6 = 1;
		func_250(iParam2, 4);
		return true;
	}
	return false;
}

bool func_172(var uParam0, int* iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (*uParam0 <= 4)
	{
		return false;
	}
	if (func_36(uParam2->f_19, 256))
	{
		func_144(uParam0, uParam2, iParam4, &(iParam1->f_1));
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar1 = uParam0->f_7[iVar0 /*5*/].f_4;
			if (iVar1 < 0 || iVar1 >= 4)
			{
			}
			else
			{
				iParam1->f_1[iVar1] = iVar0;
			}
			iVar0++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar3 = iParam1->f_1[iVar2];
		if (iVar3 < 0 || iVar3 >= 4)
		{
		}
		else if (uParam0->f_7[iVar3 /*5*/] == 255)
		{
		}
		else if (uParam0->f_7[iVar3 /*5*/] != PLAYER::PLAYER_ID())
		{
		}
		else
		{
			iParam1->f_6 = iVar2;
		}
		else
		{
			iVar2++;
		}
	}
	func_250(iParam3, 0);
	return true;
}

bool func_173()
{
	if (!func_251(255))
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
		PLAYER::_SECONDARY_SPECIAL_ABILITY_SET_DISABLED(PLAYER::PLAYER_ID(), true);
		func_252(0);
	}
	MISC::SET_BIT(&(Global_1958621.f_1), 5);
	Global_1048584 = 1;
	return true;
}

bool func_174(int* iParam0, var uParam1, var uParam2)
{
	bool bVar0;

	if (func_253() == 0)
	{
		return true;
	}
	if (!func_90(*iParam0, 9))
	{
		bVar0 = true;
		if (func_251(255))
		{
			func_27(iParam0, 8);
		}
		else if (!func_254())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
			{
				func_255(uParam1, 250);
			}
			else if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_27(iParam0, 9);
				if (func_90(*iParam0, 8))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam2->f_1622[func_141(iParam0->f_7) /*3*/], false, false, true, true);
				}
				func_256(128);
				func_256(64);
				func_191(0, 0, 0, 1);
			}
		}
	}
	return false;
}

bool func_175(int* iParam0, var uParam1)
{
	if (func_90(*iParam0, 8))
	{
		return true;
	}
	if (func_257(255) && func_258())
	{
		return true;
	}
	if (func_73(11, 255))
	{
		return false;
	}
	if (func_258())
	{
		return false;
	}
	if (CAM::IS_SCREEN_FADED_OUT() || (func_14(&(iParam0->f_1473)) && func_37(&(iParam0->f_1473), 1, 0) > 5000))
	{
		if (func_259())
		{
			func_260();
			func_80(1);
			func_81(1);
			func_82(1);
			func_83(1);
			func_86(&(uParam1->f_5), 16);
		}
		if (func_261(0))
		{
			func_262();
		}
	}
	else if (CAM::IS_SCREEN_FADED_IN())
	{
		if (!func_14(&(iParam0->f_1473)))
		{
			func_15(&(iParam0->f_1473), 1, 0);
		}
		func_255(uParam1, 500);
		if (func_259())
		{
			func_80(1);
			func_81(1);
			func_82(1);
		}
	}
	return false;
}

bool func_176(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (SCRIPTS::IS_LOADING_SCREEN_VISIBLE())
	{
		return false;
	}
	if (!func_263(uParam1, uParam2))
	{
		return false;
	}
	iVar0 = func_141(uParam1->f_1.f_2);
	if (func_264(iParam0, uParam1, uParam2->f_1622[iVar0 /*3*/]))
	{
		func_246(iParam0, 7);
		return true;
	}
	return false;
}

int func_177(int* iParam0, var uParam1, var uParam2)
{
	if (func_36(uParam1->f_5, 4))
	{
		return 2;
	}
	if (SCRIPTS::IS_LOADING_SCREEN_VISIBLE() || func_265())
	{
		return 0;
	}
	if (func_36(uParam2->f_19, 2) && !func_90(*iParam0, 6))
	{
		return 0;
	}
	if (!func_109(uParam1->f_9, uParam1->f_1))
	{
		return 0;
	}
	if (uParam1->f_8 != 3)
	{
		return 0;
	}
	if (!iParam0->f_1466)
	{
		return 0;
	}
	return 1;
}

bool func_178(var uParam0)
{
	int iVar0;

	if (*uParam0 < 6)
	{
		return false;
	}
	if (!func_14(&(uParam0->f_31)))
	{
		return false;
	}
	iVar0 = func_37(&(uParam0->f_31), 0, 1);
	if (iVar0 < 0)
	{
		return false;
	}
	return true;
}

bool func_179(var uParam0, int* iParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar10;
	int iVar11;
	struct<4> Var12;
	char cVar16[32];
	int iVar20;
	int iVar21;
	int iVar22;
	vector3 vVar23[24];
	int iVar26;

	if (!func_90(*iParam1, 2))
	{
		iParam1->f_7 = func_141((iParam2[iParam3 /*12*/])->f_1.f_2);
		iVar0 = 0;
		iVar1 = func_266(iParam1, 0);
		if (iVar1 >= 0 && iVar1 < 4)
		{
			iVar0 = PLAYER::GET_PLAYER_PED(uParam0->f_7[iVar1 /*5*/]);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (PED::IS_PED_MALE(iVar0))
			{
				if ((uParam4->f_2266 >= 0 && uParam4->f_2266 < 8) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2057[uParam4->f_2266 /*26*/].f_17)))
				{
					iParam1->f_7 = uParam4->f_2266;
				}
			}
			else if ((uParam4->f_2267 >= 0 && uParam4->f_2267 < 8) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2057[uParam4->f_2267 /*26*/].f_17)))
			{
				iParam1->f_7 = uParam4->f_2267;
			}
		}
		Var2 = { func_267(&(iParam1->f_1485)) };
		if (((iParam1->f_7 >= 0 && iParam1->f_7 < 8) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2057[iParam1->f_7 /*26*/].f_17))) && !MISC::ARE_STRINGS_EQUAL(&Var2, &(uParam4->f_2057[iParam1->f_7 /*26*/].f_17)))
		{
			func_268(&(iParam1->f_1485), &(uParam4->f_2057[iParam1->f_7 /*26*/].f_17));
		}
		func_269(&(iParam1->f_1485));
		iVar10 = 0;
		while (iVar10 < 4)
		{
			iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1->f_14[iVar10 /*21*/].f_1.f_2);
			Var12 = { func_270(&(uParam4->f_1652[iVar10 /*4*/]), iVar11, iVar10, 0) };
			if (func_271(iParam1, &Var12, iParam1->f_14[iVar10 /*21*/].f_1.f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 20)
		{
			if (func_271(iParam1, &(uParam4->f_1669[iVar10 /*8*/]), iParam1->f_99[iVar10 /*20*/].f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 20)
		{
			if (func_271(iParam1, &(uParam4->f_1830[iVar10 /*4*/]), iParam1->f_500[iVar10 /*13*/].f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 10)
		{
			if (func_271(iParam1, &(uParam4->f_1911[iVar10 /*4*/]), iParam1->f_761[iVar10 /*13*/].f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 1)
		{
			if (func_271(iParam1, &(uParam4->f_1952[iVar10 /*4*/]), iParam1->f_1089[iVar10 /*14*/].f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 10)
		{
			if (func_271(iParam1, &(uParam4->f_1957[iVar10 /*4*/]), iParam1->f_892[iVar10 /*13*/].f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 5)
		{
			if (func_271(iParam1, &(uParam4->f_1998[iVar10 /*4*/]), iParam1->f_1023[iVar10 /*13*/].f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 24)
		{
			StringCopy(&cVar16, "", 32);
			if (!func_272(iParam1, uParam4, iVar10, 0, &cVar16, 0, 0))
			{
			}
			if (func_271(iParam1, &cVar16, iParam1->f_1104[iVar10 /*15*/].f_2))
			{
			}
			iVar10++;
		}
		func_273(&(iParam1->f_1485));
		func_274(&(iParam1->f_1485), 1);
		if (func_36(uParam0->f_3, 2))
		{
			func_231(&(iParam1->f_1485), 524288);
			func_232(&(iParam1->f_1485), 4);
		}
		if (func_36(uParam4->f_1651, 8) && !func_90(*iParam1, 3))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(uParam4->f_2057[iParam1->f_7 /*26*/]), "cutscene@mpgvo1_int"))
			{
				func_27(iParam1, 3);
			}
		}
		func_27(iParam1, 2);
		iVar20 = 0;
		while (iVar20 < 4)
		{
			iVar21 = func_266(iParam1, iVar20);
			if (iVar21 < 0 || iVar21 >= 4)
			{
			}
			else if (uParam0->f_7[iVar21 /*5*/] == 255)
			{
			}
			else
			{
				iVar22 = uParam0->f_7[iVar21 /*5*/].f_3;
				if (uParam0->f_7[iVar21 /*5*/] == PLAYER::PLAYER_ID())
				{
					if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(iParam1->f_1485.f_208, "local_player_variation"))
					{
						ANIMSCENE::SET_ANIM_SCENE_INT(iParam1->f_1485.f_208, "local_player_variation", iVar22 + 1, false);
					}
				}
				StringCopy(&cVar23, "mp_player_", 24);
				StringIntConCat(&cVar23, iVar20 + 1, 24);
				StringConCat(&cVar23, "_variation", 24);
				if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(iParam1->f_1485.f_208, &cVar23))
				{
					ANIMSCENE::SET_ANIM_SCENE_INT(iParam1->f_1485.f_208, &cVar23, iVar22 + 1, false);
				}
			}
			iVar20++;
		}
		func_275(1);
	}
	func_276(uParam4->f_2057[iParam1->f_7 /*26*/], &(iParam1->f_1485));
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_1485.f_208) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam1->f_1485.f_208, false))
	{
		func_277(iParam1, uParam0, iParam2[iParam3 /*12*/], uParam4, iParam5);
		if (func_36(uParam4->f_1651, 4))
		{
			func_278(0, iParam6);
			func_27(iParam1, 4);
		}
		iVar26 = 0;
		while (iVar26 < 3)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2044[iVar26 /*4*/].f_1)))
			{
			}
			else if (!ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(iParam1->f_1485.f_208, &(uParam4->f_2044[iVar26 /*4*/].f_1)))
			{
			}
			else if (!MISC::IS_BIT_SET(uParam4->f_2057[iParam1->f_7 /*26*/].f_25, iVar26))
			{
			}
			else
			{
				func_279(iParam1, uParam4->f_2044[iVar26 /*4*/], uParam4->f_2044[iVar26 /*4*/].f_1, uParam4->f_2057[iParam1->f_7 /*26*/].f_21[iVar26]);
			}
			iVar26++;
		}
		return true;
	}
	return false;
}

bool func_180(var uParam0, int* iParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	struct<7> Var6;
	int iVar18;

	func_280(uParam2, iParam1, uParam5);
	bVar0 = false;
	if (func_281(uParam0, iParam1, uParam2, uParam3, uParam4, uParam5, iParam6, &bVar0))
	{
		func_231(&(iParam1->f_1485), 524288);
		func_232(&(iParam1->f_1485), 4);
		if (!func_90(*iParam1, 1))
		{
			if (bVar0)
			{
				func_231(&(iParam1->f_1485), 1.504633E-36f);
			}
			func_27(iParam1, 1);
		}
	}
	if (func_276(uParam5->f_2057[iParam1->f_7 /*26*/], &(iParam1->f_1485)))
	{
		if (func_51(iParam1))
		{
			func_282(uParam0, 0);
		}
		return true;
	}
	else if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_1485.f_208))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam1->f_1485.f_208, false))
		{
			iVar1 = BUILTIN::ROUND((ANIMSCENE::_GET_ANIM_SCENE_DURATION(iParam1->f_1485.f_208) * 1148846080));
			iVar2 = BUILTIN::ROUND((ANIMSCENE::_GET_ANIM_SCENE_TIME(iParam1->f_1485.f_208) * 1148846080));
			bVar3 = !ENTITY::HAS_ANIM_EVENT_FIRED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1->f_14[0 /*21*/].f_1.f_2), MISC::GET_HASH_KEY("NotFinalPlaylist"));
			if (!func_36(uParam2->f_5, 1))
			{
				if (bVar3 && func_283(uParam5, iVar1, iVar2))
				{
					func_86(&(uParam2->f_5), 1);
				}
			}
			iVar4 = 0;
			while (iVar4 < 3)
			{
				if (MISC::IS_BIT_SET(uParam2->f_7, iVar4))
				{
				}
				else if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(&(uParam5->f_2019[iVar4 /*8*/].f_1)))
				{
				}
				else if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(&(uParam5->f_2019[iVar4 /*8*/].f_4)))
				{
				}
				else if (!ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(iParam1->f_1485.f_208, &(uParam5->f_2019[iVar4 /*8*/].f_1)))
				{
				}
				else
				{
					iVar5 = func_284(iParam1->f_1485.f_208, &(uParam5->f_2019[iVar4 /*8*/].f_1), 0);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
					{
					}
					else if (!ENTITY::HAS_ANIM_EVENT_FIRED(iVar5, MISC::GET_HASH_KEY(&(uParam5->f_2019[iVar4 /*8*/].f_4))))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam2->f_7), iVar4);
					}
				}
				iVar4++;
			}
			if (!func_36(uParam2->f_5, 8))
			{
				if (func_90(uParam0->f_1, 0))
				{
					if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(iParam1->f_1485.f_208, "ExportCamera", &Var6, false, 0, 2) && !func_157(Var6.f_6))
					{
						iParam1->f_9 = { Var6.f_6 };
						STREAMING::SET_FOCUS_POS_AND_VEL(iParam1->f_9, 0f, 0f, 0f);
					}
					func_86(&(uParam2->f_5), 8);
				}
			}
			if ((bVar3 && uParam5->f_4 > -2) && !func_90(*iParam1, 11))
			{
				iVar18 = 1000;
				if (uParam5->f_4 > -1)
				{
					iVar18 = uParam5->f_4;
				}
				if (func_285(uParam5, iVar1, iVar2, iVar18 + 100))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_OUT(iVar18);
					}
					func_231(&(iParam1->f_1485), 524288);
					func_232(&(iParam1->f_1485), 4);
					func_250(iParam6, 7);
					func_27(iParam1, 11);
				}
			}
		}
	}
	return false;
}

int func_181(var uParam0, int* iParam1, var uParam2)
{
	bool bVar0;

	bVar0 = true;
	if (!iParam1->f_1466)
	{
		if (!func_14(&(iParam1->f_1469)))
		{
			if (func_90(uParam0->f_1, 0))
			{
				func_15(&(iParam1->f_1469), 0, 0);
			}
		}
		if (CAM::IS_SCREEN_FADED_IN())
		{
		}
		else if (func_14(&(iParam1->f_1469)) && func_286(&(iParam1->f_1469), 5000, 0))
		{
		}
		else
		{
			bVar0 = false;
		}
	}
	if (!func_264(iParam1, uParam2, 0f, 0f, 0f))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_287(&(iParam1->f_1469));
		func_246(iParam1, 7);
		if (func_36(uParam2->f_5, 4))
		{
			return 2;
		}
		return 1;
	}
	return 0;
}

bool func_182(var uParam0, var uParam1)
{
	if (!func_90(uParam0->f_1, 0))
	{
		return false;
	}
	if (func_36(uParam1->f_19, 1) && !func_90(uParam0->f_1, 6))
	{
		return false;
	}
	return true;
}

bool func_183(int* iParam0)
{
	int iVar0;

	if (!func_90(*iParam0, 8))
	{
		return true;
	}
	func_256(64);
	func_256(128);
	if (func_251(255))
	{
		return true;
	}
	if (!func_90(*iParam0, 10))
	{
		if (iParam0->f_8 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0->f_8))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0->f_8);
		}
		func_27(iParam0, 10);
		func_256(128);
		func_256(64);
		func_288(7, iVar0, 1, 0);
	}
	return false;
}

void func_184(var uParam0, int* iParam1, var uParam2, int iParam3, int iParam4)
{
	func_289(uParam0, iParam1, uParam2, iParam3);
	if (func_36(uParam2->f_1651, 4) && func_90(*iParam1, 4))
	{
		func_278(1, iParam4);
		func_246(iParam1, 4);
	}
}

bool func_185(int* iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 1;
	if (func_36(uParam1->f_5, 16))
	{
		if ((bParam4 || !bParam3) || !CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS())
		{
			func_290(&(uParam1->f_5), 16);
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && func_291(iParam0, uParam2))
			{
				func_16(1, 2);
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (!func_90(*iParam0, 8))
	{
		if (!func_36(uParam2->f_19, 512))
		{
			if (!bParam4 && func_37(&(iParam0->f_1471), 0, 0) <= 4000)
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 25, true);
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_186(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	if (*uParam0 < 7)
	{
		return false;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && func_291(iParam1, uParam3))
	{
		func_16(1, 2);
	}
	func_28(iParam1, uParam2);
	return true;
}

bool func_187(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::CLEAR_BIT(uParam0[iVar0], iVar1);
	return bVar2;
}

bool func_188(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
	return !bVar2;
}

void func_189(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_190(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

void func_191(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_292(iParam0);
	if (!func_293(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_294(128) && !func_235(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_295() == 4)
	{
		func_120(18);
	}
	func_256(1024);
}

void func_192(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_193(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_194(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (VOLUME::DOES_VOLUME_EXIST(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_195(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

bool func_196(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

void func_197(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = -2;
}

void func_198(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = -1f;
}

void func_199(var uParam0)
{
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
}

void func_200(char* sParam0)
{
	StringCopy(sParam0, "", 64);
	sParam0->f_8 = 0;
}

void func_201(char* sParam0)
{
	StringCopy(sParam0, "", 64);
	StringCopy(&(sParam0->f_8), "", 64);
}

void func_202(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_296(uParam0[iVar0 /*6*/]);
		iVar0++;
	}
	uParam0->f_91 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		uParam0->f_92[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_123 = 0;
	iVar0 = 0;
	while (iVar0 < 75)
	{
		uParam0->f_124[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_200[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 75)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			uParam0->f_204[iVar0 /*3*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			uParam0->f_430[iVar0 /*3*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			uParam0->f_527[iVar0 /*3*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
}

void func_203(var uParam0)
{
}

void func_204(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	func_297(&(uParam0->f_1));
	func_298(&(uParam0->f_99));
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_436[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_440[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&(uParam0->f_444[iVar0 /*3*/]), "", 24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_451[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_454[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_459[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_464[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_467[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 75)
	{
		func_299(&(uParam0->f_470[iVar0 /*2*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_299(&(uParam0->f_621[iVar0 /*2*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 75)
	{
		uParam0->f_662[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_738[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 75)
	{
		uParam0->f_771[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_847[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_300(&(uParam0->f_880[iVar0 /*5*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 75)
	{
		func_93(&(uParam0->f_931[iVar0 /*2*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 75)
	{
		func_93(&(uParam0->f_1082[iVar0 /*2*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_93(&(uParam0->f_1233[iVar0 /*2*/]));
		iVar0++;
	}
	func_301(&(uParam0->f_1298));
}

void func_205(var uParam0)
{
	*uParam0 = 0f;
	uParam0->f_1 = 0;
}

bool func_206(var uParam0)
{
	if (!func_107(uParam0->f_4, 1))
	{
		return false;
	}
	return true;
}

bool func_207(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;

	if (fParam4 == -1f)
	{
		return true;
	}
	if (fParam4 == 0f)
	{
		iVar0 = 1120403456; /* Float: 100f */
	}
	else
	{
		iVar0 = fParam4;
	}
	return func_242(iParam0, vParam1, iVar0, 1, 1);
}

int func_208(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	Stack.Push(iParam1);
	Stack.Push(fParam2);
	Stack.Push(iParam3);
	Stack.Push(iParam4);
	Stack.Push(iParam5);
	Call_Loc(iParam0);
	return StackVal;
}

void func_209(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

int func_210(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_302(iVar0, uParam0[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_211(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_302(iVar0, uParam0[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else if ((*uParam0)[iVar0 /*5*/] != iParam3)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_212(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_302(iVar0, uParam0[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else
		{
			iVar1 = (*uParam0)[iVar0 /*5*/];
			iVar2 = GANG::NETWORK_GET_GANG_ID(iVar1);
			if (!GANG::NETWORK_IS_GANG_ID_VALID(iVar2))
			{
			}
			else if (!GANG::NETWORK_IS_GANG_ACTIVE(iVar2))
			{
			}
			else if (!GANG::NETWORK_IS_GANG_LEADER(iVar1))
			{
			}
			else
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_213(var uParam0, int iParam1, bool bParam2, var uParam3)
{
	int iVar0;

	if (uParam3->f_1 < 0 || uParam3->f_1 >= 8)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_302(iVar0, uParam0[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else if ((uParam0[iVar0 /*5*/])->f_2 < 0 || (uParam0[iVar0 /*5*/])->f_2 >= 8)
		{
		}
		else if ((uParam0[iVar0 /*5*/])->f_2 != uParam3->f_1)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_214(var uParam0, int iParam1, bool bParam2, var uParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_302(iVar0, uParam0[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else
		{
			iVar1 = 0;
			iVar2 = 0;
			iVar3 = 0;
			Stack.Push(uParam3->f_1);
			Stack.Push(349.853f);
			Stack.Push(&iVar1);
			Stack.Push(&iVar2);
			Stack.Push(&iVar3);
			Call_Loc(iParam4);
			if (StackVal != 1)
			{
			}
			else
			{
				iVar4 = (*uParam0)[iVar0 /*5*/];
				iVar5 = PLAYER::GET_PLAYER_PED(iVar4);
				iVar6 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(iVar1));
				if (PED::IS_PED_IN_VEHICLE(iVar5, iVar6, true) && func_303(iVar5, iVar6) == uParam3->f_2)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_215(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_302(iVar0, uParam0[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else if (*uParam0)[iVar0 /*5*/] != PLAYER::PLAYER_ID()
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_216(var uParam0, int iParam1, bool bParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_302(iVar0, uParam0[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else if ((uParam0[iVar0 /*5*/])->f_3 != uParam3->f_1)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_217(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if ((*uParam0)[iVar0 /*37*/] == iParam1)
		{
		}
		if ((*uParam0)[iVar0 /*37*/] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_218(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		return false;
	}
	return MISC::IS_BIT_SET(*uParam0, 0);
}

bool func_219(var uParam0)
{
	if (!func_124(uParam0))
	{
		return true;
	}
	if (uParam0->f_4 < 15)
	{
		return false;
	}
	else if (uParam0->f_4 == 15)
	{
		return !func_36(uParam0->f_5, 16);
	}
	return true;
}

bool func_220(var uParam0)
{
	if (!func_124(uParam0))
	{
		return false;
	}
	if (uParam0->f_4 <= 14)
	{
		return false;
	}
	return true;
}

int func_221()
{
	return Global_1051645.f_12;
}

char* func_222()
{
	return "unnamed";
}

int func_223(int iParam0)
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

bool func_224(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_73(36, iParam0);
}

bool func_225(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_304(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_305(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

void func_226(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_227()
{
	return Global_1102813.f_26.f_3341;
}

bool func_228(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (iVar0 == Global_1102813.f_26.f_3344)
	{
		return true;
	}
	if (iVar0 == PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return false;
}

bool func_229(var uParam0)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (!func_107(uParam0->f_1, 1))
	{
		return false;
	}
	uParam0->f_9 = { uParam0->f_1 };
	return true;
}

bool func_230(var uParam0, int iParam1)
{
	if (func_306(uParam0))
	{
		return true;
	}
	if (!func_307(uParam0, iParam1))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2057[iParam1 /*26*/])))
	{
		return false;
	}
	return true;
}

void func_231(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_232(var uParam0, int iParam1)
{
	uParam0->f_12 = (uParam0->f_12 || iParam1);
}

void func_233(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_234(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_235(int iParam0)
{
	return (Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1) == Global_1106895[iParam0 /*2*/].f_1;
}

void func_236(var uParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_157(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
	uParam0->f_8 = { vParam4 };
	func_234(&(uParam0->f_263), 4194304);
}

void func_237(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_209), sParam1, 64);
}

void func_238(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (func_308(uParam0, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_225[iVar0 /*9*/])))
		{
			if (!func_309(uParam0, sParam1) || func_310(uParam0, 8388608))
			{
				StringCopy(&(uParam0->f_225[iVar0 /*9*/]), sParam1, 64);
				if (!bParam2)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_208) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_208, true, false))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_208, sParam1))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_208, sParam1);
						}
					}
					else
					{
						func_231(uParam0, 4194304);
					}
				}
				else
				{
					func_231(uParam0, 4194304);
				}
				return;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
}

bool func_239(var uParam0)
{
	if (!func_161(uParam0))
	{
		return false;
	}
	return !func_109(uParam0->f_1, uParam0->f_9);
}

int func_240()
{
	return func_253();
}

int func_241()
{
	return Global_1102813.f_26.f_3342;
}

bool func_242(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_311(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

int func_243(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (func_312(iParam1, uParam0, uParam2, uParam3))
	{
		return 2;
	}
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (!func_313(iVar1, 0.0003061561f, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1->f_14[iVar1 /*21*/].f_1.f_1), &(uParam3->f_25[iVar1 /*80*/].f_11[iVar2 /*34*/]), &(iParam1->f_14[iVar1 /*21*/].f_1.f_18), 1))
			{
				iVar0 = 0;
			}
			if (!func_313(iVar1, 0.0003061561f, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1->f_14[iVar1 /*21*/].f_1.f_1), &(uParam3->f_25[iVar1 /*80*/].f_11[iVar2 /*34*/].f_13), &(iParam1->f_14[iVar1 /*21*/].f_1.f_19), 0))
			{
				iVar0 = 0;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (!func_313(iVar1, 1.502638E+20f, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1->f_99[iVar1 /*20*/].f_1), &(uParam3->f_346[iVar1 /*29*/].f_3), &(iParam1->f_99[iVar1 /*20*/].f_18), 0))
		{
			iVar0 = 0;
		}
		bVar3 = (iVar0 == 1 && func_314(uParam3->f_346[iVar1 /*29*/].f_3, uParam3->f_346[iVar1 /*29*/].f_16, 1056964608 /* Float: 0.5f */, 1));
		if (!func_313(iVar1, 1.502638E+20f, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1->f_99[iVar1 /*20*/].f_1), &(uParam3->f_346[iVar1 /*29*/].f_16), &(iParam1->f_99[iVar1 /*20*/].f_19), bVar3))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_244(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	struct<8> Var7;
	int iVar15;
	bool bVar16;
	int iVar17;
	struct<8> Var18;

	if (bParam3)
	{
		uParam0->f_274++;
		if (uParam0->f_274 < 10)
		{
			return (func_310(uParam0, 256) && !func_310(uParam0, 4194304));
		}
		uParam0->f_274 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	func_315(uParam0, sParam1);
	if (!func_310(uParam0, 64))
	{
		if (!func_157(func_316(uParam0)))
		{
			func_231(uParam0, 64);
		}
		else if (func_317(uParam0, &vVar0, &vVar3))
		{
			uParam0->f_5 = { vVar0 };
			uParam0->f_8 = { vVar3 };
		}
		return false;
	}
	fVar6 = func_318(Global_33, func_316(uParam0), 1);
	if (func_310(uParam0, 128) || func_310(uParam0, 256))
	{
		if ((fVar6 >= func_319(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_208))
		{
			func_320(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_208))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_208);
			}
			func_321(uParam0);
			func_76(uParam0, 128, 1);
			func_76(uParam0, 256, 1);
			func_76(uParam0, 4096, 1);
			func_76(uParam0, 32768, 1);
			func_76(uParam0, 2.350989E-38f, 1);
		}
	}
	else if (fVar6 <= func_322(uParam0) || bParam2)
	{
		if (!func_310(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_208))
			{
				if (func_322(uParam0) >= func_319(uParam0))
				{
				}
				Var7 = { func_267(uParam0) };
				if (!func_323(uParam0, 1) && MISC::IS_STRING_NULL_OR_EMPTY(&Var7))
				{
					func_324(uParam0);
					Var7 = { func_267(uParam0) };
				}
				iVar15 = 256;
				if (!func_310(uParam0, 1))
				{
					iVar15 |= 2048;
				}
				if (func_323(uParam0, 2))
				{
					iVar15 |= 16384;
				}
				uParam0->f_208 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_192), iVar15, &Var7, false, true);
				func_325(uParam0, 0, 0, 0, 0);
				func_231(uParam0, 128);
			}
		}
	}
	if (func_310(uParam0, 128))
	{
		if (func_310(uParam0, 256) && !func_310(uParam0, 4194304))
		{
			return true;
		}
		func_326(uParam0);
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_208, true, false))
		{
			bVar16 = true;
			Var18 = { func_327(uParam0) };
			iVar17 = 0;
			while (iVar17 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_225[iVar17 /*9*/])))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_225[iVar17 /*9*/]), &Var18))
					{
						if (!uParam0->f_225[iVar17 /*9*/].f_8)
						{
							uParam0->f_225[iVar17 /*9*/].f_8 = 1;
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_208, &(uParam0->f_225[iVar17 /*9*/]));
							bVar16 = false;
						}
						else if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_208, &(uParam0->f_225[iVar17 /*9*/])))
						{
							bVar16 = false;
						}
					}
				}
				iVar17++;
			}
			if (!func_310(uParam0, 8388608))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_208, &Var18))
				{
					if (!func_310(uParam0, 2.350989E-38f))
					{
						ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_208, &Var18);
						func_231(uParam0, 2.350989E-38f);
					}
					if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_208, &Var18))
					{
						bVar16 = false;
					}
				}
			}
			if (!bVar16)
			{
				return false;
			}
			func_231(uParam0, 256);
			func_76(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

bool func_245(int* iParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_312(iParam0, uParam1, uParam2, uParam3))
	{
		return false;
	}
	return true;
}

void func_246(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_247(int* iParam0, var uParam1)
{
	int iVar0;

	TASK::_0x4F57397388E1DFF8();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_328(iVar0, 0.0003061561f, &(iParam0->f_14[iVar0 /*21*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_328(iVar0, 1.502638E+20f, &(iParam0->f_99[iVar0 /*20*/]));
		iVar0++;
	}
	uParam1->f_9 = { func_64() };
}

void func_248(int* iParam0, var uParam1, var uParam2)
{
	func_329(iParam0, uParam1, uParam2);
	func_330(iParam0, uParam1, uParam2);
	POPULATION::_0xF45E46DEECF7DF6E(4224, 0, 0, -1, -1);
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && CAM::IS_SCREEN_FADED_OUT())
	{
		func_331(0);
	}
	if (func_332(uParam1) || func_88(uParam1))
	{
		if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(1.608566E+13f) || UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(1.608566E+13f))
		{
			UIAPPS::_CLOSE_UIAPP_BY_HASH(1.608566E+13f);
		}
		if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(7.215231E-38f) || UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(7.215231E-38f))
		{
			UIAPPS::_CLOSE_UIAPP_BY_HASH(7.215231E-38f);
		}
		PAD::DISABLE_CONTROL_ACTION(0, -2.885348E+21f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -3.94682E-22f, false);
		PAD::DISABLE_CONTROL_ACTION(2, -7.654632E+14f, false);
		PAD::DISABLE_CONTROL_ACTION(2, 4726281f, false);
	}
	if (uParam1->f_4 != 0)
	{
		VOICE::_0xB3E8841F6BDAF83E();
	}
}

bool func_249(var uParam0, int* iParam1, var uParam2, var uParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	bVar0 = true;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		iVar4 = func_266(iParam1, iVar3);
		if (iVar4 < 0 || iVar4 >= 4)
		{
		}
		else
		{
			if (!func_333(uParam0, &(uParam0->f_7[iVar4 /*5*/]), iParam1, uParam2, iVar3, iVar3, 0.0003061561f, &(iParam1->f_14[iVar3 /*21*/]), uParam3, &(uParam3->f_25[iVar3 /*80*/]), iParam4))
			{
				if (bVar0)
				{
					bVar0 = false;
				}
			}
			func_334(&(iParam1->f_14[iVar3 /*21*/].f_1), &iVar1, &iVar2);
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 20)
	{
		if (!func_335(uParam0, iParam1, uParam2, iVar3, uParam3->f_346[iVar3 /*29*/], 1.502638E+20f, &(iParam1->f_99[iVar3 /*20*/]), uParam3, &(uParam3->f_346[iVar3 /*29*/]), &(uParam3->f_1669[iVar3 /*8*/]), iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_334(&(iParam1->f_99[iVar3 /*20*/]), &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 20)
	{
		iVar5 = 0;
		if (!func_336(iParam1, uParam0, uParam2, iVar3, uParam3->f_927[iVar3 /*15*/], -3.004006E-27f, &(iParam1->f_500[iVar3 /*13*/]), &iVar5, uParam3, &(uParam3->f_927[iVar3 /*15*/]), &(uParam3->f_927[iVar3 /*15*/].f_3), &(uParam3->f_927[iVar3 /*15*/].f_9), &(uParam3->f_1830[iVar3 /*4*/]), iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_334(&(iParam1->f_500[iVar3 /*13*/]), &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 10)
	{
		iVar6 = 0;
		if (!func_336(iParam1, uParam0, uParam2, iVar3, uParam3->f_1228[iVar3 /*15*/], 349.853f, &(iParam1->f_761[iVar3 /*13*/]), &iVar6, uParam3, &(uParam3->f_1228[iVar3 /*15*/]), &(uParam3->f_1228[iVar3 /*15*/].f_3), &(uParam3->f_1228[iVar3 /*15*/].f_9), &(uParam3->f_1911[iVar3 /*4*/]), iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_337(uParam0, &(iParam1->f_761[iVar3 /*13*/]), uParam3->f_1228[iVar3 /*15*/]);
		func_334(&(iParam1->f_761[iVar3 /*13*/]), &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 1)
	{
		if (!func_336(iParam1, uParam0, uParam2, iVar3, uParam3->f_1530[iVar3 /*15*/], 3.161728E-22f, &(iParam1->f_1089[iVar3 /*14*/]), &(iParam1->f_1089[iVar3 /*14*/].f_13), uParam3, &(uParam3->f_1530[iVar3 /*15*/]), &(uParam3->f_1530[iVar3 /*15*/].f_3), &(uParam3->f_1530[iVar3 /*15*/].f_9), &(uParam3->f_1952[iVar3 /*4*/]), iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_334(&(iParam1->f_1089[iVar3 /*14*/]), &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 10)
	{
		iVar7 = 0;
		if (!func_336(iParam1, uParam0, uParam2, iVar3, uParam3->f_1379[iVar3 /*15*/], 8.733219E-24f, &(iParam1->f_892[iVar3 /*13*/]), &iVar7, uParam3, &(uParam3->f_1379[iVar3 /*15*/]), &(uParam3->f_1379[iVar3 /*15*/].f_3), &(uParam3->f_1379[iVar3 /*15*/].f_9), &(uParam3->f_1957[iVar3 /*4*/]), iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_334(&(iParam1->f_892[iVar3 /*13*/]), &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar8 = 0;
		if (!func_336(iParam1, uParam0, uParam2, iVar3, uParam3->f_1546[iVar3 /*15*/], -3.874283E+30f, &(iParam1->f_1023[iVar3 /*13*/]), &iVar8, uParam3, &(uParam3->f_1546[iVar3 /*15*/]), &(uParam3->f_1546[iVar3 /*15*/].f_3), &(uParam3->f_1546[iVar3 /*15*/].f_9), &(uParam3->f_1998[iVar3 /*4*/]), iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_334(&(iParam1->f_892[iVar3 /*13*/]), &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 24)
	{
		if (!func_338(iParam1, uParam0, uParam2, iVar3, 0, &(iParam1->f_1104[iVar3 /*15*/]), uParam3, iVar1, iVar2, iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		iVar3++;
	}
	return bVar0;
}

void func_250(int iParam0, int iParam1)
{
	Stack.Push(iParam1);
	Call_Loc(iParam0);
}

bool func_251(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102813.f_3 & 128 != 0;
	}
	return func_339(128, iParam0);
}

void func_252(bool bParam0)
{
	if (func_261(bParam0))
	{
		func_341(func_340(), 0);
	}
}

int func_253()
{
	return Global_1102813.f_26.f_3337;
}

bool func_254()
{
	return (func_342() && func_343(Global_1102813.f_3520.f_17, 1500));
}

void func_255(var uParam0, int iParam1)
{
	if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_OUT(iParam1);
	}
	if (func_332(uParam0))
	{
		func_86(&(uParam0->f_5), 2);
	}
}

void func_256(int iParam0)
{
	if (func_344(iParam0))
	{
		return;
	}
	Global_1102813.f_26.f_9 = (Global_1102813.f_26.f_9 || iParam0);
}

bool func_257(int iParam0)
{
	return !func_48(iParam0);
}

bool func_258()
{
	if (func_259() || func_261(0))
	{
		return false;
	}
	return true;
}

bool func_259()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if ((((((PED::IS_PED_INCAPACITATED(iVar0) || PED::IS_PED_INJURED(iVar0)) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || PED::GET_PED_IS_BEING_GRAPPLED(iVar0)) || PED::IS_PED_HOGTIED(iVar0)) || PED::IS_PED_FALLING(iVar0)) || PED::IS_PED_LASSOED(iVar0))
	{
		return true;
	}
	return false;
}

void func_260()
{
	func_121(11);
	func_123(1, 1);
	func_189(&(Global_1102813.f_3869));
	Global_1102813.f_3869.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	Global_1102813.f_3869 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
	Global_1102813.f_3869.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_190(Global_1102813.f_3869, 36);
}

bool func_261(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

void func_262()
{
	if (func_261(0))
	{
		Global_1051832.f_43 = 1;
	}
}

bool func_263(var uParam0, var uParam1)
{
	if (uParam1->f_2 != -1)
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			func_255(uParam0, uParam1->f_2);
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			return false;
		}
	}
	return true;
}

bool func_264(int* iParam0, var uParam1, vector3 vParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;

	bVar0 = !func_157(vParam2);
	bVar1 = ((bVar0 && !func_157(iParam0->f_9)) || (!bVar0 && func_157(iParam0->f_9)));
	bVar2 = false;
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_1072759.f_28644.f_8.f_4) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_1072759.f_28644.f_8.f_4, false))
	{
		bVar2 = true;
	}
	if (!func_90(*iParam0, 7))
	{
		if (!bVar1)
		{
			func_287(&(iParam0->f_12));
			if (bVar0)
			{
				if (CAM::IS_SCREEN_FADED_IN() && !bVar2)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), vParam2, true) < 1120403456)
					{
						bVar3 = true;
					}
					else
					{
						func_255(uParam1, 500);
					}
				}
				else if (CAM::IS_SCREEN_FADED_OUT() || bVar2)
				{
					if (STREAMING::IS_LOAD_SCENE_ACTIVE())
					{
						STREAMING::LOAD_SCENE_STOP();
					}
					if (STREAMING::LOAD_SCENE_START_SPHERE(vParam2, 100f, 5))
					{
						bVar3 = true;
					}
				}
				if (bVar3)
				{
					STREAMING::SET_FOCUS_POS_AND_VEL(vParam2, 0f, 0f, 0f);
					iParam0->f_9 = { vParam2 };
					bVar1 = true;
				}
			}
			else
			{
				if (CAM::IS_SCREEN_FADED_IN() && !bVar2)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), iParam0->f_9, true) < 1120403456)
					{
						bVar4 = true;
					}
					else
					{
						func_255(uParam1, 500);
					}
				}
				else if (CAM::IS_SCREEN_FADED_OUT() || bVar2)
				{
					if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
					{
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					}
					if (CAM::DOES_CAM_EXIST(iParam0->f_1478))
					{
						CAM::DESTROY_CAM(iParam0->f_1478, false);
					}
					if (STREAMING::IS_LOAD_SCENE_ACTIVE())
					{
						STREAMING::LOAD_SCENE_STOP();
					}
					vVar5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false) };
					if (STREAMING::LOAD_SCENE_START_SPHERE(vVar5, 100f, 5))
					{
						bVar4 = true;
					}
				}
				if (bVar4)
				{
					STREAMING::CLEAR_FOCUS();
					iParam0->f_9 = { 0f, 0f, 0f };
					bVar1 = true;
				}
			}
		}
		if (bVar1)
		{
			if (STREAMING::IS_LOAD_SCENE_ACTIVE())
			{
				if (!func_14(&(iParam0->f_12)))
				{
					func_136(&(iParam0->f_12), 0, 0);
				}
				if (STREAMING::IS_LOAD_SCENE_LOADED() || func_286(&(iParam0->f_12), 5000, 0))
				{
					STREAMING::LOAD_SCENE_STOP();
					func_27(iParam0, 7);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						return false;
					}
				}
			}
			else
			{
				func_27(iParam0, 7);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					return false;
				}
			}
		}
	}
	return func_90(*iParam0, 7);
}

bool func_265()
{
	return Global_1072759.f_28644.f_8.f_14 != 0;
}

int func_266(int* iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return -1;
	}
	return iParam0->f_1[iParam1];
}

struct<8> func_267(var uParam0)
{
	return uParam0->f_209;
}

void func_268(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_208))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_208, true, false))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_208, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_225[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(sParam1, &(uParam0->f_225[iVar0 /*9*/])))
		{
			Var1 = { uParam0->f_209 };
			uParam0->f_225[iVar0 /*9*/] = { Var1 };
		}
		iVar0++;
	}
	func_237(uParam0, sParam1);
	func_76(uParam0, 2097152, 1);
	func_231(uParam0, 9.403955E-38f);
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_208, sParam1, true);
}

void func_269(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		uParam0->f_17[iVar0 /*12*/].f_11 = 0;
		iVar0++;
	}
}

struct<4> func_270(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return *sParam0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return Var0;
	}
	StringCopy(&Var0, "mp_player_", 32);
	if (!bParam3)
	{
		if (PED::IS_PED_MALE(iParam1))
		{
			StringConCat(&Var0, "m_", 32);
		}
		else
		{
			StringConCat(&Var0, "f_", 32);
		}
	}
	if (iParam2 >= 0 && iParam2 < 4)
	{
		StringIntConCat(&Var0, iParam2 + 1, 32);
	}
	return Var0;
}

bool func_271(int* iParam0, char* sParam1, int iParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(iParam0->f_1485.f_208, sParam1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (func_345(&(iParam0->f_1485), iParam2, sParam1, 0, ENTITY::GET_ENTITY_MODEL(iParam2), 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	return false;
}

bool func_272(int* iParam0, var uParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	if (iParam2 < 0)
	{
		return false;
	}
	switch (iParam3)
	{
		case 966820754:
			if (!bParam5)
			{
				*sParam4 = { func_270(&(uParam1->f_1652[iParam2 /*4*/]), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0->f_14[iParam2 /*21*/].f_1.f_1), iParam2, bParam6) };
				return true;
			}
			break;
		case 1627542854:
			if (bParam5)
			{
				*sParam4 = { uParam1->f_1669[iParam2 /*8*/].f_4 };
				return true;
			}
			else
			{
				*sParam4 = { uParam1->f_1669[iParam2 /*8*/] };
				return true;
			}
			break;
		case 1135537454:
			if (!bParam5)
			{
				*sParam4 = { uParam1->f_1911[iParam2 /*4*/] };
				return true;
			}
			break;
		case 465509728:
			if (!bParam5)
			{
				*sParam4 = { uParam1->f_1952[iParam2 /*4*/] };
				return true;
			}
			break;
		case 422112462:
			if (!bParam5)
			{
				*sParam4 = { uParam1->f_1957[iParam2 /*4*/] };
				return true;
			}
			break;
		case 0:
			if (bParam5)
			{
				return false;
			}
			if (iParam0->f_1104[iParam2 /*15*/].f_13 == -1)
			{
				return false;
			}
			if (iParam0->f_1104[iParam2 /*15*/].f_14 == 0)
			{
				return false;
			}
			if (func_272(iParam0, uParam1, iParam0->f_1104[iParam2 /*15*/].f_13, iParam0->f_1104[iParam2 /*15*/].f_14, sParam4, 1, 1))
			{
				return true;
			}
			else if (func_272(iParam0, uParam1, iParam0->f_1104[iParam2 /*15*/].f_13, iParam0->f_1104[iParam2 /*15*/].f_14, sParam4, 0, 1))
			{
				iVar0 = iParam0->f_1104[iParam2 /*15*/].f_1;
				if (func_346(iVar0))
				{
					StringConCat(sParam4, "_horse", 32);
					return true;
				}
			}
			break;
	}
	return false;
}

void func_273(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_208))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_208, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_17[iVar0 /*12*/]) || func_347(&(uParam0->f_17[iVar0 /*12*/]), 2))
		{
			if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_208, &(uParam0->f_17[iVar0 /*12*/].f_1)))
			{
				func_348(&(uParam0->f_17[iVar0 /*12*/]), 1);
			}
		}
		iVar0++;
	}
}

void func_274(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_17[iVar0 /*12*/]) || func_347(&(uParam0->f_17[iVar0 /*12*/]), 2))
		{
			if (func_347(&(uParam0->f_17[iVar0 /*12*/]), 1) || ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_208, &(uParam0->f_17[iVar0 /*12*/].f_1)))
			{
				func_349(uParam0, &(uParam0->f_17[iVar0 /*12*/].f_1), uParam0->f_17[iVar0 /*12*/], uParam0->f_17[iVar0 /*12*/].f_9);
				if (bParam1 && ENTITY::IS_ENTITY_A_PED(uParam0->f_17[iVar0 /*12*/]))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_17[iVar0 /*12*/]);
					if (iVar1 != Global_33 && !func_347(&(uParam0->f_17[iVar0 /*12*/]), 16))
					{
						func_350(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_275(int iParam0)
{
	if (Global_1072759.f_8 == iParam0)
	{
		return;
	}
	Global_1072759.f_8 = iParam0;
}

bool func_276(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	int iVar0;

	func_315(uParam16, &uParam0);
	if (func_351(uParam16) != 1)
	{
		func_352(uParam16);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_33, 134, true);
	HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::GET_PLAYER_INDEX(), 31, true);
	switch (func_351(uParam16))
	{
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam16->f_208) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam16->f_208, true, false))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam16->f_208, false))
				{
					func_353(uParam16, &uParam0);
				}
				else if (ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam16->f_208))
				{
					func_354(uParam16, 4);
					return false;
				}
				else if (func_355(uParam16, 2))
				{
					Stack.Push(uParam16);
					Call_Loc(uParam16->f_189);
				}
				func_354(uParam16, 3);
			}
			else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam16->f_208))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam16->f_209)) && func_310(uParam16, 3.85186E-34f))
				{
				}
				else
				{
					func_356(uParam16);
				}
				func_357(&(uParam16->f_1));
				func_354(uParam16, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_326(uParam16);
				if (!func_358(&(uParam16->f_1)))
				{
					func_359(&(uParam16->f_1), 0);
				}
				else if (func_360(&(uParam16->f_1)) >= 1114636288)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam16->f_208))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam16->f_208);
					}
					func_354(uParam16, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam16->f_208) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam16->f_208, true, false))
			{
				if (func_244(uParam16, &uParam0, 1, 1))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam16->f_208, true, false))
					{
						func_354(uParam16, 4);
					}
					else if (!func_157(func_316(uParam16)) && !func_242(Global_33, func_316(uParam16), 1120403456 /* Float: 100f */, 1, 1))
					{
						if (!func_361(uParam16->f_263, 8388608))
						{
							func_362(1);
						}
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_316(uParam16), 0f, true, true, true, false);
					}
				}
				else if (func_360(&(uParam16->f_1)) >= 1114636288)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam16->f_208))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam16->f_208);
					}
					func_354(uParam16, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX()))
			{
				func_363(1, 0);
				func_353(uParam16, &uParam0);
				func_354(uParam16, 3);
			}
			else if (func_360(&(uParam16->f_1)) >= 1114636288)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam16->f_208))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam16->f_208);
				}
				func_354(uParam16, 4);
			}
			break;
		case 3:
			func_364(uParam16);
			if (func_355(uParam16, 2))
			{
				Stack.Push(uParam16);
				Call_Loc(uParam16->f_189);
			}
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam16->f_208) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam16->f_208, false)) && (ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam16->f_208) || func_310(uParam16, 512)))
			{
				if (!func_310(uParam16, 1024) && func_365(uParam16, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_310(uParam16, 512))
				{
					func_357(&(uParam16->f_1));
					func_231(uParam16, 512);
					func_354(uParam16, 4);
				}
				else if (func_310(uParam16, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			else
			{
				func_352(uParam16);
			}
			if (func_310(uParam16, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_366(uParam16) - func_367(uParam16)))) <= 2f)
				{
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam16->f_208))
				{
					if (ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam16->f_208))
					{
						ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
					}
				}
				if (func_368(uParam16, Global_33, 4))
				{
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
				}
				if (!func_323(uParam16, 4))
				{
					if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_367(uParam16) > 5000)
					{
						ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
					}
				}
			}
			if (func_369(uParam16))
			{
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam16->f_208))
				{
				}
				func_370(uParam16);
				func_371(uParam16);
				return true;
			}
			else
			{
				if (func_310(uParam16, 1.504633E-36f))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam16->f_208) && !ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam16->f_208))
						{
							ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam16->f_208);
						}
						func_357(&(uParam16->f_1));
						ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
						func_231(uParam16, 512);
						func_76(uParam16, 1.504633E-36f, 1);
						func_354(uParam16, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_310(uParam16, 16384) && !ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam16->f_208)) && CAM::IS_SCREEN_FADED_OUT()) && func_367(uParam16) <= 5000) && func_367(uParam16) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(uParam16->f_292);
				}
				if (!func_310(uParam16, 1.084202E-19f) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1.578666E-15f))
				{
					func_372(&(uParam16->f_264), 0);
					func_231(uParam16, 1.084202E-19f);
				}
				if (func_367(uParam16) >= 5000 && func_367(uParam16) <= (func_366(uParam16) - 5000))
				{
					func_373();
				}
			}
			break;
		case 6:
			if (func_369(uParam16))
			{
				func_370(uParam16);
				func_371(uParam16);
				return true;
			}
			break;
		case 4:
			if (func_310(uParam16, 524288))
			{
				ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam16->f_208))
					{
						func_231(uParam16, 2f);
					}
				}
			}
			else
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam16->f_208))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam16->f_208))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam16->f_208, true);
						if (UIFEED::UI_FEED_GET_CURRENT_MESSAGE(9) != 0)
						{
							UIFEED::UI_FEED_CLEAR_CHANNEL(9, true, false);
						}
						return false;
					}
					else if (ANIMSCENE::_IS_ANIM_SCENE_SKIPPABLE(uParam16->f_208))
					{
						return false;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_355(uParam16, 4));
					Stack.Push(uParam16);
					Call_Loc(uParam16->f_190);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam16->f_208) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam16->f_208))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam16->f_208, false);
						}
						func_354(uParam16, 3);
					}
					else if (func_360(&(uParam16->f_1)) >= 1106247680)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam16->f_208) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam16->f_208))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam16->f_208, false);
						}
						func_354(uParam16, 3);
					}
				}
				if (func_351(uParam16) == 3)
				{
					if (func_310(uParam16, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			func_354(uParam16, 4);
			break;
	}
	return false;
}

void func_277(int* iParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_90(*iParam0, 8))
	{
		iVar0 = 8;
		if (func_374(57))
		{
			iVar0 |= 128;
		}
		if (!func_51(iParam0))
		{
			iVar0 |= 4;
			iVar0 |= 16;
		}
		func_16(0, iVar0);
		func_86(&(uParam2->f_5), 16);
		func_375(0, 0);
		func_376();
		MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), 10f, 1);
	}
	func_60();
	if (func_51(iParam0))
	{
		func_282(uParam1, 1);
	}
	func_95(1);
	func_377(0);
	if (!func_36(uParam3->f_19, 128))
	{
		AUDIO::SET_AUDIO_FLAG("EnableCutsceneMusic", true);
	}
	iVar1 = func_141(uParam2->f_1.f_2);
	func_378(uParam3->f_1622[iVar1 /*3*/], 1101004800 /* Float: 20f */, 1);
	func_379(0);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	func_250(iParam4, 1);
}

void func_278(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 150)
	{
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		func_208(iParam1, iVar0, -3.874283E+30f, &iVar1, &iVar2, &iVar3);
		if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar1))
		{
		}
		else
		{
			iVar4 = MISC::_GET_ENTITY_FROM_ITEM(iVar1);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar4, bParam0);
			}
		}
		iVar0++;
	}
}

void func_279(int* iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5)
{
	bool bVar0;
	int iVar1;

	switch (iParam1)
	{
		case 0:
			if (fParam5 != 0f)
			{
				bVar0 = true;
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_1485.f_208, &uParam2, bVar0, false);
			break;
		case 1:
			iVar1 = BUILTIN::ROUND(fParam5);
			ANIMSCENE::SET_ANIM_SCENE_INT(iParam0->f_1485.f_208, &uParam2, iVar1, false);
			break;
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_FLOAT(iParam0->f_1485.f_208, &uParam2, fParam5, false, false);
			break;
	}
}

void func_280(var uParam0, int* iParam1, var uParam2)
{
	int iVar0;

	if ((func_90(*iParam1, 3) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_1485.f_208)) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam1->f_1485.f_208, false))
	{
		STREAMING::SET_SRL_READAHEAD_TIMES(6, 6, 10, 10);
		if (!func_90(*iParam1, 4))
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!MISC::IS_BIT_SET(uParam0->f_7, iVar0))
				{
				}
				else if (!MISC::ARE_STRINGS_EQUAL(&(uParam2->f_2019[iVar0 /*8*/].f_4), "TriggerMusic"))
				{
				}
				else
				{
					func_27(iParam1, 4);
				}
				iVar0++;
			}
		}
		else
		{
			GRAPHICS::DISABLE_HDTEX_THIS_FRAME();
		}
	}
}

bool func_281(var uParam0, int* iParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;

	HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	func_380();
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	func_381(0, 0, 1);
	CAM::_REQUEST_LETTER_BOX_OVERTIME(0, -1, false, 17, true, false);
	if (func_145(uParam5))
	{
		iVar0 = func_146(*uParam2);
		if (func_147(uParam3, iVar0))
		{
			iVar1 = 0;
			if (NETWORK::_NETWORK_IS_THREAD_ACTIVE(SCRIPTS::GET_ID_OF_THIS_THREAD()))
			{
				iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
			}
			iVar2 = func_153(uParam3, iVar0);
			func_382(uParam4, uParam3[iVar2 /*37*/], 0, &iVar3, &uVar4);
			if (iVar3 < 1)
			{
				if (!MISC::IS_BIT_SET((*uParam4)[iVar1 /*38*/], 6))
				{
					MISC::SET_BIT(uParam4[iVar1 /*38*/], 6);
				}
			}
			else if (MISC::IS_BIT_SET((*uParam4)[iVar1 /*38*/], 6))
			{
				MISC::CLEAR_BIT(uParam4[iVar1 /*38*/], 6);
			}
			if (!func_218(uParam4[iVar1 /*38*/], iVar0))
			{
				func_384(uParam4[iVar1 /*38*/], func_383("VOTE_SKIP_CONTEXT"), 0, -4.12917E+08f, 6);
				func_385(uParam4[iVar1 /*38*/], iVar0, !func_90(*iParam1, 8));
				MISC::SET_BIT(uParam4[iVar1 /*38*/], 7);
			}
			if (func_36(uParam2->f_5, 1) || func_90(*iParam1, 0))
			{
				if (!func_386(uParam4[iVar1 /*38*/]))
				{
					func_387(uParam4[iVar1 /*38*/]);
				}
				func_388(uParam4[iVar1 /*38*/]);
			}
			else if (func_389(uParam4[iVar1 /*38*/]) && func_90(uParam0->f_1, 0))
			{
				if (func_154(uParam3[iVar2 /*37*/]) && func_390(uParam4, uParam3[iVar2 /*37*/]) == 0)
				{
					func_27(iParam1, 0);
					func_388(uParam4[iVar1 /*38*/]);
				}
			}
		}
	}
	if (func_90(*iParam1, 0))
	{
		bVar5 = true;
		*bParam7 = 1;
	}
	else if (func_36(uParam2->f_5, 1) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), iParam1->f_9, true) >= 1120403456)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
		}
		else if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (func_90(*iParam1, 0))
			{
				uParam2->f_6 = 2;
				func_250(iParam6, 5);
			}
			return true;
		}
	}
	return false;
}

void func_282(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
		}
		NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(false);
		NETWORK::PREVENT_MIGRATION_OF_ENTITIES_IN_FAST_INSTANCE_FOR_LOCAL_PLAYER(true);
		NETWORK::_0x34BC1E79546BA543(true);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 7, false);
		NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(false, false, 7);
		NETWORK::_0xDC6AD5C046F33AB4(true, true);
	}
	else if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_7[iVar0 /*5*/]))
			{
			}
			else
			{
				iVar1 = PLAYER::GET_PLAYER_PED(uParam0->f_7[iVar0 /*5*/]);
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, true, true, 256);
			}
			iVar0++;
		}
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
		NETWORK::PREVENT_MIGRATION_OF_ENTITIES_IN_FAST_INSTANCE_FOR_LOCAL_PLAYER(false);
	}
}

bool func_283(var uParam0, int iParam1, int iParam2)
{
	return func_285(uParam0, iParam1, iParam2, 600);
}

int func_284(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	iVar0 = ANIMSCENE::_GET_ANIM_SCENE_PED(iParam0, sParam1, bParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return iVar0;
	}
	iVar0 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iParam0, sParam1, bParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return iVar0;
	}
	iVar0 = ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(iParam0, sParam1, bParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return iVar0;
	}
	return func_391();
}

bool func_285(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_149(uParam0->f_23, iParam3);
	if ((iParam1 - iParam2) <= iVar0)
	{
		return true;
	}
	return false;
}

bool func_286(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_136(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

void func_287(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_288(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iVar0 == iParam1)
	{
		iVar1 = 1;
	}
	func_392(1);
	func_393(iParam0, iParam1, bParam2, iParam3, iVar1, 0);
}

void func_289(var uParam0, int* iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_250(iParam3, 2);
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_INJURED(iVar0) && !func_90(*iParam1, 8))
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
		if (func_394(iVar0, -3.371886E-32f))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
		}
		iVar1 = iParam1->f_6;
		if (iVar1 >= 0 && iVar1 < 4)
		{
			iVar2 = func_266(iParam1, iVar1);
			if (iVar2 >= 0 && iVar2 < 4)
			{
				iVar3 = uParam0->f_7[iVar2 /*5*/].f_3;
				if (iVar3 < 0 || iVar3 > 2)
				{
					iVar3 = 0;
				}
				if (func_90(uParam2->f_25[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_13, 3))
				{
					func_395(uParam2->f_25[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_16);
				}
				else
				{
					if (!func_90(uParam2->f_25[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_13, 1))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(uParam2->f_25[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_14, 1f);
					}
					if (!func_90(uParam2->f_25[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_13, 2))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(uParam2->f_25[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_15, 1f);
					}
				}
				if (func_90(uParam2->f_25[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_13, 0))
				{
					func_396(uParam2->f_25[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_19, uParam2->f_25[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_20, 1, 1);
				}
			}
		}
	}
	func_397(iParam1);
	func_15(&(iParam1->f_1471), 0, 0);
	func_398(0, 0);
	func_379(1);
	if (!func_36(uParam2->f_19, 128))
	{
		AUDIO::SET_AUDIO_FLAG("EnableCutsceneMusic", false);
	}
	if (STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		STREAMING::LOAD_SCENE_STOP();
	}
	STREAMING::CLEAR_FOCUS();
	iParam1->f_9 = { 0f, 0f, 0f };
	Global_1048584 = 0;
	func_95(0);
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		if (func_36(uParam0->f_3, 2))
		{
			if (func_90(*iParam1, 8))
			{
				func_399(64);
				func_399(128);
			}
		}
		else if (func_36(uParam2->f_19, 2048))
		{
			func_250(iParam3, 6);
			if (func_90(*iParam1, 8))
			{
				func_399(64);
				func_399(128);
			}
		}
		else
		{
			CAM::DO_SCREEN_FADE_IN(500);
			if (func_90(*iParam1, 8))
			{
				func_399(64);
				func_399(128);
			}
		}
	}
	func_400();
}

void func_290(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_291(int* iParam0, var uParam1)
{
	if (func_90(*iParam0, 8))
	{
		return false;
	}
	if (func_36(uParam1->f_19, 2048))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return false;
		}
	}
	return true;
}

void func_292(int iParam0)
{
	Global_1102813.f_26.f_12 = iParam0;
}

bool func_293(int iParam0)
{
	return (Global_1102813.f_26.f_7 && iParam0) != 0;
}

bool func_294(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) != 0;
}

int func_295()
{
	if (Global_1102813 <= 5)
	{
		return Global_1102813;
	}
	if (Global_1102813 <= 22)
	{
		return 4;
	}
	if (Global_1102813 <= 25)
	{
		return 3;
	}
	return 26;
}

void func_296(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	func_93(&(uParam0->f_2));
	func_93(&(uParam0->f_4));
}

void func_297(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 24)
	{
		func_401(uParam0[iVar0 /*4*/]);
		iVar0++;
	}
	uParam0->f_97 = 0;
}

void func_298(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 24)
	{
		func_402(uParam0[iVar0 /*14*/]);
		iVar0++;
	}
}

void func_299(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_300(var uParam0)
{
	*uParam0 = "";
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_93(&(uParam0->f_3));
}

void func_301(var uParam0)
{
	int iVar0;

	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = { 0f, 0f, 0f };
	uParam0->f_9 = { 0f, 0f, 0f };
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 0f;
	uParam0->f_16 = 0f;
	uParam0->f_17 = 1.526336E-16f;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_403(&(uParam0->f_18[iVar0 /*2*/]));
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = 1048576000; /* Float: 0.25f */
	uParam0->f_33 = 1092616192; /* Float: 10f */
	uParam0->f_34 = -1f;
	uParam0->f_35 = -1f;
	uParam0->f_36 = 0f;
	uParam0->f_37 = 0f;
	uParam0->f_38 = 0;
}

bool func_302(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (*uParam1 == 255)
	{
		return false;
	}
	if (func_404(*uParam1))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(iParam2, iParam0))
	{
		return false;
	}
	if (bParam3)
	{
		if (!func_36(uParam1->f_1, 1))
		{
			return false;
		}
	}
	return true;
}

int func_303(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_304(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_305(int iParam0)
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
		func_405(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_406(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

bool func_306(var uParam0)
{
	if (func_36(uParam0->f_1651, 32))
	{
		return true;
	}
	return false;
}

bool func_307(var uParam0, int iParam1)
{
	if (func_157(uParam0->f_1622[iParam1 /*3*/]))
	{
		return false;
	}
	return true;
}

bool func_308(var uParam0, char* sParam1)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_225[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_225[iVar0 /*9*/]), sParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_309(var uParam0, char* sParam1)
{
	struct<8> Var0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	Var0 = { func_327(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(sParam1, &Var0);
}

bool func_310(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

float func_311(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_312(int* iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (func_239(uParam2))
	{
		return true;
	}
	if (uParam1->f_2 == 3 || uParam1->f_2 == 2)
	{
		return false;
	}
	if (uParam2->f_4 > 10)
	{
		return true;
	}
	if (func_90(*iParam0, 13))
	{
		return true;
	}
	iVar0 = func_141(uParam2->f_9.f_2);
	if (!func_242(PLAYER::PLAYER_PED_ID(), uParam3->f_1622[iVar0 /*3*/], 1133903872 /* Float: 300f */, 1, 1))
	{
		return true;
	}
	if (func_240() != 0 && func_227() != func_241())
	{
		return true;
	}
	return false;
}

bool func_313(int iParam0, float fParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	char cVar7[64];

	if (uParam3->f_7 != 3)
	{
		return true;
	}
	iVar0 = 1;
	if (!bParam5 && !VOLUME::DOES_VOLUME_EXIST(*uParam4))
	{
		vVar1 = { 2f, 2f, 2f };
		vVar4 = { *uParam3 };
		StringCopy(&cVar7, "[MC][CS] CoverLoadArea - ", 64);
		StringConCat(&cVar7, " iCSIdx: ", 64);
		StringIntConCat(&cVar7, iParam0, 64);
		*uParam4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar4, 0f, 0f, uParam3->f_3, vVar1, &cVar7);
		if (VOLUME::DOES_VOLUME_EXIST(*uParam4))
		{
			TASK::_0x2A10538D0A005E81(*uParam4, 1);
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_314(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_315(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_310(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_192), {func_407("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 16);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_192), {func_407("cutscene@", sParam1, 1, 63)}, 16);
	}
	func_231(uParam0, 8192);
}

Vector3 func_316(var uParam0)
{
	return uParam0->f_5;
}

bool func_317(var uParam0, Vector3* vParam1, Vector3* vParam2)
{
	var uVar0;
	int iVar8;
	struct<4> Var9;

	*vParam1 = { 0f, 0f, 0f };
	*vParam2 = { 0f, 0f, 0f };
	MemCopy(&uVar0, {func_408(uParam0)}, 8);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_208))
	{
		iVar8 = 0;
		if (func_310(uParam0, 2) && !func_310(uParam0, 1.504633E-36f))
		{
			iVar8 |= 256;
		}
		uParam0->f_208 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_192), iVar8, &(uParam0->f_209), false, true);
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_208, false))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_208, func_409(Global_33), &Var9, false, 0, 2))
		{
			*vParam1 = { Var9 };
			*vParam2 = { Var9.f_3 };
		}
		else
		{
			ANIMSCENE::GET_ANIM_SCENE_ORIGIN(uParam0->f_208, vParam1, vParam2, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_208);
		return true;
	}
	return false;
}

float func_318(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_319(var uParam0)
{
	return uParam0->f_187;
}

void func_320(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_208))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_208, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_225[iVar0 /*9*/])) && (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_208, &(uParam0->f_225[iVar0 /*9*/])) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_208, &(uParam0->f_225[iVar0 /*9*/]))))
		{
			ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(uParam0->f_208, &(uParam0->f_225[iVar0 /*9*/]));
		}
		uParam0->f_225[iVar0 /*9*/].f_8 = 0;
		iVar0++;
	}
}

void func_321(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_310(uParam0, 16))
		{
			POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_4);
			POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_4);
			func_410(uParam0);
			PATHFIND::RESET_ROADS_IN_VOLUME(uParam0->f_4, false);
		}
	}
	if (func_310(uParam0, 8))
	{
		VOLUME::DELETE_VOLUME(uParam0->f_4);
		func_76(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_76(uParam0, 16, 1);
}

float func_322(var uParam0)
{
	return uParam0->f_186;
}

bool func_323(var uParam0, int iParam1)
{
	return (uParam0->f_12 && iParam1) != 0;
}

void func_324(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_411() };
	func_237(uParam0, &Var0);
}

void func_325(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (func_310(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_4) && !func_412(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_222());
		func_231(uParam0, 8);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_413(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::SET_ROADS_IN_VOLUME(uParam0->f_4, false, false, bParam2);
		func_231(uParam0, 16);
	}
}

void func_326(var uParam0)
{
	if ((!func_310(uParam0, 32768) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_208)) && ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_208, false))
	{
		func_273(uParam0);
		func_274(uParam0, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_208, true))
		{
			if (func_361(uParam0->f_263, 4194304))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_208, uParam0->f_5, uParam0->f_8, 2);
			}
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_208);
		}
		func_231(uParam0, 32768);
	}
}

struct<8> func_327(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_414(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_415() };
	}
	return Var0;
}

void func_328(int iParam0, float fParam1, var uParam2)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam2->f_18))
	{
		VOLUME::DELETE_VOLUME(uParam2->f_18);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_2))
	{
		AICOVERPOINT::_STOP_RUNNING_COVER_ANIMS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam2->f_2));
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam2->f_19))
	{
		VOLUME::DELETE_VOLUME(uParam2->f_19);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_1))
	{
		AICOVERPOINT::_STOP_RUNNING_COVER_ANIMS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam2->f_1));
	}
}

void func_329(int* iParam0, var uParam1, var uParam2)
{
	if (func_36(uParam1->f_5, 4))
	{
		return;
	}
	if (!func_36(uParam1->f_5, 2))
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (!func_332(uParam1))
	{
		return;
	}
	if (uParam2->f_3 < 0)
	{
		return;
	}
	if (!func_14(&(iParam0->f_1467)))
	{
		func_136(&(iParam0->f_1467), 1, 0);
	}
	if (uParam2->f_3 == 0 || func_37(&(iParam0->f_1467), 1, 0) >= uParam2->f_3)
	{
		func_86(&(uParam1->f_5), 4);
	}
}

void func_330(int* iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;

	if (!func_332(uParam1))
	{
		return;
	}
	if (!func_36(uParam2->f_19, 2))
	{
		return;
	}
	bVar0 = true;
	iVar1 = PLAYER::PLAYER_PED_ID();
	bVar2 = !func_36(uParam2->f_19, 64);
	iVar3 = func_141(uParam1->f_1.f_2);
	if (!func_36(uParam2->f_19, 4))
	{
		func_416(iVar1, uParam2->f_1622[iVar3 /*3*/], 0, uParam2->f_5, uParam2->f_6, uParam2->f_7, uParam2->f_8, 1, 0, bVar2, 0);
	}
	if (!func_36(uParam2->f_19, 16))
	{
		fVar4 = (BUILTIN::TO_FLOAT(uParam2->f_9) / 1148846080);
		if (func_417(iVar1, uParam2->f_1622[iVar3 /*3*/], &(iParam0->f_1475), uParam2->f_8, fVar4, 0, 0, 0, bVar2))
		{
		}
	}
	if (!func_36(uParam2->f_19, 32))
	{
		if (!func_90(*iParam0, 5))
		{
			WEAPON::_HIDE_PED_WEAPONS(iVar1, 2, false);
			TASK::TASK_SWAP_WEAPON(iVar1, 1, 1, 0, 0);
			func_27(iParam0, 5);
		}
	}
	if (!func_36(uParam2->f_19, 8))
	{
		CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
		if (CAM::GET_LETTER_BOX_RATIO() < 1f)
		{
			bVar0 = false;
		}
	}
	if (bVar0 && !func_90(*iParam0, 6))
	{
		func_27(iParam0, 6);
	}
}

void func_331(int iParam0)
{
	if (Global_1940072.f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940072.f_105.f_2 = iParam0;
}

bool func_332(var uParam0)
{
	if (!func_124(uParam0))
	{
		return false;
	}
	if (uParam0->f_4 <= 1 || uParam0->f_4 >= 10)
	{
		return false;
	}
	return true;
}

bool func_333(var uParam0, var uParam1, int* iParam2, var uParam3, int iParam4, int iParam5, int iParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	char[] cVar0[8];
	var uVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	int iVar10;

	uParam7->f_1.f_3 = func_418(uParam0, uParam7->f_1.f_1, iParam6, iParam5, iParam4);
	func_419(uParam0, &(uParam7->f_1), uParam9);
	uVar5 = -1;
	while (iVar8 < 15)
	{
		iVar9 = uParam7->f_1.f_10;
		switch (uParam7->f_1.f_10)
		{
			case 0:
				iVar10 = func_420(uParam0, iParam2, iParam4, iParam5, iParam6, &(uParam7->f_1), &uVar4, iParam10);
				if (iVar10 == 1)
				{
					iVar9 = 1;
				}
				else if (iVar10 == 2)
				{
					iVar9 = 14;
				}
				break;
			case 1:
				iVar10 = func_421(iParam2, uParam7, &(uParam8->f_1652[iParam4 /*4*/]));
				if (iVar10 != 0)
				{
					if (iVar10 == 1)
					{
						func_27(&(uParam7->f_1.f_4), 0);
					}
					iVar9 = 2;
				}
				break;
			case 2:
				func_272(iParam2, uParam8, iParam4, iParam6, &cVar0, 0, 0);
				if (func_422(*uParam1))
				{
					if (func_423(uParam3, iParam2, &(uParam7->f_1), iParam4, iParam6, uParam8, &(uParam9->f_11[uParam1->f_3 /*34*/]), &cVar0, 1) != 0)
					{
						iVar9 = 4;
					}
				}
				break;
			case 4:
				if (uParam3->f_4 >= 7)
				{
					if (!func_424(&(uParam7->f_1)) || func_425(&(uParam7->f_1)))
					{
						iVar9 = 5;
					}
				}
				break;
			case 5:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam7->f_1.f_2) || func_426(&(uParam7->f_1), iParam4, iParam6, 1, &uVar5))
				{
					iVar9 = 6;
				}
				break;
			case 6:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam7->f_1.f_2) || func_427(iParam2, iParam4, iParam6, &(uParam7->f_1), &(uParam9->f_11[uParam1->f_3 /*34*/]), 1))
				{
					iVar9 = 7;
				}
				break;
			case 7:
				if (uParam3->f_4 > 9)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam7->f_1.f_2))
					{
						func_428(uParam7->f_1.f_2, 0);
					}
					iVar9 = 8;
				}
				else
				{
					return true;
				}
				break;
			case 8:
				if ((func_90(uParam0->f_1, 0) || func_36(uParam3->f_5, 1)) && func_426(&(uParam7->f_1), iParam4, iParam6, 0, &uVar5))
				{
					iVar9 = 9;
				}
				break;
			case 9:
				if (func_427(iParam2, iParam4, iParam6, &(uParam7->f_1), &(uParam9->f_11[uParam1->f_3 /*34*/]), 0))
				{
					func_198(&(uParam7->f_1.f_5));
					func_197(&(uParam7->f_1.f_13));
					iVar9 = 10;
				}
				break;
			case 10:
				func_272(iParam2, uParam8, iParam4, iParam6, &cVar0, 0, 0);
				if (func_423(uParam3, iParam2, &(uParam7->f_1), iParam4, iParam6, uParam8, &(uParam9->f_11[uParam1->f_3 /*34*/].f_13), &cVar0, 0) != 0)
				{
					iVar9 = 12;
				}
				break;
			case 12:
				if (func_426(&(uParam7->f_1), iParam4, iParam6, 0, &uVar5))
				{
					iVar9 = 13;
				}
				break;
			case 13:
				if (func_427(iParam2, iParam4, iParam6, &(uParam7->f_1), &(uParam9->f_11[uParam1->f_3 /*34*/].f_13), 0))
				{
					iVar9 = 14;
				}
				break;
			case 14:
				return true;
		}
		if (iVar9 != uParam7->f_1.f_10)
		{
			uParam7->f_1.f_10 = iVar9;
			iVar8++;
		}
	else
	{
		}
	else
	{
		}
	}
	return false;
}

void func_334(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_10 > 0 && uParam0->f_10 <= 2)
	{
		*iParam1++;
		*iParam2++;
	}
	else if (uParam0->f_10 > 2 && uParam0->f_10 <= 10)
	{
		*iParam2++;
	}
}

bool func_335(var uParam0, int* iParam1, var uParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10)
{
	int iVar0;
	char[] cVar1[8];
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = 0;
	uParam6->f_3 = func_418(uParam0, uParam6->f_1, iParam5, iParam4, iParam3);
	while (iVar5 < 15)
	{
		iVar6 = uParam6->f_10;
		switch (uParam6->f_10)
		{
			case 0:
				iVar7 = func_420(uParam0, iParam1, iParam3, iParam4, iParam5, uParam6, &iVar0, iParam10);
				if (iVar7 == 1)
				{
					iVar6 = 1;
				}
				else if (iVar7 == 2)
				{
					iVar6 = 14;
				}
				break;
			case 1:
				iVar7 = func_429(iParam1, uParam6, uParam8, sParam9);
				if (iVar7 != 0)
				{
					if (iVar7 == 1)
					{
						func_27(&(uParam6->f_4), 0);
					}
					iVar6 = 2;
				}
				break;
			case 2:
				func_272(iParam1, uParam7, iParam3, iParam5, &cVar1, 0, 0);
				if (func_423(uParam2, iParam1, uParam6, iParam3, iParam5, uParam7, &(uParam8->f_3), &cVar1, 1) != 0)
				{
					iVar6 = 4;
				}
				break;
			case 4:
				if (uParam2->f_4 >= 7)
				{
					if (!func_424(uParam6) || func_425(uParam6))
					{
						iVar6 = 5;
					}
				}
				break;
			case 5:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam6->f_2) || func_426(uParam6, iParam3, iParam5, 1, uParam8))
				{
					iVar6 = 6;
				}
				break;
			case 6:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam6->f_2) || func_427(iParam1, iParam3, iParam5, uParam6, &(uParam8->f_3), 1))
				{
					iVar6 = 7;
				}
				break;
			case 7:
				if (uParam2->f_4 > 9)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam6->f_2))
					{
						func_428(uParam6->f_2, 0);
					}
					else if (func_90(uParam6->f_4, 1))
					{
						NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uParam6->f_1, true, true, 7);
					}
					iVar6 = 8;
				}
				else
				{
					return true;
				}
				break;
			case 8:
				if ((func_90(uParam0->f_1, 0) || func_36(uParam2->f_5, 1)) && func_426(uParam6, iParam3, iParam5, 0, uParam8))
				{
					iVar6 = 9;
				}
				break;
			case 9:
				if (func_427(iParam1, iParam3, iParam5, uParam6, &(uParam8->f_3), 0))
				{
					func_198(&(uParam6->f_5));
					func_197(&(uParam6->f_13));
					iVar6 = 10;
				}
				break;
			case 10:
				func_272(iParam1, uParam7, iParam3, iParam5, &cVar1, 0, 0);
				if (func_423(uParam2, iParam1, uParam6, iParam3, iParam5, uParam7, &(uParam8->f_16), &cVar1, 0) != 0)
				{
					iVar6 = 12;
				}
				break;
			case 12:
				if (func_426(uParam6, iParam3, iParam5, 0, uParam8))
				{
					iVar6 = 13;
				}
				break;
			case 13:
				if (func_427(iParam1, iParam3, iParam5, uParam6, &(uParam8->f_16), 0))
				{
					iVar6 = 14;
				}
				break;
			case 14:
				return true;
		}
		if (iVar6 != uParam6->f_10)
		{
			uParam6->f_10 = iVar6;
			iVar5++;
		}
	else
	{
		}
	else
	{
		}
	}
	return false;
}

bool func_336(int* iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, var uParam6, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11, char* sParam12, int iParam13)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;

	func_430(uParam6);
	uParam6->f_3 = func_418(uParam1, uParam6->f_1, iParam5, iParam4, iParam3);
	while (iVar4 < 15)
	{
		iVar5 = uParam6->f_10;
		switch (uParam6->f_10)
		{
			case 0:
				iVar6 = func_420(uParam1, iParam0, iParam3, iParam4, iParam5, uParam6, iParam7, iParam13);
				if (iVar6 == 1)
				{
					iVar5 = 1;
				}
				else if (iVar6 == 2)
				{
					iVar5 = 14;
				}
				break;
			case 1:
				iVar6 = func_429(iParam0, uParam6, uParam9, sParam12);
				if (iVar6 != 0)
				{
					if (iVar6 == 1)
					{
						func_27(&(uParam6->f_4), 0);
					}
					iVar5 = 2;
				}
				break;
			case 2:
				func_272(iParam0, uParam8, iParam3, iParam5, &uVar0, 0, 0);
				func_431(uParam2, iParam0, uParam6, iParam3, iParam5, uParam8, uParam10, &uVar0, 1, 0, 1);
				iVar5 = 4;
				break;
			case 4:
				if (uParam2->f_4 >= 7)
				{
					if (!func_424(uParam6) || func_432(uParam6, *iParam7, iParam13))
					{
						iVar5 = 5;
					}
				}
				break;
			case 5:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam6->f_2) || func_433(uParam6, iParam3, iParam5, 1, uParam9))
				{
					iVar5 = 6;
				}
				break;
			case 6:
				if (func_434(uParam10, uParam6, iParam3, iParam5, 1))
				{
					iVar5 = 7;
				}
				break;
			case 7:
				if (uParam2->f_4 > 9)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam6->f_2))
					{
						func_428(uParam6->f_2, 0);
					}
					else if (func_90(uParam9->f_1, 1))
					{
						NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uParam6->f_1, true, true, 7);
					}
					iVar5 = 8;
				}
				else
				{
					return true;
				}
				break;
			case 8:
				if ((func_90(uParam1->f_1, 0) || func_36(uParam2->f_5, 1)) && func_433(uParam6, iParam3, iParam5, 0, uParam9))
				{
					func_198(&(uParam6->f_5));
					iVar5 = 10;
				}
				break;
			case 10:
				func_272(iParam0, uParam8, iParam3, iParam5, &uVar0, 0, 0);
				func_431(uParam2, iParam0, uParam6, iParam3, iParam5, uParam8, uParam11, &uVar0, 0, 0, 1);
				iVar5 = 12;
				break;
			case 12:
				if (func_433(uParam6, iParam3, iParam5, 0, uParam9))
				{
					iVar5 = 13;
				}
				break;
			case 13:
				if (func_434(uParam11, uParam6, iParam3, iParam5, 0))
				{
					iVar5 = 14;
				}
				break;
			case 14:
				return true;
		}
		if (iVar5 != uParam6->f_10)
		{
			uParam6->f_10 = iVar5;
			iVar4++;
		}
	else
	{
		}
	else
	{
		}
	}
	return false;
}

void func_337(var uParam0, var uParam1, struct<2> Param2, var uParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
	{
		return;
	}
	func_435(uParam0, uParam1, 6, 10, MISC::GET_HASH_KEY("Breaking_Front_Left_Wheel"), 0);
	func_435(uParam0, uParam1, 7, 11, MISC::GET_HASH_KEY("Breaking_Front_Right_Wheel"), 1);
	func_435(uParam0, uParam1, 8, 12, MISC::GET_HASH_KEY("Breaking_Rear_Left_Wheel"), 2);
	func_435(uParam0, uParam1, 9, 13, MISC::GET_HASH_KEY("Breaking_Rear_Right_Wheel"), 3);
	if (func_90(Param2.f_1, 3))
	{
		VEHICLE::_HIDE_HORSE_REINS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_2));
	}
	else if (func_90(Param2.f_1, 4))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_2, -1175231f))
		{
			VEHICLE::_HIDE_HORSE_REINS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_2));
		}
		else
		{
			VEHICLE::_SHOW_HORSE_REINS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_2));
		}
	}
}

bool func_338(int* iParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9)
{
	char[] cVar0[8];
	struct<6> Var4;
	int iVar10;
	var uVar11;
	int iVar14;
	int iVar15;
	int iVar16;

	Var4.f_5 = -1f;
	uVar11 = -1;
	uParam5->f_3 = func_418(uParam1, uParam5->f_1, iParam4, -1, iParam3);
	while (iVar14 < 15)
	{
		iVar15 = uParam5->f_10;
		switch (uParam5->f_10)
		{
			case 0:
				if (ENTITY::DOES_ENTITY_EXIST(uParam5->f_1))
				{
					iVar15 = 1;
				}
				else
				{
					return true;
				}
				break;
			case 1:
				iVar16 = func_436(iParam0, uParam5, iParam3, uParam6);
				if (iVar16 != 0)
				{
					if (iVar16 == 1)
					{
						func_27(&(uParam5->f_4), 0);
					}
					iVar15 = 2;
				}
				break;
			case 2:
				func_272(iParam0, uParam6, iParam3, 0, &cVar0, 0, 0);
				if (func_431(uParam2, iParam0, uParam5, iParam3, iParam4, uParam6, &Var4, &cVar0, 1, 1, 1))
				{
					iVar15 = 3;
				}
				break;
			case 3:
				if (iParam7 == 0 || func_90(uParam5->f_5, 0))
				{
					iVar15 = 4;
				}
				break;
			case 4:
				if (uParam2->f_4 >= 7)
				{
					if (!func_424(uParam5) || func_432(uParam5, iVar10, iParam9))
					{
						iVar15 = 5;
					}
				}
				break;
			case 5:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam5->f_2) || func_433(uParam5, iParam3, iParam4, 1, &uVar11))
				{
					iVar15 = 7;
				}
				break;
			case 7:
				if (uParam2->f_4 > 9)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam5->f_2))
					{
						func_428(uParam5->f_2, 0);
					}
					iVar15 = 8;
				}
				else
				{
					return true;
				}
				break;
			case 8:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam5->f_1) || ((func_90(uParam1->f_1, 0) || func_36(uParam2->f_5, 1)) && func_433(uParam5, iParam3, iParam4, 0, &uVar11)))
				{
					func_198(&(uParam5->f_5));
					iVar15 = 10;
				}
				break;
			case 10:
				func_272(iParam0, uParam6, iParam3, 0, &cVar0, 0, 0);
				if (func_431(uParam2, iParam0, uParam5, iParam3, 0, uParam6, &Var4, &cVar0, 0, 1, 1))
				{
					iVar15 = 11;
				}
				break;
			case 11:
				if (iParam8 == 0 || func_90(uParam5->f_5, 0))
				{
					iVar15 = 12;
				}
				break;
			case 12:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam5->f_1) || func_433(uParam5, iParam3, iParam4, 0, &uVar11))
				{
					iVar15 = 14;
				}
				break;
			case 14:
				return true;
		}
		if (iVar15 != uParam5->f_10)
		{
			uParam5->f_10 = iVar15;
			iVar14++;
		}
	else
	{
		}
	else
	{
		}
	}
	return false;
}

bool func_339(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102813.f_3 && iParam0) != 0;
	}
	return (Global_1101558[iParam1 /*38*/].f_3 && iParam0) != 0;
}

int func_340()
{
	return Global_1915643.f_20241;
}

void func_341(int iParam0, bool bParam1)
{
	if (!func_437(iParam0))
	{
		return;
	}
	if ((bParam1 && func_438(iParam0, 512)) || (!bParam1 && !func_438(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_439(iParam0, 512);
	}
	else
	{
		func_440(iParam0, 512);
	}
	if (func_441(iParam0))
	{
		INVENTORY::_0x9B4E793B1CB6550A();
	}
}

bool func_342()
{
	return func_442(4096);
}

bool func_343(int iParam0, int iParam1)
{
	return MISC::ABSI((MISC::GET_SYSTEM_TIME() - iParam0)) >= iParam1;
}

bool func_344(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) == iParam0;
}

bool func_345(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(iParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_443(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return false;
	}
	iVar0 = func_444(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_17[iVar0 /*12*/].f_1), sParam2))
		{
		}
		else if (uParam0->f_17[iVar0 /*12*/].f_9 != iParam3)
		{
		}
		else if (uParam0->f_17[iVar0 /*12*/].f_10 != iParam4)
		{
		}
		else
		{
			return true;
		}
	}
	else
	{
		iVar1 = func_445(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			func_446(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_447(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_17[iVar0 /*12*/] = iParam1;
		StringCopy(&(uParam0->f_17[iVar0 /*12*/].f_1), sParam2, 64);
		uParam0->f_17[iVar0 /*12*/].f_9 = iParam3;
		uParam0->f_17[iVar0 /*12*/].f_10 = iParam4;
		if (bParam5)
		{
			func_348(&(uParam0->f_17[iVar0 /*12*/]), 2);
		}
		else
		{
			func_448(&(uParam0->f_17[iVar0 /*12*/]), 2);
		}
		return true;
	}
	return false;
}

bool func_346(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

bool func_347(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_348(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_349(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_OWNERSHIP_OF_ENTITY_EXIST(uParam0->f_208, sParam1))
		{
			iParam3 = 0;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_208, sParam1, iParam2, iParam3);
}

void func_350(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_BLOOD_DAMAGE(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::_CLEAR_PED_BLOOD_DAMAGE_FACIAL(iParam0, iVar0);
		iVar0++;
	}
}

int func_351(var uParam0)
{
	return *uParam0;
}

void func_352(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (((!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_208) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_208, false)) || ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam0->f_208)) || func_310(uParam0, 512))
	{
		if (!func_449(uParam0->f_264, 128))
		{
			func_450();
		}
		return;
	}
	if ((func_368(uParam0, Global_33, 4) || (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_208, func_409(Global_33)) && ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_208, func_409(Global_33)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_208))
	{
		if (!func_449(uParam0->f_264, 128))
		{
			func_450();
		}
		return;
	}
	bVar0 = true;
	iVar1 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(9);
	if (iVar1 != 0)
	{
		if (func_451(iVar1))
		{
			if (func_452(Global_26574, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (func_449(uParam0->f_264, 512))
	{
		bVar2 = true;
	}
	if (!func_310(uParam0, 2) && func_453(bVar0, bVar2))
	{
		ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam0->f_208);
		func_450();
	}
}

void func_353(var uParam0, char* sParam1)
{
	struct<8> Var0;
	char cVar8[128];

	if (func_351(uParam0) == 2 && (func_361(uParam0->f_263, 16384) || func_310(uParam0, 2.524355E-29f)))
	{
		Var0 = { func_327(uParam0) };
		func_268(uParam0, &Var0);
	}
	func_454(uParam0, sParam1);
	if (func_310(uParam0, 131072))
	{
		func_455(uParam0, 0);
	}
	if (func_456())
	{
		func_457(1);
	}
	func_325(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 128);
	func_458(uParam0, cVar8);
	func_363(1, 0);
	func_320(uParam0);
	if (func_355(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_188);
	}
	func_459(uParam0);
	func_274(uParam0, 1);
	if (func_361(uParam0->f_263, 4194304))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_208, uParam0->f_5, uParam0->f_8, 2);
	}
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_208);
	Global_26573 = uParam0->f_208;
	StringCopy(&Global_26575, sParam1, 128);
}

void func_354(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_357(&(uParam0->f_1));
}

bool func_355(var uParam0, int iParam1)
{
	return (uParam0->f_191 && iParam1) != 0;
}

void func_356(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_327(uParam0) };
	func_237(uParam0, &Var0);
}

void func_357(float fParam0)
{
	func_460(fParam0, 0f);
}

bool func_358(float fParam0)
{
	return func_461(*fParam0, 1);
}

void func_359(float fParam0, bool bParam1)
{
	if (bParam1 || !func_358(fParam0))
	{
		func_357(fParam0);
	}
}

float func_360(float fParam0)
{
	if (!func_358(fParam0))
	{
		return fParam0->f_1;
	}
	if (func_462(fParam0))
	{
		return fParam0->f_2;
	}
	return (func_463() - fParam0->f_1);
}

bool func_361(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_362(bool bParam0)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), bParam0, false, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
}

void func_363(bool bParam0, bool bParam1)
{
	if (func_464())
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
	}
	if (bParam0)
	{
		if (func_465())
		{
			func_466(1);
		}
	}
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(false, bParam1, false);
}

void func_364(var uParam0)
{
	vector3 vVar0;

	if (!func_310(uParam0, 4))
	{
		if (func_361(uParam0->f_263, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { func_467(uParam0) };
		if (!func_361(uParam0->f_263, 524288))
		{
			func_468(&(uParam0->f_275));
		}
		func_469(&(uParam0->f_263), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_470(uParam0, 0f, 0f, 0f);
		func_471(uParam0);
		func_472(uParam0);
		func_473(uParam0, 0f, 0f, 0f, 0, 0);
		func_474(uParam0);
		func_231(uParam0, 4);
		func_475(uParam0, 0);
		func_476(Global_33, 65601, 1, 1);
		if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_276)))
		{
			CAM::_CAM_DESTROY(&(uParam0->f_276));
		}
	}
}

bool func_365(var uParam0, bool bParam1)
{
	if (func_310(uParam0, 262144))
	{
		return false;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_208))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_208, "ExportCamera"))
	{
		return false;
	}
	if ((ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_208, "ExportCamera") || (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam0->f_208, "ExportCamera") && bParam1)) || ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_208))
	{
		func_231(uParam0, 262144);
		func_475(uParam0, 1);
		return true;
	}
	return false;
}

int func_366(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_208) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_208, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_208) * 1148846080));
}

int func_367(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_208) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_208, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_208) * 1148846080));
}

bool func_368(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0 /*12*/]) && uParam0->f_17[iVar0 /*12*/] == iParam1) && func_347(&(uParam0->f_17[iVar0 /*12*/]), iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_369(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_208))
	{
		return true;
	}
	if (ANIMSCENE::HAS_ANIM_SCENE_EXITED(uParam0->f_208, false))
	{
		if (func_310(uParam0, 524288))
		{
			ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
		}
		return true;
	}
	if (func_310(uParam0, 1048576) && ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_208))
	{
		return true;
	}
	if ((func_449(uParam0->f_264, 1024) && ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_208, "ExportCamera")) && ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_208, "ExportCamera"))
	{
		return true;
	}
	return false;
}

void func_370(var uParam0)
{
	if (((func_310(uParam0, 2f) && !func_310(uParam0, 524288)) && func_310(uParam0, 512)) && CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(uParam0->f_292);
	}
}

void func_371(var uParam0)
{
	if (!func_310(uParam0, 1.084202E-19f))
	{
		func_475(uParam0, 1);
		func_372(&(uParam0->f_264), uParam0->f_275);
		func_231(uParam0, 1.084202E-19f);
	}
	if (func_310(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_477(uParam0);
	func_354(uParam0, 1);
	func_321(uParam0);
	func_269(uParam0);
	func_478(uParam0);
	func_479(uParam0, 4);
	func_324(uParam0);
	func_455(uParam0, 1);
	func_320(uParam0);
	func_480(&(uParam0->f_1));
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_208) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_208))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_208);
	}
	func_481(!func_449(uParam0->f_264, 128));
	if (!func_449(uParam0->f_264, 128))
	{
		func_450();
	}
}

void func_372(var uParam0, bool bParam1)
{
	if (Global_1940186.f_6)
	{
		return;
	}
	func_482(2000);
	Global_13 = 0;
	if (!func_449(*uParam0, 2048))
	{
		func_483();
	}
	ENTITY::SET_ENTITY_INVINCIBLE(Global_33, func_449(*uParam0, 8));
	if (!func_449(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_449(*uParam0, 2) || func_449(*uParam0, 4))
	{
		HUD::_ENABLE_HUD_CONTEXT(-3.83483E-22f);
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(-3.83483E-22f);
	}
	if (!func_449(*uParam0, 16))
	{
		func_484(1);
	}
	if ((bParam1 != 0 && func_485(bParam1) != -9.847085E+19f) && !func_449(*uParam0, 32))
	{
		func_486(Global_33, -0.006214506f, 0, 0, 0);
	}
	else if (func_487(-2.320688E-12f) != -1)
	{
		func_486(Global_33, -2.320688E-12f, 0, 0, 0);
	}
	func_488(Global_33, 98369, 1, 1, 0);
	*uParam0 = 0;
}

void func_373()
{
	Global_1940186.f_46 = 1;
}

bool func_374(int iParam0)
{
	return func_489(&(Global_524288.f_6), iParam0);
}

void func_375(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		Global_1940239 = 1;
		Global_1940239.f_1 = iParam1;
	}
	else
	{
		Global_1940239 = 2;
	}
}

void func_376()
{
	Global_1913428 = 1;
}

void func_377(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_14, iParam0))
	{
	}
	else
	{
		MISC::SET_BIT(&iLocal_14, iParam0);
		HUD::_ENABLE_HUD_CONTEXT(func_490(iParam0));
	}
}

void func_378(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 1;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_379(bool bParam0)
{
	func_491(46, !bParam0);
}

void func_380()
{
	func_492(0);
}

void func_381(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1072759.f_7 = 1;
	if ((Global_1295619.f_16 - Global_1072759.f_9) > 2)
	{
		if (bParam2)
		{
			func_493(1101004800 /* Float: 20f */);
		}
	}
	Global_1072759.f_9 = Global_1295619.f_16;
	if (bParam0)
	{
		CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else
		{
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				PED::SET_PED_RESET_FLAG(iVar1, 96, true);
			}
		}
		iVar2++;
	}
	if (func_494())
	{
		NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	}
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 25, true);
	CAM::_0x3C8F74E8FE751614();
	CAM::INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE();
	func_495(250);
	if (bParam1)
	{
		HUD::_0x5651516D947ABC53();
	}
}

void func_382(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	*iParam3 = 0;
	*uParam4 = 0;
	iVar0 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	iVar2 = 0;
	while (iVar2 <= (*uParam0 - 1))
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
		}
		else if (MISC::IS_BIT_SET((*uParam0)[iVar2 /*38*/], 0) && !MISC::IS_BIT_SET((*uParam0)[iVar2 /*38*/], 8))
		{
			*uParam4++;
			if (SCRIPTS::_0x0A79C81C418F5D38(&(uParam1->f_30[iParam2]), iVar2))
			{
				if (iVar0 == NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1))
				{
					uParam1->f_7 = iParam2;
				}
				*iParam3++;
			}
		}
		iVar2++;
	}
	if (uParam1->f_15[iParam2] > 0)
	{
		*uParam4 = uParam1->f_15[iParam2];
	}
}

Vector3 func_383(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

void func_384(int* iParam0, vector3 vParam1, int iParam4, float fParam5, int iParam6)
{
	iParam0->f_9[iParam4 /*3*/] = { vParam1 };
	iParam0->f_27[iParam4] = fParam5;
	iParam0->f_32[iParam4] = iParam6;
	MISC::SET_BIT(iParam0, 5);
}

void func_385(int* iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 0);
	}
	iParam0->f_2 = iParam1;
}

bool func_386(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 8);
}

void func_387(int* iParam0)
{
	MISC::SET_BIT(iParam0, 8);
}

void func_388(int* iParam0)
{
	int iVar0;

	if (!MISC::IS_BIT_SET(*iParam0, 3) || MISC::IS_BIT_SET(*iParam0, 4))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_496(uLocal_15[iVar0]))
		{
			func_497(uLocal_15[iVar0], 0, 1, 1);
			func_498(uLocal_15[iVar0], 0, 1);
			func_499(&(uLocal_15[iVar0]), 1, 1);
		}
		iVar0++;
	}
	MISC::SET_BIT(iParam0, 4);
	MISC::CLEAR_BIT(iParam0, 5);
}

bool func_389(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

int func_390(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (MISC::IS_BIT_SET(uParam1->f_2, 8))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (SCRIPTS::_0x0A79C81C418F5D38(&(uParam1->f_30[iVar1]), iVar0))
			{
				return iVar1;
			}
			iVar1++;
		}
		return uParam1->f_6;
	}
	if ((uParam0[iVar0 /*38*/])->f_1 != -1)
	{
		if (uParam1->f_20[(uParam0[iVar0 /*38*/])->f_1])
		{
			return (uParam0[iVar0 /*38*/])->f_1;
		}
	}
	return uParam1->f_5;
}

int func_391()
{
	return -1;
}

void func_392(bool bParam0)
{
	if (bParam0)
	{
		func_256(32);
	}
	else
	{
		func_399(32);
	}
}

void func_393(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iParam4 = 1;
	}
	func_292(iParam0);
	func_399(1024);
	if (bParam5)
	{
		func_256(16);
	}
	func_500(iParam1);
	func_501(iParam4);
	if (bParam2)
	{
		Global_1102813.f_26.f_4 = 1;
		Global_1102813.f_26.f_5 = iParam3;
	}
}

bool func_394(int iParam0, int iParam1)
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

void func_395(vector3 vParam0)
{
	if (!Global_1940186.f_6)
	{
		func_502(vParam0);
		func_503(vParam0);
	}
}

void func_396(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar1 = PLAYER::PLAYER_ID();
	iVar2 = PLAYER::PLAYER_PED_ID();
	if (PED::IS_PED_ON_MOUNT(iVar2))
	{
		iVar3 = PED::GET_MOUNT(iVar2);
		if (!PED::IS_PED_INJURED(iVar3))
		{
			iVar0 = iVar3;
		}
		else
		{
			iVar0 = iVar2;
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(iVar2, false))
	{
		iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar2, false);
		if (ENTITY::_IS_ENTITY_FROZEN(iVar4))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar4, false);
		}
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar4, (fParam0 * 3f));
		return;
	}
	else
	{
		iVar0 = iVar2;
	}
	if (ENTITY::_IS_ENTITY_FROZEN(iVar0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
	}
	PED::FORCE_PED_MOTION_STATE(iVar0, func_504(fParam0), false, iParam2, bParam3);
	PLAYER::SIMULATE_PLAYER_INPUT_GAIT(iVar1, fParam0, iParam1, ENTITY::GET_ENTITY_HEADING(iVar0), false, false);
}

void func_397(int* iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_14[iVar0 /*21*/].f_1.f_2))
		{
			ENTITY::DELETE_ENTITY(&(iParam0->f_14[iVar0 /*21*/].f_1.f_2));
		}
		iParam0->f_14[iVar0 /*21*/].f_1.f_2 = 0;
		iParam0->f_4436[iVar0] = 0;
		iParam0->f_4441[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_99[iVar0 /*20*/].f_2))
		{
			ENTITY::DELETE_ENTITY(&(iParam0->f_99[iVar0 /*20*/].f_2));
		}
		iParam0->f_99[iVar0 /*20*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_500[iVar0 /*13*/].f_2))
		{
			ENTITY::DELETE_ENTITY(&(iParam0->f_500[iVar0 /*13*/].f_2));
		}
		iParam0->f_500[iVar0 /*13*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_761[iVar0 /*13*/].f_2))
		{
			ENTITY::DELETE_ENTITY(&(iParam0->f_761[iVar0 /*13*/].f_2));
		}
		iParam0->f_761[iVar0 /*13*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_892[iVar0 /*13*/].f_2))
		{
			ENTITY::DELETE_ENTITY(&(iParam0->f_892[iVar0 /*13*/].f_2));
		}
		iParam0->f_892[iVar0 /*13*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1023[iVar0 /*13*/].f_2))
		{
			ENTITY::DELETE_ENTITY(&(iParam0->f_1023[iVar0 /*13*/].f_2));
		}
		iParam0->f_1023[iVar0 /*13*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1089[iVar0 /*14*/].f_2))
		{
			iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0->f_1089[iVar0 /*14*/].f_2);
			VEHICLE::DELETE_MISSION_TRAIN(&iVar1);
		}
		iParam0->f_1089[iVar0 /*14*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1104[iVar0 /*15*/].f_2))
		{
			ENTITY::DELETE_ENTITY(&(iParam0->f_1104[iVar0 /*15*/].f_2));
		}
		iParam0->f_1104[iVar0 /*15*/].f_2 = 0;
		iVar0++;
	}
}

void func_398(int iParam0, bool bParam1)
{
	if (MISC::IS_BIT_SET(iLocal_14, iParam0) || bParam1)
	{
		MISC::CLEAR_BIT(&iLocal_14, iParam0);
		HUD::_DISABLE_HUD_CONTEXT(func_490(iParam0));
	}
}

void func_399(int iParam0)
{
	if (!func_505(iParam0))
	{
		return;
	}
	Global_1102813.f_26.f_9 = (Global_1102813.f_26.f_9 - (Global_1102813.f_26.f_9 && iParam0));
}

void func_400()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1953279.f_3036)
	{
		if (!Global_1953279.f_3036.f_1[iVar0 /*2*/])
		{
		}
		else if (PED::_IS_META_PED_ASSET_VALID(Global_1953279.f_3036.f_1[iVar0 /*2*/].f_1))
		{
			PED::_RELEASE_META_PED_ASSET_REQUEST(Global_1953279.f_3036.f_1[iVar0 /*2*/].f_1);
		}
		iVar0++;
	}
}

void func_401(var uParam0)
{
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 24);
}

void func_402(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_506(uParam0[iVar0 /*4*/]);
		iVar0++;
	}
	uParam0->f_13 = 0;
}

void func_403(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

bool func_404(int iParam0)
{
	return func_339(128, iParam0);
}

void func_405(int iParam0)
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
	func_406(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_406(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

struct<8> func_407(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	struct<8> Var18;

	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, HUD::_0x806862E5D266CF38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, HUD::_0x806862E5D266CF38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

struct<16> func_408(var uParam0)
{
	return uParam0->f_192;
}

char* func_409(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_33)
	{
		if (ENTITY::GET_ENTITY_MODEL(Global_33) == joaat("PLAYER_THREE"))
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_507(iVar0);
}

void func_410(var uParam0)
{
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_13))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_13, false);
	}
}

struct<8> func_411()
{
	char cVar0[64];

	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

bool func_412(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_413(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_13))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_13, false);
	}
	uParam0->f_4 = iParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_13 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(iParam1, bParam2, iVar0);
}

struct<8> func_414(var uParam0)
{
	return uParam0->f_217;
}

struct<8> func_415()
{
	char cVar0[64];

	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

void func_416(int iParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;

	if (bParam4)
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return;
	}
	if (func_412(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((fParam5 < 0f || fParam6 < 0f) || fParam7 < 0f) || fParam8 < 0f)
	{
		return;
	}
	if (((((!fParam5 > fParam6 || !fParam5 > fParam7) || !fParam5 > fParam8) || !fParam6 > fParam7) || !fParam6 > fParam8) || !fParam7 > fParam8)
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	fVar3 = func_318(iParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.75f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam6 && fVar3 > fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1.5f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.25f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
			if (bParam9 == 1)
			{
				if (PED::_GET_IS_PED_MOTIVATION_STATE_ENABLED(iVar0, 3))
				{
					PED::_SET_PED_MOTIVATION(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1f);
					if (bParam9 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (PED::_GET_IS_PED_MOTIVATION_STATE_ENABLED(iVar0, 3))
							{
								PED::_SET_PED_MOTIVATION(iVar2, 3, 0f, 0);
							}
						}
					}
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (fVar3 <= fParam8)
		{
			if (iParam0 == Global_33)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::PLAYER_ID(), 28, true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !func_508(iParam0, 5.999514E-21f))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_508(iParam0, -1.283316E+09f))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, iParam12);
			}
		}
	}
}

bool func_417(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	fVar4 = func_318(iParam0, vParam1, 1);
	if (!func_358(fParam4))
	{
		if (fVar4 <= fParam5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				func_359(fParam4, 0);
			}
		}
	}
	else if (bParam7 && fVar4 > fParam5)
	{
		func_480(fParam4);
	}
	if (func_358(fParam4))
	{
		if (bParam10)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && VEHICLE::IS_DRAFT_VEHICLE(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar2, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, 1f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, PED::_0x46BF2A810679D6E6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (func_360(fParam4) >= fParam6)
		{
			if (iParam0 == Global_33)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::PLAYER_ID(), 28, true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_508(iParam0, 5.999514E-21f))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !func_508(iParam0, -1.283316E+09f))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
					return true;
				}
			}
		}
		if (iParam0 == Global_33 && bParam8 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(iParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
			}
			PED::SET_PED_RESET_FLAG(iParam0, 175, true);
		}
	}
	return false;
}

int func_418(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 2;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
	{
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
		return 2;
	}
	iVar0 = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iParam1);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return 1;
	}
	iVar1 = NETWORK::_NETWORK_GET_PLAYER_OWNER_OF_NETWORK_ID(iVar0);
	if (iVar1 == 255)
	{
		return 0;
	}
	if (iVar1 == PLAYER::PLAYER_ID())
	{
		NETWORK::PREVENT_NETWORK_ID_MIGRATION(iVar0);
		return 1;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (uParam0->f_7[iVar2 /*5*/] == 255)
		{
		}
		else if (uParam0->f_7[iVar2 /*5*/] == iVar1)
		{
			return 2;
		}
		iVar2++;
	}
	if (uParam0->f_7[0 /*5*/] != 255 && uParam0->f_7[0 /*5*/] == PLAYER::PLAYER_ID())
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iVar0);
	}
	return 0;
}

void func_419(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_3)))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_1);
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2);
	bVar2 = func_509(uParam1->f_1) == PLAYER::PLAYER_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (PED::IS_PED_MALE(iVar1))
	{
		bVar3 = MISC::GET_HASH_KEY(&(uParam2->f_3));
	}
	else
	{
		bVar3 = MISC::GET_HASH_KEY(&(uParam2->f_7));
	}
	if (PED::IS_PED_READY_TO_RENDER(iVar1))
	{
		if (!func_90(uParam1->f_4, 14) && func_90(uParam1->f_4, 15))
		{
			func_510(iVar1, bVar3);
			func_27(&(uParam1->f_4), 14);
		}
		if (!func_90(uParam1->f_4, 15))
		{
			PED::_REFRESH_META_PED_SHOP_ITEMS(iVar1, 1);
			func_27(&(uParam1->f_4), 15);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_2, MISC::GET_HASH_KEY("ChangeOutfit")))
	{
		if (!func_90(uParam1->f_4, 17) && PED::IS_PED_READY_TO_RENDER(iVar1))
		{
			func_511(iVar1, bVar3);
			func_27(&(uParam1->f_4), 17);
		}
		if (!func_90(uParam1->f_4, 16))
		{
			if (!bVar2)
			{
				func_27(&(uParam1->f_4), 16);
			}
			else if (PED::IS_PED_READY_TO_RENDER(iVar0) && func_512())
			{
				func_511(iVar0, bVar3);
				bVar4 = bVar3;
				func_513(&bVar4);
				func_27(&(uParam1->f_4), 16);
			}
		}
	}
}

int func_420(var uParam0, int* iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	if (iParam3 <= -1)
	{
		return 2;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam5->f_1))
	{
		return 1;
	}
	else if (iParam4 == 0.0003061561f)
	{
		if (iParam3 >= 4)
		{
			return 2;
		}
		iVar0 = func_266(iParam1, iParam3);
		if (iVar0 < 0 || iVar0 >= 4)
		{
			return 2;
		}
		iVar1 = uParam0->f_7[iVar0 /*5*/];
		if (iVar1 == 255)
		{
			return 2;
		}
		uParam5->f_1 = PLAYER::GET_PLAYER_PED(iVar1);
		*uParam5 = iParam3;
		*iParam6 = 0;
		return 1;
	}
	else
	{
		iVar4 = func_208(iParam7, iParam3, iParam4, &iVar2, iParam6, &uVar3);
		uParam5->f_1 = MISC::_GET_ENTITY_FROM_ITEM(iVar2);
		if (iVar4 == 0)
		{
			if (!func_14(&(uParam5->f_11)))
			{
				func_15(&(uParam5->f_11), 0, 0);
			}
			if (func_37(&(uParam5->f_11), 0, 0) >= 15000)
			{
				func_287(&(uParam5->f_11));
				return 2;
			}
			return 0;
		}
		else if (iVar4 == 2 || !ENTITY::DOES_ENTITY_EXIST(uParam5->f_1))
		{
			func_287(&(uParam5->f_11));
			return 2;
		}
		else if (iVar4 == 1)
		{
			func_287(&(uParam5->f_11));
			*uParam5 = iParam3;
			return 1;
		}
	}
	return 0;
}

int func_421(int* iParam0, var uParam1, char* sParam2)
{
	struct<4> Var0;

	Var0 = { func_270(sParam2, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_1.f_1), uParam1->f_1, 0) };
	return func_514(iParam0, &Var0);
}

bool func_422(int iParam0)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		iVar0 = iParam0;
		if (!func_257(iVar0))
		{
			return false;
		}
		iVar1 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			return false;
		}
		return true;
	}
	return false;
}

int func_423(var uParam0, int* iParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, char* sParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam2->f_1);
	uParam2->f_13 = uParam6->f_7;
	switch (uParam6->f_7)
	{
		case 0:
			func_27(&(uParam2->f_5), 1);
			if (PED::IS_PED_DEAD_OR_DYING(iVar0, true) && !PED::IS_PED_A_PLAYER(iVar0))
			{
				uParam2->f_13 = 5;
			}
			else if (AITRANSPORT::_IS_PED_ON_TRANSPORT_SEAT(iVar0, false) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar1)))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false) && TASK::IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(iVar0))
				{
					uParam2->f_13 = 1;
				}
				else
				{
					iVar1 = PED::_GET_TRANSPORT_PED_IS_SEATED_ON(iVar0);
					uParam2->f_13.f_4 = PED::GET_SEAT_PED_IS_USING(iVar0);
					uParam2->f_13 = 6;
				}
			}
			else if (PED::IS_PED_HOGTIED(iVar0))
			{
				iVar2 = ENTITY::GET_CARRIABLE_ENTITY_STATE(iVar0);
				if (iVar2 == 7 || iVar2 == 5)
				{
					iVar1 = PED::_GET_CARRIER_AS_PED(iVar0);
				}
				uParam2->f_13 = 4;
			}
			else if (PED::IS_PED_IN_COVER(iVar0, false, false))
			{
				uParam2->f_13 = 3;
			}
			else if (PED::GET_PED_CROUCH_MOVEMENT(iVar0))
			{
				uParam2->f_13 = 2;
			}
			else
			{
				uParam2->f_13 = 1;
			}
			break;
		case 4:
			break;
		case 6:
			iVar1 = PED::_GET_LAST_MOUNT(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar1)))
			{
				uParam2->f_13 = 1;
			}
			else
			{
				uParam2->f_13.f_4 = uParam6->f_10;
			}
			break;
		case 7:
			uParam2->f_13.f_2 = uParam6->f_8;
			uParam2->f_13.f_1 = uParam6->f_9;
			uParam2->f_13.f_4 = uParam6->f_10;
			break;
		case 8:
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				iVar4 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iVar3);
				iVar5 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(iVar3);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					iVar1 = iVar4;
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iVar5))
				{
					iVar1 = iVar5;
				}
				else
				{
					uParam2->f_13 = 1;
				}
			}
			else
			{
				uParam2->f_13 = 1;
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar1)))
	{
		iVar6 = -1;
		if (func_515(iParam1, iVar1, 0, &iVar6, &uVar7))
		{
			uParam2->f_13.f_2 = iVar6;
			uParam2->f_13.f_1 = uVar7;
		}
		else if (!func_90(uParam2->f_13.f_3, 0))
		{
			func_27(&(uParam2->f_13.f_3), 0);
			return 0;
		}
		else
		{
			iVar8 = func_516(iVar1, iParam1, iParam3, iParam4);
			if (iVar8 != -1)
			{
				uParam2->f_13.f_2 = iVar8;
				uParam2->f_13.f_1 = 0;
			}
		}
	}
	if (func_90(uParam6->f_6, 0) && AITRANSPORT::_IS_PED_ON_TRANSPORT_SEAT(iVar0, false))
	{
		bVar9 = true;
	}
	if (func_431(uParam0, iParam1, uParam2, iParam3, iParam4, uParam5, uParam6, sParam7, bParam8, bVar9, func_90(uParam2->f_5, 1)))
	{
		bVar9 = true;
	}
	if (uParam2->f_13.f_2 != -1 && uParam2->f_13.f_1 == 0)
	{
		iVar10 = uParam2->f_13.f_2;
		if (uParam2->f_10 == 2)
		{
			iVar11 = 3;
		}
		else
		{
			iVar11 = 11;
		}
		if (iParam1->f_1104[iVar10 /*15*/].f_10 < iVar11)
		{
			return 0;
		}
		else if (!func_90(iParam1->f_1104[iVar10 /*15*/].f_5, 0))
		{
			if (uParam2->f_13 != 6 || uParam2->f_13.f_4 == -1)
			{
				iParam1->f_1104[iVar10 /*15*/].f_5.f_1 = { uParam2->f_5.f_1 };
				iParam1->f_1104[iVar10 /*15*/].f_5.f_4 = uParam2->f_5.f_4;
				func_27(&(iParam1->f_1104[iVar10 /*15*/].f_5), 0);
			}
		}
	}
	if (bVar9)
	{
		return 1;
	}
	return 2;
}

bool func_424(var uParam0)
{
	if (!func_90(uParam0->f_4, 0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	return true;
}

bool func_425(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return true;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_1);
	if (!PED::IS_PED_READY_TO_RENDER(iVar0))
	{
		return false;
	}
	vVar1 = { func_517(iVar0) };
	vVar1.f_1 = (vVar1.y + 1120403456);
	fVar4 = ENTITY::GET_ENTITY_HEADING(iVar0);
	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		iVar5 = PED::CLONE_PED(iVar0, false, false, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
		{
			return true;
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iVar5, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar5, true);
		func_518(iVar0, iVar5);
		ENTITY::SET_ENTITY_COORDS(iVar5, vVar1, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iVar5, fVar4);
		func_428(iVar5, 1);
		uParam0->f_2 = iVar5;
	}
	if (!func_519(iVar0, iVar5, &(uParam0->f_4)))
	{
		return false;
	}
	return true;
}

bool func_426(var uParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;

	if (bParam3)
	{
		iVar0 = uParam0->f_2;
	}
	else
	{
		iVar0 = uParam0->f_1;
		if (uParam0->f_3 != 1)
		{
			return uParam0->f_3 != 0;
		}
	}
	if (uParam0->f_13.f_2 == -1)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
		if (func_520(iVar1))
		{
			AITRANSPORT::SET_PED_OFF_TRANSPORT_SEAT(iVar1, 4194336);
		}
		return func_433(uParam0, iParam1, iParam2, bParam3, uParam4);
	}
	return true;
}

bool func_427(int* iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar14;
	int iVar15;
	float fVar16;
	struct<4> Var17;
	bool bVar21;
	bool bVar22;
	int iVar23;
	bool bVar24;

	if (bParam5)
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam3->f_2);
	}
	else
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam3->f_1);
		if (uParam3->f_3 != 1)
		{
			return uParam3->f_3 != 0;
		}
	}
	Var1 = -1;
	Var1.f_5.f_4 = -1f;
	if (func_521(iParam0, uParam3->f_13.f_2, uParam3->f_13.f_1, &Var1))
	{
		if (Var1.f_10 <= 1)
		{
			return false;
		}
		else if (func_90(Var1.f_4, 0))
		{
			if (func_522(iParam0, uParam3->f_13.f_2, uParam3->f_13.f_1, bParam5, &iVar14))
			{
			}
			else
			{
				return false;
			}
		}
	}
	iVar15 = 0;
	fVar16 = func_523(iVar0, 1, 0, 0);
	Var17 = { func_524() };
	bVar21 = false;
	bVar22 = func_90(uParam4->f_6, 6);
	switch (uParam4->f_11)
	{
		case 0:
			break;
		case 1:
			WEAPON::_HIDE_PED_WEAPONS(iVar0, 2, true);
			break;
		case 2:
			iVar15 = WEAPON::GET_BEST_PED_WEAPON(iVar0, bVar22, true);
			break;
		case 4:
			iVar15 = WEAPON::_GET_PED_WORST_WEAPON(iVar0, bVar22, false, false);
			break;
		case 5:
			iVar15 = uParam4->f_12;
			break;
		case 3:
			iVar15 = WEAPON::GET_BEST_PED_WEAPON(iVar0, bVar22, false);
			break;
		case 6:
			if (func_90(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(fVar16) == -1.888018E-06f)
			{
				iVar15 = fVar16;
			}
			else
			{
				iVar15 = WEAPON::_GET_BEST_PED_WEAPON_IN_GROUP(iVar0, -1.888018E-06f, bVar22, false);
			}
			break;
		case 7:
			if (func_90(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(fVar16) == 1.044061E+20f)
			{
				iVar15 = fVar16;
			}
			else
			{
				iVar15 = WEAPON::_GET_BEST_PED_WEAPON_IN_GROUP(iVar0, 1.044061E+20f, bVar22, false);
			}
			break;
		case 8:
			if (func_90(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(fVar16) == -3.392347E-18f)
			{
				iVar15 = fVar16;
			}
			else
			{
				iVar15 = WEAPON::_GET_BEST_PED_WEAPON_IN_GROUP(iVar0, -3.392347E-18f, bVar22, false);
			}
			break;
		case 9:
			if (func_90(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(fVar16) == -38393.22f)
			{
				iVar15 = fVar16;
			}
			else
			{
				iVar15 = WEAPON::_GET_BEST_PED_WEAPON_IN_GROUP(iVar0, -38393.22f, bVar22, false);
			}
			break;
		case 10:
			if (func_90(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(fVar16) == 7.133369E-28f)
			{
				iVar15 = fVar16;
			}
			else
			{
				iVar15 = WEAPON::_GET_BEST_PED_WEAPON_IN_GROUP(iVar0, 7.133369E-28f, bVar22, false);
			}
			break;
		case 11:
			if (func_90(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(fVar16) == -5.055422E+12f)
			{
				iVar15 = fVar16;
			}
			else
			{
				iVar15 = WEAPON::_GET_BEST_PED_WEAPON_IN_GROUP(iVar0, -5.055422E+12f, bVar22, false);
			}
			break;
		case 12:
			if (func_90(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(fVar16) == 1.123211E+19f)
			{
				iVar15 = fVar16;
			}
			else
			{
				iVar15 = WEAPON::_GET_BEST_PED_WEAPON_IN_GROUP(iVar0, 1.123211E+19f, bVar22, false);
			}
			break;
		case 13:
			if (func_90(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(fVar16) == 5.531224E-24f)
			{
				iVar15 = fVar16;
			}
			else
			{
				iVar15 = WEAPON::_GET_BEST_PED_WEAPON_IN_GROUP(iVar0, 5.531224E-24f, bVar22, false);
			}
			break;
		case 14:
			if (func_90(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(fVar16) == -3.235899E+17f)
			{
				iVar15 = fVar16;
			}
			else
			{
				iVar15 = WEAPON::_GET_BEST_PED_WEAPON_IN_GROUP(iVar0, -3.235899E+17f, bVar22, false);
			}
			break;
		case 15:
			if (func_90(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(fVar16) == -0.2143914f)
			{
				iVar15 = fVar16;
			}
			else
			{
				iVar15 = WEAPON::_GET_BEST_PED_WEAPON_IN_GROUP(iVar0, -0.2143914f, bVar22, false);
			}
			break;
		case 16:
			if (func_90(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(fVar16) == 0.0004077075f)
			{
				iVar15 = fVar16;
			}
			else
			{
				iVar15 = WEAPON::_GET_BEST_PED_WEAPON_IN_GROUP(iVar0, 0.0004077075f, bVar22, false);
			}
			break;
		case 17:
			if (func_90(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(fVar16) == 4.54198E-08f)
			{
				iVar15 = fVar16;
			}
			else
			{
				iVar15 = WEAPON::_GET_BEST_PED_WEAPON_IN_GROUP(iVar0, 4.54198E-08f, bVar22, false);
			}
			break;
		case 18:
			if (func_90(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(fVar16) == -2.239279E-05f)
			{
				iVar15 = fVar16;
			}
			else
			{
				iVar15 = WEAPON::_GET_BEST_PED_WEAPON_IN_GROUP(iVar0, -2.239279E-05f, bVar22, false);
			}
			break;
		case 19:
			if (func_90(uParam4->f_6, 5) && WEAPON::GET_WEAPONTYPE_GROUP(fVar16) == 2.300729E+17f)
			{
				iVar15 = fVar16;
			}
			else
			{
				iVar15 = WEAPON::_GET_BEST_PED_WEAPON_IN_GROUP(iVar0, 2.300729E+17f, bVar22, false);
			}
			break;
		case 20:
			if (func_90(uParam4->f_6, 5) && WEAPON::_IS_WEAPON_ONE_HANDED(fVar16))
			{
				iVar15 = fVar16;
			}
			else
			{
				WEAPON::GET_BEST_PED_SHORTARM_GUID(iVar0, &Var17, bVar22, false);
				bVar21 = true;
			}
			break;
		case 21:
			WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, true, true);
			break;
	}
	if (bVar21)
	{
		WEAPON::SET_CURRENT_PED_WEAPON_BY_GUID(iVar0, &Var17, true, false, false, false);
	}
	else
	{
		iVar23 = uParam4->f_11;
		if ((iVar23 >= 6 && iVar23 <= 19) && iVar15 == 0)
		{
			WEAPON::GET_BEST_PED_SHORTARM_GUID(iVar0, &Var17, bVar22, false);
			WEAPON::SET_CURRENT_PED_WEAPON_BY_GUID(iVar0, &Var17, true, false, false, false);
		}
		if (iVar15 != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(iVar0, iVar15, 0, false))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iVar0, iVar15, 0, true, true, 0, false, 0.5f, 1f, 6.028273E-12f, false, 0f, false);
				WEAPON::_ADD_AMMO_TO_PED(iVar0, iVar15, 10, 6.028273E-12f);
				WEAPON::SET_PED_INFINITE_AMMO(iVar0, true, iVar15);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iVar15, true, 0, false, false);
		}
	}
	if (!func_525(iVar0, uParam4))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return true;
	}
	switch (uParam3->f_13)
	{
		case 0:
			break;
		case 1:
			if (PED::IS_PED_ON_FOOT(iVar0))
			{
				if (PED::GET_PED_CROUCH_MOVEMENT(iVar0))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(iVar0, false, 0, true);
				}
			}
			else if (AITRANSPORT::_IS_PED_ON_TRANSPORT_SEAT(iVar0, false))
			{
				AITRANSPORT::SET_PED_OFF_TRANSPORT_SEAT(iVar0, 4194336);
			}
			break;
		case 2:
			if (!PED::GET_PED_CROUCH_MOVEMENT(iVar0))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(iVar0, true, 0, true);
			}
			break;
		case 3:
			if (!func_394(iVar0, -3.371886E-32f))
			{
				if (ENTITY::_IS_ENTITY_FROZEN(iVar0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
					bVar24 = true;
				}
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iVar0, uParam3->f_5.f_1, -1, true, 0f, 1, func_90(uParam4->f_6, 1), 0, false, true, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, false, false);
				if (bVar24)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				}
			}
			break;
		case 4:
			if (!func_394(iVar0, -1.531883E-37f))
			{
				TASK::TASK_CARRIABLE(iVar0, -1.698769E-39f, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar14), 0, 0);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar14))
				{
					ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar0, false);
				}
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, false, false);
			}
			if (!PED::IS_PED_HOGTIED(iVar0))
			{
				return false;
			}
			break;
		case 6:
		case 7:
		case 8:
			if (!ENTITY::DOES_ENTITY_EXIST(iVar14))
			{
				return true;
			}
			if (!AITRANSPORT::_IS_PED_ON_TRANSPORT_ENTITY(iVar0, iVar14) || (uParam3->f_13.f_4 != -2 && PED::GET_SEAT_PED_IS_USING(iVar0) != uParam3->f_13.f_4))
			{
				if (ENTITY::_IS_ENTITY_FROZEN(iVar0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
				}
				ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
				AITRANSPORT::SET_PED_ON_TRANSPORT_SEAT(iVar0, iVar14, uParam3->f_13.f_4, 4194336);
				if (!AITRANSPORT::_IS_PED_ON_TRANSPORT_ENTITY(iVar0, iVar14))
				{
					return false;
				}
			}
			break;
		case 5:
			if (!PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				func_526(iVar0, 0);
			}
			break;
	}
	return true;
}

void func_428(int iParam0, bool bParam1)
{
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, bParam1);
	ENTITY::SET_ENTITY_COLLISION(iParam0, !bParam1, false);
	ENTITY::SET_ENTITY_VISIBLE(iParam0, !bParam1);
}

int func_429(int* iParam0, var uParam1, var uParam2, char* sParam3)
{
	if (!func_90(uParam2->f_1, 0) && ENTITY::IS_ENTITY_DEAD(uParam1->f_1))
	{
		return 2;
	}
	return func_514(iParam0, sParam3);
}

void func_430(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		ENTITY::_0xC3ABCFBC7D74AFA5(uParam0->f_2, 6, true);
	}
}

bool func_431(var uParam0, int* iParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, char* sParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	vector3 vVar8;
	vector3 vVar11;
	struct<10> Var14;

	iVar0 = uParam2->f_1;
	if (ENTITY::GET_ENTITY_TYPE(iVar0) == 1 && !bParam10)
	{
		vVar1 = { func_517(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)) };
	}
	else
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	}
	fVar4 = ENTITY::GET_ENTITY_HEADING(iVar0);
	iVar5 = func_141(uParam0->f_1.f_2);
	uParam2->f_5.f_1 = { vVar1 };
	uParam2->f_5.f_4 = fVar4;
	if (bParam9)
	{
		bVar6 = true;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, uParam5->f_1622[iVar5 /*3*/], true) < 1120403456 && func_90(uParam6->f_4, 0))
	{
		bVar6 = true;
	}
	if (func_90(uParam6->f_4, 1))
	{
		bVar7 = true;
	}
	if (!bVar6)
	{
		if (func_90(uParam6->f_4, 2))
		{
			if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(iParam1->f_1485.f_208, sParam7, &Var14, false, 0, 2))
			{
				if (bParam8)
				{
					vVar8 = { Var14 };
					vVar11 = { Var14.f_3 };
				}
				else
				{
					vVar8 = { Var14.f_6 };
					vVar11 = { Var14.f_9 };
				}
				if (!bVar7)
				{
					uParam2->f_5.f_1 = { vVar8 };
				}
				uParam2->f_5.f_4 = vVar11.z;
				bVar6 = true;
			}
		}
	}
	if (!bVar6)
	{
		if (!func_157(*uParam6))
		{
			if (!bVar7)
			{
				uParam2->f_5.f_1 = { *uParam6 };
			}
			uParam2->f_5.f_4 = uParam6->f_3;
			bVar6 = true;
		}
	}
	return bVar6;
}

int func_432(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 1;
	}
	iVar0 = ENTITY::GET_ENTITY_TYPE(uParam0->f_1);
	switch (iVar0)
	{
		case 1:
			return func_425(uParam0);
		case 2:
			if (VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(uParam0->f_1)))
			{
				return func_527(uParam0, iParam1);
			}
			else
			{
				return func_528(uParam0, iParam2);
			}
			break;
		case 3:
			return func_529(uParam0);
	}
	return 1;
}

bool func_433(var uParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	float fVar5;

	if (bParam3)
	{
		iVar0 = uParam0->f_2;
	}
	else
	{
		iVar0 = uParam0->f_1;
		if (uParam0->f_3 != 1)
		{
			return uParam0->f_3 != 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	bVar1 = ENTITY::_IS_ENTITY_FROZEN(iVar0);
	if (bVar1)
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
	}
	if (func_90(uParam0->f_5, 1))
	{
		func_530(iVar0, uParam0->f_5.f_1, uParam0->f_5.f_4, 1, 2f);
	}
	else
	{
		func_530(iVar0, uParam0->f_5.f_1, uParam0->f_5.f_4, 2, 2f);
	}
	if (!func_90(uParam4->f_1, 2))
	{
		ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar0, true);
	}
	if (bParam3 && ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), false, false);
	}
	if (bVar1)
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
	}
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, true);
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar5 = ENTITY::GET_ENTITY_HEADING(iVar0);
	return true;
}

bool func_434(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam4)
	{
		iVar0 = uParam1->f_2;
	}
	else
	{
		iVar0 = uParam1->f_1;
		if (uParam1->f_3 != 1)
		{
			return uParam1->f_3 != 0;
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_4, 3) && ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
	{
		iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
		iVar2 = 9;
		if (VEHICLE::_GET_VEHICLE_TURRET_SEAT(iVar1, &iVar2))
		{
			WEAPON::SET_VEHICLE_WEAPON_HEADING(iVar1, iVar2, uParam0->f_5, true);
		}
	}
	return true;
}

void func_435(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_2, iParam4))
	{
		if (!func_90(uParam1->f_4, iParam2) && func_90(uParam0->f_1, 0))
		{
			func_27(&(uParam1->f_4), iParam2);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam1->f_1))
			{
				iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_1);
				VEHICLE::_BREAK_OFF_VEHICLE_WHEEL(iVar0, iParam5);
			}
		}
		if (!func_90(uParam1->f_4, iParam3))
		{
			func_27(&(uParam1->f_4), iParam3);
			iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_2);
			VEHICLE::_BREAK_OFF_VEHICLE_WHEEL(iVar1, iParam5);
		}
	}
}

int func_436(int* iParam0, var uParam1, int iParam2, var uParam3)
{
	var uVar0;

	if (!func_272(iParam0, uParam3, iParam2, 0, &uVar0, 0, 0))
	{
		return 2;
	}
	return func_514(iParam0, &uVar0);
}

bool func_437(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_438(int iParam0, int iParam1)
{
	if (!func_437(iParam0))
	{
		return false;
	}
	if (func_31() == -1)
	{
		return (Global_1915643.f_3[iParam0 /*447*/].f_6 && iParam1) != 0;
	}
	else
	{
		return (Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1) != 0;
	}
	return false;
}

void func_439(int iParam0, int iParam1)
{
	if (!func_437(iParam0))
	{
		return;
	}
	if (func_31() == -1)
	{
		Global_1915643.f_3[iParam0 /*447*/].f_6 = (Global_1915643.f_3[iParam0 /*447*/].f_6 || iParam1);
	}
	else
	{
		Global_1051832.f_92[iParam0 /*75*/].f_1 = (Global_1051832.f_92[iParam0 /*75*/].f_1 || iParam1);
	}
}

void func_440(int iParam0, int iParam1)
{
	if (!func_437(iParam0))
	{
		return;
	}
	if (func_31() == -1)
	{
		Global_1915643.f_3[iParam0 /*447*/].f_6 = (Global_1915643.f_3[iParam0 /*447*/].f_6 - (Global_1915643.f_3[iParam0 /*447*/].f_6 && iParam1));
	}
	else
	{
		Global_1051832.f_92[iParam0 /*75*/].f_1 = (Global_1051832.f_92[iParam0 /*75*/].f_1 - (Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1));
	}
}

bool func_441(int iParam0)
{
	if (func_531())
	{
		if (Global_1915643.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_442(int iParam0)
{
	return (Global_1102813.f_3520 && iParam0) != 0;
}

char* func_443(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return func_409(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return func_532(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return func_533(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	return "";
}

int func_444(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0 /*12*/]) && uParam0->f_17[iVar0 /*12*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_445(var uParam0, char* sParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0 /*12*/]) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_17[iVar0 /*12*/].f_1), sParam1))
		{
			return uParam0->f_17[iVar0 /*12*/];
		}
		iVar0++;
	}
	return 0;
}

void func_446(var uParam0, int iParam1)
{
	struct<12> Var0;
	int iVar12;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 14)
	{
		if (uParam0->f_17[iVar12 /*12*/] == iParam1)
		{
			uParam0->f_17[iVar12 /*12*/] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_447(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0 /*12*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_448(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_449(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_450()
{
	if (func_496(Global_26574))
	{
		func_499(&Global_26574, 0, 0);
	}
}

bool func_451(int iParam0)
{
	int iVar0;

	if (func_534(iParam0))
	{
		iVar0 = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

bool func_452(int iParam0, bool bParam1)
{
	if (bParam1 && !func_496(iParam0))
	{
		return false;
	}
	return !func_535(iParam0, 4);
}

bool func_453(bool bParam0, bool bParam1)
{
	if (!func_496(Global_26574))
	{
		Global_26574 = func_536("CUTSCENE_SKIP", -4.12917E+08f, 5, 570, 4000, 10, 2f, 0, 1f, 0, 3, -2.540813E-34f, 0);
		Global_1951897[Global_26574 /*23*/].f_16 = Global_20[3];
		func_498(Global_26574, 0, 1);
		func_537(Global_26574, 6, 1);
		if (bParam1)
		{
			func_537(Global_26574, 14, 1);
		}
	}
	else
	{
		if (!func_452(Global_26574, 0))
		{
			func_497(Global_26574, 1, 1, 1);
		}
		if (func_538(Global_26574, 1) != 0f && bParam0)
		{
			func_498(Global_26574, 1, 1);
		}
		else
		{
			func_498(Global_26574, 0, 1);
		}
		return func_539(Global_26574, 1);
	}
	return false;
}

void func_454(var uParam0, char* sParam1)
{
	if (((!func_310(uParam0, 32) || func_540(uParam0)) || func_310(uParam0, 2.524355E-29f)) && !func_310(uParam0, 65536))
	{
		func_234(&(uParam0->f_263), 256);
	}
}

void func_455(var uParam0, bool bParam1)
{
	var uVar0;

	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &uVar0, false, 9, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 9, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &uVar0, false, 7, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 7, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &uVar0, false, 8, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 8, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &uVar0, false, 10, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 10, bParam1);
	}
}

bool func_456()
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-3.294948E+35f) > 0)
	{
		return true;
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1.201345E-07f) > 0)
	{
		return true;
	}
	return false;
}

void func_457(bool bParam0)
{
	if (func_456())
	{
		Global_1958670 = 1;
	}
	if (func_541(-3.294948E+35f))
	{
	}
	if (bParam0 && (Global_1940186.f_38 == -230.1699f || Global_1940186.f_38 == 5.402792E-27f))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		Global_1940186.f_38 = -3.273909E-18f;
	}
}

void func_458(var uParam0, char[64] cParam1)
{
	uParam0->f_192 = { cParam1 };
}

void func_459(var uParam0)
{
	int iVar0;
	struct<8> Var1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_225[iVar0 /*9*/])))
		{
			func_542(uParam0, &(uParam0->f_225[iVar0 /*9*/]));
		}
		iVar0++;
	}
	Var1 = { func_411() };
	func_542(uParam0, &Var1);
	Var1 = { func_327(uParam0) };
	func_542(uParam0, &Var1);
}

void func_460(float fParam0, float fParam1)
{
	fParam0->f_1 = (func_463() - fParam1);
	func_543(fParam0, 1);
	func_544(fParam0, 2);
	fParam0->f_2 = 0f;
}

bool func_461(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_462(float fParam0)
{
	return func_461(*fParam0, 2);
}

float func_463()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

bool func_464()
{
	return func_534(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(3));
}

bool func_465()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

void func_466(bool bParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
}

Vector3 func_467(var uParam0)
{
	return uParam0->f_265;
}

void func_468(var uParam0)
{
	bool bVar0;

	if (func_545(&bVar0))
	{
		if (func_546(bVar0, 0))
		{
			if (func_485(bVar0) == -9.847085E+19f)
			{
				func_547(-2.320688E-12f, Global_33, 0, 0);
			}
			else
			{
				func_547(-0.006214506f, Global_33, 0, 0);
			}
		}
		if (*uParam0 == 0)
		{
			*uParam0 = bVar0;
		}
	}
}

void func_469(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;

	if (Global_1940186.f_6)
	{
		return;
	}
	Global_13 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_548(-1);
		func_549(-1);
	}
	if (!func_361(*uParam0, 8388608))
	{
		func_362(1);
	}
	ENTITY::SET_ENTITY_INVINCIBLE(Global_33, true);
	if (!func_361(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_361(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_361(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_361(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_361(*uParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam1, true);
	}
	if (!func_361(*uParam0, 1))
	{
		PAD::SET_CONTROL_SHAKE_SUPPRESSED_ID(0, 0);
	}
	if (!func_361(*uParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!func_361(*uParam0, 4) && !func_361(*uParam0, 2))
	{
		HUD::_ENABLE_HUD_CONTEXT(-3.83483E-22f);
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(-3.83483E-22f);
	}
	if (!func_361(*uParam0, 2048))
	{
		func_550(0);
	}
	if (func_361(*uParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_33, false, true);
	}
	if (func_361(*uParam0, 256))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_33, 2, true);
	}
	if (func_361(*uParam0, 8192))
	{
		func_551();
	}
	if (!func_361(*uParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_33, 264, true);
	}
	if (!func_361(*uParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!func_361(*uParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_33, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_33))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_33, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_33, ENTITY::GET_ENTITY_HEADING(Global_33));
			ENTITY::SET_ENTITY_VELOCITY(Global_33, 0f, 0f, 0f);
		}
		if (!func_361(*uParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_33, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (func_552() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (func_157(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_33, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_553(&vVar3, 50, 10, 0, 0);
					}
					vVar3.f_2 = (vVar3.z + 1092616192);
					if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar3, &(vVar3.f_2), true))
					{
					}
					PED::DETACH_CARRIABLE_ENTITY(iVar7, false, true);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_554(2);
						func_555(-1);
						func_556(vVar3);
						func_558(func_557());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_33, false, true);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_33, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_33))
	{
		iVar9 = PED::GET_MOUNT(Global_33);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, true, false);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!func_361(*uParam0, 4096))
	{
		func_350(Global_33);
	}
	if (!func_361(*uParam0, 1048576))
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(7, true, false);
	}
	if (!func_361(*uParam0, 2097152) && !func_235(144))
	{
		if (func_559() || PED::_IS_PED_DRUNK(Global_33))
		{
			func_560(1);
		}
	}
	*uParam0 = 0;
}

void func_470(var uParam0, vector3 vParam1)
{
	uParam0->f_265 = { vParam1 };
}

void func_471(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (func_310(uParam0, 2048) && !func_157(func_561(uParam0)))
	{
		bVar0 = VOLUME::DOES_VOLUME_EXIST(uParam0->f_4);
		iVar1 = PED::_GET_LAST_MOUNT(Global_33);
		if ((!ENTITY::IS_ENTITY_DEAD(iVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar1, uParam0->f_4, true, 0)) || func_310(uParam0, 0f))) && PED::GET_MOUNT(Global_33) != iVar1)
		{
			func_530(iVar1, func_561(uParam0), func_562(uParam0), 2, 2f);
		}
		iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar2) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar2, uParam0->f_4, true, 0)) || func_310(uParam0, 0f))) && !PED::IS_PED_IN_VEHICLE(Global_33, iVar2, true))
		{
			func_530(iVar2, func_561(uParam0), func_562(uParam0), 2, 2f);
		}
	}
}

void func_472(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	if ((func_310(uParam0, 2.524355E-29f) && !func_157(func_561(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_33);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { func_561(uParam0) };
			func_530(iVar0, vVar1, func_563(vVar1, Global_34, 1), 2, 2f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, false);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_473(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_268 = { vParam1 };
	uParam0->f_271 = iParam4;
	if (func_157(vParam1))
	{
		func_76(uParam0, 2048, 1);
	}
	else
	{
		func_231(uParam0, 2048);
		if (bParam5)
		{
			func_231(uParam0, 0f);
		}
	}
}

void func_474(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(uParam0->f_17[iVar0 /*12*/]) && ENTITY::IS_ENTITY_A_PED(uParam0->f_17[iVar0 /*12*/])) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_17[iVar0 /*12*/]) != Global_33)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_17[iVar0 /*12*/]);
			if (PED::IS_PED_HUMAN(iVar1))
			{
				if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_208, &(uParam0->f_17[iVar0 /*12*/].f_1)))
				{
					if (!func_347(&(uParam0->f_17[iVar0 /*12*/]), 8))
					{
						if (func_565(func_564(iVar1, 0, 1, 0)))
						{
							if (!func_566(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, -3.273909E-18f, true, 0, false, false);
							}
						}
						if (func_565(func_564(iVar1, 1, 1, 0)))
						{
							if (!func_566(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 1)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, -3.273909E-18f, true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_475(var uParam0, bool bParam1)
{
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_14)
		{
			PED::REMOVE_TAG_FROM_META_PED(Global_33, -5.426139E-06f, 1);
		}
	}
	else if (!func_449(uParam0->f_264, 256))
	{
		func_567(Global_33, Global_1953279.f_1676.f_1[28 /*3*/], 0, -2.801147E+12f, 1, 1, 0, 1, 0, 0, 1, 0);
		func_233(&(uParam0->f_264), 256);
	}
	Global_14 = !bParam1;
}

int func_476(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_568(14, iParam1, 0, 0, 0);
		}
		else
		{
			func_568(14, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_569(0))
	{
	}
	func_570(&(Global_1953279.f_1676), iParam0, 1, iParam1, 1, bParam3, 1, 1);
	return 1;
}

void func_477(var uParam0)
{
	StringCopy(&(uParam0->f_192), "", 128);
	func_571(uParam0);
	func_572(uParam0);
	func_573(uParam0);
}

void func_478(var uParam0)
{
	uParam0->f_11 = 0;
}

void func_479(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_448(&(uParam0->f_17[iVar0 /*12*/]), iParam1);
		iVar0++;
	}
}

void func_480(float fParam0)
{
	fParam0->f_1 = 0f;
	fParam0->f_2 = 0f;
	*fParam0 = 0;
}

void func_481(bool bParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_26573))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Global_26573);
		}
	}
	Global_26573 = -1;
	StringCopy(&Global_26575, "", 128);
	Global_13 = 0;
	if (bParam0)
	{
		func_450();
	}
	PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(0);
}

void func_482(int iParam0)
{
	func_574();
	Global_1913431.f_1 = MISC::GET_GAME_TIMER();
	Global_1913431.f_2 = iParam0;
}

void func_483()
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
}

void func_484(bool bParam0)
{
	if (bParam0)
	{
		Global_1951897.f_1381 = (Global_1951897.f_1381 - Global_1951897.f_1381 & 2);
	}
	else
	{
		Global_1951897.f_1381 |= 2;
	}
	func_575(bParam0);
}

int func_485(bool bParam0)
{
	struct<2> Var0;

	if (!func_546(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_486(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (!func_576(iParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_577(iParam1);
	return func_488(iParam0, iVar0, bParam2, bParam2, bParam4);
}

int func_487(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1953279.f_2844.f_1)
	{
		if (Global_1953279.f_2844.f_43[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_488(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!func_578(&iParam1, bParam4))
	{
	}
	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_568(2, iParam1, 0, 0, 0);
		}
		else
		{
			func_568(2, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	func_570(&(Global_1953279.f_1676), iParam0, 1, iParam1, 1, bParam3, 1, 1);
	return 1;
}

bool func_489(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_490(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.857556E-17f;
		case 1:
			return 3.870794E-14f;
		case 3:
			return 3.593E+36f;
		case 2:
			return 6.471694E-22f;
		case 4:
			return 2.567459E-34f;
		case 6:
			return -1632.017f;
		case 7:
			return 1.121634E+10f;
		case 8:
			return 1.122842E-19f;
		case 9:
			return -3.642267E-25f;
		case 10:
			return 1.701046E-36f;
		case 11:
			return 7.635339E-30f;
		case 12:
			return 2.298159E-23f;
		case 13:
			return 0.004527408f;
	}
	return 0;
}

void func_491(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_125(iParam0);
	}
	else
	{
		func_126(iParam0);
	}
}

void func_492(int iParam0)
{
	Global_1956862.f_1431.f_2 = 0f;
	Global_1956862.f_1431.f_1 = iParam0;
}

void func_493(float fParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	MISC::CLEAR_AREA(vVar1, fParam0, 65536);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(vVar1, fParam0);
}

bool func_494()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

void func_495(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
}

bool func_496(int iParam0)
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

void func_497(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_496(iParam0))
	{
		return;
	}
	iVar0 = func_579(iParam0);
	if (bParam1)
	{
		func_580(iParam0, 4);
		if (bParam3)
		{
			func_581(iVar0, 1);
		}
		func_582(iVar0, 1);
	}
	else
	{
		func_583(iParam0, 4);
		func_582(iVar0, 0);
	}
}

void func_498(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_496(iParam0))
	{
		return;
	}
	iVar0 = func_579(iParam0);
	func_581(iVar0, bParam1);
}

void func_499(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_496(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_579(*uParam0);
	if (Global_1951897[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_584(iVar0);
	*uParam0 = 0;
}

void func_500(int iParam0)
{
	if (Global_1102813.f_26.f_3342 == iParam0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Global_1102813.f_26.f_3342 = 0;
		return;
	}
	if (iParam0 == func_585(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1102813.f_26.f_3344))
		{
			iParam0 = Global_1102813.f_26.f_3344;
		}
	}
	Global_1102813.f_26.f_3342 = iParam0;
}

void func_501(int iParam0)
{
	Global_1102813.f_26.f_3 = iParam0;
}

void func_502(vector3 vParam0)
{
	float fVar0;
	vector3 vVar1;

	if (!Global_1940186.f_6)
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_33, vParam0) };
		fVar0 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar0, 1f);
		CAM::SET_FIRST_PERSON_AIM_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(-180f, 180f);
	}
}

void func_503(vector3 vParam0)
{
	vector3 vVar0;
	float fVar3;

	if (!Global_1940186.f_6)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_33, vParam0) };
		fVar3 = MISC::ATAN((vVar0.z / BUILTIN::SQRT(((vVar0.y * vVar0.y) + (vVar0.x * vVar0.x)))));
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar3, 1f);
	}
}

float func_504(float fParam0)
{
	if (fParam0 == 0f)
	{
		return -4.785479E-29f;
	}
	if (fParam0 >= 1f && fParam0 < 2f)
	{
		return -7.378385E+14f;
	}
	if (fParam0 >= 2f && fParam0 < 3f)
	{
		return NaNf;
	}
	if (fParam0 == 3f)
	{
		return -0.06645175f;
	}
	return -4.785479E-29f;
}

bool func_505(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) != 0;
}

void func_506(var uParam0)
{
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 24);
}

char* func_507(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			return "Arthur";
		case joaat("CS_ABE"):
			return "Abe";
		case joaat("CS_ABERDEENPIGFARMER"):
			return "ABERDEENPIGFARMER";
		case joaat("CS_ABERDEENSISTER"):
			return "ABERDEENSISTER";
		case joaat("CS_ABIGAILROBERTS"):
			return "AbigailRoberts";
		case joaat("CS_ALBERTMASON"):
			return "AlbertMason";
		case joaat("CS_ARCHIEDOWN"):
			return "ArchieDown";
		case joaat("CS_BAPTISTE"):
			return "Baptiste";
		case joaat("CS_BARTHOLOMEWBRAITHWAITE"):
			return "BartholomewBraithwaite";
		case joaat("CS_BEATENUPCAPTAIN"):
			return "CS_BEATENUPCAPTAIN";
		case joaat("CS_BEAUGRAY"):
			return "BeauGray";
		case joaat("CS_PENELOPEBRAITHWAITE"):
			return "PenelopeBraithwaite";
		case joaat("CS_BILLWILLIAMSON"):
			return "BillWilliamson";
		case joaat("CS_BRAITHWAITESERVANT"):
			return "BraithwaiteServant";
		case joaat("CS_CATHERINEBRAITHWAITE"):
			return "CatherineBraithwaite";
		case joaat("CS_CHARLESSMITH"):
			return "CharlesSmith";
		case joaat("CS_CIGCARDGUY"):
			return "CS_CIGCARDGUY";
		case joaat("CS_DINOBONESLADY"):
			return "CS_DINOBONESLADY";
		case joaat("CS_CLEET"):
			return "Cleet";
		case joaat("CS_COLMODRISCOLL"):
			return "ColmODriscoll";
		case joaat("CS_CREOLEGUY"):
			return "CreoleGuy";
		case joaat("CS_SDDOCTOR_01"):
			return "SDDoctor_01";
		case joaat("CS_DALEMARONEY"):
			return "DaleMaroney";
		case joaat("CS_DUTCH"):
			return "Dutch";
		case joaat("CS_EDITHDOWN"):
			return "EdithDown";
		case joaat("CS_FUSSAR"):
			return "Fussar";
		case joaat("CS_FISHCOLLECTOR"):
			return "cs_fishcollector";
		case joaat("CS_BRONTE"):
			return "Bronte";
		case joaat("CS_GUIDOMARTELLI"):
			return "GuidoMartelli";
		case joaat("U_M_M_NBXBRONTEGOON_01"):
			return "U_M_M_NBXBRONTEGOON_01";
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			return "G_M_M_UNIBRONTEGOONS_01";
		case joaat("CS_GARETHBRAITHWAITE"):
			return "GarethBraithwaite";
		case joaat("CS_GENSTORYFEMALE"):
			return "GenStoryFemale";
		case joaat("CS_GENSTORYMALE"):
			return "GenStoryMale";
		case joaat("CS_LEON"):
			return "Leon";
		case joaat("CS_GERALDBRAITHWAITE"):
			return "GeraldBraithwaite";
		case joaat("CS_HOSEAMATTHEWS"):
			return "HoseaMatthews";
		case joaat("CS_JACKMARSTON"):
			return "JackMarston";
		case joaat("CS_JACKMARSTON_TEEN"):
			return "JackMarston_Teen";
		case joaat("CS_JAMIE"):
			return "Jamie";
		case joaat("CS_JAVIERESCUELLA"):
			return "JavierEscuella";
		case joaat("CS_JIMCALLOWAY"):
			return "JimCalloway";
		case joaat("CS_JOE"):
			return "Joe";
		case joaat("CS_JOHNMARSTON"):
			return "JohnMarston";
		case joaat("CS_JOHNWEATHERS"):
			return "CS_JOHNWEATHERS";
		case joaat("CS_JOSIAHTRELAWNY"):
			return "JosiahTrelawny";
		case joaat("CS_KAREN"):
			return "Karen";
		case joaat("CS_MRSADLER"):
			return "MrsAdler";
		case joaat("CS_KIERAN"):
			return "Kieran";
		case joaat("CS_LEOSTRAUSS"):
			return "LeoStrauss";
		case joaat("CS_LONDONDERRYSON"):
			return "LondonderrySon";
		case joaat("CS_MARYBETH"):
			return "MaryBeth";
		case joaat("CS_MARYLINTON"):
			return "MaryLinton";
		case joaat("CS_MICAHBELL"):
			return "MicahBell";
		case joaat("CS_MOLLYOSHEA"):
			return "MollyOshea";
		case joaat("CS_MRLINTON"):
			return "CS_MrLinton";
		case joaat("CS_MRPEARSON"):
			return "MrPearson";
		case joaat("CS_MRSLONDONDERRY"):
			return "MrsLondonderry";
		case joaat("CS_MUD2BIGGUY"):
			return "Mud2BigGuy";
		case joaat("CS_PROFESSORBELL"):
			return "ProfessorBell";
		case joaat("CS_REVSWANSON"):
			return "RevSwanson";
		case joaat("CS_SAMARITAN"):
			return "CS_Samaritan";
		case joaat("CS_STRDEPUTY_01"):
			return "StrDeputy_01";
		case joaat("CS_STRDEPUTY_02"):
			return "StrDeputy_02";
		case joaat("CS_STRSHERIFF_01"):
		case joaat("U_M_M_STRSHERRIFF_01"):
			return "StrSheriff_01";
		case joaat("CS_SUSANGRIMSHAW"):
			return "SusanGrimshaw";
		case joaat("CS_TAVISHGRAY"):
			return "TavishGray";
		case joaat("CS_THEODORELEVIN"):
			return "TheodoreLevin";
		case joaat("CS_THOMASDOWN"):
			return "ThomasDown";
		case joaat("CS_TILLY"):
			return "Tilly";
		case joaat("CS_UNCLE"):
			return "Uncle";
		case joaat("G_M_M_UNICRIMINALS_01"):
			return "G_M_M_UniCriminals_01";
		case joaat("G_M_M_UNIDUSTER_01"):
			return "G_M_M_UNIDUSTER_01";
		case joaat("CS_VALSHERIFF"):
			return "CS_VALSHERIFF";
		case joaat("S_M_M_MARSHALLSRURAL_01"):
			return "S_M_M_MARSHALLSRURAL_01";
		case joaat("U_M_O_VHTEXOTICSHOPKEEPER_01"):
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
		case joaat("CS_SEAN"):
			return "Sean";
		case joaat("CS_LENNY"):
			return "Lenny";
		case joaat("CS_HERCULE"):
			return "Hercule";
		case joaat("CS_CREOLECAPTAIN"):
			return "CreoleCaptain";
		case joaat("U_M_M_CREOLECAPTAIN_01"):
			return "U_M_M_CREOLECAPTAIN_01";
		case joaat("CS_RINGMASTER"):
			return "RingMaster";
		case joaat("U_M_M_VALBARTENDER_01"):
			return "U_M_M_VALBARTENDER_01";
		case joaat("A_M_M_EMRFARMHAND_01"):
			return "A_M_M_EMRFARMHAND_01";
		case joaat("A_M_M_GRISURVIVALIST_01"):
			return "A_M_M_GriSurvivalist_01";
		case joaat("CS_LILLYMILLET"):
			return "LillyMillet";
		case joaat("A_F_M_STRTOWNFOLK_01"):
			return "A_F_M_STRTOWNFOLK_01";
		case joaat("A_M_M_STRTOWNFOLK_01"):
			return "A_M_M_STRTOWNFOLK_01";
		case joaat("S_M_M_STRLUMBERJACK_01"):
			return "S_M_M_STRLUMBERJACK_01";
		case joaat("G_M_M_UNICRIMINALS_02"):
			return "G_M_M_UniCriminals_02";
		case joaat("G_M_M_UNICORNWALLGOONS_01"):
			return "G_M_M_UNICORNWALLGOONS_01";
		case joaat("A_M_M_NBXUPPERCLASS_01"):
			return "A_M_M_NBXUPPERCLASS_01";
		case joaat("A_F_M_NBXUPPERCLASS_01"):
			return "A_F_M_NBXUPPERCLASS_01";
		case joaat("A_M_M_VALFARMER_01"):
			return "A_M_M_VALFARMER_01";
		case joaat("A_M_M_VALTOWNFOLK_01"):
			return "A_M_M_VALTOWNFOLK_01";
		case joaat("A_M_M_VALTOWNFOLK_02"):
			return "A_M_M_VALTOWNFOLK_02";
		case joaat("A_F_M_VALTOWNFOLK_01"):
			return "A_F_M_VALTOWNFOLK_01";
		case joaat("U_M_M_NBXBARTENDER_01"):
			return "U_M_M_NBXBARTENDER_01";
		case joaat("CS_NBXEXECUTED"):
			return "NBXExecuted";
		case joaat("CS_RHODEPUTY_01"):
			return "RHODEPUTY_01";
		case joaat("U_M_M_RHDSHERIFF_01"):
			return "RHDSHERIFF_01";
		case joaat("CS_LEIGHGRAY"):
			return "LeighGray";
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return "Horse_01";
		case joaat("U_M_M_STRGENSTOREOWNER_01"):
			return "U_M_M_StrGenStoreOwner_01";
		case joaat("CS_TOMDICKENS"):
			return "TomDickens";
		case joaat("CS_DAVIDGEDDES"):
			return "DavidGeddes";
		case joaat("CS_ANSEL_ATHERTON"):
			return "ANSEL_ATHERTON";
		case joaat("CS_WROBEL"):
			return "CS_Wrobel";
		case joaat("A_C_COW"):
			return "COW";
		case joaat("A_C_BULL_01"):
			return "BULL";
		case joaat("CS_ALBERTCAKEESQUIRE"):
			return "ALBERTCAKEESQUIRE";
		case joaat("U_M_O_BLWGENERALSTOREOWNER_01"):
			return "U_M_O_BLWGENERALSTOREOWNER_01";
		case joaat("A_C_DOGCATAHOULACUR_01"):
			return "A_C_DOGCATAHOULACUR_01";
		case joaat("A_C_DOGRUFUS_01"):
			return "A_C_DOGRUFUS_01";
		case joaat("A_C_DOGLION_01"):
			return "A_C_DOGLION_01";
		case joaat("CS_TIGERHANDLER"):
			return "Handler";
		case joaat("CS_VALAUCTIONBOSS_01"):
			return "VALAUCTIONBOSS_01";
		case joaat("CS_NBXRECEPTIONIST_01"):
			return "NbxReceptionist_01";
		case joaat("U_M_M_BIVFOREMAN_01"):
			return "U_M_M_BiVForeman_01";
		case joaat("U_M_M_RACFOREMAN_01"):
			return "U_M_M_RACFOREMAN_01";
		case joaat("CS_CHAINPRISONER_01"):
			return "CHAINPRISONER_01";
		case joaat("CS_CHAINPRISONER_02"):
			return "CHAINPRISONER_02";
		case joaat("U_M_M_VALPOKERPLAYER_01"):
			return "U_M_M_ValPokerPlayer_01";
		case joaat("U_M_M_VALPOKERPLAYER_02"):
			return "U_M_M_ValPokerPlayer_02";
		case joaat("CS_DUNCANGEDDES"):
			return "DUNCANGEDDES";
		case joaat("CS_ANGUSGEDDES"):
			return "ANGUSGEDDES";
		case joaat("CS_EVELYNMILLER"):
			return "EvelynMiller";
		case joaat("CS_SISTERCALDERON"):
			return "SISTERCALDERON";
		case joaat("CS_EDGARROSS"):
			return "EDGARROSS";
		case joaat("CS_WINTONHOLMES"):
			return "U_M_M_GriSurvivalist_01";
		case joaat("U_F_M_RKSHOMESTEADTENANT_01"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case joaat("CS_ROCKYSEVEN_WIDOW"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case joaat("U_M_M_BHT_STRAWBERRYDUEL"):
			return "U_M_M_BHT_STRAWBERRYDUEL";
		case joaat("U_M_M_RHDTRAINSTATIONWORKER_01"):
			return "StationWorker";
		case joaat("CS_LEVISIMON"):
			return "LEVISIMON";
		case joaat("S_M_M_FUSSARHENCHMAN_01"):
			return "S_M_M_GULFUSSARS_01";
		case joaat("A_C_DONKEY_01"):
			return "A_C_DONKEY_01";
		case joaat("A_M_M_GUATOWNFOLK_01"):
			return "S_M_M_ISPWORKER_01";
		case joaat("A_M_O_GUATOWNFOLK_01"):
			return "S_M_M_ISPWORKER_02";
		case joaat("U_M_O_VALBARTENDER_01"):
			return "U_M_O_ValBartender_01";
		case joaat("U_M_M_NBXBARTENDER_02"):
			return "U_M_M_NBXBARTENDER_02";
		case joaat("CS_UNIDUSTERJAIL_01"):
			return "CS_UNIDUSTERJAIL_01";
		case joaat("A_M_M_RHDTOWNFOLK_01"):
			return "A_M_M_RHDTOWNFOLK_01";
		case joaat("U_M_M_UNIBOUNTYHUNTER_01"):
			return "U_M_M_UNIBOUNTYHUNTER_01";
		case joaat("U_M_M_UNIBOUNTYHUNTER_02"):
			return "U_M_M_UNIBOUNTYHUNTER_02";
		case joaat("CS_BROTHERDORKINS"):
			return "BrotherDorkins";
		case joaat("G_M_M_UNIBRAITHWAITES_01"):
			return "G_M_M_UniBraithwaites_01";
		case joaat("A_M_M_GAMHIGHSOCIETY_01"):
			return "A_M_M_GAMHIGHSOCIETY_01";
		case joaat("U_M_M_STRFREIGHTSTATIONOWNER_01"):
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
		case joaat("CS_EAGLEFLIES"):
			return "EagleFlies";
		case joaat("CS_RAINSFALL"):
			return "CS_RAINSFALL";
		case joaat("A_M_M_WAPWARRIORS_01"):
			return "A_M_M_WapWarriors_01";
		case joaat("A_M_Y_NBXSTREETKIDS_01"):
			return "A_M_Y_NBXSTREETKIDS_01";
		case joaat("U_M_M_BHT_SHACKESCAPE"):
			return "U_M_M_BHT_SHACKESCAPE";
		case joaat("A_M_M_HTLROUGHTRAVELLERS_01"):
			return "A_M_M_HTLROUGHTRAVELLERS_01";
		case joaat("CS_LEMIUXASSISTANT"):
			return "LemiuxAssistant";
		case joaat("P_KEYS01X"):
			return "p_keys01x";
		case joaat("CS_BALLOONOPERATOR"):
			return "CS_BALLOONOPERATOR";
		case joaat("A_M_M_BIVWORKER_01"):
			return "Worker1";
		case joaat("U_M_M_BHT_MINEFOREMAN"):
			return "U_M_M_BHT_MINEFOREMAN";
		case joaat("A_M_M_NBXSLUMS_01"):
			return "A_M_M_NbxSlums_01";
		case joaat("CS_SDPRIEST"):
			return "U_M_M_NBXPRIEST_01";
		case joaat("A_C_BEAR_01"):
			return "A_C_BEAR_01";
		case joaat("CS_MARSHALL_THURWELL"):
			return "MARSHALL_THURWELL";
		case joaat("CS_FAMOUSGUNSLINGER_02"):
			return "CS_FAMOUSGUNSLINGER_02";
		case joaat("CS_SD_STREETKID_01"):
			return "cs_sd_streetkid_01";
		case joaat("CS_SD_STREETKID_02"):
			return "cs_sd_streetkid_02";
		case joaat("CS_OBEDIAHHINTON"):
			return "ObediahHinton";
		case joaat("CS_POISONWELLSHAMAN"):
			return "PoisonWellShaman";
		case joaat("CS_COOPER"):
			return "A_M_M_EMRFARMHAND_01";
		case joaat("U_M_M_BHT_BENEDICTALLBRIGHT"):
			return "u_m_m_bht_benedictallbright";
		case joaat("CS_JULES"):
			return "Jules";
		case joaat("CS_MRDEVON"):
			return "MRDEVON";
		case joaat("CS_MRWAYNE"):
			return "MRWAYNE";
		case joaat("CS_PAYTAH"):
			return "PAYTAH";
		case joaat("CS_VALDEPUTY_01"):
			return "CS_VALDEPUTY_01";
		case joaat("MES_SADIE5_MALES_01"):
			return "MES_SADIE5_MALES_01^1";
		case joaat("A_M_M_NBXDOCKWORKERS_01"):
			return "A_M_M_NBXDOCKWORKERS_01";
		case joaat("U_M_M_VALSHERIFF_01"):
			return "U_M_M_VALSHERIFF_01";
		case joaat("P_C_HORSE_01"):
			return "P_C_HORSE_01";
	}
	return "";
}

bool func_508(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_509(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_A_PLAYER(iVar0))
		{
			return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		}
	}
	return 255;
}

void func_510(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	float fVar6;

	iVar5 = PED::_GET_META_PED_TYPE(iParam0);
	fVar6 = 3.272964E+34f;
	if (iVar5 == 1)
	{
		fVar6 = 4.387347E-38f;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1953279.f_1795.f_1[iVar0 /*3*/] = { vVar2 };
		iVar0++;
	}
	if (!func_586(&(Global_1953279.f_1795), &uVar1, bParam1, -1, 0, 0, fVar6, 0, 8))
	{
		return;
	}
	func_587(iParam0, &(Global_1953279.f_1795));
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1953279.f_1795.f_1[iVar0 /*3*/] == Global_1953279.f_83[iVar0 /*12*/] || Global_1953279.f_1795.f_1[iVar0 /*3*/] == 0)
		{
		}
		else
		{
			func_588(Global_1953279.f_1795.f_1[iVar0 /*3*/], iVar5);
		}
		iVar0++;
	}
}

int func_511(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;

	iVar1 = PED::_GET_META_PED_TYPE(iParam0);
	fVar2 = 3.272964E+34f;
	if (iVar1 == 1)
	{
		fVar2 = 4.387347E-38f;
	}
	iVar3 = 0;
	while (iVar3 < 39)
	{
		Global_1953279.f_2033.f_1[iVar3 /*3*/] = { vVar4 };
		iVar3++;
	}
	if (!func_586(&(Global_1953279.f_2033), &uVar0, bParam1, -1, 0, 0, fVar2, 0, 8))
	{
		return 0;
	}
	func_587(iParam0, &(Global_1953279.f_2033));
	iVar3 = 0;
	while (iVar3 < 39)
	{
		if (!func_589(iVar3, 8))
		{
		}
		else
		{
			func_590(iParam0, iVar3, 1);
		}
		iVar3++;
	}
	func_570(&(Global_1953279.f_2033), iParam0, 1, 8, 1, 0, 1, 0);
	return 1;
}

bool func_512()
{
	int iVar0;

	if (Global_1953279.f_3036 <= 0)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Global_1953279.f_3036)
	{
		if (!PED::_HAS_META_PED_ASSET_LOADED(Global_1953279.f_3036.f_1[iVar0 /*2*/].f_1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_513(bool bParam0)
{
	var uVar0;

	if (!func_591(32))
	{
		func_592(&(Global_1953279.f_2366));
		func_593(32);
	}
	if (bParam0->f_1 == 0)
	{
		if (!func_594(*bParam0))
		{
			if (func_591(32))
			{
				func_595(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1);
			}
			return 0;
		}
		func_596(&(Global_1953279.f_2366));
		if (!func_597(&(Global_1953279.f_1557), *bParam0, &uVar0, 0, 1, 0, 0, 0, 0, 8))
		{
			if (func_591(32))
			{
				func_595(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1);
			}
			return 0;
		}
		func_598(&(Global_1953279.f_1557));
	}
	func_568(33, Global_1149417.f_4787.f_4, 0, 0, 0);
	Global_1149417.f_4787.f_4 = *bParam0;
	Global_1149417.f_4787 = bParam0->f_1;
	func_568(30, 0, 0, 0, 0);
	func_568(27, 0, 0, 0, 0);
	func_568(32, Global_1149417.f_4787.f_4, 0, 0, 0);
	return 1;
}

int func_514(int* iParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sParam1))
	{
		return 2;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_1485.f_208))
	{
		return 0;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(iParam0->f_1485.f_208, false))
	{
		return 0;
	}
	if (!ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(iParam0->f_1485.f_208, sParam1))
	{
		return 2;
	}
	return 1;
}

bool func_515(int* iParam0, int iParam1, bool bParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	iVar0 = ENTITY::GET_ENTITY_TYPE(iParam1);
	switch (iVar0)
	{
		case 1:
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (PED::IS_PED_A_PLAYER(iVar2))
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (bParam2)
					{
						iVar3 = iParam0->f_14[iVar1 /*21*/].f_1.f_2;
					}
					else
					{
						iVar3 = iParam0->f_14[iVar1 /*21*/].f_1.f_1;
					}
					if (iParam1 != iVar3)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 0.0003061561f;
						return true;
					}
					iVar1++;
				}
			}
			else if (ENTITY::GET_IS_ANIMAL(iVar2))
			{
				iVar1 = 0;
				while (iVar1 < 20)
				{
					if (bParam2)
					{
						iVar4 = iParam0->f_500[iVar1 /*13*/].f_2;
					}
					else
					{
						iVar4 = iParam0->f_500[iVar1 /*13*/].f_1;
					}
					if (iParam1 != iVar4)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = -3.004006E-27f;
						return true;
					}
					iVar1++;
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 20)
				{
					if (bParam2)
					{
						iVar5 = iParam0->f_99[iVar1 /*20*/].f_2;
					}
					else
					{
						iVar5 = iParam0->f_99[iVar1 /*20*/].f_1;
					}
					if (iParam1 != iVar5)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 1.502638E+20f;
						return true;
					}
					iVar1++;
				}
			}
			break;
		case 2:
			iVar6 = ENTITY::GET_ENTITY_MODEL(iParam1);
			if (VEHICLE::IS_THIS_MODEL_A_TRAIN(iVar6))
			{
				iVar1 = 0;
				while (iVar1 < 1)
				{
					if (bParam2)
					{
						iVar7 = iParam0->f_1089[iVar1 /*14*/].f_2;
					}
					else
					{
						iVar7 = iParam0->f_1089[iVar1 /*14*/].f_1;
					}
					if (iParam1 != iVar7)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 3.161728E-22f;
						return true;
					}
					iVar1++;
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 10)
				{
					if (bParam2)
					{
						iVar8 = iParam0->f_761[iVar1 /*13*/].f_2;
					}
					else
					{
						iVar8 = iParam0->f_761[iVar1 /*13*/].f_1;
					}
					if (iParam1 != iVar8)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 349.853f;
						return true;
					}
					iVar1++;
				}
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (bParam2)
		{
			iVar9 = iParam0->f_1104[iVar1 /*15*/].f_2;
		}
		else
		{
			iVar9 = iParam0->f_1104[iVar1 /*15*/].f_1;
		}
		if (iParam1 != iVar9)
		{
		}
		else
		{
			*iParam3 = iVar1;
			*uParam4 = 0;
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_516(int iParam0, int* iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (iParam1->f_1465 == -1)
	{
		return -1;
	}
	if (iParam1->f_1465 >= 24)
	{
		iParam1->f_1465 = -1;
	}
	iVar0 = iParam1->f_1465;
	iParam1->f_1465++;
	iVar1 = ENTITY::GET_ENTITY_TYPE(iParam0);
	iParam1->f_1104[iVar0 /*15*/].f_1 = iParam0;
	iParam1->f_1104[iVar0 /*15*/].f_13 = iParam2;
	iParam1->f_1104[iVar0 /*15*/].f_14 = iParam3;
	return iVar0;
}

Vector3 func_517(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar3, &vVar6);
	fVar9 = MISC::ABSF(((vVar6.z - vVar3.z) * 1056964608));
	vVar0.f_2 = (vVar0.z - fVar9);
	return vVar0;
}

void func_518(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_599(iParam0, iParam1);
	iVar1 = 0;
	while (iVar1 <= (29 - 1))
	{
		iVar2 = ((29 - 1) - iVar1);
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, false, iVar2, false))
		{
			if (iVar0 != -3.273909E-18f)
			{
				if (iVar2 == 1)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 116, true);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iParam1, iVar0, true, iVar2, false, false);
			}
		}
		iVar1++;
	}
}

bool func_519(int iParam0, int iParam1, int* iParam2)
{
	bool bVar0;

	if (!PED::IS_PED_READY_TO_RENDER(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_READY_TO_RENDER(iParam1))
	{
		if (!func_90(*iParam2, 5))
		{
			PED::REMOVE_TAG_FROM_META_PED(iParam1, -5.426139E-06f, 1);
			bVar0 = true;
			func_27(iParam2, 5);
		}
		if (bVar0)
		{
			PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, false);
			return false;
		}
		return true;
	}
	return false;
}

bool func_520(int iParam0)
{
	return ((PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) || PED::IS_PED_ON_MOUNT(iParam0)) || (!PED::IS_PED_RAGDOLL(iParam0) && PED::IS_PED_ON_VEHICLE(iParam0, false)));
}

bool func_521(int* iParam0, int iParam1, int iParam2, var uParam3)
{
	if (iParam1 < 0)
	{
		return false;
	}
	switch (iParam2)
	{
		case 966820754:
			if (iParam1 >= 4)
			{
				return false;
			}
			*uParam3 = { iParam0->f_14[iParam1 /*21*/].f_1 };
			return true;
		case 1627542854:
			if (iParam1 >= 20)
			{
				return false;
			}
			*uParam3 = { iParam0->f_99[iParam1 /*20*/] };
			return true;
		case -1821507459:
			if (iParam1 >= 20)
			{
				return false;
			}
			*uParam3 = { iParam0->f_500[iParam1 /*13*/] };
			return true;
		case 465509728:
			if (iParam1 >= 1)
			{
				return false;
			}
			*uParam3 = { iParam0->f_1089[iParam1 /*14*/] };
			return true;
		case 1135537454:
			if (iParam1 >= 10)
			{
				return false;
			}
			*uParam3 = { iParam0->f_761[iParam1 /*13*/] };
			return true;
		case 422112462:
			if (iParam1 >= 10)
			{
				return false;
			}
			*uParam3 = { iParam0->f_892[iParam1 /*13*/] };
			return true;
		case -230450704:
			if (iParam1 >= 5)
			{
				return false;
			}
			*uParam3 = { iParam0->f_1023[iParam1 /*13*/] };
			return true;
		case 0:
			if (iParam1 >= 24)
			{
				return false;
			}
			*uParam3 = { iParam0->f_1104[iParam1 /*15*/] };
			return true;
		default:
			break;
	}
	return false;
}

bool func_522(int* iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam1 < 0)
	{
		return false;
	}
	switch (iParam2)
	{
		case 0:
			if (iParam1 >= 24)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_1104[iParam1 /*15*/].f_2;
			}
			else
			{
				*iParam4 = iParam0->f_1104[iParam1 /*15*/].f_1;
			}
			break;
		case 966820754:
			if (iParam1 >= 4)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_14[iParam1 /*21*/].f_1.f_2;
			}
			else
			{
				*iParam4 = iParam0->f_14[iParam1 /*21*/].f_1.f_1;
			}
			break;
		case 1627542854:
			if (iParam1 >= 20)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_99[iParam1 /*20*/].f_2;
			}
			else
			{
				*iParam4 = iParam0->f_99[iParam1 /*20*/].f_1;
			}
			break;
		case -1821507459:
			if (iParam1 >= 20)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_500[iParam1 /*13*/].f_2;
			}
			else
			{
				*iParam4 = iParam0->f_500[iParam1 /*13*/].f_1;
			}
			break;
		case 1135537454:
			if (iParam1 >= 10)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_761[iParam1 /*13*/].f_2;
			}
			else
			{
				*iParam4 = iParam0->f_761[iParam1 /*13*/].f_1;
			}
			break;
		case 422112462:
			if (iParam1 >= 10)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_892[iParam1 /*13*/].f_2;
			}
			else
			{
				*iParam4 = iParam0->f_892[iParam1 /*13*/].f_1;
			}
			break;
		case -230450704:
			if (iParam1 >= 5)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_1023[iParam1 /*13*/].f_2;
			}
			else
			{
				*iParam4 = iParam0->f_1023[iParam1 /*13*/].f_1;
			}
			break;
		case 465509728:
			if (iParam1 >= 1)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_1089[iParam1 /*14*/].f_2;
			}
			else
			{
				*iParam4 = iParam0->f_1089[iParam1 /*14*/].f_1;
			}
			break;
	}
	return ENTITY::DOES_ENTITY_EXIST(*iParam4);
}

float func_523(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

struct<4> func_524()
{
	struct<4> Var0;

	return Var0;
}

bool func_525(int iParam0, var uParam1)
{
	bool bVar0;

	if (!PED::IS_PED_READY_TO_RENDER(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_READY_TO_RENDER(iParam0))
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam0, -3.269715E-30f, 0);
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
		if (PED::_IS_META_PED_USING_COMPONENT(iParam0, 3.736618E-28f))
		{
			PED::REMOVE_TAG_FROM_META_PED(iParam0, 3.736618E-28f, 1);
			bVar0 = true;
		}
		if (PED::_IS_META_PED_USING_COMPONENT(iParam0, 3.85503E+37f))
		{
			PED::REMOVE_TAG_FROM_META_PED(iParam0, 3.85503E+37f, 1);
			bVar0 = true;
		}
		if (func_90(uParam1->f_6, 2))
		{
			if (PED::_IS_META_PED_USING_COMPONENT(iParam0, 1.697823E+32f))
			{
				PED::REMOVE_TAG_FROM_META_PED(iParam0, 1.697823E+32f, 1);
				bVar0 = true;
			}
		}
		if (func_90(uParam1->f_6, 3))
		{
			if (PED::_IS_META_PED_USING_COMPONENT(iParam0, -8.569155E-24f))
			{
				PED::REMOVE_TAG_FROM_META_PED(iParam0, -8.569155E-24f, 1);
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
			return false;
		}
		return true;
	}
	return false;
}

void func_526(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		ENTITY::SET_ENTITY_HEALTH(iParam0, iParam1, 0);
	}
}

int func_527(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 1;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0->f_1);
	if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(iVar0))
	{
		return 1;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_1);
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		bVar5 = VEHICLE::_GET_TRAIN_DIRECTION(iVar1);
		iVar6 = VEHICLE::_CREATE_MISSION_TRAIN(iParam1, vVar2, bVar5, false, false, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			return 1;
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iVar6, true);
		func_428(iVar6, 1);
		uParam0->f_2 = iVar6;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		iVar7 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_2);
		iVar8 = VEHICLE::_GET_NUM_CARS_FROM_TRAIN_CONFIG(iParam1);
		iVar9 = 0;
		while (iVar9 < iVar8)
		{
			iVar10 = VEHICLE::GET_TRAIN_CARRIAGE(iVar7, iVar9);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar10))
			{
			}
			else if (!ENTITY::IS_ENTITY_VISIBLE(iVar10))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iVar10, true);
				func_428(iVar10, 1);
			}
			iVar9++;
		}
		if (VEHICLE::_HAS_TRAIN_LOADED(iVar7))
		{
			return 1;
		}
	}
	return 0;
}

int func_528(var uParam0, int iParam1)
{
	struct<6> Var0;
	int iVar13;
	vector3 vVar14;
	float fVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	var uVar23;
	int iVar24;
	int iVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;

	Var0.f_5 = -1f;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 1;
	}
	iVar13 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_1);
	vVar14 = { ENTITY::GET_ENTITY_COORDS(iVar13, true, false) };
	vVar14.f_1 = (vVar14.y + 1120403456);
	fVar17 = ENTITY::GET_ENTITY_HEADING(iVar13);
	if (VEHICLE::IS_DRAFT_VEHICLE(iVar13) && !VEHICLE::GET_DRAFT_ANIMAL_COUNT(iVar13, &iVar18, &iVar19))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		iVar20 = ENTITY::GET_ENTITY_MODEL(iVar13);
		iVar21 = VEHICLE::CREATE_VEHICLE(iVar20, vVar14, fVar17, false, false, false, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar21))
		{
			return 1;
		}
		ENTITY::SET_ENTITY_COORDS(iVar21, vVar14, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iVar21, fVar17);
		ENTITY::SET_ENTITY_INVINCIBLE(iVar21, true);
		VEHICLE::_SET_VEHICLE_TINT(iVar21, VEHICLE::_GET_VEHICLE_TINT(iVar13));
		VEHICLE::COPY_VEHICLE_DAMAGES(iVar13, iVar21);
		func_208(iParam1, *uParam0, 349.853f, &uVar22, &uVar23, &iVar24);
		if (iVar24 != 0)
		{
			PROPSET::_ADD_PROP_SET_FOR_VEHICLE(iVar21, iVar24);
		}
		func_428(iVar21, 1);
		uParam0->f_2 = iVar21;
	}
	if (!VEHICLE::IS_DRAFT_VEHICLE(iVar13))
	{
		return 1;
	}
	else if (!func_90(uParam0->f_4, 2))
	{
		iVar25 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_2);
		bVar26 = true;
		if (!VEHICLE::GET_DRAFT_ANIMAL_COUNT(iVar25, &iVar18, &iVar19))
		{
			bVar26 = false;
		}
		else if (iVar19 < iVar18)
		{
			bVar26 = false;
		}
		iVar27 = 0;
		while (iVar27 < 6)
		{
			iVar28 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar25, iVar27);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar28))
			{
			}
			else
			{
				if (ENTITY::IS_ENTITY_VISIBLE(iVar28))
				{
					func_428(iVar28, 1);
					ENTITY::SET_ENTITY_INVINCIBLE(iVar28, true);
				}
				iVar29 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar13, iVar27);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar29) || PED::IS_PED_INJURED(iVar29))
				{
				}
				else if (!PED::IS_PED_READY_TO_RENDER(iVar29))
				{
					bVar26 = false;
				}
				else if (!PED::IS_PED_READY_TO_RENDER(iVar28))
				{
					bVar26 = false;
				}
				else
				{
					iVar30 = (18 + iVar27);
					if (!MISC::IS_BIT_SET(uParam0->f_4, iVar30))
					{
						PED::CLONE_PED_TO_TARGET(iVar29, iVar28);
						MISC::SET_BIT(&(uParam0->f_4), iVar30);
					}
					if (!func_525(iVar28, &Var0))
					{
						bVar26 = false;
					}
				}
			}
			iVar27++;
		}
		if (bVar26)
		{
			iVar27 = 0;
			while (iVar27 < 6)
			{
				iVar31 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar25, iVar27);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar31))
				{
				}
				else
				{
					iVar32 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar13, iVar27);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar32) || PED::IS_PED_INJURED(iVar32))
					{
						func_600(&iVar31);
					}
				}
				iVar27++;
			}
			func_27(&(uParam0->f_4), 2);
			return 1;
		}
	}
	return 0;
}

int func_529(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 1;
	}
	iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_1);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar1.f_1 = (vVar1.y + 1120403456);
	fVar4 = ENTITY::GET_ENTITY_HEADING(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		iVar5 = ENTITY::GET_ENTITY_MODEL(uParam0->f_1);
		iVar6 = OBJECT::CREATE_OBJECT(iVar5, vVar1, false, false, true, false, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			return 1;
		}
		ENTITY::SET_ENTITY_COORDS(iVar6, vVar1, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iVar6, fVar4);
		ENTITY::SET_ENTITY_INVINCIBLE(iVar6, true);
		func_428(iVar6, 1);
		uParam0->f_2 = iVar6;
	}
	return 1;
}

void func_530(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_SET_PED_TO_DISABLE_RAGDOLL(iVar1, true);
		}
	}
	if (iParam0 == func_585(Global_33) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_346(iParam0))
	{
		if (func_601(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_UNHITCH_HORSE(iParam0);
		}
	}
	if (func_602(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_530(iVar0, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_530(iVar2, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
	}
	if (!func_602(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (func_602(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_602(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_602(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iParam0, false);
		}
	}
	else if (func_602(iParam5, 129))
	{
		if (func_602(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iParam0, vParam1, fParam4, func_602(iParam5, 32), true);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_602(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_602(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (func_346(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_UNHITCH_HORSE(iVar6);
			if (!func_602(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), true);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_33 && !func_602(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

bool func_531()
{
	return (Global_1915643.f_20637 || Global_1915643.f_22504.f_1);
}

char* func_532(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_603(iVar0);
}

char* func_533(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("CANOE"):
			return "CANOE";
		case joaat("WAGON02X"):
			return "WAGON02X";
		case joaat("WAGON04X"):
			return "WAGON04X";
		case joaat("WAGON05X"):
			return "WAGON05X";
		case joaat("CHUCKWAGON000X"):
			return "CHUCKWAGON000X";
		case joaat("WAGONCIRCUS02X"):
			return "WAGONCIRCUS02X";
		case joaat("COACH2"):
			return "COACH2";
		case joaat("PRIVATECOALCAR01X"):
			return "PRIVATECOALCAR01X";
		case joaat("NORTHPASSENGER01X"):
			return "NORTHPASSENGER01X";
		case joaat("PRIVATESTEAMER01X"):
			return "PRIVATESTEAMER01X";
		case joaat("PRIVATEDINING01X"):
			return "PRIVATEDINING01X";
		case joaat("UTILLIWAG"):
			return "UTILLIWAG";
		case joaat("SKIFF"):
			return "SKIFF";
		case joaat("HANDCART"):
			return "HANDCART";
		case joaat("ROWBOATSWAMP"):
			return "ROWBOATSWAMP";
		case joaat("ROWBOATSWAMP02"):
			return "ROWBOATSWAMP02";
	}
	return "";
}

bool func_534(int iParam0)
{
	return iParam0 != 0;
}

bool func_535(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

int func_536(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, bool bParam9, int iParam10, int iParam11, bool bParam12)
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
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_535(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_604(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, fParam6, fParam7, fParam8, bParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_537(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_496(iParam0))
	{
		return;
	}
	iVar0 = func_579(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TYPE(Global_1951897[iVar0 /*23*/].f_3, iParam1);
}

float func_538(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_496(iParam0))
	{
		return 0f;
	}
	iVar0 = func_579(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951897[iVar0 /*23*/].f_3))
	{
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1951897[iVar0 /*23*/].f_3);
	}
	return HUD::_UI_PROMPT_GET_PROGRESS(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_539(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_496(iParam0))
	{
		return false;
	}
	iVar0 = func_579(iParam0);
	if (HUD::_UI_PROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1951897[iVar0 /*23*/].f_3))
	{
		if (Global_1951897[iVar0 /*23*/].f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::GET_SYSTEM_TIME();
		}
		fVar2 = HUD::_UI_PROMPT_GET_PROGRESS(Global_1951897[iVar0 /*23*/].f_3);
		if (!HUD::_UI_PROMPT_IS_ACTIVE(Global_1951897[iVar0 /*23*/].f_3))
		{
			iVar3 = (iVar1 - Global_1951897[iVar0 /*23*/].f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(Global_1951897[iVar0 /*23*/].f_18) * (1f - Global_1951897[iVar0 /*23*/].f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			Global_1951897[iVar0 /*23*/].f_21 = iVar1;
			Global_1951897[iVar0 /*23*/].f_22 = fVar2;
		}
	}
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951897[iVar0 /*23*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1951897[iVar0 /*23*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_540(var uParam0)
{
	struct<8> Var0;
	struct<8> Var8;

	Var0 = { func_267(uParam0) };
	Var8 = { func_327(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(&Var0, &Var8);
}

bool func_541(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939421.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1939421[iVar0 /*16*/].f_10)))
		{
			func_605(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_542(var uParam0, char* sParam1)
{
	struct<8> Var0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	Var0 = { func_267(uParam0) };
	if ((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam1) && ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uParam0->f_208, sParam1)) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_208, sParam1))
	{
		ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(uParam0->f_208, sParam1);
	}
}

void func_543(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 || iParam1);
}

void func_544(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 - (*fParam0 && iParam1));
}

bool func_545(bool bParam0)
{
	if (-1.527139E-27f == func_606(5.002459E-36f))
	{
		if (func_607(bParam0))
		{
			return true;
		}
	}
	else if (func_608(-9.847085E+19f, bParam0) || func_610(func_609(2.057189E+24f), -1.186825E-08f))
	{
		if (func_607(bParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_546(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_547(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_611(iParam0, iParam1, bParam2, bParam3);
}

void func_548(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(iVar0);
	}
	iVar1 = func_612(2);
	func_613(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_549(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_614(2);
	func_615(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_550(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &iVar3, false, iVar4, true))
		{
			if (func_565(iVar3) && WEAPON::IS_WEAPON_A_GUN(iVar3))
			{
				if (bParam0)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, iVar3) < WEAPON::GET_WEAPON_CLIP_SIZE(iVar3) * 4)
					{
						WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iVar3), (WEAPON::GET_WEAPON_CLIP_SIZE(iVar3) * 4 - WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_33, iVar3))), 6.028273E-12f);
					}
				}
				iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, iVar3);
				if (iVar0 > WEAPON::GET_WEAPON_CLIP_SIZE(iVar3))
				{
					iVar1 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					WEAPON::SET_AMMO_IN_CLIP(Global_33, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
}

void func_551()
{
	int iVar0;

	iVar0 = func_564(Global_33, 9, 1, 0);
	if (func_565(iVar0))
	{
		return;
	}
	iVar0 = func_564(Global_33, 7, 1, 0);
	if (func_565(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, iVar0, true, 8, false, false);
	}
	iVar0 = func_564(Global_33, 0, 1, 0);
	if (func_565(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_564(Global_33, 1, 1, 0);
	if (func_565(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_564(Global_33, 18, 1, 0);
	if (func_565(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_616();
	if (func_565(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, iVar0, 0, true))
		{
			func_617(Global_33, iVar0, 1, 0, 9, 0, 0, 0.5f, 1f, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_618(3072, 0);
	if (func_565(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, iVar0, 0, true))
		{
			func_617(Global_33, iVar0, 1, 0, 9, 0, 0, 0.5f, 1f, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, iVar0, true, 9, false, false);
		}
	}
}

int func_552()
{
	return Global_1902883.f_379;
}

int func_553(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_412(*uParam0, 0f, 0f, 0f))
	{
		return 1;
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
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_554(int iParam0)
{
	Global_38.f_289.f_3222.f_1 = iParam0;
}

void func_555(int iParam0)
{
	Global_38.f_289.f_3222 = iParam0;
}

void func_556(vector3 vParam0)
{
	Global_38.f_289.f_3222.f_19 = { vParam0 };
}

var func_557()
{
	return Global_1902565;
}

void func_558(var uParam0)
{
	Global_38.f_289.f_3222.f_2 = uParam0;
}

bool func_559()
{
	return (func_619() || func_620());
}

void func_560(bool bParam0)
{
	if (bParam0)
	{
		Global_1940013.f_9 = 0f;
	}
	Global_1940013.f_8 = 0f;
	Global_1940013.f_15.f_1 = 0f;
	Global_1940013.f_15 = 0f;
	Global_1940013.f_15.f_9 = 0f;
	Global_1940013.f_15.f_8 = 0f;
	Global_1940013.f_15.f_10 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		PED::_SET_PED_MOTIVATION(Global_33, 10, 0f, 0);
		AUDIO::SET_PED_IS_DRUNK(Global_33, false);
		PED::_SET_PED_DRUNKNESS(Global_33, false, 0f);
	}
	func_621(0f);
	if (ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		PED::SET_PED_CONFIG_FLAG(Global_33, 26, false);
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_622();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

Vector3 func_561(var uParam0)
{
	return uParam0->f_268;
}

float func_562(var uParam0)
{
	return uParam0->f_271;
}

float func_563(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -1028390912; /* Float: -90f */
	}
	else
	{
		fVar0 = 1119092736; /* Float: 90f */
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 1135869952);
		}
	}
	return fVar0;
}

int func_564(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_565(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != -3.273909E-18f);
}

bool func_566(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0 /*12*/]) && uParam0->f_17[iVar0 /*12*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_567(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -1.003831E+26f)
	{
		Var0 = { func_623(bParam1, 1, 0) };
		iParam3 = func_624(Var0.f_4);
		if (iParam3 == -1.003831E+26f)
		{
			return 0;
		}
	}
	if (!func_626(bParam1, iParam2, func_625(iParam3, 1), bParam4, 1, 0, 1))
	{
		return 0;
	}
	func_627(1, bParam5, bParam9, 1, bParam11);
	if (bParam10)
	{
		if (func_628(bParam1, 0))
		{
			func_629(Global_1953279.f_1676.f_1[func_625(iParam3, 1) /*3*/], 0, 0);
		}
		else
		{
			func_629(bParam1, 1, 0);
		}
	}
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && bParam1 != Global_1953279.f_83[func_625(iParam3, 1) /*12*/])
			{
				func_568(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_591(32768))
			{
				func_630();
				func_568(21, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_631(iParam3);
	if (bParam4)
	{
		iVar5 |= 2;
	}
	if (bParam8)
	{
		func_632(&iVar5, 4);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_568(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_568(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_568(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_593(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_633(Var0);
}

bool func_569(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1953279.f_2844.f_1 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_634(iVar0, 1);
		if (func_635(iVar2, 2))
		{
		}
		else
		{
			if (Global_1953279.f_2844.f_3[iVar0] == 0)
			{
				if (!func_635(iVar2, 256))
				{
				}
				else
				{
					Jump @104; //curOff = 87
					func_636(iVar2, 2, 6);
					iVar1++;
					if (bParam0 && func_637(iVar0) == -1)
					{
						func_638(iVar0, 0);
						func_639(&(Global_1953279.f_2938.f_2[(Global_1953279.f_2938 - 1) /*2*/]), 2, 6);
					}
				}
				iVar0++;
				if (iVar1 > 0)
				{
					return true;
				}
				return false;
			}
		}
	}
}

void func_570(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1953279.f_925 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_RESET_PED_COMPONENTS(iParam1);
		if (bParam7)
		{
			func_640(iParam1, &(Global_1953279.f_4), Global_1953279.f_3499, Global_1956862.f_1431.f_106);
		}
	}
	else
	{
		bParam6 = false;
	}
	if ((func_591(32768) && func_635(37.82234f, 8)) && func_589(10, iParam3))
	{
		func_641(iParam1, 0, 1, 0);
	}
	iVar1 = 0;
	while (iVar1 < Global_1953279.f_592)
	{
		iVar2 = Global_1953279.f_552[iVar1];
		iVar0 = func_625(iVar2, 1);
		if (func_635(iVar2, 8))
		{
		}
		else if (Global_1953279.f_83[iVar0 /*12*/].f_1 <= 0 || Global_1953279.f_83[iVar0 /*12*/].f_3[0] == -1.473351E-26f)
		{
		}
		else if (uParam0->f_1[iVar0 /*3*/] == 0)
		{
		}
		else if (!func_589(iVar0, iParam3))
		{
		}
		else if ((func_635(iVar2, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1953279.f_83[iVar0 /*12*/]) || uParam0->f_1[iVar0 /*3*/].f_1 == 1.494364E-28f)
		{
			if (!func_635(iVar2, 1) || bParam2)
			{
				Global_1953279.f_925++;
				if (!bParam6)
				{
					func_590(iParam1, iVar0, 1);
				}
				if (uParam0->f_1[iVar0 /*3*/].f_1 == 1.494364E-28f)
				{
					Global_1953279.f_2765[iVar0 /*2*/].f_1 = 1.494364E-28f;
				}
				func_636(iVar2, 1, 6);
			}
		}
		else
		{
			if (!bParam6)
			{
				if ((!bParam2 && uParam0->f_1[iVar0 /*3*/] == Global_1953279.f_2765[iVar0 /*2*/]) && uParam0->f_1[iVar0 /*3*/].f_1 == Global_1953279.f_2765[iVar0 /*2*/].f_1)
				{
				}
				else
				{
					func_590(iParam1, iVar0, 1);
					Global_1953279.f_2765[iVar0 /*2*/] = uParam0->f_1[iVar0 /*3*/];
					Global_1953279.f_2765[iVar0 /*2*/].f_1 = uParam0->f_1[iVar0 /*3*/].f_1;
					if (func_635(iVar2, 1))
					{
						func_642(iVar2, 1, 6);
					}
					Global_1953279.f_925++;
					func_643(&(uParam0->f_1[iVar0 /*3*/]), iParam1, Global_1953279.f_2844.f_54[iVar0], iVar2);
				}
				iVar1++;
				if (Global_1953279.f_925 <= 0)
				{
					return;
				}
				if (bParam4)
				{
					PED::_0xAAB86462966168CE(iParam1, true);
					PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, bParam5);
				}
			}
		}
	}
}

void func_571(var uParam0)
{
	struct<8> Var0;

	uParam0->f_217 = { Var0 };
}

void func_572(var uParam0)
{
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	func_644(&(uParam0->f_263), 4194304);
}

void func_573(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_225[iVar0 /*9*/]), "", 64);
		iVar0++;
	}
}

void func_574()
{
	Global_1913431 = 1;
}

void func_575(bool bParam0)
{
	Global_1940072.f_19 = !bParam0;
}

bool func_576(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1953279.f_2844.f_1 <= 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		Global_1953279.f_2844.f_2 = 0;
		Global_1953279.f_2844.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1953279.f_2844.f_43[iVar0 /*2*/] = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1953279.f_2844.f_3[iVar1] = 0;
			iVar1++;
		}
		return true;
	}
	iVar0 = func_487(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	Global_1953279.f_2844.f_2 = (Global_1953279.f_2844.f_2 - (Global_1953279.f_2844.f_2 && Global_1953279.f_2844.f_43[iVar0 /*2*/].f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_645(iVar1, Global_1953279.f_2844.f_43[iVar0 /*2*/].f_1))
		{
			func_646(iVar1, Global_1953279.f_2844.f_43[iVar0 /*2*/].f_1);
		}
		iVar1++;
	}
	Global_1953279.f_2844.f_1 = (Global_1953279.f_2844.f_1 - 1);
	Global_1953279.f_2844.f_43[iVar0 /*2*/] = { Global_1953279.f_2844.f_43[Global_1953279.f_2844.f_1 /*2*/] };
	Global_1953279.f_2844.f_43[Global_1953279.f_2844.f_1 /*2*/].f_1 = 0;
	Global_1953279.f_2844.f_43[Global_1953279.f_2844.f_1 /*2*/] = 0;
	return true;
}

int func_577(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	Var1 = -22248.28f;
	if (func_31() == -1)
	{
		Var1 = 4.316871E+13f;
	}
	Var1.f_1 = iParam0;
	Var1.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&Var1);
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var1))
	{
		return 0;
	}
	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var1, -2.74559E+16f))
	{
		return 0;
	}
	return func_647(iVar0);
}

bool func_578(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_634(iVar0, 1);
		if (!func_635(iVar2, 258))
		{
		}
		else if (Global_1953279.f_2844.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam1)
			{
				func_638(iVar0, 0);
				func_639(&(Global_1953279.f_2938.f_2[(Global_1953279.f_2938 - 1) /*2*/]), 1, 6);
			}
			if (Global_1953279.f_2844.f_54[iVar0] != 0)
			{
				if (iVar2 == -7.4271E-05f)
				{
					*iParam0 |= 262144;
				}
			}
			func_642(iVar2, 259, 6);
			Global_1953279.f_2844.f_54[iVar0] = 0;
			Global_1953279.f_2765[iVar0 /*2*/] = 0;
			Global_1953279.f_2765[iVar0 /*2*/].f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

int func_579(int iParam0)
{
	return iParam0;
}

void func_580(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_581(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_535(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_582(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_583(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

void func_584(int iParam0)
{
	if (!func_648(iParam0))
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

int func_585(int iParam0)
{
	return iParam0;
}

bool func_586(var uParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, int iParam8)
{
	int iVar0;

	if (bParam2 == 1.89009E+11f)
	{
		if (!func_649(uParam0, bParam2))
		{
			return false;
		}
	}
	else if (!func_650(uParam0, iParam3, bParam2) && !func_597(uParam0, bParam2, uParam1, 0, bParam4, 0, iParam6, bParam7, 0, iParam8))
	{
		return false;
	}
	iVar0 = 10;
	if (func_591(32768) && iParam6 == 0)
	{
		if (!*uParam1 || (*uParam1 && uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/]))
		{
			func_651(37.82234f);
		}
		else
		{
			func_652(37.82234f);
		}
	}
	if (bParam5)
	{
		func_653(2);
	}
	return true;
}

void func_587(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	int iVar4;

	iVar4 = PED::_GET_NUM_COMPONENTS_IN_PED(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		bVar1 = PED::_GET_SHOP_ITEM_COMPONENT_AT_INDEX(iParam0, iVar0, true, &uVar3, &uVar2);
		switch (func_485(bVar1))
		{
			case -1961188419:
				uParam1->f_1[0 /*3*/] = bVar1;
				break;
			case 1033860813:
				uParam1->f_1[26 /*3*/] = bVar1;
				break;
			case 1589583617:
				uParam1->f_1[27 /*3*/] = bVar1;
				break;
			case 153430294:
				uParam1->f_1[28 /*3*/] = bVar1;
				break;
			case -130218241:
			case 629735563:
				uParam1->f_1[8 /*3*/] = bVar1;
				break;
			case -709696437:
			case -702721097:
				uParam1->f_1[9 /*3*/] = bVar1;
				break;
			case -1839668642:
			case -1415811768:
				uParam1->f_1[1 /*3*/] = bVar1;
				break;
			case -986397773:
				uParam1->f_1[2 /*3*/] = bVar1;
				break;
			case -1674363638:
				uParam1->f_1[3 /*3*/] = bVar1;
				break;
			case 231148558:
				uParam1->f_1[4 /*3*/] = bVar1;
				break;
			default:
				break;
				break;
		}
		iVar0++;
	}
}

void func_588(int iParam0, int iParam1)
{
	if (Global_1953279.f_3036 >= 156)
	{
		return;
	}
	Global_1953279.f_3036.f_1[Global_1953279.f_3036 /*2*/].f_1 = PED::_REQUEST_META_PED_COMPONENT(iParam1, iParam0, 0, 1, 0);
	Global_1953279.f_3036.f_1[Global_1953279.f_3036 /*2*/] = 1;
	Global_1953279.f_3036++;
}

bool func_589(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1953279.f_83[iParam0 /*12*/].f_10 && iParam1) != 0;
}

void func_590(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 < Global_1953279.f_83[iParam1 /*12*/].f_1)
		{
			PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, Global_1953279.f_83[iParam1 /*12*/].f_3[iVar0], 0, true);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1953279.f_83[iParam1 /*12*/].f_1)
		{
			PED::REMOVE_TAG_FROM_META_PED(iParam0, Global_1953279.f_83[iParam1 /*12*/].f_3[iVar0], 0);
			iVar0++;
		}
	}
}

bool func_591(int iParam0)
{
	return (Global_1953279 && iParam0) != 0;
}

void func_592(var uParam0)
{
	int iVar0;

	*uParam0 = Global_1953279.f_1676;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uParam0->f_1[iVar0 /*3*/] = { Global_1953279.f_1676.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

void func_593(int iParam0)
{
	Global_1953279 = (Global_1953279 || iParam0);
}

bool func_594(var uParam0)
{
	struct<4> Var0;

	Var0 = func_654(0);
	Var0.f_1 = uParam0;
	Var0.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&Var0);
	return DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var0);
}

void func_595(int iParam0, bool bParam1)
{
	if (!func_591(32))
	{
		return;
	}
	func_568(33, Global_1149417.f_4787.f_4, 0, 0, 0);
	func_655(32);
	func_630();
	Global_1149417.f_4787.f_4 = 0;
	Global_1149417.f_4787 = 0;
	func_598(&(Global_1953279.f_2366));
	func_596(&(Global_1953279.f_2366));
	func_656(4);
	if (bParam1)
	{
		func_657(iParam0, 1, 1, 0);
	}
	func_568(27, 0, 131074, 0, 0);
	func_568(34, 0, 131072, 0, 0);
}

void func_596(var uParam0)
{
	int iVar0;

	Global_1953279.f_1557 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1953279.f_1557.f_1[iVar0 /*3*/] = { uParam0->f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

bool func_597(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	int iVar11;

	iVar11 = 0;
	Var4 = func_654(iParam6);
	Var4.f_1 = bParam1;
	Var4.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&Var4);
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var4))
	{
		return false;
	}
	DATAFILE::_PARSEDDATA_GET_BOOL(&bVar2, &Var4, -2.622373E-16f);
	DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, 2.24095E+35f);
	*uParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_658(uParam0, func_647(iVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_659(-1);
		}
		if (DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, -2.161193E-05f))
		{
			iVar11 = func_647(iVar0);
		}
	}
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var4))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, 2.24243E+12f))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_625(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, 1.154786E+11f))
			{
			}
			else
			{
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bVar2)
				{
					func_636(iVar3, 16, 6);
				}
				if (bParam5)
				{
					if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = 1808.893f;
					}
					else
					{
						Jump @362; //curOff = 297
						if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, 46846.96f))
						{
							if (func_660(iVar3) && func_661(uParam0->f_1[iVar1 /*3*/], iVar3, &iVar0))
							{
								uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
						}
					}
					iVar1 = 16;
					if (bVar2)
					{
						if (!bParam8)
						{
							func_663(uParam0, iVar11, func_662(bParam1) != 0, iParam9);
						}
					}
					else if ((((func_664() == 4.387347E-38f && uParam0->f_1[iVar1 /*3*/] == Global_1953279.f_83[iVar1 /*12*/]) && func_662(uParam0->f_1[34 /*3*/]) == 0) && !func_591(32)) && !func_591(64))
					{
						uParam0->f_1[iVar1 /*3*/] = func_665(-2.763755E-08f, 0);
						uParam0->f_1[iVar1 /*3*/].f_1 = 1808.893f;
						func_666(uParam0, uParam0->f_1[iVar1 /*3*/], iVar1, 0, iParam9);
					}
					if (bParam4)
					{
						*uParam0 = bParam1;
					}
					return true;
				}
			}
		}
	}
}

void func_598(var uParam0)
{
	int iVar0;

	Global_1953279.f_1676 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1953279.f_1676.f_1[iVar0 /*3*/] = { uParam0->f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

void func_599(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;

	iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0);
	iVar1 = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam1);
	if (iVar0 == 0 || iVar1 == 0)
	{
		return;
	}
	if (!INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iVar0, &uVar6, 8.681942E-06f, -1.942248E+12f, &uVar2))
	{
	}
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(iVar0, iVar1, &uVar2, 0);
}

void func_600(int* iParam0)
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

bool func_601(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_USING_SCENARIO_HASH(iParam0, -1.150952E-26f))
	{
		return true;
	}
	return false;
}

bool func_602(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

char* func_603(int iParam0)
{
	switch (iParam0)
	{
		case joaat("P_CS_LEDGER01X"):
			return "P_CS_LEDGER01X";
		case joaat("P_CS_ROPE01X"):
			return "P_CS_ROPE01X";
		case joaat("P_DOOR01X"):
			return "P_DOOR01X";
		case joaat("P_DOOR03X"):
			return "P_DOOR03X";
		case joaat("P_DOOR12X"):
			return "p_door12x";
		case joaat("P_DOOR13X"):
			return "P_DOOR13X";
		case joaat("P_DOOR45X"):
			return "p_door45x";
		case joaat("P_CHAIRVICTORIAN01X"):
			return "p_chairvictorian01x";
		case joaat("P_CRATE03X"):
			return "p_crate03x";
		case joaat("P_CS_JUG01X"):
			return "p_cs_jug01x";
		case joaat("P_CS_WAGON02X"):
			return "p_cs_wagon02x";
		case joaat("P_DOOR37X"):
			return "P_DOOR37X";
		case joaat("P_DOOR_VAL_GENSTORE"):
			return "p_door_val_genstore";
		case joaat("P_DOORSTRAWBERRY01X"):
			return "p_doorstrawberry01x";
		case joaat("P_DOORFRENCH01L"):
			return "p_doorfrench01l";
		case joaat("P_DOORFRENCH01R"):
			return "p_doorfrench01r";
		case joaat("P_DOORMANSIONGATE01X"):
			return "p_doormansiongate01x";
		case joaat("P_DOORNBD39X"):
			return "p_doornbd39x";
		case joaat("P_DOORSALOON02X"):
			return "p_doorsaloon02x";
		case joaat("P_DOORVH_SALOON_L"):
			return "P_DOORVH_SALOON_L";
		case joaat("P_DOORVH_SALOON_R"):
			return "P_DOORVH_SALOON_R";
		case joaat("P_CIGARLIT01X"):
			return "p_cigarlit01x";
		case joaat("P_PEBBLE01X"):
			return "p_pebble01x";
		case joaat("P_CS_ROPE03X"):
			return "p_cs_rope03x";
		case joaat("P_CARDS01X"):
			return "P_CARDS01X";
		case joaat("P_CS_POKERHAND01X"):
			return "P_CS_POKERHAND01X";
		case joaat("P_CS_POKERHAND02X"):
			return "P_CS_POKERHAND02X";
		case joaat("P_CS_HOLDEMHAND01X"):
			return "P_CS_HOLDEMHAND01X";
		case joaat("P_CS_HOLDEMHAND02X"):
			return "P_CS_HOLDEMHAND02X";
		case joaat("P_CS_BUCKET01X"):
			return "P_CS_BUCKET01X";
		case joaat("P_CS_SYRINGE01X"):
			return "p_cs_syringe01x";
		case joaat("P_BOTTLEJD01X"):
			return "p_bottleJD01x";
		case joaat("P_RAG02X"):
			return "p_rag02x";
		case joaat("P_MAGNETO02X"):
			return "p_magneto02x";
		case joaat("P_MAGNETO01X"):
			return "p_magneto01x";
		case joaat("P_CS_WANTEDALIVE01X"):
			return "p_cs_wantedalive01x";
		case joaat("P_CS_RCRIDETHELIGHTNING"):
			return "P_CS_RCRIDETHELIGHTNING";
		case joaat("P_PEN01X"):
			return "p_pen01x";
		case joaat("P_CS_LETTER01A_X"):
			return "p_cs_letter01a_x";
		case joaat("P_CS_ELECTRICCHAIR01X"):
			return "p_cs_electricchair01x";
		case joaat("P_CS_GENERATOR01X"):
			return "p_cs_generator01x";
		case joaat("P_CS_ELECTRICHELMET01X"):
			return "p_cs_electricHelmet01x";
		case joaat("P_CS_GAG01X"):
			return "p_cs_gag01x";
		case joaat("P_DOOR_SHA_MAN01X"):
			return "p_door_sha_man01x";
		case joaat("P_STOOL01X"):
			return "p_stool01x";
		case joaat("P_STOOL02X"):
			return "p_stool02x";
		case joaat("P_JUGGLINGBALL01X"):
			return "p_jugglingball01x";
		case joaat("P_CHAIR02X"):
			return "p_chair02x";
		case joaat("P_CHAIR04X"):
			return "p_chair04x";
		case joaat("P_CRATE15X"):
			return "p_crate15x";
		case joaat("P_CLEAVER01X"):
			return "p_cleaver01x";
		case joaat("P_BOTTLE003X"):
			return "p_bottle003x";
		case joaat("P_CS_BOOK02X"):
			return "p_cs_book02x";
		case joaat("P_STICKYDYMT_SINGLE"):
			return "p_stickydymt_single";
		case joaat("P_CS_FUSEDYNAMITE01X"):
			return "p_cs_fusedynamite01x";
		case joaat("P_DYNAMITE01X"):
			return "p_dynamite01x";
		case joaat("P_CS_FUSESPOOL01X"):
			return "p_cs_fusespool01x";
		case joaat("P_CS_DETONATOR01X"):
			return "p_cs_detonator01x";
		case joaat("P_CS_BEDROLLCLSD01X"):
			return "p_cs_bedrollclsd01x";
		case joaat("P_CIGARETTE_CS01X"):
			return "P_CIGARETTE_CS01X";
		case joaat("P_MATCHES01X"):
			return "P_MATCHES01X";
		case joaat("P_MATCHSTICK01X"):
			return "P_MATCHSTICK01X";
		case joaat("P_WOODENCHAIR01X"):
			return "P_WOODENCHAIR01X";
		case joaat("P_CHAIR_CRATE02X"):
			return "P_CHAIR_CRATE02X";
		case joaat("P_KNITTINGNEEDLE01X"):
			return "p_knittingneedle01x";
		case joaat("P_KNITTINGSQUARE01X"):
			return "p_knittingsquare01x";
		case joaat("P_CS_RABBITMEAT01X"):
			return "p_cs_rabbitMeat01x";
		case joaat("P_CS_RABBITMEAT02X"):
			return "p_cs_rabbitMeat02x";
		case joaat("P_BOTTLE03X"):
			return "p_bottle03x";
		case joaat("P_CS_BILLSTACK01X"):
			return "p_cs_billstack01x";
		case joaat("P_CS_BILLSINGLE01X"):
			return "p_cs_billSingle01x";
		case joaat("P_BINOCULARS01X"):
			return "p_binoculars01x";
		case joaat("P_DOORRHOSHERIFF02X"):
			return "p_doorrhosheriff02x";
		case joaat("P_BARSTOOL01X"):
			return "P_BARSTOOL01X";
		case joaat("P_CS_SHOTGLASS01X"):
			return "p_cs_shotglass01x";
		case joaat("P_LAMP18X"):
			return "p_lamp18x";
		case joaat("P_CLOCK06X"):
			return "p_clock06x";
		case joaat("P_BOTTLE02X"):
			return "p_bottle02x";
		case joaat("P_CS_LOOTSACK01X"):
			return "p_cs_lootSack01x";
		case joaat("P_WINEBOX01X"):
			return "p_wineBox01x";
		case joaat("P_STRONGBOX01X"):
			return "p_strongBox01x";
		case joaat("P_CLOCKTABLE02X"):
			return "P_CLOCKTABLE02X";
		case joaat("P_GEN_STATUE03B"):
			return "p_gen_statue03b";
		case joaat("P_STOOLWINTER01X"):
			return "P_STOOLWINTER01X";
		case joaat("P_CS_BARRAG01X"):
			return "P_CS_BARRAG01X";
		case joaat("P_PLATE01X"):
			return "P_PLATE01X";
		case joaat("P_KNIFE01X"):
			return "P_KNIFE01X";
		case joaat("P_KNIFE02X"):
			return "P_KNIFE02X";
		case joaat("P_CS_CATFISH_WHOLE01X"):
			return "P_CS_CATFISH_WHOLE01X";
		case joaat("P_CS_CATFISH_WHOLE01BX"):
			return "P_CS_CATFISH_WHOLE01BX";
		case joaat("P_WOODWHITTLE01X"):
			return "P_WOODWHITTLE01X";
		case joaat("P_STICKFIREPOKER01X"):
			return "P_STICKFIREPOKER01X";
		case joaat("P_CS_WOODPILE01X"):
			return "P_CS_WOODPILE01X";
		case joaat("P_FORK01X"):
			return "P_FORK01X";
		case joaat("P_KNIFE04X"):
			return "P_KNIFE04X";
		case joaat("P_KNIFE03X"):
			return "p_knife03x";
		case joaat("P_CS_BOTTLESLIM01X"):
			return "P_CS_BOTTLESLIM01X";
		case joaat("P_CS_BLANKET01X"):
			return "P_CS_BLANKET01X";
		case joaat("P_BEDROLLCLOSED01X"):
			return "P_BEDROLLCLOSED01X";
		case joaat("P_CS_KINDLING01X"):
			return "P_CS_KINDLING01X";
		case joaat("P_CIGARTHIN01X"):
			return "P_CIGARTHIN01X";
		case joaat("P_DOOR_WGLASS01X"):
			return "p_door_wglass01x";
		case joaat("P_BROOM02X"):
			return "p_broom02x";
		case joaat("P_AMB_CLIPBOARD_01"):
			return "P_AMB_CLIPBOARD_01";
		case joaat("P_CHAIR07X"):
			return "P_CHAIR07X";
		case joaat("P_CS_CRATETNT01X"):
			return "p_cs_cratetnt01x";
		case joaat("P_CS_FLOURBAG01X"):
			return "p_cs_flourbag01x";
		case joaat("P_CS_SUPPLIES01X"):
			return "p_cs_supplies01x";
		case joaat("P_CS_SUPPLIES02X"):
			return "p_cs_supplies02x";
		case joaat("P_CS_SUPPLIES03X"):
			return "p_cs_supplies03x";
		case joaat("P_DOOR04X"):
			return "p_door04x";
		case joaat("P_DOOR11X"):
			return "p_door11x";
		case joaat("P_DOORRHOSALOON01_L"):
			return "p_doorrhosaloon01_l";
		case joaat("P_DOORRHOSALOON01_R"):
			return "p_doorrhosaloon01_r";
		case joaat("P_VAL_GATE2M02X"):
			return "P_VAL_GATE2M02X";
		case joaat("P_CS_STMDNKY01X"):
			return "P_CS_STMDNKY01X";
		case joaat("P_CS_HOOKPULLEY01X"):
			return "P_CS_HOOKPULLEY01X";
		case joaat("P_CHAIR_CS05X"):
			return "P_CHAIR_CS05X";
		case joaat("P_CHAIR18X"):
			return "P_CHAIR_18X";
		case joaat("P_CHAIR19X"):
			return "P_CHAIR19X";
		case joaat("P_CHAIR20X"):
			return "P_CHAIR20X";
		case joaat("P_CHAIR05X"):
			return "P_CHAIR05X";
		case joaat("P_CHAIR22X"):
			return "p_chair22x";
		case joaat("P_GLASS01X"):
			return "p_glass01x";
		case joaat("P_DININGCHAIRS01X"):
			return "P_DININGCHAIRS01X";
		case joaat("P_WINDSORCHAIR03X"):
			return "P_WINDSORCHAIR03X";
		case joaat("P_WINDSORCHAIR02X"):
			return "P_WINDSORCHAIR02X";
		case joaat("P_DOOR_VAL_JAIL02X"):
			return "p_door_val_jail02x";
		case joaat("P_CRATETNT01X"):
			return "P_CRATETNT01X";
		case joaat("P_CRATETNT02X"):
			return "P_CRATETNT02X";
		case joaat("P_MONEYSTACK01X"):
			return "P_MONEYSTACK01X";
		case joaat("P_AXE01X"):
			return "P_AXE01X";
		case joaat("P_HOE01X"):
			return "P_HOE01X";
		case joaat("P_SHOVEL01X"):
			return "P_SHOVEL01X";
		case joaat("P_SHOVEL04X"):
			return "P_SHOVEL04X";
		case joaat("P_BROOM01X"):
			return "P_BROOM01X";
		case joaat("P_PITCHFORK01X"):
			return "P_PITCHFORK01X";
		case joaat("P_SCYTHE01X"):
			return "P_SCYTHE01X";
		case joaat("P_SKIFF02X"):
			return "P_SKIFF02x";
		case joaat("P_DOOR_NBX_DOC01X_L"):
			return "p_door_nbx_doc01x_l";
		case joaat("P_DOOR_NBX_DOC01X_R"):
			return "p_door_nbx_doc01x_r";
		case joaat("P_CS_CAMERA"):
			return "p_cs_camera";
		case joaat("P_CS_CAMERATRIPOD"):
			return "p_cs_cameratripod";
		case joaat("P_CS_CAMERABAG01X"):
			return "p_cs_camerabag01x";
		case joaat("P_CAMERAFLASH01X"):
			return "p_cameraflash01x";
		case joaat("P_CS_SHUTTERRELEASE"):
			return "p_cs_shutterrelease";
		case joaat("ROWBOATSWAMP"):
			return "rowboatswamp";
		case joaat("P_CHAIR25X"):
			return "P_CHAIR25X";
		case joaat("P_DOORBRAIT01BX"):
			return "P_DOORBRAIT01BX";
		case joaat("P_CS_MAP01X"):
			return "P_CS_MAP01X";
		case joaat("P_HAMMER03X"):
			return "p_hammer03x";
		case joaat("P_CS_NAILBARREL01X"):
			return "p_cs_nailbarrel01x";
		case joaat("P_CS_BOOK04X"):
			return "p_cs_book04x";
		case joaat("P_CS_FAN01X"):
			return "p_cs_Fan01x";
		case joaat("P_CS_LEDGERSMALL01X"):
			return "p_cs_ledgerSmall01x";
		case joaat("P_CS_ENVELOPE01X"):
			return "p_cs_envelope01x";
		case joaat("P_WRAPPEDMEAT01X"):
			return "p_wrappedmeat01x";
		case joaat("P_CS_LETTER02X"):
			return "P_CS_LETTER02X";
		case joaat("P_CS_BOOK03X"):
			return "p_cs_book03x";
		case joaat("P_CS_GIFTBOX01X"):
			return "p_cs_giftBox01x";
		case joaat("P_BOILER01X"):
			return "p_boiler01x";
		case joaat("P_BOILER02X"):
			return "p_boiler02x";
		case joaat("P_MUGCOFFEE01X"):
			return "p_mugCoffee01x";
		case joaat("P_GLASSTALLBEER01X"):
			return "p_glasstallbeer01x";
		case joaat("P_PITCHER02X"):
			return "p_pitcher02x";
		case joaat("P_TRAY03X"):
			return "p_tray03x";
		case joaat("P_SIT_CHAIRWICKER01B"):
			return "p_sit_chairwicker01b";
		case joaat("S_INV_ORLEANDER01CX"):
			return "S_INV_ORLEANDER01CX";
		case joaat("S_INV_ORLEANDER01DX"):
			return "S_INV_ORLEANDER01DX";
		case joaat("P_LADLE02X"):
			return "P_LADLE02X";
		case joaat("P_CS_POT01X"):
			return "P_CS_POT01X";
		case joaat("P_CHAIRDINING03X"):
			return "P_CHAIRDINING03X";
		case joaat("P_SPOON01X"):
			return "P_SPOON01X";
		case joaat("P_BOWL03X"):
			return "P_BOWL03X";
		case joaat("P_CS_BRIDECATALOGUE01X"):
			return "P_CS_BRIDECATALOGUE01X";
		case joaat("P_JEWELRYBOX02BX"):
			return "P_JEWELRYBOX02BX";
		case joaat("P_CS_LETTERFOLDED01X"):
			return "P_CS_LETTERFOLDED01X";
		case joaat("P_CS_ARTHURHAT01X"):
			return "P_CS_ARTHURHAT01X";
		case joaat("P_OAR03X"):
			return "P_OAR03X";
		case joaat("P_DOOR_VAL_BANKVAULT"):
			return "P_DOOR_VAL_BANKVAULT";
		case joaat("P_DOOR_COMBANK01X"):
			return "P_DOOR_COMBANK01X";
		case joaat("P_CS_DONATION01X"):
			return "P_CS_DONATION01X";
		case joaat("P_DOOR_NBX_BANK03X_R"):
			return "p_door_nbx_bank03x_R";
		case joaat("P_DOOR_NBX_BANK03X_L"):
			return "p_door_nbx_bank03x_L";
		case joaat("P_CAMP_PLATE_02X"):
			return "p_camp_plate_02x";
		case joaat("P_STEWPLATE02X"):
			return "p_stewplate02x";
		case joaat("P_CS_LOG01X"):
			return "p_cs_log01x";
		case joaat("P_NDB_HOTELPLANK01X"):
			return "p_ndb_hotelplank01x";
		case joaat("P_GLASS06X"):
			return "p_glass06x";
		case joaat("P_CS_RAG01X"):
			return "p_cs_rag01x";
		case joaat("P_INKWELL01X"):
			return "p_inkwell01x";
		case joaat("P_CIGAR02X"):
			return "p_cigar02x";
		case joaat("P_BOTTLEBEER01X"):
			return "p_bottleBeer01x";
		case joaat("P_BEERMUGGLASS01X"):
			return "p_beermugglass01x";
		case joaat("P_NUTBOWL01X"):
			return "p_nutBowl01x";
		case joaat("P_CS_SACKLARGE01X"):
			return "p_cs_sacklarge01x";
		case joaat("P_CS_DRESSBOX01X"):
			return "p_cs_dressbox01x";
		case joaat("P_BELL05X"):
			return "p_bell05x";
		case joaat("P_WOODENDESKCHAIR01X"):
			return "p_woodendeskchair01x";
		case joaat("P_CHAIR06X"):
			return "p_chair06x";
		case joaat("P_JUG01X"):
			return "p_jug01x";
		case joaat("S_INV_MEDICINE01X"):
			return "S_INV_MEDICINE01X";
		case joaat("S_INV_MEDICINE_FTY"):
			return "S_INV_MEDICINE_FTY";
		case joaat("S_INV_MILKWEED01BX"):
			return "S_INV_Milkweed01bx";
		case joaat("P_BOTTLESLIM01X"):
			return "p_bottleslim01x";
		case joaat("P_CS_JOURNAL01X"):
			return "p_cs_journal01x";
		case joaat("P_MORTARPESTLE02X"):
			return "p_mortarpestle02x";
		case joaat("S_INV_BURDOCK01DX"):
			return "s_inv_burdock01dx";
		case joaat("P_CS_ROPELEGSPLIT"):
			return "p_cs_ropeLegSplit";
		case joaat("P_CS_ROPEHANDSSPLIT"):
			return "p_cs_ropeHandsSplit";
		case joaat("P_FISHINGPOLE01X"):
			return "p_fishingpole01x";
		case joaat("P_FISHINGPOLE02X"):
			return "P_FISHINGPOLE02X";
		case joaat("P_CS_FLOWERNECKLACE"):
			return "p_cs_flowernecklace";
		case joaat("P_CS_FLOWERS01X"):
			return "P_CS_FLOWERS01X";
		case joaat("S_INV_YARROW01CX"):
			return "s_inv_yarrow01cx";
		case joaat("P_CS_FISHINGPOLEBAG01X"):
			return "P_CS_FISHINGPOLEBAG01X";
		case joaat("P_STICK02X"):
			return "P_STICK02X";
		case joaat("P_CS_SOCK01X"):
			return "P_CS_SOCK01X";
		case joaat("P_DOOR_VAL_BANK00_RX"):
			return "P_DOOR_VAL_BANK00_RX";
		case joaat("P_DOOR_VAL_BANK00_LX"):
			return "P_DOOR_VAL_BANK00_RX";
		case joaat("P_CAN10X"):
			return "p_can10x";
		case joaat("P_CS_RABBITGUT"):
			return "p_cs_rabbitgut";
		case joaat("P_CS_RABBITHEADLESS"):
			return "p_cs_rabbitheadless";
		case joaat("P_CS_RABBITFEETLESS"):
			return "p_cs_rabbitfeetless";
		case joaat("P_KETTLE03X"):
			return "p_kettle03x";
		case joaat("S_CHE_WOODBIN01X"):
			return "s_che_woodbin01x";
		case joaat("S_LOOTABLEPOORCASE"):
			return "s_lootablepoorcase";
		case joaat("P_CS_BOOKHARDCV01X"):
			return "P_CS_BOOKHARDCV01X";
		case joaat("P_LETTERBUNDLE_01X"):
			return "P_LETTERBUNDLE_01X";
		case joaat("P_LETTERENVELOPE_CS01X"):
			return "P_LETTERENVELOPE_CS01X";
		case joaat("P_PACKAGE08X"):
			return "P_PACKAGE08X";
		case joaat("P_CIGARBOX02X"):
			return "P_CIGARBOX02X";
		case joaat("P_CRUCIFIX02X"):
			return "p_crucifix02x";
		case joaat("P_BOTTLECRATE01X"):
			return "p_bottleCrate01x";
		case joaat("P_CAN05X"):
			return "p_can05x";
		case joaat("P_CS_SUITCASE04X"):
			return "p_cs_suitcase04x";
		case joaat("P_CS_BAGSTRAUSS01X"):
			return "p_cs_bagstrauss01x";
		case joaat("P_BOTTLE008X"):
			return "P_BOTTLE008X";
		case joaat("P_BOTTLE009X"):
			return "P_BOTTLE009X";
		case joaat("P_BOTTLE010X"):
			return "P_BOTTLE010X";
		case joaat("P_POCKETMIRROR01X"):
			return "p_pocketMirror01x";
		case joaat("P_CIGARETTE01X"):
			return "P_CIGARETTE01X";
		case joaat("P_TRAVELTRUNK02X"):
			return "P_TRAVELTRUNK02X";
		case joaat("P_CHAIRWHITE01X"):
			return "P_CHAIRWHITE01X";
		case joaat("P_JOURNAL_OPEN01X"):
			return "P_JOURNAL_OPEN01X";
		case joaat("P_TABLE42_CS"):
			return "p_table42_cs";
		case joaat("P_CS_NEWSPAPER_02X"):
			return "p_cs_newspaper_02x";
		case joaat("P_CS_POTATOSLICE01X"):
			return "P_CS_POTATOSLICE01X";
		case joaat("S_APLSD_LOG"):
			return "S_APLSD_LOG";
		case joaat("S_APLSD_HRSATT"):
			return "S_APLSD_HRSATT";
		case joaat("P_SPITTOON01X"):
			return "p_spittoon01x";
		case joaat("P_WOODBOWL01X"):
			return "p_woodbowl01x";
		case joaat("P_PENCIL01X"):
			return "p_pencil01x";
		case joaat("P_SPOONMID01X"):
			return "P_SPOONMID01X";
		case joaat("P_PAN01X"):
			return "P_PAN01X";
		case joaat("P_PIPE01X"):
			return "P_Pipe01x";
		case joaat("P_CS_RAILROADBOND01X"):
			return "p_cs_railroadbond01x";
		case joaat("P_SHARPENINGSTONE01X"):
			return "p_sharpeningstone01x";
		case joaat("P_TREESTUMP02X"):
			return "p_treestump02x";
		case joaat("P_PLATE17X"):
			return "p_plate17x";
		case joaat("P_CS_NEWSPAPER_01X"):
			return "p_cs_newspaper_01x";
		case joaat("P_SADIEHAT01X"):
			return "p_sadiehat01x";
		case joaat("P_DOOR_BLA_JAIL_L_01X"):
			return "p_door_bla_jail_l_01x";
		case joaat("P_DOOR_BLA_JAIL_R_01X"):
			return "p_door_bla_jail_r_01x";
		case joaat("P_MASHEDPOTATO02X"):
			return "p_mashedPotato02x";
	}
	return "";
}

void func_604(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_581(iParam0, 1);
	func_582(iParam0, 1);
	func_583(iParam0, 128);
}

void func_605(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939421[iParam0 /*16*/].f_10)))
	{
		return;
	}
	Global_1939421[iParam0 /*16*/] = { Var0 };
	Global_1939421.f_161 = (Global_1939421.f_161 - 1);
	if (Global_1939421.f_161 < 0)
	{
		Global_1939421.f_161 = 0;
	}
}

int func_606(int iParam0)
{
	int iVar0;

	iVar0 = func_625(func_667(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1953279.f_1676.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_607(bool bParam0)
{
	if (func_608(5.002459E-36f, bParam0))
	{
		return true;
	}
	if (func_608(-9.847085E+19f, bParam0))
	{
		return true;
	}
	return false;
}

bool func_608(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_625(func_667(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1953279.f_1676.f_1[iVar1 /*3*/] != 0 && Global_1953279.f_1676.f_1[iVar1 /*3*/] != Global_1953279.f_83[iVar1 /*12*/])
	{
		bVar0 = Global_1953279.f_1676.f_1[iVar1 /*3*/];
		if (func_485(bVar0) == iParam0 || (iParam0 == 5.002459E-36f && func_610(bVar0, 3.611922E-33f)))
		{
			*bParam1 = bVar0;
			return true;
		}
	}
	*bParam1 = 0;
	return false;
}

bool func_609(int iParam0)
{
	return Global_1953279.f_1676.f_1[func_625(iParam0, 1) /*3*/];
}

bool func_610(bool bParam0, int iParam1)
{
	if (!func_546(bParam0, 0))
	{
		return func_669(func_668(bParam0), iParam1);
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

int func_611(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (Global_1953279.f_2844.f_1 >= 5)
	{
		return 0;
	}
	if (!func_670(iParam0, &iVar0))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	return func_476(iParam1, iVar0, bParam2, 1);
}

int func_612(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_671(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956862.f_1546;
		case 1:
			return Global_1956862.f_1565.f_136;
		default:
			break;
	}
	return -1;
}

void func_613(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1295619.f_3;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_CHANGE_ENTITY_HEALTH(iParam1, fParam0, 0, 0);
}

int func_614(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_671(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956862.f_1546.f_2;
		case 1:
			return Global_1956862.f_1565.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_615(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1295619.f_3;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	PED::_CHANGE_PED_STAMINA(iParam1, fParam0);
}

float func_616()
{
	if (!func_565(Global_1940186.f_39))
	{
		return -3.273909E-18f;
	}
	return Global_1940186.f_39;
}

bool func_617(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, float fParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, fParam7, fParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = -3.273909E-18f;
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			bVar0 = iParam1;
			if ((WEAPON::IS_WEAPON_A_GUN(bVar0) || WEAPON::IS_WEAPON_MELEE_WEAPON(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 0.0589133f)
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(bVar0), 128);
				iVar2 = WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_26688 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_565(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						bVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_26688)
						{
							if (func_565(bVar4) && bVar4 != bVar0)
							{
								bVar0 = bVar4;
							}
						}
						else if (bVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_31() == -1 && !func_672(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, false) && iParam0 != Global_33)
		{
			bVar22 = true;
		}
		else if (((bVar4 == bVar0 && !Global_26688) && iParam0 != Global_33) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 0.0589133f)
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, fParam7, fParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = -3.273909E-18f;
			}
		}
	}
	if (bVar0 == -3.273909E-18f && iParam1 == -3.273909E-18f)
	{
		return bVar0;
	}
	else if (bVar0 == -3.273909E-18f)
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				bVar0 = 2.574461E-25f;
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (func_672(-1.91869E+32f))
				{
					bVar0 = -1.91869E+32f;
				}
				else
				{
					bVar0 = 2.574461E-25f;
				}
				break;
			default:
				bVar0 = 2.574461E-25f;
				break;
		}
	}
	else if (bVar0 == -8.909135E+32f && iParam0 == Global_33)
	{
		bVar0 = 3569984f;
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_33 && func_565(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::IS_WEAPON_MELEE_WEAPON(bVar0) && bVar0 != -3.273909E-18f) && !WEAPON::_IS_WEAPON_LANTERN(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::GET_WEAPON_CLIP_SIZE(bVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_33)
	{
		func_673(bVar0, iParam9, bParam2, bParam5, bParam4, bParam11, 6.028273E-12f, 0);
	}
	else if (bParam13)
	{
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_674(iParam0, &bVar0, &fVar25);
		if (bVar0 == -4.550719E+16f || bVar0 == 1.654772E-14f)
		{
			fVar25 = 0f;
		}
		bVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, bVar0, iParam9, bParam2, bParam5, bParam4, bParam11, 0.5f, 1f, 6.028273E-12f, bVar22, fVar25, false);
	}
	if (iParam0 != Global_33)
	{
		if (func_675(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, bParam4);
	}
	return bVar0;
}

int func_618(int iParam0, int iParam1)
{
	var uVar0;

	return func_676(&uVar0, iParam0, iParam1);
}

bool func_619()
{
	return Global_1940013 == 1;
}

bool func_620()
{
	return Global_1940013 == 2;
}

void func_621(float fParam0)
{
}

void func_622()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1940013.f_15 = 0f;
}

struct<5> func_623(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_677(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_678(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_679(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_680(bParam1) };
			if (iParam2 && func_681(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_682(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_682(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_683(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_684(bParam1) };
			switch (func_485(bParam0))
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
			if (func_685(bParam0, -2.580501E-27f))
			{
				Var0 = { func_679(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_685(bParam0, -4.220332E-15f))
			{
				Var0 = { func_679(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_679(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_685(bParam0, -3.171238E-21f))
			{
				Var0 = { func_679(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_686(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_685(bParam0, -3.171238E-21f))
			{
				Var0 = { func_679(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

int func_624(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1953279.f_83[iVar0 /*12*/].f_9 == iParam0)
		{
			return func_634(iVar0, 1);
		}
		iVar0++;
	}
	return -1.003831E+26f;
}

int func_625(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
		case -1197751823:
			return 20;
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
		case -1130865351:
			return 31;
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
		case -893163968:
			return 17;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
		case 304805134:
			return 21;
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
		case 735520874:
			return 5;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
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

bool func_626(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_687();
	if (iParam2 == 39)
	{
		Var0 = { func_623(bParam0, 1, 0) };
		iParam2 = func_625(func_624(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_591(32768) && iParam2 == 10)
	{
		func_651(37.82234f);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	if (func_628(bParam0, 1))
	{
		func_688(&(Global_1953279.f_1557), &bParam0, iParam2, bParam5);
	}
	if (bParam6)
	{
		func_659(iParam2);
	}
	func_638(iParam2, iVar5);
	func_689(&(Global_1953279.f_1557.f_1[iParam2 /*3*/]), 4, 6);
	func_689(&(Global_1953279.f_1676.f_1[iParam2 /*3*/]), 4, 6);
	func_666(&(Global_1953279.f_1557), bParam0, iParam2, 1, iVar5);
	if (iParam1 == 0)
	{
		iParam1 = Global_1953279.f_1557.f_1[iParam2 /*3*/].f_1;
	}
	Global_1953279.f_1557.f_1[iParam2 /*3*/] = bParam0;
	Global_1953279.f_1557.f_1[iParam2 /*3*/].f_1 = func_690(bParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1953279.f_2938)
		{
			if (Global_1953279.f_2938.f_2[iVar6 /*2*/] >= 0 && Global_1953279.f_2938.f_2[iVar6 /*2*/] < 39)
			{
				Global_1953279.f_2765[Global_1953279.f_2938.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1953279.f_2765[Global_1953279.f_2938.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				func_642(func_634(Global_1953279.f_2938.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_627(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	func_691(&(Global_1953279.f_2938), bParam0, bParam1, bParam2, bParam3, bParam4);
}

bool func_628(bool bParam0, bool bParam1)
{
	if (!func_546(bParam0, 0))
	{
	}
	if (!bParam1 && (bParam0 == -2.296707E-23f || bParam0 == -2.419822E+17f))
	{
		return false;
	}
	if (func_610(bParam0, 2.063512E-29f))
	{
		return true;
	}
	return false;
}

bool func_629(bool bParam0, int iParam1, bool bParam2)
{
	struct<4> Var0;
	struct<5> Var4;
	bool bVar9;

	Var4 = { func_623(bParam0, bParam2, 0) };
	if (func_628(bParam0, 0))
	{
		bVar9 = func_692(Var4, Var4.f_4, bParam2, -1);
		if (bVar9 != 0)
		{
			Var4 = { func_623(bVar9, bParam2, 0) };
			Var0 = { func_679(bVar9, Var4, Var4.f_4, bParam2) };
			return func_693(Var0, 0, bParam2);
		}
		return true;
	}
	Var0 = { func_679(bParam0, Var4, Var4.f_4, bParam2) };
	return func_693(Var0, iParam1, bParam2);
}

void func_630()
{
	Global_1953279.f_3485 = 0;
	Global_1953279.f_3485.f_1 = 0;
	Global_1953279.f_3485.f_8 = 0;
	Global_1953279.f_3485.f_2 = 0;
	Global_1953279.f_3485.f_3[0] = 0;
	Global_1953279.f_3485.f_3[1] = 0;
	Global_1953279.f_3485.f_3[2] = 0;
	Global_1953279.f_3485.f_3[3] = 0;
	Global_1953279.f_3485.f_9 = 0;
	Global_1953279.f_3485.f_10 = 0;
	Global_1953279.f_3485.f_11 = 0;
	if (Global_1953279.f_3485.f_12)
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(Global_1953279.f_3485.f_13);
	}
	Global_1953279.f_3485.f_12 = 0;
	func_655(32768);
	func_642(37.82234f, 8, 6);
}

int func_631(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_625(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (Global_1953279.f_1676.f_1[iVar1 /*3*/] == Global_1953279.f_83[iVar1 /*12*/] || Global_1953279.f_1557.f_1[iVar1 /*3*/] == Global_1953279.f_83[iVar1 /*12*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_632(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_633(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
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
		case 20:
		case 21:
		case 22:
		case 23:
			if (Global_1953279.f_918 >= 25)
			{
				return;
			}
			if (func_694(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1953279.f_918)
				{
					iVar1 = ((Global_1953279.f_923 + iVar0) % 25);
					if ((Global_1953279.f_736[iVar1 /*4*/] == Param0 && Global_1953279.f_736[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1953279.f_736[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_695(Param0);
			Global_1953279.f_736[Global_1953279.f_924 /*4*/] = { Param0 };
			Global_1953279.f_918++;
			Global_1953279.f_924 = (Global_1953279.f_924 + 1 % 25);
			func_593(8);
			break;
		case 24:
		case 25:
			if (Global_1953279.f_919 >= 25)
			{
				return;
			}
			if (func_694(Param0))
			{
				return;
			}
			func_695(Param0);
			Global_1953279.f_635[Global_1953279.f_919 /*4*/] = { Param0 };
			Global_1953279.f_919++;
			func_593(8);
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1953279.f_920 >= 20)
			{
				return;
			}
			if (func_694(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1953279.f_920)
				{
					iVar1 = ((Global_1953279.f_921 + iVar0) % 20);
					if ((Global_1953279.f_837[iVar1 /*4*/] == Param0 && Global_1953279.f_837[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1953279.f_837[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			if (Param0 == 34)
			{
				Global_1953279.f_930 = 1;
				Global_1953279.f_930.f_1 = Param0.f_2;
				Global_1953279.f_930.f_2 = Param0.f_3;
			}
			func_695(Param0);
			Global_1953279.f_837[Global_1953279.f_922 /*4*/] = { Param0 };
			Global_1953279.f_920++;
			Global_1953279.f_922 = (Global_1953279.f_922 + 1 % 20);
			func_593(8);
			break;
			break;
	}
}

int func_634(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1.09963E-29f;
		case 1:
			return -0.0195536f;
		case 2:
			return 6.16353E-25f;
		case 3:
			return 5.030698E+25f;
		case 4:
			return 6.953832E+10f;
		case 5:
			return 1.528789E-12f;
		case 6:
			return -3.812509E+14f;
		case 7:
			return 3.512979E-25f;
		case 8:
			return -2.87713E-08f;
		case 9:
			return 7.026751E+12f;
		case 10:
			return 37.82234f;
		case 11:
			return -5.103779E+26f;
		case 12:
			return 2.057189E+24f;
		case 13:
			return 1.705946E+19f;
		case 14:
			return 1.46383E+28f;
		case 15:
			return 6.38604E+21f;
		case 16:
			return 4289245f;
		case 17:
			return -6402848f;
		case 18:
			return -4.710718E+22f;
		case 19:
			return -7.579719E-11f;
		case 20:
			return -7.4271E-05f;
		case 21:
			return 5.394459E-28f;
		case 22:
			return -6.543055E-16f;
		case 23:
			return 774.4996f;
		case 24:
			return -0.0004201953f;
		case 25:
			return 8.86537E-15f;
		case 26:
			return -2.476578E+31f;
		case 27:
			return 2.199934E-35f;
		case 28:
			return -2.801147E+12f;
		case 29:
			return -3.522703E+23f;
		case 30:
			return 9.443141E+25f;
		case 31:
			return -0.01859914f;
		case 32:
			return -1.666598E-29f;
		case 33:
			return -8.05196E-19f;
		case 34:
			return 1.128179E-10f;
		case 35:
			return 1.186104E+32f;
		case 36:
			return -1.164553E-31f;
		case 37:
			return 9.901452E+29f;
		case 38:
			return -2.586538E-15f;
		case 39:
			return -1.003831E+26f;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_635(int iParam0, int iParam1)
{
	return (Global_1953279.f_83[func_625(iParam0, 1) /*12*/].f_11 && iParam1) != 0;
}

void func_636(int iParam0, int iParam1, int iParam2)
{
	Global_1953279.f_83[func_625(iParam0, 1) /*12*/].f_11 = (Global_1953279.f_83[func_625(iParam0, 1) /*12*/].f_11 || iParam1);
}

int func_637(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1953279.f_2938)
	{
		if (Global_1953279.f_2938.f_2[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_638(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_696(&(Global_1953279.f_2938), iParam0, iParam1);
}

void func_639(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_640(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		PED::_SET_CHAR_EXPRESSION(iParam0, Global_1953279.f_4[iVar0 /*2*/], (uParam1[iVar0 /*2*/])->f_1);
		iVar0++;
	}
	if (iParam2 != 0)
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam0, iParam2);
	}
	if (iParam3 != 0)
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam0, iParam3);
	}
}

void func_641(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 10;
	if (func_635(37.82234f, 6) || bParam3)
	{
		if (bParam2 || bParam3)
		{
			func_590(iParam0, iVar0, 0);
			func_636(37.82234f, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_SET_META_PED_TAG(iParam0, Global_1953279.f_3485.f_1, Global_1953279.f_3485.f_3[0], Global_1953279.f_3485.f_3[1], Global_1953279.f_3485.f_3[2], Global_1953279.f_3485.f_8, Global_1953279.f_3485.f_9, Global_1953279.f_3485.f_10, Global_1953279.f_3485.f_11);
		func_642(37.82234f, 1, 6);
	}
	Global_1953279.f_925++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
}

void func_642(int iParam0, int iParam1, int iParam2)
{
	Global_1953279.f_83[func_625(iParam0, 1) /*12*/].f_11 = (Global_1953279.f_83[func_625(iParam0, 1) /*12*/].f_11 - (Global_1953279.f_83[func_625(iParam0, 1) /*12*/].f_11 && iParam1));
}

void func_643(var uParam0, int iParam1, int iParam2, int iParam3)
{
	PED::_APPLY_SHOP_ITEM_TO_PED(iParam1, *uParam0, false, true, false);
	if (iParam2 == 0)
	{
		iParam2 = uParam0->f_1;
		if (iParam2 == 0 && func_697(func_625(iParam3, 1), 32))
		{
			iParam2 = 1808.893f;
		}
	}
	if (iParam2 != 0)
	{
		PED::_UPDATE_SHOP_ITEM_WEARABLE_STATE(iParam1, *uParam0, iParam2, 0, true, 1);
	}
}

void func_644(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_645(int iParam0, var uParam1)
{
	return (Global_1953279.f_2844.f_3[iParam0] && uParam1) != 0;
}

void func_646(int iParam0, var uParam1)
{
	Global_1953279.f_2844.f_3[iParam0] = (Global_1953279.f_2844.f_3[iParam0] - (Global_1953279.f_2844.f_3[iParam0] && uParam1));
}

int func_647(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 256;
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 512;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 1024;
		case -915377750:
			return 2048;
		case -1283403230:
			return 4096;
		case 1024778115:
			return 8192;
		case 75507907:
			return 16384;
		case -1678578495:
			return 32768;
		case -1925540957:
			return 65536;
		case -1932005642:
			return 131072;
		case -803648582:
			return 128;
		case 351949263:
			return 262144;
		case -597281578:
			return 524288;
		case 465720259:
			return 1048576;
		case 396349281:
			return 2097152;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 2160;
		case -141044514:
			return 8304;
		case 884232794:
			return 16496;
		case 836721350:
			return 40960;
		case -1062102573:
			return 65601;
		case -884591393:
			return 96;
		case -1886898087:
			return 32880;
		case -1629261761:
			return 2049;
		case 2050534155:
			return 48;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_648(int iParam0)
{
	return func_535(iParam0, 2);
}

bool func_649(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_658(uParam0, -1, 1, 1, 0);
	iVar0 = 16;
	iVar1 = 34;
	iVar2 = func_665(Global_1953279.f_83[iVar1 /*12*/].f_9, 0);
	iVar3 = func_665(Global_1953279.f_83[iVar0 /*12*/].f_9, 0);
	if (iVar2 == 0)
	{
		return false;
	}
	else
	{
		uParam0->f_1[iVar1 /*3*/] = iVar2;
	}
	if (iVar3 == 0)
	{
		if (func_664() == 4.387347E-38f)
		{
			return false;
		}
	}
	else
	{
		uParam0->f_1[iVar0 /*3*/] = iVar3;
	}
	*uParam0 = bParam1;
	return true;
}

bool func_650(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (bParam2 != 0 && func_698(iParam1) != bParam2)
	{
		return false;
	}
	if (func_699(2, iParam1))
	{
		func_700(uParam0, iParam1);
		return true;
	}
	return false;
}

void func_651(int iParam0)
{
	func_642(iParam0, 8, 6);
}

void func_652(int iParam0)
{
	func_636(iParam0, 8, 6);
}

void func_653(int iParam0)
{
	Global_1953279.f_1046 = iParam0;
}

int func_654(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_664();
	}
	if (iParam0 == 3.272964E+34f)
	{
		return -1.077915E-26f;
	}
	else if (iParam0 == 4.387347E-38f)
	{
		return -10172.2f;
	}
	return 0;
}

void func_655(int iParam0)
{
	Global_1953279 = (Global_1953279 - (Global_1953279 && iParam0));
}

void func_656(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_697(iVar0, iParam0))
		{
			func_701(iVar0, iParam0, 6);
		}
		iVar0++;
	}
}

void func_657(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 2;
	}
	if (bParam2 && Global_1953279.f_2844 != 0)
	{
		func_576(Global_1953279.f_2844);
		func_578(&uVar1, 0);
		Global_1953279.f_2844 = 0;
	}
	else if (iParam3 != 0 && func_702(iParam3))
	{
		func_569(0);
	}
	if (func_591(32768))
	{
		func_652(37.82234f);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		iParam0 = 0;
		func_703(Global_1953279.f_1676.f_1[1 /*3*/], -6.600012E-27f, &(Global_1953279.f_1048), &(Global_1953279.f_1048.f_9), 1);
		func_568(2, 0, iVar0, 0, 0);
		func_568(4, 0, 0, 0, 0);
		func_568(5, 0, 0, 0, 0);
	}
	else
	{
		iVar0 |= 1;
		func_568(2, 0, iVar0, iParam0, 0);
	}
	func_704();
}

void func_658(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_705(&(uParam0->f_1[iVar0 /*3*/]), 2))
		{
			if (func_589(iVar0, iParam1))
			{
				vVar4 = { func_706(iVar0, -1) };
				if (((!bParam4 && vVar4.x != Global_1953279.f_83[iVar0 /*12*/]) && vVar4.x != 0) && (uParam0->f_1[iVar0 /*3*/] != vVar4.x || uParam0->f_1[iVar0 /*3*/].f_1 != vVar4.y))
				{
					uParam0->f_1[iVar0 /*3*/] = { vVar4 };
				}
				if (func_697(iVar0, 4))
				{
					func_701(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_707(iVar0, 4, 6);
				}
				Jump @205; //curOff = 171
				if (bParam2)
				{
					vVar1.x = Global_1953279.f_83[iVar0 /*12*/];
					uParam0->f_1[iVar0 /*3*/] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

void func_659(int iParam0)
{
	func_708(&(Global_1953279.f_2938), iParam0);
}

bool func_660(int iParam0)
{
	float fVar0;
	var uVar1;

	Global_1953279.f_1039.f_2 = 0;
	fVar0 = 655621.5f;
	func_709(&(Global_1953279.f_1039), fVar0, -4.642217E+25f, 2.24243E+12f, 1, iParam0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1953279.f_1039));
	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&uVar1, &(Global_1953279.f_1039), 2.24243E+12f))
	{
		return false;
	}
	return true;
}

bool func_661(bool bParam0, int iParam1, int iParam2)
{
	*iParam2 = 1808.893f;
	return true;
}

int func_662(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_546(bParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(bParam0, 1.282908E-11f, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

void func_663(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (func_610(uParam0->f_1[34 /*3*/], -7.339854E+32f))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = func_697(iVar0, 16);
		if (bVar1)
		{
			func_701(iVar0, 16, 9);
		}
		if (Global_1953279.f_83[iVar0 /*12*/].f_3[0] == -1.473351E-26f || uParam0->f_1[iVar0 /*3*/] == 0)
		{
		}
		else
		{
			if (bVar1)
			{
				func_638(iVar0, iParam3);
			}
			if (!bParam2 && func_662(uParam0->f_1[iVar0 /*3*/]) != 0)
			{
			}
			else if (func_589(iVar0, iParam1) && !bVar1)
			{
				uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
				uParam0->f_1[iVar0 /*3*/].f_1 = 0;
				func_666(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 1, iParam3);
				func_638(iVar0, iParam3);
			}
			else if (bVar1 && !bParam2)
			{
				func_666(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 0, iParam3);
			}
		}
		iVar0++;
	}
}

int func_664()
{
	return Global_1953279.f_1;
}

int func_665(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<18> Var3;

	iVar2 = 0;
	Var3 = { func_710(0, -5.45926E-19f, iParam0, -5.45926E-19f, 0, 0, 0) };
	if (func_711(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_712(iVar0, iVar1, iParam1);
		}
		func_713(iVar0);
	}
	return iVar2;
}

void func_666(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam1;
	bVar1 = func_628(bVar0, 1);
	if (bParam3 && func_610(uParam0->f_1[iParam2 /*3*/], 1.280781E-26f))
	{
		func_714(uParam0, uParam0->f_1[iParam2 /*3*/]);
	}
	switch (func_634(iParam2, 1))
	{
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			func_715(uParam0, bVar0, iParam2, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			func_716(uParam0, bVar0, iParam2);
			break;
		case -338487716:
			func_717(uParam0, bVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_718(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1742327865:
			func_719(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1250092473:
			func_720(uParam0, bVar1, bVar0, iParam4);
			break;
		case -893163968:
			func_721(uParam0, bVar1, bVar0, iParam4);
			break;
		case -450913544:
			func_722(uParam0, bVar1, bVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_723(uParam0, bVar1, bVar0, iParam4);
			break;
		case 304805134:
			func_724(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1145151482:
			func_725(uParam0, bVar1, bVar0, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			func_726(uParam0, bVar1, bVar0, iParam4);
			break;
		case -426430150:
			func_727(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_728(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1958421083:
			func_729(uParam0, bVar1, bVar0, iParam4);
			break;
		case -1944638739:
			func_730(uParam0, bVar1, bVar0, iParam4);
			break;
	}
}

int func_667(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -1.003831E+26f;
	}
	return func_624(iVar0);
}

bool func_668(bool bParam0)
{
	return bParam0;
}

int func_669(bool bParam0, int iParam1)
{
	if (!func_731(bParam0, 2))
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

bool func_670(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	*iParam1 = func_577(iParam0);
	Var2 = -22248.28f;
	if (func_31() == -1)
	{
		Var2 = 4.316871E+13f;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&Var2);
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var2))
	{
		return false;
	}
	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var2, -5.853618E-34f))
	{
		return false;
	}
	iVar1 = func_732(iParam0);
	func_733(iVar0, iVar1, iParam1);
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var2))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var2, -5.853618E-34f))
		{
		}
		else
		{
			func_733(iVar0, iVar1, iParam1);
		}
	}
	return true;
}

int func_671(int iParam0)
{
	return func_735(func_734(iParam0));
}

bool func_672(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar0))
	{
		return true;
	}
	return false;
}

int func_673(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
	{
		Var0 = { func_623(bParam0, 0, 1) };
		if (func_682(bParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -5.45926E-19f;
			if (func_683(bParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_679(bParam0, Var0, Var0.f_4, 0) };
				func_736(bParam0, &Var27, &Var0, 1, -5.149929E+33f, 1, 0);
			}
		}
	}
	if (func_737(0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_33, bParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
		{
			return 0;
		}
		func_738(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
		func_739(bParam0, iParam1);
		return 1;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
	{
		return 0;
	}
	if (iParam1 > 0)
	{
	}
	WEAPON::GIVE_WEAPON_TO_PED(Global_33, bParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return 1;
}

void func_674(int iParam0, bool bParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar1)
	{
		case joaat("G_M_M_UNIDUSTER_03"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_03"):
		case joaat("G_M_M_UNIDUSTER_04"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_02"):
		case joaat("G_M_M_UNIDUSTER_02"):
		case joaat("U_M_M_FATDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_01"):
		case joaat("G_M_M_UNIDUSTER_01"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("G_F_M_UNIDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERLEADER_01"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("G_M_M_UNIDUSTER_05"):
		case joaat("CS_DISGUISEDDUSTER_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("G_M_M_UNIINBRED_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 0.0589133f)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_675(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

int func_676(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;

	iVar0 = 0;
	Var4.f_9 = -5.45926E-19f;
	bVar18 = func_740(iParam1, 128);
	if (func_741("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_742(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_565(Var4.f_4))
			{
			}
			else if (!WEAPON::IS_WEAPON_A_GUN(Var4.f_4) && !WEAPON::IS_WEAPON_BOW(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if (!bVar18 || WEAPON::IS_PED_CARRYING_WEAPON(Global_33, Var4.f_4))
			{
				if (((WEAPON::_IS_WEAPON_TWO_HANDED(Var4.f_4) && (!WEAPON::IS_WEAPON_SHOTGUN(Var4.f_4) || func_740(iParam1, 16))) && (!WEAPON::_IS_WEAPON_SNIPER(Var4.f_4) || func_740(iParam1, 4))) && (!func_743(Var4.f_4) || func_740(iParam1, 8)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_33, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_33, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_713(iVar1);
	}
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	return iVar0;
}

struct<4> func_677(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_744(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_679(2.982335E+09f, func_524(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_679(2.982335E+09f, func_524(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_679(2.982335E+09f, func_524(), -5.45926E-19f, bParam0);
}

int func_678(bool bParam0)
{
	vector3 vVar0;

	if (!func_546(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_679(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_546(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_744(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_680(bool bParam0)
{
	int iVar0;

	iVar0 = func_744(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_679(8.681942E-06f, func_677(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_679(8.681942E-06f, func_677(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_679(8.681942E-06f, func_677(bParam0), -1.942248E+12f, 0);
}

int func_681(bool bParam0, bool bParam1)
{
	if (func_485(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_745();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_682(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_746(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_683(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_747(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_684(bool bParam0)
{
	int iVar0;

	iVar0 = func_744(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_679(3.507197E-29f, func_677(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_679(3.507197E-29f, func_677(bParam0), 12999093, 0);
}

bool func_685(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_485(bParam0);
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
			if (func_748(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_686(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_749(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

void func_687()
{
	int iVar0;

	Global_1953279.f_1557 = Global_1953279.f_1676;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1953279.f_1557.f_1[iVar0 /*3*/] = { Global_1953279.f_1676.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

void func_688(var uParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (bParam3)
	{
		if ((*bParam1 == 4.506009E-09f || *bParam1 == 7.777273E-38f) || *bParam1 == 5.354456E-12f)
		{
			iVar0 = 16;
			if (func_485(uParam0->f_1[iVar0 /*3*/]) != 2.251657E+29f)
			{
				return;
			}
			iVar1 = func_750(uParam0->f_1[iVar0 /*3*/]);
			if (iVar1 != 0 && iVar1 != Global_1953279.f_83[iParam2 /*12*/])
			{
				*bParam1 = iVar1;
				return;
			}
		}
		if (!func_751(*bParam1, iParam2))
		{
			*bParam1 = Global_1953279.f_1676.f_1[iParam2 /*3*/];
			return;
		}
	}
	*bParam1 = Global_1953279.f_83[iParam2 /*12*/];
}

void func_689(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_690(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;

	bVar0 = false;
	if (func_664() == 4.387347E-38f)
	{
		bVar0 = true;
	}
	if (iParam2 == 1.494364E-28f)
	{
		return 1.494364E-28f;
	}
	if (iParam2 != 0 && func_752(bParam0, bVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_661(bParam0, func_634(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_691(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar1 = -1;
	bVar2 = false;
	if (bParam5)
	{
		iVar1 = func_753(Global_1953279.f_1676);
		if (bParam4)
		{
			bParam4 = iVar1 == -1;
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_591(4718592) && !func_754(func_485(Global_1953279.f_1557.f_1[uParam0->f_2[iVar0 /*2*/] /*3*/])))
		{
		}
		else
		{
			func_755(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2, iVar1);
			bVar2 = true;
		}
		iVar0++;
	}
	if (!bVar2)
	{
		return;
	}
	if (bParam4)
	{
		bVar3 = false;
		if (Global_1953279.f_1676 != 2.716622E-21f || !func_699(2, -1))
		{
			bVar3 = true;
		}
		else if (!func_610(Global_1953279.f_1676, -7.339854E+32f) && (Global_1953279.f_1676 != 2.716622E-21f || !func_699(2, -1)))
		{
			bVar3 = true;
		}
		if (bVar3)
		{
			Global_1953279.f_1676 = 2.716622E-21f;
			Global_1953279.f_1557 = 2.716622E-21f;
			func_756(2.716622E-21f, 1, 1);
			func_757(-1, 0, 6);
			func_568(27, 0, 65536, 0, 0);
		}
	}
	if (bParam3)
	{
		func_758(0, 1);
	}
}

bool func_692(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_759(&uParam0, iParam4, bParam5, iParam6);
}

bool func_693(struct<4> Param0, bool bParam4, bool bParam5)
{
	struct<11> Var0;

	if (!func_737(0))
	{
		return func_760(&Param0, bParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_686(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == bParam4)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_744(bParam5), &Param0, bParam4))
	{
		return false;
	}
	return true;
}

bool func_694(int iParam0)
{
	return Global_1953279.f_595[iParam0] > 0;
}

void func_695(int iParam0)
{
	Global_1953279.f_595[iParam0]++;
}

void func_696(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (*uParam0 + 1 >= 16)
	{
		return;
	}
	if (!func_761(uParam0, 1))
	{
		func_762(uParam0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0->f_2[iVar0 /*2*/] == iParam1)
		{
			uParam0->f_2[iVar0 /*2*/].f_1 = iParam2;
			return;
		}
		if (Global_1953279.f_83[uParam0->f_2[iVar0 /*2*/] /*12*/].f_2 > Global_1953279.f_83[iParam1 /*12*/].f_2)
		{
			iVar1 = *uParam0;
			while (iVar1 >= iVar0 + 1)
			{
				uParam0->f_2[iVar1 /*2*/] = { uParam0->f_2[(iVar1 - 1) /*2*/] };
				iVar1 = (iVar1 + -1);
			}
			uParam0->f_2[iVar0 /*2*/] = iParam1;
			uParam0->f_2[iVar0 /*2*/].f_1 = iParam2;
			*uParam0++;
			return;
		}
		iVar0++;
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_697(int iParam0, int iParam1)
{
	return (Global_1953279.f_83[iParam0 /*12*/].f_11 && iParam1) != 0;
}

bool func_698(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_763();
	}
	return Global_17418.f_55.f_664.f_33[iParam0 /*120*/].f_1;
}

bool func_699(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17418.f_55.f_664.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		return (Global_17418.f_55.f_664.f_33[iParam1 /*120*/] && iParam0) != 0;
	}
	return false;
}

void func_700(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = Global_17418.f_55.f_664.f_1777;
	}
	*uParam0 = Global_17418.f_55.f_664.f_33[iParam1 /*120*/].f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uParam0->f_1[iVar0 /*3*/] = { Global_17418.f_55.f_664.f_33[iParam1 /*120*/].f_1.f_1[iVar0 /*3*/] };
		iVar0++;
	}
	if (1.246195E-34f == func_485(uParam0->f_1[10 /*3*/]) && func_610(uParam0->f_1[1 /*3*/], 1.816948E-22f))
	{
		uParam0->f_1[10 /*3*/] = Global_1953279.f_83[10 /*12*/];
	}
}

void func_701(int iParam0, int iParam1, int iParam2)
{
	Global_1953279.f_83[iParam0 /*12*/].f_11 = (Global_1953279.f_83[iParam0 /*12*/].f_11 - (Global_1953279.f_83[iParam0 /*12*/].f_11 && iParam1));
}

bool func_702(int iParam0)
{
	bool bVar0;
	var uVar1;

	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = Global_1953279.f_1676.f_1[34 /*3*/];
	if ((((func_662(bVar0) != 0 && iParam0 != -9.954964E+07f) && iParam0 != -2.320688E-12f) && iParam0 != -2.991873E+37f) && iParam0 != 1.514253E+30f)
	{
		return false;
	}
	if (func_610(bVar0, -7.339854E+32f))
	{
		return false;
	}
	return func_670(iParam0, &uVar1);
}

int func_703(bool bParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	struct<15> Var3;
	struct<18> Var21;

	if (func_764(&(Global_1953279.f_1048), 2))
	{
		return 0;
	}
	if (iParam1 == -7.008358E-38f)
	{
		bVar0 = bParam0;
	}
	else if (iParam1 == -6.600012E-27f)
	{
		bVar0 = func_765(bParam0);
	}
	else
	{
		return 0;
	}
	iVar1 = func_766(uParam3, iParam1);
	bVar2 = func_767(bVar0) != false;
	if (iVar1 == -1 && bVar2)
	{
		return 0;
	}
	if (bVar2)
	{
		if (bParam4)
		{
			func_768(uParam2, uParam3, iParam1);
		}
		else
		{
			func_769(uParam2, uParam3, iVar1);
		}
		return 1;
	}
	if (bParam4)
	{
		Var3.f_2 = -1;
		Var3.f_13 = 1f;
		Var3.f_14 = 1f;
		if (!func_770(&Var3, bVar0, 0, 1, 6))
		{
			return 0;
		}
		if (iVar1 != -1 && Var3.f_3 == (uParam3[iVar1 /*18*/])->f_3)
		{
			return 0;
		}
		func_771(uParam2, uParam3, &Var3);
	}
	else if (iVar1 == -1)
	{
		func_772(uParam2, uParam3, bVar0, 0, 1);
	}
	else
	{
		Var21.f_2 = -1;
		Var21.f_13 = 1f;
		Var21.f_14 = 1f;
		if (!func_770(&Var21, bVar0, 0, 1, 6))
		{
			return 0;
		}
		*(uParam3[iVar1 /*18*/]) = { Var21 };
	}
	return 1;
}

void func_704()
{
	Global_1953279.f_1046 = 0;
}

bool func_705(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

Vector3 func_706(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17418.f_55.f_664.f_1777;
	}
	return Global_17418.f_55.f_664.f_33[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

void func_707(int iParam0, int iParam1, int iParam2)
{
	Global_1953279.f_83[iParam0 /*12*/].f_11 = (Global_1953279.f_83[iParam0 /*12*/].f_11 || iParam1);
}

void func_708(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	Var2 = 39;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_1953279.f_2938.f_35[iVar0 /*2*/] = { Var2 };
		if (iVar0 < *uParam0)
		{
			if ((func_773(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_773(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_639(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
				}
				Global_1953279.f_2938.f_35[iVar1 /*2*/] = { uParam0->f_2[iVar0 /*2*/] };
				iVar1++;
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				uParam0->f_2[iVar0 /*2*/] = { Global_1953279.f_2938.f_35[iVar0 /*2*/] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_709(var uParam0, float fParam1, bool bParam2, float fParam3, int iParam4, int iParam5)
{
	*uParam0 = fParam1;
	uParam0->f_1 = bParam2;
	uParam0->f_2 = fParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

struct<18> func_710(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	if (iParam0 != 0)
	{
		Var0 = iParam0;
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

bool func_711(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_744(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_712(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<10> Var1;
	int iVar15;
	int iVar16;

	Var1.f_9 = -5.45926E-19f;
	iVar16 = 0;
	if (func_664() == 4.387347E-38f)
	{
		iVar16 = 1;
	}
	iParam2 |= 28;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (!func_742(&Var1, iVar0, iParam0, iParam1))
		{
		}
		else if (func_774(Var1.f_4) && PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(Var1.f_4, iVar16, true) == 0)
		{
		}
		else if (func_662(Var1.f_4) != 0)
		{
		}
		else if (func_610(Var1.f_4, -7.339854E+32f))
		{
		}
		else if (func_610(Var1.f_4, 4.422284E-20f))
		{
		}
		else
		{
			iVar15 = func_485(Var1.f_4);
			if (func_776(iParam2, func_775(iVar15)))
			{
			}
			else
			{
				return Var1.f_4;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_713(int iParam0)
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

void func_714(var uParam0, var uParam1)
{
	struct<4> Var0;
	int iVar7;
	int iVar8;

	Var0 = func_654(0);
	Var0.f_1 = uParam1;
	Var0.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&Var0);
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var0))
	{
		return;
	}
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var0))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar7, &Var0, 2.24243E+12f))
		{
		}
		else
		{
			iVar8 = func_625(iVar7, 1);
			if (iVar8 < 0 || iVar8 > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar7, &Var0, 1.154786E+11f))
			{
			}
			else if (uParam0->f_1[iVar8 /*3*/] != iVar7)
			{
			}
			else
			{
				uParam0->f_1[iVar8 /*3*/] = Global_1953279.f_83[iVar8 /*12*/];
				uParam0->f_1[iVar8 /*3*/].f_1 = 0;
				func_638(iVar8, 0);
			}
		}
	}
}

void func_715(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1 == -3.916588E+30f || bParam1 == 2.515798E+09f)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 1.494364E-28f;
	}
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 1.494364E-28f)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 1808.893f;
	}
	iVar0 = 10;
	iVar1 = func_485(uParam0->f_1[iVar0 /*3*/]);
	if (iVar1 == 1.246195E-34f)
	{
		if (func_610(bParam1, 1.816948E-22f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_638(iVar0, iParam3);
		}
	}
	else if (iVar1 == 4.454951E+36f)
	{
		if (func_610(bParam1, -3.086476E+35f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_638(iVar0, iParam3);
		}
	}
	else if (iVar1 == -9.847085E+19f)
	{
		if (func_610(bParam1, -3.086476E+35f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_638(iVar0, iParam3);
		}
	}
	iVar0 = 11;
	if (func_610(uParam0->f_1[iVar0 /*3*/], -8.86916E-14f) && func_610(bParam1, -3.086476E+35f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_610(bParam1, -3.086476E+35f)) && func_610(uParam0->f_1[iVar0 /*3*/], -1.186825E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
}

void func_716(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1 == 9.94413E+23f)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 1.494364E-28f;
	}
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 1.494364E-28f)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 1808.893f;
	}
}

void func_717(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	func_638(1, iParam3);
	if (bParam2)
	{
		return;
	}
	iVar0 = 12;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (!func_628(bVar1, 0) && func_610(bVar1, -2.411198E+32f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	iVar0 = 10;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((bVar1 != Global_1953279.f_83[iVar0 /*12*/] && func_485(bVar1) == 4.454951E+36f) && func_610(bParam1, -3.086476E+35f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
}

void func_718(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_485(bParam2))
	{
		case -525676072:
			func_777(uParam0, bParam1, iParam3);
			break;
		case 2086043523:
			func_778(uParam0, bParam1, iParam3);
			break;
	}
}

void func_719(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (func_485(uParam0->f_1[iVar0 /*3*/]) == 3.381578E-06f)
	{
		func_638(iVar0, iParam3);
	}
	func_638(1, iParam3);
	if (bParam1)
	{
		return;
	}
	if (func_779(bParam2))
	{
		func_780(uParam0, bParam1, iParam3);
	}
	iVar0 = 11;
	if (func_610(bParam2, -2.411198E+32f) && !func_628(uParam0->f_1[iVar0 /*3*/], 0))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	if (func_610(bParam2, -1.186825E-08f))
	{
		return;
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/].f_1 == 5.334513E+16f)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		func_638(iVar0, iParam3);
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
		{
			func_638(iVar0, iParam3);
		}
	}
	else if (uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -4.070739E-17f;
		func_638(iVar0, iParam3);
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
		{
			func_638(iVar0, iParam3);
		}
	}
}

void func_720(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	iVar0 = 12;
	iVar1 = 0;
	if (func_664() == 4.387347E-38f)
	{
		iVar1 = 1;
	}
	if (3.919656E+35f == PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(uParam0->f_1[iVar0 /*3*/], iVar1, true))
	{
		if ((bParam1 || func_610(bParam2, 9.741843E+28f)) || func_485(bParam2) == 2.251657E+29f)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_638(iVar0, iParam3);
		}
	}
	bVar2 = uParam0->f_1[iVar0 /*3*/];
	if ((!func_628(bVar2, 0) && !func_610(bVar2, -1.186825E-08f)) && func_610(bParam2, -1.06471E-16f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	iVar0 = 17;
	if (!func_628(uParam0->f_1[iVar0 /*3*/], 0) && func_610(bParam2, 2.713478E+14f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	iVar0 = 29;
	if (!func_628(uParam0->f_1[iVar0 /*3*/], 0) && func_610(bParam2, 170.5778f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	iVar0 = 34;
	bVar2 = uParam0->f_1[iVar0 /*3*/];
	if (func_485(bVar2) == 8.292232E+24f && func_485(bParam2) == 2.251657E+29f)
	{
		uParam0->f_1[iVar0 /*3*/] = func_750(bParam2);
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	else if (func_781(bVar2, bParam1, iVar1))
	{
		bVar2 = uParam0->f_1[18 /*3*/];
		iVar3 = 0;
		if (func_485(bVar2) == 3.381578E-06f && func_782(32))
		{
			iVar3 |= 1;
		}
		if (func_610(bParam2, 4.422284E-20f))
		{
			iVar3 |= 2;
		}
		bVar2 = func_665(Global_1953279.f_83[iVar0 /*12*/].f_9, iVar3);
		if (bVar2 != 0)
		{
			uParam0->f_1[iVar0 /*3*/] = bVar2;
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_638(iVar0, iParam3);
			func_728(uParam0, 0, bVar2, iParam3);
		}
	}
	iVar0 = 21;
	if (!func_628(uParam0->f_1[iVar0 /*3*/], 0) && func_610(bParam2, 7.182742E-32f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	iVar4 = 23;
	if (!func_628(uParam0->f_1[iVar0 /*3*/], 0) || (uParam0->f_1[iVar4 /*3*/] != Global_1953279.f_83[iVar4 /*12*/] && func_610(uParam0->f_1[iVar4 /*3*/], -2.881491E-21f)))
	{
		func_783(uParam0, iParam3);
	}
}

void func_721(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_610(bParam2, 4.528383E-26f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
}

void func_722(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	switch (func_485(bParam2))
	{
		case 698653232:
			func_784(uParam0, bParam1, bParam2, iParam4);
			break;
		case 912453393:
			func_785(uParam0, bParam1, iParam3, iParam4);
			break;
	}
}

void func_723(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_485(bParam2))
	{
		case -1080198344:
		case 1868067663:
			func_786(uParam0, bParam1, bParam2, iParam3);
			break;
		case 294388917:
			func_787(uParam0, bParam1, bParam2, iParam3);
			break;
	}
}

void func_724(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (func_485(uParam0->f_1[iVar0 /*3*/]) == 3.381578E-06f)
	{
		func_638(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 23;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_610(bParam2, 9.484546E+16f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_783(uParam0, iParam3);
	}
}

void func_725(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!bParam1)
	{
		iVar0 = 21;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
		{
			if (func_610(uParam0->f_1[iVar0 /*3*/], 9.484546E+16f))
			{
				uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
				uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			}
			func_638(iVar0, iParam3);
		}
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_610(bParam2, -2.881491E-21f))
		{
			func_783(uParam0, iParam3);
		}
		else
		{
			func_638(iVar0, iParam3 | 16);
		}
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/].f_1 != -6.7231E+19f)
	{
		return;
	}
	uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
	func_638(iVar0, iParam3);
	iVar0 = 25;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_638(iVar0, iParam3);
	}
	iVar0 = 28;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_638(iVar0, iParam3);
	}
}

void func_726(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	if (func_788(2.199934E-35f) && func_610(bParam2, -4.878666E-06f))
	{
		iVar0 = 27;
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	iVar0 = 32;
	if (!func_628(uParam0->f_1[iVar0 /*3*/], 0) && func_610(bParam2, 0.01839931f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
}

void func_727(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_610(uParam0->f_1[iVar0 /*3*/], 4.528383E-26f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam2);
	}
}

void func_728(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_485(bParam2))
	{
		case 1759215194:
			func_789(uParam0, iParam3);
			break;
		case 1223979091:
		case 2047428024:
			func_790(uParam0, bParam1, bParam2, iParam3);
			break;
		case 684307653:
			func_791(uParam0, bParam1, bParam2, iParam3);
			break;
		case 502936876:
			func_792(uParam0, bParam1, iParam3);
			break;
		case -1740828670:
			func_793(uParam0, bParam1, bParam2, iParam3);
			break;
		case 344283346:
			func_794(uParam0, bParam1, iParam3);
			break;
	}
}

void func_729(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_485(bParam2))
	{
		case 1769055947:
			func_795(uParam0, bParam1, bParam2, iParam3);
			break;
		case -923693316:
			func_796(uParam0, bParam1, bParam2, iParam3);
			break;
	}
}

void func_730(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		func_797(uParam0, iParam3, 0, 1);
		return;
	}
	iVar0 = 35;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((func_610(bParam2, 9.000944E-10f) && uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/]) && func_485(bVar1) == -494711.9f)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	if ((func_610(bParam2, -4.282854E-21f) && uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/]) && func_485(bVar1) == 1.825867E+25f)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	iVar0 = 37;
	if (func_610(bParam2, -9.697137E-08f) && uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
}

bool func_731(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

int func_732(int iParam0)
{
	int iVar0;

	Global_1953279.f_2844.f_43[Global_1953279.f_2844.f_1 /*2*/] = iParam0;
	iVar0 = Global_1953279.f_2844.f_2 ^ -1;
	iVar0 = (iVar0 && -iVar0);
	Global_1953279.f_2844.f_2 = (Global_1953279.f_2844.f_2 || iVar0);
	Global_1953279.f_2844.f_43[Global_1953279.f_2844.f_1 /*2*/].f_1 = iVar0;
	Global_1953279.f_2844.f_1++;
	return iVar0;
}

void func_733(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_798(iParam0, &iVar0))
	{
		return;
	}
	if (iVar0 == 20)
	{
		if (func_610(Global_1953279.f_1676.f_1[iVar0 /*3*/], 1.280781E-26f))
		{
			bVar2 = func_799(Global_1953279.f_1676.f_1[iVar0 /*3*/], 37.82234f);
			if (4.281622E+11f == func_485(bVar2))
			{
				func_800(10, iParam1);
			}
		}
	}
	else if (iVar0 == 23)
	{
		iVar1 = 20;
		if (Global_1953279.f_1676.f_1[iVar1 /*3*/].f_1 == -6.7231E+19f)
		{
			Global_1953279.f_2844.f_54[iVar1] = 1808.893f;
			func_707(iVar1, 256, 6);
			*iParam2 |= 262144;
		}
	}
	func_800(iVar0, iParam1);
}

bool func_734(int iParam0)
{
	return func_112(&(Global_1956862.f_1565), iParam0, 1);
}

int func_735(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_736(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (func_801(bParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_686(*iParam1, &Var0, bParam6, 0, -1))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_737(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_31() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -5.45926E-19f;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_802(7.184882E+22f, &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -5.149929E+33f;
				Var32.f_16 = -1;
				Var32 = iParam5;
				Var32.f_7 = iParam4;
				func_803(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_744(bParam6), iParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_737(bool bParam0)
{
	if (func_31() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_744(bParam0));
}

int func_738(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_804(iParam0))
	{
		return 0;
	}
	if (!func_737(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, iParam0, iParam1, iParam2);
	return 1;
}

void func_739(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_33, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar2 = func_805(WEAPON::GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_33, bParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_33, &iVar1, bParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, bParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_33, bParam0, iVar1);
		}
	}
}

bool func_740(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_741(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_744(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_742(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, iParam0))
	{
		return false;
	}
	return true;
}

bool func_743(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

int func_744(bool bParam0)
{
	if (func_31() == -1)
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

int func_745()
{
	if (func_806(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_746(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_546(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_807(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_679(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_744(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_744(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_747(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_744(0);
	*iParam1 = { func_679(bParam0, func_680(0), fParam3, 0) };
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

bool func_748(bool bParam0, int iParam1, int iParam2)
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

bool func_749(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_744(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_750(bool bParam0)
{
	var uVar0;
	var uVar1;

	func_709(&uVar1, 9044914, bParam0, 0, 0, 0);
	DATAFILE::_PARSEDDATA_GET_FILE(&uVar1);
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&uVar1))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&uVar0, &uVar1, -0.0008358429f))
		{
			return 0;
		}
		return uVar0;
	}
	return 0;
}

bool func_751(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_485(Global_1953279.f_1676.f_1[iParam1 /*3*/]);
	if (func_485(bParam0) == iVar0)
	{
		return true;
	}
	else if (bParam0 == -1700.123f)
	{
		return func_610(Global_1953279.f_1676.f_1[iParam1 /*3*/], 3.611922E-33f);
	}
	else if (bParam0 == 2.691891E-21f)
	{
		return (iVar0 == -7.463622E-36f || iVar0 == 4.454951E+36f);
	}
	else if (bParam0 == -4.323989E-26f)
	{
		return iVar0 == -494711.9f;
	}
	else if (bParam0 == -9.607686E+28f)
	{
		return iVar0 == 2.251657E+29f;
	}
	return false;
}

int func_752(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_GET_SHOP_ITEM_NUM_WEARABLE_STATES(bParam0, bParam1, true))
	{
		if (PED::_GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX(bParam0, iVar0, bParam1, true) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_753(int iParam0)
{
	int iVar0;

	iVar0 = func_808(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	return -1;
}

bool func_754(int iParam0)
{
	return (((((((((iParam0 == -6.84366E-28f || iParam0 == -1.11148E-12f) || iParam0 == 1.226722E-30f) || iParam0 == -5.930502E-22f) || iParam0 == 6.813211E-30f) || iParam0 == 272038.9f) || iParam0 == 8.083898E+09f) || iParam0 == 3.588834E-09f) || iParam0 == -1.005061E+16f) || iParam0 == 61.78744f);
}

void func_755(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (bParam1)
	{
		Global_1953279.f_1676.f_1[iParam0 /*3*/] = { Global_1953279.f_1557.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	if (iParam3 == -1)
	{
		iParam3 = Global_17418.f_55.f_664.f_1777;
	}
	func_809(&(Global_1953279.f_1676.f_1[iParam0 /*3*/]), iParam0, iParam3);
}

bool func_756(bool bParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_623(bParam0, bParam2, 0) };
	Var5 = { func_679(bParam0, Var0, Var0.f_4, bParam2) };
	return func_693(Var5, iParam1, bParam2);
}

void func_757(int iParam0, bool bParam1, int iParam2)
{
	func_810(&(Global_1953279.f_1557), iParam0);
	func_811(2, iParam0, 6);
	if (bParam1)
	{
		func_758(0, 1);
	}
}

void func_758(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_704();
	}
	if (bParam0)
	{
		func_593(8);
		func_593(512);
	}
	else
	{
		func_593(8);
		func_593(16);
	}
}

int func_759(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_812(iParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_760(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	struct<14> Var1;
	int iVar15;
	struct<29> Var16;
	struct<26> Var45;
	struct<18> Var71;
	struct<17> Var89;

	iVar0 = -1;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -5.45926E-19f;
	if (!func_686(*iParam0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == bParam1)
	{
		return iVar0;
	}
	if (Var1.f_13)
	{
		return iVar0;
	}
	iVar15 = func_678(Var1.f_4);
	if (iVar15 == -6.742753E-26f)
	{
		Var16 = { func_813(*iParam0, 1, 0) };
		Var16.f_10 = bParam1;
		iVar0 = func_814(-4.99669E-06f, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2.839425E-36f)
	{
		Var45 = { func_815(*iParam0, 1, 0) };
		Var45.f_10 = bParam1;
		iVar0 = func_816(-4.99669E-06f, &Var45, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -42.1084f)
	{
		Var71 = { func_817(*iParam0, 1, 0) };
		Var71.f_10 = bParam1;
		iVar0 = func_818(-4.99669E-06f, &Var71, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var89 = { func_819(&Var1, 0) };
		Var89.f_10 = bParam1;
		iVar0 = func_802(-4.99669E-06f, &Var89, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_761(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_762(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_763()
{
	return Global_17418.f_55.f_664.f_1777;
}

bool func_764(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

float func_765(bool bParam0)
{
	if (bParam0 == -2.296707E-23f)
	{
		return 2.186574E+22f;
	}
	else if (func_610(bParam0, -7.15325E+10f))
	{
		return 2.833008E-34f;
	}
	else if (func_610(bParam0, -0.9828076f))
	{
		return -8.41446E+37f;
	}
	else if (func_610(bParam0, -7.310568E+12f))
	{
		return -1.398649E-17f;
	}
	else
	{
		return 2.425724E+21f;
	}
	return 2.186574E+22f;
}

int func_766(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((uParam0[iVar0 /*18*/])->f_1 == -1 || (uParam0[iVar0 /*18*/])->f_17 == 0)
		{
		}
		else
		{
			if ((uParam0[iVar0 /*18*/])->f_17 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_767(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CLOTHING_BLEND_FRECKLES_NONE"):
			return 2.772874E-30f;
		case joaat("CLOTHING_BLEND_MOLES_NONE"):
			return 2.355696E+27f;
		case joaat("CLOTHING_BLEND_SPOTS_NONE"):
			return 3.107044E+08f;
		case joaat("CLOTHING_BLEND_FOUNDATION_NONE"):
			return -1.10511E-35f;
		case joaat("CLOTHING_BLEND_BLUSHER_NONE"):
			return 0.01603136f;
		case joaat("CLOTHING_BLEND_EYELINER_NONE"):
			return -4.314404E+26f;
		case joaat("CLOTHING_BLEND_EYESHADOW_NONE"):
			return -2.677414E+07f;
		case joaat("CLOTHING_BLEND_LIPSTICK_NONE"):
			return -1.864473E+11f;
		case -28107610:
			return -7.008358E-38f;
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 8.452614E+07f;
		case -643819742:
			return -6.237061E+18f;
		case joaat("CLOTHING_BLEND_COMPLEXION_NONE"):
			return -0.0003051266f;
		case joaat("CLOTHING_BLEND_COMPLEXION_2_NONE"):
			return -2.292356E+21f;
		case 1687431937:
			return -6.600012E-27f;
		case joaat("CLOTHING_BLEND_SCAR_NONE"):
			return 3.05881E+28f;
		default:
			break;
	}
	return 0;
}

int func_768(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_766(uParam1, iParam2);
	if (iVar0 == -1)
	{
		return 0;
	}
	PED::_REMOVE_PED_OVERLAY(*uParam0, (uParam1[iVar0 /*18*/])->f_2);
	func_769(uParam0, uParam1, iVar0);
	return 1;
}

void func_769(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	uParam0->f_6 = (uParam0->f_6 - 1);
	iVar0 = iParam2;
	while (iVar0 <= uParam0->f_6)
	{
		if (iVar0 + 1 >= 22)
		{
		}
		else
		{
			*(uParam1[iVar0 /*18*/]) = { *(uParam1[iVar0 + 1 /*18*/]) };
			(uParam1[iVar0 /*18*/])->f_2 = ((uParam1[iVar0 /*18*/])->f_2 - 1);
			iVar0++;
		}
	}
}

bool func_770(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	struct<5> Var0;

	Var0 = 3.113408E-15f;
	Var0.f_1 = -5.035317E+11f;
	Var0.f_2 = 1.854962E-22f;
	Var0.f_3 = 1;
	Var0.f_4 = bParam1;
	DATAFILE::_PARSEDDATA_GET_FILE(&Var0);
	if (!func_820(&Var0, uParam0, 0, iParam4))
	{
		return false;
	}
	*uParam0 = bParam1;
	if (bParam2)
	{
		func_821(uParam0, bParam3);
	}
	return true;
}

void func_771(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if ((!func_764(uParam0, 1) || func_764(uParam0, 2)) || uParam0->f_6 < 0)
	{
		return;
	}
	if (uParam2->f_17 == -0.0003995475f)
	{
		if (uParam2->f_3 == 0)
		{
			uParam2->f_3 = uParam0->f_2;
		}
		if (uParam2->f_4 == 0)
		{
			uParam2->f_4 = uParam0->f_3;
		}
		if (uParam2->f_5 == 0)
		{
			uParam2->f_5 = uParam0->f_4;
		}
		func_822(uParam0, uParam2->f_3, uParam2->f_4, uParam2->f_5);
	}
	else
	{
		iVar0 = func_766(uParam1, uParam2->f_17);
		if (iVar0 <= -1)
		{
			if (uParam0->f_6 >= 22)
			{
				return;
			}
			*(uParam1[uParam0->f_6 /*18*/]) = { *uParam2 };
			uParam0->f_6++;
			func_823(uParam0, uParam1, (uParam0->f_6 - 1));
		}
		else
		{
			uParam2->f_2 = (uParam1[iVar0 /*18*/])->f_2;
			*(uParam1[iVar0 /*18*/]) = { *uParam2 };
			func_824(uParam0, uParam1[iVar0 /*18*/], 1);
		}
	}
}

int func_772(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<18> Var0;
	int iVar18;
	struct<18> Var19;

	Var0.f_2 = -1;
	Var0.f_13 = 1f;
	Var0.f_14 = 1f;
	if (!func_770(&Var0, bParam2, bParam3, bParam4, 6))
	{
		return 0;
	}
	if (uParam0->f_6 >= 22)
	{
		return 0;
	}
	*(uParam1[uParam0->f_6 /*18*/]) = { Var0 };
	uParam0->f_6++;
	Var19.f_2 = -1;
	Var19.f_13 = 1f;
	Var19.f_14 = 1f;
	iVar18 = (uParam0->f_6 - 1);
	while (iVar18 >= 1)
	{
		if ((uParam1[iVar18 /*18*/])->f_1 < (uParam1[(iVar18 - 1) /*18*/])->f_1)
		{
			Var19 = { *(uParam1[iVar18 /*18*/]) };
			*(uParam1[iVar18 /*18*/]) = { *(uParam1[(iVar18 - 1) /*18*/]) };
			*(uParam1[(iVar18 - 1) /*18*/]) = { Var19 };
		}
	else
	{
		}
		else
		{
			iVar18 = (iVar18 + -1);
		}
	}
	return 1;
}

bool func_773(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

bool func_774(bool bParam0)
{
	return (((bParam0 != 9.94413E+23f && bParam0 != -3.916588E+30f) && bParam0 != 2.515798E+09f) && !func_825(bParam0));
}

int func_775(int iParam0)
{
	switch (iParam0)
	{
		case 502936876:
			return 1;
		case 684307653:
			return 2;
		case 1759215194:
			return 4;
		case -1740828670:
			return 8;
		case 344283346:
			return 16;
		default:
			break;
	}
	return 0;
}

bool func_776(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_777(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (func_610(bVar1, 3.611922E-33f) || func_485(bVar1) == 5.002459E-36f)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam2);
	}
}

void func_778(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 11;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_610(uParam0->f_1[iVar0 /*3*/], -3.086476E+35f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam2);
	}
}

bool func_779(bool bParam0)
{
	if (!func_546(bParam0, 0))
	{
		return false;
	}
	if (func_610(bParam0, 3.611922E-33f) || func_485(bParam0) == 5.002459E-36f)
	{
		return true;
	}
	return false;
}

void func_780(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 10;
	if (-9.847085E+19f == func_485(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam2);
	}
}

bool func_781(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_485(bParam0);
	if (iParam2 == 0)
	{
		return (iVar0 == 8.292232E+24f || iVar0 == 1.34646E-26f);
	}
	return (!bParam1 && (iVar0 == -2.443576E-24f || iVar0 == 1.34646E-26f));
}

bool func_782(int iParam0)
{
	return (Global_17418.f_55.f_664.f_1734 && iParam0) != 0;
}

void func_783(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = 16;
	bVar1 = false;
	if (func_664() == 4.387347E-38f)
	{
		bVar1 = true;
	}
	func_638(iVar0, iParam1);
	if (uParam0->f_1[iVar0 /*3*/].f_1 == -4.070739E-17f || uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f)
	{
		return;
	}
	if (uParam0->f_1[iVar0 /*3*/].f_1 == 0 || uParam0->f_1[iVar0 /*3*/].f_1 == 1808.893f)
	{
		if (func_752(uParam0->f_1[iVar0 /*3*/], bVar1, -4.070739E-17f) >= 0)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -4.070739E-17f;
			return;
		}
	}
	if (func_752(uParam0->f_1[iVar0 /*3*/], bVar1, 4.712272E+09f) >= 0)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 4.712272E+09f;
	}
}

void func_784(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_610(bParam2, -1.06471E-16f)) && !func_610(uParam0->f_1[iVar0 /*3*/], -1.186825E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	iVar0 = 16;
	if ((uParam0->f_1[iVar0 /*3*/].f_1 == 5.334513E+16f || uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f) && func_610(bParam2, -3099.443f))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 5.334513E+16f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
			func_638(iVar0, iParam3);
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -4.070739E-17f;
			func_638(iVar0, iParam3);
		}
	}
}

void func_785(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	if (uParam0->f_1[iParam2 /*3*/].f_1 != -1.366178E-36f)
	{
		iVar0 = 34;
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_610(bVar1, 3.984539E+18f))
		{
			uParam0->f_1[iParam2 /*3*/].f_1 = -1.366178E-36f;
			func_638(iParam2, iParam3);
		}
		else
		{
			iVar0 = 35;
			bVar1 = uParam0->f_1[iVar0 /*3*/];
			if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && 1.825867E+25f == func_485(bVar1))
			{
				uParam0->f_1[iParam2 /*3*/].f_1 = -1.366178E-36f;
				func_638(iParam2, iParam3);
			}
		}
	}
}

void func_786(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	iVar0 = 16;
	func_638(iVar0, iParam3);
	iVar0 = 18;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_610(bParam2, 3.949663E+29f) && func_485(bVar1) == 7.30981E-14f)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_638(iVar0, iParam3);
		}
		else if (func_610(bParam2, 8.367934E-23f) && func_485(bVar1) == 3.381578E-06f)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_638(iVar0, iParam3);
		}
		else
		{
			func_638(iVar0, iParam3);
		}
	}
	if (bParam1)
	{
		iVar0 = 21;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
		{
			func_638(iVar0, iParam3);
			func_724(uParam0, 0, uParam0->f_1[iVar0 /*3*/], iParam3);
		}
		iVar0 = 17;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && uParam0->f_1[iVar0 /*3*/].f_1 == 1.494364E-28f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_638(iVar0, iParam3);
		}
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_610(bParam2, 170.5778f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_610(bParam2, -3099.443f))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 5.334513E+16f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -4.070739E-17f;
		}
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_610(bParam2, -1.06471E-16f)) && !func_610(uParam0->f_1[iVar0 /*3*/], -1.186825E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
}

void func_787(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_638(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && !func_610(uParam0->f_1[iVar0 /*3*/], -1.186825E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	iVar0 = 13;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	iVar0 = 25;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_610(bParam2, 1.096909E-14f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
}

bool func_788(int iParam0)
{
	return Global_1953279.f_1676.f_1[func_625(iParam0, 1) /*3*/] != Global_1953279.f_83[func_625(iParam0, 1) /*12*/];
}

void func_789(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam1);
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_638(iVar0, iParam1);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_610(uParam0->f_1[iVar0 /*3*/], -336998.2f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		}
		func_638(iVar0, iParam1);
	}
}

void func_790(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (bParam1)
	{
		return;
	}
	bVar2 = false;
	bVar3 = false;
	if (func_664() == 4.387347E-38f)
	{
		bVar3 = true;
	}
	if (func_664() == 4.387347E-38f)
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953279.f_83[iVar0 /*12*/] && func_485(uParam0->f_1[18 /*3*/]) != 3.381578E-06f)
		{
			uParam0->f_1[iVar0 /*3*/] = func_665(Global_1953279.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_638(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	func_638(iVar0, iParam3);
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_610(bParam2, -9.489474E-15f))
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_610(bVar1, 3.411183E+14f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		}
		else if (func_752(uParam0->f_1[iVar0 /*3*/], bVar3, -1.366178E-36f) != -1)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -1.366178E-36f;
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		}
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && uParam0->f_1[iVar0 /*3*/].f_1 == 1.494364E-28f)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_485(bVar1) == 3.381578E-06f)
		{
			bVar2 = true;
			if (func_610(bParam2, 3.984539E+18f))
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = -1.366178E-36f;
				func_638(iVar0, iParam3);
			}
		}
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (bVar1 != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_485(bVar1) == 6.698816E+28f && func_610(bParam2, -234.3313f))
		{
			func_826(uParam0, iVar0, iParam3);
		}
		else if (bVar2)
		{
			func_638(iVar0, iParam3);
		}
	}
	iVar0 = 34;
	if (8.292232E+24f == func_485(uParam0->f_1[iVar0 /*3*/]))
	{
		func_638(16, iParam3);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_610(bParam2, -4.282854E-21f))
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_485(bVar1) == 1.825867E+25f)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_638(iVar0, iParam3);
		}
	}
}

void func_791(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	if (func_664() == 4.387347E-38f)
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953279.f_83[iVar0 /*12*/] && func_485(uParam0->f_1[18 /*3*/]) != 3.381578E-06f)
		{
			uParam0->f_1[iVar0 /*3*/] = func_665(Global_1953279.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_638(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_610(uParam0->f_1[iVar0 /*3*/], -5.428462E-37f))
		{
			func_797(uParam0, iParam3, 1, 0);
		}
		else if (func_610(bParam2, 2.896282E+23f))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		}
	}
	func_638(iVar0, iParam3);
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_610(bVar1, 8.399988f) && func_610(bParam2, 7.029633E-22f))
		{
			func_826(uParam0, iVar0, iParam3);
		}
	}
}

void func_792(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	func_638(36, iParam2);
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam2);
	}
	if (func_664() == 4.387347E-38f)
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953279.f_83[iVar0 /*12*/])
		{
			iVar0 = 16;
			uParam0->f_1[iVar0 /*3*/] = func_665(Global_1953279.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_638(iVar0, iParam2);
		}
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (bVar1 != Global_1953279.f_83[iVar0 /*12*/] && func_610(bVar1, 2.801708E-26f))
	{
		func_826(uParam0, iVar0, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam2);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && 1.825867E+25f == func_485(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam2);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam2);
	}
}

void func_793(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_485(bVar1) == 2.209101E-28f)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	iVar0 = 18;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_485(bVar1) == 3.381578E-06f)
		{
			if (uParam0->f_1[iVar0 /*3*/].f_1 != 1808.893f)
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
				func_638(iVar0, iParam3);
			}
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_638(iVar0, iParam3);
		}
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_610(uParam0->f_1[iVar0 /*3*/], -5.428462E-37f))
		{
			func_797(uParam0, iParam3, 1, 0);
		}
		else if (func_610(bParam2, 2.896282E+23f))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		}
	}
}

void func_794(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_826(uParam0, iVar0, iParam2);
	}
	iVar0 = 21;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam2);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam2);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam2);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam2);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam2);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_610(uParam0->f_1[iVar0 /*3*/], -5.428462E-37f))
		{
			func_797(uParam0, iParam2, 1, 0);
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
			func_638(iVar0, iParam2);
		}
	}
}

void func_795(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 34;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		func_638(iVar0, iParam3);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -1.366178E-36f;
		func_638(iVar0, iParam3);
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_610(bParam2, -9.697137E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (3.381578E-06f == func_485(bVar1) && uParam0->f_1[iVar0 /*3*/].f_1 != -1.366178E-36f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -1.366178E-36f;
			func_638(iVar0, iParam3);
		}
	}
}

void func_796(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 37;
	if (func_610(bParam2, -9.697137E-08f) && uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam3);
	}
}

void func_797(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 36;
	if (bParam2)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam1);
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam1);
	}
	iVar0 = 38;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam1);
	}
	iVar0 = 35;
	if (bParam3 && -494711.9f == func_485(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam1);
	}
}

bool func_798(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;

	switch (iParam0)
	{
		case -1912930450:
			fVar0 = 2.057189E+24f;
			if (func_485(func_609(fVar0)) != 5.002459E-36f && !func_610(func_609(fVar0), 3.611922E-33f))
			{
				return false;
			}
			break;
		case -1745589872:
			fVar0 = 2.057189E+24f;
			if (!func_610(func_609(fVar0), -1.186825E-08f))
			{
				return false;
			}
			break;
		case -1549909015:
			fVar0 = 37.82234f;
			iVar1 = func_485(func_609(fVar0));
			if (iVar1 != -9.847085E+19f && iVar1 != -7.463622E-36f)
			{
				return false;
			}
			break;
		case 357406204:
			fVar0 = -7.4271E-05f;
			iVar1 = func_485(func_609(fVar0));
			if (iVar1 != 2.209101E-28f)
			{
				return false;
			}
			break;
		case -464635753:
			fVar0 = -4.710718E+22f;
			iVar1 = func_485(func_609(fVar0));
			if (iVar1 != 7.30981E-14f)
			{
				return false;
			}
			break;
		case 1742327865:
			fVar0 = 2.057189E+24f;
			if (func_610(func_609(fVar0), -1.186825E-08f))
			{
				return false;
			}
			break;
		default:
			fVar0 = iParam0;
			break;
	}
	*iParam1 = func_625(fVar0, 1);
	return true;
}

int func_799(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = func_654(0);
	func_709(&(Global_1953279.f_1039), iVar0, bParam0, 2.24243E+12f, 1, iParam1);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1953279.f_1039));
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&(Global_1953279.f_1039)))
	{
		return 0;
	}
	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&uVar1, &(Global_1953279.f_1039), 1.154786E+11f))
	{
		return 0;
	}
	return uVar1;
}

void func_800(int iParam0, int iParam1)
{
	Global_1953279.f_2844.f_3[iParam0] = (Global_1953279.f_2844.f_3[iParam0] || iParam1);
}

bool func_801(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

int func_802(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_827(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_829(func_828(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_830(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

void func_803(int iParam0, struct<17> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1292096.f_20)
	{
		if (Global_1292096.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1292096.f_20.f_1[iVar0 /*21*/].f_1 == 1 || Global_1292096.f_20.f_1[iVar0 /*21*/].f_1 == 5)
			{
				Global_1292096.f_20.f_1[iVar0 /*21*/].f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

bool func_804(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_805(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_806(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_804(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_744(bParam1), iParam0, bParam3);
}

int func_807(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_731(func_668(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

int func_808(int iParam0)
{
	switch (iParam0)
	{
		case 491602716: /* GXTEntry: "Custom Outfit" */
			return 0;
		case 217155793: /* GXTEntry: "Outfit One" */
			return 1;
		case 97391779: /* GXTEntry: "Outfit Two" */
			return 2;
		case -808817534: /* GXTEntry: "Outfit Three" */
			return 3;
		case 1270922359: /* GXTEntry: "Outfit Four" */
			return 4;
		case -2011879201: /* GXTEntry: "Outfit Five" */
			return 5;
		case -1063340820: /* GXTEntry: "Outfit Six" */
			return 6;
		case 2127262701:
			return 7;
		case -1323870201: /* GXTEntry: "Outfit Eight" */
			return 8;
		case 1632140501: /* GXTEntry: "Outfit Nine" */
			return 9;
		case 967218463: /* GXTEntry: "Outfit Ten" */
			return 10;
		default:
			break;
	}
	return -1;
}

void func_809(var uParam0, int iParam1, int iParam2)
{
	Global_17418.f_55.f_664.f_33[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
}

void func_810(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = Global_17418.f_55.f_664.f_1777;
	}
	Global_17418.f_55.f_664.f_33[iParam1 /*120*/].f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_809(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_811(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17418.f_55.f_664.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		Global_17418.f_55.f_664.f_33[iParam1 /*120*/] = (Global_17418.f_55.f_664.f_33[iParam1 /*120*/] || iParam0);
	}
}

bool func_812(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_744(bParam3);
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, iParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_749(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

struct<29> func_813(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<29> Var0;
	struct<29> Var29;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var29.f_9 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_744(bParam4), &uParam0, &Var29, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_819(&Var29, bParam5) };
	Var0.f_17 = { Var29.f_16 };
	Var0.f_25 = Var29.f_25;
	Var0.f_26 = Var29.f_27;
	Var0.f_27 = Var29.f_28;
	Var0.f_28 = Var29.f_24;
	return Var0;
}

int func_814(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_827(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_829(func_831(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_830(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 29), iVar0, iParam1);
	}
	return -1;
}

struct<26> func_815(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<26> Var0;
	struct<24> Var26;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var26.f_9 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_744(bParam4), &uParam0, &Var26, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_819(&Var26, bParam5) };
	Var0.f_17 = { Var26.f_15 };
	Var0.f_25 = Var26.f_23;
	return Var0;
}

int func_816(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_829(func_832(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_830(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 26), iVar0, iParam1);
	}
	return -1;
}

struct<18> func_817(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<18> Var0;
	struct<15> Var18;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var18.f_9 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_744(bParam4), &uParam0, &Var18, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_819(&Var18, bParam5) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

int func_818(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_827(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_829(func_833(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_830(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 18), iVar0, iParam1);
	}
	return -1;
}

struct<17> func_819(var uParam0, bool bParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_807(uParam0->f_4, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_524() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_820(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;

	if (DATAFILE::_PARSEDDATA_GET_SECTION(&uVar2, uParam0, -3.925446E+21f))
	{
		uParam1->f_17 = uVar2;
	}
	else if (!bParam2)
	{
		return false;
	}
	if (DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, uParam0, -430996f))
	{
		uParam1->f_3 = iVar0;
	}
	else
	{
		uParam1->f_3 = 0;
	}
	if (DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, uParam0, 3.361014E+09f))
	{
		uParam1->f_4 = iVar0;
	}
	else
	{
		uParam1->f_4 = 0;
	}
	if (DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, uParam0, 3.450418E+35f))
	{
		uParam1->f_5 = iVar0;
	}
	else
	{
		uParam1->f_5 = 0;
	}
	if (DATAFILE::_PARSEDDATA_GET_FLOAT(&uVar4, uParam0, 1.743857E+34f))
	{
		uParam1->f_13 = uVar4;
	}
	else
	{
		uParam1->f_13 = 0f;
	}
	if (DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, uParam0, 5.853573E-13f))
	{
		uParam1->f_16 = func_834(iVar0);
	}
	if (DATAFILE::_PARSEDDATA_GET_FLOAT(&uVar4, uParam0, 2.92439E+26f))
	{
		uParam1->f_15 = uVar4;
	}
	else
	{
		uParam1->f_15 = 0f;
	}
	if (DATAFILE::_PARSEDDATA_GET_INT(&uVar3, uParam0, 3.204777E-05f))
	{
		uParam1->f_6 = uVar3;
	}
	else
	{
		uParam1->f_6 = 0;
	}
	if (DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, uParam0, 5.382946E-06f))
	{
		uParam1->f_7 = iVar0;
		if (DATAFILE::_PARSEDDATA_GET_INT(&uVar3, uParam0, 5.9618E+30f))
		{
			uParam1->f_8 = uVar3;
		}
		else
		{
			uParam1->f_8 = 0;
		}
		if (DATAFILE::_PARSEDDATA_GET_FLOAT(&uVar4, uParam0, -6.533777E-33f))
		{
			uParam1->f_14 = uVar4;
		}
		else
		{
			uParam1->f_14 = 0f;
		}
	}
	else
	{
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_14 = 0f;
	}
	if (DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, uParam0, 5.69306E-27f))
	{
		uParam1->f_9 = iVar0;
		if (DATAFILE::_PARSEDDATA_GET_INT(&uVar3, uParam0, 479611.9f))
		{
			uParam1->f_10 = uVar3;
		}
		if (DATAFILE::_PARSEDDATA_GET_INT(&uVar3, uParam0, 4.188479E-06f))
		{
			uParam1->f_11 = uVar3;
		}
		if (DATAFILE::_PARSEDDATA_GET_INT(&uVar3, uParam0, -4.710037E-06f))
		{
			uParam1->f_12 = uVar3;
		}
	}
	else
	{
		uParam1->f_9 = 0;
		uParam1->f_10 = 0;
		uParam1->f_11 = 0;
		uParam1->f_12 = 0;
	}
	uParam0->f_1 = 3.633832E+25f;
	uParam0->f_2 = 1.854962E-22f;
	uParam0->f_3 = 1;
	uParam0->f_4 = uVar2;
	DATAFILE::_PARSEDDATA_GET_FILE(uParam0);
	if (DATAFILE::_PARSEDDATA_GET_INT(&uVar1, uParam0, -0.05136334f))
	{
		uParam1->f_1 = uVar1;
	}
	return true;
}

void func_821(var uParam0, bool bParam1)
{
	int iVar0;
	struct<18> Var1;
	bool bVar19;
	struct<4> Var20;

	Var1.f_9 = 1;
	Var1.f_11 = -5.45926E-19f;
	iVar0 = func_835(uParam0->f_17);
	if (iVar0 == 0)
	{
		return;
	}
	bVar19 = *uParam0;
	Var20 = { func_679(5.207907E-07f, func_677(1), 0.08386164f, 1) };
	if (bParam1 && bVar19 != func_692(Var20, iVar0, 1, -1))
	{
		return;
	}
	Var1 = { func_817(func_679(bVar19, Var20, iVar0, 1), 1, 0) };
	if (Var1.f_17 <= 0)
	{
		return;
	}
	uParam0->f_13 = func_836(Var1.f_17);
}

void func_822(var uParam0, var uParam1, var uParam2, var uParam3)
{
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	uParam0->f_4 = uParam3;
	PED::_SET_TEXTURE_LAYER_TEXTURE_MAP(*uParam0, 0, uParam0->f_2, uParam0->f_3, uParam0->f_4);
}

void func_823(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 > 0 && (uParam1[(iParam2 - 1) /*18*/])->f_1 > (uParam1[iParam2 /*18*/])->f_1)
	{
		func_837(uParam0, uParam1);
	}
	else
	{
		func_838(uParam0, uParam1[iParam2 /*18*/]);
	}
}

void func_824(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		PED::_SET_TEXTURE_LAYER_TEXTURE_MAP(*uParam0, uParam1->f_2, uParam1->f_3, uParam1->f_4, uParam1->f_5);
	}
	if (uParam1->f_9 != 0)
	{
		PED::_SET_TEXTURE_LAYER_PALLETE(*uParam0, uParam1->f_2, uParam1->f_9);
		PED::_SET_TEXTURE_LAYER_TINT(*uParam0, uParam1->f_2, uParam1->f_10, uParam1->f_11, uParam1->f_12);
	}
	if (uParam1->f_7 != 0)
	{
		PED::_SET_TEXTURE_LAYER_MOD(*uParam0, uParam1->f_2, uParam1->f_7, uParam1->f_14, uParam1->f_8);
	}
	if (uParam1->f_15 > 0f)
	{
		PED::_SET_TEXTURE_LAYER_ROUGHNESS(*uParam0, uParam1->f_2, uParam1->f_15);
	}
	PED::_SET_TEXTURE_LAYER_SHEET_GRID_INDEX(*uParam0, uParam1->f_2, uParam1->f_6);
	PED::_SET_TEXTURE_LAYER_ALPHA(*uParam0, uParam1->f_2, uParam1->f_13);
}

bool func_825(bool bParam0)
{
	if (!func_546(bParam0, 0))
	{
	}
	if (func_610(bParam0, -5.542951E+24f))
	{
		return true;
	}
	return false;
}

void func_826(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_610(uParam0->f_1[iParam1 /*3*/], 1.280781E-26f))
	{
		func_714(uParam0, uParam0->f_1[iParam1 /*3*/]);
	}
	else
	{
		uParam0->f_1[iParam1 /*3*/] = Global_1953279.f_83[iParam1 /*12*/];
		uParam0->f_1[iParam1 /*3*/].f_1 = 0;
		func_638(iParam1, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && uParam0->f_1[iVar0 /*3*/].f_1 == 1.494364E-28f)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_638(iVar0, iParam2);
	}
}

bool func_827(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_839(iParam1->f_8, iParam0, iVar0, 2048) || func_839(iParam1->f_8, iParam0, iVar0, 32768)) || func_839(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_839(iParam1->f_8, iParam0, iVar0, 4) || func_839(iParam1->f_8, iParam0, iVar0, 256)) || func_839(iParam1->f_8, iParam0, iVar0, 65536)) || func_839(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_839(iParam1->f_8, iParam0, iVar0, 1) || func_839(iParam1->f_8, iParam0, iVar0, 8)) || func_839(iParam1->f_8, iParam0, iVar0, 65536)) || func_839(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_839(iParam1->f_8, iParam0, iVar0, 1) || func_839(iParam1->f_8, iParam0, iVar0, 16)) || func_839(iParam1->f_8, iParam0, iVar0, 2)) || func_839(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_839(iParam1->f_8, iParam0, iVar0, 8) || func_839(iParam1->f_8, iParam0, iVar0, 4096)) || func_839(iParam1->f_8, iParam0, iVar0, 256)) || func_839(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_828(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_829(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_840(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_840(iParam1, 2, 0, 0);
	return -1;
}

int func_830(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_840(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_831(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 29, iParam2, 0);
}

bool func_832(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 26, iParam2, 0);
}

bool func_833(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 18, iParam2, 0);
}

int func_834(int iParam0)
{
	switch (iParam0)
	{
		case 377740851:
			return 0;
		case -897347426:
			return 1;
		case -409773112:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_835(int iParam0)
{
	switch (iParam0)
	{
		case 12857284:
			return -2.662069E-33f;
		case 299749022:
			return -1.57624E+35f;
		case -1180698265:
			return -1.316039E-30f;
		case -487028314:
			return 9.554079E+08f;
		case 241235545:
			return 7.78559E-13f;
		case 1827902148:
			return -6.119388E-06f;
		case 1301555144:
			return 1.658512E+23f;
		case -2056583192:
			return -1.135926E-06f;
		case 1015239729:
			return -4.50996E+22f;
		case -340627321:
			return -3.898063E-35f;
		case -875805376:
			return -4.373475E-11f;
		case -768760704:
			return 2.146286E+17f;
		case 1089431066:
			return -7.533319E+25f;
		case -2118203104:
			return -1.824534E-33f;
		case 1285634184:
			return 0.01202079f;
		case -559080197:
			return 6.828502E-07f;
		case -1811760631:
			return -1.035598E+30f;
		case 1858448324:
			return -6.748957E-28f;
		default:
			break;
	}
	return 0;
}

float func_836(int iParam0)
{
	return func_841((BUILTIN::TO_FLOAT(iParam0) / 1176256512), 981668463 /* Float: 0.001f */, 1f);
}

void func_837(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<18> Var2;

	iVar1 = (uParam0->f_6 - 1);
	Var2.f_2 = -1;
	Var2.f_13 = 1f;
	Var2.f_14 = 1f;
	iVar0 = (uParam0->f_6 - 1);
	while (iVar0 >= 1)
	{
		if ((uParam1[iVar0 /*18*/])->f_1 < (uParam1[(iVar0 - 1) /*18*/])->f_1)
		{
			PED::_REMOVE_PED_OVERLAY(*uParam0, (uParam1[(iVar0 - 1) /*18*/])->f_2);
			Var2 = { *(uParam1[iVar0 /*18*/]) };
			*(uParam1[iVar0 /*18*/]) = { *(uParam1[(iVar0 - 1) /*18*/]) };
			*(uParam1[(iVar0 - 1) /*18*/]) = { Var2 };
			iVar1 = (iVar0 - 1);
		}
	else
	{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	iVar0 = iVar1;
	while (iVar0 <= (uParam0->f_6 - 1))
	{
		func_838(uParam0, uParam1[iVar0 /*18*/]);
		iVar0++;
	}
}

void func_838(var uParam0, var uParam1)
{
	uParam1->f_2 = PED::_ADD_TEXTURE_LAYER(*uParam0, uParam1->f_3, uParam1->f_4, uParam1->f_5, uParam1->f_16, uParam1->f_13, uParam1->f_6);
	func_824(uParam0, uParam1, 0);
}

int func_839(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_602(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_840(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1292096.f_20)
	{
		if (Global_1292096.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1292096.f_20.f_1[iVar0 /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1292096.f_20.f_1[iVar0 /*21*/].f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1292096.f_20.f_1[iVar0 /*21*/].f_2 = iParam2;
				Global_1292096.f_20.f_1[iVar0 /*21*/].f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_842(iParam0, iParam1, iParam2, iParam3);
}

float func_841(float fParam0, float fParam1, float fParam2)
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

void func_842(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1292096.f_20 < 20)
	{
		Global_1292096.f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1292096.f_20.f_1[iVar0 /*21*/] = { Global_1292096.f_20.f_1[iVar0 + 1 /*21*/] };
			iVar0++;
		}
	}
	func_843(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

void func_843(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_844(&(uParam0->f_4));
}

void func_844(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -5.149929E+33f;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

