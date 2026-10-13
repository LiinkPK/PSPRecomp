/* Entry 0x088F520C | file offset 0x000F21E4 | FUN_088f520c | bytes 96 */

void FUN_088f520c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    FUN_088f4fc8(iVar1);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x10a8;
  } while (iVar2 < 0x19);
  *(undefined4 *)(param_1 + 0x1a068) = 0;
  return;
}

