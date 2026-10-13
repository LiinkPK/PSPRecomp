/* Entry 0x088A6478 | file offset 0x000A3450 | FUN_088a6478 | bytes 100 */

void FUN_088a6478(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (iVar1 == 0) {
      iVar1 = *param_1;
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x40);
    }
    if (iVar1 == 0) break;
    if (param_2 == *(int *)(iVar1 + 0x10)) {
      FUN_088a4c10(iVar1,param_3,param_4);
      return;
    }
  }
  return;
}

