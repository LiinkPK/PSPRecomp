/* Entry 0x08872E50 | file offset 0x0006FE28 | FUN_08872e50 | bytes 184 */

void FUN_08872e50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = 0;
  iVar3 = param_1 + 0xc0;
  puVar4 = (undefined4 *)(&DAT_089d5ff8 + param_2 * 8);
  iVar2 = param_1;
  do {
    FUN_08871b40(iVar3);
    iVar1 = iVar1 + 1;
    *(undefined4 *)(iVar2 + 0x10c) = *puVar4;
    iVar2 = iVar2 + 0x50;
    iVar3 = iVar3 + 0x50;
    puVar4 = puVar4 + 1;
  } while (iVar1 < 2);
  *(int *)(param_1 + 0x240) = param_2;
  return;
}

