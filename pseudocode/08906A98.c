/* Entry 0x08906A98 | file offset 0x00103A70 | FUN_08906a98 | bytes 56 */

undefined4 FUN_08906a98(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x2d0);
  uVar1 = 0;
  if (piVar2 != (int *)0x0) {
    uVar1 = (**(code **)(*piVar2 + 0x5c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x58));
  }
  return uVar1;
}

