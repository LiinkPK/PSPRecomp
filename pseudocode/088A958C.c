/* Entry 0x088A958C | file offset 0x000A6564 | FUN_088a958c | bytes 88 */

void FUN_088a958c(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (iVar1 == 0) {
      iVar1 = *param_1;
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x34);
    }
    if (iVar1 == 0) break;
    FUN_088aa1a0(iVar1,param_2,0xffffffff);
  }
  return;
}

