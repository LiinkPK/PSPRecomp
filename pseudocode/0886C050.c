/* Entry 0x0886C050 | file offset 0x00069028 | FUN_0886c050 | bytes 456 */

void FUN_0886c050(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char cStack_1f;
  
  if (param_4 == '\0') {
    iVar6 = param_2 * 0xc;
    piVar5 = (int *)(*(int *)(param_1 + 0x108) + iVar6);
    if (((piVar5[2] & 0x10000U) == 0) || (*piVar5 != param_3)) {
      *piVar5 = param_3;
      puVar3 = (undefined4 *)FUN_0886cde0(param_1,param_2);
      if (puVar3 != (undefined4 *)0x0) {
        cStack_1f = (char)((uint)*puVar3 >> 8);
        if (cStack_1f != 0) {
          FUN_089b4918(puVar3 + cStack_1f,param_3);
        }
        if (((*(uint *)(*(int *)(param_1 + 0x108) + iVar6 + 8) & 0x10000) == 0) &&
           (puVar3 = (undefined4 *)FUN_0886ce28(param_1,param_2), puVar3 != (undefined4 *)0x0)) {
          cStack_1f = (char)((uint)*puVar3 >> 8);
          if (cStack_1f != 0) {
            uVar4 = FUN_089ad32c(*(undefined4 *)(param_1 + 0xc));
            FUN_089b4948(puVar3 + cStack_1f,uVar4);
          }
          iVar6 = *(int *)(param_1 + 0x108) + iVar6;
          *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) | 0x10000;
        }
      }
    }
  }
  else {
    iVar1 = FUN_089b0e3c(*(undefined4 *)(param_1 + 0xc));
    for (iVar6 = param_2; iVar6 < iVar1; iVar6 = iVar6 + 1) {
      iVar2 = FUN_089b2ccc(*(undefined4 *)(param_1 + 0xc),iVar6,param_2);
      if (iVar2 != 0) {
        FUN_0886c050(param_1,iVar6,param_3,0);
      }
    }
  }
  return;
}

