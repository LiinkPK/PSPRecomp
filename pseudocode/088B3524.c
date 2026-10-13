/* Entry 0x088B3524 | file offset 0x000B04FC | FUN_088b3524 | bytes 96 */

char * FUN_088b3524(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_089d72e0 != 0) {
    iVar1 = 0;
    puVar2 = DAT_089d72e4;
    if (0 < *(int *)(DAT_089d72e0 + 8)) {
      do {
        if (*(char *)*puVar2 == param_1) {
          return (char *)*puVar2;
        }
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar1 < *(int *)(DAT_089d72e0 + 8));
    }
  }
  return (char *)0x0;
}

