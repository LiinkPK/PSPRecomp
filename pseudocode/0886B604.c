/* Entry 0x0886B604 | file offset 0x000685DC | FUN_0886b604 | bytes 184 */

undefined4 FUN_0886b604(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0xa4) < 0) || (*(int *)(param_1 + 0xa8) < 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_089b0e78(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),
                         *(undefined4 *)(param_1 + 0xa4));
    uVar2 = FUN_089b0e78(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),
                         *(undefined4 *)(param_1 + 0xa8));
    iVar3 = FUN_089b1224(uVar1);
    iVar4 = FUN_089b1224(uVar2);
    FUN_089a3868(param_2,iVar3 + 0x30);
    FUN_089a3868(param_3,iVar4 + 0x30);
    uVar1 = 1;
  }
  return uVar1;
}

