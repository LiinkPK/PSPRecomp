/* Entry 0x0881D478 | file offset 0x0001A450 | FUN_0881d478 | bytes 160 */

void FUN_0881d478(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_08893a18(DAT_089d6ac8);
  piVar2 = *(int **)(param_1 + 0x110);
  while (piVar2 != (int *)0x0) {
    if (piVar2[5] == 0) {
      piVar2 = (int *)*piVar2;
    }
    else {
      FUN_08815c78(piVar2[5],uVar1);
      piVar2 = (int *)*piVar2;
    }
  }
  return;
}

