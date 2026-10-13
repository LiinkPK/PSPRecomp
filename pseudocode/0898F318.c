/* Entry 0x0898F318 | file offset 0x0018C2F0 | FUN_0898f318 | bytes 544 */

undefined4 FUN_0898f318(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  undefined1 *local_f0;
  undefined1 auStack_ec [32];
  undefined1 local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined *local_90;
  int local_8c;
  int local_88;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  undefined1 auStack_70 [64];
  
  iVar1 = FUN_0894c8c8(DAT_09b6f478,*(undefined4 *)(DAT_09b6f478 + 0x88),
                       *(undefined4 *)(DAT_09b6f478 + 0x90));
  local_fc = FUN_0898f684(param_2);
  local_100 = &DAT_089dd320;
  local_f8 = 0;
  local_f0 = (undefined1 *)0x0;
  if (iVar1 != 0) {
    local_f0 = (undefined1 *)&local_100;
  }
  local_cc = 1;
  local_c0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_88 = (int)*(short *)(param_2 + 0xa0);
  local_8c = param_1 + 4;
  local_90 = &DAT_089dd308;
  local_f4 = iVar1;
  FUN_0898ebbc(auStack_ec,&local_90);
  local_80 = *(float *)(param_2 + 0x30) * 0.01;
  local_7c = *(float *)(param_2 + 0x34) * 0.01;
  local_74 = 0x3f800000;
  local_78 = *(float *)(param_2 + 0x38) * 0.01;
  FUN_0898f540(auStack_70);
  FUN_0898f784(param_2,&local_f0,auStack_70,&local_80);
  FUN_0898f860(param_2,&local_f0,auStack_70,&local_80);
  iVar1 = DAT_09b6f478;
  if (*(int *)(param_1 + 0x24) == 0) {
    local_90 = &DAT_089c5700;
    if (local_c8 != 0) {
      iVar2 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),local_c8);
      iVar1 = iVar1 + (uint)*(ushort *)(*(int *)(*(int *)(iVar1 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar1 + 0xb4) = *(int *)(iVar1 + 0xb4) - iVar2;
    }
    uVar3 = 0;
  }
  else {
    FUN_0898ebdc(auStack_ec,&local_90);
    iVar1 = DAT_09b6f478;
    uVar3 = *(undefined4 *)(param_1 + 0x24);
    local_90 = &DAT_089c5700;
    if (local_c8 != 0) {
      iVar2 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),local_c8);
      iVar1 = iVar1 + (uint)*(ushort *)(*(int *)(*(int *)(iVar1 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar1 + 0xb4) = *(int *)(iVar1 + 0xb4) - iVar2;
    }
  }
  return uVar3;
}

