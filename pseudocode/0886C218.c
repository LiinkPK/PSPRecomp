/* Entry 0x0886C218 | file offset 0x000691F0 | FUN_0886c218 | bytes 372 */

void FUN_0886c218(int param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  char cStack_1f;
  
  if (param_3 == '\0') {
    if ((((*(uint *)(*(int *)(param_1 + 0x108) + param_2 * 0xc + 8) & 0x10000) != 0) &&
        (puVar3 = (undefined4 *)FUN_0886cde0(param_1,param_2), puVar3 != (undefined4 *)0x0)) &&
       (puVar4 = (undefined4 *)FUN_0886ce28(param_1,param_2), puVar4 != (undefined4 *)0x0)) {
      cStack_1f = (char)((uint)*puVar3 >> 8);
      if (cStack_1f != 0) {
        FUN_089b493c(puVar3 + cStack_1f);
      }
      cStack_1f = (char)((uint)*puVar4 >> 8);
      if (cStack_1f != 0) {
        FUN_089b493c(puVar4 + cStack_1f);
      }
      iVar5 = *(int *)(param_1 + 0x108) + param_2 * 0xc;
      *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) & 0xfffeffff;
    }
  }
  else {
    iVar1 = FUN_089b0e3c(*(undefined4 *)(param_1 + 0xc));
    for (iVar5 = param_2; iVar5 < iVar1; iVar5 = iVar5 + 1) {
      iVar2 = FUN_089b2ccc(*(undefined4 *)(param_1 + 0xc),iVar5,param_2);
      if (iVar2 != 0) {
        FUN_0886c218(param_1,iVar5,0);
      }
    }
  }
  return;
}

