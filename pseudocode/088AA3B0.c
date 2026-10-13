/* Entry 0x088AA3B0 | file offset 0x000A7388 | FUN_088aa3b0 | bytes 132 */

void FUN_088aa3b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x1c);
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x27c);
    }
    if (iVar1 == 0) break;
    FUN_088a7118(iVar1,param_2,param_3,param_4);
  }
  return;
}

