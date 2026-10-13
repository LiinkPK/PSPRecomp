/* Entry 0x088AA30C | file offset 0x000A72E4 | FUN_088aa30c | bytes 68 */

undefined4 FUN_088aa30c(int param_1,int param_2)

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
    if (*(int *)(iVar1 + 0xd0) == param_2) {
      return 1;
    }
  }
  return 0;
}

