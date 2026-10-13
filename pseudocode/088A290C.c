/* Entry 0x088A290C | file offset 0x0009F8E4 | FUN_088a290c | bytes 152 */

undefined4 FUN_088a290c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_088a0bc0();
  if ((iVar1 != 0) && ((*(uint *)(iVar1 + 8) & 4) != 0)) {
    iVar1 = 0;
    piVar2 = &DAT_09b4cfa0;
    do {
      if ((*piVar2 == param_1) && (piVar2[2] == param_2)) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar1 < 0x40);
  }
  return 1;
}

