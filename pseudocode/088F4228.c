/* Entry 0x088F4228 | file offset 0x000F1200 | FUN_088f4228 | bytes 128 */

undefined4 FUN_088f4228(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  while ((iVar2 == 0x17 || (iVar1 = FUN_088f414c(param_1,iVar2,0), iVar1 == 0))) {
    iVar2 = iVar2 + 1;
    if (0x20 < iVar2) {
      return 0;
    }
  }
  return 1;
}

