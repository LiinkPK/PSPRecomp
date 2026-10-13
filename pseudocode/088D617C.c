/* Entry 0x088D617C | file offset 0x000D3154 | FUN_088d617c | bytes 112 */

void FUN_088d617c(int param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = &DAT_089d7be0;
  iVar2 = DAT_089d7be0;
  while( true ) {
    if (iVar2 == -1) {
      return;
    }
    if (iVar2 == param_1) break;
    piVar3 = piVar3 + 5;
    iVar2 = *piVar3;
  }
  puVar1 = (uint *)(DAT_089d726c + ((uint)piVar3[4] >> 5) * 4);
  *puVar1 = *puVar1 | 1 << (piVar3[4] & 0x1fU);
  return;
}

