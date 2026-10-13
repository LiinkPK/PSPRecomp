/* Entry 0x08893558 | file offset 0x00090530 | FUN_08893558 | bytes 116 */

void FUN_08893558(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = DAT_089d6ac8;
  if (*(int *)(DAT_089d6ac8 + 0x74) != 0) {
    piVar2 = (int *)FUN_08899300();
    if ((*piVar2 != 0) && (iVar3 = FUN_08899944(), iVar3 == 0)) {
      FUN_08899300();
    }
    FUN_088922c8(iVar1);
    FUN_08893dac(iVar1);
  }
  return;
}

