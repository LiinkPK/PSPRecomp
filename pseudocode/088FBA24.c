/* Entry 0x088FBA24 | file offset 0x000F89FC | FUN_088fba24 | bytes 444 */

void FUN_088fba24(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_60 [64];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (*(short *)(*(int *)(iVar1 + 0xa68) + 0xc) != -1) {
    FUN_088d3f00(iVar1 + 0x65c,iVar1 + 0xa5c,&DAT_089ccebc);
    puVar2 = *(uint **)(param_1 + 0x30);
    if ((*puVar2 & 4) != 0) {
      FUN_088d44ec(puVar2 + 0x297,puVar2 + 0x3bc,&DAT_089ccf44);
      puVar2 = *(uint **)(param_1 + 0x30);
    }
    FUN_088d4b74(puVar2 + 0x433,0);
    FUN_088da0a8(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xa68),5,auStack_60,auStack_20);
    FUN_088da0a8(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xa68),4,auStack_60,auStack_1c);
    iVar6 = 0;
    iVar1 = *(int *)(param_1 + 0x30);
    iVar5 = 0;
    do {
      iVar4 = *(int *)(iVar1 + 0x10b0) + iVar6;
      if ((iVar4 <= *(int *)(iVar1 + 0x10ac)) &&
         (iVar3 = *(int *)(iVar1 + iVar5 + 0xefc), iVar3 != 0)) {
        if ((*(ushort *)(iVar1 + iVar4 * 0x1c + 0x1c) & 2) == 0) {
          FUN_0887b828(iVar3,auStack_1c);
          iVar1 = *(int *)(param_1 + 0x30);
        }
        else {
          FUN_0887b828(iVar3,auStack_20);
          iVar1 = *(int *)(param_1 + 0x30);
        }
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar6 < 9);
    if ((*(short *)(*(int *)(iVar1 + 0xa68) + 0xc) == 0xb) &&
       ((*(ushort *)(*(int *)(iVar1 + 0xa68) + 0x20) & 0x20) != 0)) {
      FUN_088fbc08(param_1);
      **(uint **)(param_1 + 0x30) = **(uint **)(param_1 + 0x30) & 0xfffffffb;
    }
  }
  return;
}

