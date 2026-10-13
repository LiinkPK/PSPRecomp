/* Entry 0x088F944C | file offset 0x000F6424 | FUN_088f944c | bytes 88 */

void FUN_088f944c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    FUN_088c6fd4(iVar1);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x80;
  } while (iVar2 < 4);
  *(undefined4 *)(param_1 + 0x200) = 0;
  return;
}

