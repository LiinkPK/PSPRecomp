/* Entry 0x088B2410 | file offset 0x000AF3E8 | FUN_088b2410 | bytes 168 */

int FUN_088b2410(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  if (0 < *(int *)(DAT_089d72a8 + 0xc)) {
    do {
      iVar2 = DAT_089d72b4 + iVar3;
      iVar1 = FUN_0893585c(iVar2,param_1);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar4 < *(int *)(DAT_089d72a8 + 0xc));
  }
  return 0;
}

