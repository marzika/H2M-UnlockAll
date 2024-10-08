#include "pch.h"

std::list<std::string> challenges = {
"ch_marksman_h2_m4", "ch_marksman_h2_famas", "ch_marksman_h2_scar", "ch_marksman_h2_tavor", "ch_marksman_h2_fal",
"ch_marksman_h2_m16", "ch_marksman_h2_masada", "ch_marksman_h2_fn2000", "ch_marksman_h2_ak47", "ch_marksman_h2_mp5k",
"ch_marksman_h2_ump45", "ch_marksman_h2_kriss", "ch_marksman_h2_p90", "ch_marksman_h2_uzi", "ch_marksman_h2_ak74u",
"ch_marksman_h2_sa80", "ch_marksman_h2_rpd", "ch_marksman_h2_mg4", "ch_marksman_h2_aug", "ch_marksman_h2_m240",
"ch_marksman_h2_cheytac", "ch_marksman_h2_barrett", "ch_marksman_h2_wa2000", "ch_marksman_h2_m21", "ch_marksman_h2_m40a3",
"ch_marksman_h2_pp2000", "ch_marksman_h2_glock", "ch_marksman_h2_beretta393", "ch_marksman_h2_tmp", "ch_marksman_h2_spas12",
"ch_marksman_h2_aa12", "ch_marksman_h2_striker", "ch_marksman_h2_ranger", "ch_marksman_h2_winchester1200", "ch_marksman_h2_m1014",
"ch_marksman_h2_model1887", "ch_marksman_h2_usp", "ch_marksman_h2_coltanaconda", "ch_marksman_h2_m9", "ch_marksman_h2_colt45",
"ch_marksman_h2_deserteagle", "ch_marksman_h2_at4", "ch_marksman_h2_rpg", "ch_marksman_h2_m79", "ch_marksman_javelin",
"ch_expert_h2_m4", "ch_expert_h2_famas", "ch_expert_h2_scar", "ch_expert_h2_tavor", "ch_expert_h2_fal", "ch_expert_h2_m16",
"ch_expert_h2_masada", "ch_expert_h2_fn2000", "ch_expert_h2_ak47", "ch_expert_h2_mp5k", "ch_expert_h2_ump45", "ch_expert_h2_kriss",
"ch_expert_h2_p90", "ch_expert_h2_uzi", "ch_expert_h2_ak74u", "ch_expert_h2_sa80", "ch_expert_h2_rpd", "ch_expert_h2_mg4",
"ch_expert_h2_aug", "ch_expert_h2_m240", "ch_expert_h2_cheytac", "ch_expert_h2_barrett", "ch_expert_h2_wa2000",
"ch_expert_h2_m21", "ch_expert_h2_m40a3", "ch_expert_h2_pp2000", "ch_expert_h2_glock", "ch_expert_h2_beretta393", "ch_expert_h2_tmp",
"ch_expert_h2_spas12", "ch_expert_h2_aa12", "ch_expert_h2_striker", "ch_expert_h2_ranger", "ch_expert_h2_m1014", "ch_expert_h2_model1887",
"ch_expert_h2_winchester1200", "ch_expert_h2_usp", "ch_expert_h2_coltanaconda", "ch_expert_h2_m9", "ch_expert_h2_deserteagle",
"ch_expert_h2_colt45", "ch_marksman_h2_sickle", "ch_marksman_h2_shovel", "ch_marksman_h2_karambit", "ch_marksman_h2_icepick",
"ch_marksman_h2_hatchet", "ch_h2_ar_diamond", "ch_h2_smg_diamond", "ch_h2_lmg_diamond", "ch_h2_sniper_diamond", "ch_h2_machine_pistol_diamond",
"ch_h2_shotgun_diamond", "ch_h2_pistol_diamond", "ch_h2_melee_diamond", "ch_h2_darkmatter", "ch_marksman_h2_m4_2", "ch_marksman_h2_famas_2",
"ch_marksman_h2_scar_2", "ch_marksman_h2_tavor_2", "ch_marksman_h2_fal_2", "ch_marksman_h2_m16_2", "ch_marksman_h2_masada_2",
"ch_marksman_h2_fn2000_2", "ch_marksman_h2_ak47_2", "ch_marksman_h2_mp5k_2", "ch_marksman_h2_ump45_2", "ch_marksman_h2_kriss_2",
"ch_marksman_h2_p90_2", "ch_marksman_h2_uzi_2", "ch_marksman_h2_ak74u_2", "ch_marksman_h2_sa80_2", "ch_marksman_h2_rpd_2",
"ch_marksman_h2_mg4_2", "ch_marksman_h2_aug_2", "ch_marksman_h2_m240_2", "ch_marksman_h2_cheytac_2", "ch_marksman_h2_barrett_2",
"ch_marksman_h2_wa2000_2", "ch_marksman_h2_m21_2", "ch_marksman_h2_m40a3_2", "ch_marksman_h2_pp2000_2", "ch_marksman_h2_glock_2",
"ch_marksman_h2_beretta393_2", "ch_marksman_h2_tmp_2", "ch_marksman_h2_spas12_2", "ch_marksman_h2_aa12_2", "ch_marksman_h2_striker_2",
"ch_marksman_h2_ranger_2", "ch_marksman_h2_m1014_2", "ch_marksman_h2_model1887_2", "ch_marksman_h2_winchester1200_2", "ch_marksman_h2_usp_2",
"ch_marksman_h2_coltanaconda_2", "ch_marksman_h2_m9_2", "ch_marksman_h2_deserteagle_2", "ch_marksman_h2_colt45_2", "ch_marksman_h2_sickle_2",
"ch_marksman_h2_shovel_2", "ch_marksman_h2_karambit_2", "ch_marksman_h2_hatchet_2", "ch_marksman_h2_icepick_2", "ch_marksman_h2_m4_3",
"ch_marksman_h2_famas_3", "ch_marksman_h2_scar_3", "ch_marksman_h2_tavor_3", "ch_marksman_h2_fal_3", "ch_marksman_h2_m16_3", "ch_marksman_h2_masada_3",
"ch_marksman_h2_fn2000_3", "ch_marksman_h2_ak47_3", "ch_marksman_h2_mp5k_3", "ch_marksman_h2_ump45_3", "ch_marksman_h2_kriss_3", "ch_marksman_h2_p90_3",
"ch_marksman_h2_uzi_3", "ch_marksman_h2_ak74u_3", "ch_marksman_h2_sa80_3", "ch_marksman_h2_rpd_3", "ch_marksman_h2_mg4_3", "ch_marksman_h2_aug_3",
"ch_marksman_h2_m240_3", "ch_marksman_h2_cheytac_3", "ch_marksman_h2_barrett_3", "ch_marksman_h2_wa2000_3", "ch_marksman_h2_m21_3",
"ch_marksman_h2_m40a3_3", "ch_marksman_h2_pp2000_3", "ch_marksman_h2_glock_3", "ch_marksman_h2_beretta393_3", "ch_marksman_h2_tmp_3",
"ch_marksman_h2_spas12_3", "ch_marksman_h2_aa12_3", "ch_marksman_h2_striker_3", "ch_marksman_h2_ranger_3", "ch_marksman_h2_m1014_3",
"ch_marksman_h2_model1887_3", "ch_marksman_h2_winchester1200_3", "ch_marksman_h2_usp_3", "ch_marksman_h2_coltanaconda_3", "ch_marksman_h2_m9_3",
"ch_marksman_h2_deserteagle_3", "ch_marksman_h2_colt45_3", "ch_marksman_h2_sickle_3", "ch_marksman_h2_shovel_3", "ch_marksman_h2_karambit_3",
"ch_marksman_h2_hatchet_3", "ch_marksman_h2_icepick_3", "ch_marksman_h2_m4_4", "ch_marksman_h2_famas_4", "ch_marksman_h2_scar_4", "ch_marksman_h2_tavor_4",
"ch_marksman_h2_fal_4", "ch_marksman_h2_m16_4", "ch_marksman_h2_masada_4", "ch_marksman_h2_fn2000_4", "ch_marksman_h2_ak47_4", "ch_marksman_h2_mp5k_4",
"ch_marksman_h2_ump45_4", "ch_marksman_h2_kriss_4", "ch_marksman_h2_p90_4", "ch_marksman_h2_uzi_4", "ch_marksman_h2_ak74u_4", "ch_marksman_h2_sa80_4",
"ch_marksman_h2_rpd_4", "ch_marksman_h2_mg4_4", "ch_marksman_h2_aug_4", "ch_marksman_h2_m240_4", "ch_marksman_h2_cheytac_4", "ch_marksman_h2_barrett_4",
"ch_marksman_h2_wa2000_4", "ch_marksman_h2_m21_4", "ch_marksman_h2_m40a3_4", "ch_marksman_h2_pp2000_4", "ch_marksman_h2_glock_4", "ch_marksman_h2_beretta393_4",
"ch_marksman_h2_tmp_4", "ch_marksman_h2_spas12_4", "ch_marksman_h2_aa12_4", "ch_marksman_h2_striker_4", "ch_marksman_h2_ranger_4", "ch_marksman_h2_m1014_4",
"ch_marksman_h2_model1887_4", "ch_marksman_h2_winchester1200_4", "ch_marksman_h2_usp_4", "ch_marksman_h2_coltanaconda_4", "ch_marksman_h2_m9_4", "ch_marksman_h2_deserteagle_4",
"ch_marksman_h2_colt45_4", "ch_marksman_h2_sickle_4", "ch_marksman_h2_shovel_4", "ch_marksman_h2_karambit_4", "ch_marksman_h2_hatchet_4", "ch_marksman_h2_icepick_4", "ch_bootcamp_mastery",
"ch_uav", "ch_airstrike", "ch_chopper", "ch_cuav_earned", "ch_carepack_earned", "ch_sentry_earned", "ch_predator_earned", "ch_harrier_earned", "ch_megadrop_earned", "ch_stealthstrike_earned",
"ch_pavelow_earned", "ch_choppergun_earned", "ch_ac130_earned", "ch_emp_earned", "ch_nuke_earned", "ch_sentry_kills", "ch_predator_kills", "ch_harrier_kills", "ch_stealthstrike_kills",
"ch_pavelow_kills", "ch_choppergun_kills", "ch_ac130_kills", "ch_nuke_kills", "ch_flyswatter", "ch_marathon", "ch_goodbye", "ch_basejump", "ch_crouchshot", "ch_proneshot",
"ch_grenadekill", "ch_assists", "ch_xrayvision", "ch_vandalism", "ch_exposed", "ch_backdraft", "ch_knifevet", "ch_gamemode_mastery", "ch_war_crushing", "ch_collector",
"ch_save_yourself", "ch_conf_wins", "ch_denial", "ch_victor_dm", "ch_teamplayer", "ch_victor_sd", "ch_mvp_tdm", "ch_dom_alphalock", "ch_dom_bravolock", "ch_dom_charlielock",
"ch_dom_aggression", "ch_dom_wins", "ch_teamplayer_hc", "ch_victor_sab", "ch_mvp_thc", "ch_bombdown", "ch_bombdefender", "ch_bombplanter", "ch_hero", "ch_lastmanstanding", "ch_sd_destroyer",
"ch_dm_crushing", "ch_dm_wins", "ch_koth_wins", "ch_hq_aggression", "ch_hq_destroyer", "ch_killer_mastery", "ch_claymoreshot", "ch_expert_assault", "ch_expert_smg", "ch_expert_lmg",
"ch_laststandvet", "ch_masterchef", "ch_airstrikevet", "ch_choppervet", "ch_concussionvet", "ch_multirpg", "ch_martyrdomvet", "ch_multiclaymore", "ch_stealth", "ch_invisible", "ch_counterclaymore",
"ch_counterc4", "ch_humiliation_mastery", "ch_airborne", "ch_multifrag", "ch_carpetbomb", "ch_mgmaster", "ch_slasher", "ch_multic4", "ch_hotpotato", "ch_carbomb", "ch_backstabber", "ch_slowbutsure",
"ch_flashbangvet", "ch_miserylovescompany", "ch_ouch", "ch_rival", "ch_cruelty", "ch_thinkfast", "ch_thinkfastconcussion", "ch_thinkfastflash", "ch_returntosender", "ch_blindfire", "ch_perk_mastery",
"ch_stoppingpower", "ch_sleightofhand", "ch_uavjammer", "ch_sonicboom", "ch_extremeconditioning", "ch_steadyaim", "ch_laststand", "ch_martyrdom", "ch_ironlungs", "ch_deadsilence", "ch_valor_mastery",
"ch_thebrink", "ch_collateraldamage", "ch_theedge", "ch_flawless", "ch_tangodown", "ch_hardlanding", "ch_extremecruelty", "ch_fastswap", "ch_starplayer", "ch_howthe", "ch_dominos", "ch_nosecrets",
"ch_afterburner", "ch_airsuperiority", "ch_countermvp", "ch_invincible", "ch_survivalist", "ch_avenger", "ch_afterlife", "ch_backstab", "ch_revenge", "ch_killer_double", "ch_killer_triple",
"ch_killer_quadra", "ch_killer_penta", "ch_killer_hexa", "ch_killer_bloodthirsty", "ch_killer_merciless", "ch_killer_ruthless", "ch_killer_relentless", "ch_killer_brutal", "ch_killer_vicious",
"ch_kingslayer", "ch_prestige_mastery", "ch_headhunter", "ch_fearless", "ch_triplehurt", "ch_backfire", "ch_deadeye", "ch_flash", "ch_superstar", "ch_mvp", "ch_superior", "ch_moviestar",
"ch_uav_assist", "ch_launcher_kill", "ch_precision_farsight", "ch_savior", "ch_humiliation_finders", "ch_ninja", "ch_kills_stolen", "ch_jump_slasher", "ch_attach_glkills", "ch_finishingtouch",
"ch_100_paragon", "ch_150_paragon", "ch_200_paragon", "ch_250_paragon", "ch_300_paragon", "ch_350_paragon", "ch_400_paragon", "ch_450_paragon", "ch_500_paragon", "ch_550_paragon",
"ch_600_paragon", "ch_650_paragon", "ch_700_paragon", "ch_750_paragon", "ch_800_paragon", "ch_850_paragon", "ch_900_paragon", "ch_950_paragon", "ch_1000_paragon", "ch_all_mastery",
"ch_daily_01", "ch_daily_02", "ch_daily_03", "ch_daily_04", "ch_daily_05", "ch_daily_06", "ch_daily_07", "ch_daily_08", "ch_daily_09", "ch_daily_10", "ch_daily_11", "ch_daily_12", "ch_daily_13",
"ch_daily_14", "ch_daily_15", "ch_daily_16", "ch_daily_17", "ch_daily_18", "ch_daily_19", "ch_daily_20", "ch_daily_21", "ch_daily_22", "ch_daily_23", "ch_daily_24", "ch_daily_25", "ch_daily_26",
"ch_daily_27", "ch_daily_28", "ch_daily_29", "ch_daily_30", "ch_daily_31", "ch_daily_32", "ch_daily_33", "ch_daily_34", "ch_daily_35", "ch_daily_36", "ch_daily_37", "ch_daily_38", "ch_daily_39",
"ch_daily_40", "ch_daily_41", "ch_daily_42", "ch_daily_43", "ch_daily_44", "ch_daily_45", "ch_prestige", "ch_prestige_max", "ch_prestige2", "ch_prestige2_ex", "ch_prestige_max2", "ch_prestige2_tokens",
"ch_prestige2_ex_tokens", "ch_rank_csd", "ch_sp_mp_unlock", "ch_coop_mp_unlock", "ch_csd", "ch_null"
};

