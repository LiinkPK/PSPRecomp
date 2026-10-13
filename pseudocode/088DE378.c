/* Entry 0x088DE378 | file offset 0x000DB350 | FUN_088de378 | bytes 136 */

void FUN_088de378(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_088df54c(param_1 + 0x80);
  iVar2 = 0;
  iVar1 = param_1 + 0x48;
  do {
    FUN_088ded28(iVar1);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x1c;
  } while (iVar2 < 2);
  FUN_088de9d8(param_1 + 0x30);
  FUN_088df100(param_1 + 0x14);
  if (*(int *)(param_1 + 4) != 0) {
    FUN_088dab44();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_088de360(param_1);
  return;
}

