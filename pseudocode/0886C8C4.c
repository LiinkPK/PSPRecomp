/* Entry 0x0886C8C4 | file offset 0x0006989C | FUN_0886c8c4 | bytes 232 */

void FUN_0886c8c4(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = DAT_089d5f94;
  iVar3 = param_1 + param_2 * 4;
  uVar2 = *(undefined4 *)(DAT_089d5f94 + 0x14);
  if (*(int *)(iVar3 + 0x94) != 0) {
    FUN_0885c538(uVar2,*(int *)(iVar3 + 0x94),0);
    *(undefined4 *)(iVar3 + 0x94) = 0;
    uVar2 = *(undefined4 *)(iVar1 + 0x14);
  }
  param_1 = param_1 + param_3 * 4;
  uVar2 = FUN_0885c6cc(uVar2,*(undefined4 *)(param_1 + 0x9c),0,0,1,0);
  uVar5 = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(iVar3 + 0x94) = uVar2;
  *(undefined4 *)(iVar3 + 0x9c) = uVar5;
  uVar4 = *(undefined4 *)(param_1 + 0x94);
  sceKernelDcacheWritebackRange(uVar4,uVar5);
  sceDmacMemcpy(uVar2,uVar4,uVar5);
  sceKernelDcacheInvalidateRange(uVar2,uVar5);
  return;
}

