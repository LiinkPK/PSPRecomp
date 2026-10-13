/* Entry 0x08856D70 | file offset 0x00053D48 | FUN_08856d70 | bytes 484 */

void FUN_08856d70(int param_1,int param_2,undefined4 param_3,int param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  iVar3 = param_1 + *(int *)(param_1 + 0x134) * 0x20;
  if (((*(int *)(param_1 + 0x134) < 6) && (param_4 != -1)) &&
     (*(int *)(*(int *)(param_2 + 0x390) + 0xcc) != 0)) {
    *(int *)(iVar3 + 0x74) = param_2;
    *(uint *)(iVar3 + 0x7c) = (uint)*(byte *)(*(int *)(param_2 + 0x5a4) + 9);
    iVar1 = FUN_0887ad78(param_3,0,param_4,0,0,0);
    *(int *)(iVar3 + 0x78) = iVar1;
    *(undefined4 *)(iVar3 + 0x80) = 0;
    *(undefined4 *)(iVar3 + 0x84) = 0x42b40000;
    *(undefined1 *)(iVar3 + 0x88) = param_5;
    *(undefined4 *)(iVar3 + 0x8c) = param_3;
    *(int *)(iVar3 + 0x90) = param_4;
    if (iVar1 != 0) {
      FUN_089a3ebc(&local_e0);
      local_a0 = local_e0;
      local_9c = local_dc;
      local_98 = local_d8;
      local_94 = local_d4;
      local_90 = local_d0;
      local_8c = local_cc;
      local_88 = local_c8;
      local_84 = local_c4;
      local_80 = local_c0;
      local_7c = local_bc;
      local_78 = local_b8;
      local_74 = local_b4;
      local_70 = local_b0;
      local_6c = local_ac;
      local_68 = local_a8;
      local_64 = local_a4;
      local_b0 = 0x43700000;
      local_ac = 0x41c00000;
      uVar2 = *(undefined4 *)(iVar3 + 0x78);
      FUN_0887b778(uVar2,&local_e0);
      FUN_0887b820(uVar2,0xff808080);
      FUN_0887b98c(*(undefined4 *)(iVar3 + 0x78));
      FUN_0887b9c4(*(undefined4 *)(iVar3 + 0x78));
      *(uint *)(*(int *)(iVar3 + 0x78) + 0x10) = *(uint *)(*(int *)(iVar3 + 0x78) + 0x10) | 0x8000;
    }
    *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + 1;
  }
  return;
}

