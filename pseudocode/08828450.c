/* Entry 0x08828450 | file offset 0x00025428 | FUN_08828450 | bytes 120 */

void FUN_08828450(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = &DAT_09afb850;
  puVar2 = &DAT_09afb870;
  puVar1 = &DAT_09afb880;
  iVar4 = 0;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 2;
  } while (iVar4 < 4);
  iVar4 = 0;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    iVar4 = iVar4 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar4 < 2);
  iVar4 = 0;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    iVar4 = iVar4 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar4 < 2);
  return;
}

