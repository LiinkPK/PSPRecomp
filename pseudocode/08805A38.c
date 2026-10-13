/* Entry 0x08805A38 | file offset 0x00002A10 | FUN_08805a38 | bytes 460 */

void FUN_08805a38(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined4 local_70 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar3 = *(uint *)(param_1 + 0x580);
  if (((uVar3 & 0x100) != 0) && ((bVar1 = (uVar3 & 0x80) != 0, (uVar3 & 0x40) != 0 || (bVar1)))) {
    iVar2 = FUN_08836a30(param_1,auStack_a0,auStack_90,auStack_80,local_70,bVar1);
    if (iVar2 != 0) {
      iVar2 = DAT_089d5ec0 + 0x720;
      FUN_0885eaa8(iVar2,auStack_a0);
      FUN_089a38a8(&local_40,auStack_a0,auStack_90);
      local_50 = local_40;
      local_4c = local_3c;
      local_48 = local_38;
      local_44 = local_34;
      local_60 = local_40;
      local_5c = local_3c;
      local_58 = local_38;
      local_54 = local_34;
      FUN_0885eac4(iVar2,&local_60);
      FUN_0885eae0(iVar2,auStack_80);
      FUN_0885e860(iVar2);
      FUN_0887358c(local_70[0],DAT_089d5ec0 + 0x7e0);
      FUN_08866ba8(DAT_089d5ec0);
      FUN_088a5f1c(DAT_089d6d80,DAT_089d5ec0 + 0x720,DAT_089d5ec0 + 0x7e0);
    }
    uVar3 = *(uint *)(param_1 + 0x580);
    *(uint *)(param_1 + 0x580) = uVar3 & 0xffffffbf;
    *(uint *)(param_1 + 0x580) = uVar3 & 0xffffff3f;
  }
  return;
}

