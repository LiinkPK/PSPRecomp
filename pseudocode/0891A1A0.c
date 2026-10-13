/* Entry 0x0891A1A0 | file offset 0x00117178 | FUN_0891a1a0 | bytes 84 */

void FUN_0891a1a0(undefined2 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar3 = param_1;
  do {
    iVar2 = 0;
    puVar1 = puVar3;
    do {
      *puVar1 = 0xffff;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < 6);
    puVar3[6] = 0xffff;
    iVar4 = iVar4 + 1;
    puVar3[7] = 0;
    puVar3 = puVar3 + 8;
  } while (iVar4 < 2);
  *(undefined4 *)(param_1 + 0x10) = 100;
  return;
}

