/* Entry 0x0892E5DC | file offset 0x0012B5B4 | FUN_0892e5dc | bytes 108 */

undefined4 FUN_0892e5dc(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xd8) < *(int *)(param_1 + 0xd4)) {
    uVar1 = 1;
  }
  else {
    iVar3 = 0;
    puVar2 = (undefined4 *)(param_1 + 0x48);
    do {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0xffffffff;
      puVar2[3] = 0xffffffff;
      puVar2[4] = 0xffffffff;
      puVar2[5] = 0;
      puVar2[6] = 0;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 7;
    } while (iVar3 < 5);
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    uVar1 = 0;
  }
  return uVar1;
}

