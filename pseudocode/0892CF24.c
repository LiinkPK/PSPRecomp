/* Entry 0x0892CF24 | file offset 0x00129EFC | FUN_0892cf24 | bytes 104 */

void FUN_0892cf24(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x28) == 1) {
    FUN_088d3f00(0,param_1 + 0x30,&DAT_089ced98);
    iVar1 = 0;
    param_1 = param_1 + 0x38;
    do {
      FUN_0892c7c8(param_1);
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 0x28;
    } while (iVar1 < 2);
  }
  return;
}

