/* Entry 0x088D3A04 | file offset 0x000D09DC | FUN_088d3a04 | bytes 88 */

void FUN_088d3a04(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0xff;
  piVar1 = (int *)(param_1 + 0x3fc);
  do {
    if ((*piVar1 != 0) && (*piVar1 != 0)) {
      FUN_088dab44();
      *piVar1 = 0;
    }
    iVar2 = iVar2 + -1;
    piVar1 = piVar1 + -1;
  } while (-1 < iVar2);
  return;
}

