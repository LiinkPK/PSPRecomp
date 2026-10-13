/* Entry 0x088E6F5C | file offset 0x000E3F34 | FUN_088e6f5c | bytes 300 */

void FUN_088e6f5c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar3 = 0;
  iVar2 = param_1 + 0x10;
  do {
    FUN_088e7ae0(iVar2,*(byte *)(param_1 + 0x414) == uVar3);
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 0x100;
  } while ((int)uVar3 < 4);
  iVar2 = DAT_089d5ec0 + 0x720;
  FUN_08874b40(&local_20,iVar2);
  local_40 = local_20;
  local_3c = local_1c;
  local_38 = local_18;
  local_34 = local_14;
  uVar1 = FUN_0885ea90(iVar2);
  FUN_089a3868(auStack_30,uVar1);
  FUN_089a38c4(auStack_30,auStack_30,&local_40);
  FUN_0885eaa8(iVar2,auStack_30);
  uVar1 = FUN_0885ea98(iVar2);
  FUN_089a3868(auStack_30,uVar1);
  FUN_089a38c4(auStack_30,auStack_30,&local_40);
  FUN_0885eac4(iVar2,auStack_30);
  FUN_0885e860(iVar2);
  FUN_088a5f1c(DAT_089d6d80,DAT_089d5ec0 + 0x720,DAT_089d5ec0 + 0x7e0);
  return;
}

