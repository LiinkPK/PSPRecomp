/* Entry 0x0894349C | file offset 0x00140474 | FUN_0894349c | bytes 60 */

int FUN_0894349c(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(uint *)(*(int *)(iVar1 + 0x18) + 0x10) == (param_2 & 0xfffc0000)) break;
    iVar1 = *(int *)(iVar1 + 0x20);
  }
  return iVar1;
}

