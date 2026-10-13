/* Entry 0x088E9C14 | file offset 0x000E6BEC | FUN_088e9c14 | bytes 1116 */

void FUN_088e9c14(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_08933c28(DAT_089d85e8);
  uVar1 = FUN_088820d8(0x2000);
  *param_1 = uVar1;
  FUN_0886504c(param_1 + 1,uVar1,0x2000);
  param_1[0xb] = 1;
  param_1[0xc] = 1;
  param_1[0x618] = 0;
  FUN_08866aa8(0,0,0);
  FUN_088d16a4(DAT_089d7830);
  FUN_088a0d40();
  FUN_088dfba0(DAT_089d7e78);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_088e8efc(param_1);
  }
  else {
    FUN_088e8df8(param_1);
  }
  uVar1 = FUN_088dfc30();
  FUN_08841eb4(uVar1);
  FUN_08841cc0(param_1[1],1,30000,1,40000,0xffffffff,70000,0xffffffff,69000,0xffffffff,73000,1,31000
               ,1,0x797c,0xffffffff,58000,0xffffffff,0x18a88);
  FUN_088a5a98(param_1[1],1,0xffffffff,0xdb24,0xdb88,0xe808,0x1101c,80000,100000,0x10fe0,0x139ac);
  FUN_088a9814(param_1[1],1,56000);
  uVar1 = DAT_089d6ac8;
  uVar2 = FUN_088dfc30();
  FUN_0889384c(uVar1,uVar2);
  uVar1 = FUN_08899300();
  uVar2 = FUN_088dfc30();
  FUN_08898df8(uVar1,uVar2);
  FUN_08899758(param_1[1],1,2000);
  FUN_08893b90(param_1[1],1,20000,0xffffffff,60000,0xffffffff,0x13114,1,0xe86c);
  FUN_08893c6c(param_1[1],1,2000);
  FUN_088a5d78(DAT_089d6d80,FUN_08866528,FUN_08866560,0,0,0);
  FUN_088a94f0(DAT_089d6dc8,0);
  func_0x08ad0810(param_1[1],1,0x75f8);
  FUN_0889597c(param_1[1],1,0xd0fc,0xffffffff,0x10f7c);
  uVar1 = DAT_089d6ad0;
  uVar2 = FUN_088dfc30();
  FUN_088958ec(uVar1,uVar2);
  if (DAT_09afee54 != 0) {
    iVar3 = sceGeEdramGetAddr();
    iVar3 = iVar3 + DAT_09afee54;
    uVar1 = FUN_08866ef4(DAT_089d5ec0);
    FUN_088711c0(iVar3,uVar1,0x1e0,0x110);
  }
  FUN_088823c4(param_1[1],0xffffffff,57000,FUN_088e9a6c,"DrawMovieTask");
  FUN_088823c4(param_1[1],0xffffffff,0x18e70,FUN_088e9a90,"DrawScreenFadeTask");
  FUN_088823c4(param_1[1],1,0x7594,FUN_088e9b94,"map_unique::MAP_UNIQUE_MANAGER::Update");
  FUN_088823c4(param_1[1],0xffffffff,0xe89e,FUN_088e9bb4,"map_unique::MAP_UNIQUE_MANAGER::FirstDraw"
              );
  FUN_088823c4(param_1[1],0xffffffff,0xec54,FUN_088e9bd4,
               "map_unique::MAP_UNIQUE_MANAGER::SecondDraw");
  FUN_088823c4(param_1[1],0xffffffff,85000,FUN_088e9bf4,"map_unique::MAP_UNIQUE_MANAGER::Draw");
  FUN_088823c4(param_1[1],1,0xd1f6,FUN_088e8cfc,"obj::PROG_EFFECT_MANAGER::Update");
  FUN_088823c4(param_1[1],0xffffffff,83000,FUN_088e8d1c,"obj::PROG_EFFECT_MANAGER::Draw");
  FUN_088823c4(param_1[1],0xffffffff,0x186a1,FUN_08861030,"DEPTH_BLUR::Draw");
  FUN_088823c4(param_1[1],0xffffffff,0x186a2,FUN_08875958,"SEPIA::Draw");
  FUN_088823c4(param_1[1],1,0x44c,FUN_088e9ab4,"ExecTalkEventTask");
  *(undefined1 *)((int)param_1 + 0x1b05) = 0;
  return;
}

