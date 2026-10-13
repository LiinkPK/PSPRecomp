/* Entry 0x089B5008 | file offset 0x001B1FE0 | FUN_089b5008 | bytes 60 */

void FUN_089b5008(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 != 0) {
    uVar3 = param_2[3];
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *(undefined4 *)(iVar4 + 0x300) = *param_2;
    *(undefined4 *)(iVar4 + 0x30c) = uVar3;
    *(undefined4 *)(iVar4 + 0x304) = uVar1;
    *(undefined4 *)(iVar4 + 0x308) = uVar2;
    FUN_089b5000(0);
    return;
  }
  return;
}

