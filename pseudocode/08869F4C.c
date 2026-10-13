/* Entry 0x08869F4C | file offset 0x00066F24 | FUN_08869f4c | bytes 324 */

undefined4 FUN_08869f4c(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_220 [256];
  undefined1 auStack_120 [256];
  
  FUN_089359a4(auStack_220,param_3);
  FUN_08935c7c(auStack_220,&DAT_089c9560);
  iVar1 = FUN_089404a8(*(undefined4 *)(param_2 + 0xc),10);
  if ((0 < iVar1) && (iVar5 = 0, 0 < iVar1)) {
    do {
      uVar2 = FUN_08940528(*(undefined4 *)(param_2 + 0xc),10,iVar5);
      puVar3 = (ushort *)FUN_08940528(uVar2,0x12,0);
      if ((*puVar3 & 0x8000) == 0) {
        puVar3 = (ushort *)((int)puVar3 + *(int *)(puVar3 + 6));
      }
      else if ((*puVar3 & 0x8000) == 0) {
        puVar3 = (ushort *)((int)puVar3 + (uint)puVar3[1]);
      }
      else {
        puVar3 = puVar3 + 4;
      }
      FUN_089359a4(auStack_120,puVar3);
      FUN_08935c7c(auStack_120,&DAT_089c9560);
      iVar4 = FUN_0893585c(auStack_220,auStack_120);
      if (iVar4 == 0) {
        uVar2 = FUN_089b0f00(*(undefined4 *)(param_2 + 8),iVar5);
        uVar2 = FUN_089b1828(uVar2);
        return uVar2;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  return 0;
}

