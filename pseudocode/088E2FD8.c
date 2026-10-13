/* Entry 0x088E2FD8 | file offset 0x000DFFB0 | FUN_088e2fd8 | bytes 444 */

void FUN_088e2fd8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_30 = 0;
  local_2c = 0;
  DAT_089d5f1c = 1;
  uVar1 = FUN_088fe7c8("menu/M_/pause/common.sequence",0);
  FUN_088fe708("menu/M_/pause/common.sequence",param_2,uVar1,0);
  FUN_088fe944("menu/M_/pause/common.sequence",param_2,uVar1);
  local_30 = 0;
  local_2c = 0;
  FUN_08870b10(param_2,&local_30,&local_2c);
  uVar1 = FUN_0885c6cc(param_4,local_2c,0,0,1,0);
  *(undefined4 *)(param_1 + 0x698) = uVar1;
  FUN_08935524(uVar1,local_30,local_2c);
  *(undefined4 *)(param_1 + 0x69c) = local_2c;
  uVar1 = FUN_088fe7c8("menu/M_/pause/common.gim",0);
  FUN_088fe708("menu/M_/pause/common.gim",param_2,uVar1,0);
  FUN_088fe944("menu/M_/pause/common.gim",param_2,uVar1);
  local_30 = 0;
  local_2c = 0;
  FUN_08870b10(param_2,&local_30,&local_2c);
  uVar1 = FUN_0885c6cc(param_4,local_2c,0,0,1,0);
  *(undefined4 *)(param_1 + 0x6a0) = uVar1;
  FUN_08935524(uVar1,local_30,local_2c);
  *(undefined4 *)(param_1 + 0x6a4) = local_2c;
  uVar1 = FUN_088cf188(DAT_089d7830,*(undefined4 *)(param_1 + 0x698),
                       *(undefined4 *)(param_1 + 0x69c),*(undefined4 *)(param_1 + 0x6a0),local_2c,0,
                       0);
  *(undefined4 *)(param_1 + 0x694) = uVar1;
  DAT_089d5f1c = 0;
  return;
}

