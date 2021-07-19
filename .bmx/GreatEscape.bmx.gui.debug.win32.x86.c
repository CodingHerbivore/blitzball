#include "GreatEscape.bmx.gui.debug.win32.x86.h"
static BBString _s10={
	&bbStringClass,
	0x68eca678877a0c7c,
	2,
	{13,10}
};
static BBString _s15={
	&bbStringClass,
	0xe910310dc4512c60,
	12,
	{32,108,105,118,101,115,32,108,101,102,116,33}
};
static BBString _s18={
	&bbStringClass,
	0x94db953611620bf1,
	1,
	{62}
};
static BBString _s17={
	&bbStringClass,
	0x2cc2daa52b2963ea,
	9,
	{62,32,76,105,118,101,115,32,60}
};
static BBString _s0={
	&bbStringClass,
	0x75cdc067fd4d9b00,
	64,
	{65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81
	,82,83,84,85,86,87,88,89,90,97,98,99,100,101,102,103
	,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119
	,120,121,122,48,49,50,51,52,53,54,55,56,57,43,47}
};
static BBString _s1={
	&bbStringClass,
	0xf25a07ea0c0e69f,
	54,
	{65,110,32,101,108,101,109,101,110,116,32,119,105,116,104,32,116
	,104,101,32,115,97,109,101,32,107,101,121,32,97,108,114,101
	,97,100,121,32,101,120,105,115,116,115,32,105,110,32,116,104
	,101,32,109,97,112}
};
static BBString _s13={
	&bbStringClass,
	0x5c193d05e07c6956,
	29,
	{80,114,101,115,115,32,83,80,65,67,69,32,116,111,32,115,101
	,114,118,101,32,116,104,101,32,98,97,108,108}
};
static BBString _s16={
	&bbStringClass,
	0x55154203e7bedcf1,
	7,
	{83,99,111,114,101,32,60}
};
static BBString _s2={
	&bbStringClass,
	0xbfd0800945fa68b4,
	18,
	{84,104,101,32,113,117,101,117,101,32,105,115,32,101,109,112,116
	,121}
};
static BBString _s3={
	&bbStringClass,
	0x5c2b786e4055ff04,
	18,
	{84,104,101,32,115,116,97,99,107,32,105,115,32,101,109,112,116
	,121}
};
static BBString _s14={
	&bbStringClass,
	0x36fe679ad636cb57,
	9,
	{89,111,117,32,104,97,118,101,32}
};
static BBString _s12={
	&bbStringClass,
	0xa9ba55e031555740,
	8,
	{98,97,108,108,46,112,110,103}
};
static BBString _s11={
	&bbStringClass,
	0xdf152773cac82b9d,
	7,
	{98,97,116,46,112,110,103}
};
static BBString _s4={
	&bbStringClass,
	0xf8c407ed2d3563fa,
	13,
	{108,105,115,116,32,105,115,32,101,109,112,116,121}
};
static BBString _s9={
	&bbStringClass,
	0x558220868d858e40,
	37,
	{108,111,119,101,114,86,97,108,117,101,32,105,115,32,103,114,101
	,97,116,101,114,32,116,104,97,110,32,117,112,112,101,114,86
	,97,108,117,101}
};
static BBString _s5={
	&bbStringClass,
	0x42ce070328eb2a04,
	4,
	{110,111,100,101}
};
static BBString _s7={
	&bbStringClass,
	0x7f0d637a59d0dd2b,
	25,
	{110,111,100,101,32,105,115,32,102,114,111,109,32,97,110,111,116
	,104,101,114,32,108,105,115,116}
};
static BBString _s6={
	&bbStringClass,
	0xdf1cc2d23552cb81,
	29,
	{110,111,100,101,32,112,97,114,101,110,116,32,108,105,115,116,32
	,105,115,32,100,105,102,102,101,114,101,110,116}
};
static BBString _s8={
	&bbStringClass,
	0x44dc2ffe03a7a88e,
	5,
	{111,116,104,101,114}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_10{int kind; const char *name; BBDebugDecl decls[11]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
BBINT _m_GreatEscape_DrawGradient(BBINT bbt_increment){
	BBINT bbt_y=0;
	struct BBDebugScope_2 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"DrawGradient",
		{
			{
				BBDEBUGDECL_LOCAL,
				"increment",
				"i",
				.var_address=&bbt_increment
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y
			},
			BBDEBUGDECL_END 
		}
	};
	bbOnDebugEnterScope(&__scope);
	struct BBDebugStm __stmt_0 = {0x4c32248fae840c76, 21, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_y=0;
	struct BBDebugStm __stmt_1 = {0x4c32248fae840c76, 23, 0};
	bbOnDebugEnterStm(&__stmt_1);
	while(bbt_y<480){
		BBFLOAT bbt_blueshade=0;
		BBINT bbt_blue=0;
		struct BBDebugScope_2 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"blueshade",
					"f",
					.var_address=&bbt_blueshade
				},
				{
					BBDEBUGDECL_LOCAL,
					"blue",
					"i",
					.var_address=&bbt_blue
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x4c32248fae840c76, 24, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_blueshade=(((BBFLOAT)bbt_y)/480.000000f);
		struct BBDebugStm __stmt_1 = {0x4c32248fae840c76, 25, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_blue=((BBINT)(192.000000f*bbt_blueshade));
		struct BBDebugStm __stmt_2 = {0x4c32248fae840c76, 26, 0};
		bbOnDebugEnterStm(&__stmt_2);
		brl_max2d_SetColor(0,0,bbt_blue);
		struct BBDebugStm __stmt_3 = {0x4c32248fae840c76, 27, 0};
		bbOnDebugEnterStm(&__stmt_3);
		brl_max2d_DrawRect(0.000000000f,((BBFLOAT)bbt_y),640.000000f,((BBFLOAT)bbt_increment));
		struct BBDebugStm __stmt_4 = {0x4c32248fae840c76, 28, 0};
		bbOnDebugEnterStm(&__stmt_4);
		bbt_y=(bbt_y+bbt_increment);
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {0x4c32248fae840c76, 30, 0};
	bbOnDebugEnterStm(&__stmt_2);
	brl_max2d_SetColor(255,255,255);
	bbOnDebugLeaveScope();
	return 0;
}
static int _bb_main_inited = 0;
int _bb_main(){
	if (!_bb_main_inited) {
		_bb_main_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_appstub_appstub();
		__bb_brl_audio_audio();
		__bb_brl_bank_bank();
		__bb_brl_bankstream_bankstream();
		__bb_brl_base64_base64();
		__bb_brl_basic_basic();
		__bb_brl_bmploader_bmploader();
		__bb_brl_bytebuffer_bytebuffer();
		__bb_brl_clipboard_clipboard();
		__bb_brl_collections_collections();
		__bb_brl_d3d7max2d_d3d7max2d();
		__bb_brl_d3d9max2d_d3d9max2d();
		__bb_brl_directsoundaudio_directsoundaudio();
		__bb_brl_eventqueue_eventqueue();
		__bb_brl_freeaudioaudio_freeaudioaudio();
		__bb_brl_freetypefont_freetypefont();
		__bb_brl_glgraphics_glgraphics();
		__bb_brl_glmax2d_glmax2d();
		__bb_brl_gnet_gnet();
		__bb_brl_jpgloader_jpgloader();
		__bb_brl_map_map();
		__bb_brl_matrix_matrix();
		__bb_brl_maxlua_maxlua();
		__bb_brl_maxunit_maxunit();
		__bb_brl_maxutil_maxutil();
		__bb_brl_objectlist_objectlist();
		__bb_brl_oggloader_oggloader();
		__bb_brl_openalaudio_openalaudio();
		__bb_brl_platform_platform();
		__bb_brl_pngloader_pngloader();
		__bb_brl_quaternion_quaternion();
		__bb_brl_randomdefault_randomdefault();
		__bb_brl_retro_retro();
		__bb_brl_tgaloader_tgaloader();
		__bb_brl_threadpool_threadpool();
		__bb_brl_timer_timer();
		__bb_brl_timerdefault_timerdefault();
		__bb_brl_uuid_uuid();
		__bb_brl_volumes_volumes();
		__bb_brl_wavloader_wavloader();
		__bb_pub_freejoy_freejoy();
		__bb_pub_freeprocess_freeprocess();
		__bb_pub_glad_glad();
		__bb_pub_nfd_nfd();
		__bb_pub_nx_nx();
		__bb_pub_opengles_opengles();
		__bb_pub_opengles3_opengles3();
		__bb_pub_vulkan_vulkan();
		__bb_pub_xmmintrin_xmmintrin();
		bbRegisterSource(0x4c32248fae840c76, "C:/Users/andrew/Documents/BlitzSource/Escape/GreatEscape.bmx");
		bbRegisterSource(0xdcb6b0b14f86d9e2, "C:/Users/andrew/Documents/BlitzMax_win32_0.129.3.45/BlitzMax/mod/brl.mod/collections.mod/list.bmx");
		bbRegisterSource(0xec252f1bba69e95b, "C:/Users/andrew/Documents/BlitzMax_win32_0.129.3.45/BlitzMax/mod/brl.mod/collections.mod/sort.bmx");
		struct brl_max2d_image_TImage_obj* bbt_bat=(struct brl_max2d_image_TImage_obj*)(&bbNullObject);
		struct brl_max2d_image_TImage_obj* bbt_ball=(struct brl_max2d_image_TImage_obj*)(&bbNullObject);
		BBINT bbt_px=0;
		BBINT bbt_py=0;
		BBINT bbt_lives=0;
		BBINT bbt_bx=0;
		BBINT bbt_by=0;
		BBINT bbt_sx=0;
		BBINT bbt_sy=0;
		BBINT bbt_score=0;
		struct BBDebugScope_10 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"GreatEscape",
			{
				{
					BBDEBUGDECL_LOCAL,
					"bat",
					":TImage",
					.var_address=&bbt_bat
				},
				{
					BBDEBUGDECL_LOCAL,
					"ball",
					":TImage",
					.var_address=&bbt_ball
				},
				{
					BBDEBUGDECL_LOCAL,
					"px",
					"i",
					.var_address=&bbt_px
				},
				{
					BBDEBUGDECL_LOCAL,
					"py",
					"i",
					.var_address=&bbt_py
				},
				{
					BBDEBUGDECL_LOCAL,
					"lives",
					"i",
					.var_address=&bbt_lives
				},
				{
					BBDEBUGDECL_LOCAL,
					"bx",
					"i",
					.var_address=&bbt_bx
				},
				{
					BBDEBUGDECL_LOCAL,
					"by",
					"i",
					.var_address=&bbt_by
				},
				{
					BBDEBUGDECL_LOCAL,
					"sx",
					"i",
					.var_address=&bbt_sx
				},
				{
					BBDEBUGDECL_LOCAL,
					"sy",
					"i",
					.var_address=&bbt_sy
				},
				{
					BBDEBUGDECL_LOCAL,
					"score",
					"i",
					.var_address=&bbt_score
				},
				BBDEBUGDECL_END 
			}
		};
		bbOnDebugEnterScope(&__scope);
		struct BBDebugStm __stmt_0 = {0x4c32248fae840c76, 2, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_graphics_Graphics(640,480,0,60,0,-1,-1);
		struct BBDebugStm __stmt_1 = {0x4c32248fae840c76, 5, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_bat=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s11,-1);
		struct BBDebugStm __stmt_2 = {0x4c32248fae840c76, 6, 0};
		bbOnDebugEnterStm(&__stmt_2);
		bbt_ball=(struct brl_max2d_image_TImage_obj*)brl_max2d_LoadImage((BBOBJECT)&_s12,-1);
		struct BBDebugStm __stmt_3 = {0x4c32248fae840c76, 9, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_px=256;
		struct BBDebugStm __stmt_4 = {0x4c32248fae840c76, 10, 0};
		bbOnDebugEnterStm(&__stmt_4);
		bbt_py=400;
		struct BBDebugStm __stmt_5 = {0x4c32248fae840c76, 11, 0};
		bbOnDebugEnterStm(&__stmt_5);
		bbt_lives=3;
		struct BBDebugStm __stmt_6 = {0x4c32248fae840c76, 14, 0};
		bbOnDebugEnterStm(&__stmt_6);
		bbt_bx=0;
		struct BBDebugStm __stmt_7 = {0x4c32248fae840c76, 15, 0};
		bbOnDebugEnterStm(&__stmt_7);
		bbt_by=0;
		struct BBDebugStm __stmt_8 = {0x4c32248fae840c76, 16, 0};
		bbOnDebugEnterStm(&__stmt_8);
		bbt_sx=0;
		struct BBDebugStm __stmt_9 = {0x4c32248fae840c76, 17, 0};
		bbOnDebugEnterStm(&__stmt_9);
		bbt_sy=0;
		struct BBDebugStm __stmt_10 = {0x4c32248fae840c76, 33, 0};
		bbOnDebugEnterStm(&__stmt_10);
		bbt_score=0;
		struct BBDebugStm __stmt_11 = {0x4c32248fae840c76, 36, 0};
		bbOnDebugEnterStm(&__stmt_11);
		brl_system_HideMouse();
		struct BBDebugStm __stmt_12 = {0x4c32248fae840c76, 38, 0};
		bbOnDebugEnterStm(&__stmt_12);
		while(!(brl_polledinput_KeyHit(27)!=0) && !(brl_polledinput_AppTerminate()!=0)){
			BBSTRING bbt_m=(&bbEmptyString);
			struct BBDebugScope_1 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"m",
						"$",
						.var_address=&bbt_m
					},
					BBDEBUGDECL_END 
				}
			};
			bbOnDebugEnterScope(&__scope);
			struct BBDebugStm __stmt_0 = {0x4c32248fae840c76, 40, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_m=&bbEmptyString;
			struct BBDebugStm __stmt_1 = {0x4c32248fae840c76, 41, 0};
			bbOnDebugEnterStm(&__stmt_1);
			brl_max2d_Cls();
			struct BBDebugStm __stmt_2 = {0x4c32248fae840c76, 43, 0};
			bbOnDebugEnterStm(&__stmt_2);
			_m_GreatEscape_DrawGradient(24);
			struct BBDebugStm __stmt_3 = {0x4c32248fae840c76, 46, 0};
			bbOnDebugEnterStm(&__stmt_3);
			brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)bbt_ball,((BBFLOAT)bbt_bx),((BBFLOAT)bbt_by),0);
			struct BBDebugStm __stmt_4 = {0x4c32248fae840c76, 47, 0};
			bbOnDebugEnterStm(&__stmt_4);
			brl_max2d_DrawImage((struct brl_max2d_image_TImage_obj*)bbt_bat,((BBFLOAT)bbt_px),((BBFLOAT)bbt_py),0);
			struct BBDebugStm __stmt_5 = {0x4c32248fae840c76, 50, 0};
			bbOnDebugEnterStm(&__stmt_5);
			if(bbt_sx==0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {0x4c32248fae840c76, 51, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_m=&_s13;
				struct BBDebugStm __stmt_1 = {0x4c32248fae840c76, 52, 0};
				bbOnDebugEnterStm(&__stmt_1);
				brl_max2d_DrawText(bbt_m,((BBFLOAT)((640-brl_max2d_TextWidth(bbt_m))/2)),240.000000f);
				struct BBDebugStm __stmt_2 = {0x4c32248fae840c76, 53, 0};
				bbOnDebugEnterStm(&__stmt_2);
				bbt_m=bbStringConcat(bbStringConcat(&_s14,bbStringFromInt(bbt_lives)),&_s15);
				struct BBDebugStm __stmt_3 = {0x4c32248fae840c76, 54, 0};
				bbOnDebugEnterStm(&__stmt_3);
				brl_max2d_DrawText(bbt_m,((BBFLOAT)((640-brl_max2d_TextWidth(bbt_m))/2)),254.000000f);
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_6 = {0x4c32248fae840c76, 57, 0};
			bbOnDebugEnterStm(&__stmt_6);
			bbt_m=bbStringConcat(bbStringConcat(bbStringConcat(bbStringConcat(&_s16,bbStringFromInt(bbt_score)),&_s17),bbStringFromInt(bbt_lives)),&_s18);
			struct BBDebugStm __stmt_7 = {0x4c32248fae840c76, 58, 0};
			bbOnDebugEnterStm(&__stmt_7);
			brl_max2d_DrawText(bbt_m,((BBFLOAT)((640-brl_max2d_TextWidth(bbt_m))/2)),0.000000000f);
			struct BBDebugStm __stmt_8 = {0x4c32248fae840c76, 61, 0};
			bbOnDebugEnterStm(&__stmt_8);
			bbt_px=brl_polledinput_MouseX();
			struct BBDebugStm __stmt_9 = {0x4c32248fae840c76, 62, 0};
			bbOnDebugEnterStm(&__stmt_9);
			if((brl_polledinput_KeyHit(32)!=0) && (bbt_sx==0)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {0x4c32248fae840c76, 63, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_sx=4;
				struct BBDebugStm __stmt_1 = {0x4c32248fae840c76, 64, 0};
				bbOnDebugEnterStm(&__stmt_1);
				bbt_sy=4;
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_10 = {0x4c32248fae840c76, 68, 0};
			bbOnDebugEnterStm(&__stmt_10);
			if(bbt_px<0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {0x4c32248fae840c76, 69, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_px=0;
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_11 = {0x4c32248fae840c76, 71, 0};
			bbOnDebugEnterStm(&__stmt_11);
			if(bbt_px>512){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {0x4c32248fae840c76, 72, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_px=512;
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_12 = {0x4c32248fae840c76, 76, 0};
			bbOnDebugEnterStm(&__stmt_12);
			bbt_bx=(bbt_bx+bbt_sx);
			struct BBDebugStm __stmt_13 = {0x4c32248fae840c76, 77, 0};
			bbOnDebugEnterStm(&__stmt_13);
			bbt_by=(bbt_by+bbt_sy);
			struct BBDebugStm __stmt_14 = {0x4c32248fae840c76, 78, 0};
			bbOnDebugEnterStm(&__stmt_14);
			if((bbt_bx<0) || (bbt_bx>616)){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {0x4c32248fae840c76, 79, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_sx=(bbt_sx*-1);
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_15 = {0x4c32248fae840c76, 81, 0};
			bbOnDebugEnterStm(&__stmt_15);
			if(bbt_by<0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {0x4c32248fae840c76, 82, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_by=0;
				struct BBDebugStm __stmt_1 = {0x4c32248fae840c76, 83, 0};
				bbOnDebugEnterStm(&__stmt_1);
				bbt_sy=(bbt_sy*-1);
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_16 = {0x4c32248fae840c76, 86, 0};
			bbOnDebugEnterStm(&__stmt_16);
			if(bbt_by>bbt_py){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {0x4c32248fae840c76, 87, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_lives=(bbt_lives-1);
				struct BBDebugStm __stmt_1 = {0x4c32248fae840c76, 88, 0};
				bbOnDebugEnterStm(&__stmt_1);
				bbt_bx=0;
				struct BBDebugStm __stmt_2 = {0x4c32248fae840c76, 89, 0};
				bbOnDebugEnterStm(&__stmt_2);
				bbt_by=0;
				struct BBDebugStm __stmt_3 = {0x4c32248fae840c76, 90, 0};
				bbOnDebugEnterStm(&__stmt_3);
				bbt_sx=0;
				struct BBDebugStm __stmt_4 = {0x4c32248fae840c76, 91, 0};
				bbOnDebugEnterStm(&__stmt_4);
				bbt_sy=0;
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_17 = {0x4c32248fae840c76, 95, 0};
			bbOnDebugEnterStm(&__stmt_17);
			if(brl_max2d_ImagesCollide((struct brl_max2d_image_TImage_obj*)bbt_bat,bbt_px,bbt_py,0,(struct brl_max2d_image_TImage_obj*)bbt_ball,bbt_bx,bbt_by,0)!=0){
				struct BBDebugScope __scope = {
					BBDEBUGSCOPE_LOCALBLOCK,
					0,
					{
						BBDEBUGDECL_END 
					}
				};
				bbOnDebugEnterScope(&__scope);
				struct BBDebugStm __stmt_0 = {0x4c32248fae840c76, 96, 0};
				bbOnDebugEnterStm(&__stmt_0);
				bbt_by=(bbt_by-1);
				struct BBDebugStm __stmt_1 = {0x4c32248fae840c76, 97, 0};
				bbOnDebugEnterStm(&__stmt_1);
				bbt_sy=(bbt_sy*-1);
				struct BBDebugStm __stmt_2 = {0x4c32248fae840c76, 98, 0};
				bbOnDebugEnterStm(&__stmt_2);
				bbt_score=(bbt_score+1);
				bbOnDebugLeaveScope();
			}
			struct BBDebugStm __stmt_18 = {0x4c32248fae840c76, 101, 0};
			bbOnDebugEnterStm(&__stmt_18);
			brl_graphics_Flip(-1);
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_13 = {0x4c32248fae840c76, 104, 0};
		bbOnDebugEnterStm(&__stmt_13);
		brl_system_ShowMouse();
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}