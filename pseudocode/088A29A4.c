/* Entry 0x088A29A4 | file offset 0x0009F97C | FUN_088a29a4 | bytes 152 */

void FUN_088a29a4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_088a0bc0();
  if ((iVar1 != 0) && ((*(uint *)(iVar1 + 8) & 4) != 0)) {
    iVar3 = 0;
    piVar2 = &DAT_09b4cfa0;
    do {
      if (*piVar2 == -1) {
        *piVar2 = param_1;
        iVar1 = *(int *)(iVar1 + 0x14);
        piVar2[2] = param_2;
        piVar2[1] = iVar1;
        return;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar3 < 0x40);
  }
  return;
}

