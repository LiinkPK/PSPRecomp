/* Entry 0x08928470 | file offset 0x00125448 | FUN_08928470 | bytes 156 */

void FUN_08928470(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_08935490(param_2,"ORGQUEST",8);
  if (iVar1 == 0) {
    if (*(int *)(param_2 + 8) == 0x20101007) {
      param_1[1] = 0xffffffff;
      *param_1 = 0xffffffff;
    }
    else {
      *param_1 = 0xa8;
      param_1[1] = 0xffffffff;
    }
  }
  else {
    *param_1 = 0xa8;
    param_1[1] = 0xffffffff;
  }
  return;
}

