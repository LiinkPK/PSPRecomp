/* Entry 0x0898CAF4 | file offset 0x00189ACC | FUN_0898caf4 | bytes 436 */

undefined4 FUN_0898caf4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_90;
  undefined1 auStack_8c [32];
  undefined1 local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined *local_30;
  int local_2c;
  
  local_90 = 0;
  local_6c = 1;
  local_60 = 0;
  local_68 = 0;
  local_64 = 0;
  local_30 = &DAT_089c5718;
  local_2c = 0;
  FUN_0898ebbc(auStack_8c,&local_30);
  FUN_0898ee14(&local_90,
               *(int *)(param_1 + 0x8c) +
               (uint)*(ushort *)
                      (*(int *)(*(int *)(param_1 + 0x90) + 8) +
                      (*(int *)(*(int *)(param_1 + 0x90) + 4) + 2) * 2) + 0x60,param_2 + 0x16,0,1);
  FUN_0898ee94(0,0,&local_90,*(undefined4 *)(*(int *)(DAT_09b6f478 + 0x8c) + 0x50),
               (int)*(short *)(param_2 + 0x10),1);
  FUN_0898ebdc(auStack_8c,&local_30);
  iVar3 = DAT_09b6f478;
  if (local_2c == 0) {
    local_30 = &DAT_089c5700;
    if (local_68 != 0) {
      iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),local_68);
      iVar3 = iVar3 + (uint)*(ushort *)(*(int *)(*(int *)(iVar3 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar3 + 0xb4) = *(int *)(iVar3 + 0xb4) - iVar1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)
             (local_2c +
              (uint)*(ushort *)
                     (*(int *)(*(int *)(*(int *)(local_2c + 0x40) + 0x1c) +
                              *(short *)(param_2 + 0x14) * 4) + 2) + 0x60);
    local_30 = &DAT_089c5700;
    if (local_68 != 0) {
      iVar1 = FUN_08971010(*(undefined4 *)(DAT_09b6f478 + 0x18),local_68);
      iVar3 = iVar3 + (uint)*(ushort *)(*(int *)(*(int *)(iVar3 + 0x88) + 0x1c8) + 0x18) * 4;
      *(int *)(iVar3 + 0xb4) = *(int *)(iVar3 + 0xb4) - iVar1;
    }
  }
  return uVar2;
}