void initializeUnlockAll() {
	MessageBox(NULL, L"H2M-UnlockAll by marzika", L"H2M-UnlockAll by marzika", MB_ICONINFORMATION);
	auto currentModuleHandle = (__int64)GetModuleHandleA("h1_mp64_ship.exe");
	auto CBuff_AddText_Address = currentModuleHandle + 0x1CF480;

	auto Cbuff_AddText = (void(__fastcall*)(int localClientNum, int controllerIndex, const char* text))(CBuff_AddText_Address);

	Cbuff_AddText(0, 0, "clear;");
	Cbuff_AddText(0, 0, "say ^1H2M^7-UnlockAll by ^1marzika^7 loaded!;");

	//Wipe current stats
	Cbuff_AddText(0, 0, "statsReset;");

	//Prestige 1-10
	for (int i = 0; i < 10; i++) {
		Cbuff_AddText(0, 0, "setRankedStat rankedMatchData experience 99999999;");
		Cbuff_AddText(0, 0, "prestigeReset;");
	}

	//Prestige 10 Level 1000
	Cbuff_AddText(0, 0, "setRankedStat rankedMatchData experience 91295739;");

	//Challenges
	for (std::list<std::string>::const_iterator i = challenges.begin(); i != challenges.end(); ++i)
	{
		Cbuff_AddText(0, 0, ("setRankedStat rankedMatchData challengeProgress " + *i + " 2000;").c_str());
		Cbuff_AddText(0, 0, ("setRankedStat rankedMatchData challengeState " + *i + " 10;").c_str());
	}
	return;
}