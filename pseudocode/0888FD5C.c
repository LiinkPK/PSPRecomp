/* Entry 0x0888FD5C | file offset 0x0008CD34 | FUN_0888fd5c | bytes 88 */

void FUN_0888fd5c(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &DAT_09b491e8;
  iVar2 = 0;
  do {
    if (*piVar1 != 0) {
      FUN_088dab44();
      *piVar1 = 0;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 3);
  return;
}

