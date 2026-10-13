/* Entry 0x0891A77C | file offset 0x00117754 | FUN_0891a77c | bytes 104 */

void FUN_0891a77c(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1;
  do {
    *(undefined1 *)(param_1 + iVar3) = 0;
    ((undefined1 *)(param_1 + iVar3))[5] = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0xffffffff;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 5);
  iVar2 = 0;
  puVar1 = (undefined1 *)(param_1 + 0x20);
  do {
    puVar1[3] = 0;
    *puVar1 = 0xff;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = puVar1[3] | 1;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 4;
  } while (iVar2 < 0x40);
  return;
}

