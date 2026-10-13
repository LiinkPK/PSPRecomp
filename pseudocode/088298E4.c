/* Entry 0x088298E4 | file offset 0x000268BC | FUN_088298e4 | bytes 76 */

ushort * FUN_088298e4(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = (int *)(param_1 + 8);
  if (*(uint *)(param_1 + 4) != 0) {
    do {
      if (*(ushort *)(param_1 + *piVar1) == param_2) {
        return (ushort *)(param_1 + *piVar1);
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return (ushort *)0x0;
}

