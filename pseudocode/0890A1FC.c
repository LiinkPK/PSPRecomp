/* Entry 0x0890A1FC | file offset 0x001071D4 | FUN_0890a1fc | bytes 120 */

void FUN_0890a1fc(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_08935490(param_1 + 0x139f8,param_2,6);
  if (iVar1 == 0) {
    piVar2 = *(int **)(param_1 + 0x14c64);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x2c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x28));
    }
    *(undefined4 *)(param_1 + 400) = 2;
  }
  return;
}

