/* Entry 0x088D60E4 | file offset 0x000D30BC | FUN_088d60e4 | bytes 152 */

bool FUN_088d60e4(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &DAT_089d7be0;
  iVar1 = DAT_089d7be0;
  while( true ) {
    if (iVar1 == -1) {
      return false;
    }
    if ((iVar1 == param_1) && (DAT_089d5f1f == '\0')) break;
    piVar2 = piVar2 + 5;
    iVar1 = *piVar2;
  }
  return (*(uint *)(DAT_089d726c + ((uint)piVar2[4] >> 5) * 4) & 1 << (piVar2[4] & 0x1fU)) == 0;
}

