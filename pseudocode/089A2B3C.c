/* Entry 0x089A2B3C | file offset 0x0019FB14 | FUN_089a2b3c | bytes 196 */

void FUN_089a2b3c(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = &DAT_09af7140;
  iVar2 = 0;
  piVar1 = &DAT_09af7168;
  do {
    if (*piVar1 != 0) {
      (&DAT_09af7140)[DAT_09af7130 * 3] = DAT_09af7134;
      if (*piVar3 == 0) {
        *piVar1 = 0;
      }
      else {
        FUN_089a04f4(iVar2,*piVar3);
        *piVar1 = 0;
      }
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 3;
  } while (iVar2 < 4);
  return;
}

